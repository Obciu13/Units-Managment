// Fill out your copyright notice in the Description page of Project Settings.

#include "UnitBase.h"
#include "EnemyBase.h"
#include "Components/InputComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SphereComponent.h"

// Sets default values
AUnitBase::AUnitBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	UnitMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UnitMesh"));
	UnitMesh->AttachToComponent(Cast<USceneComponent>(GetCapsuleComponent()), FAttachmentTransformRules::KeepRelativeTransform);


	AttackRangeCollider = CreateDefaultSubobject<USphereComponent>(TEXT("AttackRange"));
	AttackRangeCollider->AttachToComponent(Cast<USceneComponent>(GetCapsuleComponent()), FAttachmentTransformRules::KeepRelativeTransform);

}

// Called when the game starts or when spawned
void AUnitBase::BeginPlay()
{
	Super::BeginPlay();

	AttackRangeCollider->OnComponentBeginOverlap.AddDynamic(this, &AUnitBase::OnActorInRange);
	AttackRangeCollider->OnComponentEndOverlap.AddDynamic(this, &AUnitBase::OnActorLeaveRange);
}

// Called every frame
void AUnitBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AUnitBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AUnitBase::MoveUp(float Value)
{
	if (Value != 0.0)
	{
		FVector Movement = FVector(Speed * Value, 0.0, 0.0);
		SetActorLocation(GetActorLocation() + Movement);
	}
}

void AUnitBase::MoveRight(float Value)
{
	if (Value != 0.0)
	{
		FVector Movement = FVector(0.0, Speed * Value, 0.0);
		SetActorLocation(GetActorLocation() + Movement);
	}
}


// Function that triggers when any other actor comes into range of unit. If it is Enemy, it is set as a target.
void AUnitBase::OnActorInRange(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(AEnemyBase::StaticClass()))
	{
		if (!bIsAttacking && !bWasColliderDisabled)
		{
			TargetEnemy = Cast<AEnemyBase>(OtherActor);
			StartAttacking();
		}
	}
}

// Function that triggers when any other actor leaves range of unit.
void AUnitBase::OnActorLeaveRange(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->IsA(AEnemyBase::StaticClass()))
	{
		if (TargetEnemy && !bWasColliderDisabled)
		{
			if (OtherActor == TargetEnemy)
			{
				TargetEnemy = nullptr;
				bIsAttacking = false;
				StopAttacking();
			}
		}
	}
}

// Enable queries for AttackRangeCollider.
void AUnitBase::EnableAttackCollider()
{
	bWasColliderDisabled = false;
	AttackRangeCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	
}

// Disable queries for AttackRangeCollider, to not be selected by 
void AUnitBase::DisableAttackCollider()
{
	bWasColliderDisabled = true;
	AttackRangeCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AUnitBase::StartAttacking()
{
	TargetEnemy->OnGetAttacked(this);
	if (TargetEnemy)
	{
		bIsAttacking = true;
		UE_LOG(LogTemp, Log, TEXT("%s attacks the enemy %s"), *GetName(), *TargetEnemy->GetName());
		GetWorldTimerManager().SetTimer(AttackHandle, this, &AUnitBase::AttackEnemy, 1, true);
		AttackEnemy();
	}
}

void AUnitBase::StopAttacking()
{
	GetWorldTimerManager().ClearTimer(AttackHandle);
}

void AUnitBase::AttackEnemy()
{
	FVector Forward = TargetEnemy->GetActorLocation() - GetActorLocation();
	FRotator Rot = UKismetMathLibrary::MakeRotFromXZ(Forward, GetActorUpVector());
	SetActorRotation(FQuat(Rot));
	
	AActor* BulletOwner = this;
	const FTransform SpawnTransform = this->GetActorTransform();

	FActorSpawnParameters Params;
	Params.Owner = BulletOwner;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	GetWorld()->SpawnActor<AActor>(BulletClass, SpawnTransform, Params);

}



