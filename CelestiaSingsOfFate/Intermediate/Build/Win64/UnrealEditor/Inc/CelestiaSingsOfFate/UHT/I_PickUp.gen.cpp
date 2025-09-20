// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/I_PickUp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeI_PickUp() {}

// ********** Begin Cross Module References ********************************************************
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UI_PickUp();
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UI_PickUp_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_CelestiaSingsOfFate();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UI_PickUp Function PickUp ********************************************
struct I_PickUp_eventPickUp_Parms
{
	int32 Amount;
	FString ItemName;
};
void II_PickUp::PickUp(int32 Amount, FString& ItemName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PickUp instead.");
}
static FName NAME_UI_PickUp_PickUp = FName(TEXT("PickUp"));
void II_PickUp::Execute_PickUp(UObject* O, int32 Amount, FString& ItemName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UI_PickUp::StaticClass()));
	I_PickUp_eventPickUp_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UI_PickUp_PickUp);
	if (Func)
	{
		Parms.Amount=Amount;
		Parms.ItemName=ItemName;
		O->ProcessEvent(Func, &Parms);
		ItemName=Parms.ItemName;
	}
	else if (auto I = (II_PickUp*)(O->GetNativeInterfaceAddress(UI_PickUp::StaticClass())))
	{
		I->PickUp_Implementation(Amount,ItemName);
	}
}
struct Z_Construct_UFunction_UI_PickUp_PickUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pick Up" },
		{ "ModuleRelativePath", "Public/Interfaces/I_PickUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UI_PickUp_PickUp_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(I_PickUp_eventPickUp_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UI_PickUp_PickUp_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(I_PickUp_eventPickUp_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UI_PickUp_PickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UI_PickUp_PickUp_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UI_PickUp_PickUp_Statics::NewProp_ItemName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UI_PickUp_PickUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UI_PickUp_PickUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UI_PickUp, nullptr, "PickUp", Z_Construct_UFunction_UI_PickUp_PickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UI_PickUp_PickUp_Statics::PropPointers), sizeof(I_PickUp_eventPickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UI_PickUp_PickUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UI_PickUp_PickUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(I_PickUp_eventPickUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UI_PickUp_PickUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UI_PickUp_PickUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(II_PickUp::execPickUp)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ItemName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickUp_Implementation(Z_Param_Amount,Z_Param_Out_ItemName);
	P_NATIVE_END;
}
// ********** End Interface UI_PickUp Function PickUp **********************************************

// ********** Begin Interface UI_PickUp ************************************************************
void UI_PickUp::StaticRegisterNativesUI_PickUp()
{
	UClass* Class = UI_PickUp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PickUp", &II_PickUp::execPickUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UI_PickUp;
UClass* UI_PickUp::GetPrivateStaticClass()
{
	using TClass = UI_PickUp;
	if (!Z_Registration_Info_UClass_UI_PickUp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("I_PickUp"),
			Z_Registration_Info_UClass_UI_PickUp.InnerSingleton,
			StaticRegisterNativesUI_PickUp,
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
	return Z_Registration_Info_UClass_UI_PickUp.InnerSingleton;
}
UClass* Z_Construct_UClass_UI_PickUp_NoRegister()
{
	return UI_PickUp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UI_PickUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/I_PickUp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UI_PickUp_PickUp, "PickUp" }, // 3594581653
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<II_PickUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UI_PickUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CelestiaSingsOfFate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UI_PickUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UI_PickUp_Statics::ClassParams = {
	&UI_PickUp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UI_PickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_UI_PickUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UI_PickUp()
{
	if (!Z_Registration_Info_UClass_UI_PickUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UI_PickUp.OuterSingleton, Z_Construct_UClass_UI_PickUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UI_PickUp.OuterSingleton;
}
UI_PickUp::UI_PickUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UI_PickUp);
// ********** End Interface UI_PickUp **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h__Script_CelestiaSingsOfFate_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UI_PickUp, UI_PickUp::StaticClass, TEXT("UI_PickUp"), &Z_Registration_Info_UClass_UI_PickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UI_PickUp), 2987182483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h__Script_CelestiaSingsOfFate_598628337(TEXT("/Script/CelestiaSingsOfFate"),
	Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h__Script_CelestiaSingsOfFate_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h__Script_CelestiaSingsOfFate_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
