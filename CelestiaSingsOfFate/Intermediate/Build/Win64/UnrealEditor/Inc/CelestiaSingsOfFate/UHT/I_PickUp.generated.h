// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/I_PickUp.h"

#ifdef CELESTIASINGSOFFATE_I_PickUp_generated_h
#error "I_PickUp.generated.h already included, missing '#pragma once' in I_PickUp.h"
#endif
#define CELESTIASINGSOFFATE_I_PickUp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UI_PickUp ************************************************************
#define FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PickUp_Implementation(int32 Amount, FString& ItemName) {}; \
	DECLARE_FUNCTION(execPickUp);


#define FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_13_CALLBACK_WRAPPERS
CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UI_PickUp_NoRegister();

#define FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CELESTIASINGSOFFATE_API UI_PickUp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UI_PickUp(UI_PickUp&&) = delete; \
	UI_PickUp(const UI_PickUp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CELESTIASINGSOFFATE_API, UI_PickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UI_PickUp); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UI_PickUp) \
	virtual ~UI_PickUp() = default;


#define FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUI_PickUp(); \
	friend struct Z_Construct_UClass_UI_PickUp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CELESTIASINGSOFFATE_API UClass* Z_Construct_UClass_UI_PickUp_NoRegister(); \
public: \
	DECLARE_CLASS2(UI_PickUp, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CelestiaSingsOfFate"), Z_Construct_UClass_UI_PickUp_NoRegister) \
	DECLARE_SERIALIZER(UI_PickUp)


#define FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~II_PickUp() {} \
public: \
	typedef UI_PickUp UClassType; \
	typedef II_PickUp ThisClass; \
	static void Execute_PickUp(UObject* O, int32 Amount, FString& ItemName); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_10_PROLOG
#define FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_13_CALLBACK_WRAPPERS \
	FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UI_PickUp;

// ********** End Interface UI_PickUp **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_violanteagus_Desktop_Githubs_CelestiaSingsOfFate_CelestiaSingsOfFate_Source_CelestiaSingsOfFate_Public_Interfaces_I_PickUp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
