//Copyright Lewis Herbert, created on behalf of U24 Solutions.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "Characters/Components/BaseAbilitySystemComponent.h"
#include "GameplayEffectTypes.h"
#include "GameplayAbilitySpec.h"
#include "BaseCharacter.generated.h"

UCLASS()
class PROJECTMOBAGAS_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class UBaseAbilitySystemComponent* AbilitySystemComponent;

	//UPROPERTY()
	//	class UBaseAttributeSet* Attributes;

public:
	// Sets default values for this character's properties
	ABaseCharacter();

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
