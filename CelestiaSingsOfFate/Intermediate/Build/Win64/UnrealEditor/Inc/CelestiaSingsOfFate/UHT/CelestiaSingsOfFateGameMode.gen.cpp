// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CelestiaSingsOfFateGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCelestiaSingsOfFateGameMode() {}

// ********** Begin Cross Module References ********************************************************
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_ACelestiaSingsOfFateGameMode();
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_ACelestiaSingsOfFateGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CelestiaSingsOfFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACelestiaSingsOfFateGameMode *********************************************
void ACelestiaSingsOfFateGameMode::StaticRegisterNativesACelestiaSingsOfFateGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACelestiaSingsOfFateGameMode;
UClass* ACelestiaSingsOfFateGameMode::GetPrivateStaticClass()
{
	using TClass = ACelestiaSingsOfFateGameMode;
	if (!Z_Registration_Info_UClass_ACelestiaSingsOfFateGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CelestiaSingsOfFateGameMode"),
			Z_Registration_Info_UClass_ACelestiaSingsOfFateGameMode.InnerSingleton,
			StaticRegisterNativesACelestiaSingsOfFateGameMode,
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
	return Z_Registration_Info_UClass_ACelestiaSingsOfFateGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACelestiaSingsOfFateGameMode_NoRegister()
{
	return ACelestiaSingsOfFateGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACelestiaSingsOfFateGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CelestiaSingsOfFateGameMode.h" },
		{ "ModuleRelativePath", "CelestiaSingsOfFateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACelestiaSingsOfFateGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACelestiaSingsOfFateGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CelestiaSingsOfFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACelestiaSingsOfFateGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACelestiaSingsOfFateGameMode_Statics::ClassParams = {
	&ACelestiaSingsOfFateGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACelestiaSingsOfFateGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACelestiaSingsOfFateGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACelestiaSingsOfFateGameMode()
{
	if (!Z_Registration_Info_UClass_ACelestiaSingsOfFateGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACelestiaSingsOfFateGameMode.OuterSingleton, Z_Construct_UClass_ACelestiaSingsOfFateGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACelestiaSingsOfFateGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACelestiaSingsOfFateGameMode);
ACelestiaSingsOfFateGameMode::~ACelestiaSingsOfFateGameMode() {}
// ********** End Class ACelestiaSingsOfFateGameMode ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_CelestiaSingsOfFateGameMode_h__Script_CelestiaSingsOfFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACelestiaSingsOfFateGameMode, ACelestiaSingsOfFateGameMode::StaticClass, TEXT("ACelestiaSingsOfFateGameMode"), &Z_Registration_Info_UClass_ACelestiaSingsOfFateGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACelestiaSingsOfFateGameMode), 2782887863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_CelestiaSingsOfFateGameMode_h__Script_CelestiaSingsOfFate_962624217(TEXT("/Script/CelestiaSingsOfFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_CelestiaSingsOfFateGameMode_h__Script_CelestiaSingsOfFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_CelestiaSingsOfFateGameMode_h__Script_CelestiaSingsOfFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
