#pragma once

namespace AsaApi::detail
{
inline bool ReadLegacyBoolean(void* parent, const std::string& name, bool& value)
{
    if (name == "UNavMovementComponent.bUpdateNavAgentWithOwnersCollision") {
        const auto properties = GetNativePointerField<void*>(parent, "UNavMovementComponent.NavMovementProperties");
        value = *GetNativePointerField<bool*>(properties, "FNavMovementProperties.bUpdateNavAgentWithOwnersCollision");
        return true;
    }
    if (name == "UNavMovementComponent.bUseAccelerationForPaths") {
        const auto properties = GetNativePointerField<void*>(parent, "UNavMovementComponent.NavMovementProperties");
        value = *GetNativePointerField<bool*>(properties, "FNavMovementProperties.bUseAccelerationForPaths");
        return true;
    }
    if (name == "UNavMovementComponent.bUseFixedBrakingDistanceForPaths") {
        const auto properties = GetNativePointerField<void*>(parent, "UNavMovementComponent.NavMovementProperties");
        value = *GetNativePointerField<bool*>(properties, "FNavMovementProperties.bUseFixedBrakingDistanceForPaths");
        return true;
    }
    if (name == "UNavMovementComponent.bStopMovementAbortPaths") {
        const auto properties = GetNativePointerField<void*>(parent, "UNavMovementComponent.NavMovementProperties");
        value = *GetNativePointerField<bool*>(properties, "FNavMovementProperties.bStopMovementAbortPaths");
        return true;
    }
    if (name == "UStaticMeshComponent.bDisallowMeshPaintPerInstance") {
        value = !GetNativeBitField<bool, unsigned __int32>(parent, "UStaticMeshComponent.bEnableVertexColorMeshPainting");
        return true;
    }
    return false;
}
inline bool WriteLegacyBoolean(void* parent, const std::string& name, bool value)
{
    if (name == "UNavMovementComponent.bUpdateNavAgentWithOwnersCollision") {
        const auto properties = GetNativePointerField<void*>(parent, "UNavMovementComponent.NavMovementProperties");
        *GetNativePointerField<bool*>(properties, "FNavMovementProperties.bUpdateNavAgentWithOwnersCollision") = value;
        return true;
    }
    if (name == "UNavMovementComponent.bUseAccelerationForPaths") {
        const auto properties = GetNativePointerField<void*>(parent, "UNavMovementComponent.NavMovementProperties");
        *GetNativePointerField<bool*>(properties, "FNavMovementProperties.bUseAccelerationForPaths") = value;
        return true;
    }
    if (name == "UNavMovementComponent.bUseFixedBrakingDistanceForPaths") {
        const auto properties = GetNativePointerField<void*>(parent, "UNavMovementComponent.NavMovementProperties");
        *GetNativePointerField<bool*>(properties, "FNavMovementProperties.bUseFixedBrakingDistanceForPaths") = value;
        return true;
    }
    if (name == "UNavMovementComponent.bStopMovementAbortPaths") {
        const auto properties = GetNativePointerField<void*>(parent, "UNavMovementComponent.NavMovementProperties");
        *GetNativePointerField<bool*>(properties, "FNavMovementProperties.bStopMovementAbortPaths") = value;
        return true;
    }
    if (name == "UStaticMeshComponent.bDisallowMeshPaintPerInstance") {
        SetNativeBitField<bool, unsigned __int32>(parent, "UStaticMeshComponent.bEnableVertexColorMeshPainting", !value);
        return true;
    }
    return false;
}
}
