// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGame/Public/SlideableDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlideableDoor() {}
// Cross Module References
	MAZEGAME_API UClass* Z_Construct_UClass_ASlideableDoor_NoRegister();
	MAZEGAME_API UClass* Z_Construct_UClass_ASlideableDoor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_MazeGame();
	MAZEGAME_API UClass* Z_Construct_UClass_UDoorSlideComponent_NoRegister();
// End Cross Module References
	void ASlideableDoor::StaticRegisterNativesASlideableDoor()
	{
	}
	UClass* Z_Construct_UClass_ASlideableDoor_NoRegister()
	{
		return ASlideableDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASlideableDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorSlideComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorSlideComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlideableDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlideableDoor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "SlideableDoor.h" },
		{ "ModuleRelativePath", "Public/SlideableDoor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlideableDoor_Statics::NewProp_DoorSlideComponent_MetaData[] = {
		{ "Category", "SlideableDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SlideableDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlideableDoor_Statics::NewProp_DoorSlideComponent = { "DoorSlideComponent", nullptr, (EPropertyFlags)0x0020080002080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASlideableDoor, DoorSlideComponent), Z_Construct_UClass_UDoorSlideComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASlideableDoor_Statics::NewProp_DoorSlideComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASlideableDoor_Statics::NewProp_DoorSlideComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlideableDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlideableDoor_Statics::NewProp_DoorSlideComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlideableDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlideableDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASlideableDoor_Statics::ClassParams = {
		&ASlideableDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASlideableDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASlideableDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASlideableDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASlideableDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASlideableDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASlideableDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlideableDoor, 2223427562);
	template<> MAZEGAME_API UClass* StaticClass<ASlideableDoor>()
	{
		return ASlideableDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlideableDoor(Z_Construct_UClass_ASlideableDoor, &ASlideableDoor::StaticClass, TEXT("/Script/MazeGame"), TEXT("ASlideableDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlideableDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
