// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletBase.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "EnemyBase.h"



// Sets default values
ABulletBase::ABulletBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Hit Sphere
	HitSphere = CreateDefaultSubobject<USphereComponent>(TEXT("HitSphere"));
	SetRootComponent(HitSphere);
	HitSphere->InitSphereRadius(12.0);
	HitSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	HitSphere->SetNotifyRigidBodyCollision(true);


	//Mesh Component
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComp->SetupAttachment(HitSphere);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if (GetOwner())
	{
		MeshComp->IgnoreActorWhenMoving(GetOwner(), true);

		if (GetOwner()->GetOwner())
		{
			MeshComp->IgnoreActorWhenMoving(GetOwner()->GetOwner(), true);
		}
	}

	ProjectileMovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovementComp->InitialSpeed = 3000;
	ProjectileMovementComp->Velocity = FVector(1.0, 0.0, 0.0);

}

// Called when the game starts or when spawned
void ABulletBase::BeginPlay()
{
	Super::BeginPlay();
	HitSphere->OnComponentBeginOverlap.AddDynamic(this, &ABulletBase::OnOverlap);

}

// Called every frame
void ABulletBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ABulletBase::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(AEnemyBase::StaticClass()))
	{
		Destroy();
	}
}
