// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUTORIALPROJECT_TutorialProjectCharacter_generated_h
#error "TutorialProjectCharacter.generated.h already included, missing '#pragma once' in TutorialProjectCharacter.h"
#endif
#define TUTORIALPROJECT_TutorialProjectCharacter_generated_h

#define TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_SPARSE_DATA
#define TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_RPC_WRAPPERS
#define TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutorialProjectCharacter(); \
	friend struct Z_Construct_UClass_ATutorialProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ATutorialProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TutorialProject"), NO_API) \
	DECLARE_SERIALIZER(ATutorialProjectCharacter)


#define TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATutorialProjectCharacter(); \
	friend struct Z_Construct_UClass_ATutorialProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ATutorialProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TutorialProject"), NO_API) \
	DECLARE_SERIALIZER(ATutorialProjectCharacter)


#define TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATutorialProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATutorialProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorialProjectCharacter(ATutorialProjectCharacter&&); \
	NO_API ATutorialProjectCharacter(const ATutorialProjectCharacter&); \
public:


#define TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorialProjectCharacter(ATutorialProjectCharacter&&); \
	NO_API ATutorialProjectCharacter(const ATutorialProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutorialProjectCharacter)


#define TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATutorialProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATutorialProjectCharacter, FollowCamera); }


#define TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_9_PROLOG
#define TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_SPARSE_DATA \
	TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_RPC_WRAPPERS \
	TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_INCLASS \
	TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_SPARSE_DATA \
	TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTORIALPROJECT_API UClass* StaticClass<class ATutorialProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TutorialProject_Source_TutorialProject_TutorialProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
