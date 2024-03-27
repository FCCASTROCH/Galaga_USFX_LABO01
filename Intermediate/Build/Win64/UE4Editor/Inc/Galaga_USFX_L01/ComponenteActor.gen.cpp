// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ComponenteActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteActor() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UComponenteActor_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UComponenteActor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACapsula_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComponenteActor::execRemoveFromInventory)
	{
		P_GET_OBJECT(ACapsula,Z_Param_ActorToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromInventory(Z_Param_ActorToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponenteActor::execAddToInventory)
	{
		P_GET_OBJECT(ACapsula,Z_Param_AxtorAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddToInventory(Z_Param_AxtorAdd);
		P_NATIVE_END;
	}
	void UComponenteActor::StaticRegisterNativesUComponenteActor()
	{
		UClass* Class = UComponenteActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventory", &UComponenteActor::execAddToInventory },
			{ "RemoveFromInventory", &UComponenteActor::execRemoveFromInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics
	{
		struct ComponenteActor_eventAddToInventory_Parms
		{
			ACapsula* AxtorAdd;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AxtorAdd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::NewProp_AxtorAdd = { "AxtorAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteActor_eventAddToInventory_Parms, AxtorAdd), Z_Construct_UClass_ACapsula_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteActor_eventAddToInventory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::NewProp_AxtorAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteActor, nullptr, "AddToInventory", nullptr, nullptr, sizeof(ComponenteActor_eventAddToInventory_Parms), Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteActor_AddToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteActor_AddToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponenteActor_RemoveFromInventory_Statics
	{
		struct ComponenteActor_eventRemoveFromInventory_Parms
		{
			ACapsula* ActorToRemove;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteActor_RemoveFromInventory_Statics::NewProp_ActorToRemove = { "ActorToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteActor_eventRemoveFromInventory_Parms, ActorToRemove), Z_Construct_UClass_ACapsula_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteActor_RemoveFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteActor_RemoveFromInventory_Statics::NewProp_ActorToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteActor_RemoveFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteActor_RemoveFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteActor, nullptr, "RemoveFromInventory", nullptr, nullptr, sizeof(ComponenteActor_eventRemoveFromInventory_Parms), Z_Construct_UFunction_UComponenteActor_RemoveFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteActor_RemoveFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteActor_RemoveFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteActor_RemoveFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteActor_RemoveFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteActor_RemoveFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponenteActor_NoRegister()
	{
		return UComponenteActor::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponenteActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponenteActor_AddToInventory, "AddToInventory" }, // 3696087931
		{ &Z_Construct_UFunction_UComponenteActor_RemoveFromInventory, "RemoveFromInventory" }, // 1580947162
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteActor.h" },
		{ "ModuleRelativePath", "ComponenteActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteActor_Statics::ClassParams = {
		&UComponenteActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteActor, 2415774537);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UComponenteActor>()
	{
		return UComponenteActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteActor(Z_Construct_UClass_UComponenteActor, &UComponenteActor::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UComponenteActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
