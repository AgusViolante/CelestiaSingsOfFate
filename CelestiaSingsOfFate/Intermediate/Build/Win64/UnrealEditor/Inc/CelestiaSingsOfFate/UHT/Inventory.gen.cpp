// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Inventory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventory() {}

// ********** Begin Cross Module References ********************************************************
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UInventory();
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UInventory_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CelestiaSingsOfFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventory ***************************************************************
void UInventory::StaticRegisterNativesUInventory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventory;
UClass* UInventory::GetPrivateStaticClass()
{
	using TClass = UInventory;
	if (!Z_Registration_Info_UClass_UInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inventory"),
			Z_Registration_Info_UClass_UInventory.InnerSingleton,
			StaticRegisterNativesUInventory,
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
	return Z_Registration_Info_UClass_UInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventory_NoRegister()
{
	return UInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Inventory.h" },
		{ "ModuleRelativePath", "Public/Components/Inventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/Inventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Inventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventory, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CelestiaSingsOfFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
	&UInventory::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventory()
{
	if (!Z_Registration_Info_UClass_UInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventory.OuterSingleton, Z_Construct_UClass_UInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
UInventory::~UInventory() {}
// ********** End Class UInventory *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Components_Inventory_h__Script_CelestiaSingsOfFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventory, UInventory::StaticClass, TEXT("UInventory"), &Z_Registration_Info_UClass_UInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory), 3424959370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Components_Inventory_h__Script_CelestiaSingsOfFate_627256393(TEXT("/Script/CelestiaSingsOfFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Components_Inventory_h__Script_CelestiaSingsOfFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Components_Inventory_h__Script_CelestiaSingsOfFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
