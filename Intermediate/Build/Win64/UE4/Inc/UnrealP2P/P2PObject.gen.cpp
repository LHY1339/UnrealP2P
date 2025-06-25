// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealP2P/Source/P2PObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP2PObject() {}
// Cross Module References
	UNREALP2P_API UScriptStruct* Z_Construct_UScriptStruct_FTempMessage();
	UPackage* Z_Construct_UPackage__Script_UnrealP2P();
	UNREALP2P_API UScriptStruct* Z_Construct_UScriptStruct_FLocalSession();
	UNREALP2P_API UScriptStruct* Z_Construct_UScriptStruct_FListSession();
// End Cross Module References
class UScriptStruct* FTempMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALP2P_API uint32 Get_Z_Construct_UScriptStruct_FTempMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTempMessage, Z_Construct_UPackage__Script_UnrealP2P(), TEXT("TempMessage"), sizeof(FTempMessage), Get_Z_Construct_UScriptStruct_FTempMessage_Hash());
	}
	return Singleton;
}
template<> UNREALP2P_API UScriptStruct* StaticStruct<FTempMessage>()
{
	return FTempMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTempMessage(FTempMessage::StaticStruct, TEXT("/Script/UnrealP2P"), TEXT("TempMessage"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealP2P_StaticRegisterNativesFTempMessage
{
	FScriptStruct_UnrealP2P_StaticRegisterNativesFTempMessage()
	{
		UScriptStruct::DeferCppStructOps<FTempMessage>(FName(TEXT("TempMessage")));
	}
} ScriptStruct_UnrealP2P_StaticRegisterNativesFTempMessage;
	struct Z_Construct_UScriptStruct_FTempMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTempMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\xe4\xb8\xb4\xe6\x97\xb6\xe6\xb6\x88\xe6\x81\xaf\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
		{ "ModuleRelativePath", "Source/P2PObject.h" },
		{ "ToolTip", "\xe4\xb8\xb4\xe6\x97\xb6\xe6\xb6\x88\xe6\x81\xaf\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTempMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTempMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_IP_MetaData[] = {
		{ "ModuleRelativePath", "Source/P2PObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTempMessage, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_Port_MetaData[] = {
		{ "ModuleRelativePath", "Source/P2PObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTempMessage, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Source/P2PObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTempMessage, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTempMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTempMessage_Statics::NewProp_Message,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTempMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealP2P,
		nullptr,
		&NewStructOps,
		"TempMessage",
		sizeof(FTempMessage),
		alignof(FTempMessage),
		Z_Construct_UScriptStruct_FTempMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTempMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTempMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTempMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTempMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTempMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealP2P();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TempMessage"), sizeof(FTempMessage), Get_Z_Construct_UScriptStruct_FTempMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTempMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTempMessage_Hash() { return 3780135187U; }
class UScriptStruct* FLocalSession::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALP2P_API uint32 Get_Z_Construct_UScriptStruct_FLocalSession_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalSession, Z_Construct_UPackage__Script_UnrealP2P(), TEXT("LocalSession"), sizeof(FLocalSession), Get_Z_Construct_UScriptStruct_FLocalSession_Hash());
	}
	return Singleton;
}
template<> UNREALP2P_API UScriptStruct* StaticStruct<FLocalSession>()
{
	return FLocalSession::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalSession(FLocalSession::StaticStruct, TEXT("/Script/UnrealP2P"), TEXT("LocalSession"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealP2P_StaticRegisterNativesFLocalSession
{
	FScriptStruct_UnrealP2P_StaticRegisterNativesFLocalSession()
	{
		UScriptStruct::DeferCppStructOps<FLocalSession>(FName(TEXT("LocalSession")));
	}
} ScriptStruct_UnrealP2P_StaticRegisterNativesFLocalSession;
	struct Z_Construct_UScriptStruct_FLocalSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSession_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe6\x9c\xac\xe5\x9c\xb0Session\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
		{ "ModuleRelativePath", "Source/P2PObject.h" },
		{ "ToolTip", "\xe6\x9c\xac\xe5\x9c\xb0Session\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalSession>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "FLocalSession" },
		{ "ModuleRelativePath", "Source/P2PObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalSession, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_Password_MetaData[] = {
		{ "Category", "FLocalSession" },
		{ "ModuleRelativePath", "Source/P2PObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalSession, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_Property_MetaData[] = {
		{ "Category", "FLocalSession" },
		{ "ModuleRelativePath", "Source/P2PObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalSession, Property), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_Property_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSession_Statics::NewProp_Property,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealP2P,
		nullptr,
		&NewStructOps,
		"LocalSession",
		sizeof(FLocalSession),
		alignof(FLocalSession),
		Z_Construct_UScriptStruct_FLocalSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalSession()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalSession_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealP2P();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalSession"), sizeof(FLocalSession), Get_Z_Construct_UScriptStruct_FLocalSession_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalSession_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalSession_Hash() { return 2565290947U; }
class UScriptStruct* FListSession::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALP2P_API uint32 Get_Z_Construct_UScriptStruct_FListSession_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FListSession, Z_Construct_UPackage__Script_UnrealP2P(), TEXT("ListSession"), sizeof(FListSession), Get_Z_Construct_UScriptStruct_FListSession_Hash());
	}
	return Singleton;
}
template<> UNREALP2P_API UScriptStruct* StaticStruct<FListSession>()
{
	return FListSession::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FListSession(FListSession::StaticStruct, TEXT("/Script/UnrealP2P"), TEXT("ListSession"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealP2P_StaticRegisterNativesFListSession
{
	FScriptStruct_UnrealP2P_StaticRegisterNativesFListSession()
	{
		UScriptStruct::DeferCppStructOps<FListSession>(FName(TEXT("ListSession")));
	}
} ScriptStruct_UnrealP2P_StaticRegisterNativesFListSession;
	struct Z_Construct_UScriptStruct_FListSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsePassword_MetaData[];
#endif
		static void NewProp_UsePassword_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsePassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListSession_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe5\x88\x97\xe8\xa1\xa8Session\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
		{ "ModuleRelativePath", "Source/P2PObject.h" },
		{ "ToolTip", "\xe5\x88\x97\xe8\xa1\xa8Session\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
	};
#endif
	void* Z_Construct_UScriptStruct_FListSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FListSession>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListSession_Statics::NewProp_IP_MetaData[] = {
		{ "Category", "FListSession" },
		{ "ModuleRelativePath", "Source/P2PObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FListSession_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FListSession, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FListSession_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListSession_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListSession_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "FListSession" },
		{ "ModuleRelativePath", "Source/P2PObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FListSession_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FListSession, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FListSession_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListSession_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListSession_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "FListSession" },
		{ "ModuleRelativePath", "Source/P2PObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FListSession_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FListSession, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FListSession_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListSession_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListSession_Statics::NewProp_UsePassword_MetaData[] = {
		{ "Category", "FListSession" },
		{ "ModuleRelativePath", "Source/P2PObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FListSession_Statics::NewProp_UsePassword_SetBit(void* Obj)
	{
		((FListSession*)Obj)->UsePassword = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FListSession_Statics::NewProp_UsePassword = { "UsePassword", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FListSession), &Z_Construct_UScriptStruct_FListSession_Statics::NewProp_UsePassword_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FListSession_Statics::NewProp_UsePassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListSession_Statics::NewProp_UsePassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListSession_Statics::NewProp_Property_MetaData[] = {
		{ "Category", "FListSession" },
		{ "ModuleRelativePath", "Source/P2PObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FListSession_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FListSession, Property), METADATA_PARAMS(Z_Construct_UScriptStruct_FListSession_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListSession_Statics::NewProp_Property_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FListSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListSession_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListSession_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListSession_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListSession_Statics::NewProp_UsePassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListSession_Statics::NewProp_Property,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FListSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealP2P,
		nullptr,
		&NewStructOps,
		"ListSession",
		sizeof(FListSession),
		alignof(FListSession),
		Z_Construct_UScriptStruct_FListSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FListSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FListSession()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FListSession_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealP2P();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ListSession"), sizeof(FListSession), Get_Z_Construct_UScriptStruct_FListSession_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FListSession_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FListSession_Hash() { return 2102732582U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
