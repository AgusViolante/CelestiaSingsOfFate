// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Widgets/InventoryEntry.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryEntry() {}

// ********** Begin Cross Module References ********************************************************
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UInventoryEntry();
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UInventoryEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CelestiaSingsOfFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventoryEntry **********************************************************
void UInventoryEntry::StaticRegisterNativesUInventoryEntry()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryEntry;
UClass* UInventoryEntry::GetPrivateStaticClass()
{
	using TClass = UInventoryEntry;
	if (!Z_Registration_Info_UClass_UInventoryEntry.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryEntry"),
			Z_Registration_Info_UClass_UInventoryEntry.InnerSingleton,
			StaticRegisterNativesUInventoryEntry,
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
	return Z_Registration_Info_UClass_UInventoryEntry.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryEntry_NoRegister()
{
	return UInventoryEntry::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/Widgets/InventoryEntry.h" },
		{ "ModuleRelativePath", "Private/Inventory/Widgets/InventoryEntry.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CelestiaSingsOfFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryEntry_Statics::ClassParams = {
	&UInventoryEntry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryEntry()
{
	if (!Z_Registration_Info_UClass_UInventoryEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryEntry.OuterSingleton, Z_Construct_UClass_UInventoryEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryEntry.OuterSingleton;
}
UInventoryEntry::UInventoryEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryEntry);
UInventoryEntry::~UInventoryEntry() {}
// ********** End Class UInventoryEntry ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Private_Inventory_Widgets_InventoryEntry_h__Script_CelestiaSingsOfFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryEntry, UInventoryEntry::StaticClass, TEXT("UInventoryEntry"), &Z_Registration_Info_UClass_UInventoryEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryEntry), 2374077532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Private_Inventory_Widgets_InventoryEntry_h__Script_CelestiaSingsOfFate_1336039180(TEXT("/Script/CelestiaSingsOfFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Private_Inventory_Widgets_InventoryEntry_h__Script_CelestiaSingsOfFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Private_Inventory_Widgets_InventoryEntry_h__Script_CelestiaSingsOfFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
