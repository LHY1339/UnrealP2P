// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealP2P/Source/P2PSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP2PSubsystem() {}
// Cross Module References
	UNREALP2P_API UFunction* Z_Construct_UDelegateFunction_UnrealP2P_OnSessionListChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealP2P();
	UNREALP2P_API UClass* Z_Construct_UClass_UP2PSubsystem_NoRegister();
	UNREALP2P_API UClass* Z_Construct_UClass_UP2PSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UNREALP2P_API UScriptStruct* Z_Construct_UScriptStruct_FLocalSession();
	UNREALP2P_API UScriptStruct* Z_Construct_UScriptStruct_FListSession();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnrealP2P_OnSessionListChange__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealP2P_OnSessionListChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Source/P2PSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealP2P_OnSessionListChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealP2P, nullptr, "OnSessionListChange__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealP2P_OnSessionListChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealP2P_OnSessionListChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnrealP2P_OnSessionListChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UnrealP2P_OnSessionListChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UP2PSubsystem::execFlushSessionList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushSessionList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UP2PSubsystem::execConnectSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IP);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectSession(Z_Param_IP,Z_Param_Port,Z_Param_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UP2PSubsystem::execSetServer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IP);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetServer(Z_Param_IP,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UP2PSubsystem::execSetLocalSessionProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalSessionProperty(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UP2PSubsystem::execSetLocalSessionPassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalSessionPassword(Z_Param_Password);
		P_NATIVE_END;
	}
	void UP2PSubsystem::StaticRegisterNativesUP2PSubsystem()
	{
		UClass* Class = UP2PSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectSession", &UP2PSubsystem::execConnectSession },
			{ "FlushSessionList", &UP2PSubsystem::execFlushSessionList },
			{ "SetLocalSessionPassword", &UP2PSubsystem::execSetLocalSessionPassword },
			{ "SetLocalSessionProperty", &UP2PSubsystem::execSetLocalSessionProperty },
			{ "SetServer", &UP2PSubsystem::execSetServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics
	{
		struct P2PSubsystem_eventConnectSession_Parms
		{
			FString IP;
			int32 Port;
			FString Password;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(P2PSubsystem_eventConnectSession_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(P2PSubsystem_eventConnectSession_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(P2PSubsystem_eventConnectSession_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::NewProp_Password,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "P2P" },
		{ "ModuleRelativePath", "Source/P2PSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UP2PSubsystem, nullptr, "ConnectSession", nullptr, nullptr, sizeof(P2PSubsystem_eventConnectSession_Parms), Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UP2PSubsystem_ConnectSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UP2PSubsystem_ConnectSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UP2PSubsystem_FlushSessionList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UP2PSubsystem_FlushSessionList_Statics::Function_MetaDataParams[] = {
		{ "Category", "P2P" },
		{ "ModuleRelativePath", "Source/P2PSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UP2PSubsystem_FlushSessionList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UP2PSubsystem, nullptr, "FlushSessionList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UP2PSubsystem_FlushSessionList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UP2PSubsystem_FlushSessionList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UP2PSubsystem_FlushSessionList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UP2PSubsystem_FlushSessionList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword_Statics
	{
		struct P2PSubsystem_eventSetLocalSessionPassword_Parms
		{
			FString Password;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(P2PSubsystem_eventSetLocalSessionPassword_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword_Statics::NewProp_Password,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "P2P" },
		{ "Comment", "//\xe5\x85\xac\xe5\xbc\x80\xe5\x87\xbd\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Source/P2PSubsystem.h" },
		{ "ToolTip", "\xe5\x85\xac\xe5\xbc\x80\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UP2PSubsystem, nullptr, "SetLocalSessionPassword", nullptr, nullptr, sizeof(P2PSubsystem_eventSetLocalSessionPassword_Parms), Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty_Statics
	{
		struct P2PSubsystem_eventSetLocalSessionProperty_Parms
		{
			FString Property;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(P2PSubsystem_eventSetLocalSessionProperty_Parms, Property), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty_Statics::NewProp_Property,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "P2P" },
		{ "ModuleRelativePath", "Source/P2PSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UP2PSubsystem, nullptr, "SetLocalSessionProperty", nullptr, nullptr, sizeof(P2PSubsystem_eventSetLocalSessionProperty_Parms), Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics
	{
		struct P2PSubsystem_eventSetServer_Parms
		{
			FString IP;
			int32 Port;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(P2PSubsystem_eventSetServer_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(P2PSubsystem_eventSetServer_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "P2P" },
		{ "ModuleRelativePath", "Source/P2PSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UP2PSubsystem, nullptr, "SetServer", nullptr, nullptr, sizeof(P2PSubsystem_eventSetServer_Parms), Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UP2PSubsystem_SetServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UP2PSubsystem_SetServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UP2PSubsystem_NoRegister()
	{
		return UP2PSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UP2PSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalSession;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SessionList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionListChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionListChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UP2PSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealP2P,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UP2PSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UP2PSubsystem_ConnectSession, "ConnectSession" }, // 1243573818
		{ &Z_Construct_UFunction_UP2PSubsystem_FlushSessionList, "FlushSessionList" }, // 4088462878
		{ &Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionPassword, "SetLocalSessionPassword" }, // 2493279087
		{ &Z_Construct_UFunction_UP2PSubsystem_SetLocalSessionProperty, "SetLocalSessionProperty" }, // 656945693
		{ &Z_Construct_UFunction_UP2PSubsystem_SetServer, "SetServer" }, // 1644248786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UP2PSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Source/P2PSubsystem.h" },
		{ "ModuleRelativePath", "Source/P2PSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_LocalSession_MetaData[] = {
		{ "Category", "P2P" },
		{ "ModuleRelativePath", "Source/P2PSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_LocalSession = { "LocalSession", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UP2PSubsystem, LocalSession), Z_Construct_UScriptStruct_FLocalSession, METADATA_PARAMS(Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_LocalSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_LocalSession_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_SessionList_Inner = { "SessionList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FListSession, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_SessionList_MetaData[] = {
		{ "Category", "P2P" },
		{ "ModuleRelativePath", "Source/P2PSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_SessionList = { "SessionList", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UP2PSubsystem, SessionList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_SessionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_SessionList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_OnSessionListChange_MetaData[] = {
		{ "Category", "P2P" },
		{ "ModuleRelativePath", "Source/P2PSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_OnSessionListChange = { "OnSessionListChange", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UP2PSubsystem, OnSessionListChange), Z_Construct_UDelegateFunction_UnrealP2P_OnSessionListChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_OnSessionListChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_OnSessionListChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UP2PSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_LocalSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_SessionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_SessionList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UP2PSubsystem_Statics::NewProp_OnSessionListChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UP2PSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UP2PSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UP2PSubsystem_Statics::ClassParams = {
		&UP2PSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UP2PSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UP2PSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UP2PSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UP2PSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UP2PSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UP2PSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UP2PSubsystem, 389605585);
	template<> UNREALP2P_API UClass* StaticClass<UP2PSubsystem>()
	{
		return UP2PSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UP2PSubsystem(Z_Construct_UClass_UP2PSubsystem, &UP2PSubsystem::StaticClass, TEXT("/Script/UnrealP2P"), TEXT("UP2PSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UP2PSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
