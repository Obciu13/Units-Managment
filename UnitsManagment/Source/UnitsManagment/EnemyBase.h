// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyBase.generated.h"

class AUnitBase;
class USphereComponent;


UCLASS()
class UNITSMANAGMENT_API AEnemyBase : public ACharacter
{
	GENERATED_BODY()

		// Body of the Enemy
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* EnemyMesh;

		UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Enemy", meta = (AllowPrivateAccess = "true"))
		USphereComponent* AttackRangeCollider;

public:
	// Sets default values for this character's properties
	AEnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	// Pointer to Unit that should be attacked by Enemy
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enemy")
		AUnitBase* TargetUnit;


	// Set First Unit that attacked Enemy as a TargetUnit
	UFUNCTION(BlueprintNativeEvent)
		void OnGetAttacked(AUnitBase* UnitAttacking);


	// Check when TargetUnit gets into range, and then destroy it
	UFUNCTION()
		void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
