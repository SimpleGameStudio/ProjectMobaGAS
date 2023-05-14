// Copyright Lewis Herbert, created on behalf of U24 Solutions

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "ProjectMobaGAS/ProjectMobaGAS.h"
#include "BaseGameplayAbility.generated.h"


/**
 * 
 */
UCLASS()
class PROJECTMOBAGAS_API UBaseGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
	//UBaseGameplayAbility();

public:

#pragma region ability input

	/**
	*  Properties for ability inputs
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
		EAbilityInputID AbilityInputID = EAbilityInputID::None;

#pragma endregion

public:


};
