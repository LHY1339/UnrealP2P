// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALP2P_P2PSubsystem_generated_h
#error "P2PSubsystem.generated.h already included, missing '#pragma once' in P2PSubsystem.h"
#endif
#define UNREALP2P_P2PSubsystem_generated_h

#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_10_DELEGATE \
static inline void FOnSessionListChange_DelegateWrapper(const FMulticastScriptDelegate& OnSessionListChange) \
{ \
	OnSessionListChange.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_SPARSE_DATA
#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlushSessionList); \
	DECLARE_FUNCTION(execConnectSession); \
	DECLARE_FUNCTION(execSetServer); \
	DECLARE_FUNCTION(execSetLocalSessionProperty); \
	DECLARE_FUNCTION(execSetLocalSessionPassword);


#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlushSessionList); \
	DECLARE_FUNCTION(execConnectSession); \
	DECLARE_FUNCTION(execSetServer); \
	DECLARE_FUNCTION(execSetLocalSessionProperty); \
	DECLARE_FUNCTION(execSetLocalSessionPassword);


#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUP2PSubsystem(); \
	friend struct Z_Construct_UClass_UP2PSubsystem_Statics; \
public: \
	DECLARE_CLASS(UP2PSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealP2P"), NO_API) \
	DECLARE_SERIALIZER(UP2PSubsystem)


#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUP2PSubsystem(); \
	friend struct Z_Construct_UClass_UP2PSubsystem_Statics; \
public: \
	DECLARE_CLASS(UP2PSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealP2P"), NO_API) \
	DECLARE_SERIALIZER(UP2PSubsystem)


#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UP2PSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UP2PSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UP2PSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UP2PSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UP2PSubsystem(UP2PSubsystem&&); \
	NO_API UP2PSubsystem(const UP2PSubsystem&); \
public:


#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UP2PSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UP2PSubsystem(UP2PSubsystem&&); \
	NO_API UP2PSubsystem(const UP2PSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UP2PSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UP2PSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UP2PSubsystem)


#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_12_PROLOG
#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_SPARSE_DATA \
	HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_RPC_WRAPPERS \
	HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_INCLASS \
	HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_SPARSE_DATA \
	HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALP2P_API UClass* StaticClass<class UP2PSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UnrealP2P_Source_UnrealP2P_Source_P2PSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
