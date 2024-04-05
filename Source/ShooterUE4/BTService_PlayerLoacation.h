// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_PlayerLoacation.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERUE4_API UBTService_PlayerLoacation : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTService_PlayerLoacation();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
