// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletBase.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;
class USphereComponent;


UCLASS()
class UNITSMANAGMENT_API ABulletBase : public AActor
{
	GENERATED_BODY()

	
public:
	// Sets default values for this actor's properties
	ABulletBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bullet", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bullet", meta = (AllowPrivateAccess = "true"))
		UProjectileMovementComponent* ProjectileMovementComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bullet", meta = (AllowPrivateAccess = "true"))
		USphereComponent* HitSphere;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};