// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BulletBase.h"
#include "UnitBase.generated.h"

class USphereComponent;
class AEnemyBase;

UCLASS()
class UNITSMANAGMENT_API AUnitBase : public ACharacter
{
	GENERATED_BODY()

	// Body of the Unit
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Unit", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* UnitMesh;

	// Collider that checks if Enemy get into Attack Range
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Unit", meta = (AllowPrivateAccess = "true"))
		USphereComponent* AttackRangeCollider;

	
public:
	AUnitBase();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bullets")
		TSubclassOf<ABulletBase> BulletClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Unit")
		float Speed;

private:
	
	// Pointer to Enemy that is attacked by Unit
	AEnemyBase* TargetEnemy;

	bool bIsAttacking;


	// Flag that indicates if Unit shouldn't call AttackEnemy after disabling AttackRangeCollider
	bool bWasColliderDisabled;


	// Handle for Attacking Timer
	FTimerHandle AttackHandle;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
		void MoveUp(float Value);

	UFUNCTION(BlueprintCallable)
		void MoveRight(float Value);


	// Function that triggers when any other actor comes into range of unit. If it is Enemy, it is set as a target.
	UFUNCTION()
		void OnActorInRange(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	// Function that triggers when any other actor leaves range of unit.
	UFUNCTION()
		void OnActorLeaveRange(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	// Enable queries for AttackRangeCollider.
	UFUNCTION()
		void EnableAttackCollider();


	// Disable queries for AttackRangeCollider.
	UFUNCTION()
		void DisableAttackCollider();


	UFUNCTION()
		void StartAttacking();

	UFUNCTION()
		void StopAttacking();

	UFUNCTION()
		void AttackEnemy();


	// Event implemented in Blueprints, Destroying Unit and removing it from SelectedUnits array
	UFUNCTION(BlueprintImplementableEvent)
		void DestroyUnit();

};
