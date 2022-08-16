// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGame/Public/DoorSlideComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorSlideComponent() {}
// Cross Module References
	MAZEGAME_API UClass* Z_Construct_UClass_UDoorSlideComponent_NoRegister();
	MAZEGAME_API UClass* Z_Construct_UClass_UDoorSlideComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MazeGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	void UDoorSlideComponent::StaticRegisterNativesUDoorSlideComponent()
	{
	}
	UClass* Z_Construct_UClass_UDoorSlideComponent_NoRegister()
	{
		return UDoorSlideComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorSlideComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimetoSlide_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimetoSlide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpenCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorSlideComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorSlideComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorSlideComponent.h" },
		{ "ModuleRelativePath", "Public/DoorSlideComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_DesiredLocation_MetaData[] = {
		{ "Category", "DoorSlideComponent" },
		{ "ModuleRelativePath", "Public/DoorSlideComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_DesiredLocation = { "DesiredLocation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorSlideComponent, DesiredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_DesiredLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_DesiredLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_TimetoSlide_MetaData[] = {
		{ "Category", "DoorSlideComponent" },
		{ "ModuleRelativePath", "Public/DoorSlideComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_TimetoSlide = { "TimetoSlide", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorSlideComponent, TimetoSlide), METADATA_PARAMS(Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_TimetoSlide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_TimetoSlide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "DoorSlideComponent" },
		{ "ModuleRelativePath", "Public/DoorSlideComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorSlideComponent, TriggerBox), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_TriggerBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_OpenCurve_MetaData[] = {
		{ "Category", "DoorSlideComponent" },
		{ "ModuleRelativePath", "Public/DoorSlideComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_OpenCurve = { "OpenCurve", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorSlideComponent, OpenCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_OpenCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_OpenCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorSlideComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_DesiredLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_TimetoSlide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_TriggerBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorSlideComponent_Statics::NewProp_OpenCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorSlideComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorSlideComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorSlideComponent_Statics::ClassParams = {
		&UDoorSlideComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorSlideComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorSlideComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorSlideComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorSlideComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorSlideComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorSlideComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorSlideComponent, 2944493213);
	template<> MAZEGAME_API UClass* StaticClass<UDoorSlideComponent>()
	{
		return UDoorSlideComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorSlideComponent(Z_Construct_UClass_UDoorSlideComponent, &UDoorSlideComponent::StaticClass, TEXT("/Script/MazeGame"), TEXT("UDoorSlideComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorSlideComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
