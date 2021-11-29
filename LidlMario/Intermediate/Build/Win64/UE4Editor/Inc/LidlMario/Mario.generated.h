// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef LIDLMARIO_Mario_generated_h
#error "Mario.generated.h already included, missing '#pragma once' in Mario.h"
#endif
#define LIDLMARIO_Mario_generated_h

#define LidlMario_Source_LidlMario_Mario_h_14_SPARSE_DATA
#define LidlMario_Source_LidlMario_Mario_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnStopCollision); \
	DECLARE_FUNCTION(execOnCollide);


#define LidlMario_Source_LidlMario_Mario_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStopCollision); \
	DECLARE_FUNCTION(execOnCollide);


#define LidlMario_Source_LidlMario_Mario_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMario(); \
	friend struct Z_Construct_UClass_AMario_Statics; \
public: \
	DECLARE_CLASS(AMario, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidlMario"), NO_API) \
	DECLARE_SERIALIZER(AMario)


#define LidlMario_Source_LidlMario_Mario_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMario(); \
	friend struct Z_Construct_UClass_AMario_Statics; \
public: \
	DECLARE_CLASS(AMario, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidlMario"), NO_API) \
	DECLARE_SERIALIZER(AMario)


#define LidlMario_Source_LidlMario_Mario_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMario(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMario) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMario); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMario); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMario(AMario&&); \
	NO_API AMario(const AMario&); \
public:


#define LidlMario_Source_LidlMario_Mario_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMario(AMario&&); \
	NO_API AMario(const AMario&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMario); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMario); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMario)


#define LidlMario_Source_LidlMario_Mario_h_14_PRIVATE_PROPERTY_OFFSET
#define LidlMario_Source_LidlMario_Mario_h_11_PROLOG
#define LidlMario_Source_LidlMario_Mario_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LidlMario_Source_LidlMario_Mario_h_14_PRIVATE_PROPERTY_OFFSET \
	LidlMario_Source_LidlMario_Mario_h_14_SPARSE_DATA \
	LidlMario_Source_LidlMario_Mario_h_14_RPC_WRAPPERS \
	LidlMario_Source_LidlMario_Mario_h_14_INCLASS \
	LidlMario_Source_LidlMario_Mario_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LidlMario_Source_LidlMario_Mario_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LidlMario_Source_LidlMario_Mario_h_14_PRIVATE_PROPERTY_OFFSET \
	LidlMario_Source_LidlMario_Mario_h_14_SPARSE_DATA \
	LidlMario_Source_LidlMario_Mario_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	LidlMario_Source_LidlMario_Mario_h_14_INCLASS_NO_PURE_DECLS \
	LidlMario_Source_LidlMario_Mario_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDLMARIO_API UClass* StaticClass<class AMario>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LidlMario_Source_LidlMario_Mario_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
