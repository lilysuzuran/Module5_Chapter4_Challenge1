// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEGAME_DoorSlideComponent_generated_h
#error "DoorSlideComponent.generated.h already included, missing '#pragma once' in DoorSlideComponent.h"
#endif
#define MAZEGAME_DoorSlideComponent_generated_h

#define MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_SPARSE_DATA
#define MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_RPC_WRAPPERS
#define MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorSlideComponent(); \
	friend struct Z_Construct_UClass_UDoorSlideComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorSlideComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGame"), NO_API) \
	DECLARE_SERIALIZER(UDoorSlideComponent)


#define MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDoorSlideComponent(); \
	friend struct Z_Construct_UClass_UDoorSlideComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorSlideComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGame"), NO_API) \
	DECLARE_SERIALIZER(UDoorSlideComponent)


#define MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorSlideComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorSlideComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorSlideComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorSlideComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorSlideComponent(UDoorSlideComponent&&); \
	NO_API UDoorSlideComponent(const UDoorSlideComponent&); \
public:


#define MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorSlideComponent(UDoorSlideComponent&&); \
	NO_API UDoorSlideComponent(const UDoorSlideComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorSlideComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorSlideComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorSlideComponent)


#define MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DesiredLocation() { return STRUCT_OFFSET(UDoorSlideComponent, DesiredLocation); } \
	FORCEINLINE static uint32 __PPO__TimetoSlide() { return STRUCT_OFFSET(UDoorSlideComponent, TimetoSlide); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(UDoorSlideComponent, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__OpenCurve() { return STRUCT_OFFSET(UDoorSlideComponent, OpenCurve); }


#define MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_12_PROLOG
#define MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_SPARSE_DATA \
	MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_RPC_WRAPPERS \
	MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_INCLASS \
	MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_SPARSE_DATA \
	MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_INCLASS_NO_PURE_DECLS \
	MazeGame_Source_MazeGame_Public_DoorSlideComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGAME_API UClass* StaticClass<class UDoorSlideComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeGame_Source_MazeGame_Public_DoorSlideComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
