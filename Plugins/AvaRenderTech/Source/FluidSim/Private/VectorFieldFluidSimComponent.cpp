#include "VectorFieldFluidSimComponent.h"
#include "VectorFieldFluidSim.h"

UVectorFieldFluidSimComponent::UVectorFieldFluidSimComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
    this->FluidSimVectorField = CreateDefaultSubobject<UVectorFieldFluidSim>(TEXT("FluidSimVectorField0"));
}

void UVectorFieldFluidSimComponent::SetIntensity(float NewIntensity)
{
    Intensity = NewIntensity;
}

FPrimitiveSceneProxy* UVectorFieldFluidSimComponent::CreateSceneProxy()
{
    return nullptr;
}

FBoxSphereBounds UVectorFieldFluidSimComponent::CalcBounds(const FTransform& LocalToWorld) const
{
    return FBoxSphereBounds();
}

void UVectorFieldFluidSimComponent::GetUsedMaterials(TArray<UMaterialInterface*>& OutMaterials, bool bGetDebugMaterials) const
{
}

void UVectorFieldFluidSimComponent::OnRegister()
{
}

void UVectorFieldFluidSimComponent::OnUnregister()
{
}

void UVectorFieldFluidSimComponent::SendRenderTransform_Concurrent()
{
}

void UVectorFieldFluidSimComponent::PostInterpChange(FProperty* PropertyThatChanged)
{
}

#if WITH_EDITOR
void UVectorFieldFluidSimComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
}
#endif // WITH_EDITOR
