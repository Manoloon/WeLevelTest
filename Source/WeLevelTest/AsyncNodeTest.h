// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncNodeTest.generated.h"

/*
 * Develop a custom async node in C++ for Unreal Engine 5 that detects when an
 * Actor's boolean value has changed, and subsequently destroys the listening
 * Actor. The Actors can be represented as Cubes, Spheres, or any other shape as
 * an example. Utilize event dispatchers to detect the boolean value change
 * without relying on tick events or timers.
 */

class AMyCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKingMustDie, bool, bMustDieNow);

UCLASS()
class WELEVELTEST_API UAsyncNodeTest : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
  
public:
  UFUNCTION(BlueprintCallable,meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
  static UAsyncNodeTest* WaitUntilKingMustDie(AMyCharacter* Target);

  virtual void Activate() override;
  
private:
  UPROPERTY(BlueprintAssignable)
  FKingMustDie KingMustDie;
  UPROPERTY()
  AMyCharacter* TargetCharacter;
  bool MustDie = false;
  void ExecuteWhenMustDie(bool bMustDie);
};
