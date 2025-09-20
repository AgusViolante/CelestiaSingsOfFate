// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CelestiaSingsOfFateCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCelestiaSingsOfFateCharacter() {}

// ********** Begin Cross Module References ********************************************************
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_ACelestiaSingsOfFateCharacter();
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_ACelestiaSingsOfFateCharacter_NoRegister();
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UI_PickUp_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CelestiaSingsOfFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACelestiaSingsOfFateCharacter Function DoJumpEnd *************************
struct Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACelestiaSingsOfFateCharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACelestiaSingsOfFateCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class ACelestiaSingsOfFateCharacter Function DoJumpEnd ***************************

// ********** Begin Class ACelestiaSingsOfFateCharacter Function DoJumpStart ***********************
struct Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACelestiaSingsOfFateCharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACelestiaSingsOfFateCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class ACelestiaSingsOfFateCharacter Function DoJumpStart *************************

// ********** Begin Class ACelestiaSingsOfFateCharacter Function DoLook ****************************
struct Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics
{
	struct CelestiaSingsOfFateCharacter_eventDoLook_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles look inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles look inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CelestiaSingsOfFateCharacter_eventDoLook_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CelestiaSingsOfFateCharacter_eventDoLook_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACelestiaSingsOfFateCharacter, nullptr, "DoLook", Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::CelestiaSingsOfFateCharacter_eventDoLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::CelestiaSingsOfFateCharacter_eventDoLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACelestiaSingsOfFateCharacter::execDoLook)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLook(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class ACelestiaSingsOfFateCharacter Function DoLook ******************************

// ********** Begin Class ACelestiaSingsOfFateCharacter Function DoMove ****************************
struct Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics
{
	struct CelestiaSingsOfFateCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CelestiaSingsOfFateCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CelestiaSingsOfFateCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACelestiaSingsOfFateCharacter, nullptr, "DoMove", Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::CelestiaSingsOfFateCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::CelestiaSingsOfFateCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACelestiaSingsOfFateCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class ACelestiaSingsOfFateCharacter Function DoMove ******************************

// ********** Begin Class ACelestiaSingsOfFateCharacter ********************************************
void ACelestiaSingsOfFateCharacter::StaticRegisterNativesACelestiaSingsOfFateCharacter()
{
	UClass* Class = ACelestiaSingsOfFateCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoJumpEnd", &ACelestiaSingsOfFateCharacter::execDoJumpEnd },
		{ "DoJumpStart", &ACelestiaSingsOfFateCharacter::execDoJumpStart },
		{ "DoLook", &ACelestiaSingsOfFateCharacter::execDoLook },
		{ "DoMove", &ACelestiaSingsOfFateCharacter::execDoMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACelestiaSingsOfFateCharacter;
UClass* ACelestiaSingsOfFateCharacter::GetPrivateStaticClass()
{
	using TClass = ACelestiaSingsOfFateCharacter;
	if (!Z_Registration_Info_UClass_ACelestiaSingsOfFateCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CelestiaSingsOfFateCharacter"),
			Z_Registration_Info_UClass_ACelestiaSingsOfFateCharacter.InnerSingleton,
			StaticRegisterNativesACelestiaSingsOfFateCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACelestiaSingsOfFateCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ACelestiaSingsOfFateCharacter_NoRegister()
{
	return ACelestiaSingsOfFateCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple player-controllable third person character\n *  Implements a controllable orbiting camera\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CelestiaSingsOfFateCharacter.h" },
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple player-controllable third person character\nImplements a controllable orbiting camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CelestiaSingsOfFateCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpEnd, "DoJumpEnd" }, // 2543782528
		{ &Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoJumpStart, "DoJumpStart" }, // 3981802172
		{ &Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoLook, "DoLook" }, // 3592227439
		{ &Z_Construct_UFunction_ACelestiaSingsOfFateCharacter_DoMove, "DoMove" }, // 1073505571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACelestiaSingsOfFateCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestiaSingsOfFateCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestiaSingsOfFateCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestiaSingsOfFateCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestiaSingsOfFateCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestiaSingsOfFateCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestiaSingsOfFateCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestiaSingsOfFateCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_InventoryAction = { "InventoryAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestiaSingsOfFateCharacter, InventoryAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryAction_MetaData), NewProp_InventoryAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_BaseMappingContext = { "BaseMappingContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACelestiaSingsOfFateCharacter, BaseMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMappingContext_MetaData), NewProp_BaseMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_MouseLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_InventoryAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::NewProp_BaseMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CelestiaSingsOfFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UI_PickUp_NoRegister, (int32)VTABLE_OFFSET(ACelestiaSingsOfFateCharacter, II_PickUp), false },  // 2987182483
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::ClassParams = {
	&ACelestiaSingsOfFateCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACelestiaSingsOfFateCharacter()
{
	if (!Z_Registration_Info_UClass_ACelestiaSingsOfFateCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACelestiaSingsOfFateCharacter.OuterSingleton, Z_Construct_UClass_ACelestiaSingsOfFateCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACelestiaSingsOfFateCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACelestiaSingsOfFateCharacter);
ACelestiaSingsOfFateCharacter::~ACelestiaSingsOfFateCharacter() {}
// ********** End Class ACelestiaSingsOfFateCharacter **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_CelestiaSingsOfFateCharacter_h__Script_CelestiaSingsOfFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACelestiaSingsOfFateCharacter, ACelestiaSingsOfFateCharacter::StaticClass, TEXT("ACelestiaSingsOfFateCharacter"), &Z_Registration_Info_UClass_ACelestiaSingsOfFateCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACelestiaSingsOfFateCharacter), 695946557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_CelestiaSingsOfFateCharacter_h__Script_CelestiaSingsOfFate_251607045(TEXT("/Script/CelestiaSingsOfFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_CelestiaSingsOfFateCharacter_h__Script_CelestiaSingsOfFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_CelestiaSingsOfFateCharacter_h__Script_CelestiaSingsOfFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
