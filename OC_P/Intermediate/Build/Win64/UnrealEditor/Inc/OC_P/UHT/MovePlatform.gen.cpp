// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OC_P/MovePlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovePlatform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OC_P_API UClass* Z_Construct_UClass_AMovePlatform();
	OC_P_API UClass* Z_Construct_UClass_AMovePlatform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OC_P();
// End Cross Module References
	void AMovePlatform::StaticRegisterNativesAMovePlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovePlatform);
	UClass* Z_Construct_UClass_AMovePlatform_NoRegister()
	{
		return AMovePlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMovePlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatSum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatSum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovePlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OC_P,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovePlatform.h" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_MyInt_MetaData[] = {
		{ "Category", "MovePlatform" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_MyInt = { "MyInt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovePlatform, MyInt), METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::NewProp_MyInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_MyInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_InputA_MetaData[] = {
		{ "Category", "MovePlatform" },
		{ "Comment", "//Int Addition\n" },
		{ "ModuleRelativePath", "MovePlatform.h" },
		{ "ToolTip", "Int Addition" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_InputA = { "InputA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovePlatform, InputA), METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::NewProp_InputA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_InputA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_InputB_MetaData[] = {
		{ "Category", "MovePlatform" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_InputB = { "InputB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovePlatform, InputB), METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::NewProp_InputB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_InputB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "MovePlatform" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovePlatform, Result), METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatA_MetaData[] = {
		{ "Category", "MovePlatform" },
		{ "Comment", "//Float Addition\n" },
		{ "ModuleRelativePath", "MovePlatform.h" },
		{ "ToolTip", "Float Addition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatA = { "FloatA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovePlatform, FloatA), METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatB_MetaData[] = {
		{ "Category", "MovePlatform" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatB = { "FloatB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovePlatform, FloatB), METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatSum_MetaData[] = {
		{ "Category", "MovePlatform" },
		{ "ModuleRelativePath", "MovePlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatSum = { "FloatSum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovePlatform, FloatSum), METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatSum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatSum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovePlatform_Statics::NewProp_MyFloat_MetaData[] = {
		{ "Category", "MovePlatform" },
		{ "Comment", "//Float Addition\n" },
		{ "ModuleRelativePath", "MovePlatform.h" },
		{ "ToolTip", "Float Addition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovePlatform_Statics::NewProp_MyFloat = { "MyFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovePlatform, MyFloat), METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::NewProp_MyFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::NewProp_MyFloat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovePlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_MyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_InputA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_InputB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_FloatSum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovePlatform_Statics::NewProp_MyFloat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovePlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovePlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovePlatform_Statics::ClassParams = {
		&AMovePlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovePlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovePlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovePlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovePlatform()
	{
		if (!Z_Registration_Info_UClass_AMovePlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovePlatform.OuterSingleton, Z_Construct_UClass_AMovePlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovePlatform.OuterSingleton;
	}
	template<> OC_P_API UClass* StaticClass<AMovePlatform>()
	{
		return AMovePlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovePlatform);
	AMovePlatform::~AMovePlatform() {}
	struct Z_CompiledInDeferFile_FID_Desktop_SnekStuff_GameDev_My_Projects_GameDevTV_GDevTV_ObsCourse_OC_P_Source_OC_P_MovePlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_SnekStuff_GameDev_My_Projects_GameDevTV_GDevTV_ObsCourse_OC_P_Source_OC_P_MovePlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovePlatform, AMovePlatform::StaticClass, TEXT("AMovePlatform"), &Z_Registration_Info_UClass_AMovePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovePlatform), 2067294663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Desktop_SnekStuff_GameDev_My_Projects_GameDevTV_GDevTV_ObsCourse_OC_P_Source_OC_P_MovePlatform_h_2936096184(TEXT("/Script/OC_P"),
		Z_CompiledInDeferFile_FID_Desktop_SnekStuff_GameDev_My_Projects_GameDevTV_GDevTV_ObsCourse_OC_P_Source_OC_P_MovePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Desktop_SnekStuff_GameDev_My_Projects_GameDevTV_GDevTV_ObsCourse_OC_P_Source_OC_P_MovePlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
