// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Database/ItemDatabase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemDatabase() {}

// ********** Begin Cross Module References ********************************************************
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UItemDatabase();
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UItemDatabase_NoRegister();
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UItemIObecjt();
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UItemIObecjt_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_CelestiaSingsOfFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UItemIObecjt *************************************************************
void UItemIObecjt::StaticRegisterNativesUItemIObecjt()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemIObecjt;
UClass* UItemIObecjt::GetPrivateStaticClass()
{
	using TClass = UItemIObecjt;
	if (!Z_Registration_Info_UClass_UItemIObecjt.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemIObecjt"),
			Z_Registration_Info_UClass_UItemIObecjt.InnerSingleton,
			StaticRegisterNativesUItemIObecjt,
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
	return Z_Registration_Info_UClass_UItemIObecjt.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemIObecjt_NoRegister()
{
	return UItemIObecjt::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemIObecjt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/Database/ItemDatabase.h" },
		{ "ModuleRelativePath", "Private/Inventory/Database/ItemDatabase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemIObecjt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemIObecjt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CelestiaSingsOfFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemIObecjt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemIObecjt_Statics::ClassParams = {
	&UItemIObecjt::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemIObecjt_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemIObecjt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemIObecjt()
{
	if (!Z_Registration_Info_UClass_UItemIObecjt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemIObecjt.OuterSingleton, Z_Construct_UClass_UItemIObecjt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemIObecjt.OuterSingleton;
}
UItemIObecjt::UItemIObecjt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemIObecjt);
UItemIObecjt::~UItemIObecjt() {}
// ********** End Class UItemIObecjt ***************************************************************

// ********** Begin Class UItemDatabase ************************************************************
void UItemDatabase::StaticRegisterNativesUItemDatabase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemDatabase;
UClass* UItemDatabase::GetPrivateStaticClass()
{
	using TClass = UItemDatabase;
	if (!Z_Registration_Info_UClass_UItemDatabase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemDatabase"),
			Z_Registration_Info_UClass_UItemDatabase.InnerSingleton,
			StaticRegisterNativesUItemDatabase,
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
	return Z_Registration_Info_UClass_UItemDatabase.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemDatabase_NoRegister()
{
	return UItemDatabase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/Database/ItemDatabase.h" },
		{ "ModuleRelativePath", "Private/Inventory/Database/ItemDatabase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_CelestiaSingsOfFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDatabase_Statics::ClassParams = {
	&UItemDatabase::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemDatabase()
{
	if (!Z_Registration_Info_UClass_UItemDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDatabase.OuterSingleton, Z_Construct_UClass_UItemDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDatabase.OuterSingleton;
}
UItemDatabase::UItemDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDatabase);
UItemDatabase::~UItemDatabase() {}
// ********** End Class UItemDatabase **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Private_Inventory_Database_ItemDatabase_h__Script_CelestiaSingsOfFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemIObecjt, UItemIObecjt::StaticClass, TEXT("UItemIObecjt"), &Z_Registration_Info_UClass_UItemIObecjt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemIObecjt), 3097244556U) },
		{ Z_Construct_UClass_UItemDatabase, UItemDatabase::StaticClass, TEXT("UItemDatabase"), &Z_Registration_Info_UClass_UItemDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDatabase), 915819423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Private_Inventory_Database_ItemDatabase_h__Script_CelestiaSingsOfFate_606092982(TEXT("/Script/CelestiaSingsOfFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Private_Inventory_Database_ItemDatabase_h__Script_CelestiaSingsOfFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Private_Inventory_Database_ItemDatabase_h__Script_CelestiaSingsOfFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
