// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "UnitBase.h"

// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyMesh"));
	EnemyMesh->AttachToComponent(Cast<USceneComponent>(GetCapsuleComponent()), FAttachmentTransformRules::KeepRelativeTransform);

	AttackRangeCollider = CreateDefaultSubobject<USphereComponent>(TEXT("AttackRange"));
	AttackRangeCollider->AttachToComponent(Cast<USceneComponent>(GetCapsuleComponent()), FAttachmentTransformRules::KeepRelativeTransform);

}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();

	AttackRangeCollider->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBase::OnOverlap);
	
}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


// Set First Unit that attacked Enemy as a TargetUnit
void AEnemyBase::OnGetAttacked_Implementation(AUnitBase* AttackingUnit)
{
	if (!TargetUnit)
	{
		TargetUnit = AttackingUnit;
	}
}


// Check when TargetUnit gets into range, and then destroy it
void AEnemyBase::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (TargetUnit)
	{
		if (OtherActor == TargetUnit)
		{
			TargetUnit->DestroyUnit();
			Destroy();
		}
	}
}

