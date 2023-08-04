// Fill out your copyright notice in the Description page of Project Settings.

#include "AsyncNodeTest.h"

#include "MyCharacter.h"

UAsyncNodeTest* UAsyncNodeTest::WaitUntilKingMustDie(AMyCharacter* Target)
{
	UAsyncNodeTest* BlueprintNode = NewObject<UAsyncNodeTest>();
	BlueprintNode->TargetCharacter = Target;
	return BlueprintNode;
}
void UAsyncNodeTest::Activate()
{
	Super::Activate();
	if (IsValid(TargetCharacter))
	{
		TargetCharacter->Delegate_AllMustDie.AddUObject(
			this, &ThisClass::ExecuteWhenMustDie);
	}
}
void UAsyncNodeTest::ExecuteWhenMustDie(bool bMustDie)
{
	KingMustDie.Broadcast(bMustDie);
}