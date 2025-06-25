// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealP2P/Source/P2PLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP2PLibrary() {}
// Cross Module References
	UNREALP2P_API UClass* Z_Construct_UClass_UP2PLibrary_NoRegister();
	UNREALP2P_API UClass* Z_Construct_UClass_UP2PLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealP2P();
// End Cross Module References
	void UP2PLibrary::StaticRegisterNativesUP2PLibrary()
	{
	}
	UClass* Z_Construct_UClass_UP2PLibrary_NoRegister()
	{
		return UP2PLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UP2PLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UP2PLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealP2P,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UP2PLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Source/P2PLibrary.h" },
		{ "ModuleRelativePath", "Source/P2PLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UP2PLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UP2PLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UP2PLibrary_Statics::ClassParams = {
		&UP2PLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UP2PLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UP2PLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UP2PLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UP2PLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UP2PLibrary, 282943560);
	template<> UNREALP2P_API UClass* StaticClass<UP2PLibrary>()
	{
		return UP2PLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UP2PLibrary(Z_Construct_UClass_UP2PLibrary, &UP2PLibrary::StaticClass, TEXT("/Script/UnrealP2P"), TEXT("UP2PLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UP2PLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
