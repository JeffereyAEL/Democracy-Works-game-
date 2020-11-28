// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A_NationState.generated.h"

UCLASS()
class INFORMATION_WARS_API AA_NationState : public AActor
{
	GENERATED_BODY()

		// ==============================
		// ===== DEFINES_/_TYPEDEFS =====
		// ==============================

		// ======================================
		// ===== FRIEND_FUNCTIONS_/_CLASSES =====
		// ======================================

		// ========================
		// ===== ENUM_CLASSES =====
		// ========================
private:
protected:
public:
	// ==========================
	// ===== NESTED_CLASSES =====
	// ==========================
private:
protected:
public:
	// ======================
	// ===== ATTRIBUTES =====
	// ======================
private:
protected:
public:
	// ======================================
	// ===== CONSTRUCTORS_/_DESTRUCTORS =====
	// ======================================
private:
protected:
public:
	// Sets default values for this actor's properties
	ANationState();

	// =============================
	// ===== GETTERS_/_SETTERS =====
	// =============================
private:
protected:
public:
	// ===================
	// ===== METHODS =====
	// ===================
private:
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
