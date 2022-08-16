// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEGAME_DoorInteractionComponent_generated_h
#error "DoorInteractionComponent.generated.h already included, missing '#pragma once' in DoorInteractionComponent.h"
#endif
#define MAZEGAME_DoorInteractionComponent_generated_h

#define MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_SPARSE_DATA
#define MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_RPC_WRAPPERS
#define MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorInteractionComponent(); \
	friend struct Z_Construct_UClass_UDoorInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGame"), NO_API) \
	DECLARE_SERIALIZER(UDoorInteractionComponent)


#define MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDoorInteractionComponent(); \
	friend struct Z_Construct_UClass_UDoorInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGame"), NO_API) \
	DECLARE_SERIALIZER(UDoorInteractionComponent)


#define MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorInteractionComponent(UDoorInteractionComponent&&); \
	NO_API UDoorInteractionComponent(const UDoorInteractionComponent&); \
public:


#define MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorInteractionComponent(UDoorInteractionComponent&&); \
	NO_API UDoorInteractionComponent(const UDoorInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorInteractionComponent)


#define MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DesiredRotation() { return STRUCT_OFFSET(UDoorInteractionComponent, DesiredRotation); } \
	FORCEINLINE static uint32 __PPO__TimetoRotate() { return STRUCT_OFFSET(UDoorInteractionComponent, TimetoRotate); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(UDoorInteractionComponent, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__OpenCurve() { return STRUCT_OFFSET(UDoorInteractionComponent, OpenCurve); }


#define MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_12_PROLOG
#define MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_SPARSE_DATA \
	MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_RPC_WRAPPERS \
	MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_INCLASS \
	MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_SPARSE_DATA \
	MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_INCLASS_NO_PURE_DECLS \
	MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGAME_API UClass* StaticClass<class UDoorInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeGame_Source_MazeGame_Public_DoorInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
