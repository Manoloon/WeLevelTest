// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"
DECLARE_MULTICAST_DELEGATE_OneParam(FAllMustDie, bool /*MustDie*/);

UCLASS(Abstract)
class WELEVELTEST_API AMyCharacter : public ACharacter {
  GENERATED_BODY()

public:
  FAllMustDie Delegate_AllMustDie;

protected:
  UFUNCTION(BlueprintCallable)
  void SetAllMustDie();

private:
  bool AllMustDie = false;
};
