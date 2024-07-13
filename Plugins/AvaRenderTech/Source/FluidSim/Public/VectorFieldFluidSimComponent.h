#pragma once
#include "CoreMinimal.h"
#include "VectorFieldFluidSim.h"
#include "Components/VectorFieldComponent.h"
#include "VectorFieldFluidSimComponent.generated.h"


UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVectorFieldFluidSimComponent : public UVectorFieldComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVectorFieldFluidSim* FluidSimVectorField;
    
    FLUIDSIM_API UVectorFieldFluidSimComponent(const FObjectInitializer& ObjectInitializer);
    
    virtual void SetIntensity(float NewIntensity) override;

	//~ Begin UPrimitiveComponent Interface.
	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;
	virtual void GetUsedMaterials(TArray<UMaterialInterface*>& OutMaterials, bool bGetDebugMaterials) const override;
	//~ End UPrimitiveComponent Interface.

	//~ Begin UActorComponent Interface.
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
	virtual void SendRenderTransform_Concurrent() override;
	//~ End UActorComponent Interface.

	//~ Begin UObject Interface.
	virtual void PostInterpChange(FProperty* PropertyThatChanged) override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR
};

