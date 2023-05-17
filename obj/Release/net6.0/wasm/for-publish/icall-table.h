#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
179,
184,
185,
186,
187,
188,
189,
190,
191,
194,
195,
295,
296,
298,
326,
327,
328,
348,
349,
350,
351,
352,
419,
420,
421,
424,
460,
461,
463,
465,
467,
469,
474,
482,
483,
484,
485,
486,
487,
488,
489,
490,
491,
623,
624,
631,
634,
636,
641,
642,
644,
645,
649,
651,
652,
653,
654,
656,
657,
658,
661,
662,
665,
666,
667,
735,
736,
738,
746,
747,
748,
749,
750,
754,
755,
756,
757,
758,
759,
761,
762,
763,
765,
766,
767,
769,
967,
1147,
1148,
5511,
5512,
5514,
5515,
5516,
5517,
5518,
5519,
5521,
5523,
5525,
5526,
5527,
5535,
5537,
5541,
5542,
5544,
5546,
5548,
5559,
5568,
5569,
5571,
5572,
5573,
5574,
5575,
5577,
5579,
6499,
6503,
6505,
6506,
6507,
6508,
6540,
6541,
6542,
6561,
6562,
6563,
6564,
6594,
6639,
6642,
6651,
6652,
6653,
7048,
7051,
7052,
7087,
7088,
7089,
7106,
7112,
7119,
7129,
7133,
7207,
7208,
7219,
7220,
7221,
7222,
7223,
7224,
7231,
7245,
7265,
7266,
7274,
7276,
7283,
7284,
7287,
7289,
7294,
7300,
7301,
7308,
7310,
7320,
7323,
7324,
7325,
7335,
7346,
7352,
7353,
7354,
7356,
7357,
7367,
7385,
7402,
7403,
7404,
7424,
7454,
7455,
7907,
7908,
8052,
8291,
8292,
8300,
8301,
8302,
8307,
8369,
8531,
8532,
9078,
10146,
10165,
10172,
10173,
10175,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Decrement_Long (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 179,
ves_icall_System_Array_InternalCreate,
// token 184,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 185,
ves_icall_System_Array_CanChangePrimitive,
// token 186,
ves_icall_System_Array_FastCopy_raw,
// token 187,
ves_icall_System_Array_GetLength_raw,
// token 188,
ves_icall_System_Array_GetLowerBound_raw,
// token 189,
ves_icall_System_Array_GetGenericValue_icall,
// token 190,
ves_icall_System_Array_GetValueImpl_raw,
// token 191,
ves_icall_System_Array_SetGenericValue_icall,
// token 194,
ves_icall_System_Array_SetValueImpl_raw,
// token 195,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 295,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 296,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 298,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 326,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 327,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 328,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 348,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 349,
ves_icall_System_Enum_ToObject_raw,
// token 350,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 351,
ves_icall_System_Enum_get_underlying_type_raw,
// token 352,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 419,
ves_icall_System_Environment_get_ProcessorCount,
// token 420,
ves_icall_System_Environment_get_TickCount,
// token 421,
ves_icall_System_Environment_get_TickCount64,
// token 424,
ves_icall_System_Environment_FailFast_raw,
// token 460,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 461,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 463,
ves_icall_System_GC_SuppressFinalize_raw,
// token 465,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 467,
ves_icall_System_GC_GetGCMemoryInfo,
// token 469,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 474,
ves_icall_System_Object_MemberwiseClone_raw,
// token 482,
ves_icall_System_Math_Abs_double,
// token 483,
ves_icall_System_Math_Ceiling,
// token 484,
ves_icall_System_Math_Cos,
// token 485,
ves_icall_System_Math_Floor,
// token 486,
ves_icall_System_Math_Log10,
// token 487,
ves_icall_System_Math_Pow,
// token 488,
ves_icall_System_Math_Sin,
// token 489,
ves_icall_System_Math_Sqrt,
// token 490,
ves_icall_System_Math_Tan,
// token 491,
ves_icall_System_Math_ModF,
// token 623,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 624,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 631,
ves_icall_RuntimeType_make_array_type_raw,
// token 634,
ves_icall_RuntimeType_make_byref_type_raw,
// token 636,
ves_icall_RuntimeType_MakePointerType_raw,
// token 641,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 642,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 644,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 645,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 649,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 651,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 652,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 653,
ves_icall_System_RuntimeType_getFullName_raw,
// token 654,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 656,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 657,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 658,
ves_icall_RuntimeType_GetFields_native_raw,
// token 661,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 662,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 665,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 666,
ves_icall_RuntimeType_get_Name_raw,
// token 667,
ves_icall_RuntimeType_get_Namespace_raw,
// token 735,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 736,
ves_icall_reflection_get_token_raw,
// token 738,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 746,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 747,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 748,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 749,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 750,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 754,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 755,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 756,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 757,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 758,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 759,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 761,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 762,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 763,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 765,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 766,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 767,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 769,
ves_icall_System_String_FastAllocateString_raw,
// token 967,
ves_icall_System_Type_internal_from_handle_raw,
// token 1147,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1148,
ves_icall_System_ValueType_Equals_raw,
// token 5511,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5512,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5514,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5515,
ves_icall_System_Threading_Interlocked_Decrement_Long,
// token 5516,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5517,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5518,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5519,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5521,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5523,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5525,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 5526,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5527,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5535,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5537,
mono_monitor_exit_icall_raw,
// token 5541,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5542,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5544,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5546,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5548,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5559,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5568,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5569,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5571,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5572,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5573,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5574,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5575,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5577,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5579,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6499,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6503,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6505,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6506,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6507,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6508,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6540,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6541,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6542,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6561,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6562,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6563,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6564,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6594,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6639,
mono_object_hash_icall_raw,
// token 6642,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 6651,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6652,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6653,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7048,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7051,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7052,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7087,
mono_digest_get_public_token,
// token 7088,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7089,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 7106,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7112,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7119,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7129,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7133,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7207,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 7208,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7219,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 7220,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 7221,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 7222,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 7223,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7224,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 7231,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7245,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7265,
ves_icall_reflection_get_token_raw,
// token 7266,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7274,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7276,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7283,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7284,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7287,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7289,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7294,
ves_icall_reflection_get_token_raw,
// token 7300,
ves_icall_get_method_info_raw,
// token 7301,
ves_icall_get_method_attributes,
// token 7308,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7310,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7320,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7323,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7324,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7325,
ves_icall_reflection_get_token_raw,
// token 7335,
ves_icall_InternalInvoke_raw,
// token 7346,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7352,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7353,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7354,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7356,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7357,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7367,
ves_icall_InternalInvoke_raw,
// token 7385,
ves_icall_reflection_get_token_raw,
// token 7402,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 7403,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 7404,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7424,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7454,
ves_icall_reflection_get_token_raw,
// token 7455,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7907,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 7908,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8052,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8291,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8292,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8300,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 8301,
ves_icall_ModuleBuilder_getToken_raw,
// token 8302,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 8307,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8369,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8531,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8532,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9078,
ves_icall_System_Diagnostics_Debugger_Log,
// token 10146,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10165,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10172,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 10173,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10175,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
};
