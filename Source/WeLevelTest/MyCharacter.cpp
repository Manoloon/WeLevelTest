// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

#include "AsyncNodeTest.h"

void AMyCharacter::SetAllMustDie() {
	if (!Delegate_AllMustDie.IsBound())
	{
		return;
	}
	AllMustDie = true;
	Delegate_AllMustDie.Broadcast(AllMustDie);
}
