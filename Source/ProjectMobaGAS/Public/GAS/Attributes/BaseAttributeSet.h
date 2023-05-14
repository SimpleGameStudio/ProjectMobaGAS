// Copyright Lewis Herbert, created on behalf of U24 Solutions

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BaseAttributeSet.generated.h"



/**
 * Define the default attributes for our abilities
 */
UCLASS()
class PROJECTMOBAGAS_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:

#pragma region attributes

		UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Health)
		FGameplayAttributeData Health;

		UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Stamina)
			FGameplayAttributeData Stamina;

		UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_AttackDamage)
			FGameplayAttributeData AttackDamage;

#pragma endregion

public:

	UBaseAttributeSet();

	/**
	*  We need to replicate our attributes so server/client are updated when a change happens
	*/
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
		virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);
	UFUNCTION()
		virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);
	UFUNCTION()
		virtual void OnRep_AttackDamage(const FGameplayAttributeData& OldAttackDamage);
};
