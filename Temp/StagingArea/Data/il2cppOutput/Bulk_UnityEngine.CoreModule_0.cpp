﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct VirtFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t4104246196;
// System.String
struct String_t;
// UnityEngine.Application/LogCallback
struct LogCallback_t3588208630;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Type
struct Type_t;
// System.Collections.Generic.Stack`1<System.Type>
struct Stack_1_t3327334215;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t3956019502;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.RequireComponent
struct RequireComponent_t3490506609;
// UnityEngine.DefaultExecutionOrder
struct DefaultExecutionOrder_t3059642329;
// UnityEngine.DisallowMultipleComponent
struct DisallowMultipleComponent_t1422053217;
// UnityEngine.ExecuteInEditMode
struct ExecuteInEditMode_t3727731349;
// System.Collections.Generic.List`1<UnityEngine.BeforeRenderHelper/OrderBlock>
struct List_1_t3058052573;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.CSSLayout.CSSMeasureFunc
struct CSSMeasureFunc_t1554030124;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_t3851719731;
// System.WeakReference
struct WeakReference_t1334886716;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t1301971883;
// UnityEngine.CullingGroup
struct CullingGroup_t2096318768;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t2136737110;
// UnityEngine.ILogger
struct ILogger_t2607134790;
// UnityEngine.DebugLogHandler
struct DebugLogHandler_t826086171;
// UnityEngine.Logger
struct Logger_t274032455;
// UnityEngine.ILogHandler
struct ILogHandler_t2464711877;
// UnityEngine.Display
struct Display_t1387065949;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t51287044;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2187958399;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2703961024;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Delegate
struct Delegate_t1188392813;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t832123510;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t4176035766;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_t1683813913;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t3407714124;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t3960448221;
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t3723462114;
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t982173797;
// UnityEngine.Events.CachedInvokableCall`1<System.String>
struct CachedInvokableCall_1_t4173646029;
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t1111334208;
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t2423483305;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t584821570;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2943407543;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// UnityEngine.Experimental.Rendering.IRenderPipeline
struct IRenderPipeline_t857809005;
// UnityEngine.Experimental.Rendering.IRenderPipelineAsset
struct IRenderPipelineAsset_t3275513850;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Gradient
struct Gradient_t3067099924;
// UnityEngine.GUIElement
struct GUIElement_t3567083079;
// UnityEngine.GUILayer
struct GUILayer_t2783472903;
// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t2337225216;
// System.Attribute
struct Attribute_t861562559;
// UnityEngine.Internal.ExcludeFromDocsAttribute
struct ExcludeFromDocsAttribute_t3592494112;
// System.IO.Stream
struct Stream_t1273022909;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.NativeClassAttribute
struct NativeClassAttribute_t2601352714;
// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct MessageEventArgs_t1170575784;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_t3081694049;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t3411787513;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t3832605257;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_t3157010512;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t3251856151;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441;
// System.Func`2<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers,System.Boolean>
struct Func_2_t2172606577;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct IEnumerable_1_t664788659;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct UnityEvent_1_t2052235288;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3961765668;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct MessageTypeSubscribers_t1684935770;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t1491597365;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t3219022681;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_t4203540982;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t2165061829;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t2933211702;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t1262235195;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t2859083114;
// UnityEngine.SerializeField
struct SerializeField_t3286833614;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Diagnostics.StackTrace
struct StackTrace_t1598645457;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Exception
struct Exception_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.Transform/Enumerator
struct Enumerator_t3442430665;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t819399007;
// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct RequestAtlasCallback_t3100554279;
// UnityEngine.U2D.SpriteAtlas
struct SpriteAtlas_t646931412;
// UnityEngine.UnityException
struct UnityException_t3598173660;
// UnityEngine.UnitySynchronizationContext
struct UnitySynchronizationContext_t1887453786;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t1200778106;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t777845177;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t254868554;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Gyroscope
struct Gyroscope_t3288342876;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t2353432069;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers[]
struct MessageTypeSubscribersU5BU5D_t1257266431;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3944607041;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t4021634645;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t2947482199;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.WeakReference,System.Collections.DictionaryEntry>
struct Transform_1_t2011406813;
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_t3723878365;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1997726418;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1685002053;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3936143868;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3239458680;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t2245623724;
// UnityEngine.BeforeRenderHelper/OrderBlock[]
struct OrderBlockU5BU5D_t2389202590;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t682124106;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3535781894;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t2432286830;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1982102915;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.Display[]
struct DisplayU5BU5D_t103034768;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t829358056;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* Application_t1852185770_il2cpp_TypeInfo_var;
extern const uint32_t Application_CallLowMemory_m2813539296_MetadataUsageId;
extern const uint32_t Application_CallLogCallback_m255562505_MetadataUsageId;
extern RuntimeClass* BeforeRenderHelper_t1336903776_il2cpp_TypeInfo_var;
extern const uint32_t Application_InvokeOnBeforeRender_m2875673833_MetadataUsageId;
extern RuntimeClass* LogType_t73765434_il2cpp_TypeInfo_var;
extern const uint32_t LogCallback_BeginInvoke_m1868775196_MetadataUsageId;
extern RuntimeClass* Action_1_t1617499438_il2cpp_TypeInfo_var;
extern const uint32_t AssetBundleCreateRequest_t3119663542_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t AssetBundleCreateRequest_t3119663542_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t AssetBundleRequest_t699759206_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t AssetBundleRequest_t699759206_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t AsyncOperation_t1445031843_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t AsyncOperation_t1445031843_com_FromNativeMethodDefinition_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m1955091167_RuntimeMethod_var;
extern const uint32_t AsyncOperation_InvokeCompletionEvent_m1410305036_MetadataUsageId;
extern const RuntimeType* MonoBehaviour_t3962482529_0_0_0_var;
extern const RuntimeType* DisallowMultipleComponent_t1422053217_0_0_0_var;
extern RuntimeClass* Stack_1_t3327334215_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Stack_1__ctor_m3716217587_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m506528439_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Pop_m2843357855_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_get_Count_m1286321891_RuntimeMethod_var;
extern const uint32_t AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m681389990_MetadataUsageId;
extern const RuntimeType* RequireComponent_t3490506609_0_0_0_var;
extern RuntimeClass* RequireComponentU5BU5D_t2245623724_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3956019502_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3073166008_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m576010208_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m1257172357_RuntimeMethod_var;
extern const uint32_t AttributeHelperEngine_GetRequiredComponents_m568829708_MetadataUsageId;
extern const RuntimeType* ExecuteInEditMode_t3727731349_0_0_0_var;
extern const uint32_t AttributeHelperEngine_CheckIsEditorScript_m705968799_MetadataUsageId;
extern RuntimeClass* AttributeHelperEngine_t2735742303_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AttributeHelperEngine_GetCustomAttributeOfType_TisDefaultExecutionOrder_t3059642329_m2317108536_RuntimeMethod_var;
extern const uint32_t AttributeHelperEngine_GetDefaultExecutionOrderFor_m2255077112_MetadataUsageId;
extern RuntimeClass* DisallowMultipleComponentU5BU5D_t3936143868_il2cpp_TypeInfo_var;
extern RuntimeClass* ExecuteInEditModeU5BU5D_t3239458680_il2cpp_TypeInfo_var;
extern const uint32_t AttributeHelperEngine__cctor_m1900959362_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m1878021807_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1337941140_RuntimeMethod_var;
extern const uint32_t BeforeRenderHelper_Invoke_m50072094_MetadataUsageId;
extern RuntimeClass* List_1_t3058052573_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1345008423_RuntimeMethod_var;
extern const uint32_t BeforeRenderHelper__cctor_m1834968278_MetadataUsageId;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const uint32_t OrderBlock_t1585977831_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t OrderBlock_t1585977831_com_FromNativeMethodDefinition_MetadataUsageId;
extern RuntimeClass* Camera_t4157153871_il2cpp_TypeInfo_var;
extern const uint32_t Camera_FireOnPreCull_m2869588437_MetadataUsageId;
extern const uint32_t Camera_FireOnPreRender_m3450823610_MetadataUsageId;
extern const uint32_t Camera_FireOnPostRender_m1456255957_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t Component__ctor_m1928064382_MetadataUsageId;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* CSSMeasureMode_t3184398371_il2cpp_TypeInfo_var;
extern const uint32_t CSSMeasureFunc_BeginInvoke_m3802154595_MetadataUsageId;
extern RuntimeClass* Native_t2017798882_il2cpp_TypeInfo_var;
extern RuntimeClass* CSSMeasureFunc_t1554030124_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2207359883_RuntimeMethod_var;
extern const uint32_t Native_CSSNodeGetMeasureFunc_m2145410129_MetadataUsageId;
extern const uint32_t Native_CSSNodeMeasureInvoke_m2055858128_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3851719731_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m602294741_RuntimeMethod_var;
extern const uint32_t Native__cctor_m1435623442_MetadataUsageId;
extern RuntimeClass* StateChanged_t2136737110_il2cpp_TypeInfo_var;
extern const uint32_t CullingGroup_t2096318768_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t CullingGroup_t2096318768_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t CullingGroup_Finalize_m2121330955_MetadataUsageId;
extern RuntimeClass* CullingGroupEvent_t1722745023_il2cpp_TypeInfo_var;
extern const uint32_t CullingGroup_SendEvents_m2491312335_MetadataUsageId;
extern const uint32_t StateChanged_BeginInvoke_m4029305912_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const uint32_t Debug_get_unityLogger_m2239795986_MetadataUsageId;
extern RuntimeClass* ILogger_t2607134790_il2cpp_TypeInfo_var;
extern const uint32_t Debug_Log_m4051431634_MetadataUsageId;
extern const uint32_t Debug_LogError_m2850623458_MetadataUsageId;
extern RuntimeClass* DebugLogHandler_t826086171_il2cpp_TypeInfo_var;
extern RuntimeClass* Logger_t274032455_il2cpp_TypeInfo_var;
extern const uint32_t Debug__cctor_m1523394265_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t DebugLogHandler_LogFormat_m487864506_MetadataUsageId;
extern RuntimeClass* DisplayU5BU5D_t103034768_il2cpp_TypeInfo_var;
extern RuntimeClass* Display_t1387065949_il2cpp_TypeInfo_var;
extern const uint32_t Display_RecreateDisplayList_m4040831261_MetadataUsageId;
extern const uint32_t Display_FireDisplaysUpdated_m41210855_MetadataUsageId;
extern const uint32_t Display__cctor_m1972153728_MetadataUsageId;
extern String_t* _stringLiteral155902455;
extern String_t* _stringLiteral1973799399;
extern String_t* _stringLiteral1736874801;
extern String_t* _stringLiteral441250670;
extern String_t* _stringLiteral3851749947;
extern String_t* _stringLiteral443216750;
extern const uint32_t ArgumentCache_TidyAssemblyTypeName_m3234393930_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2833503317;
extern String_t* _stringLiteral3941509395;
extern const uint32_t BaseInvokableCall__ctor_m2110966014_MetadataUsageId;
extern const uint32_t BaseInvokableCall_AllowInvoke_m878393606_MetadataUsageId;
extern const RuntimeType* UnityAction_t3245792599_0_0_0_var;
extern const uint32_t InvokableCall__ctor_m1303836326_MetadataUsageId;
extern const uint32_t InvokableCall_add_Delegate_m491308793_MetadataUsageId;
extern const uint32_t InvokableCall_remove_Delegate_m1376110510_MetadataUsageId;
extern RuntimeClass* List_1_t4176035766_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1425123358_RuntimeMethod_var;
extern const uint32_t InvokableCallList__ctor_m829480958_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m178523244_RuntimeMethod_var;
extern const uint32_t InvokableCallList_AddPersistentInvokableCall_m778853773_MetadataUsageId;
extern const RuntimeMethod* List_1_Clear_m803816076_RuntimeMethod_var;
extern const uint32_t InvokableCallList_ClearPersistent_m1904264973_MetadataUsageId;
extern const RuntimeMethod* List_1_AddRange_m3536422894_RuntimeMethod_var;
extern const uint32_t InvokableCallList_PrepareInvoke_m4003891334_MetadataUsageId;
extern RuntimeClass* ArgumentCache_t2187958399_il2cpp_TypeInfo_var;
extern const uint32_t PersistentCall__ctor_m1217622171_MetadataUsageId;
extern const uint32_t PersistentCall_IsValid_m2325196163_MetadataUsageId;
extern RuntimeClass* CachedInvokableCall_1_t3723462114_il2cpp_TypeInfo_var;
extern RuntimeClass* CachedInvokableCall_1_t982173797_il2cpp_TypeInfo_var;
extern RuntimeClass* CachedInvokableCall_1_t4173646029_il2cpp_TypeInfo_var;
extern RuntimeClass* CachedInvokableCall_1_t2423483305_il2cpp_TypeInfo_var;
extern RuntimeClass* InvokableCall_t832123510_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CachedInvokableCall_1__ctor_m1997047287_RuntimeMethod_var;
extern const RuntimeMethod* CachedInvokableCall_1__ctor_m2046334630_RuntimeMethod_var;
extern const RuntimeMethod* CachedInvokableCall_1__ctor_m2435934642_RuntimeMethod_var;
extern const RuntimeMethod* CachedInvokableCall_1__ctor_m3078689395_RuntimeMethod_var;
extern const uint32_t PersistentCall_GetRuntimeCall_m3976533158_MetadataUsageId;
extern const RuntimeType* Object_t631007953_0_0_0_var;
extern const RuntimeType* CachedInvokableCall_1_t3153979999_0_0_0_var;
extern const RuntimeType* MethodInfo_t_0_0_0_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseInvokableCall_t2703961024_il2cpp_TypeInfo_var;
extern const uint32_t PersistentCall_GetObjectCall_m4041241444_MetadataUsageId;
extern RuntimeClass* List_1_t584821570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2234084945_RuntimeMethod_var;
extern const uint32_t PersistentCallGroup__ctor_m1525263635_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m498955693_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1824438863_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4100612698_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2540888223_RuntimeMethod_var;
extern const uint32_t PersistentCallGroup_Initialize_m4253175514_MetadataUsageId;
extern const uint32_t UnityEvent_FindMethod_Impl_m2312362624_MetadataUsageId;
extern const uint32_t UnityEvent_GetDelegate_m3669208949_MetadataUsageId;
extern RuntimeClass* InvokableCallList_t2498835369_il2cpp_TypeInfo_var;
extern RuntimeClass* PersistentCallGroup_t3050769227_il2cpp_TypeInfo_var;
extern const uint32_t UnityEventBase__ctor_m1851535676_MetadataUsageId;
extern const uint32_t UnityEventBase_FindMethod_m622251156_MetadataUsageId;
extern const RuntimeType* Single_t1397266774_0_0_0_var;
extern const RuntimeType* Int32_t2950945753_0_0_0_var;
extern const RuntimeType* Boolean_t97287965_0_0_0_var;
extern const RuntimeType* String_t_0_0_0_var;
extern const uint32_t UnityEventBase_FindMethod_m3366332957_MetadataUsageId;
extern String_t* _stringLiteral3452614528;
extern const uint32_t UnityEventBase_ToString_m1554306026_MetadataUsageId;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const uint32_t UnityEventBase_GetValidMethodInfo_m3989987635_MetadataUsageId;
extern RuntimeClass* RenderPipelineManager_t4036911426_il2cpp_TypeInfo_var;
extern const uint32_t RenderPipelineManager_get_currentPipeline_m1638613344_MetadataUsageId;
extern const uint32_t RenderPipelineManager_set_currentPipeline_m3492857006_MetadataUsageId;
extern RuntimeClass* IRenderPipelineAsset_t3275513850_il2cpp_TypeInfo_var;
extern const uint32_t RenderPipelineManager_CleanupRenderPipeline_m3545163046_MetadataUsageId;
extern RuntimeClass* IRenderPipeline_t857809005_il2cpp_TypeInfo_var;
extern const uint32_t RenderPipelineManager_DoRenderLoop_Internal_m3799666479_MetadataUsageId;
extern const uint32_t RenderPipelineManager_PrepareRenderPipeline_m4184225229_MetadataUsageId;
extern const uint32_t GameObject__ctor_m3707688467_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t Input_GetKeyDown_m17791917_MetadataUsageId;
extern const uint32_t Input_get_mousePosition_m1616496925_MetadataUsageId;
extern const uint32_t Input__cctor_m325696046_MetadataUsageId;
extern RuntimeClass* DefaultValueAttribute_t2337225216_il2cpp_TypeInfo_var;
extern const uint32_t DefaultValueAttribute_Equals_m443523471_MetadataUsageId;
extern String_t* _stringLiteral1202628608;
extern const uint32_t Logger_GetString_m3669755330_MetadataUsageId;
extern RuntimeClass* ILogHandler_t2464711877_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral628085470;
extern const uint32_t Logger_Log_m969976427_MetadataUsageId;
extern const uint32_t Logger_LogFormat_m3300686007_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1050427080;
extern String_t* _stringLiteral3236680756;
extern String_t* _stringLiteral3092135949;
extern String_t* _stringLiteral1838966355;
extern const uint32_t ManagedStreamHelpers_ValidateLoadFromStream_m580138133_MetadataUsageId;
extern String_t* _stringLiteral2664163362;
extern String_t* _stringLiteral696106652;
extern const uint32_t ManagedStreamHelpers_ManagedStreamRead_m481666286_MetadataUsageId;
extern const uint32_t ManagedStreamHelpers_ManagedStreamSeek_m3158782053_MetadataUsageId;
extern const uint32_t ManagedStreamHelpers_ManagedStreamLength_m2930872960_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t Mathf_Approximately_m245805902_MetadataUsageId;
extern RuntimeClass* MathfInternal_t624072491_il2cpp_TypeInfo_var;
extern const uint32_t Mathf__cctor_m1175545152_MetadataUsageId;
extern const uint32_t MonoBehaviour_print_m330341231_MetadataUsageId;
extern RuntimeClass* PlayerEditorConnectionEvents_t3411787513_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const uint32_t PlayerConnection__ctor_m2639507345_MetadataUsageId;
extern RuntimeClass* PlayerConnection_t3081694049_il2cpp_TypeInfo_var;
extern const uint32_t PlayerConnection_get_instance_m1750121257_MetadataUsageId;
extern const RuntimeMethod* ScriptableObject_CreateInstance_TisPlayerConnection_t3081694049_m1971238771_RuntimeMethod_var;
extern const uint32_t PlayerConnection_CreateInstance_m902052006_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern const uint32_t PlayerConnection_MessageCallbackInternal_m1914517467_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_Invoke_m3604335408_RuntimeMethod_var;
extern const uint32_t PlayerConnection_ConnectedCallbackInternal_m1706913195_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m3037048099_RuntimeMethod_var;
extern const uint32_t PlayerConnection_DisconnectedCallback_m1697017309_MetadataUsageId;
extern RuntimeClass* List_1_t3157010512_il2cpp_TypeInfo_var;
extern RuntimeClass* ConnectionChangeEvent_t3251856151_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m134154014_RuntimeMethod_var;
extern const uint32_t PlayerEditorConnectionEvents__ctor_m3177489832_MetadataUsageId;
extern RuntimeClass* U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2172606577_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageEventArgs_t1170575784_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t664788659_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2117506238_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_U3CU3Em__0_m444206473_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m302082295_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisMessageTypeSubscribers_t1684935770_m2256379362_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Any_TisMessageTypeSubscribers_t1684935770_m1059743985_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_Invoke_m1904070161_RuntimeMethod_var;
extern String_t* _stringLiteral3307764161;
extern const uint32_t PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_m2094591713_MetadataUsageId;
extern const uint32_t U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_U3CU3Em__0_m444206473_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1__ctor_m3816765192_RuntimeMethod_var;
extern const uint32_t ConnectionChangeEvent__ctor_m764126802_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1__ctor_m1298757307_RuntimeMethod_var;
extern const uint32_t MessageEvent__ctor_m1231650089_MetadataUsageId;
extern RuntimeClass* MessageEvent_t1491597365_il2cpp_TypeInfo_var;
extern const uint32_t MessageTypeSubscribers__ctor_m1543468991_MetadataUsageId;
extern const uint32_t Object_Internal_InstantiateSingle_m4074556765_MetadataUsageId;
extern const uint32_t Object_Destroy_m565254235_MetadataUsageId;
extern const uint32_t Object_Equals_m4262027856_MetadataUsageId;
extern const uint32_t Object_op_Implicit_m3574996620_MetadataUsageId;
extern const uint32_t Object_CompareBaseObjects_m2405226032_MetadataUsageId;
extern const uint32_t Object_IsNativeObjectAlive_m3095908075_MetadataUsageId;
extern RuntimeClass* ScriptableObject_t2528358522_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2475671027;
extern String_t* _stringLiteral1766417507;
extern const uint32_t Object_Instantiate_m2682941528_MetadataUsageId;
extern const uint32_t Object_CheckNullArgument_m4237608654_MetadataUsageId;
extern const uint32_t Object_op_Equality_m1810815630_MetadataUsageId;
extern const uint32_t Object_op_Inequality_m4071470834_MetadataUsageId;
extern const uint32_t Object__cctor_m2398773973_MetadataUsageId;
extern RuntimeClass* Playable_t459825607_il2cpp_TypeInfo_var;
extern const uint32_t Playable_get_Null_m3556999077_MetadataUsageId;
extern const uint32_t Playable__cctor_m464525928_MetadataUsageId;
extern RuntimeClass* PlayableBinding_t354260709_il2cpp_TypeInfo_var;
extern const uint32_t PlayableAsset_get_duration_m3549083384_MetadataUsageId;
extern const uint32_t PlayableAsset_Internal_CreatePlayable_m2550417712_MetadataUsageId;
struct Object_t631007953_marshaled_pinvoke;
struct Object_t631007953;;
struct Object_t631007953_marshaled_pinvoke;;
struct Object_t631007953_marshaled_com;
struct Object_t631007953_marshaled_com;;
extern RuntimeClass* PlayableBindingU5BU5D_t829358056_il2cpp_TypeInfo_var;
extern const uint32_t PlayableBinding__cctor_m2159960528_MetadataUsageId;
extern RuntimeClass* PlayableHandle_t1095853803_il2cpp_TypeInfo_var;
extern const uint32_t PlayableHandle_Equals_m1666612586_MetadataUsageId;
extern RuntimeClass* PlayableOutput_t3179894105_il2cpp_TypeInfo_var;
extern const uint32_t PlayableOutput__cctor_m2348686299_MetadataUsageId;
extern RuntimeClass* PlayableOutputHandle_t4208053793_il2cpp_TypeInfo_var;
extern const uint32_t PlayableOutputHandle_Equals_m334596297_MetadataUsageId;
extern RuntimeClass* PropertyName_t3749835189_il2cpp_TypeInfo_var;
extern const uint32_t PropertyName_Equals_m2608649819_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3750091427;
extern const uint32_t PropertyName_ToString_m3328159423_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t Quaternion_get_identity_m3722672781_MetadataUsageId;
extern const uint32_t Quaternion_Equals_m1863659319_MetadataUsageId;
extern String_t* _stringLiteral3651359435;
extern const uint32_t Quaternion_ToString_m2203056442_MetadataUsageId;
extern const uint32_t Quaternion__cctor_m2965965177_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2872073641;
extern const uint32_t Ray_ToString_m1732834890_MetadataUsageId;
extern RuntimeClass* Rect_t2360479859_il2cpp_TypeInfo_var;
extern const uint32_t Rect_Equals_m4169342960_MetadataUsageId;
extern String_t* _stringLiteral736029419;
extern const uint32_t Rect_ToString_m447614148_MetadataUsageId;
extern RuntimeClass* RectTransform_t3704657025_il2cpp_TypeInfo_var;
extern const uint32_t RectTransform_SendReapplyDrivenProperties_m187867097_MetadataUsageId;
extern const uint32_t Resources_Load_m3880010804_MetadataUsageId;
extern RuntimeClass* Scene_t2348375561_il2cpp_TypeInfo_var;
extern const uint32_t Scene_Equals_m581999093_MetadataUsageId;
extern RuntimeClass* SceneManager_t2787271929_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UnityAction_2_Invoke_m1541286357_RuntimeMethod_var;
extern const uint32_t SceneManager_Internal_SceneLoaded_m2694652025_MetadataUsageId;
extern const RuntimeMethod* UnityAction_1_Invoke_m3649732398_RuntimeMethod_var;
extern const uint32_t SceneManager_Internal_SceneUnloaded_m3247148570_MetadataUsageId;
extern const RuntimeMethod* UnityAction_2_Invoke_m944492567_RuntimeMethod_var;
extern const uint32_t SceneManager_Internal_ActiveSceneChanged_m3676176255_MetadataUsageId;
extern const uint32_t ScriptableObject__ctor_m1310743131_MetadataUsageId;
extern RuntimeClass* SendMouseEvents_t3273302915_il2cpp_TypeInfo_var;
extern const uint32_t SendMouseEvents_SetMouseMoved_m2822596724_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisGUILayer_t2783472903_m4244438908_RuntimeMethod_var;
extern const uint32_t SendMouseEvents_HitTestLegacyGUI_m579942228_MetadataUsageId;
extern RuntimeClass* CameraU5BU5D_t1709987734_il2cpp_TypeInfo_var;
extern const uint32_t SendMouseEvents_DoSendMouseEvents_m2140870850_MetadataUsageId;
extern String_t* _stringLiteral4015530243;
extern String_t* _stringLiteral2111035250;
extern String_t* _stringLiteral3620714913;
extern String_t* _stringLiteral1641435443;
extern String_t* _stringLiteral291496430;
extern String_t* _stringLiteral4054394430;
extern String_t* _stringLiteral2882627593;
extern const uint32_t SendMouseEvents_SendEvents_m1956471769_MetadataUsageId;
extern RuntimeClass* HitInfoU5BU5D_t1685002053_il2cpp_TypeInfo_var;
extern const uint32_t SendMouseEvents__cctor_m2378365934_MetadataUsageId;
extern const uint32_t HitInfo_op_Implicit_m665224877_MetadataUsageId;
extern const uint32_t HitInfo_Compare_m2336739674_MetadataUsageId;
extern const uint32_t SetupCoroutine_InvokeMoveNext_m3199342729_MetadataUsageId;
extern const uint32_t SetupCoroutine_InvokeMember_m2661944898_MetadataUsageId;
extern RuntimeClass* StackTraceUtility_t3465565809_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614644;
extern String_t* _stringLiteral3452614529;
extern const uint32_t StackTraceUtility_SetProjectFolder_m830524047_MetadataUsageId;
extern RuntimeClass* StackTrace_t1598645457_il2cpp_TypeInfo_var;
extern const uint32_t StackTraceUtility_ExtractStackTrace_m3279197967_MetadataUsageId;
extern String_t* _stringLiteral3155606;
extern String_t* _stringLiteral2227937992;
extern String_t* _stringLiteral547166083;
extern String_t* _stringLiteral3960313174;
extern String_t* _stringLiteral1464230170;
extern String_t* _stringLiteral1625510709;
extern const uint32_t StackTraceUtility_IsSystemStacktraceType_m299828041_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1698478619;
extern String_t* _stringLiteral2231172943;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral3452614566;
extern String_t* _stringLiteral3450517398;
extern String_t* _stringLiteral3264019870;
extern const uint32_t StackTraceUtility_ExtractStringFromExceptionInternal_m2686726792_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1147544838;
extern String_t* _stringLiteral1974486273;
extern String_t* _stringLiteral3487100581;
extern String_t* _stringLiteral4144164017;
extern String_t* _stringLiteral3629554952;
extern String_t* _stringLiteral461147025;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3452614643;
extern String_t* _stringLiteral3791036681;
extern String_t* _stringLiteral4163537911;
extern String_t* _stringLiteral1311358384;
extern String_t* _stringLiteral4187617987;
extern String_t* _stringLiteral2177867675;
extern String_t* _stringLiteral3452614535;
extern const uint32_t StackTraceUtility_PostprocessStacktrace_m1043256299_MetadataUsageId;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3452614536;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral2678398999;
extern String_t* _stringLiteral1552523976;
extern String_t* _stringLiteral6580196;
extern String_t* _stringLiteral3402824819;
extern String_t* _stringLiteral1670073234;
extern String_t* _stringLiteral1200226066;
extern String_t* _stringLiteral61343007;
extern String_t* _stringLiteral681811338;
extern const uint32_t StackTraceUtility_ExtractFormattedStackTrace_m1281750362_MetadataUsageId;
extern const uint32_t StackTraceUtility__cctor_m1981266436_MetadataUsageId;
extern const uint32_t Texture__ctor_m3554519797_MetadataUsageId;
extern RuntimeClass* Enumerator_t3442430665_il2cpp_TypeInfo_var;
extern const uint32_t Transform_GetEnumerator_m2717073726_MetadataUsageId;
extern RuntimeClass* SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t819399007_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SpriteAtlasManager_Register_m2413332465_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3325790595_RuntimeMethod_var;
extern const uint32_t SpriteAtlasManager_RequestAtlas_m455709951_MetadataUsageId;
extern const uint32_t SpriteAtlasManager__cctor_m3642741753_MetadataUsageId;
extern String_t* _stringLiteral3595826494;
extern const uint32_t UnityException__ctor_m1456865679_MetadataUsageId;
extern RuntimeClass* Queue_1_t1200778106_il2cpp_TypeInfo_var;
extern RuntimeClass* Thread_t2300836069_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Queue_1__ctor_m1971992302_RuntimeMethod_var;
extern const uint32_t UnitySynchronizationContext__ctor_m1707488257_MetadataUsageId;
extern const RuntimeMethod* Queue_1_Dequeue_m979967976_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m3368911732_RuntimeMethod_var;
extern const uint32_t UnitySynchronizationContext_Exec_m3359802660_MetadataUsageId;
extern RuntimeClass* UnitySynchronizationContext_t1887453786_il2cpp_TypeInfo_var;
extern const uint32_t UnitySynchronizationContext_InitializeSynchronizationContext_m3217591031_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_ExecuteTasks_m1310741010_MetadataUsageId;
extern String_t* _stringLiteral2738543532;
extern const uint32_t Vector2_ToString_m1205609053_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t Vector2_Equals_m832062989_MetadataUsageId;
extern const uint32_t Vector2_op_Equality_m2303255133_MetadataUsageId;
extern const uint32_t Vector2__cctor_m2108982652_MetadataUsageId;
extern const uint32_t Vector3_Equals_m1753054704_MetadataUsageId;
extern String_t* _stringLiteral122510266;
extern const uint32_t Vector3_ToString_m759076600_MetadataUsageId;
extern const uint32_t Vector3__cctor_m2599650684_MetadataUsageId;
extern const uint32_t MathfInternal__cctor_m2622893686_MetadataUsageId;
extern RuntimeClass* TypeInferenceRules_t96689094_il2cpp_TypeInfo_var;
extern const uint32_t TypeInferenceRuleAttribute__ctor_m3137488504_MetadataUsageId;

struct KeyframeU5BU5D_t1068524471;
struct ObjectU5BU5D_t2843939325;
struct TypeU5BU5D_t3940880105;
struct RequireComponentU5BU5D_t2245623724;
struct DisallowMultipleComponentU5BU5D_t3936143868;
struct ExecuteInEditModeU5BU5D_t3239458680;
struct CameraU5BU5D_t1709987734;
struct IntPtrU5BU5D_t4013366056;
struct DisplayU5BU5D_t103034768;
struct ParameterInfoU5BU5D_t390618515;
struct ParameterModifierU5BU5D_t2943407543;
struct GameObjectU5BU5D_t3328599146;
struct ByteU5BU5D_t4116647657;
struct PlayableBindingU5BU5D_t829358056;
struct HitInfoU5BU5D_t1685002053;
struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;


#ifndef U3CMODULEU3E_T692745530_H
#define U3CMODULEU3E_T692745530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745530 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745530_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef PLAYEREDITORCONNECTIONEVENTS_T3411787513_H
#define PLAYEREDITORCONNECTIONEVENTS_T3411787513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct  PlayerEditorConnectionEvents_t3411787513  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_t3157010512 * ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t3251856151 * ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t3251856151 * ___disconnectionEvent_2;

public:
	inline static int32_t get_offset_of_messageTypeSubscribers_0() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t3411787513, ___messageTypeSubscribers_0)); }
	inline List_1_t3157010512 * get_messageTypeSubscribers_0() const { return ___messageTypeSubscribers_0; }
	inline List_1_t3157010512 ** get_address_of_messageTypeSubscribers_0() { return &___messageTypeSubscribers_0; }
	inline void set_messageTypeSubscribers_0(List_1_t3157010512 * value)
	{
		___messageTypeSubscribers_0 = value;
		Il2CppCodeGenWriteBarrier((&___messageTypeSubscribers_0), value);
	}

	inline static int32_t get_offset_of_connectionEvent_1() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t3411787513, ___connectionEvent_1)); }
	inline ConnectionChangeEvent_t3251856151 * get_connectionEvent_1() const { return ___connectionEvent_1; }
	inline ConnectionChangeEvent_t3251856151 ** get_address_of_connectionEvent_1() { return &___connectionEvent_1; }
	inline void set_connectionEvent_1(ConnectionChangeEvent_t3251856151 * value)
	{
		___connectionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___connectionEvent_1), value);
	}

	inline static int32_t get_offset_of_disconnectionEvent_2() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t3411787513, ___disconnectionEvent_2)); }
	inline ConnectionChangeEvent_t3251856151 * get_disconnectionEvent_2() const { return ___disconnectionEvent_2; }
	inline ConnectionChangeEvent_t3251856151 ** get_address_of_disconnectionEvent_2() { return &___disconnectionEvent_2; }
	inline void set_disconnectionEvent_2(ConnectionChangeEvent_t3251856151 * value)
	{
		___disconnectionEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disconnectionEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREDITORCONNECTIONEVENTS_T3411787513_H
#ifndef MESSAGEEVENTARGS_T1170575784_H
#define MESSAGEEVENTARGS_T1170575784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t1170575784  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_t4116647657* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1170575784, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1170575784, ___data_1)); }
	inline ByteU5BU5D_t4116647657* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t4116647657* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T1170575784_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef MANAGEDSTREAMHELPERS_T1984295859_H
#define MANAGEDSTREAMHELPERS_T1984295859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ManagedStreamHelpers
struct  ManagedStreamHelpers_t1984295859  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGEDSTREAMHELPERS_T1984295859_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef INPUT_T1431474628_H
#define INPUT_T1431474628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t1431474628  : public RuntimeObject
{
public:

public:
};

struct Input_t1431474628_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t3288342876 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t1431474628_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t3288342876 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t3288342876 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t3288342876 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T1431474628_H
#ifndef GYROSCOPE_T3288342876_H
#define GYROSCOPE_T3288342876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t3288342876  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T3288342876_H
#ifndef RENDERPIPELINEMANAGER_T4036911426_H
#define RENDERPIPELINEMANAGER_T4036911426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineManager
struct  RenderPipelineManager_t4036911426  : public RuntimeObject
{
public:

public:
};

struct RenderPipelineManager_t4036911426_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.IRenderPipelineAsset UnityEngine.Experimental.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RuntimeObject* ___s_CurrentPipelineAsset_0;
	// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::<currentPipeline>k__BackingField
	RuntimeObject* ___U3CcurrentPipelineU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_CurrentPipelineAsset_0() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t4036911426_StaticFields, ___s_CurrentPipelineAsset_0)); }
	inline RuntimeObject* get_s_CurrentPipelineAsset_0() const { return ___s_CurrentPipelineAsset_0; }
	inline RuntimeObject** get_address_of_s_CurrentPipelineAsset_0() { return &___s_CurrentPipelineAsset_0; }
	inline void set_s_CurrentPipelineAsset_0(RuntimeObject* value)
	{
		___s_CurrentPipelineAsset_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentPipelineAsset_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t4036911426_StaticFields, ___U3CcurrentPipelineU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CcurrentPipelineU3Ek__BackingField_1() const { return ___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CcurrentPipelineU3Ek__BackingField_1() { return &___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline void set_U3CcurrentPipelineU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CcurrentPipelineU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentPipelineU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINEMANAGER_T4036911426_H
#ifndef LIST_1_T584821570_H
#define LIST_1_T584821570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct  List_1_t584821570  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PersistentCallU5BU5D_t2353432069* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t584821570, ____items_1)); }
	inline PersistentCallU5BU5D_t2353432069* get__items_1() const { return ____items_1; }
	inline PersistentCallU5BU5D_t2353432069** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PersistentCallU5BU5D_t2353432069* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t584821570, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t584821570, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t584821570_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PersistentCallU5BU5D_t2353432069* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t584821570_StaticFields, ___EmptyArray_4)); }
	inline PersistentCallU5BU5D_t2353432069* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PersistentCallU5BU5D_t2353432069** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PersistentCallU5BU5D_t2353432069* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T584821570_H
#ifndef LIST_1_T3157010512_H
#define LIST_1_T3157010512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct  List_1_t3157010512  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MessageTypeSubscribersU5BU5D_t1257266431* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3157010512, ____items_1)); }
	inline MessageTypeSubscribersU5BU5D_t1257266431* get__items_1() const { return ____items_1; }
	inline MessageTypeSubscribersU5BU5D_t1257266431** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MessageTypeSubscribersU5BU5D_t1257266431* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3157010512, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3157010512, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3157010512_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MessageTypeSubscribersU5BU5D_t1257266431* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3157010512_StaticFields, ___EmptyArray_4)); }
	inline MessageTypeSubscribersU5BU5D_t1257266431* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MessageTypeSubscribersU5BU5D_t1257266431** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MessageTypeSubscribersU5BU5D_t1257266431* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3157010512_H
#ifndef PERSISTENTCALLGROUP_T3050769227_H
#define PERSISTENTCALLGROUP_T3050769227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t3050769227  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t584821570 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t3050769227, ___m_Calls_0)); }
	inline List_1_t584821570 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t584821570 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t584821570 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T3050769227_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef LIST_1_T4176035766_H
#define LIST_1_T4176035766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_t4176035766  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t3944607041* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t3944607041* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t3944607041** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t3944607041* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4176035766, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4176035766_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	BaseInvokableCallU5BU5D_t3944607041* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4176035766_StaticFields, ___EmptyArray_4)); }
	inline BaseInvokableCallU5BU5D_t3944607041* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline BaseInvokableCallU5BU5D_t3944607041** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(BaseInvokableCallU5BU5D_t3944607041* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4176035766_H
#ifndef INVOKABLECALLLIST_T2498835369_H
#define INVOKABLECALLLIST_T2498835369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t2498835369  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t4176035766 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t4176035766 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t4176035766 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t2498835369, ___m_PersistentCalls_0)); }
	inline List_1_t4176035766 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t4176035766 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t4176035766 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t2498835369, ___m_RuntimeCalls_1)); }
	inline List_1_t4176035766 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t4176035766 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t4176035766 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t2498835369, ___m_ExecutingCalls_2)); }
	inline List_1_t4176035766 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t4176035766 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t4176035766 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t2498835369, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T2498835369_H
#ifndef BASEINVOKABLECALL_T2703961024_H
#define BASEINVOKABLECALL_T2703961024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2703961024  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2703961024_H
#ifndef ARGUMENTCACHE_T2187958399_H
#define ARGUMENTCACHE_T2187958399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t2187958399  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t631007953 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_ObjectArgument_0)); }
	inline Object_t631007953 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t631007953 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t631007953 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T2187958399_H
#ifndef DEBUGLOGHANDLER_T826086171_H
#define DEBUGLOGHANDLER_T826086171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t826086171  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T826086171_H
#ifndef DEBUG_T3317548046_H
#define DEBUG_T3317548046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t3317548046  : public RuntimeObject
{
public:

public:
};

struct Debug_t3317548046_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t3317548046_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Logger_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T3317548046_H
#ifndef BINDER_T2999457153_H
#define BINDER_T2999457153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t2999457153  : public RuntimeObject
{
public:

public:
};

struct Binder_t2999457153_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t2999457153 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t2999457153_StaticFields, ___default_binder_0)); }
	inline Binder_t2999457153 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t2999457153 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t2999457153 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T2999457153_H
#ifndef MESSAGETYPESUBSCRIBERS_T1684935770_H
#define MESSAGETYPESUBSCRIBERS_T1684935770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t1684935770  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t1491597365 * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1684935770, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1684935770, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1684935770, ___messageCallback_2)); }
	inline MessageEvent_t1491597365 * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t1491597365 ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t1491597365 * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T1684935770_H
#ifndef PROPERTYNAMEUTILS_T539849043_H
#define PROPERTYNAMEUTILS_T539849043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyNameUtils
struct  PropertyNameUtils_t539849043  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAMEUTILS_T539849043_H
#ifndef DICTIONARY_2_T3851719731_H
#define DICTIONARY_2_T3851719731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct  Dictionary_2_t3851719731  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_0;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_1;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	IntPtrU5BU5D_t4013366056* ___keySlots_2;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	WeakReferenceU5BU5D_t4021634645* ___valueSlots_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_5;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_6;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_7;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_8;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_10;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___table_0)); }
	inline Int32U5BU5D_t385246372* get_table_0() const { return ___table_0; }
	inline Int32U5BU5D_t385246372** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Int32U5BU5D_t385246372* value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of_linkSlots_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___linkSlots_1)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_1() const { return ___linkSlots_1; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_1() { return &___linkSlots_1; }
	inline void set_linkSlots_1(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_1 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_1), value);
	}

	inline static int32_t get_offset_of_keySlots_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___keySlots_2)); }
	inline IntPtrU5BU5D_t4013366056* get_keySlots_2() const { return ___keySlots_2; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_keySlots_2() { return &___keySlots_2; }
	inline void set_keySlots_2(IntPtrU5BU5D_t4013366056* value)
	{
		___keySlots_2 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_2), value);
	}

	inline static int32_t get_offset_of_valueSlots_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___valueSlots_3)); }
	inline WeakReferenceU5BU5D_t4021634645* get_valueSlots_3() const { return ___valueSlots_3; }
	inline WeakReferenceU5BU5D_t4021634645** get_address_of_valueSlots_3() { return &___valueSlots_3; }
	inline void set_valueSlots_3(WeakReferenceU5BU5D_t4021634645* value)
	{
		___valueSlots_3 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_3), value);
	}

	inline static int32_t get_offset_of_touchedSlots_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___touchedSlots_4)); }
	inline int32_t get_touchedSlots_4() const { return ___touchedSlots_4; }
	inline int32_t* get_address_of_touchedSlots_4() { return &___touchedSlots_4; }
	inline void set_touchedSlots_4(int32_t value)
	{
		___touchedSlots_4 = value;
	}

	inline static int32_t get_offset_of_emptySlot_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___emptySlot_5)); }
	inline int32_t get_emptySlot_5() const { return ___emptySlot_5; }
	inline int32_t* get_address_of_emptySlot_5() { return &___emptySlot_5; }
	inline void set_emptySlot_5(int32_t value)
	{
		___emptySlot_5 = value;
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of_threshold_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___threshold_7)); }
	inline int32_t get_threshold_7() const { return ___threshold_7; }
	inline int32_t* get_address_of_threshold_7() { return &___threshold_7; }
	inline void set_threshold_7(int32_t value)
	{
		___threshold_7 = value;
	}

	inline static int32_t get_offset_of_hcp_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___hcp_8)); }
	inline RuntimeObject* get_hcp_8() const { return ___hcp_8; }
	inline RuntimeObject** get_address_of_hcp_8() { return &___hcp_8; }
	inline void set_hcp_8(RuntimeObject* value)
	{
		___hcp_8 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_8), value);
	}

	inline static int32_t get_offset_of_serialization_info_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___serialization_info_9)); }
	inline SerializationInfo_t950877179 * get_serialization_info_9() const { return ___serialization_info_9; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_9() { return &___serialization_info_9; }
	inline void set_serialization_info_9(SerializationInfo_t950877179 * value)
	{
		___serialization_info_9 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_9), value);
	}

	inline static int32_t get_offset_of_generation_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___generation_10)); }
	inline int32_t get_generation_10() const { return ___generation_10; }
	inline int32_t* get_address_of_generation_10() { return &___generation_10; }
	inline void set_generation_10(int32_t value)
	{
		___generation_10 = value;
	}
};

struct Dictionary_2_t3851719731_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2011406813 * ___U3CU3Ef__amU24cacheB_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731_StaticFields, ___U3CU3Ef__amU24cacheB_11)); }
	inline Transform_1_t2011406813 * get_U3CU3Ef__amU24cacheB_11() const { return ___U3CU3Ef__amU24cacheB_11; }
	inline Transform_1_t2011406813 ** get_address_of_U3CU3Ef__amU24cacheB_11() { return &___U3CU3Ef__amU24cacheB_11; }
	inline void set_U3CU3Ef__amU24cacheB_11(Transform_1_t2011406813 * value)
	{
		___U3CU3Ef__amU24cacheB_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3851719731_H
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef NETFXCOREEXTENSIONS_T4089902045_H
#define NETFXCOREEXTENSIONS_T4089902045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t4089902045  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T4089902045_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef SYNCHRONIZATIONCONTEXT_T2326897723_H
#define SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t2326897723  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t2326897723_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t2326897723 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t2326897723 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t2326897723 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t2326897723 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifndef QUEUE_1_T1200778106_H
#define QUEUE_1_T1200778106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct  Queue_1_t1200778106  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	WorkRequestU5BU5D_t3723878365* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____array_0)); }
	inline WorkRequestU5BU5D_t3723878365* get__array_0() const { return ____array_0; }
	inline WorkRequestU5BU5D_t3723878365** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WorkRequestU5BU5D_t3723878365* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T1200778106_H
#ifndef SPRITEATLASMANAGER_T3158462485_H
#define SPRITEATLASMANAGER_T3158462485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t3158462485  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t3158462485_StaticFields
{
public:
	// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	RequestAtlasCallback_t3100554279 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t819399007 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t3158462485_StaticFields, ___atlasRequested_0)); }
	inline RequestAtlasCallback_t3100554279 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline RequestAtlasCallback_t3100554279 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(RequestAtlasCallback_t3100554279 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t3158462485_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Action_1_t819399007 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Action_1_t819399007 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Action_1_t819399007 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T3158462485_H
#ifndef ENUMERATOR_T3442430665_H
#define ENUMERATOR_T3442430665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t3442430665  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_t3600365921 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t3442430665, ___outer_0)); }
	inline Transform_t3600365921 * get_outer_0() const { return ___outer_0; }
	inline Transform_t3600365921 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_t3600365921 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t3442430665, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3442430665_H
#ifndef TIME_T2420636075_H
#define TIME_T2420636075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Time
struct  Time_t2420636075  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIME_T2420636075_H
#ifndef PLAYABLEBEHAVIOUR_T4203540982_H
#define PLAYABLEBEHAVIOUR_T4203540982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t4203540982  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T4203540982_H
#ifndef STACKFRAME_T3217253059_H
#define STACKFRAME_T3217253059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.StackFrame
struct  StackFrame_t3217253059  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t * ___methodBase_3;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_4;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_5;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_6;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_7;

public:
	inline static int32_t get_offset_of_ilOffset_1() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___ilOffset_1)); }
	inline int32_t get_ilOffset_1() const { return ___ilOffset_1; }
	inline int32_t* get_address_of_ilOffset_1() { return &___ilOffset_1; }
	inline void set_ilOffset_1(int32_t value)
	{
		___ilOffset_1 = value;
	}

	inline static int32_t get_offset_of_nativeOffset_2() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___nativeOffset_2)); }
	inline int32_t get_nativeOffset_2() const { return ___nativeOffset_2; }
	inline int32_t* get_address_of_nativeOffset_2() { return &___nativeOffset_2; }
	inline void set_nativeOffset_2(int32_t value)
	{
		___nativeOffset_2 = value;
	}

	inline static int32_t get_offset_of_methodBase_3() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___methodBase_3)); }
	inline MethodBase_t * get_methodBase_3() const { return ___methodBase_3; }
	inline MethodBase_t ** get_address_of_methodBase_3() { return &___methodBase_3; }
	inline void set_methodBase_3(MethodBase_t * value)
	{
		___methodBase_3 = value;
		Il2CppCodeGenWriteBarrier((&___methodBase_3), value);
	}

	inline static int32_t get_offset_of_fileName_4() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___fileName_4)); }
	inline String_t* get_fileName_4() const { return ___fileName_4; }
	inline String_t** get_address_of_fileName_4() { return &___fileName_4; }
	inline void set_fileName_4(String_t* value)
	{
		___fileName_4 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_4), value);
	}

	inline static int32_t get_offset_of_lineNumber_5() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___lineNumber_5)); }
	inline int32_t get_lineNumber_5() const { return ___lineNumber_5; }
	inline int32_t* get_address_of_lineNumber_5() { return &___lineNumber_5; }
	inline void set_lineNumber_5(int32_t value)
	{
		___lineNumber_5 = value;
	}

	inline static int32_t get_offset_of_columnNumber_6() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___columnNumber_6)); }
	inline int32_t get_columnNumber_6() const { return ___columnNumber_6; }
	inline int32_t* get_address_of_columnNumber_6() { return &___columnNumber_6; }
	inline void set_columnNumber_6(int32_t value)
	{
		___columnNumber_6 = value;
	}

	inline static int32_t get_offset_of_internalMethodName_7() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___internalMethodName_7)); }
	inline String_t* get_internalMethodName_7() const { return ___internalMethodName_7; }
	inline String_t** get_address_of_internalMethodName_7() { return &___internalMethodName_7; }
	inline void set_internalMethodName_7(String_t* value)
	{
		___internalMethodName_7 = value;
		Il2CppCodeGenWriteBarrier((&___internalMethodName_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKFRAME_T3217253059_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STACKTRACE_T1598645457_H
#define STACKTRACE_T1598645457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.StackTrace
struct  StackTrace_t1598645457  : public RuntimeObject
{
public:
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_t1997726418* ___frames_1;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_2;

public:
	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(StackTrace_t1598645457, ___frames_1)); }
	inline StackFrameU5BU5D_t1997726418* get_frames_1() const { return ___frames_1; }
	inline StackFrameU5BU5D_t1997726418** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(StackFrameU5BU5D_t1997726418* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((&___frames_1), value);
	}

	inline static int32_t get_offset_of_debug_info_2() { return static_cast<int32_t>(offsetof(StackTrace_t1598645457, ___debug_info_2)); }
	inline bool get_debug_info_2() const { return ___debug_info_2; }
	inline bool* get_address_of_debug_info_2() { return &___debug_info_2; }
	inline void set_debug_info_2(bool value)
	{
		___debug_info_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACE_T1598645457_H
#ifndef STACKTRACEUTILITY_T3465565809_H
#define STACKTRACEUTILITY_T3465565809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t3465565809  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t3465565809_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t3465565809_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T3465565809_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef SETUPCOROUTINE_T2062820429_H
#define SETUPCOROUTINE_T2062820429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t2062820429  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T2062820429_H
#ifndef SENDMOUSEEVENTS_T3273302915_H
#define SENDMOUSEEVENTS_T3273302915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t3273302915  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t3273302915_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t1685002053* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t1685002053* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t1685002053* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t1709987734* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t1685002053* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t1685002053* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t1685002053* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t1685002053* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t1685002053* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t1685002053* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t1709987734* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t1709987734** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t1709987734* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T3273302915_H
#ifndef SCENEMANAGER_T2787271929_H
#define SCENEMANAGER_T2787271929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t2787271929  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t2787271929_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t2165061829 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t2933211702 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t1262235195 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t2165061829 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t2165061829 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t2165061829 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t2933211702 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t2933211702 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t2933211702 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t1262235195 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t1262235195 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t1262235195 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T2787271929_H
#ifndef RESOURCES_T2942265397_H
#define RESOURCES_T2942265397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t2942265397  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T2942265397_H
#ifndef RANDOM_T635017412_H
#define RANDOM_T635017412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Random
struct  Random_t635017412  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T635017412_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef NATIVE_T2017798882_H
#define NATIVE_T2017798882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.Native
struct  Native_t2017798882  : public RuntimeObject
{
public:

public:
};

struct Native_t2017798882_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> UnityEngine.CSSLayout.Native::s_MeasureFunctions
	Dictionary_2_t3851719731 * ___s_MeasureFunctions_0;

public:
	inline static int32_t get_offset_of_s_MeasureFunctions_0() { return static_cast<int32_t>(offsetof(Native_t2017798882_StaticFields, ___s_MeasureFunctions_0)); }
	inline Dictionary_2_t3851719731 * get_s_MeasureFunctions_0() const { return ___s_MeasureFunctions_0; }
	inline Dictionary_2_t3851719731 ** get_address_of_s_MeasureFunctions_0() { return &___s_MeasureFunctions_0; }
	inline void set_s_MeasureFunctions_0(Dictionary_2_t3851719731 * value)
	{
		___s_MeasureFunctions_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_MeasureFunctions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVE_T2017798882_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef ATTRIBUTEHELPERENGINE_T2735742303_H
#define ATTRIBUTEHELPERENGINE_T2735742303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t2735742303  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t2735742303_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t3936143868* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t3239458680* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t2245623724* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t3936143868* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t3936143868** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t3936143868* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t3239458680* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t3239458680** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t3239458680* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t2245623724* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t2245623724** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t2245623724* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T2735742303_H
#ifndef APPLICATION_T1852185770_H
#define APPLICATION_T1852185770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t1852185770  : public RuntimeObject
{
public:

public:
};

struct Application_t1852185770_StaticFields
{
public:
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_t4104246196 * ___lowMemory_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t3588208630 * ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t3588208630 * ___s_LogCallbackHandlerThreaded_2;

public:
	inline static int32_t get_offset_of_lowMemory_0() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___lowMemory_0)); }
	inline LowMemoryCallback_t4104246196 * get_lowMemory_0() const { return ___lowMemory_0; }
	inline LowMemoryCallback_t4104246196 ** get_address_of_lowMemory_0() { return &___lowMemory_0; }
	inline void set_lowMemory_0(LowMemoryCallback_t4104246196 * value)
	{
		___lowMemory_0 = value;
		Il2CppCodeGenWriteBarrier((&___lowMemory_0), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandler_1() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___s_LogCallbackHandler_1)); }
	inline LogCallback_t3588208630 * get_s_LogCallbackHandler_1() const { return ___s_LogCallbackHandler_1; }
	inline LogCallback_t3588208630 ** get_address_of_s_LogCallbackHandler_1() { return &___s_LogCallbackHandler_1; }
	inline void set_s_LogCallbackHandler_1(LogCallback_t3588208630 * value)
	{
		___s_LogCallbackHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandler_1), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_2() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___s_LogCallbackHandlerThreaded_2)); }
	inline LogCallback_t3588208630 * get_s_LogCallbackHandlerThreaded_2() const { return ___s_LogCallbackHandlerThreaded_2; }
	inline LogCallback_t3588208630 ** get_address_of_s_LogCallbackHandlerThreaded_2() { return &___s_LogCallbackHandlerThreaded_2; }
	inline void set_s_LogCallbackHandlerThreaded_2(LogCallback_t3588208630 * value)
	{
		___s_LogCallbackHandlerThreaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandlerThreaded_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATION_T1852185770_H
#ifndef LIST_1_T3956019502_H
#define LIST_1_T3956019502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Type>
struct  List_1_t3956019502  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t3940880105* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3956019502, ____items_1)); }
	inline TypeU5BU5D_t3940880105* get__items_1() const { return ____items_1; }
	inline TypeU5BU5D_t3940880105** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeU5BU5D_t3940880105* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3956019502, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3956019502, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3956019502_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TypeU5BU5D_t3940880105* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3956019502_StaticFields, ___EmptyArray_4)); }
	inline TypeU5BU5D_t3940880105* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TypeU5BU5D_t3940880105* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3956019502_H
#ifndef CLASSLIBRARYINITIALIZER_T2339504045_H
#define CLASSLIBRARYINITIALIZER_T2339504045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClassLibraryInitializer
struct  ClassLibraryInitializer_t2339504045  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSLIBRARYINITIALIZER_T2339504045_H
#ifndef LIST_1_T3058052573_H
#define LIST_1_T3058052573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.BeforeRenderHelper/OrderBlock>
struct  List_1_t3058052573  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OrderBlockU5BU5D_t2389202590* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3058052573, ____items_1)); }
	inline OrderBlockU5BU5D_t2389202590* get__items_1() const { return ____items_1; }
	inline OrderBlockU5BU5D_t2389202590** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OrderBlockU5BU5D_t2389202590* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3058052573, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3058052573, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3058052573_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	OrderBlockU5BU5D_t2389202590* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3058052573_StaticFields, ___EmptyArray_4)); }
	inline OrderBlockU5BU5D_t2389202590* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline OrderBlockU5BU5D_t2389202590** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(OrderBlockU5BU5D_t2389202590* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3058052573_H
#ifndef STACK_1_T3327334215_H
#define STACK_1_T3327334215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Type>
struct  Stack_1_t3327334215  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	TypeU5BU5D_t3940880105* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3327334215, ____array_0)); }
	inline TypeU5BU5D_t3940880105* get__array_0() const { return ____array_0; }
	inline TypeU5BU5D_t3940880105** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TypeU5BU5D_t3940880105* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3327334215, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3327334215, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3327334215_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef BEFORERENDERHELPER_T1336903776_H
#define BEFORERENDERHELPER_T1336903776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BeforeRenderHelper
struct  BeforeRenderHelper_t1336903776  : public RuntimeObject
{
public:

public:
};

struct BeforeRenderHelper_t1336903776_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.BeforeRenderHelper/OrderBlock> UnityEngine.BeforeRenderHelper::s_OrderBlocks
	List_1_t3058052573 * ___s_OrderBlocks_0;

public:
	inline static int32_t get_offset_of_s_OrderBlocks_0() { return static_cast<int32_t>(offsetof(BeforeRenderHelper_t1336903776_StaticFields, ___s_OrderBlocks_0)); }
	inline List_1_t3058052573 * get_s_OrderBlocks_0() const { return ___s_OrderBlocks_0; }
	inline List_1_t3058052573 ** get_address_of_s_OrderBlocks_0() { return &___s_OrderBlocks_0; }
	inline void set_s_OrderBlocks_0(List_1_t3058052573 * value)
	{
		___s_OrderBlocks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_OrderBlocks_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEFORERENDERHELPER_T1336903776_H
#ifndef EXECUTEINEDITMODE_T3727731349_H
#define EXECUTEINEDITMODE_T3727731349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_t3727731349  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEINEDITMODE_T3727731349_H
#ifndef NATIVECLASSATTRIBUTE_T2601352714_H
#define NATIVECLASSATTRIBUTE_T2601352714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NativeClassAttribute
struct  NativeClassAttribute_t2601352714  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeClassAttribute_t2601352714, ___U3CQualifiedNativeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CQualifiedNativeNameU3Ek__BackingField_0() const { return ___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return &___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline void set_U3CQualifiedNativeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CQualifiedNativeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CQualifiedNativeNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECLASSATTRIBUTE_T2601352714_H
#ifndef MATHF_T3464937446_H
#define MATHF_T3464937446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t3464937446 
{
public:

public:
};

struct Mathf_t3464937446_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t3464937446_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T3464937446_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1683066125_H
#define NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1683066125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsDeallocateOnJobCompletionAttribute
struct  NativeContainerSupportsDeallocateOnJobCompletionAttribute_t1683066125  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSDEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1683066125_H
#ifndef WORKREQUEST_T1354518612_H
#define WORKREQUEST_T1354518612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1354518612 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t2750080073 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t2750080073 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t2750080073 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t451242010 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t451242010 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t451242010 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T1354518612_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T3592494112_H
#define EXCLUDEFROMDOCSATTRIBUTE_T3592494112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t3592494112  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T3592494112_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef DEFAULTVALUEATTRIBUTE_T2337225216_H
#define DEFAULTVALUEATTRIBUTE_T2337225216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t2337225216  : public Attribute_t861562559
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t2337225216, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T2337225216_H
#ifndef WAITFORENDOFFRAME_T1314943911_H
#define WAITFORENDOFFRAME_T1314943911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1314943911  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1314943911_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t2859083114  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t2859083114, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oldName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef KEYFRAME_T4206410242_H
#define KEYFRAME_T4206410242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4206410242 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4206410242_H
#ifndef TYPEINFERENCERULEATTRIBUTE_T254868554_H
#define TYPEINFERENCERULEATTRIBUTE_T254868554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_t254868554  : public Attribute_t861562559
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_t254868554, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((&____rule_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULEATTRIBUTE_T254868554_H
#ifndef ORDERBLOCK_T1585977831_H
#define ORDERBLOCK_T1585977831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BeforeRenderHelper/OrderBlock
struct  OrderBlock_t1585977831 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t3245792599 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___callback_1)); }
	inline UnityAction_t3245792599 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t3245792599 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t3245792599 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
#endif // ORDERBLOCK_T1585977831_H
#ifndef DISALLOWMULTIPLECOMPONENT_T1422053217_H
#define DISALLOWMULTIPLECOMPONENT_T1422053217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DisallowMultipleComponent
struct  DisallowMultipleComponent_t1422053217  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISALLOWMULTIPLECOMPONENT_T1422053217_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef NATIVECONTAINERISATOMICWRITEONLYATTRIBUTE_T394027931_H
#define NATIVECONTAINERISATOMICWRITEONLYATTRIBUTE_T394027931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerIsAtomicWriteOnlyAttribute
struct  NativeContainerIsAtomicWriteOnlyAttribute_t394027931  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERISATOMICWRITEONLYATTRIBUTE_T394027931_H
#ifndef HITINFO_T3229609740_H
#define HITINFO_T3229609740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t3229609740 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1113636619 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t4157153871 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___target_0)); }
	inline GameObject_t1113636619 * get_target_0() const { return ___target_0; }
	inline GameObject_t1113636619 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1113636619 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___camera_1)); }
	inline Camera_t4157153871 * get_camera_1() const { return ___camera_1; }
	inline Camera_t4157153871 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t4157153871 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_pinvoke
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_com
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
#endif // HITINFO_T3229609740_H
#ifndef SERIALIZEPRIVATEVARIABLES_T3872960625_H
#define SERIALIZEPRIVATEVARIABLES_T3872960625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t3872960625  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T3872960625_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef ASSEMBLYISEDITORASSEMBLY_T3442416807_H
#define ASSEMBLYISEDITORASSEMBLY_T3442416807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssemblyIsEditorAssembly
struct  AssemblyIsEditorAssembly_t3442416807  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYISEDITORASSEMBLY_T3442416807_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef PROPERTYNAME_T3749835189_H
#define PROPERTYNAME_T3749835189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t3749835189 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t3749835189, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T3749835189_H
#ifndef PREFERBINARYSERIALIZATION_T2906007930_H
#define PREFERBINARYSERIALIZATION_T2906007930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t2906007930  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T2906007930_H
#ifndef UNITYEXCEPTION_T3598173660_H
#define UNITYEXCEPTION_T3598173660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t3598173660  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T3598173660_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T1887453786_H
#define UNITYSYNCHRONIZATIONCONTEXT_T1887453786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t1887453786  : public SynchronizationContext_t2326897723
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t1200778106 * ___m_AsyncWorkQueue_1;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_2;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1887453786, ___m_AsyncWorkQueue_1)); }
	inline Queue_1_t1200778106 * get_m_AsyncWorkQueue_1() const { return ___m_AsyncWorkQueue_1; }
	inline Queue_1_t1200778106 ** get_address_of_m_AsyncWorkQueue_1() { return &___m_AsyncWorkQueue_1; }
	inline void set_m_AsyncWorkQueue_1(Queue_1_t1200778106 * value)
	{
		___m_AsyncWorkQueue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_1), value);
	}

	inline static int32_t get_offset_of_m_MainThreadID_2() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1887453786, ___m_MainThreadID_2)); }
	inline int32_t get_m_MainThreadID_2() const { return ___m_MainThreadID_2; }
	inline int32_t* get_address_of_m_MainThreadID_2() { return &___m_MainThreadID_2; }
	inline void set_m_MainThreadID_2(int32_t value)
	{
		___m_MainThreadID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T1887453786_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef UNITYEVENT_1_T2052235288_H
#define UNITYEVENT_1_T2052235288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t2052235288  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2052235288, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T2052235288_H
#ifndef REQUIRECOMPONENT_T3490506609_H
#define REQUIRECOMPONENT_T3490506609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RequireComponent
struct  RequireComponent_t3490506609  : public Attribute_t861562559
{
public:
	// System.Type UnityEngine.RequireComponent::m_Type0
	Type_t * ___m_Type0_0;
	// System.Type UnityEngine.RequireComponent::m_Type1
	Type_t * ___m_Type1_1;
	// System.Type UnityEngine.RequireComponent::m_Type2
	Type_t * ___m_Type2_2;

public:
	inline static int32_t get_offset_of_m_Type0_0() { return static_cast<int32_t>(offsetof(RequireComponent_t3490506609, ___m_Type0_0)); }
	inline Type_t * get_m_Type0_0() const { return ___m_Type0_0; }
	inline Type_t ** get_address_of_m_Type0_0() { return &___m_Type0_0; }
	inline void set_m_Type0_0(Type_t * value)
	{
		___m_Type0_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type0_0), value);
	}

	inline static int32_t get_offset_of_m_Type1_1() { return static_cast<int32_t>(offsetof(RequireComponent_t3490506609, ___m_Type1_1)); }
	inline Type_t * get_m_Type1_1() const { return ___m_Type1_1; }
	inline Type_t ** get_address_of_m_Type1_1() { return &___m_Type1_1; }
	inline void set_m_Type1_1(Type_t * value)
	{
		___m_Type1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type1_1), value);
	}

	inline static int32_t get_offset_of_m_Type2_2() { return static_cast<int32_t>(offsetof(RequireComponent_t3490506609, ___m_Type2_2)); }
	inline Type_t * get_m_Type2_2() const { return ___m_Type2_2; }
	inline Type_t ** get_address_of_m_Type2_2() { return &___m_Type2_2; }
	inline void set_m_Type2_2(Type_t * value)
	{
		___m_Type2_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIRECOMPONENT_T3490506609_H
#ifndef UNITYEVENT_1_T3832605257_H
#define UNITYEVENT_1_T3832605257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t3832605257  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3832605257, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3832605257_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef DEFAULTEXECUTIONORDER_T3059642329_H
#define DEFAULTEXECUTIONORDER_T3059642329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DefaultExecutionOrder
struct  DefaultExecutionOrder_t3059642329  : public Attribute_t861562559
{
public:
	// System.Int32 UnityEngine.DefaultExecutionOrder::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DefaultExecutionOrder_t3059642329, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXECUTIONORDER_T3059642329_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef WAITFORFIXEDUPDATE_T1634918743_H
#define WAITFORFIXEDUPDATE_T1634918743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t1634918743  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T1634918743_H
#ifndef INVOKABLECALL_1_T214452203_H
#define INVOKABLECALL_1_T214452203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct  InvokableCall_1_t214452203  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t682124106 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t214452203, ___Delegate_0)); }
	inline UnityAction_1_t682124106 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t682124106 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t682124106 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T214452203_H
#ifndef INVOKABLECALL_T832123510_H
#define INVOKABLECALL_T832123510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t832123510  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t3245792599 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t832123510, ___Delegate_0)); }
	inline UnityAction_t3245792599 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t3245792599 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t3245792599 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T832123510_H
#ifndef INVOKABLECALL_1_T3068109991_H
#define INVOKABLECALL_1_T3068109991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t3068109991  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t3535781894 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t3068109991, ___Delegate_0)); }
	inline UnityAction_1_t3535781894 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t3535781894 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t3535781894 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T3068109991_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_3)); }
	inline Vector3_t3722313464  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t3722313464  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_4)); }
	inline Vector3_t3722313464  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t3722313464 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t3722313464  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_5)); }
	inline Vector3_t3722313464  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t3722313464 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t3722313464  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_6)); }
	inline Vector3_t3722313464  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t3722313464 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t3722313464  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_7)); }
	inline Vector3_t3722313464  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t3722313464 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t3722313464  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_8)); }
	inline Vector3_t3722313464  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t3722313464 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t3722313464  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_9)); }
	inline Vector3_t3722313464  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t3722313464  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_10)); }
	inline Vector3_t3722313464  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t3722313464 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t3722313464  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef INVOKABLECALL_1_T1964614927_H
#define INVOKABLECALL_1_T1964614927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.String>
struct  InvokableCall_1_t1964614927  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t2432286830 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t1964614927, ___Delegate_0)); }
	inline UnityAction_1_t2432286830 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t2432286830 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t2432286830 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T1964614927_H
#ifndef PARAMETERMODIFIER_T1461694466_H
#define PARAMETERMODIFIER_T1461694466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1461694466 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t2897418192* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1461694466, ____byref_0)); }
	inline BooleanU5BU5D_t2897418192* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t2897418192* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T1461694466_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef CULLINGGROUPEVENT_T1722745023_H
#define CULLINGGROUPEVENT_T1722745023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t1722745023 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t1722745023, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t1722745023, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t1722745023, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T1722745023_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3131681843_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3131681843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t3131681843  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3131681843_H
#ifndef INVOKABLECALL_1_T1514431012_H
#define INVOKABLECALL_1_T1514431012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`1<System.Single>
struct  InvokableCall_1_t1514431012  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t1982102915 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t1514431012, ___Delegate_0)); }
	inline UnityAction_1_t1982102915 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t1982102915 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t1982102915 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_1_T1514431012_H
#ifndef NATIVECONTAINERATTRIBUTE_T2600515814_H
#define NATIVECONTAINERATTRIBUTE_T2600515814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t2600515814  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T2600515814_H
#ifndef CONTEXTMENU_T1295656858_H
#define CONTEXTMENU_T1295656858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t1295656858  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMENU_T1295656858_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef WRITEONLYATTRIBUTE_T595109273_H
#define WRITEONLYATTRIBUTE_T595109273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t595109273  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T595109273_H
#ifndef READONLYATTRIBUTE_T2029203740_H
#define READONLYATTRIBUTE_T2029203740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t2029203740  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T2029203740_H
#ifndef NATIVEMATCHESPARALLELFORLENGTHATTRIBUTE_T3874858371_H
#define NATIVEMATCHESPARALLELFORLENGTHATTRIBUTE_T3874858371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeMatchesParallelForLengthAttribute
struct  NativeMatchesParallelForLengthAttribute_t3874858371  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEMATCHESPARALLELFORLENGTHATTRIBUTE_T3874858371_H
#ifndef NATIVEFIXEDLENGTHATTRIBUTE_T71849338_H
#define NATIVEFIXEDLENGTHATTRIBUTE_T71849338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeFixedLengthAttribute
struct  NativeFixedLengthAttribute_t71849338  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEFIXEDLENGTHATTRIBUTE_T71849338_H
#ifndef NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE_T3089424280_H
#define NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE_T3089424280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeDisableParallelForRestrictionAttribute
struct  NativeDisableParallelForRestrictionAttribute_t3089424280  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEDISABLEPARALLELFORRESTRICTIONATTRIBUTE_T3089424280_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1586929818_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1586929818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t1586929818  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1586929818_H
#ifndef CSSSIZE_T3377836552_H
#define CSSSIZE_T3377836552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSSize
struct  CSSSize_t3377836552 
{
public:
	// System.Single UnityEngine.CSSLayout.CSSSize::width
	float ___width_0;
	// System.Single UnityEngine.CSSLayout.CSSSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(CSSSize_t3377836552, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(CSSSize_t3377836552, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSSIZE_T3377836552_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef SERIALIZEFIELD_T3286833614_H
#define SERIALIZEFIELD_T3286833614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t3286833614  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T3286833614_H
#ifndef ENUMERATOR_T2474065447_H
#define ENUMERATOR_T2474065447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
struct  Enumerator_t2474065447 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t584821570 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	PersistentCall_t3407714124 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2474065447, ___l_0)); }
	inline List_1_t584821570 * get_l_0() const { return ___l_0; }
	inline List_1_t584821570 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t584821570 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2474065447, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2474065447, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2474065447, ___current_3)); }
	inline PersistentCall_t3407714124 * get_current_3() const { return ___current_3; }
	inline PersistentCall_t3407714124 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(PersistentCall_t3407714124 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2474065447_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef GRADIENT_T3067099924_H
#define GRADIENT_T3067099924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t3067099924  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t3067099924, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T3067099924_H
#ifndef PLAYABLEGRAPH_T3515989261_H
#define PLAYABLEGRAPH_T3515989261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t3515989261 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t3515989261, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t3515989261, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T3515989261_H
#ifndef SENDMESSAGEOPTIONS_T3580193095_H
#define SENDMESSAGEOPTIONS_T3580193095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t3580193095 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t3580193095, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T3580193095_H
#ifndef LOGTYPE_T73765434_H
#define LOGTYPE_T73765434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t73765434 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t73765434, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T73765434_H
#ifndef PLAYABLEOUTPUTHANDLE_T4208053793_H
#define PLAYABLEOUTPUTHANDLE_T4208053793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t4208053793 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4208053793, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t4208053793, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T4208053793_H
#ifndef CSSMEASUREMODE_T3184398371_H
#define CSSMEASUREMODE_T3184398371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureMode
struct  CSSMeasureMode_t3184398371 
{
public:
	// System.Int32 UnityEngine.CSSLayout.CSSMeasureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CSSMeasureMode_t3184398371, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSMEASUREMODE_T3184398371_H
#ifndef THREADSTATE_T2533302383_H
#define THREADSTATE_T2533302383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t2533302383 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t2533302383, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATE_T2533302383_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1972936122 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1972936122 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1972936122 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1743403487_H
#ifndef SCRIPTABLERENDERCONTEXT_T274343796_H
#define SCRIPTABLERENDERCONTEXT_T274343796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t274343796 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t274343796, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T274343796_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef LOADSCENEMODE_T3251202195_H
#define LOADSCENEMODE_T3251202195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t3251202195 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t3251202195, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T3251202195_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef TYPEINFERENCERULES_T96689094_H
#define TYPEINFERENCERULES_T96689094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_t96689094 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeInferenceRules_t96689094, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULES_T96689094_H
#ifndef PLAYABLEHANDLE_T1095853803_H
#define PLAYABLEHANDLE_T1095853803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1095853803 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1095853803_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef CACHEDINVOKABLECALL_1_T3723462114_H
#define CACHEDINVOKABLECALL_1_T3723462114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct  CachedInvokableCall_1_t3723462114  : public InvokableCall_1_t1514431012
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	float ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t3723462114, ___m_Arg1_1)); }
	inline float get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline float* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(float value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T3723462114_H
#ifndef CULLINGGROUP_T2096318768_H
#define CULLINGGROUP_T2096318768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t2096318768  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t2136737110 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t2096318768, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t2096318768, ___m_OnStateChanged_1)); }
	inline StateChanged_t2136737110 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t2136737110 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t2136737110 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2096318768_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2096318768_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T2096318768_H
#ifndef ANIMATIONCURVE_T3046754366_H
#define ANIMATIONCURVE_T3046754366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3046754366  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3046754366, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3046754366_H
#ifndef UNITYEVENTCALLSTATE_T3448586328_H
#define UNITYEVENTCALLSTATE_T3448586328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t3448586328 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t3448586328, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTCALLSTATE_T3448586328_H
#ifndef PERSISTENTLISTENERMODE_T232255230_H
#define PERSISTENTLISTENERMODE_T232255230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t232255230 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t232255230, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTLISTENERMODE_T232255230_H
#ifndef CACHEDINVOKABLECALL_1_T982173797_H
#define CACHEDINVOKABLECALL_1_T982173797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct  CachedInvokableCall_1_t982173797  : public InvokableCall_1_t3068109991
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	int32_t ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t982173797, ___m_Arg1_1)); }
	inline int32_t get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline int32_t* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(int32_t value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T982173797_H
#ifndef SEEKORIGIN_T1441174344_H
#define SEEKORIGIN_T1441174344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SeekOrigin
struct  SeekOrigin_t1441174344 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SeekOrigin_t1441174344, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEEKORIGIN_T1441174344_H
#ifndef CAMERACLEARFLAGS_T2362496923_H
#define CAMERACLEARFLAGS_T2362496923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t2362496923 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t2362496923, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T2362496923_H
#ifndef MATHFINTERNAL_T624072491_H
#define MATHFINTERNAL_T624072491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t624072491 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t624072491__padding[1];
	};

public:
};

struct MathfInternal_t624072491_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T624072491_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef CACHEDINVOKABLECALL_1_T4173646029_H
#define CACHEDINVOKABLECALL_1_T4173646029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.String>
struct  CachedInvokableCall_1_t4173646029  : public InvokableCall_1_t1964614927
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	String_t* ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t4173646029, ___m_Arg1_1)); }
	inline String_t* get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline String_t** get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(String_t* value)
	{
		___m_Arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T4173646029_H
#ifndef DATASTREAMTYPE_T4132467813_H
#define DATASTREAMTYPE_T4132467813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t4132467813 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t4132467813, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T4132467813_H
#ifndef CACHEDINVOKABLECALL_1_T2423483305_H
#define CACHEDINVOKABLECALL_1_T2423483305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct  CachedInvokableCall_1_t2423483305  : public InvokableCall_1_t214452203
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	bool ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t2423483305, ___m_Arg1_1)); }
	inline bool get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline bool* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(bool value)
	{
		___m_Arg1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDINVOKABLECALL_1_T2423483305_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T4250555765_H
#ifndef CONNECTIONCHANGEEVENT_T3251856151_H
#define CONNECTIONCHANGEEVENT_T3251856151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t3251856151  : public UnityEvent_1_t3832605257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T3251856151_H
#ifndef DISPLAY_T1387065949_H
#define DISPLAY_T1387065949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t1387065949  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	intptr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t1387065949, ___nativeDisplay_0)); }
	inline intptr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline intptr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(intptr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t1387065949_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t103034768* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t1387065949 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t51287044 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t103034768* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t103034768** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t103034768* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ____mainDisplay_2)); }
	inline Display_t1387065949 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t1387065949 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t1387065949 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t51287044 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t51287044 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t51287044 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T1387065949_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T907692441_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T907692441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T907692441_H
#ifndef MESSAGEEVENT_T1491597365_H
#define MESSAGEEVENT_T1491597365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t1491597365  : public UnityEvent_1_t2052235288
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T1491597365_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef SPRITEATLAS_T646931412_H
#define SPRITEATLAS_T646931412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t646931412  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T646931412_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
#ifndef ASSETBUNDLECREATEREQUEST_T3119663542_H
#define ASSETBUNDLECREATEREQUEST_T3119663542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleCreateRequest
struct  AssetBundleCreateRequest_t3119663542  : public AsyncOperation_t1445031843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t3119663542_marshaled_pinvoke : public AsyncOperation_t1445031843_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t3119663542_marshaled_com : public AsyncOperation_t1445031843_marshaled_com
{
};
#endif // ASSETBUNDLECREATEREQUEST_T3119663542_H
#ifndef ASSETBUNDLEREQUEST_T699759206_H
#define ASSETBUNDLEREQUEST_T699759206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t699759206  : public AsyncOperation_t1445031843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t699759206_marshaled_pinvoke : public AsyncOperation_t1445031843_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t699759206_marshaled_com : public AsyncOperation_t1445031843_marshaled_com
{
};
#endif // ASSETBUNDLEREQUEST_T699759206_H
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	intptr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	intptr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	intptr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	intptr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	intptr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	uintptr_t ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	intptr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	intptr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	intptr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	intptr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	intptr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	intptr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	intptr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	intptr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	intptr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	intptr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	intptr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t1748372627 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	intptr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	intptr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	intptr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	intptr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	intptr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___system_thread_handle_1)); }
	inline intptr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline intptr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(intptr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused0_3)); }
	inline intptr_t get_unused0_3() const { return ___unused0_3; }
	inline intptr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(intptr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_5)); }
	inline intptr_t get_name_5() const { return ___name_5; }
	inline intptr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(intptr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_notify_11)); }
	inline intptr_t get_start_notify_11() const { return ___start_notify_11; }
	inline intptr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(intptr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_ptr_12)); }
	inline intptr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline intptr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(intptr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___static_data_13)); }
	inline uintptr_t get_static_data_13() const { return ___static_data_13; }
	inline uintptr_t* get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(uintptr_t value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___jit_data_14)); }
	inline intptr_t get_jit_data_14() const { return ___jit_data_14; }
	inline intptr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(intptr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_data_15)); }
	inline intptr_t get_lock_data_15() const { return ___lock_data_15; }
	inline intptr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(intptr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___appdomain_refs_19)); }
	inline intptr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline intptr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(intptr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspend_event_21)); }
	inline intptr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline intptr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(intptr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspended_event_22)); }
	inline intptr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline intptr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(intptr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___resume_event_23)); }
	inline intptr_t get_resume_event_23() const { return ___resume_event_23; }
	inline intptr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(intptr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___synch_cs_24)); }
	inline intptr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline intptr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(intptr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_25)); }
	inline intptr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline intptr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(intptr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_27)); }
	inline intptr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline intptr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(intptr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___end_stack_30)); }
	inline intptr_t get_end_stack_30() const { return ___end_stack_30; }
	inline intptr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(intptr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___manage_callback_35)); }
	inline intptr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline intptr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(intptr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___ec_to_set_37)); }
	inline ExecutionContext_t1748372627 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t1748372627 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t1748372627 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interrupt_on_stop_38)); }
	inline intptr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline intptr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(intptr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused3_39)); }
	inline intptr_t get_unused3_39() const { return ___unused3_39; }
	inline intptr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(intptr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused4_40)); }
	inline intptr_t get_unused4_40() const { return ___unused4_40; }
	inline intptr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(intptr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused5_41)); }
	inline intptr_t get_unused5_41() const { return ___unused5_41; }
	inline intptr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(intptr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused6_42)); }
	inline intptr_t get_unused6_42() const { return ___unused6_42; }
	inline intptr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(intptr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadstart_45)); }
	inline MulticastDelegate_t * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t1853889766 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t1853889766 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t1853889766 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t1853889766 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t2843939325* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t1748372627 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t2843939325* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t2843939325** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t2843939325* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t1748372627 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t1748372627 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t1748372627 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef FAILEDTOLOADSCRIPTOBJECT_T547604379_H
#define FAILEDTOLOADSCRIPTOBJECT_T547604379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FailedToLoadScriptObject
struct  FailedToLoadScriptObject_t547604379  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t547604379_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t547604379_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // FAILEDTOLOADSCRIPTOBJECT_T547604379_H
#ifndef LOGGER_T274032455_H
#define LOGGER_T274032455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t274032455  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t274032455, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T274032455_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TEXTUREPLAYABLEOUTPUT_T648497447_H
#define TEXTUREPLAYABLEOUTPUT_T648497447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.TexturePlayableOutput
struct  TexturePlayableOutput_t648497447 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(TexturePlayableOutput_t648497447, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4208053793  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4208053793 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4208053793  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREPLAYABLEOUTPUT_T648497447_H
#ifndef TEXTUREMIXERPLAYABLE_T2398603962_H
#define TEXTUREMIXERPLAYABLE_T2398603962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.TextureMixerPlayable
struct  TextureMixerPlayable_t2398603962 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(TextureMixerPlayable_t2398603962, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREMIXERPLAYABLE_T2398603962_H
#ifndef PLAYABLE_T459825607_H
#define PLAYABLE_T459825607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t459825607 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t459825607, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t459825607_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t459825607  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t459825607_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t459825607  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t459825607 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t459825607  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T459825607_H
#ifndef MATERIALEFFECTPLAYABLE_T3995207978_H
#define MATERIALEFFECTPLAYABLE_T3995207978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.MaterialEffectPlayable
struct  MaterialEffectPlayable_t3995207978 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(MaterialEffectPlayable_t3995207978, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALEFFECTPLAYABLE_T3995207978_H
#ifndef PLAYABLEBINDING_T354260709_H
#define PLAYABLEBINDING_T354260709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t354260709 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t631007953 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t631007953 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t631007953 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t631007953 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t354260709_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t829358056* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t829358056* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t829358056** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t829358056* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t631007953_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t631007953_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};
};
#endif // PLAYABLEBINDING_T354260709_H
#ifndef CAMERAPLAYABLE_T3330816414_H
#define CAMERAPLAYABLE_T3330816414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.CameraPlayable
struct  CameraPlayable_t3330816414 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(CameraPlayable_t3330816414, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAPLAYABLE_T3330816414_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
#ifndef PLAYABLEOUTPUT_T3179894105_H
#define PLAYABLEOUTPUT_T3179894105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t3179894105 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t3179894105, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4208053793  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4208053793 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4208053793  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t3179894105_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t3179894105  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t3179894105_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t3179894105  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t3179894105 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t3179894105  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T3179894105_H
#ifndef SCRIPTPLAYABLEOUTPUT_T2715692609_H
#define SCRIPTPLAYABLEOUTPUT_T2715692609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t2715692609 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t4208053793  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t2715692609, ___m_Handle_0)); }
	inline PlayableOutputHandle_t4208053793  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t4208053793 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t4208053793  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T2715692609_H
#ifndef PERSISTENTCALL_T3407714124_H
#define PERSISTENTCALL_T3407714124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t3407714124  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t631007953 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t2187958399 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t3407714124, ___m_Target_0)); }
	inline Object_t631007953 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t631007953 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t631007953 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t3407714124, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t3407714124, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t3407714124, ___m_Arguments_3)); }
	inline ArgumentCache_t2187958399 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t2187958399 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t2187958399 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t3407714124, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T3407714124_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef RESOURCEREQUEST_T3109103591_H
#define RESOURCEREQUEST_T3109103591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t3109103591  : public AsyncOperation_t1445031843
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t3109103591, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_2), value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(ResourceRequest_t3109103591, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3109103591_marshaled_pinvoke : public AsyncOperation_t1445031843_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t * ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3109103591_marshaled_com : public AsyncOperation_t1445031843_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t * ___m_Type_3;
};
#endif // RESOURCEREQUEST_T3109103591_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(Type_t, ____impl_0)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_0() const { return ____impl_0; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_0 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_2;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_3;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_4;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_5;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_6;

public:
	inline static int32_t get_offset_of_Delimiter_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_1)); }
	inline Il2CppChar get_Delimiter_1() const { return ___Delimiter_1; }
	inline Il2CppChar* get_address_of_Delimiter_1() { return &___Delimiter_1; }
	inline void set_Delimiter_1(Il2CppChar value)
	{
		___Delimiter_1 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_2)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_2() const { return ___EmptyTypes_2; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_2() { return &___EmptyTypes_2; }
	inline void set_EmptyTypes_2(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_2 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_2), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_3)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_3() const { return ___FilterAttribute_3; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_3() { return &___FilterAttribute_3; }
	inline void set_FilterAttribute_3(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_3 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_3), value);
	}

	inline static int32_t get_offset_of_FilterName_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_4)); }
	inline MemberFilter_t426314064 * get_FilterName_4() const { return ___FilterName_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_4() { return &___FilterName_4; }
	inline void set_FilterName_4(MemberFilter_t426314064 * value)
	{
		___FilterName_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_4), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_5)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_5() const { return ___FilterNameIgnoreCase_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_5() { return &___FilterNameIgnoreCase_5; }
	inline void set_FilterNameIgnoreCase_5(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_5), value);
	}

	inline static int32_t get_offset_of_Missing_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_6)); }
	inline RuntimeObject * get_Missing_6() const { return ___Missing_6; }
	inline RuntimeObject ** get_address_of_Missing_6() { return &___Missing_6; }
	inline void set_Missing_6(RuntimeObject * value)
	{
		___Missing_6 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef STATECHANGED_T2136737110_H
#define STATECHANGED_T2136737110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t2136737110  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T2136737110_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef CAMERACALLBACK_T190067161_H
#define CAMERACALLBACK_T190067161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/CameraCallback
struct  CameraCallback_t190067161  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALLBACK_T190067161_H
#ifndef DISPLAYSUPDATEDDELEGATE_T51287044_H
#define DISPLAYSUPDATEDDELEGATE_T51287044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t51287044  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T51287044_H
#ifndef CSSMEASUREFUNC_T1554030124_H
#define CSSMEASUREFUNC_T1554030124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureFunc
struct  CSSMeasureFunc_t1554030124  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSMEASUREFUNC_T1554030124_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef SENDORPOSTCALLBACK_T2750080073_H
#define SENDORPOSTCALLBACK_T2750080073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t2750080073  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T2750080073_H
#ifndef UNITYACTION_2_T1262235195_H
#define UNITYACTION_2_T1262235195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t1262235195  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T1262235195_H
#ifndef MANUALRESETEVENT_T451242010_H
#define MANUALRESETEVENT_T451242010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t451242010  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T451242010_H
#ifndef PLAYERCONNECTION_T3081694049_H
#define PLAYERCONNECTION_T3081694049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t3081694049  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t3411787513 * ___m_PlayerEditorConnectionEvents_2;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t128053199 * ___m_connectedPlayers_3;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_2() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049, ___m_PlayerEditorConnectionEvents_2)); }
	inline PlayerEditorConnectionEvents_t3411787513 * get_m_PlayerEditorConnectionEvents_2() const { return ___m_PlayerEditorConnectionEvents_2; }
	inline PlayerEditorConnectionEvents_t3411787513 ** get_address_of_m_PlayerEditorConnectionEvents_2() { return &___m_PlayerEditorConnectionEvents_2; }
	inline void set_m_PlayerEditorConnectionEvents_2(PlayerEditorConnectionEvents_t3411787513 * value)
	{
		___m_PlayerEditorConnectionEvents_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerEditorConnectionEvents_2), value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_3() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049, ___m_connectedPlayers_3)); }
	inline List_1_t128053199 * get_m_connectedPlayers_3() const { return ___m_connectedPlayers_3; }
	inline List_1_t128053199 ** get_address_of_m_connectedPlayers_3() { return &___m_connectedPlayers_3; }
	inline void set_m_connectedPlayers_3(List_1_t128053199 * value)
	{
		___m_connectedPlayers_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_connectedPlayers_3), value);
	}
};

struct PlayerConnection_t3081694049_StaticFields
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t3081694049 * ___s_Instance_4;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049_StaticFields, ___s_Instance_4)); }
	inline PlayerConnection_t3081694049 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline PlayerConnection_t3081694049 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(PlayerConnection_t3081694049 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTION_T3081694049_H
#ifndef LOWMEMORYCALLBACK_T4104246196_H
#define LOWMEMORYCALLBACK_T4104246196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LowMemoryCallback
struct  LowMemoryCallback_t4104246196  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWMEMORYCALLBACK_T4104246196_H
#ifndef FUNC_2_T2172606577_H
#define FUNC_2_T2172606577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers,System.Boolean>
struct  Func_2_t2172606577  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2172606577_H
#ifndef PLAYABLEASSET_T3219022681_H
#define PLAYABLEASSET_T3219022681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t3219022681  : public ScriptableObject_t2528358522
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T3219022681_H
#ifndef ACTION_1_T819399007_H
#define ACTION_1_T819399007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct  Action_1_t819399007  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T819399007_H
#ifndef REQUESTATLASCALLBACK_T3100554279_H
#define REQUESTATLASCALLBACK_T3100554279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct  RequestAtlasCallback_t3100554279  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTATLASCALLBACK_T3100554279_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef LOGCALLBACK_T3588208630_H
#define LOGCALLBACK_T3588208630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t3588208630  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T3588208630_H
#ifndef REAPPLYDRIVENPROPERTIES_T1258266594_H
#define REAPPLYDRIVENPROPERTIES_T1258266594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t1258266594  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REAPPLYDRIVENPROPERTIES_T1258266594_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef ACTION_1_T1617499438_H
#define ACTION_1_T1617499438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.AsyncOperation>
struct  Action_1_t1617499438  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1617499438_H
#ifndef UNITYACTION_2_T2165061829_H
#define UNITYACTION_2_T2165061829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_t2165061829  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T2165061829_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef UNITYACTION_1_T2933211702_H
#define UNITYACTION_1_T2933211702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t2933211702  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T2933211702_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef GUILAYER_T2783472903_H
#define GUILAYER_T2783472903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t2783472903  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T2783472903_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef GUIELEMENT_T3567083079_H
#define GUIELEMENT_T3567083079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t3567083079  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T3567083079_H
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1068524471  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_t4206410242  m_Items[1];

public:
	inline Keyframe_t4206410242  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_t4206410242  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_t4206410242 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_t4206410242  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t2245623724  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RequireComponent_t3490506609 * m_Items[1];

public:
	inline RequireComponent_t3490506609 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RequireComponent_t3490506609 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RequireComponent_t3490506609 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RequireComponent_t3490506609 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RequireComponent_t3490506609 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RequireComponent_t3490506609 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3936143868  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DisallowMultipleComponent_t1422053217 * m_Items[1];

public:
	inline DisallowMultipleComponent_t1422053217 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DisallowMultipleComponent_t1422053217 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DisallowMultipleComponent_t1422053217 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DisallowMultipleComponent_t1422053217 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DisallowMultipleComponent_t1422053217 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DisallowMultipleComponent_t1422053217 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3239458680  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ExecuteInEditMode_t3727731349 * m_Items[1];

public:
	inline ExecuteInEditMode_t3727731349 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExecuteInEditMode_t3727731349 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExecuteInEditMode_t3727731349 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ExecuteInEditMode_t3727731349 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExecuteInEditMode_t3727731349 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExecuteInEditMode_t3727731349 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_t4157153871 * m_Items[1];

public:
	inline Camera_t4157153871 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Camera_t4157153871 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Display[]
struct DisplayU5BU5D_t103034768  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Display_t1387065949 * m_Items[1];

public:
	inline Display_t1387065949 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Display_t1387065949 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Display_t1387065949 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Display_t1387065949 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Display_t1387065949 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Display_t1387065949 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2943407543  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_t1461694466  m_Items[1];

public:
	inline ParameterModifier_t1461694466  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t1461694466 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t1461694466  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ParameterModifier_t1461694466  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t1461694466 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t1461694466  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t829358056  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PlayableBinding_t354260709  m_Items[1];

public:
	inline PlayableBinding_t354260709  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayableBinding_t354260709 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayableBinding_t354260709  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PlayableBinding_t354260709  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayableBinding_t354260709 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayableBinding_t354260709  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1685002053  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HitInfo_t3229609740  m_Items[1];

public:
	inline HitInfo_t3229609740  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HitInfo_t3229609740 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HitInfo_t3229609740  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HitInfo_t3229609740  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HitInfo_t3229609740 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HitInfo_t3229609740  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};

extern "C" void Object_t631007953_marshal_pinvoke(const Object_t631007953& unmarshaled, Object_t631007953_marshaled_pinvoke& marshaled);
extern "C" void Object_t631007953_marshal_pinvoke_back(const Object_t631007953_marshaled_pinvoke& marshaled, Object_t631007953& unmarshaled);
extern "C" void Object_t631007953_marshal_pinvoke_cleanup(Object_t631007953_marshaled_pinvoke& marshaled);
extern "C" void Object_t631007953_marshal_com(const Object_t631007953& unmarshaled, Object_t631007953_marshaled_com& marshaled);
extern "C" void Object_t631007953_marshal_com_back(const Object_t631007953_marshaled_com& marshaled, Object_t631007953& unmarshaled);
extern "C" void Object_t631007953_marshal_com_cleanup(Object_t631007953_marshaled_com& marshaled);

// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C"  void Stack_1__ctor_m3164958980_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
extern "C"  void Stack_1_Push_m1669856732_gshared (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C"  RuntimeObject * Stack_1_Pop_m756553478_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C"  int32_t Stack_1_get_Count_m1599740434_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C"  ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// T UnityEngine.AttributeHelperEngine::GetCustomAttributeOfType<System.Object>(System.Type)
extern "C"  RuntimeObject * AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_gshared (RuntimeObject * __this /* static, unused */, Type_t * ___klass0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.BeforeRenderHelper/OrderBlock>::get_Item(System.Int32)
extern "C"  OrderBlock_t1585977831  List_1_get_Item_m1878021807_gshared (List_1_t3058052573 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.BeforeRenderHelper/OrderBlock>::get_Count()
extern "C"  int32_t List_1_get_Count_m1337941140_gshared (List_1_t3058052573 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.BeforeRenderHelper/OrderBlock>::.ctor()
extern "C"  void List_1__ctor_m1345008423_gshared (List_1_t3058052573 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3495031886_gshared (Dictionary_2_t1301971883 * __this, intptr_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m517598155_gshared (Dictionary_2_t1301971883 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C"  void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C"  void CachedInvokableCall_1__ctor_m1997047287_gshared (CachedInvokableCall_1_t3723462114 * __this, Object_t631007953 * p0, MethodInfo_t * p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C"  void CachedInvokableCall_1__ctor_m2046334630_gshared (CachedInvokableCall_1_t982173797 * __this, Object_t631007953 * p0, MethodInfo_t * p1, int32_t p2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C"  void CachedInvokableCall_1__ctor_m3714231058_gshared (CachedInvokableCall_1_t1111334208 * __this, Object_t631007953 * p0, MethodInfo_t * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C"  void CachedInvokableCall_1__ctor_m3078689395_gshared (CachedInvokableCall_1_t2423483305 * __this, Object_t631007953 * p0, MethodInfo_t * p1, bool p2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C"  RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m3604335408_gshared (UnityEvent_1_t3832605257 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
extern "C"  bool List_1_Remove_m3037048099_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3104565095_gshared (Func_2_t3759279471 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  RuntimeObject* Enumerable_Where_TisRuntimeObject_m3454096398_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3759279471 * p1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  bool Enumerable_Any_TisRuntimeObject_m3173759778_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m2734859485_gshared (UnityEvent_1_t3961765668 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C"  void UnityEvent_1__ctor_m3816765192_gshared (UnityEvent_1_t3832605257 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C"  void UnityEvent_1__ctor_m1789019280_gshared (UnityEvent_1_t3961765668 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m1541286357_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m3649732398_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m944492567_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  p0, Scene_t2348375561  p1, const RuntimeMethod* method);
// T UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Int32)
extern "C"  void Queue_1__ctor_m1971992302_gshared (Queue_1_t1200778106 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Dequeue()
extern "C"  WorkRequest_t1354518612  Queue_1_Dequeue_m979967976_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m3368911732_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve_Init_m425927913 (AnimationCurve_t3046754366 * __this, KeyframeU5BU5D_t1068524471* ___keys0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C"  void AnimationCurve_Cleanup_m35123172 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/LowMemoryCallback::Invoke()
extern "C"  void LowMemoryCallback_Invoke_m1926578529 (LowMemoryCallback_t4104246196 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern "C"  void LogCallback_Invoke_m1707963620 (LogCallback_t3588208630 * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BeforeRenderHelper::Invoke()
extern "C"  void BeforeRenderHelper_Invoke_m50072094 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C"  void AsyncOperation_InternalDestroy_m4215879047 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::Invoke(!0)
#define Action_1_Invoke_m1955091167(__this, p0, method) ((  void (*) (Action_1_t1617499438 *, AsyncOperation_t1445031843 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Stack`1<System.Type>::.ctor()
#define Stack_1__ctor_m3716217587(__this, method) ((  void (*) (Stack_1_t3327334215 *, const RuntimeMethod*))Stack_1__ctor_m3164958980_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Type>::Push(!0)
#define Stack_1_Push_m506528439(__this, p0, method) ((  void (*) (Stack_1_t3327334215 *, Type_t *, const RuntimeMethod*))Stack_1_Push_m1669856732_gshared)(__this, p0, method)
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Stack`1<System.Type>::Pop()
#define Stack_1_Pop_m2843357855(__this, method) ((  Type_t * (*) (Stack_1_t3327334215 *, const RuntimeMethod*))Stack_1_Pop_m756553478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count()
#define Stack_1_get_Count_m1286321891(__this, method) ((  int32_t (*) (Stack_1_t3327334215 *, const RuntimeMethod*))Stack_1_get_Count_m1599740434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
#define List_1__ctor_m3073166008(__this, method) ((  void (*) (List_1_t3956019502 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(!0)
#define List_1_Add_m576010208(__this, p0, method) ((  void (*) (List_1_t3956019502 *, Type_t *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// !0[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m1257172357(__this, method) ((  TypeU5BU5D_t3940880105* (*) (List_1_t3956019502 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method)
// T UnityEngine.AttributeHelperEngine::GetCustomAttributeOfType<UnityEngine.DefaultExecutionOrder>(System.Type)
#define AttributeHelperEngine_GetCustomAttributeOfType_TisDefaultExecutionOrder_t3059642329_m2317108536(__this /* static, unused */, ___klass0, method) ((  DefaultExecutionOrder_t3059642329 * (*) (RuntimeObject * /* static, unused */, Type_t *, const RuntimeMethod*))AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_gshared)(__this /* static, unused */, ___klass0, method)
// System.Int32 UnityEngine.DefaultExecutionOrder::get_order()
extern "C"  int32_t DefaultExecutionOrder_get_order_m1454999278 (DefaultExecutionOrder_t3059642329 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.BeforeRenderHelper/OrderBlock>::get_Item(System.Int32)
#define List_1_get_Item_m1878021807(__this, p0, method) ((  OrderBlock_t1585977831  (*) (List_1_t3058052573 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1878021807_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C"  void UnityAction_Invoke_m893829196 (UnityAction_t3245792599 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.BeforeRenderHelper/OrderBlock>::get_Count()
#define List_1_get_Count_m1337941140(__this, method) ((  int32_t (*) (List_1_t3058052573 *, const RuntimeMethod*))List_1_get_Count_m1337941140_gshared)(__this, method)
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.BeforeRenderHelper/OrderBlock>::.ctor()
#define List_1__ctor_m1345008423(__this, method) ((  void (*) (List_1_t3058052573 *, const RuntimeMethod*))List_1__ctor_m1345008423_gshared)(__this, method)
// System.Void UnityEngine.Component::.ctor()
extern "C"  void Component__ctor_m1928064382 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::.ctor()
extern "C"  void Behaviour__ctor_m346897018 (Behaviour_t1437897464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C"  void Camera_INTERNAL_get_pixelRect_m2277658347 (Camera_t4157153871 * __this, Rect_t2360479859 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Ray&)
extern "C"  void Camera_INTERNAL_CALL_ScreenPointToRay_m394533292 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___self0, Vector3_t3722313464 * ___position1, Ray_t3785851493 * ___value2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C"  void CameraCallback_Invoke_m3308824940 (CameraCallback_t190067161 * __this, Camera_t4157153871 * ___cam0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  GameObject_t1113636619 * Camera_INTERNAL_CALL_RaycastTry_m3238909295 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___self0, Ray_t3785851493 * ___ray1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  GameObject_t1113636619 * Camera_INTERNAL_CALL_RaycastTry2D_m3172975827 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___self0, Ray_t3785851493 * ___ray1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::.ctor()
extern "C"  void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C"  Component_t1923634451 * GameObject_GetComponent_m1027872079 (GameObject_t1113636619 * __this, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C"  void Coroutine_ReleaseCoroutine_m809189848 (Coroutine_t3829159415 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CSSLayout.CSSSize UnityEngine.CSSLayout.CSSMeasureFunc::Invoke(System.IntPtr,System.Single,UnityEngine.CSSLayout.CSSMeasureMode,System.Single,UnityEngine.CSSLayout.CSSMeasureMode)
extern "C"  CSSSize_t3377836552  CSSMeasureFunc_Invoke_m3910201085 (CSSMeasureFunc_t1554030124 * __this, intptr_t ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m2207359883(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3851719731 *, intptr_t, WeakReference_t1334886716 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3495031886_gshared)(__this, p0, p1, method)
// UnityEngine.CSSLayout.CSSMeasureFunc UnityEngine.CSSLayout.Native::CSSNodeGetMeasureFunc(System.IntPtr)
extern "C"  CSSMeasureFunc_t1554030124 * Native_CSSNodeGetMeasureFunc_m2145410129 (RuntimeObject * __this /* static, unused */, intptr_t ___node0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C"  void* IntPtr_op_Explicit_m2520637223 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::.ctor()
#define Dictionary_2__ctor_m602294741(__this, method) ((  void (*) (Dictionary_2_t3851719731 *, const RuntimeMethod*))Dictionary_2__ctor_m517598155_gshared)(__this, method)
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CullingGroup::FinalizerFailure()
extern "C"  void CullingGroup_FinalizerFailure_m1165085675 (CullingGroup_t2096318768 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void* System.IntPtr::ToPointer()
extern "C"  void* IntPtr_ToPointer_m4157623054 (intptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
extern "C"  void StateChanged_Invoke_m1925531365 (StateChanged_t2136737110 * __this, CullingGroupEvent_t1722745023  ___sphere0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
extern "C"  RuntimeObject* Debug_get_unityLogger_m2239795986 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::.ctor()
extern "C"  void DebugLogHandler__ctor_m3380237231 (DebugLogHandler_t826086171 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::.ctor(UnityEngine.ILogHandler)
extern "C"  void Logger__ctor_m439059923 (Logger_t274032455 * __this, RuntimeObject* ___logHandler0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,System.String,UnityEngine.Object)
extern "C"  void DebugLogHandler_Internal_Log_m4175774469 (RuntimeObject * __this /* static, unused */, int32_t ___level0, String_t* ___msg1, Object_t631007953 * ___obj2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Int32)
extern "C"  void IntPtr__ctor_m987082960 (intptr_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C"  void Display__ctor_m3105658851 (Display_t1387065949 * __this, intptr_t ___nativeDisplay0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C"  void DisplaysUpdatedDelegate_Invoke_m3203573844 (DisplaysUpdatedDelegate_t51287044 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.ctor()
extern "C"  void Display__ctor_m501911701 (Display_t1387065949 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String)
extern "C"  int32_t String_IndexOf_m1977622757 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C"  int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String)
extern "C"  bool String_EndsWith_m1901926500 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern "C"  void ArgumentCache_TidyAssemblyTypeName_m3234393930 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
extern "C"  RuntimeObject * Delegate_get_Target_m2361978888 (Delegate_t1188392813 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::ReferenceEquals(System.Object,System.Object)
extern "C"  bool Object_ReferenceEquals_m610702577 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___x0, Object_t631007953 * ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void BaseInvokableCall__ctor_m2110966014 (BaseInvokableCall_t2703961024 * __this, RuntimeObject * ___target0, MethodInfo_t * ___function1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C"  Delegate_t1188392813 * NetFxCoreExtensions_CreateDelegate_m751211712 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, RuntimeObject * ___target2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::add_Delegate(UnityEngine.Events.UnityAction)
extern "C"  void InvokableCall_add_Delegate_m491308793 (InvokableCall_t832123510 * __this, UnityAction_t3245792599 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C"  bool BaseInvokableCall_AllowInvoke_m878393606 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___delegate0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
#define List_1__ctor_m1425123358(__this, method) ((  void (*) (List_1_t4176035766 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0)
#define List_1_Add_m178523244(__this, p0, method) ((  void (*) (List_1_t4176035766 *, BaseInvokableCall_t2703961024 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m803816076(__this, method) ((  void (*) (List_1_t4176035766 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m3536422894(__this, p0, method) ((  void (*) (List_1_t4176035766 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C"  void ArgumentCache__ctor_m2732653802 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C"  Object_t631007953 * PersistentCall_get_target_m830923650 (PersistentCall_t3407714124 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C"  String_t* PersistentCall_get_methodName_m4214122315 (PersistentCall_t3407714124 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern "C"  MethodInfo_t * UnityEventBase_FindMethod_m622251156 (UnityEventBase_t3960448221 * __this, PersistentCall_t3407714124 * ___call0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C"  BaseInvokableCall_t2703961024 * PersistentCall_GetObjectCall_m4041241444 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___target0, MethodInfo_t * ___method1, ArgumentCache_t2187958399 * ___arguments2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C"  float ArgumentCache_get_floatArgument_m3471193103 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
#define CachedInvokableCall_1__ctor_m1997047287(__this, p0, p1, p2, method) ((  void (*) (CachedInvokableCall_1_t3723462114 *, Object_t631007953 *, MethodInfo_t *, float, const RuntimeMethod*))CachedInvokableCall_1__ctor_m1997047287_gshared)(__this, p0, p1, p2, method)
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C"  int32_t ArgumentCache_get_intArgument_m1309958679 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
#define CachedInvokableCall_1__ctor_m2046334630(__this, p0, p1, p2, method) ((  void (*) (CachedInvokableCall_1_t982173797 *, Object_t631007953 *, MethodInfo_t *, int32_t, const RuntimeMethod*))CachedInvokableCall_1__ctor_m2046334630_gshared)(__this, p0, p1, p2, method)
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C"  String_t* ArgumentCache_get_stringArgument_m3872675090 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.String>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
#define CachedInvokableCall_1__ctor_m2435934642(__this, p0, p1, p2, method) ((  void (*) (CachedInvokableCall_1_t4173646029 *, Object_t631007953 *, MethodInfo_t *, String_t*, const RuntimeMethod*))CachedInvokableCall_1__ctor_m3714231058_gshared)(__this, p0, p1, p2, method)
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C"  bool ArgumentCache_get_boolArgument_m2277082935 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
#define CachedInvokableCall_1__ctor_m3078689395(__this, p0, p1, p2, method) ((  void (*) (CachedInvokableCall_1_t2423483305 *, Object_t631007953 *, MethodInfo_t *, bool, const RuntimeMethod*))CachedInvokableCall_1__ctor_m3078689395_gshared)(__this, p0, p1, p2, method)
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall__ctor_m1303836326 (InvokableCall_t832123510 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C"  String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3450114170 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C"  Type_t * Type_GetType_m3605423543 (RuntimeObject * __this /* static, unused */, String_t* p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C"  ConstructorInfo_t5769829 * Type_GetConstructor_m2219014380 (Type_t * __this, TypeU5BU5D_t3940880105* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C"  Object_t631007953 * ArgumentCache_get_unityObjectArgument_m3434100 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern "C"  RuntimeObject * ConstructorInfo_Invoke_m4089836896 (ConstructorInfo_t5769829 * __this, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
#define List_1__ctor_m2234084945(__this, method) ((  void (*) (List_1_t584821570 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m498955693(__this, method) ((  Enumerator_t2474065447  (*) (List_1_t584821570 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::get_Current()
#define Enumerator_get_Current_m1824438863(__this, method) ((  PersistentCall_t3407714124 * (*) (Enumerator_t2474065447 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C"  bool PersistentCall_IsValid_m2325196163 (PersistentCall_t3407714124 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C"  BaseInvokableCall_t2703961024 * PersistentCall_GetRuntimeCall_m3976533158 (PersistentCall_t3407714124 * __this, UnityEventBase_t3960448221 * ___theEvent0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C"  void InvokableCallList_AddPersistentInvokableCall_m778853773 (InvokableCallList_t2498835369 * __this, BaseInvokableCall_t2703961024 * ___call0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::MoveNext()
#define Enumerator_MoveNext_m4100612698(__this, method) ((  bool (*) (Enumerator_t2474065447 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::Dispose()
#define Enumerator_Dispose_m2540888223(__this, method) ((  void (*) (Enumerator_t2474065447 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C"  void UnityEventBase__ctor_m1851535676 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C"  MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3989987635 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t3940880105* ___argumentTypes2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern "C"  void InvokableCallList__ctor_m829480958 (InvokableCallList_t2498835369 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern "C"  void PersistentCallGroup__ctor_m1525263635 (PersistentCallGroup_t3050769227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C"  void UnityEventBase_DirtyPersistentCalls_m3575963459 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C"  ArgumentCache_t2187958399 * PersistentCall_get_arguments_m3144105308 (PersistentCall_t3407714124 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C"  int32_t PersistentCall_get_mode_m483997668 (PersistentCall_t3407714124 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern "C"  MethodInfo_t * UnityEventBase_FindMethod_m3366332957 (UnityEventBase_t3960448221 * __this, String_t* ___name0, RuntimeObject * ___listener1, int32_t ___mode2, Type_t * ___argumentType3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C"  void InvokableCallList_ClearPersistent_m1904264973 (InvokableCallList_t2498835369 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern "C"  void PersistentCallGroup_Initialize_m4253175514 (PersistentCallGroup_t3050769227 * __this, InvokableCallList_t2498835369 * ___invokableList0, UnityEventBase_t3960448221 * ___unityEventBase1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C"  void UnityEventBase_RebuildPersistentCallsIfNeeded_m216788690 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::PrepareInvoke()
extern "C"  List_1_t4176035766 * InvokableCallList_PrepareInvoke_m4003891334 (InvokableCallList_t2498835369 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Object::ToString()
extern "C"  String_t* Object_ToString_m1740002499 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * Type_GetMethod_m637078096 (Type_t * __this, String_t* p0, int32_t p1, Binder_t2999457153 * p2, TypeU5BU5D_t3940880105* p3, ParameterModifierU5BU5D_t2943407543* p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
extern "C"  bool Type_get_IsPrimitive_m1114712797 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
extern "C"  PlayableHandle_t1095853803  CameraPlayable_GetHandle_m1459651790 (CameraPlayable_t3330816414 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C"  bool PlayableHandle_op_Equality_m3344837515 (RuntimeObject * __this /* static, unused */, PlayableHandle_t1095853803  ___x0, PlayableHandle_t1095853803  ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
extern "C"  bool CameraPlayable_Equals_m4009879053 (CameraPlayable_t3330816414 * __this, CameraPlayable_t3330816414  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
extern "C"  PlayableHandle_t1095853803  MaterialEffectPlayable_GetHandle_m4279427933 (MaterialEffectPlayable_t3995207978 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
extern "C"  bool MaterialEffectPlayable_Equals_m3750885802 (MaterialEffectPlayable_t3995207978 * __this, MaterialEffectPlayable_t3995207978  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
extern "C"  PlayableHandle_t1095853803  TextureMixerPlayable_GetHandle_m2203457785 (TextureMixerPlayable_t2398603962 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
extern "C"  bool TextureMixerPlayable_Equals_m1074187513 (TextureMixerPlayable_t2398603962 * __this, TextureMixerPlayable_t2398603962  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Rendering.RenderPipelineManager::set_currentPipeline(UnityEngine.Experimental.Rendering.IRenderPipeline)
extern "C"  void RenderPipelineManager_set_currentPipeline_m3492857006 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Rendering.RenderPipelineManager::PrepareRenderPipeline(UnityEngine.Experimental.Rendering.IRenderPipelineAsset)
extern "C"  void RenderPipelineManager_PrepareRenderPipeline_m4184225229 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___pipe0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::get_currentPipeline()
extern "C"  RuntimeObject* RenderPipelineManager_get_currentPipeline_m1638613344 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
extern "C"  void ScriptableRenderContext__ctor_m172989033 (ScriptableRenderContext_t274343796 * __this, intptr_t ___ptr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Rendering.RenderPipelineManager::CleanupRenderPipeline()
extern "C"  void RenderPipelineManager_CleanupRenderPipeline_m3545163046 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C"  void GameObject_Internal_CreateGameObject_m2533291801 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___mono0, String_t* ___name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C"  void Gradient_Init_m3104802093 (Gradient_t3067099924 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C"  void Gradient_Cleanup_m3422458828 (Gradient_t3067099924 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C"  GUIElement_t3567083079 * GUILayer_INTERNAL_CALL_HitTest_m1069802956 (RuntimeObject * __this /* static, unused */, GUILayer_t2783472903 * ___self0, Vector3_t3722313464 * ___screenPosition1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDownInt(System.Int32)
extern "C"  bool Input_GetKeyDownInt_m3509480073 (RuntimeObject * __this /* static, unused */, int32_t ___key0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C"  void Input_INTERNAL_get_mousePosition_m1805263023 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C"  RuntimeObject * DefaultValueAttribute_get_Value_m3086344020 (DefaultValueAttribute_t2337225216 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
extern "C"  int32_t Attribute_GetHashCode_m2508706224 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_logHandler(UnityEngine.ILogHandler)
extern "C"  void Logger_set_logHandler_m4059005946 (Logger_t274032455 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_logEnabled(System.Boolean)
extern "C"  void Logger_set_logEnabled_m1180597166 (Logger_t274032455 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_filterLogType(UnityEngine.LogType)
extern "C"  void Logger_set_filterLogType_m3622751173 (Logger_t274032455 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Logger::get_logEnabled()
extern "C"  bool Logger_get_logEnabled_m3154120769 (Logger_t274032455 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LogType UnityEngine.Logger::get_filterLogType()
extern "C"  int32_t Logger_get_filterLogType_m1177392786 (Logger_t274032455 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Logger::IsLogTypeAllowed(UnityEngine.LogType)
extern "C"  bool Logger_IsLogTypeAllowed_m3527674834 (Logger_t274032455 * __this, int32_t ___logType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogHandler UnityEngine.Logger::get_logHandler()
extern "C"  RuntimeObject* Logger_get_logHandler_m1335645353 (Logger_t274032455 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Logger::GetString(System.Object)
extern "C"  String_t* Logger_GetString_m3669755330 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
extern "C"  void ArgumentNullException__ctor_m2009621981 (ArgumentNullException_t1615371798 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ManagedStreamHelpers::ValidateLoadFromStream(System.IO.Stream)
extern "C"  void ManagedStreamHelpers_ValidateLoadFromStream_m580138133 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___stream0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float ___a0, float ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NativeClassAttribute::set_QualifiedNativeName(System.String)
extern "C"  void NativeClassAttribute_set_QualifiedNativeName_m817439736 (NativeClassAttribute_t2601352714 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::.ctor()
extern "C"  void PlayerEditorConnectionEvents__ctor_m3177489832 (PlayerEditorConnectionEvents_t3411787513 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1628857705(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method)
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___x0, Object_t631007953 * ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::CreateInstance()
extern "C"  PlayerConnection_t3081694049 * PlayerConnection_CreateInstance_m902052006 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T UnityEngine.ScriptableObject::CreateInstance<UnityEngine.Networking.PlayerConnection.PlayerConnection>()
#define ScriptableObject_CreateInstance_TisPlayerConnection_t3081694049_m1971238771(__this /* static, unused */, method) ((  PlayerConnection_t3081694049 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1222846562 (RuntimeObject * __this /* static, unused */, intptr_t p0, ByteU5BU5D_t4116647657* p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::get_instance()
extern "C"  PlayerConnection_t3081694049 * PlayerConnection_get_instance_m1750121257 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.String)
extern "C"  void Guid__ctor_m2423264394 (Guid_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::InvokeMessageIdSubscribers(System.Guid,System.Byte[],System.Int32)
extern "C"  void PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_m2094591713 (PlayerEditorConnectionEvents_t3411787513 * __this, Guid_t  ___messageId0, ByteU5BU5D_t4116647657* ___data1, int32_t ___playerId2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
#define UnityEvent_1_Invoke_m3604335408(__this, p0, method) ((  void (*) (UnityEvent_1_t3832605257 *, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_m3604335408_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
#define List_1_Remove_m3037048099(__this, p0, method) ((  bool (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Remove_m3037048099_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>::.ctor()
#define List_1__ctor_m134154014(__this, method) ((  void (*) (List_1_t3157010512 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent::.ctor()
extern "C"  void ConnectionChangeEvent__ctor_m764126802 (ConnectionChangeEvent_t3251856151 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::.ctor()
extern "C"  void U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0__ctor_m2486500792 (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m302082295(__this, p0, p1, method) ((  void (*) (Func_2_t2172606577 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3104565095_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisMessageTypeSubscribers_t1684935770_m2256379362(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2172606577 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3454096398_gshared)(__this /* static, unused */, p0, p1, method)
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Any_TisMessageTypeSubscribers_t1684935770_m1059743985(__this /* static, unused */, p0, method) ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m3173759778_gshared)(__this /* static, unused */, p0, method)
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.PlayerConnection.MessageEventArgs::.ctor()
extern "C"  void MessageEventArgs__ctor_m14798785 (MessageEventArgs_t1170575784 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>::Invoke(T0)
#define UnityEvent_1_Invoke_m1904070161(__this, p0, method) ((  void (*) (UnityEvent_1_t2052235288 *, MessageEventArgs_t1170575784 *, const RuntimeMethod*))UnityEvent_1_Invoke_m2734859485_gshared)(__this, p0, method)
// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::get_MessageTypeId()
extern "C"  Guid_t  MessageTypeSubscribers_get_MessageTypeId_m1143155832 (MessageTypeSubscribers_t1684935770 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
extern "C"  bool Guid_op_Equality_m4289903222 (RuntimeObject * __this /* static, unused */, Guid_t  p0, Guid_t  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
#define UnityEvent_1__ctor_m3816765192(__this, method) ((  void (*) (UnityEvent_1_t3832605257 *, const RuntimeMethod*))UnityEvent_1__ctor_m3816765192_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>::.ctor()
#define UnityEvent_1__ctor_m1298757307(__this, method) ((  void (*) (UnityEvent_1_t2052235288 *, const RuntimeMethod*))UnityEvent_1__ctor_m1789019280_gshared)(__this, method)
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent::.ctor()
extern "C"  void MessageEvent__ctor_m1231650089 (MessageEvent_t1491597365 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  Object_t631007953 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m243746258 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___data0, Vector3_t3722313464 * ___pos1, Quaternion_t2301928331 * ___rot2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C"  void Object_Destroy_m3118546832 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___obj0, float ___t1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Object::GetHashCode()
extern "C"  int32_t Object_GetHashCode_m2705121830 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_CompareBaseObjects_m2405226032 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___lhs0, Object_t631007953 * ___rhs1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C"  bool Object_IsNativeObjectAlive_m3095908075 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___o0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C"  intptr_t Object_GetCachedPtr_m151292858 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C"  void Object_CheckNullArgument_m4237608654 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t631007953 * Object_Internal_InstantiateSingle_m4074556765 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___data0, Vector3_t3722313464  ___pos1, Quaternion_t2301928331  ___rot2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C"  void Playable__ctor_m3175303195 (Playable_t459825607 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
extern "C"  PlayableHandle_t1095853803  Playable_GetHandle_m98909670 (Playable_t459825607 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
extern "C"  bool Playable_Equals_m328753404 (Playable_t459825607 * __this, Playable_t459825607  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
extern "C"  PlayableHandle_t1095853803  PlayableHandle_get_Null_m218234861 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
extern "C"  Playable_t459825607  Playable_get_Null_m3556999077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Object::MemberwiseClone()
extern "C"  RuntimeObject * Object_MemberwiseClone_m1474068832 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C"  bool PlayableHandle_CompareVersion_m2748798983 (RuntimeObject * __this /* static, unused */, PlayableHandle_t1095853803  ___lhs0, PlayableHandle_t1095853803  ___rhs1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
extern "C"  bool PlayableHandle_Equals_m1666612586 (PlayableHandle_t1095853803 * __this, RuntimeObject * ___p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::GetHashCode()
extern "C"  int32_t IntPtr_GetHashCode_m3588219647 (intptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::GetHashCode()
extern "C"  int32_t Int32_GetHashCode_m1876651407 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
extern "C"  int32_t PlayableHandle_GetHashCode_m1297878485 (PlayableHandle_t1095853803 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
extern "C"  void PlayableOutput__ctor_m3330119218 (PlayableOutput_t3179894105 * __this, PlayableOutputHandle_t4208053793  ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
extern "C"  PlayableOutputHandle_t4208053793  PlayableOutput_GetHandle_m777137769 (PlayableOutput_t3179894105 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
extern "C"  bool PlayableOutputHandle_op_Equality_m388301694 (RuntimeObject * __this /* static, unused */, PlayableOutputHandle_t4208053793  ___lhs0, PlayableOutputHandle_t4208053793  ___rhs1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
extern "C"  bool PlayableOutput_Equals_m3146274716 (PlayableOutput_t3179894105 * __this, PlayableOutput_t3179894105  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
extern "C"  PlayableOutputHandle_t4208053793  PlayableOutputHandle_get_Null_m1200584339 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
extern "C"  int32_t PlayableOutputHandle_GetHashCode_m2803245663 (PlayableOutputHandle_t4208053793 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
extern "C"  bool PlayableOutputHandle_CompareVersion_m841260813 (RuntimeObject * __this /* static, unused */, PlayableOutputHandle_t4208053793  ___lhs0, PlayableOutputHandle_t4208053793  ___rhs1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
extern "C"  bool PlayableOutputHandle_Equals_m334596297 (PlayableOutputHandle_t4208053793 * __this, RuntimeObject * ___p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PropertyName UnityEngine.PropertyNameUtils::PropertyNameFromString(System.String)
extern "C"  PropertyName_t3749835189  PropertyNameUtils_PropertyNameFromString_m3719796130 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PropertyName::.ctor(UnityEngine.PropertyName)
extern "C"  void PropertyName__ctor_m3511806171 (PropertyName_t3749835189 * __this, PropertyName_t3749835189  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PropertyName::.ctor(System.String)
extern "C"  void PropertyName__ctor_m1858502781 (PropertyName_t3749835189 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PropertyName::.ctor(System.Int32)
extern "C"  void PropertyName__ctor_m912660408 (PropertyName_t3749835189 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PropertyName::GetHashCode()
extern "C"  int32_t PropertyName_GetHashCode_m3570549176 (PropertyName_t3749835189 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PropertyName::op_Equality(UnityEngine.PropertyName,UnityEngine.PropertyName)
extern "C"  bool PropertyName_op_Equality_m2761233272 (RuntimeObject * __this /* static, unused */, PropertyName_t3749835189  ___lhs0, PropertyName_t3749835189  ___rhs1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PropertyName::Equals(System.Object)
extern "C"  bool PropertyName_Equals_m2608649819 (PropertyName_t3749835189 * __this, RuntimeObject * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PropertyName::ToString()
extern "C"  String_t* PropertyName_ToString_m3328159423 (PropertyName_t3749835189 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PropertyNameUtils::PropertyNameFromString_Injected(System.String,UnityEngine.PropertyName&)
extern "C"  void PropertyNameUtils_PropertyNameFromString_Injected_m1259736140 (RuntimeObject * __this /* static, unused */, String_t* ___name0, PropertyName_t3749835189 * ___ret1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m435141806 (Quaternion_t2301928331 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::GetHashCode()
extern "C"  int32_t Single_GetHashCode_m1558506138 (float* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m2636680144 (Quaternion_t2301928331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::Equals(System.Single)
extern "C"  bool Single_Equals_m1601893879 (float* __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m1863659319 (Quaternion_t2301928331 * __this, RuntimeObject * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C"  String_t* UnityString_Format_m261690510 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m2203056442 (Quaternion_t2301928331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C"  int32_t Random_RandomRangeInt_m2165800604 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t3722313464  Ray_get_direction_m761601601 (Ray_t3785851493 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
extern "C"  String_t* Ray_ToString_m1732834890 (Ray_t3785851493 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
extern "C"  float Rect_get_x_m3839990490 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
extern "C"  float Rect_get_y_m1501338330 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMin()
extern "C"  float Rect_get_xMin_m581135837 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
extern "C"  float Rect_get_yMin_m2601414109 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
extern "C"  float Rect_get_xMax_m3018144503 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
extern "C"  float Rect_get_yMax_m743455479 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern "C"  bool Rect_Contains_m1232228501 (Rect_t2360479859 * __this, Vector3_t3722313464  ___point0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rect::GetHashCode()
extern "C"  int32_t Rect_GetHashCode_m1816164252 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern "C"  bool Rect_Equals_m4169342960 (Rect_t2360479859 * __this, RuntimeObject * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Rect::ToString()
extern "C"  String_t* Rect_ToString_m447614148 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
extern "C"  void ReapplyDrivenProperties_Invoke_m1151937880 (ReapplyDrivenProperties_t1258266594 * __this, RectTransform_t3704657025 * ___driven0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::.ctor()
extern "C"  void Texture__ctor_m3554519797 (Texture_t3661962703 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C"  Object_t631007953 * Resources_Load_m3480190876 (RuntimeObject * __this /* static, unused */, String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_handle()
extern "C"  int32_t Scene_get_handle_m1544696971 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::GetHashCode()
extern "C"  int32_t Scene_GetHashCode_m2998285532 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SceneManagement.Scene::Equals(System.Object)
extern "C"  bool Scene_Equals_m581999093 (Scene_t2348375561 * __this, RuntimeObject * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
#define UnityAction_2_Invoke_m1541286357(__this, p0, p1, method) ((  void (*) (UnityAction_2_t2165061829 *, Scene_t2348375561 , int32_t, const RuntimeMethod*))UnityAction_2_Invoke_m1541286357_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
#define UnityAction_1_Invoke_m3649732398(__this, p0, method) ((  void (*) (UnityAction_1_t2933211702 *, Scene_t2348375561 , const RuntimeMethod*))UnityAction_1_Invoke_m3649732398_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
#define UnityAction_2_Invoke_m944492567(__this, p0, p1, method) ((  void (*) (UnityAction_2_t1262235195 *, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*))UnityAction_2_Invoke_m944492567_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C"  void ScriptableObject_Internal_CreateScriptableObject_m2945320968 (RuntimeObject * __this /* static, unused */, ScriptableObject_t2528358522 * ___self0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C"  ScriptableObject_t2528358522 * ScriptableObject_CreateInstanceFromType_m1997111014 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t2783472903_m4244438908(__this, method) ((  GUILayer_t2783472903 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___exists0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C"  GUIElement_t3567083079 * GUILayer_HitTest_m512928460 (GUILayer_t2783472903 * __this, Vector3_t3722313464  ___screenPosition0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C"  int32_t Camera_get_allCamerasCount_m528453758 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C"  int32_t Camera_GetAllCameras_m668492922 (RuntimeObject * __this /* static, unused */, CameraU5BU5D_t1709987734* ___cameras0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C"  RenderTexture_t2108887433 * Camera_get_targetTexture_m2278634983 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C"  Rect_t2360479859  Camera_get_pixelRect_m2283183456 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SendMouseEvents::HitTestLegacyGUI(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.SendMouseEvents/HitInfo&)
extern "C"  void SendMouseEvents_HitTestLegacyGUI_m579942228 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___camera0, Vector3_t3722313464  ___mousePosition1, HitInfo_t3229609740 * ___hitInfo2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C"  int32_t Camera_get_eventMask_m819189086 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t3785851493  Camera_ScreenPointToRay_m3764635188 (Camera_t4157153871 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C"  bool Mathf_Approximately_m245805902 (RuntimeObject * __this /* static, unused */, float ___a0, float ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C"  float Camera_get_farClipPlane_m538536689 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C"  float Camera_get_nearClipPlane_m837839537 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C"  int32_t Camera_get_cullingMask_m679085748 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t1113636619 * Camera_RaycastTry_m3913529496 (Camera_t4157153871 * __this, Ray_t3785851493  ___ray0, float ___distance1, int32_t ___layerMask2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C"  int32_t Camera_get_clearFlags_m992534691 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t1113636619 * Camera_RaycastTry2D_m2460696262 (Camera_t4157153871 * __this, Ray_t3785851493  ___ray0, float ___distance1, int32_t ___layerMask2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern "C"  void SendMouseEvents_SendEvents_m1956471769 (RuntimeObject * __this /* static, unused */, int32_t ___i0, HitInfo_t3229609740  ___hit1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t ___button0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t ___button0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C"  bool HitInfo_op_Implicit_m665224877 (RuntimeObject * __this /* static, unused */, HitInfo_t3229609740  ___exists0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C"  void HitInfo_SendMessage_m1343099429 (HitInfo_t3229609740 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C"  bool HitInfo_Compare_m2336739674 (RuntimeObject * __this /* static, unused */, HitInfo_t3229609740  ___lhs0, HitInfo_t3229609740  ___rhs1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void GameObject_SendMessage_m3720186693 (GameObject_t1113636619 * __this, String_t* ___methodName0, RuntimeObject * ___value1, int32_t ___options2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
extern "C"  void StackTrace__ctor_m1685176557 (StackTrace_t1598645457 * __this, int32_t p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C"  String_t* StackTraceUtility_ExtractFormattedStackTrace_m1281750362 (RuntimeObject * __this /* static, unused */, StackTrace_t1598645457 * ___stackTrace0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C"  bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
extern "C"  Type_t * Exception_GetType_m2227967756 (Exception_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C"  String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C"  Exception_t * Exception_get_InnerException_m3836775 (Exception_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C"  bool StackTraceUtility_IsSystemStacktraceType_m299828041 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C"  String_t* String_Remove_m562998446 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C"  int32_t String_IndexOf_m3406607758 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.Char,System.Char)
extern "C"  String_t* String_Replace_m3726209165 (String_t* __this, Il2CppChar p0, Il2CppChar p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
extern "C"  int32_t String_LastIndexOf_m2676535141 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Insert(System.Int32,System.String)
extern "C"  String_t* String_Insert_m3534971326 (String_t* __this, int32_t p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_get_position_m1310184257 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_set_position_m3627767375 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C"  void Enumerator__ctor_m1351041375 (Enumerator_t3442430665 * __this, Transform_t3600365921 * ___outer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.U2D.SpriteAtlas>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m3325790595(__this, p0, p1, method) ((  void (*) (Action_1_t819399007 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback::Invoke(System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>)
extern "C"  void RequestAtlasCallback_Invoke_m378128467 (RequestAtlasCallback_t3100554279 * __this, String_t* ___tag0, Action_1_t819399007 * ___action1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C"  void Exception_set_HResult_m3489164646 (Exception_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Int32)
#define Queue_1__ctor_m1971992302(__this, p0, method) ((  void (*) (Queue_1_t1200778106 *, int32_t, const RuntimeMethod*))Queue_1__ctor_m1971992302_gshared)(__this, p0, method)
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C"  Thread_t2300836069 * Thread_get_CurrentThread_m4142136012 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C"  int32_t Thread_get_ManagedThreadId_m1068113671 (Thread_t2300836069 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C"  void SynchronizationContext__ctor_m2514243817 (SynchronizationContext_t2326897723 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Dequeue()
#define Queue_1_Dequeue_m979967976(__this, method) ((  WorkRequest_t1354518612  (*) (Queue_1_t1200778106 *, const RuntimeMethod*))Queue_1_Dequeue_m979967976_gshared)(__this, method)
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::Invoke()
extern "C"  void WorkRequest_Invoke_m3488164927 (WorkRequest_t1354518612 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Count()
#define Queue_1_get_Count_m3368911732(__this, method) ((  int32_t (*) (Queue_1_t1200778106 *, const RuntimeMethod*))Queue_1_get_Count_m3368911732_gshared)(__this, method)
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
extern "C"  SynchronizationContext_t2326897723 * SynchronizationContext_get_Current_m3666546046 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnitySynchronizationContext::.ctor()
extern "C"  void UnitySynchronizationContext__ctor_m1707488257 (UnitySynchronizationContext_t1887453786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::SetSynchronizationContext(System.Threading.SynchronizationContext)
extern "C"  void SynchronizationContext_SetSynchronizationContext_m1249070039 (RuntimeObject * __this /* static, unused */, SynchronizationContext_t2326897723 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnitySynchronizationContext::Exec()
extern "C"  void UnitySynchronizationContext_Exec_m3359802660 (UnitySynchronizationContext_t1887453786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern "C"  void SendOrPostCallback_Invoke_m937799800 (SendOrPostCallback_t2750080073 * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C"  bool EventWaitHandle_Set_m2445193251 (EventWaitHandle_t777845177 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float ___x0, float ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
extern "C"  String_t* Vector2_ToString_m1205609053 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C"  int32_t Vector2_GetHashCode_m3916089713 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C"  bool Vector2_Equals_m832062989 (Vector2_t2156229523 * __this, RuntimeObject * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C"  float Vector2_get_sqrMagnitude_m837837635 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___a0, Vector2_t2156229523  ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C"  int32_t Vector3_GetHashCode_m2879461828 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C"  bool Vector3_Equals_m1753054704 (Vector3_t3722313464 * __this, RuntimeObject * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C"  String_t* Vector3_ToString_m759076600 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Threading.Interlocked::CompareExchange(System.Single&,System.Single,System.Single)
extern "C"  float Interlocked_CompareExchange_m4173283112 (RuntimeObject * __this /* static, unused */, float* p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C"  Delegate_t1188392813 * Delegate_CreateDelegate_m995503480 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, MethodInfo_t * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m2736695831 (TypeInferenceRuleAttribute_t254868554 * __this, String_t* ___rule0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke(const AnimationCurve_t3046754366& unmarshaled, AnimationCurve_t3046754366_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke_back(const AnimationCurve_t3046754366_marshaled_pinvoke& marshaled, AnimationCurve_t3046754366& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t3046754366_marshal_pinvoke_cleanup(AnimationCurve_t3046754366_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t3046754366_marshal_com(const AnimationCurve_t3046754366& unmarshaled, AnimationCurve_t3046754366_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void AnimationCurve_t3046754366_marshal_com_back(const AnimationCurve_t3046754366_marshaled_com& marshaled, AnimationCurve_t3046754366& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
extern "C" void AnimationCurve_t3046754366_marshal_com_cleanup(AnimationCurve_t3046754366_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve__ctor_m1565662948 (AnimationCurve_t3046754366 * __this, KeyframeU5BU5D_t1068524471* ___keys0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t1068524471* L_0 = ___keys0;
		AnimationCurve_Init_m425927913(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C"  void AnimationCurve__ctor_m3000526466 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m425927913(__this, (KeyframeU5BU5D_t1068524471*)(KeyframeU5BU5D_t1068524471*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C"  void AnimationCurve_Cleanup_m35123172 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method)
{
	typedef void (*AnimationCurve_Cleanup_m35123172_ftn) (AnimationCurve_t3046754366 *);
	static AnimationCurve_Cleanup_m35123172_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m35123172_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C"  void AnimationCurve_Finalize_m2397002729 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m35123172(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve_Init_m425927913 (AnimationCurve_t3046754366 * __this, KeyframeU5BU5D_t1068524471* ___keys0, const RuntimeMethod* method)
{
	typedef void (*AnimationCurve_Init_m425927913_ftn) (AnimationCurve_t3046754366 *, KeyframeU5BU5D_t1068524471*);
	static AnimationCurve_Init_m425927913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m425927913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Application::CallLowMemory()
extern "C"  void Application_CallLowMemory_m2813539296 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Application_CallLowMemory_m2813539296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LowMemoryCallback_t4104246196 * V_0 = NULL;
	{
		LowMemoryCallback_t4104246196 * L_0 = ((Application_t1852185770_StaticFields*)il2cpp_codegen_static_fields_for(Application_t1852185770_il2cpp_TypeInfo_var))->get_lowMemory_0();
		V_0 = L_0;
		LowMemoryCallback_t4104246196 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		LowMemoryCallback_t4104246196 * L_2 = V_0;
		LowMemoryCallback_Invoke_m1926578529(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern "C"  void Application_CallLogCallback_m255562505 (RuntimeObject * __this /* static, unused */, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, bool ___invokedOnMainThread3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Application_CallLogCallback_m255562505_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LogCallback_t3588208630 * V_0 = NULL;
	LogCallback_t3588208630 * V_1 = NULL;
	{
		bool L_0 = ___invokedOnMainThread3;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		LogCallback_t3588208630 * L_1 = ((Application_t1852185770_StaticFields*)il2cpp_codegen_static_fields_for(Application_t1852185770_il2cpp_TypeInfo_var))->get_s_LogCallbackHandler_1();
		V_0 = L_1;
		LogCallback_t3588208630 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		LogCallback_t3588208630 * L_3 = V_0;
		String_t* L_4 = ___logString0;
		String_t* L_5 = ___stackTrace1;
		int32_t L_6 = ___type2;
		LogCallback_Invoke_m1707963620(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001d:
	{
	}

IL_001e:
	{
		LogCallback_t3588208630 * L_7 = ((Application_t1852185770_StaticFields*)il2cpp_codegen_static_fields_for(Application_t1852185770_il2cpp_TypeInfo_var))->get_s_LogCallbackHandlerThreaded_2();
		V_1 = L_7;
		LogCallback_t3588208630 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		LogCallback_t3588208630 * L_9 = V_1;
		String_t* L_10 = ___logString0;
		String_t* L_11 = ___stackTrace1;
		int32_t L_12 = ___type2;
		LogCallback_Invoke_m1707963620(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UnityEngine.Application::InvokeOnBeforeRender()
extern "C"  void Application_InvokeOnBeforeRender_m2875673833 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Application_InvokeOnBeforeRender_m2875673833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BeforeRenderHelper_t1336903776_il2cpp_TypeInfo_var);
		BeforeRenderHelper_Invoke_m50072094(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_LogCallback_t3588208630 (LogCallback_t3588208630 * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___condition0' to native representation
	char* ____condition0_marshaled = NULL;
	____condition0_marshaled = il2cpp_codegen_marshal_string(___condition0);

	// Marshaling of parameter '___stackTrace1' to native representation
	char* ____stackTrace1_marshaled = NULL;
	____stackTrace1_marshaled = il2cpp_codegen_marshal_string(___stackTrace1);

	// Native function invocation
	il2cppPInvokeFunc(____condition0_marshaled, ____stackTrace1_marshaled, ___type2);

	// Marshaling cleanup of parameter '___condition0' native representation
	il2cpp_codegen_marshal_free(____condition0_marshaled);
	____condition0_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace1' native representation
	il2cpp_codegen_marshal_free(____stackTrace1_marshaled);
	____stackTrace1_marshaled = NULL;

}
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void LogCallback__ctor_m144650965 (LogCallback_t3588208630 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern "C"  void LogCallback_Invoke_m1707963620 (LogCallback_t3588208630 * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		LogCallback_Invoke_m1707963620((LogCallback_t3588208630 *)__this->get_prev_9(), ___condition0, ___stackTrace1, ___type2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, String_t*, int32_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___condition0, ___stackTrace1, ___type2, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, String_t*, int32_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___condition0, ___stackTrace1, ___type2, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, String_t*, String_t*, int32_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___condition0, ___stackTrace1, ___type2, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___condition0, ___stackTrace1, ___type2, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* LogCallback_BeginInvoke_m1868775196 (LogCallback_t3588208630 * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogCallback_BeginInvoke_m1868775196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition0;
	__d_args[1] = ___stackTrace1;
	__d_args[2] = Box(LogType_t73765434_il2cpp_TypeInfo_var, &___type2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern "C"  void LogCallback_EndInvoke_m2243211259 (LogCallback_t3588208630 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_LowMemoryCallback_t4104246196 (LowMemoryCallback_t4104246196 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Application/LowMemoryCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void LowMemoryCallback__ctor_m3675715235 (LowMemoryCallback_t4104246196 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Application/LowMemoryCallback::Invoke()
extern "C"  void LowMemoryCallback_Invoke_m1926578529 (LowMemoryCallback_t4104246196 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		LowMemoryCallback_Invoke_m1926578529((LowMemoryCallback_t4104246196 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.Application/LowMemoryCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* LowMemoryCallback_BeginInvoke_m2877696488 (LowMemoryCallback_t4104246196 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Application/LowMemoryCallback::EndInvoke(System.IAsyncResult)
extern "C"  void LowMemoryCallback_EndInvoke_m2581361171 (LowMemoryCallback_t4104246196 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AssetBundleCreateRequest
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_pinvoke(const AssetBundleCreateRequest_t3119663542& unmarshaled, AssetBundleCreateRequest_t3119663542_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_pinvoke_back(const AssetBundleCreateRequest_t3119663542_marshaled_pinvoke& marshaled, AssetBundleCreateRequest_t3119663542& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetBundleCreateRequest_t3119663542_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1617499438>(marshaled.___m_completeCallback_1, Action_1_t1617499438_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AssetBundleCreateRequest
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_pinvoke_cleanup(AssetBundleCreateRequest_t3119663542_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AssetBundleCreateRequest
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_com(const AssetBundleCreateRequest_t3119663542& unmarshaled, AssetBundleCreateRequest_t3119663542_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_com_back(const AssetBundleCreateRequest_t3119663542_marshaled_com& marshaled, AssetBundleCreateRequest_t3119663542& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetBundleCreateRequest_t3119663542_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1617499438>(marshaled.___m_completeCallback_1, Action_1_t1617499438_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AssetBundleCreateRequest
extern "C" void AssetBundleCreateRequest_t3119663542_marshal_com_cleanup(AssetBundleCreateRequest_t3119663542_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AssetBundleRequest
extern "C" void AssetBundleRequest_t699759206_marshal_pinvoke(const AssetBundleRequest_t699759206& unmarshaled, AssetBundleRequest_t699759206_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
extern "C" void AssetBundleRequest_t699759206_marshal_pinvoke_back(const AssetBundleRequest_t699759206_marshaled_pinvoke& marshaled, AssetBundleRequest_t699759206& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetBundleRequest_t699759206_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1617499438>(marshaled.___m_completeCallback_1, Action_1_t1617499438_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AssetBundleRequest
extern "C" void AssetBundleRequest_t699759206_marshal_pinvoke_cleanup(AssetBundleRequest_t699759206_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AssetBundleRequest
extern "C" void AssetBundleRequest_t699759206_marshal_com(const AssetBundleRequest_t699759206& unmarshaled, AssetBundleRequest_t699759206_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
extern "C" void AssetBundleRequest_t699759206_marshal_com_back(const AssetBundleRequest_t699759206_marshaled_com& marshaled, AssetBundleRequest_t699759206& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetBundleRequest_t699759206_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1617499438>(marshaled.___m_completeCallback_1, Action_1_t1617499438_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AssetBundleRequest
extern "C" void AssetBundleRequest_t699759206_marshal_com_cleanup(AssetBundleRequest_t699759206_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke(const AsyncOperation_t1445031843& unmarshaled, AsyncOperation_t1445031843_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke_back(const AsyncOperation_t1445031843_marshaled_pinvoke& marshaled, AsyncOperation_t1445031843& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncOperation_t1445031843_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1617499438>(marshaled.___m_completeCallback_1, Action_1_t1617499438_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
extern "C" void AsyncOperation_t1445031843_marshal_pinvoke_cleanup(AsyncOperation_t1445031843_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
extern "C" void AsyncOperation_t1445031843_marshal_com(const AsyncOperation_t1445031843& unmarshaled, AsyncOperation_t1445031843_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_completeCallback_1()));
}
extern "C" void AsyncOperation_t1445031843_marshal_com_back(const AsyncOperation_t1445031843_marshaled_com& marshaled, AsyncOperation_t1445031843& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncOperation_t1445031843_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_completeCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t1617499438>(marshaled.___m_completeCallback_1, Action_1_t1617499438_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
extern "C" void AsyncOperation_t1445031843_marshal_com_cleanup(AsyncOperation_t1445031843_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C"  void AsyncOperation_InternalDestroy_m4215879047 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m4215879047_ftn) (AsyncOperation_t1445031843 *);
	static AsyncOperation_InternalDestroy_m4215879047_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m4215879047_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C"  void AsyncOperation_Finalize_m1841265672 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		AsyncOperation_InternalDestroy_m4215879047(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InvokeCompletionEvent()
extern "C"  void AsyncOperation_InvokeCompletionEvent_m1410305036 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncOperation_InvokeCompletionEvent_m1410305036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t1617499438 * L_0 = __this->get_m_completeCallback_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_t1617499438 * L_1 = __this->get_m_completeCallback_1();
		Action_1_Invoke_m1955091167(L_1, __this, /*hidden argument*/Action_1_Invoke_m1955091167_RuntimeMethod_var);
		__this->set_m_completeCallback_1((Action_1_t1617499438 *)NULL);
	}

IL_0021:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern "C"  Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m681389990 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m681389990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t3327334215 * V_0 = NULL;
	Type_t * V_1 = NULL;
	ObjectU5BU5D_t2843939325* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t * V_4 = NULL;
	{
		Stack_1_t3327334215 * L_0 = (Stack_1_t3327334215 *)il2cpp_codegen_object_new(Stack_1_t3327334215_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3716217587(L_0, /*hidden argument*/Stack_1__ctor_m3716217587_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_001d;
	}

IL_000c:
	{
		Stack_1_t3327334215 * L_1 = V_0;
		Type_t * L_2 = ___type0;
		Stack_1_Push_m506528439(L_1, L_2, /*hidden argument*/Stack_1_Push_m506528439_RuntimeMethod_var);
		Type_t * L_3 = ___type0;
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		___type0 = L_4;
	}

IL_001d:
	{
		Type_t * L_5 = ___type0;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_6 = ___type0;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (MonoBehaviour_t3962482529_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))))
		{
			goto IL_000c;
		}
	}

IL_0033:
	{
		V_1 = (Type_t *)NULL;
		goto IL_0067;
	}

IL_003a:
	{
		Stack_1_t3327334215 * L_9 = V_0;
		Type_t * L_10 = Stack_1_Pop_m2843357855(L_9, /*hidden argument*/Stack_1_Pop_m2843357855_RuntimeMethod_var);
		V_1 = L_10;
		Type_t * L_11 = V_1;
		RuntimeTypeHandle_t3027515415  L_12 = { reinterpret_cast<intptr_t> (DisallowMultipleComponent_t1422053217_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_14 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_11, L_13, (bool)0);
		V_2 = L_14;
		ObjectU5BU5D_t2843939325* L_15 = V_2;
		V_3 = (((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length))));
		int32_t L_16 = V_3;
		if (!L_16)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_17 = V_1;
		V_4 = L_17;
		goto IL_007b;
	}

IL_0066:
	{
	}

IL_0067:
	{
		Stack_1_t3327334215 * L_18 = V_0;
		int32_t L_19 = Stack_1_get_Count_m1286321891(L_18, /*hidden argument*/Stack_1_get_Count_m1286321891_RuntimeMethod_var);
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		V_4 = (Type_t *)NULL;
		goto IL_007b;
	}

IL_007b:
	{
		Type_t * L_20 = V_4;
		return L_20;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern "C"  TypeU5BU5D_t3940880105* AttributeHelperEngine_GetRequiredComponents_m568829708 (RuntimeObject * __this /* static, unused */, Type_t * ___klass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_GetRequiredComponents_m568829708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3956019502 * V_0 = NULL;
	RequireComponentU5BU5D_t2245623724* V_1 = NULL;
	Type_t * V_2 = NULL;
	RequireComponent_t3490506609 * V_3 = NULL;
	RequireComponentU5BU5D_t2245623724* V_4 = NULL;
	int32_t V_5 = 0;
	TypeU5BU5D_t3940880105* V_6 = NULL;
	TypeU5BU5D_t3940880105* V_7 = NULL;
	{
		V_0 = (List_1_t3956019502 *)NULL;
		goto IL_00ef;
	}

IL_0008:
	{
		Type_t * L_0 = ___klass0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (RequireComponent_t3490506609_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_3 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)0);
		V_1 = ((RequireComponentU5BU5D_t2245623724*)Castclass((RuntimeObject*)L_3, RequireComponentU5BU5D_t2245623724_il2cpp_TypeInfo_var));
		Type_t * L_4 = ___klass0;
		Type_t * L_5 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_4);
		V_2 = L_5;
		RequireComponentU5BU5D_t2245623724* L_6 = V_1;
		V_4 = L_6;
		V_5 = 0;
		goto IL_00e0;
	}

IL_0033:
	{
		RequireComponentU5BU5D_t2245623724* L_7 = V_4;
		int32_t L_8 = V_5;
		int32_t L_9 = L_8;
		RequireComponent_t3490506609 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		List_1_t3956019502 * L_11 = V_0;
		if (L_11)
		{
			goto IL_0086;
		}
	}
	{
		RequireComponentU5BU5D_t2245623724* L_12 = V_1;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_0086;
		}
	}
	{
		Type_t * L_13 = V_2;
		RuntimeTypeHandle_t3027515415  L_14 = { reinterpret_cast<intptr_t> (MonoBehaviour_t3962482529_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_13) == ((RuntimeObject*)(Type_t *)L_15))))
		{
			goto IL_0086;
		}
	}
	{
		TypeU5BU5D_t3940880105* L_16 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)3));
		RequireComponent_t3490506609 * L_17 = V_3;
		Type_t * L_18 = L_17->get_m_Type0_0();
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_18);
		TypeU5BU5D_t3940880105* L_19 = L_16;
		RequireComponent_t3490506609 * L_20 = V_3;
		Type_t * L_21 = L_20->get_m_Type1_1();
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_21);
		TypeU5BU5D_t3940880105* L_22 = L_19;
		RequireComponent_t3490506609 * L_23 = V_3;
		Type_t * L_24 = L_23->get_m_Type2_2();
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_24);
		V_6 = L_22;
		TypeU5BU5D_t3940880105* L_25 = V_6;
		V_7 = L_25;
		goto IL_0120;
	}

IL_0086:
	{
		List_1_t3956019502 * L_26 = V_0;
		if (L_26)
		{
			goto IL_0093;
		}
	}
	{
		List_1_t3956019502 * L_27 = (List_1_t3956019502 *)il2cpp_codegen_object_new(List_1_t3956019502_il2cpp_TypeInfo_var);
		List_1__ctor_m3073166008(L_27, /*hidden argument*/List_1__ctor_m3073166008_RuntimeMethod_var);
		V_0 = L_27;
	}

IL_0093:
	{
		RequireComponent_t3490506609 * L_28 = V_3;
		Type_t * L_29 = L_28->get_m_Type0_0();
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		List_1_t3956019502 * L_30 = V_0;
		RequireComponent_t3490506609 * L_31 = V_3;
		Type_t * L_32 = L_31->get_m_Type0_0();
		List_1_Add_m576010208(L_30, L_32, /*hidden argument*/List_1_Add_m576010208_RuntimeMethod_var);
	}

IL_00aa:
	{
		RequireComponent_t3490506609 * L_33 = V_3;
		Type_t * L_34 = L_33->get_m_Type1_1();
		if (!L_34)
		{
			goto IL_00c1;
		}
	}
	{
		List_1_t3956019502 * L_35 = V_0;
		RequireComponent_t3490506609 * L_36 = V_3;
		Type_t * L_37 = L_36->get_m_Type1_1();
		List_1_Add_m576010208(L_35, L_37, /*hidden argument*/List_1_Add_m576010208_RuntimeMethod_var);
	}

IL_00c1:
	{
		RequireComponent_t3490506609 * L_38 = V_3;
		Type_t * L_39 = L_38->get_m_Type2_2();
		if (!L_39)
		{
			goto IL_00d8;
		}
	}
	{
		List_1_t3956019502 * L_40 = V_0;
		RequireComponent_t3490506609 * L_41 = V_3;
		Type_t * L_42 = L_41->get_m_Type2_2();
		List_1_Add_m576010208(L_40, L_42, /*hidden argument*/List_1_Add_m576010208_RuntimeMethod_var);
	}

IL_00d8:
	{
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00e0:
	{
		int32_t L_44 = V_5;
		RequireComponentU5BU5D_t2245623724* L_45 = V_4;
		if ((((int32_t)L_44) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length)))))))
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_46 = V_2;
		___klass0 = L_46;
	}

IL_00ef:
	{
		Type_t * L_47 = ___klass0;
		if (!L_47)
		{
			goto IL_0105;
		}
	}
	{
		Type_t * L_48 = ___klass0;
		RuntimeTypeHandle_t3027515415  L_49 = { reinterpret_cast<intptr_t> (MonoBehaviour_t3962482529_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))))
		{
			goto IL_0008;
		}
	}

IL_0105:
	{
		List_1_t3956019502 * L_51 = V_0;
		if (L_51)
		{
			goto IL_0113;
		}
	}
	{
		V_7 = (TypeU5BU5D_t3940880105*)NULL;
		goto IL_0120;
	}

IL_0113:
	{
		List_1_t3956019502 * L_52 = V_0;
		TypeU5BU5D_t3940880105* L_53 = List_1_ToArray_m1257172357(L_52, /*hidden argument*/List_1_ToArray_m1257172357_RuntimeMethod_var);
		V_7 = L_53;
		goto IL_0120;
	}

IL_0120:
	{
		TypeU5BU5D_t3940880105* L_54 = V_7;
		return L_54;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern "C"  bool AttributeHelperEngine_CheckIsEditorScript_m705968799 (RuntimeObject * __this /* static, unused */, Type_t * ___klass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_CheckIsEditorScript_m705968799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		goto IL_0033;
	}

IL_0006:
	{
		Type_t * L_0 = ___klass0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (ExecuteInEditMode_t3727731349_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_3 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)0);
		V_0 = L_3;
		ObjectU5BU5D_t2843939325* L_4 = V_0;
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))));
		int32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0050;
	}

IL_002a:
	{
		Type_t * L_6 = ___klass0;
		Type_t * L_7 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_6);
		___klass0 = L_7;
	}

IL_0033:
	{
		Type_t * L_8 = ___klass0;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		Type_t * L_9 = ___klass0;
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (MonoBehaviour_t3962482529_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_9) == ((RuntimeObject*)(Type_t *)L_11))))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		V_2 = (bool)0;
		goto IL_0050;
	}

IL_0050:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Int32 UnityEngine.AttributeHelperEngine::GetDefaultExecutionOrderFor(System.Type)
extern "C"  int32_t AttributeHelperEngine_GetDefaultExecutionOrderFor_m2255077112 (RuntimeObject * __this /* static, unused */, Type_t * ___klass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_GetDefaultExecutionOrderFor_m2255077112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DefaultExecutionOrder_t3059642329 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		Type_t * L_0 = ___klass0;
		IL2CPP_RUNTIME_CLASS_INIT(AttributeHelperEngine_t2735742303_il2cpp_TypeInfo_var);
		DefaultExecutionOrder_t3059642329 * L_1 = AttributeHelperEngine_GetCustomAttributeOfType_TisDefaultExecutionOrder_t3059642329_m2317108536(NULL /*static, unused*/, L_0, /*hidden argument*/AttributeHelperEngine_GetCustomAttributeOfType_TisDefaultExecutionOrder_t3059642329_m2317108536_RuntimeMethod_var);
		V_0 = L_1;
		DefaultExecutionOrder_t3059642329 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = 0;
		goto IL_0021;
	}

IL_0015:
	{
		DefaultExecutionOrder_t3059642329 * L_3 = V_0;
		int32_t L_4 = DefaultExecutionOrder_get_order_m1454999278(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0021;
	}

IL_0021:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern "C"  void AttributeHelperEngine__cctor_m1900959362 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine__cctor_m1900959362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((AttributeHelperEngine_t2735742303_StaticFields*)il2cpp_codegen_static_fields_for(AttributeHelperEngine_t2735742303_il2cpp_TypeInfo_var))->set__disallowMultipleComponentArray_0(((DisallowMultipleComponentU5BU5D_t3936143868*)SZArrayNew(DisallowMultipleComponentU5BU5D_t3936143868_il2cpp_TypeInfo_var, (uint32_t)1)));
		((AttributeHelperEngine_t2735742303_StaticFields*)il2cpp_codegen_static_fields_for(AttributeHelperEngine_t2735742303_il2cpp_TypeInfo_var))->set__executeInEditModeArray_1(((ExecuteInEditModeU5BU5D_t3239458680*)SZArrayNew(ExecuteInEditModeU5BU5D_t3239458680_il2cpp_TypeInfo_var, (uint32_t)1)));
		((AttributeHelperEngine_t2735742303_StaticFields*)il2cpp_codegen_static_fields_for(AttributeHelperEngine_t2735742303_il2cpp_TypeInfo_var))->set__requireComponentArray_2(((RequireComponentU5BU5D_t2245623724*)SZArrayNew(RequireComponentU5BU5D_t2245623724_il2cpp_TypeInfo_var, (uint32_t)1)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.BeforeRenderHelper::Invoke()
extern "C"  void BeforeRenderHelper_Invoke_m50072094 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BeforeRenderHelper_Invoke_m50072094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	UnityAction_t3245792599 * V_2 = NULL;
	OrderBlock_t1585977831  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(BeforeRenderHelper_t1336903776_il2cpp_TypeInfo_var);
		List_1_t3058052573 * L_0 = ((BeforeRenderHelper_t1336903776_StaticFields*)il2cpp_codegen_static_fields_for(BeforeRenderHelper_t1336903776_il2cpp_TypeInfo_var))->get_s_OrderBlocks_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_003b;
		}

IL_0015:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BeforeRenderHelper_t1336903776_il2cpp_TypeInfo_var);
			List_1_t3058052573 * L_2 = ((BeforeRenderHelper_t1336903776_StaticFields*)il2cpp_codegen_static_fields_for(BeforeRenderHelper_t1336903776_il2cpp_TypeInfo_var))->get_s_OrderBlocks_0();
			int32_t L_3 = V_1;
			OrderBlock_t1585977831  L_4 = List_1_get_Item_m1878021807(L_2, L_3, /*hidden argument*/List_1_get_Item_m1878021807_RuntimeMethod_var);
			V_3 = L_4;
			UnityAction_t3245792599 * L_5 = (&V_3)->get_callback_1();
			V_2 = L_5;
			UnityAction_t3245792599 * L_6 = V_2;
			if (!L_6)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			UnityAction_t3245792599 * L_7 = V_2;
			UnityAction_Invoke_m893829196(L_7, /*hidden argument*/NULL);
		}

IL_0036:
		{
			int32_t L_8 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		}

IL_003b:
		{
			int32_t L_9 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(BeforeRenderHelper_t1336903776_il2cpp_TypeInfo_var);
			List_1_t3058052573 * L_10 = ((BeforeRenderHelper_t1336903776_StaticFields*)il2cpp_codegen_static_fields_for(BeforeRenderHelper_t1336903776_il2cpp_TypeInfo_var))->get_s_OrderBlocks_0();
			int32_t L_11 = List_1_get_Count_m1337941140(L_10, /*hidden argument*/List_1_get_Count_m1337941140_RuntimeMethod_var);
			if ((((int32_t)L_9) < ((int32_t)L_11)))
			{
				goto IL_0015;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x58, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		RuntimeObject * L_12 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0058:
	{
		return;
	}
}
// System.Void UnityEngine.BeforeRenderHelper::.cctor()
extern "C"  void BeforeRenderHelper__cctor_m1834968278 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BeforeRenderHelper__cctor_m1834968278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3058052573 * L_0 = (List_1_t3058052573 *)il2cpp_codegen_object_new(List_1_t3058052573_il2cpp_TypeInfo_var);
		List_1__ctor_m1345008423(L_0, /*hidden argument*/List_1__ctor_m1345008423_RuntimeMethod_var);
		((BeforeRenderHelper_t1336903776_StaticFields*)il2cpp_codegen_static_fields_for(BeforeRenderHelper_t1336903776_il2cpp_TypeInfo_var))->set_s_OrderBlocks_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
extern "C" void OrderBlock_t1585977831_marshal_pinvoke(const OrderBlock_t1585977831& unmarshaled, OrderBlock_t1585977831_marshaled_pinvoke& marshaled)
{
	marshaled.___order_0 = unmarshaled.get_order_0();
	marshaled.___callback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_callback_1()));
}
extern "C" void OrderBlock_t1585977831_marshal_pinvoke_back(const OrderBlock_t1585977831_marshaled_pinvoke& marshaled, OrderBlock_t1585977831& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderBlock_t1585977831_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_order_temp_0 = 0;
	unmarshaled_order_temp_0 = marshaled.___order_0;
	unmarshaled.set_order_0(unmarshaled_order_temp_0);
	unmarshaled.set_callback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<UnityAction_t3245792599>(marshaled.___callback_1, UnityAction_t3245792599_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
extern "C" void OrderBlock_t1585977831_marshal_pinvoke_cleanup(OrderBlock_t1585977831_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
extern "C" void OrderBlock_t1585977831_marshal_com(const OrderBlock_t1585977831& unmarshaled, OrderBlock_t1585977831_marshaled_com& marshaled)
{
	marshaled.___order_0 = unmarshaled.get_order_0();
	marshaled.___callback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_callback_1()));
}
extern "C" void OrderBlock_t1585977831_marshal_com_back(const OrderBlock_t1585977831_marshaled_com& marshaled, OrderBlock_t1585977831& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderBlock_t1585977831_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_order_temp_0 = 0;
	unmarshaled_order_temp_0 = marshaled.___order_0;
	unmarshaled.set_order_0(unmarshaled_order_temp_0);
	unmarshaled.set_callback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<UnityAction_t3245792599>(marshaled.___callback_1, UnityAction_t3245792599_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
extern "C" void OrderBlock_t1585977831_marshal_com_cleanup(OrderBlock_t1585977831_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Behaviour::.ctor()
extern "C"  void Behaviour__ctor_m346897018 (Behaviour_t1437897464 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m1928064382(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C"  bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method)
{
	typedef bool (*Behaviour_get_enabled_m753527255_ftn) (Behaviour_t1437897464 *);
	static Behaviour_get_enabled_m753527255_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m753527255_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Camera::.ctor()
extern "C"  void Camera__ctor_m741555041 (Camera_t4157153871 * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_m346897018(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C"  float Camera_get_nearClipPlane_m837839537 (Camera_t4157153871 * __this, const RuntimeMethod* method)
{
	typedef float (*Camera_get_nearClipPlane_m837839537_ftn) (Camera_t4157153871 *);
	static Camera_get_nearClipPlane_m837839537_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m837839537_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C"  float Camera_get_farClipPlane_m538536689 (Camera_t4157153871 * __this, const RuntimeMethod* method)
{
	typedef float (*Camera_get_farClipPlane_m538536689_ftn) (Camera_t4157153871 *);
	static Camera_get_farClipPlane_m538536689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m538536689_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C"  int32_t Camera_get_cullingMask_m679085748 (Camera_t4157153871 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Camera_get_cullingMask_m679085748_ftn) (Camera_t4157153871 *);
	static Camera_get_cullingMask_m679085748_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m679085748_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C"  int32_t Camera_get_eventMask_m819189086 (Camera_t4157153871 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Camera_get_eventMask_m819189086_ftn) (Camera_t4157153871 *);
	static Camera_get_eventMask_m819189086_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m819189086_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C"  Rect_t2360479859  Camera_get_pixelRect_m2283183456 (Camera_t4157153871 * __this, const RuntimeMethod* method)
{
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Camera_INTERNAL_get_pixelRect_m2277658347(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t2360479859  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Rect_t2360479859  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C"  void Camera_INTERNAL_get_pixelRect_m2277658347 (Camera_t4157153871 * __this, Rect_t2360479859 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m2277658347_ftn) (Camera_t4157153871 *, Rect_t2360479859 *);
	static Camera_INTERNAL_get_pixelRect_m2277658347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m2277658347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C"  RenderTexture_t2108887433 * Camera_get_targetTexture_m2278634983 (Camera_t4157153871 * __this, const RuntimeMethod* method)
{
	typedef RenderTexture_t2108887433 * (*Camera_get_targetTexture_m2278634983_ftn) (Camera_t4157153871 *);
	static Camera_get_targetTexture_m2278634983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m2278634983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	RenderTexture_t2108887433 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C"  int32_t Camera_get_clearFlags_m992534691 (Camera_t4157153871 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Camera_get_clearFlags_m992534691_ftn) (Camera_t4157153871 *);
	static Camera_get_clearFlags_m992534691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m992534691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t3785851493  Camera_ScreenPointToRay_m3764635188 (Camera_t4157153871 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	Ray_t3785851493  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Ray_t3785851493  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Camera_INTERNAL_CALL_ScreenPointToRay_m394533292(NULL /*static, unused*/, __this, (&___position0), (&V_0), /*hidden argument*/NULL);
		Ray_t3785851493  L_0 = V_0;
		V_1 = L_0;
		goto IL_0012;
	}

IL_0012:
	{
		Ray_t3785851493  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Ray&)
extern "C"  void Camera_INTERNAL_CALL_ScreenPointToRay_m394533292 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___self0, Vector3_t3722313464 * ___position1, Ray_t3785851493 * ___value2, const RuntimeMethod* method)
{
	typedef void (*Camera_INTERNAL_CALL_ScreenPointToRay_m394533292_ftn) (Camera_t4157153871 *, Vector3_t3722313464 *, Ray_t3785851493 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m394533292_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m394533292_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Ray&)");
	_il2cpp_icall_func(___self0, ___position1, ___value2);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef Camera_t4157153871 * (*Camera_get_main_m3643453163_ftn) ();
	static Camera_get_main_m3643453163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m3643453163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	Camera_t4157153871 * retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C"  int32_t Camera_get_allCamerasCount_m528453758 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m528453758_ftn) ();
	static Camera_get_allCamerasCount_m528453758_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m528453758_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C"  int32_t Camera_GetAllCameras_m668492922 (RuntimeObject * __this /* static, unused */, CameraU5BU5D_t1709987734* ___cameras0, const RuntimeMethod* method)
{
	typedef int32_t (*Camera_GetAllCameras_m668492922_ftn) (CameraU5BU5D_t1709987734*);
	static Camera_GetAllCameras_m668492922_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m668492922_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	int32_t retVal = _il2cpp_icall_func(___cameras0);
	return retVal;
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C"  void Camera_FireOnPreCull_m2869588437 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___cam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Camera_FireOnPreCull_m2869588437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CameraCallback_t190067161 * L_0 = ((Camera_t4157153871_StaticFields*)il2cpp_codegen_static_fields_for(Camera_t4157153871_il2cpp_TypeInfo_var))->get_onPreCull_2();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		CameraCallback_t190067161 * L_1 = ((Camera_t4157153871_StaticFields*)il2cpp_codegen_static_fields_for(Camera_t4157153871_il2cpp_TypeInfo_var))->get_onPreCull_2();
		Camera_t4157153871 * L_2 = ___cam0;
		CameraCallback_Invoke_m3308824940(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C"  void Camera_FireOnPreRender_m3450823610 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___cam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Camera_FireOnPreRender_m3450823610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CameraCallback_t190067161 * L_0 = ((Camera_t4157153871_StaticFields*)il2cpp_codegen_static_fields_for(Camera_t4157153871_il2cpp_TypeInfo_var))->get_onPreRender_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		CameraCallback_t190067161 * L_1 = ((Camera_t4157153871_StaticFields*)il2cpp_codegen_static_fields_for(Camera_t4157153871_il2cpp_TypeInfo_var))->get_onPreRender_3();
		Camera_t4157153871 * L_2 = ___cam0;
		CameraCallback_Invoke_m3308824940(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C"  void Camera_FireOnPostRender_m1456255957 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___cam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Camera_FireOnPostRender_m1456255957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CameraCallback_t190067161 * L_0 = ((Camera_t4157153871_StaticFields*)il2cpp_codegen_static_fields_for(Camera_t4157153871_il2cpp_TypeInfo_var))->get_onPostRender_4();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		CameraCallback_t190067161 * L_1 = ((Camera_t4157153871_StaticFields*)il2cpp_codegen_static_fields_for(Camera_t4157153871_il2cpp_TypeInfo_var))->get_onPostRender_4();
		Camera_t4157153871 * L_2 = ___cam0;
		CameraCallback_Invoke_m3308824940(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t1113636619 * Camera_RaycastTry_m3913529496 (Camera_t4157153871 * __this, Ray_t3785851493  ___ray0, float ___distance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	{
		float L_0 = ___distance1;
		int32_t L_1 = ___layerMask2;
		GameObject_t1113636619 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m3238909295(NULL /*static, unused*/, __this, (&___ray0), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		GameObject_t1113636619 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  GameObject_t1113636619 * Camera_INTERNAL_CALL_RaycastTry_m3238909295 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___self0, Ray_t3785851493 * ___ray1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	typedef GameObject_t1113636619 * (*Camera_INTERNAL_CALL_RaycastTry_m3238909295_ftn) (Camera_t4157153871 *, Ray_t3785851493 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m3238909295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m3238909295_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	GameObject_t1113636619 * retVal = _il2cpp_icall_func(___self0, ___ray1, ___distance2, ___layerMask3);
	return retVal;
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t1113636619 * Camera_RaycastTry2D_m2460696262 (Camera_t4157153871 * __this, Ray_t3785851493  ___ray0, float ___distance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	GameObject_t1113636619 * V_0 = NULL;
	{
		float L_0 = ___distance1;
		int32_t L_1 = ___layerMask2;
		GameObject_t1113636619 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m3172975827(NULL /*static, unused*/, __this, (&___ray0), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		GameObject_t1113636619 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  GameObject_t1113636619 * Camera_INTERNAL_CALL_RaycastTry2D_m3172975827 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___self0, Ray_t3785851493 * ___ray1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	typedef GameObject_t1113636619 * (*Camera_INTERNAL_CALL_RaycastTry2D_m3172975827_ftn) (Camera_t4157153871 *, Ray_t3785851493 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m3172975827_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m3172975827_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	GameObject_t1113636619 * retVal = _il2cpp_icall_func(___self0, ___ray1, ___distance2, ___layerMask3);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CameraCallback__ctor_m899467377 (CameraCallback_t190067161 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C"  void CameraCallback_Invoke_m3308824940 (CameraCallback_t190067161 * __this, Camera_t4157153871 * ___cam0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		CameraCallback_Invoke_m3308824940((CameraCallback_t190067161 *)__this->get_prev_9(), ___cam0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, Camera_t4157153871 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___cam0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, Camera_t4157153871 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___cam0, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, Camera_t4157153871 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___cam0, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (Camera_t4157153871 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___cam0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* CameraCallback_BeginInvoke_m4249233405 (CameraCallback_t190067161 * __this, Camera_t4157153871 * ___cam0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C"  void CameraCallback_EndInvoke_m3846578433 (CameraCallback_t190067161 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ClassLibraryInitializer::Init()
extern "C"  void ClassLibraryInitializer_Init_m988673678 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Component::.ctor()
extern "C"  void Component__ctor_m1928064382 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component__ctor_m1928064382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	typedef Transform_t3600365921 * (*Component_get_transform_m3162698980_ftn) (Component_t1923634451 *);
	static Component_get_transform_m3162698980_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m3162698980_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	Transform_t3600365921 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	typedef GameObject_t1113636619 * (*Component_get_gameObject_m442555142_ftn) (Component_t1923634451 *);
	static Component_get_gameObject_m442555142_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m442555142_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	GameObject_t1113636619 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C"  Component_t1923634451 * Component_GetComponent_m886226392 (Component_t1923634451 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	Component_t1923634451 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		Component_t1923634451 * L_2 = GameObject_GetComponent_m1027872079(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		Component_t1923634451 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Coroutine
extern "C" void Coroutine_t3829159415_marshal_pinvoke(const Coroutine_t3829159415& unmarshaled, Coroutine_t3829159415_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void Coroutine_t3829159415_marshal_pinvoke_back(const Coroutine_t3829159415_marshaled_pinvoke& marshaled, Coroutine_t3829159415& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Coroutine
extern "C" void Coroutine_t3829159415_marshal_pinvoke_cleanup(Coroutine_t3829159415_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Coroutine
extern "C" void Coroutine_t3829159415_marshal_com(const Coroutine_t3829159415& unmarshaled, Coroutine_t3829159415_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void Coroutine_t3829159415_marshal_com_back(const Coroutine_t3829159415_marshaled_com& marshaled, Coroutine_t3829159415& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Coroutine
extern "C" void Coroutine_t3829159415_marshal_com_cleanup(Coroutine_t3829159415_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C"  void Coroutine_ReleaseCoroutine_m809189848 (Coroutine_t3829159415 * __this, const RuntimeMethod* method)
{
	typedef void (*Coroutine_ReleaseCoroutine_m809189848_ftn) (Coroutine_t3829159415 *);
	static Coroutine_ReleaseCoroutine_m809189848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Coroutine_ReleaseCoroutine_m809189848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Coroutine::Finalize()
extern "C"  void Coroutine_Finalize_m1957108547 (Coroutine_t3829159415 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		Coroutine_ReleaseCoroutine_m809189848(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  CSSSize_t3377836552  DelegatePInvokeWrapper_CSSMeasureFunc_t1554030124 (CSSMeasureFunc_t1554030124 * __this, intptr_t ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	typedef CSSSize_t3377836552  (STDCALL *PInvokeFunc)(intptr_t, float, int32_t, float, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	CSSSize_t3377836552  returnValue = il2cppPInvokeFunc(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);

	return returnValue;
}
// System.Void UnityEngine.CSSLayout.CSSMeasureFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void CSSMeasureFunc__ctor_m198181503 (CSSMeasureFunc_t1554030124 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.CSSLayout.CSSSize UnityEngine.CSSLayout.CSSMeasureFunc::Invoke(System.IntPtr,System.Single,UnityEngine.CSSLayout.CSSMeasureMode,System.Single,UnityEngine.CSSLayout.CSSMeasureMode)
extern "C"  CSSSize_t3377836552  CSSMeasureFunc_Invoke_m3910201085 (CSSMeasureFunc_t1554030124 * __this, intptr_t ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	CSSSize_t3377836552  result;
	memset(&result, 0, sizeof(result));
	if(__this->get_prev_9() != NULL)
	{
		CSSMeasureFunc_Invoke_m3910201085((CSSMeasureFunc_t1554030124 *)__this->get_prev_9(), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 5)
		{
			// open
			typedef CSSSize_t3377836552  (*FunctionPointerType) (RuntimeObject *, intptr_t, float, int32_t, float, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
		}
		else
		{
			// closed
			typedef CSSSize_t3377836552  (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, float, int32_t, float, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef CSSSize_t3377836552  (*FunctionPointerType) (void*, intptr_t, float, int32_t, float, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.CSSLayout.CSSMeasureFunc::BeginInvoke(System.IntPtr,System.Single,UnityEngine.CSSLayout.CSSMeasureMode,System.Single,UnityEngine.CSSLayout.CSSMeasureMode,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* CSSMeasureFunc_BeginInvoke_m3802154595 (CSSMeasureFunc_t1554030124 * __this, intptr_t ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, AsyncCallback_t3962456242 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CSSMeasureFunc_BeginInvoke_m3802154595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___node0);
	__d_args[1] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(CSSMeasureMode_t3184398371_il2cpp_TypeInfo_var, &___widthMode2);
	__d_args[3] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &___height3);
	__d_args[4] = Box(CSSMeasureMode_t3184398371_il2cpp_TypeInfo_var, &___heightMode4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// UnityEngine.CSSLayout.CSSSize UnityEngine.CSSLayout.CSSMeasureFunc::EndInvoke(System.IAsyncResult)
extern "C"  CSSSize_t3377836552  CSSMeasureFunc_EndInvoke_m798957248 (CSSMeasureFunc_t1554030124 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(CSSSize_t3377836552 *)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.CSSLayout.CSSMeasureFunc UnityEngine.CSSLayout.Native::CSSNodeGetMeasureFunc(System.IntPtr)
extern "C"  CSSMeasureFunc_t1554030124 * Native_CSSNodeGetMeasureFunc_m2145410129 (RuntimeObject * __this /* static, unused */, intptr_t ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_CSSNodeGetMeasureFunc_m2145410129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WeakReference_t1334886716 * V_0 = NULL;
	CSSMeasureFunc_t1554030124 * V_1 = NULL;
	{
		V_0 = (WeakReference_t1334886716 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Native_t2017798882_il2cpp_TypeInfo_var);
		Dictionary_2_t3851719731 * L_0 = ((Native_t2017798882_StaticFields*)il2cpp_codegen_static_fields_for(Native_t2017798882_il2cpp_TypeInfo_var))->get_s_MeasureFunctions_0();
		intptr_t L_1 = ___node0;
		bool L_2 = Dictionary_2_TryGetValue_m2207359883(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2207359883_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		WeakReference_t1334886716 * L_3 = V_0;
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean System.WeakReference::get_IsAlive() */, L_3);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		WeakReference_t1334886716 * L_5 = V_0;
		RuntimeObject * L_6 = VirtFuncInvoker0< RuntimeObject * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, L_5);
		V_1 = ((CSSMeasureFunc_t1554030124 *)IsInstSealed((RuntimeObject*)L_6, CSSMeasureFunc_t1554030124_il2cpp_TypeInfo_var));
		goto IL_003a;
	}

IL_0032:
	{
		V_1 = (CSSMeasureFunc_t1554030124 *)NULL;
		goto IL_003a;
	}

IL_003a:
	{
		CSSMeasureFunc_t1554030124 * L_7 = V_1;
		return L_7;
	}
}
// System.Void UnityEngine.CSSLayout.Native::CSSNodeMeasureInvoke(System.IntPtr,System.Single,UnityEngine.CSSLayout.CSSMeasureMode,System.Single,UnityEngine.CSSLayout.CSSMeasureMode,System.IntPtr)
extern "C"  void Native_CSSNodeMeasureInvoke_m2055858128 (RuntimeObject * __this /* static, unused */, intptr_t ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, intptr_t ___returnValueAddress5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_CSSNodeMeasureInvoke_m2055858128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CSSMeasureFunc_t1554030124 * V_0 = NULL;
	{
		intptr_t L_0 = ___node0;
		IL2CPP_RUNTIME_CLASS_INIT(Native_t2017798882_il2cpp_TypeInfo_var);
		CSSMeasureFunc_t1554030124 * L_1 = Native_CSSNodeGetMeasureFunc_m2145410129(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		CSSMeasureFunc_t1554030124 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_3 = ___returnValueAddress5;
		void* L_4 = IntPtr_op_Explicit_m2520637223(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		CSSMeasureFunc_t1554030124 * L_5 = V_0;
		intptr_t L_6 = ___node0;
		float L_7 = ___width1;
		int32_t L_8 = ___widthMode2;
		float L_9 = ___height3;
		int32_t L_10 = ___heightMode4;
		CSSSize_t3377836552  L_11 = CSSMeasureFunc_Invoke_m3910201085(L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		*(CSSSize_t3377836552 *)L_4 = L_11;
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.CSSLayout.Native::.cctor()
extern "C"  void Native__cctor_m1435623442 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native__cctor_m1435623442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3851719731 * L_0 = (Dictionary_2_t3851719731 *)il2cpp_codegen_object_new(Dictionary_2_t3851719731_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m602294741(L_0, /*hidden argument*/Dictionary_2__ctor_m602294741_RuntimeMethod_var);
		((Native_t2017798882_StaticFields*)il2cpp_codegen_static_fields_for(Native_t2017798882_il2cpp_TypeInfo_var))->set_s_MeasureFunctions_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.CullingGroup
extern "C" void CullingGroup_t2096318768_marshal_pinvoke(const CullingGroup_t2096318768& unmarshaled, CullingGroup_t2096318768_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_OnStateChanged_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_OnStateChanged_1()));
}
extern "C" void CullingGroup_t2096318768_marshal_pinvoke_back(const CullingGroup_t2096318768_marshaled_pinvoke& marshaled, CullingGroup_t2096318768& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CullingGroup_t2096318768_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_OnStateChanged_1(il2cpp_codegen_marshal_function_ptr_to_delegate<StateChanged_t2136737110>(marshaled.___m_OnStateChanged_1, StateChanged_t2136737110_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.CullingGroup
extern "C" void CullingGroup_t2096318768_marshal_pinvoke_cleanup(CullingGroup_t2096318768_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.CullingGroup
extern "C" void CullingGroup_t2096318768_marshal_com(const CullingGroup_t2096318768& unmarshaled, CullingGroup_t2096318768_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___m_OnStateChanged_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_m_OnStateChanged_1()));
}
extern "C" void CullingGroup_t2096318768_marshal_com_back(const CullingGroup_t2096318768_marshaled_com& marshaled, CullingGroup_t2096318768& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CullingGroup_t2096318768_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_m_OnStateChanged_1(il2cpp_codegen_marshal_function_ptr_to_delegate<StateChanged_t2136737110>(marshaled.___m_OnStateChanged_1, StateChanged_t2136737110_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.CullingGroup
extern "C" void CullingGroup_t2096318768_marshal_com_cleanup(CullingGroup_t2096318768_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.CullingGroup::Finalize()
extern "C"  void CullingGroup_Finalize_m2121330955 (CullingGroup_t2096318768 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CullingGroup_Finalize_m2121330955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Ptr_0();
			bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001e;
			}
		}

IL_0016:
		{
			CullingGroup_FinalizerFailure_m1165085675(__this, /*hidden argument*/NULL);
		}

IL_001e:
		{
			IL2CPP_LEAVE(0x2A, FINALLY_0023);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.CullingGroup::Dispose()
extern "C"  void CullingGroup_Dispose_m782801025 (CullingGroup_t2096318768 * __this, const RuntimeMethod* method)
{
	typedef void (*CullingGroup_Dispose_m782801025_ftn) (CullingGroup_t2096318768 *);
	static CullingGroup_Dispose_m782801025_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CullingGroup_Dispose_m782801025_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CullingGroup::Dispose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CullingGroup::SendEvents(UnityEngine.CullingGroup,System.IntPtr,System.Int32)
extern "C"  void CullingGroup_SendEvents_m2491312335 (RuntimeObject * __this /* static, unused */, CullingGroup_t2096318768 * ___cullingGroup0, intptr_t ___eventsPtr1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CullingGroup_SendEvents_m2491312335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CullingGroupEvent_t1722745023 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		void* L_0 = IntPtr_ToPointer_m4157623054((&___eventsPtr1), /*hidden argument*/NULL);
		V_0 = (CullingGroupEvent_t1722745023 *)L_0;
		CullingGroup_t2096318768 * L_1 = ___cullingGroup0;
		StateChanged_t2136737110 * L_2 = L_1->get_m_OnStateChanged_1();
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0046;
	}

IL_0019:
	{
		V_1 = 0;
		goto IL_003f;
	}

IL_0020:
	{
		CullingGroup_t2096318768 * L_3 = ___cullingGroup0;
		StateChanged_t2136737110 * L_4 = L_3->get_m_OnStateChanged_1();
		CullingGroupEvent_t1722745023 * L_5 = V_0;
		int32_t L_6 = V_1;
		uint32_t L_7 = il2cpp_codegen_sizeof(CullingGroupEvent_t1722745023_il2cpp_TypeInfo_var);
		StateChanged_Invoke_m1925531365(L_4, (*(CullingGroupEvent_t1722745023 *)((CullingGroupEvent_t1722745023 *)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_6)), (int32_t)L_7))))), /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ___count2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0020;
		}
	}

IL_0046:
	{
		return;
	}
}
// System.Void UnityEngine.CullingGroup::FinalizerFailure()
extern "C"  void CullingGroup_FinalizerFailure_m1165085675 (CullingGroup_t2096318768 * __this, const RuntimeMethod* method)
{
	typedef void (*CullingGroup_FinalizerFailure_m1165085675_ftn) (CullingGroup_t2096318768 *);
	static CullingGroup_FinalizerFailure_m1165085675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CullingGroup_FinalizerFailure_m1165085675_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CullingGroup::FinalizerFailure()");
	_il2cpp_icall_func(__this);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_StateChanged_t2136737110 (StateChanged_t2136737110 * __this, CullingGroupEvent_t1722745023  ___sphere0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(CullingGroupEvent_t1722745023 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___sphere0);

}
// System.Void UnityEngine.CullingGroup/StateChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void StateChanged__ctor_m2759994044 (StateChanged_t2136737110 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
extern "C"  void StateChanged_Invoke_m1925531365 (StateChanged_t2136737110 * __this, CullingGroupEvent_t1722745023  ___sphere0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		StateChanged_Invoke_m1925531365((StateChanged_t2136737110 *)__this->get_prev_9(), ___sphere0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, CullingGroupEvent_t1722745023 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___sphere0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, CullingGroupEvent_t1722745023 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sphere0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, CullingGroupEvent_t1722745023 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___sphere0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.CullingGroup/StateChanged::BeginInvoke(UnityEngine.CullingGroupEvent,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* StateChanged_BeginInvoke_m4029305912 (StateChanged_t2136737110 * __this, CullingGroupEvent_t1722745023  ___sphere0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StateChanged_BeginInvoke_m4029305912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CullingGroupEvent_t1722745023_il2cpp_TypeInfo_var, &___sphere0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.CullingGroup/StateChanged::EndInvoke(System.IAsyncResult)
extern "C"  void StateChanged_EndInvoke_m3313423087 (StateChanged_t2136737110 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
extern "C"  RuntimeObject* Debug_get_unityLogger_m2239795986 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debug_get_unityLogger_m2239795986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t3317548046_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t3317548046_il2cpp_TypeInfo_var))->get_s_Logger_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debug_Log_m4051431634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = Debug_get_unityLogger_m2239795986(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___message0;
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(0 /* System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.Object) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_0, 3, L_1);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debug_LogError_m2850623458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = Debug_get_unityLogger_m2239795986(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___message0;
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(0 /* System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.Object) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_0, 0, L_1);
		return;
	}
}
// System.Void UnityEngine.Debug::.cctor()
extern "C"  void Debug__cctor_m1523394265 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debug__cctor_m1523394265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DebugLogHandler_t826086171 * L_0 = (DebugLogHandler_t826086171 *)il2cpp_codegen_object_new(DebugLogHandler_t826086171_il2cpp_TypeInfo_var);
		DebugLogHandler__ctor_m3380237231(L_0, /*hidden argument*/NULL);
		Logger_t274032455 * L_1 = (Logger_t274032455 *)il2cpp_codegen_object_new(Logger_t274032455_il2cpp_TypeInfo_var);
		Logger__ctor_m439059923(L_1, L_0, /*hidden argument*/NULL);
		((Debug_t3317548046_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t3317548046_il2cpp_TypeInfo_var))->set_s_Logger_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.DebugLogHandler::.ctor()
extern "C"  void DebugLogHandler__ctor_m3380237231 (DebugLogHandler_t826086171 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,System.String,UnityEngine.Object)
extern "C"  void DebugLogHandler_Internal_Log_m4175774469 (RuntimeObject * __this /* static, unused */, int32_t ___level0, String_t* ___msg1, Object_t631007953 * ___obj2, const RuntimeMethod* method)
{
	typedef void (*DebugLogHandler_Internal_Log_m4175774469_ftn) (int32_t, String_t*, Object_t631007953 *);
	static DebugLogHandler_Internal_Log_m4175774469_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DebugLogHandler_Internal_Log_m4175774469_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level0, ___msg1, ___obj2);
}
// System.Void UnityEngine.DebugLogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C"  void DebugLogHandler_LogFormat_m487864506 (DebugLogHandler_t826086171 * __this, int32_t ___logType0, Object_t631007953 * ___context1, String_t* ___format2, ObjectU5BU5D_t2843939325* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugLogHandler_LogFormat_m487864506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___logType0;
		String_t* L_1 = ___format2;
		ObjectU5BU5D_t2843939325* L_2 = ___args3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m630303134(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Object_t631007953 * L_4 = ___context1;
		DebugLogHandler_Internal_Log_m4175774469(NULL /*static, unused*/, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.DefaultExecutionOrder::get_order()
extern "C"  int32_t DefaultExecutionOrder_get_order_m1454999278 (DefaultExecutionOrder_t3059642329 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CorderU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Display::.ctor()
extern "C"  void Display__ctor_m501911701 (Display_t1387065949 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0;
		memset(&L_0, 0, sizeof(L_0));
		IntPtr__ctor_m987082960((&L_0), 0, /*hidden argument*/NULL);
		__this->set_nativeDisplay_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C"  void Display__ctor_m3105658851 (Display_t1387065949 * __this, intptr_t ___nativeDisplay0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeDisplay0;
		__this->set_nativeDisplay_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern "C"  void Display_RecreateDisplayList_m4040831261 (RuntimeObject * __this /* static, unused */, IntPtrU5BU5D_t4013366056* ___nativeDisplay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Display_RecreateDisplayList_m4040831261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t4013366056* L_0 = ___nativeDisplay0;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t1387065949_il2cpp_TypeInfo_var);
		((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->set_displays_1(((DisplayU5BU5D_t103034768*)SZArrayNew(DisplayU5BU5D_t103034768_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))))));
		V_0 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t1387065949_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t103034768* L_1 = ((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->get_displays_1();
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t4013366056* L_3 = ___nativeDisplay0;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		intptr_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Display_t1387065949 * L_7 = (Display_t1387065949 *)il2cpp_codegen_object_new(Display_t1387065949_il2cpp_TypeInfo_var);
		Display__ctor_m3105658851(L_7, L_6, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_1, L_7);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (Display_t1387065949 *)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_0;
		IntPtrU5BU5D_t4013366056* L_10 = ___nativeDisplay0;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t1387065949_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t103034768* L_11 = ((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->get_displays_1();
		int32_t L_12 = 0;
		Display_t1387065949 * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->set__mainDisplay_2(L_13);
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern "C"  void Display_FireDisplaysUpdated_m41210855 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Display_FireDisplaysUpdated_m41210855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t1387065949_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t51287044 * L_0 = ((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->get_onDisplaysUpdated_3();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t1387065949_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t51287044 * L_1 = ((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->get_onDisplaysUpdated_3();
		DisplaysUpdatedDelegate_Invoke_m3203573844(L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern "C"  void Display__cctor_m1972153728 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Display__cctor_m1972153728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DisplayU5BU5D_t103034768* L_0 = ((DisplayU5BU5D_t103034768*)SZArrayNew(DisplayU5BU5D_t103034768_il2cpp_TypeInfo_var, (uint32_t)1));
		Display_t1387065949 * L_1 = (Display_t1387065949 *)il2cpp_codegen_object_new(Display_t1387065949_il2cpp_TypeInfo_var);
		Display__ctor_m501911701(L_1, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Display_t1387065949 *)L_1);
		((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->set_displays_1(L_0);
		DisplayU5BU5D_t103034768* L_2 = ((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->get_displays_1();
		int32_t L_3 = 0;
		Display_t1387065949 * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->set__mainDisplay_2(L_4);
		((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->set_onDisplaysUpdated_3((DisplaysUpdatedDelegate_t51287044 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t51287044 (DisplaysUpdatedDelegate_t51287044 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void DisplaysUpdatedDelegate__ctor_m2116638722 (DisplaysUpdatedDelegate_t51287044 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C"  void DisplaysUpdatedDelegate_Invoke_m3203573844 (DisplaysUpdatedDelegate_t51287044 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m3203573844((DisplaysUpdatedDelegate_t51287044 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* DisplaysUpdatedDelegate_BeginInvoke_m1285971490 (DisplaysUpdatedDelegate_t51287044 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void DisplaysUpdatedDelegate_EndInvoke_m3857124817 (DisplaysUpdatedDelegate_t51287044 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C"  void ArgumentCache__ctor_m2732653802 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C"  Object_t631007953 * ArgumentCache_get_unityObjectArgument_m3434100 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method)
{
	Object_t631007953 * V_0 = NULL;
	{
		Object_t631007953 * L_0 = __this->get_m_ObjectArgument_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Object_t631007953 * L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C"  String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3450114170 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ObjectArgumentAssemblyTypeName_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C"  int32_t ArgumentCache_get_intArgument_m1309958679 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_IntArgument_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C"  float ArgumentCache_get_floatArgument_m3471193103 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_FloatArgument_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C"  String_t* ArgumentCache_get_stringArgument_m3872675090 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_StringArgument_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C"  bool ArgumentCache_get_boolArgument_m2277082935 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_BoolArgument_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern "C"  void ArgumentCache_TidyAssemblyTypeName_m3234393930 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArgumentCache_TidyAssemblyTypeName_m3234393930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = __this->get_m_ObjectArgumentAssemblyTypeName_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_00e4;
	}

IL_0016:
	{
		V_0 = ((int32_t)2147483647LL);
		String_t* L_2 = __this->get_m_ObjectArgumentAssemblyTypeName_1();
		int32_t L_3 = String_IndexOf_m1977622757(L_2, _stringLiteral155902455, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Min_m3468062251(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_003c:
	{
		String_t* L_8 = __this->get_m_ObjectArgumentAssemblyTypeName_1();
		int32_t L_9 = String_IndexOf_m1977622757(L_8, _stringLiteral1973799399, /*hidden argument*/NULL);
		V_1 = L_9;
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = Math_Min_m3468062251(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_005c:
	{
		String_t* L_14 = __this->get_m_ObjectArgumentAssemblyTypeName_1();
		int32_t L_15 = String_IndexOf_m1977622757(L_14, _stringLiteral1736874801, /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = Math_Min_m3468062251(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_007c:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_009a;
		}
	}
	{
		String_t* L_21 = __this->get_m_ObjectArgumentAssemblyTypeName_1();
		int32_t L_22 = V_0;
		String_t* L_23 = String_Substring_m1610150815(L_21, 0, L_22, /*hidden argument*/NULL);
		__this->set_m_ObjectArgumentAssemblyTypeName_1(L_23);
	}

IL_009a:
	{
		String_t* L_24 = __this->get_m_ObjectArgumentAssemblyTypeName_1();
		int32_t L_25 = String_IndexOf_m1977622757(L_24, _stringLiteral441250670, /*hidden argument*/NULL);
		V_1 = L_25;
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) == ((int32_t)(-1))))
		{
			goto IL_00e4;
		}
	}
	{
		String_t* L_27 = __this->get_m_ObjectArgumentAssemblyTypeName_1();
		bool L_28 = String_EndsWith_m1901926500(L_27, _stringLiteral3851749947, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00e4;
		}
	}
	{
		String_t* L_29 = __this->get_m_ObjectArgumentAssemblyTypeName_1();
		int32_t L_30 = V_1;
		String_t* L_31 = String_Substring_m1610150815(L_29, 0, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m3937257545(NULL /*static, unused*/, L_31, _stringLiteral443216750, /*hidden argument*/NULL);
		__this->set_m_ObjectArgumentAssemblyTypeName_1(L_32);
	}

IL_00e4:
	{
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C"  void ArgumentCache_OnBeforeSerialize_m659261798 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3234393930(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C"  void ArgumentCache_OnAfterDeserialize_m1256813518 (ArgumentCache_t2187958399 * __this, const RuntimeMethod* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m3234393930(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void BaseInvokableCall__ctor_m2110966014 (BaseInvokableCall_t2703961024 * __this, RuntimeObject * ___target0, MethodInfo_t * ___function1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall__ctor_m2110966014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___target0;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2833503317, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0018:
	{
		MethodInfo_t * L_2 = ___function1;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral3941509395, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C"  bool BaseInvokableCall_AllowInvoke_m878393606 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___delegate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseInvokableCall_AllowInvoke_m878393606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Object_t631007953 * V_2 = NULL;
	{
		Delegate_t1188392813 * L_0 = ___delegate0;
		RuntimeObject * L_1 = Delegate_get_Target_m2361978888(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_003c;
	}

IL_0015:
	{
		RuntimeObject * L_3 = V_0;
		V_2 = ((Object_t631007953 *)IsInstClass((RuntimeObject*)L_3, Object_t631007953_il2cpp_TypeInfo_var));
		Object_t631007953 * L_4 = V_2;
		bool L_5 = Object_ReferenceEquals_m610702577(NULL /*static, unused*/, L_4, NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		Object_t631007953 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_003c;
	}

IL_0035:
	{
		V_1 = (bool)1;
		goto IL_003c;
	}

IL_003c:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall__ctor_m1303836326 (InvokableCall_t832123510 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall__ctor_m1303836326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m2110966014(__this, L_0, L_1, /*hidden argument*/NULL);
		MethodInfo_t * L_2 = ___theFunction1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (UnityAction_t3245792599_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___target0;
		Delegate_t1188392813 * L_6 = NetFxCoreExtensions_CreateDelegate_m751211712(NULL /*static, unused*/, L_2, L_4, L_5, /*hidden argument*/NULL);
		InvokableCall_add_Delegate_m491308793(__this, ((UnityAction_t3245792599 *)CastclassSealed((RuntimeObject*)L_6, UnityAction_t3245792599_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::add_Delegate(UnityEngine.Events.UnityAction)
extern "C"  void InvokableCall_add_Delegate_m491308793 (InvokableCall_t832123510 * __this, UnityAction_t3245792599 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_add_Delegate_m491308793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t3245792599 * V_0 = NULL;
	UnityAction_t3245792599 * V_1 = NULL;
	{
		UnityAction_t3245792599 * L_0 = __this->get_Delegate_0();
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t3245792599 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_t3245792599 ** L_2 = __this->get_address_of_Delegate_0();
		UnityAction_t3245792599 * L_3 = V_1;
		UnityAction_t3245792599 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		UnityAction_t3245792599 * L_6 = V_0;
		UnityAction_t3245792599 * L_7 = InterlockedCompareExchangeImpl<UnityAction_t3245792599 *>(L_2, ((UnityAction_t3245792599 *)CastclassSealed((RuntimeObject*)L_5, UnityAction_t3245792599_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		UnityAction_t3245792599 * L_8 = V_0;
		UnityAction_t3245792599 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t3245792599 *)L_8) == ((RuntimeObject*)(UnityAction_t3245792599 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::remove_Delegate(UnityEngine.Events.UnityAction)
extern "C"  void InvokableCall_remove_Delegate_m1376110510 (InvokableCall_t832123510 * __this, UnityAction_t3245792599 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_remove_Delegate_m1376110510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t3245792599 * V_0 = NULL;
	UnityAction_t3245792599 * V_1 = NULL;
	{
		UnityAction_t3245792599 * L_0 = __this->get_Delegate_0();
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t3245792599 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_t3245792599 ** L_2 = __this->get_address_of_Delegate_0();
		UnityAction_t3245792599 * L_3 = V_1;
		UnityAction_t3245792599 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		UnityAction_t3245792599 * L_6 = V_0;
		UnityAction_t3245792599 * L_7 = InterlockedCompareExchangeImpl<UnityAction_t3245792599 *>(L_2, ((UnityAction_t3245792599 *)CastclassSealed((RuntimeObject*)L_5, UnityAction_t3245792599_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		UnityAction_t3245792599 * L_8 = V_0;
		UnityAction_t3245792599 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t3245792599 *)L_8) == ((RuntimeObject*)(UnityAction_t3245792599 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C"  void InvokableCall_Invoke_m999392415 (InvokableCall_t832123510 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		UnityAction_t3245792599 * L_0 = __this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m878393606(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		UnityAction_t3245792599 * L_2 = __this->get_Delegate_0();
		UnityAction_Invoke_m893829196(L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern "C"  void InvokableCallList__ctor_m829480958 (InvokableCallList_t2498835369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCallList__ctor_m829480958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4176035766 * L_0 = (List_1_t4176035766 *)il2cpp_codegen_object_new(List_1_t4176035766_il2cpp_TypeInfo_var);
		List_1__ctor_m1425123358(L_0, /*hidden argument*/List_1__ctor_m1425123358_RuntimeMethod_var);
		__this->set_m_PersistentCalls_0(L_0);
		List_1_t4176035766 * L_1 = (List_1_t4176035766 *)il2cpp_codegen_object_new(List_1_t4176035766_il2cpp_TypeInfo_var);
		List_1__ctor_m1425123358(L_1, /*hidden argument*/List_1__ctor_m1425123358_RuntimeMethod_var);
		__this->set_m_RuntimeCalls_1(L_1);
		List_1_t4176035766 * L_2 = (List_1_t4176035766 *)il2cpp_codegen_object_new(List_1_t4176035766_il2cpp_TypeInfo_var);
		List_1__ctor_m1425123358(L_2, /*hidden argument*/List_1__ctor_m1425123358_RuntimeMethod_var);
		__this->set_m_ExecutingCalls_2(L_2);
		__this->set_m_NeedsUpdate_3((bool)1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C"  void InvokableCallList_AddPersistentInvokableCall_m778853773 (InvokableCallList_t2498835369 * __this, BaseInvokableCall_t2703961024 * ___call0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCallList_AddPersistentInvokableCall_m778853773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4176035766 * L_0 = __this->get_m_PersistentCalls_0();
		BaseInvokableCall_t2703961024 * L_1 = ___call0;
		List_1_Add_m178523244(L_0, L_1, /*hidden argument*/List_1_Add_m178523244_RuntimeMethod_var);
		__this->set_m_NeedsUpdate_3((bool)1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C"  void InvokableCallList_ClearPersistent_m1904264973 (InvokableCallList_t2498835369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCallList_ClearPersistent_m1904264973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4176035766 * L_0 = __this->get_m_PersistentCalls_0();
		List_1_Clear_m803816076(L_0, /*hidden argument*/List_1_Clear_m803816076_RuntimeMethod_var);
		__this->set_m_NeedsUpdate_3((bool)1);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::PrepareInvoke()
extern "C"  List_1_t4176035766 * InvokableCallList_PrepareInvoke_m4003891334 (InvokableCallList_t2498835369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCallList_PrepareInvoke_m4003891334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4176035766 * V_0 = NULL;
	{
		bool L_0 = __this->get_m_NeedsUpdate_3();
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		List_1_t4176035766 * L_1 = __this->get_m_ExecutingCalls_2();
		List_1_Clear_m803816076(L_1, /*hidden argument*/List_1_Clear_m803816076_RuntimeMethod_var);
		List_1_t4176035766 * L_2 = __this->get_m_ExecutingCalls_2();
		List_1_t4176035766 * L_3 = __this->get_m_PersistentCalls_0();
		List_1_AddRange_m3536422894(L_2, L_3, /*hidden argument*/List_1_AddRange_m3536422894_RuntimeMethod_var);
		List_1_t4176035766 * L_4 = __this->get_m_ExecutingCalls_2();
		List_1_t4176035766 * L_5 = __this->get_m_RuntimeCalls_1();
		List_1_AddRange_m3536422894(L_4, L_5, /*hidden argument*/List_1_AddRange_m3536422894_RuntimeMethod_var);
		__this->set_m_NeedsUpdate_3((bool)0);
	}

IL_0042:
	{
		List_1_t4176035766 * L_6 = __this->get_m_ExecutingCalls_2();
		V_0 = L_6;
		goto IL_004e;
	}

IL_004e:
	{
		List_1_t4176035766 * L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C"  void PersistentCall__ctor_m1217622171 (PersistentCall_t3407714124 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistentCall__ctor_m1217622171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Mode_2(0);
		ArgumentCache_t2187958399 * L_0 = (ArgumentCache_t2187958399 *)il2cpp_codegen_object_new(ArgumentCache_t2187958399_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m2732653802(L_0, /*hidden argument*/NULL);
		__this->set_m_Arguments_3(L_0);
		__this->set_m_CallState_4(2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C"  Object_t631007953 * PersistentCall_get_target_m830923650 (PersistentCall_t3407714124 * __this, const RuntimeMethod* method)
{
	Object_t631007953 * V_0 = NULL;
	{
		Object_t631007953 * L_0 = __this->get_m_Target_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Object_t631007953 * L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C"  String_t* PersistentCall_get_methodName_m4214122315 (PersistentCall_t3407714124 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_MethodName_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C"  int32_t PersistentCall_get_mode_m483997668 (PersistentCall_t3407714124 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Mode_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C"  ArgumentCache_t2187958399 * PersistentCall_get_arguments_m3144105308 (PersistentCall_t3407714124 * __this, const RuntimeMethod* method)
{
	ArgumentCache_t2187958399 * V_0 = NULL;
	{
		ArgumentCache_t2187958399 * L_0 = __this->get_m_Arguments_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ArgumentCache_t2187958399 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C"  bool PersistentCall_IsValid_m2325196163 (PersistentCall_t3407714124 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistentCall_IsValid_m2325196163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Object_t631007953 * L_0 = PersistentCall_get_target_m830923650(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m4214122315(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0029;
	}

IL_0029:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C"  BaseInvokableCall_t2703961024 * PersistentCall_GetRuntimeCall_m3976533158 (PersistentCall_t3407714124 * __this, UnityEventBase_t3960448221 * ___theEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistentCall_GetRuntimeCall_m3976533158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_m_CallState_4();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnityEventBase_t3960448221 * L_1 = ___theEvent0;
		if (L_1)
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		V_0 = (BaseInvokableCall_t2703961024 *)NULL;
		goto IL_0114;
	}

IL_0019:
	{
		UnityEventBase_t3960448221 * L_2 = ___theEvent0;
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m622251156(L_2, __this, /*hidden argument*/NULL);
		V_1 = L_3;
		MethodInfo_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		V_0 = (BaseInvokableCall_t2703961024 *)NULL;
		goto IL_0114;
	}

IL_002e:
	{
		int32_t L_5 = __this->get_m_Mode_2();
		V_2 = L_5;
		int32_t L_6 = V_2;
		switch (L_6)
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_00fb;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_00a4;
			}
			case 4:
			{
				goto IL_0087;
			}
			case 5:
			{
				goto IL_00c1;
			}
			case 6:
			{
				goto IL_00de;
			}
		}
	}
	{
		goto IL_010d;
	}

IL_005c:
	{
		UnityEventBase_t3960448221 * L_7 = ___theEvent0;
		Object_t631007953 * L_8 = PersistentCall_get_target_m830923650(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_1;
		BaseInvokableCall_t2703961024 * L_10 = VirtFuncInvoker2< BaseInvokableCall_t2703961024 *, RuntimeObject *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		V_0 = L_10;
		goto IL_0114;
	}

IL_006f:
	{
		Object_t631007953 * L_11 = PersistentCall_get_target_m830923650(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_1;
		ArgumentCache_t2187958399 * L_13 = __this->get_m_Arguments_3();
		BaseInvokableCall_t2703961024 * L_14 = PersistentCall_GetObjectCall_m4041241444(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_0114;
	}

IL_0087:
	{
		Object_t631007953 * L_15 = PersistentCall_get_target_m830923650(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_1;
		ArgumentCache_t2187958399 * L_17 = __this->get_m_Arguments_3();
		float L_18 = ArgumentCache_get_floatArgument_m3471193103(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t3723462114 * L_19 = (CachedInvokableCall_1_t3723462114 *)il2cpp_codegen_object_new(CachedInvokableCall_1_t3723462114_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m1997047287(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m1997047287_RuntimeMethod_var);
		V_0 = L_19;
		goto IL_0114;
	}

IL_00a4:
	{
		Object_t631007953 * L_20 = PersistentCall_get_target_m830923650(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_1;
		ArgumentCache_t2187958399 * L_22 = __this->get_m_Arguments_3();
		int32_t L_23 = ArgumentCache_get_intArgument_m1309958679(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t982173797 * L_24 = (CachedInvokableCall_1_t982173797 *)il2cpp_codegen_object_new(CachedInvokableCall_1_t982173797_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m2046334630(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m2046334630_RuntimeMethod_var);
		V_0 = L_24;
		goto IL_0114;
	}

IL_00c1:
	{
		Object_t631007953 * L_25 = PersistentCall_get_target_m830923650(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_1;
		ArgumentCache_t2187958399 * L_27 = __this->get_m_Arguments_3();
		String_t* L_28 = ArgumentCache_get_stringArgument_m3872675090(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t4173646029 * L_29 = (CachedInvokableCall_1_t4173646029 *)il2cpp_codegen_object_new(CachedInvokableCall_1_t4173646029_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m2435934642(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m2435934642_RuntimeMethod_var);
		V_0 = L_29;
		goto IL_0114;
	}

IL_00de:
	{
		Object_t631007953 * L_30 = PersistentCall_get_target_m830923650(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_1;
		ArgumentCache_t2187958399 * L_32 = __this->get_m_Arguments_3();
		bool L_33 = ArgumentCache_get_boolArgument_m2277082935(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t2423483305 * L_34 = (CachedInvokableCall_1_t2423483305 *)il2cpp_codegen_object_new(CachedInvokableCall_1_t2423483305_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m3078689395(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m3078689395_RuntimeMethod_var);
		V_0 = L_34;
		goto IL_0114;
	}

IL_00fb:
	{
		Object_t631007953 * L_35 = PersistentCall_get_target_m830923650(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_1;
		InvokableCall_t832123510 * L_37 = (InvokableCall_t832123510 *)il2cpp_codegen_object_new(InvokableCall_t832123510_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m1303836326(L_37, L_35, L_36, /*hidden argument*/NULL);
		V_0 = L_37;
		goto IL_0114;
	}

IL_010d:
	{
		V_0 = (BaseInvokableCall_t2703961024 *)NULL;
		goto IL_0114;
	}

IL_0114:
	{
		BaseInvokableCall_t2703961024 * L_38 = V_0;
		return L_38;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C"  BaseInvokableCall_t2703961024 * PersistentCall_GetObjectCall_m4041241444 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___target0, MethodInfo_t * ___method1, ArgumentCache_t2187958399 * ___arguments2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistentCall_GetObjectCall_m4041241444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	ConstructorInfo_t5769829 * V_3 = NULL;
	Object_t631007953 * V_4 = NULL;
	BaseInvokableCall_t2703961024 * V_5 = NULL;
	Type_t * G_B3_0 = NULL;
	Type_t * G_B2_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (Object_t631007953_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ArgumentCache_t2187958399 * L_2 = ___arguments2;
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3450114170(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentCache_t2187958399 * L_5 = ___arguments2;
		String_t* L_6 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3450114170(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3605423543, L_6, (bool)0, "UnityEngine.CoreModule, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_8 = L_7;
		G_B2_0 = L_8;
		if (L_8)
		{
			G_B3_0 = L_8;
			goto IL_0039;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (Object_t631007953_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0039:
	{
		V_0 = G_B3_0;
	}

IL_003a:
	{
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (CachedInvokableCall_1_t3153979999_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		Type_t * L_13 = V_1;
		TypeU5BU5D_t3940880105* L_14 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		Type_t * L_15 = V_0;
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_15);
		Type_t * L_16 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t3940880105* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_13, L_14);
		V_2 = L_16;
		Type_t * L_17 = V_2;
		TypeU5BU5D_t3940880105* L_18 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeTypeHandle_t3027515415  L_19 = { reinterpret_cast<intptr_t> (Object_t631007953_0_0_0_var) };
		Type_t * L_20 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_20);
		TypeU5BU5D_t3940880105* L_21 = L_18;
		RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (MethodInfo_t_0_0_0_var) };
		Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_23);
		TypeU5BU5D_t3940880105* L_24 = L_21;
		Type_t * L_25 = V_0;
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_25);
		ConstructorInfo_t5769829 * L_26 = Type_GetConstructor_m2219014380(L_17, L_24, /*hidden argument*/NULL);
		V_3 = L_26;
		ArgumentCache_t2187958399 * L_27 = ___arguments2;
		Object_t631007953 * L_28 = ArgumentCache_get_unityObjectArgument_m3434100(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		Object_t631007953 * L_29 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_29, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00ab;
		}
	}
	{
		Type_t * L_31 = V_0;
		Object_t631007953 * L_32 = V_4;
		Type_t * L_33 = Object_GetType_m88164663(L_32, /*hidden argument*/NULL);
		bool L_34 = VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_31, L_33);
		if (L_34)
		{
			goto IL_00ab;
		}
	}
	{
		V_4 = (Object_t631007953 *)NULL;
	}

IL_00ab:
	{
		ConstructorInfo_t5769829 * L_35 = V_3;
		ObjectU5BU5D_t2843939325* L_36 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		Object_t631007953 * L_37 = ___target0;
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_37);
		ObjectU5BU5D_t2843939325* L_38 = L_36;
		MethodInfo_t * L_39 = ___method1;
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_39);
		ObjectU5BU5D_t2843939325* L_40 = L_38;
		Object_t631007953 * L_41 = V_4;
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_41);
		RuntimeObject * L_42 = ConstructorInfo_Invoke_m4089836896(L_35, L_40, /*hidden argument*/NULL);
		V_5 = ((BaseInvokableCall_t2703961024 *)IsInstClass((RuntimeObject*)L_42, BaseInvokableCall_t2703961024_il2cpp_TypeInfo_var));
		goto IL_00d0;
	}

IL_00d0:
	{
		BaseInvokableCall_t2703961024 * L_43 = V_5;
		return L_43;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern "C"  void PersistentCallGroup__ctor_m1525263635 (PersistentCallGroup_t3050769227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistentCallGroup__ctor_m1525263635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t584821570 * L_0 = (List_1_t584821570 *)il2cpp_codegen_object_new(List_1_t584821570_il2cpp_TypeInfo_var);
		List_1__ctor_m2234084945(L_0, /*hidden argument*/List_1__ctor_m2234084945_RuntimeMethod_var);
		__this->set_m_Calls_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern "C"  void PersistentCallGroup_Initialize_m4253175514 (PersistentCallGroup_t3050769227 * __this, InvokableCallList_t2498835369 * ___invokableList0, UnityEventBase_t3960448221 * ___unityEventBase1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PersistentCallGroup_Initialize_m4253175514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PersistentCall_t3407714124 * V_0 = NULL;
	Enumerator_t2474065447  V_1;
	memset(&V_1, 0, sizeof(V_1));
	BaseInvokableCall_t2703961024 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t584821570 * L_0 = __this->get_m_Calls_0();
		Enumerator_t2474065447  L_1 = List_1_GetEnumerator_m498955693(L_0, /*hidden argument*/List_1_GetEnumerator_m498955693_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_0013:
		{
			PersistentCall_t3407714124 * L_2 = Enumerator_get_Current_m1824438863((&V_1), /*hidden argument*/Enumerator_get_Current_m1824438863_RuntimeMethod_var);
			V_0 = L_2;
			PersistentCall_t3407714124 * L_3 = V_0;
			bool L_4 = PersistentCall_IsValid_m2325196163(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_002c;
			}
		}

IL_0027:
		{
			goto IL_0042;
		}

IL_002c:
		{
			PersistentCall_t3407714124 * L_5 = V_0;
			UnityEventBase_t3960448221 * L_6 = ___unityEventBase1;
			BaseInvokableCall_t2703961024 * L_7 = PersistentCall_GetRuntimeCall_m3976533158(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t2703961024 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_0041;
			}
		}

IL_003a:
		{
			InvokableCallList_t2498835369 * L_9 = ___invokableList0;
			BaseInvokableCall_t2703961024 * L_10 = V_2;
			InvokableCallList_AddPersistentInvokableCall_m778853773(L_9, L_10, /*hidden argument*/NULL);
		}

IL_0041:
		{
		}

IL_0042:
		{
			bool L_11 = Enumerator_MoveNext_m4100612698((&V_1), /*hidden argument*/Enumerator_MoveNext_m4100612698_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0013;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2540888223((&V_1), /*hidden argument*/Enumerator_Dispose_m2540888223_RuntimeMethod_var);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0061:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_UnityAction_t3245792599 (UnityAction_t3245792599 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C"  void UnityAction_Invoke_m893829196 (UnityAction_t3245792599 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityAction_Invoke_m893829196((UnityAction_t3245792599 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* UnityAction_BeginInvoke_m1892359299 (UnityAction_t3245792599 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_EndInvoke_m2754068291 (UnityAction_t3245792599 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern "C"  void UnityEvent__ctor_m431206565 (UnityEvent_t2581268647 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_4((ObjectU5BU5D_t2843939325*)NULL);
		UnityEventBase__ctor_m1851535676(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_FindMethod_Impl_m2312362624 (UnityEvent_t2581268647 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_FindMethod_Impl_m2312362624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		MethodInfo_t * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2703961024 * UnityEvent_GetDelegate_m3669208949 (UnityEvent_t2581268647 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_GetDelegate_m3669208949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseInvokableCall_t2703961024 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_t832123510 * L_2 = (InvokableCall_t832123510 *)il2cpp_codegen_object_new(InvokableCall_t832123510_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m1303836326(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		BaseInvokableCall_t2703961024 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C"  void UnityEventBase__ctor_m1851535676 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventBase__ctor_m1851535676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_CallsDirty_3((bool)1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		InvokableCallList_t2498835369 * L_0 = (InvokableCallList_t2498835369 *)il2cpp_codegen_object_new(InvokableCallList_t2498835369_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m829480958(L_0, /*hidden argument*/NULL);
		__this->set_m_Calls_0(L_0);
		PersistentCallGroup_t3050769227 * L_1 = (PersistentCallGroup_t3050769227 *)il2cpp_codegen_object_new(PersistentCallGroup_t3050769227_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m1525263635(L_1, /*hidden argument*/NULL);
		__this->set_m_PersistentCalls_1(L_1);
		Type_t * L_2 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->set_m_TypeName_2(L_3);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C"  void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3869333132 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C"  void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3212312200 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m3575963459(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->set_m_TypeName_2(L_1);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern "C"  MethodInfo_t * UnityEventBase_FindMethod_m622251156 (UnityEventBase_t3960448221 * __this, PersistentCall_t3407714124 * ___call0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventBase_FindMethod_m622251156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	Type_t * G_B3_0 = NULL;
	Type_t * G_B2_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (Object_t631007953_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PersistentCall_t3407714124 * L_2 = ___call0;
		ArgumentCache_t2187958399 * L_3 = PersistentCall_get_arguments_m3144105308(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3450114170(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0044;
		}
	}
	{
		PersistentCall_t3407714124 * L_6 = ___call0;
		ArgumentCache_t2187958399 * L_7 = PersistentCall_get_arguments_m3144105308(L_6, /*hidden argument*/NULL);
		String_t* L_8 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m3450114170(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3605423543, L_8, (bool)0, "UnityEngine.CoreModule, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_10 = L_9;
		G_B2_0 = L_10;
		if (L_10)
		{
			G_B3_0 = L_10;
			goto IL_0043;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (Object_t631007953_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		G_B3_0 = L_12;
	}

IL_0043:
	{
		V_0 = G_B3_0;
	}

IL_0044:
	{
		PersistentCall_t3407714124 * L_13 = ___call0;
		String_t* L_14 = PersistentCall_get_methodName_m4214122315(L_13, /*hidden argument*/NULL);
		PersistentCall_t3407714124 * L_15 = ___call0;
		Object_t631007953 * L_16 = PersistentCall_get_target_m830923650(L_15, /*hidden argument*/NULL);
		PersistentCall_t3407714124 * L_17 = ___call0;
		int32_t L_18 = PersistentCall_get_mode_m483997668(L_17, /*hidden argument*/NULL);
		Type_t * L_19 = V_0;
		MethodInfo_t * L_20 = UnityEventBase_FindMethod_m3366332957(__this, L_14, L_16, L_18, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		goto IL_0063;
	}

IL_0063:
	{
		MethodInfo_t * L_21 = V_1;
		return L_21;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern "C"  MethodInfo_t * UnityEventBase_FindMethod_m3366332957 (UnityEventBase_t3960448221 * __this, String_t* ___name0, RuntimeObject * ___listener1, int32_t ___mode2, Type_t * ___argumentType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventBase_FindMethod_m3366332957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	Type_t * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t3940880105* G_B10_2 = NULL;
	TypeU5BU5D_t3940880105* G_B10_3 = NULL;
	String_t* G_B10_4 = NULL;
	RuntimeObject * G_B10_5 = NULL;
	Type_t * G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t3940880105* G_B9_2 = NULL;
	TypeU5BU5D_t3940880105* G_B9_3 = NULL;
	String_t* G_B9_4 = NULL;
	RuntimeObject * G_B9_5 = NULL;
	{
		int32_t L_0 = ___mode2;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_00c9;
			}
			case 3:
			{
				goto IL_0069;
			}
			case 4:
			{
				goto IL_0049;
			}
			case 5:
			{
				goto IL_00a9;
			}
			case 6:
			{
				goto IL_0089;
			}
		}
	}
	{
		goto IL_00f2;
	}

IL_0028:
	{
		String_t* L_1 = ___name0;
		RuntimeObject * L_2 = ___listener1;
		MethodInfo_t * L_3 = VirtFuncInvoker2< MethodInfo_t *, String_t*, RuntimeObject * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_1, L_2);
		V_0 = L_3;
		goto IL_00f9;
	}

IL_0036:
	{
		RuntimeObject * L_4 = ___listener1;
		String_t* L_5 = ___name0;
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, L_4, L_5, ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_00f9;
	}

IL_0049:
	{
		RuntimeObject * L_7 = ___listener1;
		String_t* L_8 = ___name0;
		TypeU5BU5D_t3940880105* L_9 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_00f9;
	}

IL_0069:
	{
		RuntimeObject * L_13 = ___listener1;
		String_t* L_14 = ___name0;
		TypeU5BU5D_t3940880105* L_15 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_16 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_17);
		MethodInfo_t * L_18 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_00f9;
	}

IL_0089:
	{
		RuntimeObject * L_19 = ___listener1;
		String_t* L_20 = ___name0;
		TypeU5BU5D_t3940880105* L_21 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (Boolean_t97287965_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_23);
		MethodInfo_t * L_24 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_00f9;
	}

IL_00a9:
	{
		RuntimeObject * L_25 = ___listener1;
		String_t* L_26 = ___name0;
		TypeU5BU5D_t3940880105* L_27 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_29);
		MethodInfo_t * L_30 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_00f9;
	}

IL_00c9:
	{
		RuntimeObject * L_31 = ___listener1;
		String_t* L_32 = ___name0;
		TypeU5BU5D_t3940880105* L_33 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		Type_t * L_34 = ___argumentType3;
		Type_t * L_35 = L_34;
		G_B9_0 = L_35;
		G_B9_1 = 0;
		G_B9_2 = L_33;
		G_B9_3 = L_33;
		G_B9_4 = L_32;
		G_B9_5 = L_31;
		if (L_35)
		{
			G_B10_0 = L_35;
			G_B10_1 = 0;
			G_B10_2 = L_33;
			G_B10_3 = L_33;
			G_B10_4 = L_32;
			G_B10_5 = L_31;
			goto IL_00e6;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_36 = { reinterpret_cast<intptr_t> (Object_t631007953_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		G_B10_0 = L_37;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00e6:
	{
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		(G_B10_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B10_1), (Type_t *)G_B10_0);
		MethodInfo_t * L_38 = UnityEventBase_GetValidMethodInfo_m3989987635(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		V_0 = L_38;
		goto IL_00f9;
	}

IL_00f2:
	{
		V_0 = (MethodInfo_t *)NULL;
		goto IL_00f9;
	}

IL_00f9:
	{
		MethodInfo_t * L_39 = V_0;
		return L_39;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C"  void UnityEventBase_DirtyPersistentCalls_m3575963459 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method)
{
	{
		InvokableCallList_t2498835369 * L_0 = __this->get_m_Calls_0();
		InvokableCallList_ClearPersistent_m1904264973(L_0, /*hidden argument*/NULL);
		__this->set_m_CallsDirty_3((bool)1);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C"  void UnityEventBase_RebuildPersistentCallsIfNeeded_m216788690 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_CallsDirty_3();
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		PersistentCallGroup_t3050769227 * L_1 = __this->get_m_PersistentCalls_1();
		InvokableCallList_t2498835369 * L_2 = __this->get_m_Calls_0();
		PersistentCallGroup_Initialize_m4253175514(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->set_m_CallsDirty_3((bool)0);
	}

IL_0027:
	{
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
extern "C"  List_1_t4176035766 * UnityEventBase_PrepareInvoke_m1785382128 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method)
{
	List_1_t4176035766 * V_0 = NULL;
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m216788690(__this, /*hidden argument*/NULL);
		InvokableCallList_t2498835369 * L_0 = __this->get_m_Calls_0();
		List_1_t4176035766 * L_1 = InvokableCallList_PrepareInvoke_m4003891334(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		List_1_t4176035766 * L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern "C"  String_t* UnityEventBase_ToString_m1554306026 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventBase_ToString_m1554306026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3755062657(NULL /*static, unused*/, L_0, _stringLiteral3452614528, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C"  MethodInfo_t * UnityEventBase_GetValidMethodInfo_m3989987635 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t3940880105* ___argumentTypes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEventBase_GetValidMethodInfo_m3989987635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	ParameterInfoU5BU5D_t390618515* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t1861056598 * V_5 = NULL;
	ParameterInfoU5BU5D_t390618515* V_6 = NULL;
	int32_t V_7 = 0;
	Type_t * V_8 = NULL;
	Type_t * V_9 = NULL;
	MethodInfo_t * V_10 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		Type_t * L_1 = Object_GetType_m88164663(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_009c;
	}

IL_000d:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName1;
		TypeU5BU5D_t3940880105* L_4 = ___argumentTypes2;
		MethodInfo_t * L_5 = Type_GetMethod_m637078096(L_2, L_3, ((int32_t)52), (Binder_t2999457153 *)NULL, L_4, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0094;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		ParameterInfoU5BU5D_t390618515* L_8 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = (bool)1;
		V_4 = 0;
		ParameterInfoU5BU5D_t390618515* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_007a;
	}

IL_003a:
	{
		ParameterInfoU5BU5D_t390618515* L_10 = V_6;
		int32_t L_11 = V_7;
		int32_t L_12 = L_11;
		ParameterInfo_t1861056598 * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		TypeU5BU5D_t3940880105* L_14 = ___argumentTypes2;
		int32_t L_15 = V_4;
		int32_t L_16 = L_15;
		Type_t * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_8 = L_17;
		ParameterInfo_t1861056598 * L_18 = V_5;
		Type_t * L_19 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_18);
		V_9 = L_19;
		Type_t * L_20 = V_8;
		bool L_21 = Type_get_IsPrimitive_m1114712797(L_20, /*hidden argument*/NULL);
		Type_t * L_22 = V_9;
		bool L_23 = Type_get_IsPrimitive_m1114712797(L_22, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_21) == ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_0085;
	}

IL_006d:
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_27 = V_7;
		ParameterInfoU5BU5D_t390618515* L_28 = V_6;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_003a;
		}
	}

IL_0085:
	{
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_0093;
		}
	}
	{
		MethodInfo_t * L_30 = V_1;
		V_10 = L_30;
		goto IL_00ba;
	}

IL_0093:
	{
	}

IL_0094:
	{
		Type_t * L_31 = V_0;
		Type_t * L_32 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_31);
		V_0 = L_32;
	}

IL_009c:
	{
		Type_t * L_33 = V_0;
		RuntimeTypeHandle_t3027515415  L_34 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_35 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_33) == ((RuntimeObject*)(Type_t *)L_35)))
		{
			goto IL_00b2;
		}
	}
	{
		Type_t * L_36 = V_0;
		if (L_36)
		{
			goto IL_000d;
		}
	}

IL_00b2:
	{
		V_10 = (MethodInfo_t *)NULL;
		goto IL_00ba;
	}

IL_00ba:
	{
		MethodInfo_t * L_37 = V_10;
		return L_37;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
extern "C"  PlayableHandle_t1095853803  CameraPlayable_GetHandle_m1459651790 (CameraPlayable_t3330816414 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  CameraPlayable_GetHandle_m1459651790_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraPlayable_t3330816414 * _thisAdjusted = reinterpret_cast<CameraPlayable_t3330816414 *>(__this + 1);
	return CameraPlayable_GetHandle_m1459651790(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
extern "C"  bool CameraPlayable_Equals_m4009879053 (CameraPlayable_t3330816414 * __this, CameraPlayable_t3330816414  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = CameraPlayable_GetHandle_m1459651790(__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = CameraPlayable_GetHandle_m1459651790((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool CameraPlayable_Equals_m4009879053_AdjustorThunk (RuntimeObject * __this, CameraPlayable_t3330816414  ___other0, const RuntimeMethod* method)
{
	CameraPlayable_t3330816414 * _thisAdjusted = reinterpret_cast<CameraPlayable_t3330816414 *>(__this + 1);
	return CameraPlayable_Equals_m4009879053(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
extern "C"  PlayableHandle_t1095853803  MaterialEffectPlayable_GetHandle_m4279427933 (MaterialEffectPlayable_t3995207978 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  MaterialEffectPlayable_GetHandle_m4279427933_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	MaterialEffectPlayable_t3995207978 * _thisAdjusted = reinterpret_cast<MaterialEffectPlayable_t3995207978 *>(__this + 1);
	return MaterialEffectPlayable_GetHandle_m4279427933(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
extern "C"  bool MaterialEffectPlayable_Equals_m3750885802 (MaterialEffectPlayable_t3995207978 * __this, MaterialEffectPlayable_t3995207978  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = MaterialEffectPlayable_GetHandle_m4279427933(__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = MaterialEffectPlayable_GetHandle_m4279427933((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool MaterialEffectPlayable_Equals_m3750885802_AdjustorThunk (RuntimeObject * __this, MaterialEffectPlayable_t3995207978  ___other0, const RuntimeMethod* method)
{
	MaterialEffectPlayable_t3995207978 * _thisAdjusted = reinterpret_cast<MaterialEffectPlayable_t3995207978 *>(__this + 1);
	return MaterialEffectPlayable_Equals_m3750885802(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
extern "C"  PlayableHandle_t1095853803  TextureMixerPlayable_GetHandle_m2203457785 (TextureMixerPlayable_t2398603962 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  TextureMixerPlayable_GetHandle_m2203457785_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TextureMixerPlayable_t2398603962 * _thisAdjusted = reinterpret_cast<TextureMixerPlayable_t2398603962 *>(__this + 1);
	return TextureMixerPlayable_GetHandle_m2203457785(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
extern "C"  bool TextureMixerPlayable_Equals_m1074187513 (TextureMixerPlayable_t2398603962 * __this, TextureMixerPlayable_t2398603962  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = TextureMixerPlayable_GetHandle_m2203457785(__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = TextureMixerPlayable_GetHandle_m2203457785((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool TextureMixerPlayable_Equals_m1074187513_AdjustorThunk (RuntimeObject * __this, TextureMixerPlayable_t2398603962  ___other0, const RuntimeMethod* method)
{
	TextureMixerPlayable_t2398603962 * _thisAdjusted = reinterpret_cast<TextureMixerPlayable_t2398603962 *>(__this + 1);
	return TextureMixerPlayable_Equals_m1074187513(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::get_currentPipeline()
extern "C"  RuntimeObject* RenderPipelineManager_get_currentPipeline_m1638613344 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderPipelineManager_get_currentPipeline_m1638613344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ((RenderPipelineManager_t4036911426_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t4036911426_il2cpp_TypeInfo_var))->get_U3CcurrentPipelineU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.RenderPipelineManager::set_currentPipeline(UnityEngine.Experimental.Rendering.IRenderPipeline)
extern "C"  void RenderPipelineManager_set_currentPipeline_m3492857006 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderPipelineManager_set_currentPipeline_m3492857006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		((RenderPipelineManager_t4036911426_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t4036911426_il2cpp_TypeInfo_var))->set_U3CcurrentPipelineU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.RenderPipelineManager::CleanupRenderPipeline()
extern "C"  void RenderPipelineManager_CleanupRenderPipeline_m3545163046 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderPipelineManager_CleanupRenderPipeline_m3545163046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RenderPipelineManager_t4036911426_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t4036911426_il2cpp_TypeInfo_var))->get_s_CurrentPipelineAsset_0();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ((RenderPipelineManager_t4036911426_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t4036911426_il2cpp_TypeInfo_var))->get_s_CurrentPipelineAsset_0();
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Experimental.Rendering.IRenderPipelineAsset::DestroyCreatedInstances() */, IRenderPipelineAsset_t3275513850_il2cpp_TypeInfo_var, L_1);
	}

IL_0015:
	{
		((RenderPipelineManager_t4036911426_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t4036911426_il2cpp_TypeInfo_var))->set_s_CurrentPipelineAsset_0((RuntimeObject*)NULL);
		RenderPipelineManager_set_currentPipeline_m3492857006(NULL /*static, unused*/, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.RenderPipelineManager::DoRenderLoop_Internal(UnityEngine.Experimental.Rendering.IRenderPipelineAsset,UnityEngine.Camera[],System.IntPtr)
extern "C"  void RenderPipelineManager_DoRenderLoop_Internal_m3799666479 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___pipe0, CameraU5BU5D_t1709987734* ___cameras1, intptr_t ___loopPtr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderPipelineManager_DoRenderLoop_Internal_m3799666479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRenderContext_t274343796  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___pipe0;
		RenderPipelineManager_PrepareRenderPipeline_m4184225229(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = RenderPipelineManager_get_currentPipeline_m1638613344(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_002a;
	}

IL_0016:
	{
		intptr_t L_2 = ___loopPtr2;
		ScriptableRenderContext__ctor_m172989033((&V_0), L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = RenderPipelineManager_get_currentPipeline_m1638613344(NULL /*static, unused*/, /*hidden argument*/NULL);
		ScriptableRenderContext_t274343796  L_4 = V_0;
		CameraU5BU5D_t1709987734* L_5 = ___cameras1;
		InterfaceActionInvoker2< ScriptableRenderContext_t274343796 , CameraU5BU5D_t1709987734* >::Invoke(1 /* System.Void UnityEngine.Experimental.Rendering.IRenderPipeline::Render(UnityEngine.Experimental.Rendering.ScriptableRenderContext,UnityEngine.Camera[]) */, IRenderPipeline_t857809005_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.RenderPipelineManager::PrepareRenderPipeline(UnityEngine.Experimental.Rendering.IRenderPipelineAsset)
extern "C"  void RenderPipelineManager_PrepareRenderPipeline_m4184225229 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___pipe0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderPipelineManager_PrepareRenderPipeline_m4184225229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RenderPipelineManager_t4036911426_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t4036911426_il2cpp_TypeInfo_var))->get_s_CurrentPipelineAsset_0();
		RuntimeObject* L_1 = ___pipe0;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = ((RenderPipelineManager_t4036911426_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t4036911426_il2cpp_TypeInfo_var))->get_s_CurrentPipelineAsset_0();
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RenderPipelineManager_CleanupRenderPipeline_m3545163046(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_001e:
	{
		RuntimeObject* L_3 = ___pipe0;
		((RenderPipelineManager_t4036911426_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t4036911426_il2cpp_TypeInfo_var))->set_s_CurrentPipelineAsset_0(L_3);
	}

IL_0025:
	{
		RuntimeObject* L_4 = ((RenderPipelineManager_t4036911426_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t4036911426_il2cpp_TypeInfo_var))->get_s_CurrentPipelineAsset_0();
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_5 = RenderPipelineManager_get_currentPipeline_m1638613344(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_6 = RenderPipelineManager_get_currentPipeline_m1638613344(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.Experimental.Rendering.IRenderPipeline::get_disposed() */, IRenderPipeline_t857809005_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0057;
		}
	}

IL_0048:
	{
		RuntimeObject* L_8 = ((RenderPipelineManager_t4036911426_StaticFields*)il2cpp_codegen_static_fields_for(RenderPipelineManager_t4036911426_il2cpp_TypeInfo_var))->get_s_CurrentPipelineAsset_0();
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.IRenderPipelineAsset::CreatePipeline() */, IRenderPipelineAsset_t3275513850_il2cpp_TypeInfo_var, L_8);
		RenderPipelineManager_set_currentPipeline_m3492857006(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Rendering.ScriptableRenderContext::.ctor(System.IntPtr)
extern "C"  void ScriptableRenderContext__ctor_m172989033 (ScriptableRenderContext_t274343796 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___ptr0;
		__this->set_m_Ptr_0(L_0);
		return;
	}
}
extern "C"  void ScriptableRenderContext__ctor_m172989033_AdjustorThunk (RuntimeObject * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	ScriptableRenderContext_t274343796 * _thisAdjusted = reinterpret_cast<ScriptableRenderContext_t274343796 *>(__this + 1);
	ScriptableRenderContext__ctor_m172989033(_thisAdjusted, ___ptr0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.FailedToLoadScriptObject
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke(const FailedToLoadScriptObject_t547604379& unmarshaled, FailedToLoadScriptObject_t547604379_marshaled_pinvoke& marshaled)
{
	marshaled.___m_CachedPtr_0 = unmarshaled.get_m_CachedPtr_0();
}
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke_back(const FailedToLoadScriptObject_t547604379_marshaled_pinvoke& marshaled, FailedToLoadScriptObject_t547604379& unmarshaled)
{
	intptr_t unmarshaled_m_CachedPtr_temp_0;
	memset(&unmarshaled_m_CachedPtr_temp_0, 0, sizeof(unmarshaled_m_CachedPtr_temp_0));
	unmarshaled_m_CachedPtr_temp_0 = marshaled.___m_CachedPtr_0;
	unmarshaled.set_m_CachedPtr_0(unmarshaled_m_CachedPtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.FailedToLoadScriptObject
extern "C" void FailedToLoadScriptObject_t547604379_marshal_pinvoke_cleanup(FailedToLoadScriptObject_t547604379_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.FailedToLoadScriptObject
extern "C" void FailedToLoadScriptObject_t547604379_marshal_com(const FailedToLoadScriptObject_t547604379& unmarshaled, FailedToLoadScriptObject_t547604379_marshaled_com& marshaled)
{
	marshaled.___m_CachedPtr_0 = unmarshaled.get_m_CachedPtr_0();
}
extern "C" void FailedToLoadScriptObject_t547604379_marshal_com_back(const FailedToLoadScriptObject_t547604379_marshaled_com& marshaled, FailedToLoadScriptObject_t547604379& unmarshaled)
{
	intptr_t unmarshaled_m_CachedPtr_temp_0;
	memset(&unmarshaled_m_CachedPtr_temp_0, 0, sizeof(unmarshaled_m_CachedPtr_temp_0));
	unmarshaled_m_CachedPtr_temp_0 = marshaled.___m_CachedPtr_0;
	unmarshaled.set_m_CachedPtr_0(unmarshaled_m_CachedPtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.FailedToLoadScriptObject
extern "C" void FailedToLoadScriptObject_t547604379_marshal_com_cleanup(FailedToLoadScriptObject_t547604379_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GameObject::.ctor()
extern "C"  void GameObject__ctor_m3707688467 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject__ctor_m3707688467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		GameObject_Internal_CreateGameObject_m2533291801(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C"  Component_t1923634451 * GameObject_GetComponent_m1027872079 (GameObject_t1113636619 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	typedef Component_t1923634451 * (*GameObject_GetComponent_m1027872079_ftn) (GameObject_t1113636619 *, Type_t *);
	static GameObject_GetComponent_m1027872079_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m1027872079_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	Component_t1923634451 * retVal = _il2cpp_icall_func(__this, ___type0);
	return retVal;
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	typedef Transform_t3600365921 * (*GameObject_get_transform_m1369836730_ftn) (GameObject_t1113636619 *);
	static GameObject_get_transform_m1369836730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m1369836730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	Transform_t3600365921 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C"  GameObjectU5BU5D_t3328599146* GameObject_FindGameObjectsWithTag_m2585173894 (RuntimeObject * __this /* static, unused */, String_t* ___tag0, const RuntimeMethod* method)
{
	typedef GameObjectU5BU5D_t3328599146* (*GameObject_FindGameObjectsWithTag_m2585173894_ftn) (String_t*);
	static GameObject_FindGameObjectsWithTag_m2585173894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_FindGameObjectsWithTag_m2585173894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectsWithTag(System.String)");
	GameObjectU5BU5D_t3328599146* retVal = _il2cpp_icall_func(___tag0);
	return retVal;
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void GameObject_SendMessage_m3720186693 (GameObject_t1113636619 * __this, String_t* ___methodName0, RuntimeObject * ___value1, int32_t ___options2, const RuntimeMethod* method)
{
	typedef void (*GameObject_SendMessage_m3720186693_ftn) (GameObject_t1113636619 *, String_t*, RuntimeObject *, int32_t);
	static GameObject_SendMessage_m3720186693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m3720186693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName0, ___value1, ___options2);
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C"  void GameObject_Internal_CreateGameObject_m2533291801 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___mono0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m2533291801_ftn) (GameObject_t1113636619 *, String_t*);
	static GameObject_Internal_CreateGameObject_m2533291801_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m2533291801_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono0, ___name1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Gradient
extern "C" void Gradient_t3067099924_marshal_pinvoke(const Gradient_t3067099924& unmarshaled, Gradient_t3067099924_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void Gradient_t3067099924_marshal_pinvoke_back(const Gradient_t3067099924_marshaled_pinvoke& marshaled, Gradient_t3067099924& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
extern "C" void Gradient_t3067099924_marshal_pinvoke_cleanup(Gradient_t3067099924_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Gradient
extern "C" void Gradient_t3067099924_marshal_com(const Gradient_t3067099924& unmarshaled, Gradient_t3067099924_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void Gradient_t3067099924_marshal_com_back(const Gradient_t3067099924_marshaled_com& marshaled, Gradient_t3067099924& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
extern "C" void Gradient_t3067099924_marshal_com_cleanup(Gradient_t3067099924_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Gradient::.ctor()
extern "C"  void Gradient__ctor_m173848750 (Gradient_t3067099924 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Gradient_Init_m3104802093(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Gradient::Init()
extern "C"  void Gradient_Init_m3104802093 (Gradient_t3067099924 * __this, const RuntimeMethod* method)
{
	typedef void (*Gradient_Init_m3104802093_ftn) (Gradient_t3067099924 *);
	static Gradient_Init_m3104802093_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Init_m3104802093_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Cleanup()
extern "C"  void Gradient_Cleanup_m3422458828 (Gradient_t3067099924 * __this, const RuntimeMethod* method)
{
	typedef void (*Gradient_Cleanup_m3422458828_ftn) (Gradient_t3067099924 *);
	static Gradient_Cleanup_m3422458828_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Gradient_Cleanup_m3422458828_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Gradient::Finalize()
extern "C"  void Gradient_Finalize_m3995355035 (Gradient_t3067099924 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		Gradient_Cleanup_m3422458828(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUIElement::.ctor()
extern "C"  void GUIElement__ctor_m3257342989 (GUIElement_t3567083079 * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_m346897018(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C"  GUIElement_t3567083079 * GUILayer_HitTest_m512928460 (GUILayer_t2783472903 * __this, Vector3_t3722313464  ___screenPosition0, const RuntimeMethod* method)
{
	GUIElement_t3567083079 * V_0 = NULL;
	{
		GUIElement_t3567083079 * L_0 = GUILayer_INTERNAL_CALL_HitTest_m1069802956(NULL /*static, unused*/, __this, (&___screenPosition0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		GUIElement_t3567083079 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C"  GUIElement_t3567083079 * GUILayer_INTERNAL_CALL_HitTest_m1069802956 (RuntimeObject * __this /* static, unused */, GUILayer_t2783472903 * ___self0, Vector3_t3722313464 * ___screenPosition1, const RuntimeMethod* method)
{
	typedef GUIElement_t3567083079 * (*GUILayer_INTERNAL_CALL_HitTest_m1069802956_ftn) (GUILayer_t2783472903 *, Vector3_t3722313464 *);
	static GUILayer_INTERNAL_CALL_HitTest_m1069802956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUILayer_INTERNAL_CALL_HitTest_m1069802956_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	GUIElement_t3567083079 * retVal = _il2cpp_icall_func(___self0, ___screenPosition1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Input::GetKeyDownInt(System.Int32)
extern "C"  bool Input_GetKeyDownInt_m3509480073 (RuntimeObject * __this /* static, unused */, int32_t ___key0, const RuntimeMethod* method)
{
	typedef bool (*Input_GetKeyDownInt_m3509480073_ftn) (int32_t);
	static Input_GetKeyDownInt_m3509480073_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyDownInt_m3509480073_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyDownInt(System.Int32)");
	bool retVal = _il2cpp_icall_func(___key0);
	return retVal;
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C"  float Input_GetAxisRaw_m2316819917 (RuntimeObject * __this /* static, unused */, String_t* ___axisName0, const RuntimeMethod* method)
{
	typedef float (*Input_GetAxisRaw_m2316819917_ftn) (String_t*);
	static Input_GetAxisRaw_m2316819917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m2316819917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	float retVal = _il2cpp_icall_func(___axisName0);
	return retVal;
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_GetKeyDown_m17791917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDownInt_m3509480073(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t ___button0, const RuntimeMethod* method)
{
	typedef bool (*Input_GetMouseButton_m513753021_ftn) (int32_t);
	static Input_GetMouseButton_m513753021_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m513753021_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	bool retVal = _il2cpp_icall_func(___button0);
	return retVal;
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t ___button0, const RuntimeMethod* method)
{
	typedef bool (*Input_GetMouseButtonDown_m2081676745_ftn) (int32_t);
	static Input_GetMouseButtonDown_m2081676745_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m2081676745_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	bool retVal = _il2cpp_icall_func(___button0);
	return retVal;
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input_get_mousePosition_m1616496925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mousePosition_m1805263023(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C"  void Input_INTERNAL_get_mousePosition_m1805263023 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Input_INTERNAL_get_mousePosition_m1805263023_ftn) (Vector3_t3722313464 *);
	static Input_INTERNAL_get_mousePosition_m1805263023_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mousePosition_m1805263023_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.Input::.cctor()
extern "C"  void Input__cctor_m325696046 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Input__cctor_m325696046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Input_t1431474628_StaticFields*)il2cpp_codegen_static_fields_for(Input_t1431474628_il2cpp_TypeInfo_var))->set_m_MainGyro_0((Gyroscope_t3288342876 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C"  void DefaultValueAttribute__ctor_m1514328230 (DefaultValueAttribute_t2337225216 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set_DefaultValue_0(L_0);
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C"  RuntimeObject * DefaultValueAttribute_get_Value_m3086344020 (DefaultValueAttribute_t2337225216 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_DefaultValue_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern "C"  bool DefaultValueAttribute_Equals_m443523471 (DefaultValueAttribute_t2337225216 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultValueAttribute_Equals_m443523471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DefaultValueAttribute_t2337225216 * V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((DefaultValueAttribute_t2337225216 *)IsInstClass((RuntimeObject*)L_0, DefaultValueAttribute_t2337225216_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t2337225216 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0046;
	}

IL_0015:
	{
		RuntimeObject * L_2 = __this->get_DefaultValue_0();
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		DefaultValueAttribute_t2337225216 * L_3 = V_0;
		RuntimeObject * L_4 = DefaultValueAttribute_get_Value_m3086344020(L_3, /*hidden argument*/NULL);
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0046;
	}

IL_002f:
	{
		RuntimeObject * L_5 = __this->get_DefaultValue_0();
		DefaultValueAttribute_t2337225216 * L_6 = V_0;
		RuntimeObject * L_7 = DefaultValueAttribute_get_Value_m3086344020(L_6, /*hidden argument*/NULL);
		bool L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		V_1 = L_8;
		goto IL_0046;
	}

IL_0046:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C"  int32_t DefaultValueAttribute_GetHashCode_m3368187153 (DefaultValueAttribute_t2337225216 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = __this->get_DefaultValue_0();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m2508706224(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0029;
	}

IL_0018:
	{
		RuntimeObject * L_2 = __this->get_DefaultValue_0();
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		V_0 = L_3;
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C"  void ExcludeFromDocsAttribute__ctor_m1509941807 (ExcludeFromDocsAttribute_t3592494112 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Logger::.ctor(UnityEngine.ILogHandler)
extern "C"  void Logger__ctor_m439059923 (Logger_t274032455 * __this, RuntimeObject* ___logHandler0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___logHandler0;
		Logger_set_logHandler_m4059005946(__this, L_0, /*hidden argument*/NULL);
		Logger_set_logEnabled_m1180597166(__this, (bool)1, /*hidden argument*/NULL);
		Logger_set_filterLogType_m3622751173(__this, 3, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.ILogHandler UnityEngine.Logger::get_logHandler()
extern "C"  RuntimeObject* Logger_get_logHandler_m1335645353 (Logger_t274032455 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_U3ClogHandlerU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Logger::set_logHandler(UnityEngine.ILogHandler)
extern "C"  void Logger_set_logHandler_m4059005946 (Logger_t274032455 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3ClogHandlerU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Logger::get_logEnabled()
extern "C"  bool Logger_get_logEnabled_m3154120769 (Logger_t274032455 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3ClogEnabledU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Logger::set_logEnabled(System.Boolean)
extern "C"  void Logger_set_logEnabled_m1180597166 (Logger_t274032455 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3ClogEnabledU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.LogType UnityEngine.Logger::get_filterLogType()
extern "C"  int32_t Logger_get_filterLogType_m1177392786 (Logger_t274032455 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CfilterLogTypeU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Logger::set_filterLogType(UnityEngine.LogType)
extern "C"  void Logger_set_filterLogType_m3622751173 (Logger_t274032455 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CfilterLogTypeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Logger::IsLogTypeAllowed(UnityEngine.LogType)
extern "C"  bool Logger_IsLogTypeAllowed_m3527674834 (Logger_t274032455 * __this, int32_t ___logType0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = Logger_get_logEnabled_m3154120769(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_1 = ___logType0;
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_001b;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0041;
	}

IL_001b:
	{
		int32_t L_2 = Logger_get_filterLogType_m1177392786(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = ___logType0;
		int32_t L_4 = Logger_get_filterLogType_m1177392786(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0039:
	{
	}

IL_003a:
	{
		V_0 = (bool)0;
		goto IL_0041;
	}

IL_0041:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.Logger::GetString(System.Object)
extern "C"  String_t* Logger_GetString_m3669755330 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_GetString_m3669755330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		RuntimeObject * L_0 = ___message0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = ___message0;
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral1202628608;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Logger::Log(UnityEngine.LogType,System.Object)
extern "C"  void Logger_Log_m969976427 (Logger_t274032455 * __this, int32_t ___logType0, RuntimeObject * ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_Log_m969976427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___logType0;
		bool L_1 = Logger_IsLogTypeAllowed_m3527674834(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = Logger_get_logHandler_m1335645353(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___logType0;
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject * L_5 = ___message1;
		String_t* L_6 = Logger_GetString_m3669755330(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		InterfaceActionInvoker4< int32_t, Object_t631007953 *, String_t*, ObjectU5BU5D_t2843939325* >::Invoke(0 /* System.Void UnityEngine.ILogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[]) */, ILogHandler_t2464711877_il2cpp_TypeInfo_var, L_2, L_3, (Object_t631007953 *)NULL, _stringLiteral628085470, L_4);
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.Logger::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C"  void Logger_LogFormat_m3300686007 (Logger_t274032455 * __this, int32_t ___logType0, Object_t631007953 * ___context1, String_t* ___format2, ObjectU5BU5D_t2843939325* ___args3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_LogFormat_m3300686007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___logType0;
		bool L_1 = Logger_IsLogTypeAllowed_m3527674834(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = Logger_get_logHandler_m1335645353(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___logType0;
		Object_t631007953 * L_4 = ___context1;
		String_t* L_5 = ___format2;
		ObjectU5BU5D_t2843939325* L_6 = ___args3;
		InterfaceActionInvoker4< int32_t, Object_t631007953 *, String_t*, ObjectU5BU5D_t2843939325* >::Invoke(0 /* System.Void UnityEngine.ILogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[]) */, ILogHandler_t2464711877_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5, L_6);
	}

IL_001d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ManagedStreamHelpers::ValidateLoadFromStream(System.IO.Stream)
extern "C"  void ManagedStreamHelpers_ValidateLoadFromStream_m580138133 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManagedStreamHelpers_ValidateLoadFromStream_m580138133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_t1273022909 * L_0 = ___stream0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2009621981(L_1, _stringLiteral1050427080, _stringLiteral3236680756, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		Stream_t1273022909 * L_2 = ___stream0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_4, _stringLiteral3092135949, _stringLiteral3236680756, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0032:
	{
		Stream_t1273022909 * L_5 = ___stream0;
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_5);
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, _stringLiteral1838966355, _stringLiteral3236680756, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_004d:
	{
		return;
	}
}
// System.Void UnityEngine.ManagedStreamHelpers::ManagedStreamRead(System.Byte[],System.Int32,System.Int32,System.IO.Stream,System.IntPtr)
extern "C"  void ManagedStreamHelpers_ManagedStreamRead_m481666286 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___count2, Stream_t1273022909 * ___stream3, intptr_t ___returnValueAddress4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManagedStreamHelpers_ManagedStreamRead_m481666286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___returnValueAddress4;
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_2, _stringLiteral2664163362, _stringLiteral696106652, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0022:
	{
		Stream_t1273022909 * L_3 = ___stream3;
		ManagedStreamHelpers_ValidateLoadFromStream_m580138133(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		intptr_t L_4 = ___returnValueAddress4;
		void* L_5 = IntPtr_op_Explicit_m2520637223(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Stream_t1273022909 * L_6 = ___stream3;
		ByteU5BU5D_t4116647657* L_7 = ___buffer0;
		int32_t L_8 = ___offset1;
		int32_t L_9 = ___count2;
		int32_t L_10 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, L_8, L_9);
		*((int32_t*)(L_5)) = (int32_t)L_10;
		return;
	}
}
// System.Void UnityEngine.ManagedStreamHelpers::ManagedStreamSeek(System.Int64,System.UInt32,System.IO.Stream,System.IntPtr)
extern "C"  void ManagedStreamHelpers_ManagedStreamSeek_m3158782053 (RuntimeObject * __this /* static, unused */, int64_t ___offset0, uint32_t ___origin1, Stream_t1273022909 * ___stream2, intptr_t ___returnValueAddress3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManagedStreamHelpers_ManagedStreamSeek_m3158782053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___returnValueAddress3;
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_2, _stringLiteral2664163362, _stringLiteral696106652, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0021:
	{
		Stream_t1273022909 * L_3 = ___stream2;
		ManagedStreamHelpers_ValidateLoadFromStream_m580138133(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		intptr_t L_4 = ___returnValueAddress3;
		void* L_5 = IntPtr_op_Explicit_m2520637223(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Stream_t1273022909 * L_6 = ___stream2;
		int64_t L_7 = ___offset0;
		uint32_t L_8 = ___origin1;
		int64_t L_9 = VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(16 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_6, L_7, L_8);
		*((int64_t*)(L_5)) = (int64_t)L_9;
		return;
	}
}
// System.Void UnityEngine.ManagedStreamHelpers::ManagedStreamLength(System.IO.Stream,System.IntPtr)
extern "C"  void ManagedStreamHelpers_ManagedStreamLength_m2930872960 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___stream0, intptr_t ___returnValueAddress1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManagedStreamHelpers_ManagedStreamLength_m2930872960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___returnValueAddress1;
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_2, _stringLiteral2664163362, _stringLiteral696106652, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0021:
	{
		Stream_t1273022909 * L_3 = ___stream0;
		ManagedStreamHelpers_ValidateLoadFromStream_m580138133(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		intptr_t L_4 = ___returnValueAddress1;
		void* L_5 = IntPtr_op_Explicit_m2520637223(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Stream_t1273022909 * L_6 = ___stream0;
		int64_t L_7 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		*((int64_t*)(L_5)) = (int64_t)L_7;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Mathf::Abs(System.Single)
extern "C"  float Mathf_Abs_m3281243566 (RuntimeObject * __this /* static, unused */, float ___f0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = ___f0;
		float L_1 = fabsf(L_0);
		V_0 = (((float)((float)L_1)));
		goto IL_000e;
	}

IL_000e:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float ___a0, float ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		float L_2 = ___a0;
		G_B3_0 = L_2;
		goto IL_000f;
	}

IL_000e:
	{
		float L_3 = ___b1;
		G_B3_0 = L_3;
	}

IL_000f:
	{
		V_0 = G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C"  bool Mathf_Approximately_m245805902 (RuntimeObject * __this /* static, unused */, float ___a0, float ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Mathf_Approximately_m245805902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = fabsf(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		float L_3 = ___a0;
		float L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6 = fabsf(L_5);
		float L_7 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		float L_8 = ((Mathf_t3464937446_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t3464937446_il2cpp_TypeInfo_var))->get_Epsilon_0();
		float L_9 = Mathf_Max_m3146388979(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)(1.0E-06f), (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_8, (float)(8.0f))), /*hidden argument*/NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0038;
	}

IL_0038:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.Mathf::.cctor()
extern "C"  void Mathf__cctor_m1175545152 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Mathf__cctor_m1175545152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t624072491_il2cpp_TypeInfo_var);
		bool L_0 = ((MathfInternal_t624072491_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t624072491_il2cpp_TypeInfo_var))->get_IsFlushToZeroEnabled_2();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t624072491_il2cpp_TypeInfo_var);
		float L_1 = ((MathfInternal_t624072491_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t624072491_il2cpp_TypeInfo_var))->get_FloatMinNormal_0();
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MathfInternal_t624072491_il2cpp_TypeInfo_var);
		float L_2 = ((MathfInternal_t624072491_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t624072491_il2cpp_TypeInfo_var))->get_FloatMinDenormal_1();
		il2cpp_codegen_memory_barrier();
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((Mathf_t3464937446_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t3464937446_il2cpp_TypeInfo_var))->set_Epsilon_0(G_B3_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_m346897018(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonoBehaviour_print_m330341231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.NativeClassAttribute::.ctor(System.String)
extern "C"  void NativeClassAttribute__ctor_m2882942384 (NativeClassAttribute_t2601352714 * __this, String_t* ___qualifiedCppName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___qualifiedCppName0;
		NativeClassAttribute_set_QualifiedNativeName_m817439736(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.NativeClassAttribute::set_QualifiedNativeName(System.String)
extern "C"  void NativeClassAttribute_set_QualifiedNativeName_m817439736 (NativeClassAttribute_t2601352714 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CQualifiedNativeNameU3Ek__BackingField_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.PlayerConnection.MessageEventArgs::.ctor()
extern "C"  void MessageEventArgs__ctor_m14798785 (MessageEventArgs_t1170575784 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection::.ctor()
extern "C"  void PlayerConnection__ctor_m2639507345 (PlayerConnection_t3081694049 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerConnection__ctor_m2639507345_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerEditorConnectionEvents_t3411787513 * L_0 = (PlayerEditorConnectionEvents_t3411787513 *)il2cpp_codegen_object_new(PlayerEditorConnectionEvents_t3411787513_il2cpp_TypeInfo_var);
		PlayerEditorConnectionEvents__ctor_m3177489832(L_0, /*hidden argument*/NULL);
		__this->set_m_PlayerEditorConnectionEvents_2(L_0);
		List_1_t128053199 * L_1 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_1, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		__this->set_m_connectedPlayers_3(L_1);
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::get_instance()
extern "C"  PlayerConnection_t3081694049 * PlayerConnection_get_instance_m1750121257 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerConnection_get_instance_m1750121257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayerConnection_t3081694049 * V_0 = NULL;
	{
		PlayerConnection_t3081694049 * L_0 = ((PlayerConnection_t3081694049_StaticFields*)il2cpp_codegen_static_fields_for(PlayerConnection_t3081694049_il2cpp_TypeInfo_var))->get_s_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		PlayerConnection_t3081694049 * L_2 = PlayerConnection_CreateInstance_m902052006(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0028;
	}

IL_001d:
	{
		PlayerConnection_t3081694049 * L_3 = ((PlayerConnection_t3081694049_StaticFields*)il2cpp_codegen_static_fields_for(PlayerConnection_t3081694049_il2cpp_TypeInfo_var))->get_s_Instance_4();
		V_0 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		PlayerConnection_t3081694049 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::CreateInstance()
extern "C"  PlayerConnection_t3081694049 * PlayerConnection_CreateInstance_m902052006 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerConnection_CreateInstance_m902052006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayerConnection_t3081694049 * V_0 = NULL;
	{
		PlayerConnection_t3081694049 * L_0 = ScriptableObject_CreateInstance_TisPlayerConnection_t3081694049_m1971238771(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisPlayerConnection_t3081694049_m1971238771_RuntimeMethod_var);
		((PlayerConnection_t3081694049_StaticFields*)il2cpp_codegen_static_fields_for(PlayerConnection_t3081694049_il2cpp_TypeInfo_var))->set_s_Instance_4(L_0);
		PlayerConnection_t3081694049 * L_1 = ((PlayerConnection_t3081694049_StaticFields*)il2cpp_codegen_static_fields_for(PlayerConnection_t3081694049_il2cpp_TypeInfo_var))->get_s_Instance_4();
		Object_set_hideFlags_m1648752846(L_1, ((int32_t)61), /*hidden argument*/NULL);
		PlayerConnection_t3081694049 * L_2 = ((PlayerConnection_t3081694049_StaticFields*)il2cpp_codegen_static_fields_for(PlayerConnection_t3081694049_il2cpp_TypeInfo_var))->get_s_Instance_4();
		V_0 = L_2;
		goto IL_0022;
	}

IL_0022:
	{
		PlayerConnection_t3081694049 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection::MessageCallbackInternal(System.IntPtr,System.UInt64,System.UInt64,System.String)
extern "C"  void PlayerConnection_MessageCallbackInternal_m1914517467 (RuntimeObject * __this /* static, unused */, intptr_t ___data0, uint64_t ___size1, uint64_t ___guid2, String_t* ___messageId3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerConnection_MessageCallbackInternal_m1914517467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		V_0 = (ByteU5BU5D_t4116647657*)NULL;
		uint64_t L_0 = ___size1;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_1 = ___size1;
		if ((uint64_t)(L_1) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_1))));
		intptr_t L_2 = ___data0;
		ByteU5BU5D_t4116647657* L_3 = V_0;
		uint64_t L_4 = ___size1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1222846562(NULL /*static, unused*/, L_2, L_3, 0, (((int32_t)((int32_t)L_4))), /*hidden argument*/NULL);
	}

IL_001f:
	{
		PlayerConnection_t3081694049 * L_5 = PlayerConnection_get_instance_m1750121257(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlayerEditorConnectionEvents_t3411787513 * L_6 = L_5->get_m_PlayerEditorConnectionEvents_2();
		String_t* L_7 = ___messageId3;
		Guid_t  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Guid__ctor_m2423264394((&L_8), L_7, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_9 = V_0;
		uint64_t L_10 = ___guid2;
		PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_m2094591713(L_6, L_8, L_9, (((int32_t)((int32_t)L_10))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection::ConnectedCallbackInternal(System.Int32)
extern "C"  void PlayerConnection_ConnectedCallbackInternal_m1706913195 (RuntimeObject * __this /* static, unused */, int32_t ___playerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerConnection_ConnectedCallbackInternal_m1706913195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerConnection_t3081694049 * L_0 = PlayerConnection_get_instance_m1750121257(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t128053199 * L_1 = L_0->get_m_connectedPlayers_3();
		int32_t L_2 = ___playerId0;
		List_1_Add_m697420525(L_1, L_2, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		PlayerConnection_t3081694049 * L_3 = PlayerConnection_get_instance_m1750121257(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlayerEditorConnectionEvents_t3411787513 * L_4 = L_3->get_m_PlayerEditorConnectionEvents_2();
		ConnectionChangeEvent_t3251856151 * L_5 = L_4->get_connectionEvent_1();
		int32_t L_6 = ___playerId0;
		UnityEvent_1_Invoke_m3604335408(L_5, L_6, /*hidden argument*/UnityEvent_1_Invoke_m3604335408_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection::DisconnectedCallback(System.Int32)
extern "C"  void PlayerConnection_DisconnectedCallback_m1697017309 (RuntimeObject * __this /* static, unused */, int32_t ___playerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerConnection_DisconnectedCallback_m1697017309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerConnection_t3081694049 * L_0 = PlayerConnection_get_instance_m1750121257(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t128053199 * L_1 = L_0->get_m_connectedPlayers_3();
		int32_t L_2 = ___playerId0;
		List_1_Remove_m3037048099(L_1, L_2, /*hidden argument*/List_1_Remove_m3037048099_RuntimeMethod_var);
		PlayerConnection_t3081694049 * L_3 = PlayerConnection_get_instance_m1750121257(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlayerEditorConnectionEvents_t3411787513 * L_4 = L_3->get_m_PlayerEditorConnectionEvents_2();
		ConnectionChangeEvent_t3251856151 * L_5 = L_4->get_disconnectionEvent_2();
		int32_t L_6 = ___playerId0;
		UnityEvent_1_Invoke_m3604335408(L_5, L_6, /*hidden argument*/UnityEvent_1_Invoke_m3604335408_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::.ctor()
extern "C"  void PlayerEditorConnectionEvents__ctor_m3177489832 (PlayerEditorConnectionEvents_t3411787513 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerEditorConnectionEvents__ctor_m3177489832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3157010512 * L_0 = (List_1_t3157010512 *)il2cpp_codegen_object_new(List_1_t3157010512_il2cpp_TypeInfo_var);
		List_1__ctor_m134154014(L_0, /*hidden argument*/List_1__ctor_m134154014_RuntimeMethod_var);
		__this->set_messageTypeSubscribers_0(L_0);
		ConnectionChangeEvent_t3251856151 * L_1 = (ConnectionChangeEvent_t3251856151 *)il2cpp_codegen_object_new(ConnectionChangeEvent_t3251856151_il2cpp_TypeInfo_var);
		ConnectionChangeEvent__ctor_m764126802(L_1, /*hidden argument*/NULL);
		__this->set_connectionEvent_1(L_1);
		ConnectionChangeEvent_t3251856151 * L_2 = (ConnectionChangeEvent_t3251856151 *)il2cpp_codegen_object_new(ConnectionChangeEvent_t3251856151_il2cpp_TypeInfo_var);
		ConnectionChangeEvent__ctor_m764126802(L_2, /*hidden argument*/NULL);
		__this->set_disconnectionEvent_2(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::InvokeMessageIdSubscribers(System.Guid,System.Byte[],System.Int32)
extern "C"  void PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_m2094591713 (PlayerEditorConnectionEvents_t3411787513 * __this, Guid_t  ___messageId0, ByteU5BU5D_t4116647657* ___data1, int32_t ___playerId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerEditorConnectionEvents_InvokeMessageIdSubscribers_m2094591713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	MessageEventArgs_t1170575784 * V_2 = NULL;
	MessageEventArgs_t1170575784 * V_3 = NULL;
	MessageTypeSubscribers_t1684935770 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441 * L_0 = (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441 *)il2cpp_codegen_object_new(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441_il2cpp_TypeInfo_var);
		U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0__ctor_m2486500792(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441 * L_1 = V_0;
		Guid_t  L_2 = ___messageId0;
		L_1->set_messageId_0(L_2);
		List_1_t3157010512 * L_3 = __this->get_messageTypeSubscribers_0();
		U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_U3CU3Em__0_m444206473_RuntimeMethod_var;
		Func_2_t2172606577 * L_6 = (Func_2_t2172606577 *)il2cpp_codegen_object_new(Func_2_t2172606577_il2cpp_TypeInfo_var);
		Func_2__ctor_m302082295(L_6, L_4, L_5, /*hidden argument*/Func_2__ctor_m302082295_RuntimeMethod_var);
		RuntimeObject* L_7 = Enumerable_Where_TisMessageTypeSubscribers_t1684935770_m2256379362(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/Enumerable_Where_TisMessageTypeSubscribers_t1684935770_m2256379362_RuntimeMethod_var);
		V_1 = L_7;
		RuntimeObject* L_8 = V_1;
		bool L_9 = Enumerable_Any_TisMessageTypeSubscribers_t1684935770_m1059743985(NULL /*static, unused*/, L_8, /*hidden argument*/Enumerable_Any_TisMessageTypeSubscribers_t1684935770_m1059743985_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0051;
		}
	}
	{
		U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441 * L_10 = V_0;
		Guid_t  L_11 = L_10->get_messageId_0();
		Guid_t  L_12 = L_11;
		RuntimeObject * L_13 = Box(Guid_t_il2cpp_TypeInfo_var, &L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3307764161, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		goto IL_00ad;
	}

IL_0051:
	{
		MessageEventArgs_t1170575784 * L_15 = (MessageEventArgs_t1170575784 *)il2cpp_codegen_object_new(MessageEventArgs_t1170575784_il2cpp_TypeInfo_var);
		MessageEventArgs__ctor_m14798785(L_15, /*hidden argument*/NULL);
		V_3 = L_15;
		MessageEventArgs_t1170575784 * L_16 = V_3;
		int32_t L_17 = ___playerId2;
		L_16->set_playerId_0(L_17);
		MessageEventArgs_t1170575784 * L_18 = V_3;
		ByteU5BU5D_t4116647657* L_19 = ___data1;
		L_18->set_data_1(L_19);
		MessageEventArgs_t1170575784 * L_20 = V_3;
		V_2 = L_20;
		RuntimeObject* L_21 = V_1;
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>::GetEnumerator() */, IEnumerable_1_t664788659_il2cpp_TypeInfo_var, L_21);
		V_5 = L_22;
	}

IL_0070:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008d;
		}

IL_0075:
		{
			RuntimeObject* L_23 = V_5;
			MessageTypeSubscribers_t1684935770 * L_24 = InterfaceFuncInvoker0< MessageTypeSubscribers_t1684935770 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>::get_Current() */, IEnumerator_1_t2117506238_il2cpp_TypeInfo_var, L_23);
			V_4 = L_24;
			MessageTypeSubscribers_t1684935770 * L_25 = V_4;
			MessageEvent_t1491597365 * L_26 = L_25->get_messageCallback_2();
			MessageEventArgs_t1170575784 * L_27 = V_2;
			UnityEvent_1_Invoke_m1904070161(L_26, L_27, /*hidden argument*/UnityEvent_1_Invoke_m1904070161_RuntimeMethod_var);
		}

IL_008d:
		{
			RuntimeObject* L_28 = V_5;
			bool L_29 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_28);
			if (L_29)
			{
				goto IL_0075;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xAD, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_30 = V_5;
			if (!L_30)
			{
				goto IL_00ac;
			}
		}

IL_00a5:
		{
			RuntimeObject* L_31 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_31);
		}

IL_00ac:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ad:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::.ctor()
extern "C"  void U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0__ctor_m2486500792 (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::<>m__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers)
extern "C"  bool U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_U3CU3Em__0_m444206473 (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t907692441 * __this, MessageTypeSubscribers_t1684935770 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_U3CU3Em__0_m444206473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		MessageTypeSubscribers_t1684935770 * L_0 = ___x0;
		Guid_t  L_1 = MessageTypeSubscribers_get_MessageTypeId_m1143155832(L_0, /*hidden argument*/NULL);
		Guid_t  L_2 = __this->get_messageId_0();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3 = Guid_op_Equality_m4289903222(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent::.ctor()
extern "C"  void ConnectionChangeEvent__ctor_m764126802 (ConnectionChangeEvent_t3251856151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionChangeEvent__ctor_m764126802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m3816765192(__this, /*hidden argument*/UnityEvent_1__ctor_m3816765192_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent::.ctor()
extern "C"  void MessageEvent__ctor_m1231650089 (MessageEvent_t1491597365 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageEvent__ctor_m1231650089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1298757307(__this, /*hidden argument*/UnityEvent_1__ctor_m1298757307_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::.ctor()
extern "C"  void MessageTypeSubscribers__ctor_m1543468991 (MessageTypeSubscribers_t1684935770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageTypeSubscribers__ctor_m1543468991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_subscriberCount_1(0);
		MessageEvent_t1491597365 * L_0 = (MessageEvent_t1491597365 *)il2cpp_codegen_object_new(MessageEvent_t1491597365_il2cpp_TypeInfo_var);
		MessageEvent__ctor_m1231650089(L_0, /*hidden argument*/NULL);
		__this->set_messageCallback_2(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::get_MessageTypeId()
extern "C"  Guid_t  MessageTypeSubscribers_get_MessageTypeId_m1143155832 (MessageTypeSubscribers_t1684935770 * __this, const RuntimeMethod* method)
{
	Guid_t  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = __this->get_m_messageTypeId_0();
		Guid_t  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Guid__ctor_m2423264394((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Guid_t  L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Object
extern "C" void Object_t631007953_marshal_pinvoke(const Object_t631007953& unmarshaled, Object_t631007953_marshaled_pinvoke& marshaled)
{
	marshaled.___m_CachedPtr_0 = unmarshaled.get_m_CachedPtr_0();
}
extern "C" void Object_t631007953_marshal_pinvoke_back(const Object_t631007953_marshaled_pinvoke& marshaled, Object_t631007953& unmarshaled)
{
	intptr_t unmarshaled_m_CachedPtr_temp_0;
	memset(&unmarshaled_m_CachedPtr_temp_0, 0, sizeof(unmarshaled_m_CachedPtr_temp_0));
	unmarshaled_m_CachedPtr_temp_0 = marshaled.___m_CachedPtr_0;
	unmarshaled.set_m_CachedPtr_0(unmarshaled_m_CachedPtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
extern "C" void Object_t631007953_marshal_pinvoke_cleanup(Object_t631007953_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Object
extern "C" void Object_t631007953_marshal_com(const Object_t631007953& unmarshaled, Object_t631007953_marshaled_com& marshaled)
{
	marshaled.___m_CachedPtr_0 = unmarshaled.get_m_CachedPtr_0();
}
extern "C" void Object_t631007953_marshal_com_back(const Object_t631007953_marshaled_com& marshaled, Object_t631007953& unmarshaled)
{
	intptr_t unmarshaled_m_CachedPtr_temp_0;
	memset(&unmarshaled_m_CachedPtr_temp_0, 0, sizeof(unmarshaled_m_CachedPtr_temp_0));
	unmarshaled_m_CachedPtr_temp_0 = marshaled.___m_CachedPtr_0;
	unmarshaled.set_m_CachedPtr_0(unmarshaled_m_CachedPtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
extern "C" void Object_t631007953_marshal_com_cleanup(Object_t631007953_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Object::.ctor()
extern "C"  void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C"  Object_t631007953 * Object_Internal_CloneSingle_m1021157572 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___data0, const RuntimeMethod* method)
{
	typedef Object_t631007953 * (*Object_Internal_CloneSingle_m1021157572_ftn) (Object_t631007953 *);
	static Object_Internal_CloneSingle_m1021157572_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m1021157572_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	Object_t631007953 * retVal = _il2cpp_icall_func(___data0);
	return retVal;
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t631007953 * Object_Internal_InstantiateSingle_m4074556765 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___data0, Vector3_t3722313464  ___pos1, Quaternion_t2301928331  ___rot2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Internal_InstantiateSingle_m4074556765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Object_t631007953 * V_0 = NULL;
	{
		Object_t631007953 * L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_1 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m243746258(NULL /*static, unused*/, L_0, (&___pos1), (&___rot2), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		Object_t631007953 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  Object_t631007953 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m243746258 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___data0, Vector3_t3722313464 * ___pos1, Quaternion_t2301928331 * ___rot2, const RuntimeMethod* method)
{
	typedef Object_t631007953 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m243746258_ftn) (Object_t631007953 *, Vector3_t3722313464 *, Quaternion_t2301928331 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m243746258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m243746258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	Object_t631007953 * retVal = _il2cpp_icall_func(___data0, ___pos1, ___rot2);
	return retVal;
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C"  void Object_Destroy_m3118546832 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___obj0, float ___t1, const RuntimeMethod* method)
{
	typedef void (*Object_Destroy_m3118546832_ftn) (Object_t631007953 *, float);
	static Object_Destroy_m3118546832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m3118546832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj0, ___t1);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Destroy_m565254235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t631007953 * L_0 = ___obj0;
		float L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Object_set_hideFlags_m1648752846_ftn) (Object_t631007953 *, int32_t);
	static Object_set_hideFlags_m1648752846_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m1648752846_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.String UnityEngine.Object::ToString()
extern "C"  String_t* Object_ToString_m3272709752 (Object_t631007953 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*Object_ToString_m3272709752_ftn) (Object_t631007953 *);
	static Object_ToString_m3272709752_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m3272709752_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C"  int32_t Object_GetHashCode_m1944636947 (Object_t631007953 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Object_GetHashCode_m2705121830(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C"  bool Object_Equals_m4262027856 (Object_t631007953 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Equals_m4262027856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Object_t631007953 * V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = ((Object_t631007953 *)IsInstClass((RuntimeObject*)L_0, Object_t631007953_il2cpp_TypeInfo_var));
		Object_t631007953 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_3 = ___other0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_4 = ___other0;
		if (((Object_t631007953 *)IsInstClass((RuntimeObject*)L_4, Object_t631007953_il2cpp_TypeInfo_var)))
		{
			goto IL_002c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0039;
	}

IL_002c:
	{
		Object_t631007953 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_CompareBaseObjects_m2405226032(NULL /*static, unused*/, __this, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___exists0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_op_Implicit_m3574996620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_t631007953 * L_0 = ___exists0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_CompareBaseObjects_m2405226032(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_CompareBaseObjects_m2405226032 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___lhs0, Object_t631007953 * ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_CompareBaseObjects_m2405226032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Object_t631007953 * L_0 = ___lhs0;
		V_0 = (bool)((((RuntimeObject*)(Object_t631007953 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		Object_t631007953 * L_1 = ___rhs1;
		V_1 = (bool)((((RuntimeObject*)(Object_t631007953 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0055;
	}

IL_001e:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		Object_t631007953 * L_5 = ___lhs0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_IsNativeObjectAlive_m3095908075(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0055;
	}

IL_0033:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		Object_t631007953 * L_8 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_IsNativeObjectAlive_m3095908075(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0055;
	}

IL_0048:
	{
		Object_t631007953 * L_10 = ___lhs0;
		Object_t631007953 * L_11 = ___rhs1;
		bool L_12 = Object_ReferenceEquals_m610702577(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_0055;
	}

IL_0055:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C"  bool Object_IsNativeObjectAlive_m3095908075 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_IsNativeObjectAlive_m3095908075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_t631007953 * L_0 = ___o0;
		intptr_t L_1 = Object_GetCachedPtr_m151292858(L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_1, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C"  intptr_t Object_GetCachedPtr_m151292858 (Object_t631007953 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_CachedPtr_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t631007953 * Object_Instantiate_m2682941528 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___original0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Instantiate_m2682941528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Object_t631007953 * V_0 = NULL;
	{
		Object_t631007953 * L_0 = ___original0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m4237608654(NULL /*static, unused*/, L_0, _stringLiteral2475671027, /*hidden argument*/NULL);
		Object_t631007953 * L_1 = ___original0;
		if (!((ScriptableObject_t2528358522 *)IsInstClass((RuntimeObject*)L_1, ScriptableObject_t2528358522_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral1766417507, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0022:
	{
		Object_t631007953 * L_3 = ___original0;
		Vector3_t3722313464  L_4 = ___position1;
		Quaternion_t2301928331  L_5 = ___rotation2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_6 = Object_Internal_InstantiateSingle_m4074556765(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0030;
	}

IL_0030:
	{
		Object_t631007953 * L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C"  void Object_CheckNullArgument_m4237608654 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_CheckNullArgument_m4237608654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___arg0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___message1;
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___x0, Object_t631007953 * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_op_Equality_m1810815630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_t631007953 * L_0 = ___x0;
		Object_t631007953 * L_1 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_CompareBaseObjects_m2405226032(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___x0, Object_t631007953 * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_op_Inequality_m4071470834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object_t631007953 * L_0 = ___x0;
		Object_t631007953 * L_1 = ___y1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_CompareBaseObjects_m2405226032(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Object::.cctor()
extern "C"  void Object__cctor_m2398773973 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object__cctor_m2398773973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Object_t631007953_StaticFields*)il2cpp_codegen_static_fields_for(Object_t631007953_il2cpp_TypeInfo_var))->set_OffsetOfInstanceIDInCPlusPlusObject_1((-1));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C"  void Playable__ctor_m3175303195 (Playable_t459825607 * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	{
		PlayableHandle_t1095853803  L_0 = ___handle0;
		__this->set_m_Handle_0(L_0);
		return;
	}
}
extern "C"  void Playable__ctor_m3175303195_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t1095853803  ___handle0, const RuntimeMethod* method)
{
	Playable_t459825607 * _thisAdjusted = reinterpret_cast<Playable_t459825607 *>(__this + 1);
	Playable__ctor_m3175303195(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
extern "C"  Playable_t459825607  Playable_get_Null_m3556999077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playable_get_Null_m3556999077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t459825607  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Playable_t459825607_il2cpp_TypeInfo_var);
		Playable_t459825607  L_0 = ((Playable_t459825607_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t459825607_il2cpp_TypeInfo_var))->get_m_NullPlayable_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Playable_t459825607  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
extern "C"  PlayableHandle_t1095853803  Playable_GetHandle_m98909670 (Playable_t459825607 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  Playable_GetHandle_m98909670_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Playable_t459825607 * _thisAdjusted = reinterpret_cast<Playable_t459825607 *>(__this + 1);
	return Playable_GetHandle_m98909670(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
extern "C"  bool Playable_Equals_m328753404 (Playable_t459825607 * __this, Playable_t459825607  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = Playable_GetHandle_m98909670(__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = Playable_GetHandle_m98909670((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool Playable_Equals_m328753404_AdjustorThunk (RuntimeObject * __this, Playable_t459825607  ___other0, const RuntimeMethod* method)
{
	Playable_t459825607 * _thisAdjusted = reinterpret_cast<Playable_t459825607 *>(__this + 1);
	return Playable_Equals_m328753404(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Playables.Playable::.cctor()
extern "C"  void Playable__cctor_m464525928 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playable__cctor_m464525928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t1095853803  L_0 = PlayableHandle_get_Null_m218234861(NULL /*static, unused*/, /*hidden argument*/NULL);
		Playable_t459825607  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Playable__ctor_m3175303195((&L_1), L_0, /*hidden argument*/NULL);
		((Playable_t459825607_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t459825607_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
extern "C"  void PlayableAsset__ctor_m2395156306 (PlayableAsset_t3219022681 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Double UnityEngine.Playables.PlayableAsset::get_duration()
extern "C"  double PlayableAsset_get_duration_m3549083384 (PlayableAsset_t3219022681 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayableAsset_get_duration_m3549083384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableBinding_t354260709_il2cpp_TypeInfo_var);
		double L_0 = ((PlayableBinding_t354260709_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_t354260709_il2cpp_TypeInfo_var))->get_DefaultDuration_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_CreatePlayable(UnityEngine.Playables.PlayableAsset,UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.IntPtr)
extern "C"  void PlayableAsset_Internal_CreatePlayable_m2550417712 (RuntimeObject * __this /* static, unused */, PlayableAsset_t3219022681 * ___asset0, PlayableGraph_t3515989261  ___graph1, GameObject_t1113636619 * ___go2, intptr_t ___ptr3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayableAsset_Internal_CreatePlayable_m2550417712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t459825607  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Playable_t459825607 * V_1 = NULL;
	{
		PlayableAsset_t3219022681 * L_0 = ___asset0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Playable_t459825607_il2cpp_TypeInfo_var);
		Playable_t459825607  L_2 = Playable_get_Null_m3556999077(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0021;
	}

IL_0018:
	{
		PlayableAsset_t3219022681 * L_3 = ___asset0;
		PlayableGraph_t3515989261  L_4 = ___graph1;
		GameObject_t1113636619 * L_5 = ___go2;
		Playable_t459825607  L_6 = VirtFuncInvoker2< Playable_t459825607 , PlayableGraph_t3515989261 , GameObject_t1113636619 * >::Invoke(4 /* UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject) */, L_3, L_4, L_5);
		V_0 = L_6;
	}

IL_0021:
	{
		void* L_7 = IntPtr_ToPointer_m4157623054((&___ptr3), /*hidden argument*/NULL);
		V_1 = (Playable_t459825607 *)L_7;
		Playable_t459825607 * L_8 = V_1;
		Playable_t459825607  L_9 = V_0;
		*(Playable_t459825607 *)L_8 = L_9;
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_GetPlayableAssetDuration(UnityEngine.Playables.PlayableAsset,System.IntPtr)
extern "C"  void PlayableAsset_Internal_GetPlayableAssetDuration_m2090502339 (RuntimeObject * __this /* static, unused */, PlayableAsset_t3219022681 * ___asset0, intptr_t ___ptrToDouble1, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double* V_1 = NULL;
	{
		PlayableAsset_t3219022681 * L_0 = ___asset0;
		double L_1 = VirtFuncInvoker0< double >::Invoke(5 /* System.Double UnityEngine.Playables.PlayableAsset::get_duration() */, L_0);
		V_0 = L_1;
		void* L_2 = IntPtr_ToPointer_m4157623054((&___ptrToDouble1), /*hidden argument*/NULL);
		V_1 = (double*)L_2;
		double* L_3 = V_1;
		double L_4 = V_0;
		*((double*)(L_3)) = (double)L_4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
extern "C"  void PlayableBehaviour__ctor_m3891915003 (PlayableBehaviour_t4203540982 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.Playables.PlayableBehaviour::Clone()
extern "C"  RuntimeObject * PlayableBehaviour_Clone_m2851991741 (PlayableBehaviour_t4203540982 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = Object_MemberwiseClone_m1474068832(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
extern "C" void PlayableBinding_t354260709_marshal_pinvoke(const PlayableBinding_t354260709& unmarshaled, PlayableBinding_t354260709_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsourceBindingTypeU3Ek__BackingField_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<sourceBindingType>k__BackingField' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsourceBindingTypeU3Ek__BackingField_5Exception);
}
extern "C" void PlayableBinding_t354260709_marshal_pinvoke_back(const PlayableBinding_t354260709_marshaled_pinvoke& marshaled, PlayableBinding_t354260709& unmarshaled)
{
	Exception_t* ___U3CsourceBindingTypeU3Ek__BackingField_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<sourceBindingType>k__BackingField' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsourceBindingTypeU3Ek__BackingField_5Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
extern "C" void PlayableBinding_t354260709_marshal_pinvoke_cleanup(PlayableBinding_t354260709_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
extern "C" void PlayableBinding_t354260709_marshal_com(const PlayableBinding_t354260709& unmarshaled, PlayableBinding_t354260709_marshaled_com& marshaled)
{
	Exception_t* ___U3CsourceBindingTypeU3Ek__BackingField_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<sourceBindingType>k__BackingField' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsourceBindingTypeU3Ek__BackingField_5Exception);
}
extern "C" void PlayableBinding_t354260709_marshal_com_back(const PlayableBinding_t354260709_marshaled_com& marshaled, PlayableBinding_t354260709& unmarshaled)
{
	Exception_t* ___U3CsourceBindingTypeU3Ek__BackingField_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<sourceBindingType>k__BackingField' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsourceBindingTypeU3Ek__BackingField_5Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
extern "C" void PlayableBinding_t354260709_marshal_com_cleanup(PlayableBinding_t354260709_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Playables.PlayableBinding::.cctor()
extern "C"  void PlayableBinding__cctor_m2159960528 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayableBinding__cctor_m2159960528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PlayableBinding_t354260709_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_t354260709_il2cpp_TypeInfo_var))->set_None_0(((PlayableBindingU5BU5D_t829358056*)SZArrayNew(PlayableBindingU5BU5D_t829358056_il2cpp_TypeInfo_var, (uint32_t)0)));
		((PlayableBinding_t354260709_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_t354260709_il2cpp_TypeInfo_var))->set_DefaultDuration_1((std::numeric_limits<double>::infinity()));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
extern "C"  PlayableHandle_t1095853803  PlayableHandle_get_Null_m218234861 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PlayableHandle_t1095853803  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlayableHandle_t1095853803 ));
		(&V_0)->set_m_Version_1(((int32_t)10));
		PlayableHandle_t1095853803  L_0 = V_0;
		V_1 = L_0;
		goto IL_0019;
	}

IL_0019:
	{
		PlayableHandle_t1095853803  L_1 = V_1;
		return L_1;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C"  bool PlayableHandle_op_Equality_m3344837515 (RuntimeObject * __this /* static, unused */, PlayableHandle_t1095853803  ___x0, PlayableHandle_t1095853803  ___y1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = ___x0;
		PlayableHandle_t1095853803  L_1 = ___y1;
		bool L_2 = PlayableHandle_CompareVersion_m2748798983(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
extern "C"  bool PlayableHandle_Equals_m1666612586 (PlayableHandle_t1095853803 * __this, RuntimeObject * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayableHandle_Equals_m1666612586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___p0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, PlayableHandle_t1095853803_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_002a;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___p0;
		bool L_2 = PlayableHandle_CompareVersion_m2748798983(NULL /*static, unused*/, (*(PlayableHandle_t1095853803 *)__this), ((*(PlayableHandle_t1095853803 *)((PlayableHandle_t1095853803 *)UnBox(L_1, PlayableHandle_t1095853803_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool PlayableHandle_Equals_m1666612586_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___p0, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803 * _thisAdjusted = reinterpret_cast<PlayableHandle_t1095853803 *>(__this + 1);
	return PlayableHandle_Equals_m1666612586(_thisAdjusted, ___p0, method);
}
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
extern "C"  int32_t PlayableHandle_GetHashCode_m1297878485 (PlayableHandle_t1095853803 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = __this->get_address_of_m_Handle_0();
		int32_t L_1 = IntPtr_GetHashCode_m3588219647(L_0, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of_m_Version_1();
		int32_t L_3 = Int32_GetHashCode_m1876651407(L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)L_3));
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  int32_t PlayableHandle_GetHashCode_m1297878485_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableHandle_t1095853803 * _thisAdjusted = reinterpret_cast<PlayableHandle_t1095853803 *>(__this + 1);
	return PlayableHandle_GetHashCode_m1297878485(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C"  bool PlayableHandle_CompareVersion_m2748798983 (RuntimeObject * __this /* static, unused */, PlayableHandle_t1095853803  ___lhs0, PlayableHandle_t1095853803  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = (&___lhs0)->get_m_Handle_0();
		intptr_t L_1 = (&___rhs1)->get_m_Handle_0();
		bool L_2 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = (&___lhs0)->get_m_Version_1();
		int32_t L_4 = (&___rhs1)->get_m_Version_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
extern "C"  void PlayableOutput__ctor_m3330119218 (PlayableOutput_t3179894105 * __this, PlayableOutputHandle_t4208053793  ___handle0, const RuntimeMethod* method)
{
	{
		PlayableOutputHandle_t4208053793  L_0 = ___handle0;
		__this->set_m_Handle_0(L_0);
		return;
	}
}
extern "C"  void PlayableOutput__ctor_m3330119218_AdjustorThunk (RuntimeObject * __this, PlayableOutputHandle_t4208053793  ___handle0, const RuntimeMethod* method)
{
	PlayableOutput_t3179894105 * _thisAdjusted = reinterpret_cast<PlayableOutput_t3179894105 *>(__this + 1);
	PlayableOutput__ctor_m3330119218(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
extern "C"  PlayableOutputHandle_t4208053793  PlayableOutput_GetHandle_m777137769 (PlayableOutput_t3179894105 * __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_t4208053793  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableOutputHandle_t4208053793  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableOutputHandle_t4208053793  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableOutputHandle_t4208053793  PlayableOutput_GetHandle_m777137769_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableOutput_t3179894105 * _thisAdjusted = reinterpret_cast<PlayableOutput_t3179894105 *>(__this + 1);
	return PlayableOutput_GetHandle_m777137769(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
extern "C"  bool PlayableOutput_Equals_m3146274716 (PlayableOutput_t3179894105 * __this, PlayableOutput_t3179894105  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableOutputHandle_t4208053793  L_0 = PlayableOutput_GetHandle_m777137769(__this, /*hidden argument*/NULL);
		PlayableOutputHandle_t4208053793  L_1 = PlayableOutput_GetHandle_m777137769((&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableOutputHandle_op_Equality_m388301694(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool PlayableOutput_Equals_m3146274716_AdjustorThunk (RuntimeObject * __this, PlayableOutput_t3179894105  ___other0, const RuntimeMethod* method)
{
	PlayableOutput_t3179894105 * _thisAdjusted = reinterpret_cast<PlayableOutput_t3179894105 *>(__this + 1);
	return PlayableOutput_Equals_m3146274716(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Playables.PlayableOutput::.cctor()
extern "C"  void PlayableOutput__cctor_m2348686299 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayableOutput__cctor_m2348686299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableOutputHandle_t4208053793  L_0 = PlayableOutputHandle_get_Null_m1200584339(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlayableOutput_t3179894105  L_1;
		memset(&L_1, 0, sizeof(L_1));
		PlayableOutput__ctor_m3330119218((&L_1), L_0, /*hidden argument*/NULL);
		((PlayableOutput_t3179894105_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutput_t3179894105_il2cpp_TypeInfo_var))->set_m_NullPlayableOutput_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
extern "C"  PlayableOutputHandle_t4208053793  PlayableOutputHandle_get_Null_m1200584339 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	PlayableOutputHandle_t4208053793  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PlayableOutputHandle_t4208053793  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlayableOutputHandle_t4208053793 ));
		(&V_0)->set_m_Version_1(((int32_t)2147483647LL));
		PlayableOutputHandle_t4208053793  L_0 = V_0;
		V_1 = L_0;
		goto IL_001c;
	}

IL_001c:
	{
		PlayableOutputHandle_t4208053793  L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
extern "C"  int32_t PlayableOutputHandle_GetHashCode_m2803245663 (PlayableOutputHandle_t4208053793 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = __this->get_address_of_m_Handle_0();
		int32_t L_1 = IntPtr_GetHashCode_m3588219647(L_0, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of_m_Version_1();
		int32_t L_3 = Int32_GetHashCode_m1876651407(L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)L_3));
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  int32_t PlayableOutputHandle_GetHashCode_m2803245663_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_t4208053793 * _thisAdjusted = reinterpret_cast<PlayableOutputHandle_t4208053793 *>(__this + 1);
	return PlayableOutputHandle_GetHashCode_m2803245663(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
extern "C"  bool PlayableOutputHandle_op_Equality_m388301694 (RuntimeObject * __this /* static, unused */, PlayableOutputHandle_t4208053793  ___lhs0, PlayableOutputHandle_t4208053793  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableOutputHandle_t4208053793  L_0 = ___lhs0;
		PlayableOutputHandle_t4208053793  L_1 = ___rhs1;
		bool L_2 = PlayableOutputHandle_CompareVersion_m841260813(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
extern "C"  bool PlayableOutputHandle_Equals_m334596297 (PlayableOutputHandle_t4208053793 * __this, RuntimeObject * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayableOutputHandle_Equals_m334596297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___p0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, PlayableOutputHandle_t4208053793_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject * L_1 = ___p0;
		bool L_2 = PlayableOutputHandle_CompareVersion_m841260813(NULL /*static, unused*/, (*(PlayableOutputHandle_t4208053793 *)__this), ((*(PlayableOutputHandle_t4208053793 *)((PlayableOutputHandle_t4208053793 *)UnBox(L_1, PlayableOutputHandle_t4208053793_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool PlayableOutputHandle_Equals_m334596297_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___p0, const RuntimeMethod* method)
{
	PlayableOutputHandle_t4208053793 * _thisAdjusted = reinterpret_cast<PlayableOutputHandle_t4208053793 *>(__this + 1);
	return PlayableOutputHandle_Equals_m334596297(_thisAdjusted, ___p0, method);
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
extern "C"  bool PlayableOutputHandle_CompareVersion_m841260813 (RuntimeObject * __this /* static, unused */, PlayableOutputHandle_t4208053793  ___lhs0, PlayableOutputHandle_t4208053793  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = (&___lhs0)->get_m_Handle_0();
		intptr_t L_1 = (&___rhs1)->get_m_Handle_0();
		bool L_2 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = (&___lhs0)->get_m_Version_1();
		int32_t L_4 = (&___rhs1)->get_m_Version_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.PropertyName::.ctor(System.String)
extern "C"  void PropertyName__ctor_m1858502781 (PropertyName_t3749835189 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		PropertyName_t3749835189  L_1 = PropertyNameUtils_PropertyNameFromString_m3719796130(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		PropertyName__ctor_m3511806171(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void PropertyName__ctor_m1858502781_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, const RuntimeMethod* method)
{
	PropertyName_t3749835189 * _thisAdjusted = reinterpret_cast<PropertyName_t3749835189 *>(__this + 1);
	PropertyName__ctor_m1858502781(_thisAdjusted, ___name0, method);
}
// System.Void UnityEngine.PropertyName::.ctor(UnityEngine.PropertyName)
extern "C"  void PropertyName__ctor_m3511806171 (PropertyName_t3749835189 * __this, PropertyName_t3749835189  ___other0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (&___other0)->get_id_0();
		__this->set_id_0(L_0);
		return;
	}
}
extern "C"  void PropertyName__ctor_m3511806171_AdjustorThunk (RuntimeObject * __this, PropertyName_t3749835189  ___other0, const RuntimeMethod* method)
{
	PropertyName_t3749835189 * _thisAdjusted = reinterpret_cast<PropertyName_t3749835189 *>(__this + 1);
	PropertyName__ctor_m3511806171(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.PropertyName::.ctor(System.Int32)
extern "C"  void PropertyName__ctor_m912660408 (PropertyName_t3749835189 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		__this->set_id_0(L_0);
		return;
	}
}
extern "C"  void PropertyName__ctor_m912660408_AdjustorThunk (RuntimeObject * __this, int32_t ___id0, const RuntimeMethod* method)
{
	PropertyName_t3749835189 * _thisAdjusted = reinterpret_cast<PropertyName_t3749835189 *>(__this + 1);
	PropertyName__ctor_m912660408(_thisAdjusted, ___id0, method);
}
// System.Boolean UnityEngine.PropertyName::op_Equality(UnityEngine.PropertyName,UnityEngine.PropertyName)
extern "C"  bool PropertyName_op_Equality_m2761233272 (RuntimeObject * __this /* static, unused */, PropertyName_t3749835189  ___lhs0, PropertyName_t3749835189  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = (&___lhs0)->get_id_0();
		int32_t L_1 = (&___rhs1)->get_id_0();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0017;
	}

IL_0017:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.PropertyName::op_Inequality(UnityEngine.PropertyName,UnityEngine.PropertyName)
extern "C"  bool PropertyName_op_Inequality_m3504767831 (RuntimeObject * __this /* static, unused */, PropertyName_t3749835189  ___lhs0, PropertyName_t3749835189  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = (&___lhs0)->get_id_0();
		int32_t L_1 = (&___rhs1)->get_id_0();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_001a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.PropertyName::GetHashCode()
extern "C"  int32_t PropertyName_GetHashCode_m3570549176 (PropertyName_t3749835189 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_id_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t PropertyName_GetHashCode_m3570549176_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PropertyName_t3749835189 * _thisAdjusted = reinterpret_cast<PropertyName_t3749835189 *>(__this + 1);
	return PropertyName_GetHashCode_m3570549176(_thisAdjusted, method);
}
// System.Boolean UnityEngine.PropertyName::Equals(System.Object)
extern "C"  bool PropertyName_Equals_m2608649819 (PropertyName_t3749835189 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyName_Equals_m2608649819_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, PropertyName_t3749835189_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = PropertyName_op_Equality_m2761233272(NULL /*static, unused*/, (*(PropertyName_t3749835189 *)__this), ((*(PropertyName_t3749835189 *)((PropertyName_t3749835189 *)UnBox(L_1, PropertyName_t3749835189_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool PropertyName_Equals_m2608649819_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	PropertyName_t3749835189 * _thisAdjusted = reinterpret_cast<PropertyName_t3749835189 *>(__this + 1);
	return PropertyName_Equals_m2608649819(_thisAdjusted, ___other0, method);
}
// UnityEngine.PropertyName UnityEngine.PropertyName::op_Implicit(System.String)
extern "C"  PropertyName_t3749835189  PropertyName_op_Implicit_m1633828199 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	PropertyName_t3749835189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___name0;
		PropertyName_t3749835189  L_1;
		memset(&L_1, 0, sizeof(L_1));
		PropertyName__ctor_m1858502781((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		PropertyName_t3749835189  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.PropertyName UnityEngine.PropertyName::op_Implicit(System.Int32)
extern "C"  PropertyName_t3749835189  PropertyName_op_Implicit_m114733813 (RuntimeObject * __this /* static, unused */, int32_t ___id0, const RuntimeMethod* method)
{
	PropertyName_t3749835189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___id0;
		PropertyName_t3749835189  L_1;
		memset(&L_1, 0, sizeof(L_1));
		PropertyName__ctor_m912660408((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		PropertyName_t3749835189  L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.PropertyName::ToString()
extern "C"  String_t* PropertyName_ToString_m3328159423 (PropertyName_t3749835189 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyName_ToString_m3328159423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = __this->get_id_0();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3750091427, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
extern "C"  String_t* PropertyName_ToString_m3328159423_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PropertyName_t3749835189 * _thisAdjusted = reinterpret_cast<PropertyName_t3749835189 *>(__this + 1);
	return PropertyName_ToString_m3328159423(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.PropertyName UnityEngine.PropertyNameUtils::PropertyNameFromString(System.String)
extern "C"  PropertyName_t3749835189  PropertyNameUtils_PropertyNameFromString_m3719796130 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	PropertyName_t3749835189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___name0;
		PropertyNameUtils_PropertyNameFromString_Injected_m1259736140(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		PropertyName_t3749835189  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.PropertyNameUtils::PropertyNameFromString_Injected(System.String,UnityEngine.PropertyName&)
extern "C"  void PropertyNameUtils_PropertyNameFromString_Injected_m1259736140 (RuntimeObject * __this /* static, unused */, String_t* ___name0, PropertyName_t3749835189 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*PropertyNameUtils_PropertyNameFromString_Injected_m1259736140_ftn) (String_t*, PropertyName_t3749835189 *);
	static PropertyNameUtils_PropertyNameFromString_Injected_m1259736140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyNameUtils_PropertyNameFromString_Injected_m1259736140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PropertyNameUtils::PropertyNameFromString_Injected(System.String,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___name0, ___ret1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m435141806 (Quaternion_t2301928331 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		float L_3 = ___w3;
		__this->set_w_3(L_3);
		return;
	}
}
extern "C"  void Quaternion__ctor_m435141806_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	Quaternion_t2301928331 * _thisAdjusted = reinterpret_cast<Quaternion_t2301928331 *>(__this + 1);
	Quaternion__ctor_m435141806(_thisAdjusted, ___x0, ___y1, ___z2, ___w3, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quaternion_get_identity_m3722672781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = ((Quaternion_t2301928331_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_t2301928331_il2cpp_TypeInfo_var))->get_identityQuaternion_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Quaternion_t2301928331  L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m2636680144 (Quaternion_t2301928331 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		int32_t L_1 = Single_GetHashCode_m1558506138(L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_1();
		int32_t L_3 = Single_GetHashCode_m1558506138(L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_2();
		int32_t L_5 = Single_GetHashCode_m1558506138(L_4, /*hidden argument*/NULL);
		float* L_6 = __this->get_address_of_w_3();
		int32_t L_7 = Single_GetHashCode_m1558506138(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
		goto IL_0054;
	}

IL_0054:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
extern "C"  int32_t Quaternion_GetHashCode_m2636680144_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331 * _thisAdjusted = reinterpret_cast<Quaternion_t2301928331 *>(__this + 1);
	return Quaternion_GetHashCode_m2636680144(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m1863659319 (Quaternion_t2301928331 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quaternion_Equals_m1863659319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B7_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Quaternion_t2301928331_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_007a;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		V_1 = ((*(Quaternion_t2301928331 *)((Quaternion_t2301928331 *)UnBox(L_1, Quaternion_t2301928331_il2cpp_TypeInfo_var))));
		float* L_2 = __this->get_address_of_x_0();
		float L_3 = (&V_1)->get_x_0();
		bool L_4 = Single_Equals_m1601893879(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0073;
		}
	}
	{
		float* L_5 = __this->get_address_of_y_1();
		float L_6 = (&V_1)->get_y_1();
		bool L_7 = Single_Equals_m1601893879(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		float* L_8 = __this->get_address_of_z_2();
		float L_9 = (&V_1)->get_z_2();
		bool L_10 = Single_Equals_m1601893879(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		float* L_11 = __this->get_address_of_w_3();
		float L_12 = (&V_1)->get_w_3();
		bool L_13 = Single_Equals_m1601893879(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_0074;
	}

IL_0073:
	{
		G_B7_0 = 0;
	}

IL_0074:
	{
		V_0 = (bool)G_B7_0;
		goto IL_007a;
	}

IL_007a:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
extern "C"  bool Quaternion_Equals_m1863659319_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Quaternion_t2301928331 * _thisAdjusted = reinterpret_cast<Quaternion_t2301928331 *>(__this + 1);
	return Quaternion_Equals_m1863659319(_thisAdjusted, ___other0, method);
}
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m2203056442 (Quaternion_t2301928331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quaternion_ToString_m2203056442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		float L_1 = __this->get_x_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		float L_5 = __this->get_y_1();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		float L_9 = __this->get_z_2();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		float L_13 = __this->get_w_3();
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		String_t* L_16 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral3651359435, L_12, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_004f;
	}

IL_004f:
	{
		String_t* L_17 = V_0;
		return L_17;
	}
}
extern "C"  String_t* Quaternion_ToString_m2203056442_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331 * _thisAdjusted = reinterpret_cast<Quaternion_t2301928331 *>(__this + 1);
	return Quaternion_ToString_m2203056442(_thisAdjusted, method);
}
// System.Void UnityEngine.Quaternion::.cctor()
extern "C"  void Quaternion__cctor_m2965965177 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quaternion__cctor_m2965965177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Quaternion_t2301928331  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Quaternion__ctor_m435141806((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Quaternion_t2301928331_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_t2301928331_il2cpp_TypeInfo_var))->set_identityQuaternion_4(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___min0;
		int32_t L_1 = ___max1;
		int32_t L_2 = Random_RandomRangeInt_m2165800604(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C"  int32_t Random_RandomRangeInt_m2165800604 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	typedef int32_t (*Random_RandomRangeInt_m2165800604_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m2165800604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m2165800604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___min0, ___max1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t3722313464  Ray_get_direction_m761601601 (Ray_t3785851493 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_Direction_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  Ray_get_direction_m761601601_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Ray_t3785851493 * _thisAdjusted = reinterpret_cast<Ray_t3785851493 *>(__this + 1);
	return Ray_get_direction_m761601601(_thisAdjusted, method);
}
// System.String UnityEngine.Ray::ToString()
extern "C"  String_t* Ray_ToString_m1732834890 (Ray_t3785851493 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ray_ToString_m1732834890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		Vector3_t3722313464  L_1 = __this->get_m_Origin_0();
		Vector3_t3722313464  L_2 = L_1;
		RuntimeObject * L_3 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		Vector3_t3722313464  L_5 = __this->get_m_Direction_1();
		Vector3_t3722313464  L_6 = L_5;
		RuntimeObject * L_7 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		String_t* L_8 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral2872073641, L_4, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0033;
	}

IL_0033:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
extern "C"  String_t* Ray_ToString_m1732834890_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Ray_t3785851493 * _thisAdjusted = reinterpret_cast<Ray_t3785851493 *>(__this + 1);
	return Ray_ToString_m1732834890(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Rect::get_x()
extern "C"  float Rect_get_x_m3839990490 (Rect_t2360479859 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_XMin_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float Rect_get_x_m3839990490_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_get_x_m3839990490(_thisAdjusted, method);
}
// System.Single UnityEngine.Rect::get_y()
extern "C"  float Rect_get_y_m1501338330 (Rect_t2360479859 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_YMin_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float Rect_get_y_m1501338330_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_get_y_m1501338330(_thisAdjusted, method);
}
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Width_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float Rect_get_width_m3421484486_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_get_width_m3421484486(_thisAdjusted, method);
}
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Height_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float Rect_get_height_m1358425599_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_get_height_m1358425599(_thisAdjusted, method);
}
// System.Single UnityEngine.Rect::get_xMin()
extern "C"  float Rect_get_xMin_m581135837 (Rect_t2360479859 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_XMin_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float Rect_get_xMin_m581135837_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_get_xMin_m581135837(_thisAdjusted, method);
}
// System.Single UnityEngine.Rect::get_yMin()
extern "C"  float Rect_get_yMin_m2601414109 (Rect_t2360479859 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_YMin_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float Rect_get_yMin_m2601414109_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_get_yMin_m2601414109(_thisAdjusted, method);
}
// System.Single UnityEngine.Rect::get_xMax()
extern "C"  float Rect_get_xMax_m3018144503 (Rect_t2360479859 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Width_2();
		float L_1 = __this->get_m_XMin_0();
		V_0 = ((float)il2cpp_codegen_add((float)L_0, (float)L_1));
		goto IL_0014;
	}

IL_0014:
	{
		float L_2 = V_0;
		return L_2;
	}
}
extern "C"  float Rect_get_xMax_m3018144503_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_get_xMax_m3018144503(_thisAdjusted, method);
}
// System.Single UnityEngine.Rect::get_yMax()
extern "C"  float Rect_get_yMax_m743455479 (Rect_t2360479859 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Height_3();
		float L_1 = __this->get_m_YMin_1();
		V_0 = ((float)il2cpp_codegen_add((float)L_0, (float)L_1));
		goto IL_0014;
	}

IL_0014:
	{
		float L_2 = V_0;
		return L_2;
	}
}
extern "C"  float Rect_get_yMax_m743455479_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_get_yMax_m743455479(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern "C"  bool Rect_Contains_m1232228501 (Rect_t2360479859 * __this, Vector3_t3722313464  ___point0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = (&___point0)->get_x_0();
		float L_1 = Rect_get_xMin_m581135837(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0048;
		}
	}
	{
		float L_2 = (&___point0)->get_x_0();
		float L_3 = Rect_get_xMax_m3018144503(__this, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0048;
		}
	}
	{
		float L_4 = (&___point0)->get_y_1();
		float L_5 = Rect_get_yMin_m2601414109(__this, /*hidden argument*/NULL);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0048;
		}
	}
	{
		float L_6 = (&___point0)->get_y_1();
		float L_7 = Rect_get_yMax_m743455479(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B5_0 = 0;
	}

IL_0049:
	{
		V_0 = (bool)G_B5_0;
		goto IL_004f;
	}

IL_004f:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
extern "C"  bool Rect_Contains_m1232228501_AdjustorThunk (RuntimeObject * __this, Vector3_t3722313464  ___point0, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_Contains_m1232228501(_thisAdjusted, ___point0, method);
}
// System.Int32 UnityEngine.Rect::GetHashCode()
extern "C"  int32_t Rect_GetHashCode_m1816164252 (Rect_t2360479859 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	{
		float L_0 = Rect_get_x_m3839990490(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m1558506138((&V_0), /*hidden argument*/NULL);
		float L_2 = Rect_get_width_m3421484486(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Single_GetHashCode_m1558506138((&V_1), /*hidden argument*/NULL);
		float L_4 = Rect_get_y_m1501338330(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Single_GetHashCode_m1558506138((&V_2), /*hidden argument*/NULL);
		float L_6 = Rect_get_height_m1358425599(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Single_GetHashCode_m1558506138((&V_3), /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
		goto IL_0061;
	}

IL_0061:
	{
		int32_t L_8 = V_4;
		return L_8;
	}
}
extern "C"  int32_t Rect_GetHashCode_m1816164252_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_GetHashCode_m1816164252(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern "C"  bool Rect_Equals_m4169342960 (Rect_t2360479859 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rect_Equals_m4169342960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Rect_t2360479859_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0088;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		V_1 = ((*(Rect_t2360479859 *)((Rect_t2360479859 *)UnBox(L_1, Rect_t2360479859_il2cpp_TypeInfo_var))));
		float L_2 = Rect_get_x_m3839990490(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = Rect_get_x_m3839990490((&V_1), /*hidden argument*/NULL);
		bool L_4 = Single_Equals_m1601893879((&V_2), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0081;
		}
	}
	{
		float L_5 = Rect_get_y_m1501338330(__this, /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = Rect_get_y_m1501338330((&V_1), /*hidden argument*/NULL);
		bool L_7 = Single_Equals_m1601893879((&V_3), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0081;
		}
	}
	{
		float L_8 = Rect_get_width_m3421484486(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = Rect_get_width_m3421484486((&V_1), /*hidden argument*/NULL);
		bool L_10 = Single_Equals_m1601893879((&V_4), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0081;
		}
	}
	{
		float L_11 = Rect_get_height_m1358425599(__this, /*hidden argument*/NULL);
		V_5 = L_11;
		float L_12 = Rect_get_height_m1358425599((&V_1), /*hidden argument*/NULL);
		bool L_13 = Single_Equals_m1601893879((&V_5), L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_0082;
	}

IL_0081:
	{
		G_B7_0 = 0;
	}

IL_0082:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0088;
	}

IL_0088:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
extern "C"  bool Rect_Equals_m4169342960_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_Equals_m4169342960(_thisAdjusted, ___other0, method);
}
// System.String UnityEngine.Rect::ToString()
extern "C"  String_t* Rect_ToString_m447614148 (Rect_t2360479859 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rect_ToString_m447614148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		float L_1 = Rect_get_x_m3839990490(__this, /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		float L_5 = Rect_get_y_m1501338330(__this, /*hidden argument*/NULL);
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		float L_9 = Rect_get_width_m3421484486(__this, /*hidden argument*/NULL);
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		float L_13 = Rect_get_height_m1358425599(__this, /*hidden argument*/NULL);
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		String_t* L_16 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral736029419, L_12, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_004f;
	}

IL_004f:
	{
		String_t* L_17 = V_0;
		return L_17;
	}
}
extern "C"  String_t* Rect_ToString_m447614148_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_t2360479859 * _thisAdjusted = reinterpret_cast<Rect_t2360479859 *>(__this + 1);
	return Rect_ToString_m447614148(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RectTransform::SendReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C"  void RectTransform_SendReapplyDrivenProperties_m187867097 (RuntimeObject * __this /* static, unused */, RectTransform_t3704657025 * ___driven0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectTransform_SendReapplyDrivenProperties_m187867097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReapplyDrivenProperties_t1258266594 * L_0 = ((RectTransform_t3704657025_StaticFields*)il2cpp_codegen_static_fields_for(RectTransform_t3704657025_il2cpp_TypeInfo_var))->get_reapplyDrivenProperties_2();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ReapplyDrivenProperties_t1258266594 * L_1 = ((RectTransform_t3704657025_StaticFields*)il2cpp_codegen_static_fields_for(RectTransform_t3704657025_il2cpp_TypeInfo_var))->get_reapplyDrivenProperties_2();
		RectTransform_t3704657025 * L_2 = ___driven0;
		ReapplyDrivenProperties_Invoke_m1151937880(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
extern "C"  void ReapplyDrivenProperties__ctor_m836366652 (ReapplyDrivenProperties_t1258266594 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
extern "C"  void ReapplyDrivenProperties_Invoke_m1151937880 (ReapplyDrivenProperties_t1258266594 * __this, RectTransform_t3704657025 * ___driven0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ReapplyDrivenProperties_Invoke_m1151937880((ReapplyDrivenProperties_t1258266594 *)__this->get_prev_9(), ___driven0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, RectTransform_t3704657025 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___driven0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, RectTransform_t3704657025 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___driven0, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, RectTransform_t3704657025 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___driven0, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (RectTransform_t3704657025 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___driven0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ReapplyDrivenProperties_BeginInvoke_m4260606555 (ReapplyDrivenProperties_t1258266594 * __this, RectTransform_t3704657025 * ___driven0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___driven0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
extern "C"  void ReapplyDrivenProperties_EndInvoke_m700307436 (ReapplyDrivenProperties_t1258266594 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RenderTexture::.ctor()
extern "C"  void RenderTexture__ctor_m3368882316 (RenderTexture_t2108887433 * __this, const RuntimeMethod* method)
{
	{
		Texture__ctor_m3554519797(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern "C"  void RequireComponent__ctor_m886241599 (RequireComponent_t3490506609 * __this, Type_t * ___requiredComponent0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___requiredComponent0;
		__this->set_m_Type0_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ResourceRequest
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke(const ResourceRequest_t3109103591& unmarshaled, ResourceRequest_t3109103591_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'ResourceRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception);
}
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_back(const ResourceRequest_t3109103591_marshaled_pinvoke& marshaled, ResourceRequest_t3109103591& unmarshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'ResourceRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceRequest
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_cleanup(ResourceRequest_t3109103591_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceRequest
extern "C" void ResourceRequest_t3109103591_marshal_com(const ResourceRequest_t3109103591& unmarshaled, ResourceRequest_t3109103591_marshaled_com& marshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'ResourceRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception);
}
extern "C" void ResourceRequest_t3109103591_marshal_com_back(const ResourceRequest_t3109103591_marshaled_com& marshaled, ResourceRequest_t3109103591& unmarshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'ResourceRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceRequest
extern "C" void ResourceRequest_t3109103591_marshal_com_cleanup(ResourceRequest_t3109103591_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C"  Object_t631007953 * Resources_Load_m3880010804 (RuntimeObject * __this /* static, unused */, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Resources_Load_m3880010804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Object_t631007953 * V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Object_t631007953_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Object_t631007953 * L_3 = Resources_Load_m3480190876(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		Object_t631007953 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C"  Object_t631007953 * Resources_Load_m3480190876 (RuntimeObject * __this /* static, unused */, String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method)
{
	typedef Object_t631007953 * (*Resources_Load_m3480190876_ftn) (String_t*, Type_t *);
	static Resources_Load_m3480190876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Resources_Load_m3480190876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	Object_t631007953 * retVal = _il2cpp_icall_func(___path0, ___systemTypeInstance1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.SceneManagement.Scene::get_handle()
extern "C"  int32_t Scene_get_handle_m1544696971 (Scene_t2348375561 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t Scene_get_handle_m1544696971_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Scene_t2348375561 * _thisAdjusted = reinterpret_cast<Scene_t2348375561 *>(__this + 1);
	return Scene_get_handle_m1544696971(_thisAdjusted, method);
}
// System.Int32 UnityEngine.SceneManagement.Scene::GetHashCode()
extern "C"  int32_t Scene_GetHashCode_m2998285532 (Scene_t2348375561 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t Scene_GetHashCode_m2998285532_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Scene_t2348375561 * _thisAdjusted = reinterpret_cast<Scene_t2348375561 *>(__this + 1);
	return Scene_GetHashCode_m2998285532(_thisAdjusted, method);
}
// System.Boolean UnityEngine.SceneManagement.Scene::Equals(System.Object)
extern "C"  bool Scene_Equals_m581999093 (Scene_t2348375561 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scene_Equals_m581999093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Scene_t2348375561_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_002f;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		V_1 = ((*(Scene_t2348375561 *)((Scene_t2348375561 *)UnBox(L_1, Scene_t2348375561_il2cpp_TypeInfo_var))));
		int32_t L_2 = Scene_get_handle_m1544696971(__this, /*hidden argument*/NULL);
		int32_t L_3 = Scene_get_handle_m1544696971((&V_1), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_002f;
	}

IL_002f:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
extern "C"  bool Scene_Equals_m581999093_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Scene_t2348375561 * _thisAdjusted = reinterpret_cast<Scene_t2348375561 *>(__this + 1);
	return Scene_Equals_m581999093(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_SceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_Internal_SceneLoaded_m2694652025 (RuntimeObject * __this /* static, unused */, Scene_t2348375561  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManager_Internal_SceneLoaded_m2694652025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityAction_2_t2165061829 * L_0 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_sceneLoaded_0();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		UnityAction_2_t2165061829 * L_1 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_sceneLoaded_0();
		Scene_t2348375561  L_2 = ___scene0;
		int32_t L_3 = ___mode1;
		UnityAction_2_Invoke_m1541286357(L_1, L_2, L_3, /*hidden argument*/UnityAction_2_Invoke_m1541286357_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_SceneUnloaded(UnityEngine.SceneManagement.Scene)
extern "C"  void SceneManager_Internal_SceneUnloaded_m3247148570 (RuntimeObject * __this /* static, unused */, Scene_t2348375561  ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManager_Internal_SceneUnloaded_m3247148570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityAction_1_t2933211702 * L_0 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_sceneUnloaded_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		UnityAction_1_t2933211702 * L_1 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_sceneUnloaded_1();
		Scene_t2348375561  L_2 = ___scene0;
		UnityAction_1_Invoke_m3649732398(L_1, L_2, /*hidden argument*/UnityAction_1_Invoke_m3649732398_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_ActiveSceneChanged(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
extern "C"  void SceneManager_Internal_ActiveSceneChanged_m3676176255 (RuntimeObject * __this /* static, unused */, Scene_t2348375561  ___previousActiveScene0, Scene_t2348375561  ___newActiveScene1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManager_Internal_ActiveSceneChanged_m3676176255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityAction_2_t1262235195 * L_0 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_activeSceneChanged_2();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		UnityAction_2_t1262235195 * L_1 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_activeSceneChanged_2();
		Scene_t2348375561  L_2 = ___previousActiveScene0;
		Scene_t2348375561  L_3 = ___newActiveScene1;
		UnityAction_2_Invoke_m944492567(L_1, L_2, L_3, /*hidden argument*/UnityAction_2_Invoke_m944492567_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke(const ScriptableObject_t2528358522& unmarshaled, ScriptableObject_t2528358522_marshaled_pinvoke& marshaled)
{
	marshaled.___m_CachedPtr_0 = unmarshaled.get_m_CachedPtr_0();
}
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_back(const ScriptableObject_t2528358522_marshaled_pinvoke& marshaled, ScriptableObject_t2528358522& unmarshaled)
{
	intptr_t unmarshaled_m_CachedPtr_temp_0;
	memset(&unmarshaled_m_CachedPtr_temp_0, 0, sizeof(unmarshaled_m_CachedPtr_temp_0));
	unmarshaled_m_CachedPtr_temp_0 = marshaled.___m_CachedPtr_0;
	unmarshaled.set_m_CachedPtr_0(unmarshaled_m_CachedPtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_cleanup(ScriptableObject_t2528358522_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t2528358522_marshal_com(const ScriptableObject_t2528358522& unmarshaled, ScriptableObject_t2528358522_marshaled_com& marshaled)
{
	marshaled.___m_CachedPtr_0 = unmarshaled.get_m_CachedPtr_0();
}
extern "C" void ScriptableObject_t2528358522_marshal_com_back(const ScriptableObject_t2528358522_marshaled_com& marshaled, ScriptableObject_t2528358522& unmarshaled)
{
	intptr_t unmarshaled_m_CachedPtr_temp_0;
	memset(&unmarshaled_m_CachedPtr_temp_0, 0, sizeof(unmarshaled_m_CachedPtr_temp_0));
	unmarshaled_m_CachedPtr_temp_0 = marshaled.___m_CachedPtr_0;
	unmarshaled.set_m_CachedPtr_0(unmarshaled_m_CachedPtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t2528358522_marshal_com_cleanup(ScriptableObject_t2528358522_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptableObject__ctor_m1310743131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		ScriptableObject_Internal_CreateScriptableObject_m2945320968(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C"  void ScriptableObject_Internal_CreateScriptableObject_m2945320968 (RuntimeObject * __this /* static, unused */, ScriptableObject_t2528358522 * ___self0, const RuntimeMethod* method)
{
	typedef void (*ScriptableObject_Internal_CreateScriptableObject_m2945320968_ftn) (ScriptableObject_t2528358522 *);
	static ScriptableObject_Internal_CreateScriptableObject_m2945320968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_Internal_CreateScriptableObject_m2945320968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(___self0);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C"  ScriptableObject_t2528358522 * ScriptableObject_CreateInstance_m2611081756 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	ScriptableObject_t2528358522 * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		ScriptableObject_t2528358522 * L_1 = ScriptableObject_CreateInstanceFromType_m1997111014(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		ScriptableObject_t2528358522 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C"  ScriptableObject_t2528358522 * ScriptableObject_CreateInstanceFromType_m1997111014 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	typedef ScriptableObject_t2528358522 * (*ScriptableObject_CreateInstanceFromType_m1997111014_ftn) (Type_t *);
	static ScriptableObject_CreateInstanceFromType_m1997111014_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateInstanceFromType_m1997111014_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	ScriptableObject_t2528358522 * retVal = _il2cpp_icall_func(___type0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SendMouseEvents::SetMouseMoved()
extern "C"  void SendMouseEvents_SetMouseMoved_m2822596724 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMouseEvents_SetMouseMoved_m2822596724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_s_MouseUsed_0((bool)1);
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::HitTestLegacyGUI(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.SendMouseEvents/HitInfo&)
extern "C"  void SendMouseEvents_HitTestLegacyGUI_m579942228 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___camera0, Vector3_t3722313464  ___mousePosition1, HitInfo_t3229609740 * ___hitInfo2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMouseEvents_HitTestLegacyGUI_m579942228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayer_t2783472903 * V_0 = NULL;
	GUIElement_t3567083079 * V_1 = NULL;
	{
		Camera_t4157153871 * L_0 = ___camera0;
		GUILayer_t2783472903 * L_1 = Component_GetComponent_TisGUILayer_t2783472903_m4244438908(L_0, /*hidden argument*/Component_GetComponent_TisGUILayer_t2783472903_m4244438908_RuntimeMethod_var);
		V_0 = L_1;
		GUILayer_t2783472903 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		GUILayer_t2783472903 * L_4 = V_0;
		Vector3_t3722313464  L_5 = ___mousePosition1;
		GUIElement_t3567083079 * L_6 = GUILayer_HitTest_m512928460(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		GUIElement_t3567083079 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		HitInfo_t3229609740 * L_9 = ___hitInfo2;
		GUIElement_t3567083079 * L_10 = V_1;
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		L_9->set_target_0(L_11);
		HitInfo_t3229609740 * L_12 = ___hitInfo2;
		Camera_t4157153871 * L_13 = ___camera0;
		L_12->set_camera_1(L_13);
		goto IL_0051;
	}

IL_0041:
	{
		HitInfo_t3229609740 * L_14 = ___hitInfo2;
		L_14->set_target_0((GameObject_t1113636619 *)NULL);
		HitInfo_t3229609740 * L_15 = ___hitInfo2;
		L_15->set_camera_1((Camera_t4157153871 *)NULL);
	}

IL_0051:
	{
	}

IL_0052:
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32)
extern "C"  void SendMouseEvents_DoSendMouseEvents_m2140870850 (RuntimeObject * __this /* static, unused */, int32_t ___skipRTCameras0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMouseEvents_DoSendMouseEvents_m2140870850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	HitInfo_t3229609740  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Camera_t4157153871 * V_4 = NULL;
	CameraU5BU5D_t1709987734* V_5 = NULL;
	int32_t V_6 = 0;
	Rect_t2360479859  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Ray_t3785851493  V_8;
	memset(&V_8, 0, sizeof(V_8));
	float V_9 = 0.0f;
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	float V_11 = 0.0f;
	GameObject_t1113636619 * V_12 = NULL;
	GameObject_t1113636619 * V_13 = NULL;
	int32_t V_14 = 0;
	float G_B19_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m528453758(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1709987734* L_2 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_Cameras_4();
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1709987734* L_3 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_Cameras_4();
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) == ((int32_t)L_4)))
		{
			goto IL_002f;
		}
	}

IL_0024:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_m_Cameras_4(((CameraU5BU5D_t1709987734*)SZArrayNew(CameraU5BU5D_t1709987734_il2cpp_TypeInfo_var, (uint32_t)L_5)));
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1709987734* L_6 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_Cameras_4();
		Camera_GetAllCameras_m668492922(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_7 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		int32_t L_8 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_9 = V_3;
		*(HitInfo_t3229609740 *)((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_12 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		bool L_13 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_s_MouseUsed_0();
		if (L_13)
		{
			goto IL_027e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1709987734* L_14 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_Cameras_4();
		V_5 = L_14;
		V_6 = 0;
		goto IL_0272;
	}

IL_0086:
	{
		CameraU5BU5D_t1709987734* L_15 = V_5;
		int32_t L_16 = V_6;
		int32_t L_17 = L_16;
		Camera_t4157153871 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		Camera_t4157153871 * L_19 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_21 = ___skipRTCameras0;
		if (!L_21)
		{
			goto IL_00b8;
		}
	}
	{
		Camera_t4157153871 * L_22 = V_4;
		RenderTexture_t2108887433 * L_23 = Camera_get_targetTexture_m2278634983(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00b8;
		}
	}

IL_00b3:
	{
		goto IL_026c;
	}

IL_00b8:
	{
		Camera_t4157153871 * L_25 = V_4;
		Rect_t2360479859  L_26 = Camera_get_pixelRect_m2283183456(L_25, /*hidden argument*/NULL);
		V_7 = L_26;
		Vector3_t3722313464  L_27 = V_0;
		bool L_28 = Rect_Contains_m1232228501((&V_7), L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_026c;
	}

IL_00d3:
	{
		Camera_t4157153871 * L_29 = V_4;
		Vector3_t3722313464  L_30 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_31 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		SendMouseEvents_HitTestLegacyGUI_m579942228(NULL /*static, unused*/, L_29, L_30, ((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		Camera_t4157153871 * L_32 = V_4;
		int32_t L_33 = Camera_get_eventMask_m819189086(L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_026c;
	}

IL_00f7:
	{
		Camera_t4157153871 * L_34 = V_4;
		Vector3_t3722313464  L_35 = V_0;
		Ray_t3785851493  L_36 = Camera_ScreenPointToRay_m3764635188(L_34, L_35, /*hidden argument*/NULL);
		V_8 = L_36;
		Vector3_t3722313464  L_37 = Ray_get_direction_m761601601((&V_8), /*hidden argument*/NULL);
		V_10 = L_37;
		float L_38 = (&V_10)->get_z_2();
		V_9 = L_38;
		float L_39 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		bool L_40 = Mathf_Approximately_m245805902(NULL /*static, unused*/, (0.0f), L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_012e;
		}
	}
	{
		G_B19_0 = (std::numeric_limits<float>::infinity());
		goto IL_0145;
	}

IL_012e:
	{
		Camera_t4157153871 * L_41 = V_4;
		float L_42 = Camera_get_farClipPlane_m538536689(L_41, /*hidden argument*/NULL);
		Camera_t4157153871 * L_43 = V_4;
		float L_44 = Camera_get_nearClipPlane_m837839537(L_43, /*hidden argument*/NULL);
		float L_45 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_46 = fabsf(((float)((float)((float)il2cpp_codegen_subtract((float)L_42, (float)L_44))/(float)L_45)));
		G_B19_0 = L_46;
	}

IL_0145:
	{
		V_11 = G_B19_0;
		Camera_t4157153871 * L_47 = V_4;
		Ray_t3785851493  L_48 = V_8;
		float L_49 = V_11;
		Camera_t4157153871 * L_50 = V_4;
		int32_t L_51 = Camera_get_cullingMask_m679085748(L_50, /*hidden argument*/NULL);
		Camera_t4157153871 * L_52 = V_4;
		int32_t L_53 = Camera_get_eventMask_m819189086(L_52, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_54 = Camera_RaycastTry_m3913529496(L_47, L_48, L_49, ((int32_t)((int32_t)L_51&(int32_t)L_53)), /*hidden argument*/NULL);
		V_12 = L_54;
		GameObject_t1113636619 * L_55 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_56 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_55, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_019b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_57 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		GameObject_t1113636619 * L_58 = V_12;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->set_target_0(L_58);
		HitInfoU5BU5D_t1685002053* L_59 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		Camera_t4157153871 * L_60 = V_4;
		((L_59)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->set_camera_1(L_60);
		goto IL_01d9;
	}

IL_019b:
	{
		Camera_t4157153871 * L_61 = V_4;
		int32_t L_62 = Camera_get_clearFlags_m992534691(L_61, /*hidden argument*/NULL);
		if ((((int32_t)L_62) == ((int32_t)1)))
		{
			goto IL_01b5;
		}
	}
	{
		Camera_t4157153871 * L_63 = V_4;
		int32_t L_64 = Camera_get_clearFlags_m992534691(L_63, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_01d9;
		}
	}

IL_01b5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_65 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->set_target_0((GameObject_t1113636619 *)NULL);
		HitInfoU5BU5D_t1685002053* L_66 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		((L_66)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->set_camera_1((Camera_t4157153871 *)NULL);
	}

IL_01d9:
	{
		Camera_t4157153871 * L_67 = V_4;
		Ray_t3785851493  L_68 = V_8;
		float L_69 = V_11;
		Camera_t4157153871 * L_70 = V_4;
		int32_t L_71 = Camera_get_cullingMask_m679085748(L_70, /*hidden argument*/NULL);
		Camera_t4157153871 * L_72 = V_4;
		int32_t L_73 = Camera_get_eventMask_m819189086(L_72, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_74 = Camera_RaycastTry2D_m2460696262(L_67, L_68, L_69, ((int32_t)((int32_t)L_71&(int32_t)L_73)), /*hidden argument*/NULL);
		V_13 = L_74;
		GameObject_t1113636619 * L_75 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_76 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_75, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_022d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_77 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		GameObject_t1113636619 * L_78 = V_13;
		((L_77)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->set_target_0(L_78);
		HitInfoU5BU5D_t1685002053* L_79 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		Camera_t4157153871 * L_80 = V_4;
		((L_79)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->set_camera_1(L_80);
		goto IL_026b;
	}

IL_022d:
	{
		Camera_t4157153871 * L_81 = V_4;
		int32_t L_82 = Camera_get_clearFlags_m992534691(L_81, /*hidden argument*/NULL);
		if ((((int32_t)L_82) == ((int32_t)1)))
		{
			goto IL_0247;
		}
	}
	{
		Camera_t4157153871 * L_83 = V_4;
		int32_t L_84 = Camera_get_clearFlags_m992534691(L_83, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_84) == ((uint32_t)2))))
		{
			goto IL_026b;
		}
	}

IL_0247:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_85 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		((L_85)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->set_target_0((GameObject_t1113636619 *)NULL);
		HitInfoU5BU5D_t1685002053* L_86 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		((L_86)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->set_camera_1((Camera_t4157153871 *)NULL);
	}

IL_026b:
	{
	}

IL_026c:
	{
		int32_t L_87 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_0272:
	{
		int32_t L_88 = V_6;
		CameraU5BU5D_t1709987734* L_89 = V_5;
		if ((((int32_t)L_88) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_89)->max_length)))))))
		{
			goto IL_0086;
		}
	}
	{
	}

IL_027e:
	{
		V_14 = 0;
		goto IL_02a4;
	}

IL_0286:
	{
		int32_t L_90 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_91 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		int32_t L_92 = V_14;
		SendMouseEvents_SendEvents_m1956471769(NULL /*static, unused*/, L_90, (*(HitInfo_t3229609740 *)((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)))), /*hidden argument*/NULL);
		int32_t L_93 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_02a4:
	{
		int32_t L_94 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_95 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		if ((((int32_t)L_94) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_95)->max_length)))))))
		{
			goto IL_0286;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_s_MouseUsed_0((bool)0);
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern "C"  void SendMouseEvents_SendEvents_m1956471769 (RuntimeObject * __this /* static, unused */, int32_t ___i0, HitInfo_t3229609740  ___hit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMouseEvents_SendEvents_m1956471769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t3229609740  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		HitInfo_t3229609740  L_3 = ___hit1;
		bool L_4 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_5 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_6 = ___i0;
		HitInfo_t3229609740  L_7 = ___hit1;
		*(HitInfo_t3229609740 *)((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6))) = L_7;
		HitInfoU5BU5D_t1685002053* L_8 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_9 = ___i0;
		HitInfo_SendMessage_m1343099429(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), _stringLiteral4015530243, /*hidden argument*/NULL);
	}

IL_0049:
	{
		goto IL_0107;
	}

IL_004f:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00d6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_11 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_12 = ___i0;
		bool L_13 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, (*(HitInfo_t3229609740 *)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00d0;
		}
	}
	{
		HitInfo_t3229609740  L_14 = ___hit1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_15 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_16 = ___i0;
		bool L_17 = HitInfo_Compare_m2336739674(NULL /*static, unused*/, L_14, (*(HitInfo_t3229609740 *)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00a1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_18 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_19 = ___i0;
		HitInfo_SendMessage_m1343099429(((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19))), _stringLiteral2111035250, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_20 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_21 = ___i0;
		HitInfo_SendMessage_m1343099429(((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21))), _stringLiteral3620714913, /*hidden argument*/NULL);
		HitInfoU5BU5D_t1685002053* L_22 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_23 = ___i0;
		il2cpp_codegen_initobj((&V_2), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_24 = V_2;
		*(HitInfo_t3229609740 *)((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))) = L_24;
	}

IL_00d0:
	{
		goto IL_0107;
	}

IL_00d6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_25 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_26 = ___i0;
		bool L_27 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, (*(HitInfo_t3229609740 *)((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0107;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_28 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_29 = ___i0;
		HitInfo_SendMessage_m1343099429(((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29))), _stringLiteral1641435443, /*hidden argument*/NULL);
	}

IL_0107:
	{
		HitInfo_t3229609740  L_30 = ___hit1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_31 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_LastHit_1();
		int32_t L_32 = ___i0;
		bool L_33 = HitInfo_Compare_m2336739674(NULL /*static, unused*/, L_30, (*(HitInfo_t3229609740 *)((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0140;
		}
	}
	{
		HitInfo_t3229609740  L_34 = ___hit1;
		bool L_35 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_013a;
		}
	}
	{
		HitInfo_SendMessage_m1343099429((&___hit1), _stringLiteral291496430, /*hidden argument*/NULL);
	}

IL_013a:
	{
		goto IL_0198;
	}

IL_0140:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_36 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_LastHit_1();
		int32_t L_37 = ___i0;
		bool L_38 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, (*(HitInfo_t3229609740 *)((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37)))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0172;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_39 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_LastHit_1();
		int32_t L_40 = ___i0;
		HitInfo_SendMessage_m1343099429(((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40))), _stringLiteral4054394430, /*hidden argument*/NULL);
	}

IL_0172:
	{
		HitInfo_t3229609740  L_41 = ___hit1;
		bool L_42 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0197;
		}
	}
	{
		HitInfo_SendMessage_m1343099429((&___hit1), _stringLiteral2882627593, /*hidden argument*/NULL);
		HitInfo_SendMessage_m1343099429((&___hit1), _stringLiteral291496430, /*hidden argument*/NULL);
	}

IL_0197:
	{
	}

IL_0198:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_43 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_LastHit_1();
		int32_t L_44 = ___i0;
		HitInfo_t3229609740  L_45 = ___hit1;
		*(HitInfo_t3229609740 *)((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44))) = L_45;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::.cctor()
extern "C"  void SendMouseEvents__cctor_m2378365934 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMouseEvents__cctor_m2378365934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HitInfo_t3229609740  V_0;
	memset(&V_0, 0, sizeof(V_0));
	HitInfo_t3229609740  V_1;
	memset(&V_1, 0, sizeof(V_1));
	HitInfo_t3229609740  V_2;
	memset(&V_2, 0, sizeof(V_2));
	HitInfo_t3229609740  V_3;
	memset(&V_3, 0, sizeof(V_3));
	HitInfo_t3229609740  V_4;
	memset(&V_4, 0, sizeof(V_4));
	HitInfo_t3229609740  V_5;
	memset(&V_5, 0, sizeof(V_5));
	HitInfo_t3229609740  V_6;
	memset(&V_6, 0, sizeof(V_6));
	HitInfo_t3229609740  V_7;
	memset(&V_7, 0, sizeof(V_7));
	HitInfo_t3229609740  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_s_MouseUsed_0((bool)0);
		HitInfoU5BU5D_t1685002053* L_0 = ((HitInfoU5BU5D_t1685002053*)SZArrayNew(HitInfoU5BU5D_t1685002053_il2cpp_TypeInfo_var, (uint32_t)3));
		il2cpp_codegen_initobj((&V_0), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_1 = V_0;
		*(HitInfo_t3229609740 *)((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_1;
		HitInfoU5BU5D_t1685002053* L_2 = L_0;
		il2cpp_codegen_initobj((&V_1), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_3 = V_1;
		*(HitInfo_t3229609740 *)((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_3;
		HitInfoU5BU5D_t1685002053* L_4 = L_2;
		il2cpp_codegen_initobj((&V_2), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_5 = V_2;
		*(HitInfo_t3229609740 *)((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))) = L_5;
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_m_LastHit_1(L_4);
		HitInfoU5BU5D_t1685002053* L_6 = ((HitInfoU5BU5D_t1685002053*)SZArrayNew(HitInfoU5BU5D_t1685002053_il2cpp_TypeInfo_var, (uint32_t)3));
		il2cpp_codegen_initobj((&V_3), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_7 = V_3;
		*(HitInfo_t3229609740 *)((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_7;
		HitInfoU5BU5D_t1685002053* L_8 = L_6;
		il2cpp_codegen_initobj((&V_4), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_9 = V_4;
		*(HitInfo_t3229609740 *)((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_9;
		HitInfoU5BU5D_t1685002053* L_10 = L_8;
		il2cpp_codegen_initobj((&V_5), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_11 = V_5;
		*(HitInfo_t3229609740 *)((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))) = L_11;
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_m_MouseDownHit_2(L_10);
		HitInfoU5BU5D_t1685002053* L_12 = ((HitInfoU5BU5D_t1685002053*)SZArrayNew(HitInfoU5BU5D_t1685002053_il2cpp_TypeInfo_var, (uint32_t)3));
		il2cpp_codegen_initobj((&V_6), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_13 = V_6;
		*(HitInfo_t3229609740 *)((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_13;
		HitInfoU5BU5D_t1685002053* L_14 = L_12;
		il2cpp_codegen_initobj((&V_7), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_15 = V_7;
		*(HitInfo_t3229609740 *)((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_15;
		HitInfoU5BU5D_t1685002053* L_16 = L_14;
		il2cpp_codegen_initobj((&V_8), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_17 = V_8;
		*(HitInfo_t3229609740 *)((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))) = L_17;
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_m_CurrentHit_3(L_16);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SendMouseEvents/HitInfo
extern "C" void HitInfo_t3229609740_marshal_pinvoke(const HitInfo_t3229609740& unmarshaled, HitInfo_t3229609740_marshaled_pinvoke& marshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'HitInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception);
}
extern "C" void HitInfo_t3229609740_marshal_pinvoke_back(const HitInfo_t3229609740_marshaled_pinvoke& marshaled, HitInfo_t3229609740& unmarshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'HitInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SendMouseEvents/HitInfo
extern "C" void HitInfo_t3229609740_marshal_pinvoke_cleanup(HitInfo_t3229609740_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SendMouseEvents/HitInfo
extern "C" void HitInfo_t3229609740_marshal_com(const HitInfo_t3229609740& unmarshaled, HitInfo_t3229609740_marshaled_com& marshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'HitInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception);
}
extern "C" void HitInfo_t3229609740_marshal_com_back(const HitInfo_t3229609740_marshaled_com& marshaled, HitInfo_t3229609740& unmarshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'HitInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.SendMouseEvents/HitInfo
extern "C" void HitInfo_t3229609740_marshal_com_cleanup(HitInfo_t3229609740_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C"  void HitInfo_SendMessage_m1343099429 (HitInfo_t3229609740 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_target_0();
		String_t* L_1 = ___name0;
		GameObject_SendMessage_m3720186693(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void HitInfo_SendMessage_m1343099429_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, const RuntimeMethod* method)
{
	HitInfo_t3229609740 * _thisAdjusted = reinterpret_cast<HitInfo_t3229609740 *>(__this + 1);
	HitInfo_SendMessage_m1343099429(_thisAdjusted, ___name0, method);
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C"  bool HitInfo_op_Implicit_m665224877 (RuntimeObject * __this /* static, unused */, HitInfo_t3229609740  ___exists0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HitInfo_op_Implicit_m665224877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		GameObject_t1113636619 * L_0 = (&___exists0)->get_target_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Camera_t4157153871 * L_2 = (&___exists0)->get_camera_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0029;
	}

IL_0029:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C"  bool HitInfo_Compare_m2336739674 (RuntimeObject * __this /* static, unused */, HitInfo_t3229609740  ___lhs0, HitInfo_t3229609740  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HitInfo_Compare_m2336739674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		GameObject_t1113636619 * L_0 = (&___lhs0)->get_target_0();
		GameObject_t1113636619 * L_1 = (&___rhs1)->get_target_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		Camera_t4157153871 * L_3 = (&___lhs0)->get_camera_1();
		Camera_t4157153871 * L_4 = (&___rhs1)->get_camera_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = 0;
	}

IL_002f:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C"  void FormerlySerializedAsAttribute__ctor_m520861771 (FormerlySerializedAsAttribute_t2859083114 * __this, String_t* ___oldName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName0;
		__this->set_m_oldName_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SerializeField::.ctor()
extern "C"  void SerializeField__ctor_m808862924 (SerializeField_t3286833614 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SetupCoroutine::InvokeMoveNext(System.Collections.IEnumerator,System.IntPtr)
extern "C"  void SetupCoroutine_InvokeMoveNext_m3199342729 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___enumerator0, intptr_t ___returnValueAddress1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetupCoroutine_InvokeMoveNext_m3199342729_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___returnValueAddress1;
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_2, _stringLiteral2664163362, _stringLiteral696106652, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0021:
	{
		intptr_t L_3 = ___returnValueAddress1;
		void* L_4 = IntPtr_op_Explicit_m2520637223(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___enumerator0;
		bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_5);
		*((int8_t*)(L_4)) = (int8_t)L_6;
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern "C"  RuntimeObject * SetupCoroutine_InvokeMember_m2661944898 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___behaviour0, String_t* ___name1, RuntimeObject * ___variable2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetupCoroutine_InvokeMember_m2661944898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (ObjectU5BU5D_t2843939325*)NULL;
		RuntimeObject * L_0 = ___variable2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		RuntimeObject * L_2 = ___variable2;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
	}

IL_0016:
	{
		RuntimeObject * L_3 = ___behaviour0;
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name1;
		RuntimeObject * L_6 = ___behaviour0;
		ObjectU5BU5D_t2843939325* L_7 = V_0;
		RuntimeObject * L_8 = VirtFuncInvoker8< RuntimeObject *, String_t*, int32_t, Binder_t2999457153 *, RuntimeObject *, ObjectU5BU5D_t2843939325*, ParameterModifierU5BU5D_t2943407543*, CultureInfo_t4157843068 *, StringU5BU5D_t1281789340* >::Invoke(71 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t2999457153 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL, (CultureInfo_t4157843068 *)NULL, (StringU5BU5D_t1281789340*)(StringU5BU5D_t1281789340*)NULL);
		V_1 = L_8;
		goto IL_0033;
	}

IL_0033:
	{
		RuntimeObject * L_9 = V_1;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern "C"  void StackTraceUtility_SetProjectFolder_m830524047 (RuntimeObject * __this /* static, unused */, String_t* ___folder0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_SetProjectFolder_m830524047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___folder0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->set_projectFolder_0(L_0);
		String_t* L_1 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_3 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		String_t* L_4 = String_Replace_m1273907647(L_3, _stringLiteral3452614644, _stringLiteral3452614529, /*hidden argument*/NULL);
		((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->set_projectFolder_0(L_4);
	}

IL_002f:
	{
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern "C"  String_t* StackTraceUtility_ExtractStackTrace_m3279197967 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_ExtractStackTrace_m3279197967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTrace_t1598645457 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		StackTrace_t1598645457 * L_0 = (StackTrace_t1598645457 *)il2cpp_codegen_object_new(StackTrace_t1598645457_il2cpp_TypeInfo_var);
		StackTrace__ctor_m1685176557(L_0, 1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t1598645457 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m1281750362(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		V_1 = L_3;
		String_t* L_4 = V_1;
		V_2 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C"  bool StackTraceUtility_IsSystemStacktraceType_m299828041 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_IsSystemStacktraceType_m299828041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject * L_0 = ___name0;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		bool L_2 = String_StartsWith_m1759067526(L_1, _stringLiteral3155606, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4 = String_StartsWith_m1759067526(L_3, _stringLiteral2227937992, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6 = String_StartsWith_m1759067526(L_5, _stringLiteral547166083, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8 = String_StartsWith_m1759067526(L_7, _stringLiteral3960313174, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10 = String_StartsWith_m1759067526(L_9, _stringLiteral1464230170, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_11 = V_0;
		bool L_12 = String_StartsWith_m1759067526(L_11, _stringLiteral1625510709, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0066;
	}

IL_0065:
	{
		G_B7_0 = 1;
	}

IL_0066:
	{
		V_1 = (bool)G_B7_0;
		goto IL_006c;
	}

IL_006c:
	{
		bool L_13 = V_1;
		return L_13;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern "C"  void StackTraceUtility_ExtractStringFromExceptionInternal_m2686726792 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___exceptiono0, String_t** ___message1, String_t** ___stackTrace2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_ExtractStringFromExceptionInternal_m2686726792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	StackTrace_t1598645457 * V_5 = NULL;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject * L_0 = ___exceptiono0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral1698478619, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		RuntimeObject * L_2 = ___exceptiono0;
		V_0 = ((Exception_t *)IsInstClass((RuntimeObject*)L_2, Exception_t_il2cpp_TypeInfo_var));
		Exception_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral2231172943, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_002a:
	{
		Exception_t * L_5 = V_0;
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003f;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004c;
	}

IL_003f:
	{
		Exception_t * L_7 = V_0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_StackTrace() */, L_7);
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2));
	}

IL_004c:
	{
		StringBuilder_t * L_10 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message1;
		*((RuntimeObject **)(L_11)) = (RuntimeObject *)_stringLiteral757602046;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_11), (RuntimeObject *)_stringLiteral757602046);
		V_2 = _stringLiteral757602046;
		goto IL_0106;
	}

IL_0064:
	{
		String_t* L_12 = V_2;
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_007c;
		}
	}
	{
		Exception_t * L_14 = V_0;
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_StackTrace() */, L_14);
		V_2 = L_15;
		goto IL_008e;
	}

IL_007c:
	{
		Exception_t * L_16 = V_0;
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_StackTrace() */, L_16);
		String_t* L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m3755062657(NULL /*static, unused*/, L_17, _stringLiteral3452614566, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
	}

IL_008e:
	{
		Exception_t * L_20 = V_0;
		Type_t * L_21 = Exception_GetType_m2227967756(L_20, /*hidden argument*/NULL);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
		V_3 = L_22;
		V_4 = _stringLiteral757602046;
		Exception_t * L_23 = V_0;
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_23);
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Exception_t * L_25 = V_0;
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_25);
		V_4 = L_26;
	}

IL_00b4:
	{
		String_t* L_27 = V_4;
		String_t* L_28 = String_Trim_m923598732(L_27, /*hidden argument*/NULL);
		int32_t L_29 = String_get_Length_m3847582255(L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00dc;
		}
	}
	{
		String_t* L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Concat_m3937257545(NULL /*static, unused*/, L_30, _stringLiteral3450517398, /*hidden argument*/NULL);
		V_3 = L_31;
		String_t* L_32 = V_3;
		String_t* L_33 = V_4;
		String_t* L_34 = String_Concat_m3937257545(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
	}

IL_00dc:
	{
		String_t** L_35 = ___message1;
		String_t* L_36 = V_3;
		*((RuntimeObject **)(L_35)) = (RuntimeObject *)L_36;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_35), (RuntimeObject *)L_36);
		Exception_t * L_37 = V_0;
		Exception_t * L_38 = Exception_get_InnerException_m3836775(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00fe;
		}
	}
	{
		String_t* L_39 = V_3;
		String_t* L_40 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3264019870, L_39, _stringLiteral3452614566, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
	}

IL_00fe:
	{
		Exception_t * L_42 = V_0;
		Exception_t * L_43 = Exception_get_InnerException_m3836775(L_42, /*hidden argument*/NULL);
		V_0 = L_43;
	}

IL_0106:
	{
		Exception_t * L_44 = V_0;
		if (L_44)
		{
			goto IL_0064;
		}
	}
	{
		StringBuilder_t * L_45 = V_1;
		String_t* L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_47 = String_Concat_m3937257545(NULL /*static, unused*/, L_46, _stringLiteral3452614566, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_45, L_47, /*hidden argument*/NULL);
		StackTrace_t1598645457 * L_48 = (StackTrace_t1598645457 *)il2cpp_codegen_object_new(StackTrace_t1598645457_il2cpp_TypeInfo_var);
		StackTrace__ctor_m1685176557(L_48, 1, (bool)1, /*hidden argument*/NULL);
		V_5 = L_48;
		StringBuilder_t * L_49 = V_1;
		StackTrace_t1598645457 * L_50 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_51 = StackTraceUtility_ExtractFormattedStackTrace_m1281750362(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_49, L_51, /*hidden argument*/NULL);
		String_t** L_52 = ___stackTrace2;
		StringBuilder_t * L_53 = V_1;
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
		*((RuntimeObject **)(L_52)) = (RuntimeObject *)L_54;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_52), (RuntimeObject *)L_54);
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern "C"  String_t* StackTraceUtility_PostprocessStacktrace_m1043256299 (RuntimeObject * __this /* static, unused */, String_t* ___oldString0, bool ___stripEngineInternalInformation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_PostprocessStacktrace_m1043256299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		String_t* L_0 = ___oldString0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_1;
		goto IL_02b3;
	}

IL_0012:
	{
		String_t* L_2 = ___oldString0;
		CharU5BU5D_t3528271667* L_3 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		StringU5BU5D_t1281789340* L_4 = String_Split_m3646115398(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = ___oldString0;
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		StringBuilder_t * L_7 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_7, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		V_3 = 0;
		goto IL_0046;
	}

IL_0037:
	{
		StringU5BU5D_t1281789340* L_8 = V_1;
		int32_t L_9 = V_3;
		StringU5BU5D_t1281789340* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		String_t* L_14 = String_Trim_m923598732(L_13, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_8, L_14);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (String_t*)L_14);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_16 = V_3;
		StringU5BU5D_t1281789340* L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		V_4 = 0;
		goto IL_029d;
	}

IL_0057:
	{
		StringU5BU5D_t1281789340* L_18 = V_1;
		int32_t L_19 = V_4;
		int32_t L_20 = L_19;
		String_t* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_5 = L_21;
		String_t* L_22 = V_5;
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_24 = V_5;
		Il2CppChar L_25 = String_get_Chars_m2986988803(L_24, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_007e;
		}
	}

IL_0079:
	{
		goto IL_0297;
	}

IL_007e:
	{
		String_t* L_26 = V_5;
		bool L_27 = String_StartsWith_m1759067526(L_26, _stringLiteral1147544838, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0297;
	}

IL_0094:
	{
		bool L_28 = ___stripEngineInternalInformation1;
		if (!L_28)
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_29 = V_5;
		bool L_30 = String_StartsWith_m1759067526(L_29, _stringLiteral1974486273, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_02a7;
	}

IL_00b0:
	{
		bool L_31 = ___stripEngineInternalInformation1;
		if (!L_31)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_32 = V_4;
		StringU5BU5D_t1281789340* L_33 = V_1;
		if ((((int32_t)L_32) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))), (int32_t)1)))))
		{
			goto IL_0107;
		}
	}
	{
		String_t* L_34 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		bool L_35 = StackTraceUtility_IsSystemStacktraceType_m299828041(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0107;
		}
	}
	{
		StringU5BU5D_t1281789340* L_36 = V_1;
		int32_t L_37 = V_4;
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		String_t* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		bool L_40 = StackTraceUtility_IsSystemStacktraceType_m299828041(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_0297;
	}

IL_00e4:
	{
		String_t* L_41 = V_5;
		int32_t L_42 = String_IndexOf_m1977622757(L_41, _stringLiteral3487100581, /*hidden argument*/NULL);
		V_6 = L_42;
		int32_t L_43 = V_6;
		if ((((int32_t)L_43) == ((int32_t)(-1))))
		{
			goto IL_0106;
		}
	}
	{
		String_t* L_44 = V_5;
		int32_t L_45 = V_6;
		String_t* L_46 = String_Substring_m1610150815(L_44, 0, L_45, /*hidden argument*/NULL);
		V_5 = L_46;
	}

IL_0106:
	{
	}

IL_0107:
	{
		String_t* L_47 = V_5;
		int32_t L_48 = String_IndexOf_m1977622757(L_47, _stringLiteral4144164017, /*hidden argument*/NULL);
		if ((((int32_t)L_48) == ((int32_t)(-1))))
		{
			goto IL_011e;
		}
	}
	{
		goto IL_0297;
	}

IL_011e:
	{
		String_t* L_49 = V_5;
		int32_t L_50 = String_IndexOf_m1977622757(L_49, _stringLiteral3629554952, /*hidden argument*/NULL);
		if ((((int32_t)L_50) == ((int32_t)(-1))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0297;
	}

IL_0135:
	{
		String_t* L_51 = V_5;
		int32_t L_52 = String_IndexOf_m1977622757(L_51, _stringLiteral461147025, /*hidden argument*/NULL);
		if ((((int32_t)L_52) == ((int32_t)(-1))))
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0297;
	}

IL_014c:
	{
		bool L_53 = ___stripEngineInternalInformation1;
		if (!L_53)
		{
			goto IL_0179;
		}
	}
	{
		String_t* L_54 = V_5;
		bool L_55 = String_StartsWith_m1759067526(L_54, _stringLiteral3452614645, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_0179;
		}
	}
	{
		String_t* L_56 = V_5;
		bool L_57 = String_EndsWith_m1901926500(L_56, _stringLiteral3452614643, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_0179;
		}
	}
	{
		goto IL_0297;
	}

IL_0179:
	{
		String_t* L_58 = V_5;
		bool L_59 = String_StartsWith_m1759067526(L_58, _stringLiteral3791036681, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_0197;
		}
	}
	{
		String_t* L_60 = V_5;
		String_t* L_61 = String_Remove_m562998446(L_60, 0, 3, /*hidden argument*/NULL);
		V_5 = L_61;
	}

IL_0197:
	{
		String_t* L_62 = V_5;
		int32_t L_63 = String_IndexOf_m1977622757(L_62, _stringLiteral4163537911, /*hidden argument*/NULL);
		V_7 = L_63;
		V_8 = (-1);
		int32_t L_64 = V_7;
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_01c0;
		}
	}
	{
		String_t* L_65 = V_5;
		int32_t L_66 = V_7;
		int32_t L_67 = String_IndexOf_m3406607758(L_65, _stringLiteral3452614643, L_66, /*hidden argument*/NULL);
		V_8 = L_67;
	}

IL_01c0:
	{
		int32_t L_68 = V_7;
		if ((((int32_t)L_68) == ((int32_t)(-1))))
		{
			goto IL_01e5;
		}
	}
	{
		int32_t L_69 = V_8;
		int32_t L_70 = V_7;
		if ((((int32_t)L_69) <= ((int32_t)L_70)))
		{
			goto IL_01e5;
		}
	}
	{
		String_t* L_71 = V_5;
		int32_t L_72 = V_7;
		int32_t L_73 = V_8;
		int32_t L_74 = V_7;
		String_t* L_75 = String_Remove_m562998446(L_71, L_72, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_73, (int32_t)L_74)), (int32_t)1)), /*hidden argument*/NULL);
		V_5 = L_75;
	}

IL_01e5:
	{
		String_t* L_76 = V_5;
		String_t* L_77 = String_Replace_m1273907647(L_76, _stringLiteral1311358384, _stringLiteral757602046, /*hidden argument*/NULL);
		V_5 = L_77;
		String_t* L_78 = V_5;
		String_t* L_79 = String_Replace_m1273907647(L_78, _stringLiteral3452614644, _stringLiteral3452614529, /*hidden argument*/NULL);
		V_5 = L_79;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_80 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_81 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
		if (L_81)
		{
			goto IL_022d;
		}
	}
	{
		String_t* L_82 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_83 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		String_t* L_84 = String_Replace_m1273907647(L_82, L_83, _stringLiteral757602046, /*hidden argument*/NULL);
		V_5 = L_84;
	}

IL_022d:
	{
		String_t* L_85 = V_5;
		String_t* L_86 = String_Replace_m3726209165(L_85, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_5 = L_86;
		String_t* L_87 = V_5;
		int32_t L_88 = String_LastIndexOf_m2676535141(L_87, _stringLiteral4187617987, /*hidden argument*/NULL);
		V_9 = L_88;
		int32_t L_89 = V_9;
		if ((((int32_t)L_89) == ((int32_t)(-1))))
		{
			goto IL_0283;
		}
	}
	{
		String_t* L_90 = V_5;
		int32_t L_91 = V_9;
		String_t* L_92 = String_Remove_m562998446(L_90, L_91, 5, /*hidden argument*/NULL);
		V_5 = L_92;
		String_t* L_93 = V_5;
		int32_t L_94 = V_9;
		String_t* L_95 = String_Insert_m3534971326(L_93, L_94, _stringLiteral2177867675, /*hidden argument*/NULL);
		V_5 = L_95;
		String_t* L_96 = V_5;
		String_t* L_97 = V_5;
		int32_t L_98 = String_get_Length_m3847582255(L_97, /*hidden argument*/NULL);
		String_t* L_99 = String_Insert_m3534971326(L_96, L_98, _stringLiteral3452614535, /*hidden argument*/NULL);
		V_5 = L_99;
	}

IL_0283:
	{
		StringBuilder_t * L_100 = V_2;
		String_t* L_101 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_102 = String_Concat_m3937257545(NULL /*static, unused*/, L_101, _stringLiteral3452614566, /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_100, L_102, /*hidden argument*/NULL);
	}

IL_0297:
	{
		int32_t L_103 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
	}

IL_029d:
	{
		int32_t L_104 = V_4;
		StringU5BU5D_t1281789340* L_105 = V_1;
		if ((((int32_t)L_104) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_105)->max_length)))))))
		{
			goto IL_0057;
		}
	}

IL_02a7:
	{
		StringBuilder_t * L_106 = V_2;
		String_t* L_107 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_106);
		V_0 = L_107;
		goto IL_02b3;
	}

IL_02b3:
	{
		String_t* L_108 = V_0;
		return L_108;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C"  String_t* StackTraceUtility_ExtractFormattedStackTrace_m1281750362 (RuntimeObject * __this /* static, unused */, StackTrace_t1598645457 * ___stackTrace0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_ExtractFormattedStackTrace_m1281750362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	StackFrame_t3217253059 * V_2 = NULL;
	MethodBase_t * V_3 = NULL;
	Type_t * V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t390618515* V_7 = NULL;
	bool V_8 = false;
	String_t* V_9 = NULL;
	bool V_10 = false;
	int32_t V_11 = 0;
	String_t* V_12 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B29_0 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_02cb;
	}

IL_0013:
	{
		StackTrace_t1598645457 * L_1 = ___stackTrace0;
		int32_t L_2 = V_1;
		StackFrame_t3217253059 * L_3 = VirtFuncInvoker1< StackFrame_t3217253059 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t3217253059 * L_4 = V_2;
		MethodBase_t * L_5 = VirtFuncInvoker0< MethodBase_t * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t * L_6 = V_3;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_02c7;
	}

IL_002e:
	{
		MethodBase_t * L_7 = V_3;
		Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		goto IL_02c7;
	}

IL_0042:
	{
		Type_t * L_10 = V_4;
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_13 = V_5;
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0075;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		String_t* L_16 = V_5;
		StringBuilder_Append_m1965104174(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		StringBuilder_Append_m1965104174(L_17, _stringLiteral3452614530, /*hidden argument*/NULL);
	}

IL_0075:
	{
		StringBuilder_t * L_18 = V_0;
		Type_t * L_19 = V_4;
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		StringBuilder_Append_m1965104174(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_21 = V_0;
		StringBuilder_Append_m1965104174(L_21, _stringLiteral3452614550, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		MethodBase_t * L_23 = V_3;
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		StringBuilder_Append_m1965104174(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t * L_25 = V_0;
		StringBuilder_Append_m1965104174(L_25, _stringLiteral3452614536, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t * L_26 = V_3;
		ParameterInfoU5BU5D_t390618515* L_27 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = (bool)1;
		goto IL_00f4;
	}

IL_00bb:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00d4;
		}
	}
	{
		StringBuilder_t * L_29 = V_0;
		StringBuilder_Append_m1965104174(L_29, _stringLiteral3450517380, /*hidden argument*/NULL);
		goto IL_00d7;
	}

IL_00d4:
	{
		V_8 = (bool)0;
	}

IL_00d7:
	{
		StringBuilder_t * L_30 = V_0;
		ParameterInfoU5BU5D_t390618515* L_31 = V_7;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		ParameterInfo_t1861056598 * L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		Type_t * L_35 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_34);
		String_t* L_36 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_35);
		StringBuilder_Append_m1965104174(L_30, L_36, /*hidden argument*/NULL);
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00f4:
	{
		int32_t L_38 = V_6;
		ParameterInfoU5BU5D_t390618515* L_39 = V_7;
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length)))))))
		{
			goto IL_00bb;
		}
	}
	{
		StringBuilder_t * L_40 = V_0;
		StringBuilder_Append_m1965104174(L_40, _stringLiteral3452614535, /*hidden argument*/NULL);
		StackFrame_t3217253059 * L_41 = V_2;
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_41);
		V_9 = L_42;
		String_t* L_43 = V_9;
		if (!L_43)
		{
			goto IL_02ba;
		}
	}
	{
		Type_t * L_44 = V_4;
		String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_44);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_46 = String_op_Equality_m920492651(NULL /*static, unused*/, L_45, _stringLiteral2678398999, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0147;
		}
	}
	{
		Type_t * L_47 = V_4;
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_47);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_49 = String_op_Equality_m920492651(NULL /*static, unused*/, L_48, _stringLiteral1552523976, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_020c;
		}
	}

IL_0147:
	{
		Type_t * L_50 = V_4;
		String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_50);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_52 = String_op_Equality_m920492651(NULL /*static, unused*/, L_51, _stringLiteral6580196, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_53 = V_4;
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_53);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_55 = String_op_Equality_m920492651(NULL /*static, unused*/, L_54, _stringLiteral1552523976, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_020c;
		}
	}

IL_0173:
	{
		Type_t * L_56 = V_4;
		String_t* L_57 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_56);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_58 = String_op_Equality_m920492651(NULL /*static, unused*/, L_57, _stringLiteral3402824819, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_019f;
		}
	}
	{
		Type_t * L_59 = V_4;
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_59);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_61 = String_op_Equality_m920492651(NULL /*static, unused*/, L_60, _stringLiteral1552523976, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_020c;
		}
	}

IL_019f:
	{
		Type_t * L_62 = V_4;
		String_t* L_63 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_62);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_64 = String_op_Equality_m920492651(NULL /*static, unused*/, L_63, _stringLiteral1670073234, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_01cb;
		}
	}
	{
		Type_t * L_65 = V_4;
		String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_65);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_67 = String_op_Equality_m920492651(NULL /*static, unused*/, L_66, _stringLiteral1200226066, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_020c;
		}
	}

IL_01cb:
	{
		MethodBase_t * L_68 = V_3;
		String_t* L_69 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_68);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_70 = String_op_Equality_m920492651(NULL /*static, unused*/, L_69, _stringLiteral61343007, /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_0209;
		}
	}
	{
		Type_t * L_71 = V_4;
		String_t* L_72 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_71);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_73 = String_op_Equality_m920492651(NULL /*static, unused*/, L_72, _stringLiteral681811338, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0209;
		}
	}
	{
		Type_t * L_74 = V_4;
		String_t* L_75 = VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_74);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_76 = String_op_Equality_m920492651(NULL /*static, unused*/, L_75, _stringLiteral1552523976, /*hidden argument*/NULL);
		G_B27_0 = ((int32_t)(L_76));
		goto IL_020a;
	}

IL_0209:
	{
		G_B27_0 = 0;
	}

IL_020a:
	{
		G_B29_0 = G_B27_0;
		goto IL_020d;
	}

IL_020c:
	{
		G_B29_0 = 1;
	}

IL_020d:
	{
		V_10 = (bool)G_B29_0;
		bool L_77 = V_10;
		if (L_77)
		{
			goto IL_02b9;
		}
	}
	{
		StringBuilder_t * L_78 = V_0;
		StringBuilder_Append_m1965104174(L_78, _stringLiteral2177867675, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_79 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_80 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		if (L_80)
		{
			goto IL_027b;
		}
	}
	{
		String_t* L_81 = V_9;
		String_t* L_82 = String_Replace_m1273907647(L_81, _stringLiteral3452614644, _stringLiteral3452614529, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_83 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		bool L_84 = String_StartsWith_m1759067526(L_82, L_83, /*hidden argument*/NULL);
		if (!L_84)
		{
			goto IL_027a;
		}
	}
	{
		String_t* L_85 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_86 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		int32_t L_87 = String_get_Length_m3847582255(L_86, /*hidden argument*/NULL);
		String_t* L_88 = V_9;
		int32_t L_89 = String_get_Length_m3847582255(L_88, /*hidden argument*/NULL);
		String_t* L_90 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		int32_t L_91 = String_get_Length_m3847582255(L_90, /*hidden argument*/NULL);
		String_t* L_92 = String_Substring_m1610150815(L_85, L_87, ((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)L_91)), /*hidden argument*/NULL);
		V_9 = L_92;
	}

IL_027a:
	{
	}

IL_027b:
	{
		StringBuilder_t * L_93 = V_0;
		String_t* L_94 = V_9;
		StringBuilder_Append_m1965104174(L_93, L_94, /*hidden argument*/NULL);
		StringBuilder_t * L_95 = V_0;
		StringBuilder_Append_m1965104174(L_95, _stringLiteral3452614550, /*hidden argument*/NULL);
		StringBuilder_t * L_96 = V_0;
		StackFrame_t3217253059 * L_97 = V_2;
		int32_t L_98 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_97);
		V_11 = L_98;
		String_t* L_99 = Int32_ToString_m141394615((&V_11), /*hidden argument*/NULL);
		StringBuilder_Append_m1965104174(L_96, L_99, /*hidden argument*/NULL);
		StringBuilder_t * L_100 = V_0;
		StringBuilder_Append_m1965104174(L_100, _stringLiteral3452614535, /*hidden argument*/NULL);
	}

IL_02b9:
	{
	}

IL_02ba:
	{
		StringBuilder_t * L_101 = V_0;
		StringBuilder_Append_m1965104174(L_101, _stringLiteral3452614566, /*hidden argument*/NULL);
	}

IL_02c7:
	{
		int32_t L_102 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
	}

IL_02cb:
	{
		int32_t L_103 = V_1;
		StackTrace_t1598645457 * L_104 = ___stackTrace0;
		int32_t L_105 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_104);
		if ((((int32_t)L_103) < ((int32_t)L_105)))
		{
			goto IL_0013;
		}
	}
	{
		StringBuilder_t * L_106 = V_0;
		String_t* L_107 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_106);
		V_12 = L_107;
		goto IL_02e4;
	}

IL_02e4:
	{
		String_t* L_108 = V_12;
		return L_108;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern "C"  void StackTraceUtility__cctor_m1981266436 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility__cctor_m1981266436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->set_projectFolder_0(_stringLiteral757602046);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Texture::.ctor()
extern "C"  void Texture__ctor_m3554519797 (Texture_t3661962703 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture__ctor_m3554519797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*Time_get_deltaTime_m372706562_ftn) ();
	static Time_get_deltaTime_m372706562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m372706562_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Transform::.ctor()
extern "C"  void Transform__ctor_m3470711880 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m1928064382(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_INTERNAL_get_position_m1310184257(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Transform_INTERNAL_set_position_m3627767375(__this, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_get_position_m1310184257 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Transform_INTERNAL_get_position_m1310184257_ftn) (Transform_t3600365921 *, Vector3_t3722313464 *);
	static Transform_INTERNAL_get_position_m1310184257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m1310184257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_set_position_m3627767375 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Transform_INTERNAL_set_position_m3627767375_ftn) (Transform_t3600365921 *, Vector3_t3722313464 *);
	static Transform_INTERNAL_set_position_m3627767375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m3627767375_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Transform_get_childCount_m3145433196_ftn) (Transform_t3600365921 *);
	static Transform_get_childCount_m3145433196_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m3145433196_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transform_GetEnumerator_m2717073726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t3442430665 * L_0 = (Enumerator_t3442430665 *)il2cpp_codegen_object_new(Enumerator_t3442430665_il2cpp_TypeInfo_var);
		Enumerator__ctor_m1351041375(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef Transform_t3600365921 * (*Transform_GetChild_m1092972975_ftn) (Transform_t3600365921 *, int32_t);
	static Transform_GetChild_m1092972975_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m1092972975_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	Transform_t3600365921 * retVal = _il2cpp_icall_func(__this, ___index0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C"  void Enumerator__ctor_m1351041375 (Enumerator_t3442430665 * __this, Transform_t3600365921 * ___outer0, const RuntimeMethod* method)
{
	{
		__this->set_currentIndex_1((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_0 = ___outer0;
		__this->set_outer_0(L_0);
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m2591725252 (Enumerator_t3442430665 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Transform_t3600365921 * L_0 = __this->get_outer_0();
		int32_t L_1 = __this->get_currentIndex_1();
		Transform_t3600365921 * L_2 = Transform_GetChild_m1092972975(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C"  bool Enumerator_MoveNext_m4275888254 (Enumerator_t3442430665 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Transform_t3600365921 * L_0 = __this->get_outer_0();
		int32_t L_1 = Transform_get_childCount_m3145433196(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_currentIndex_1();
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		V_1 = L_3;
		__this->set_currentIndex_1(L_3);
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		goto IL_0027;
	}

IL_0027:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void UnityEngine.Transform/Enumerator::Reset()
extern "C"  void Enumerator_Reset_m39541243 (Enumerator_t3442430665 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentIndex_1((-1));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.U2D.SpriteAtlasManager::RequestAtlas(System.String)
extern "C"  bool SpriteAtlasManager_RequestAtlas_m455709951 (RuntimeObject * __this /* static, unused */, String_t* ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteAtlasManager_RequestAtlas_m455709951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* G_B3_0 = NULL;
	RequestAtlasCallback_t3100554279 * G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	RequestAtlasCallback_t3100554279 * G_B2_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		RequestAtlasCallback_t3100554279 * L_0 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_atlasRequested_0();
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		RequestAtlasCallback_t3100554279 * L_1 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_atlasRequested_0();
		String_t* L_2 = ___tag0;
		Action_1_t819399007 * L_3 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		G_B2_0 = L_2;
		G_B2_1 = L_1;
		if (L_3)
		{
			G_B3_0 = L_2;
			G_B3_1 = L_1;
			goto IL_002a;
		}
	}
	{
		intptr_t L_4 = (intptr_t)SpriteAtlasManager_Register_m2413332465_RuntimeMethod_var;
		Action_1_t819399007 * L_5 = (Action_1_t819399007 *)il2cpp_codegen_object_new(Action_1_t819399007_il2cpp_TypeInfo_var);
		Action_1__ctor_m3325790595(L_5, NULL, L_4, /*hidden argument*/Action_1__ctor_m3325790595_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_1(L_5);
		G_B3_0 = G_B2_0;
		G_B3_1 = G_B2_1;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		Action_1_t819399007 * L_6 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		RequestAtlasCallback_Invoke_m378128467(G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0042;
	}

IL_003b:
	{
		V_0 = (bool)0;
		goto IL_0042;
	}

IL_0042:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)
extern "C"  void SpriteAtlasManager_Register_m2413332465 (RuntimeObject * __this /* static, unused */, SpriteAtlas_t646931412 * ___spriteAtlas0, const RuntimeMethod* method)
{
	typedef void (*SpriteAtlasManager_Register_m2413332465_ftn) (SpriteAtlas_t646931412 *);
	static SpriteAtlasManager_Register_m2413332465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteAtlasManager_Register_m2413332465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)");
	_il2cpp_icall_func(___spriteAtlas0);
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::.cctor()
extern "C"  void SpriteAtlasManager__cctor_m3642741753 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteAtlasManager__cctor_m3642741753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->set_atlasRequested_0((RequestAtlasCallback_t3100554279 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_RequestAtlasCallback_t3100554279 (RequestAtlasCallback_t3100554279 * __this, String_t* ___tag0, Action_1_t819399007 * ___action1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, Il2CppMethodPointer);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___tag0' to native representation
	char* ____tag0_marshaled = NULL;
	____tag0_marshaled = il2cpp_codegen_marshal_string(___tag0);

	// Marshaling of parameter '___action1' to native representation
	Il2CppMethodPointer ____action1_marshaled = NULL;
	____action1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___action1));

	// Native function invocation
	il2cppPInvokeFunc(____tag0_marshaled, ____action1_marshaled);

	// Marshaling cleanup of parameter '___tag0' native representation
	il2cpp_codegen_marshal_free(____tag0_marshaled);
	____tag0_marshaled = NULL;

}
// System.Void UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void RequestAtlasCallback__ctor_m3023745648 (RequestAtlasCallback_t3100554279 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback::Invoke(System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>)
extern "C"  void RequestAtlasCallback_Invoke_m378128467 (RequestAtlasCallback_t3100554279 * __this, String_t* ___tag0, Action_1_t819399007 * ___action1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		RequestAtlasCallback_Invoke_m378128467((RequestAtlasCallback_t3100554279 *)__this->get_prev_9(), ___tag0, ___action1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, Action_1_t819399007 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___tag0, ___action1, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, Action_1_t819399007 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___tag0, ___action1, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, String_t*, Action_1_t819399007 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___action1, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (String_t*, Action_1_t819399007 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___tag0, ___action1, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback::BeginInvoke(System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* RequestAtlasCallback_BeginInvoke_m2655374249 (RequestAtlasCallback_t3100554279 * __this, String_t* ___tag0, Action_1_t819399007 * ___action1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___tag0;
	__d_args[1] = ___action1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback::EndInvoke(System.IAsyncResult)
extern "C"  void RequestAtlasCallback_EndInvoke_m2592639818 (RequestAtlasCallback_t3100554279 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UnityException::.ctor()
extern "C"  void UnityException__ctor_m1456865679 (UnityException_t3598173660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityException__ctor_m1456865679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception__ctor_m1152696503(__this, _stringLiteral3595826494, /*hidden argument*/NULL);
		Exception_set_HResult_m3489164646(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UnitySynchronizationContext::.ctor()
extern "C"  void UnitySynchronizationContext__ctor_m1707488257 (UnitySynchronizationContext_t1887453786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext__ctor_m1707488257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t1200778106 * L_0 = (Queue_1_t1200778106 *)il2cpp_codegen_object_new(Queue_1_t1200778106_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1971992302(L_0, ((int32_t)20), /*hidden argument*/Queue_1__ctor_m1971992302_RuntimeMethod_var);
		__this->set_m_AsyncWorkQueue_1(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_t2300836069 * L_1 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Thread_get_ManagedThreadId_m1068113671(L_1, /*hidden argument*/NULL);
		__this->set_m_MainThreadID_2(L_2);
		SynchronizationContext__ctor_m2514243817(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Exec()
extern "C"  void UnitySynchronizationContext_Exec_m3359802660 (UnitySynchronizationContext_t1887453786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Exec_m3359802660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	WorkRequest_t1354518612  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t1200778106 * L_0 = __this->get_m_AsyncWorkQueue_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0014:
		{
			Queue_1_t1200778106 * L_2 = __this->get_m_AsyncWorkQueue_1();
			WorkRequest_t1354518612  L_3 = Queue_1_Dequeue_m979967976(L_2, /*hidden argument*/Queue_1_Dequeue_m979967976_RuntimeMethod_var);
			V_1 = L_3;
			WorkRequest_Invoke_m3488164927((&V_1), /*hidden argument*/NULL);
		}

IL_0029:
		{
			Queue_1_t1200778106 * L_4 = __this->get_m_AsyncWorkQueue_1();
			int32_t L_5 = Queue_1_get_Count_m3368911732(L_4, /*hidden argument*/Queue_1_get_Count_m3368911732_RuntimeMethod_var);
			if ((((int32_t)L_5) > ((int32_t)0)))
			{
				goto IL_0014;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0047:
	{
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::InitializeSynchronizationContext()
extern "C"  void UnitySynchronizationContext_InitializeSynchronizationContext_m3217591031 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_InitializeSynchronizationContext_m3217591031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext_t2326897723 * L_0 = SynchronizationContext_get_Current_m3666546046(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		UnitySynchronizationContext_t1887453786 * L_1 = (UnitySynchronizationContext_t1887453786 *)il2cpp_codegen_object_new(UnitySynchronizationContext_t1887453786_il2cpp_TypeInfo_var);
		UnitySynchronizationContext__ctor_m1707488257(L_1, /*hidden argument*/NULL);
		SynchronizationContext_SetSynchronizationContext_m1249070039(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::ExecuteTasks()
extern "C"  void UnitySynchronizationContext_ExecuteTasks_m1310741010 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_ExecuteTasks_m1310741010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnitySynchronizationContext_t1887453786 * V_0 = NULL;
	{
		SynchronizationContext_t2326897723 * L_0 = SynchronizationContext_get_Current_m3666546046(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((UnitySynchronizationContext_t1887453786 *)IsInstSealed((RuntimeObject*)L_0, UnitySynchronizationContext_t1887453786_il2cpp_TypeInfo_var));
		UnitySynchronizationContext_t1887453786 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		UnitySynchronizationContext_t1887453786 * L_2 = V_0;
		UnitySynchronizationContext_Exec_m3359802660(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t1354518612_marshal_pinvoke(const WorkRequest_t1354518612& unmarshaled, WorkRequest_t1354518612_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception);
}
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_back(const WorkRequest_t1354518612_marshaled_pinvoke& marshaled, WorkRequest_t1354518612& unmarshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_cleanup(WorkRequest_t1354518612_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t1354518612_marshal_com(const WorkRequest_t1354518612& unmarshaled, WorkRequest_t1354518612_marshaled_com& marshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception);
}
extern "C" void WorkRequest_t1354518612_marshal_com_back(const WorkRequest_t1354518612_marshaled_com& marshaled, WorkRequest_t1354518612& unmarshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t1354518612_marshal_com_cleanup(WorkRequest_t1354518612_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::Invoke()
extern "C"  void WorkRequest_Invoke_m3488164927 (WorkRequest_t1354518612 * __this, const RuntimeMethod* method)
{
	{
		SendOrPostCallback_t2750080073 * L_0 = __this->get_m_DelagateCallback_0();
		RuntimeObject * L_1 = __this->get_m_DelagateState_1();
		SendOrPostCallback_Invoke_m937799800(L_0, L_1, /*hidden argument*/NULL);
		ManualResetEvent_t451242010 * L_2 = __this->get_m_WaitHandle_2();
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		ManualResetEvent_t451242010 * L_3 = __this->get_m_WaitHandle_2();
		EventWaitHandle_Set_m2445193251(L_3, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
extern "C"  void WorkRequest_Invoke_m3488164927_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	WorkRequest_t1354518612 * _thisAdjusted = reinterpret_cast<WorkRequest_t1354518612 *>(__this + 1);
	WorkRequest_Invoke_m3488164927(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
extern "C"  void Vector2__ctor_m3970636864_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	Vector2__ctor_m3970636864(_thisAdjusted, ___x0, ___y1, method);
}
// System.String UnityEngine.Vector2::ToString()
extern "C"  String_t* Vector2_ToString_m1205609053 (Vector2_t2156229523 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_ToString_m1205609053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		float L_1 = __this->get_x_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		float L_5 = __this->get_y_1();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		String_t* L_8 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral2738543532, L_4, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0033;
	}

IL_0033:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
extern "C"  String_t* Vector2_ToString_m1205609053_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	return Vector2_ToString_m1205609053(_thisAdjusted, method);
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C"  int32_t Vector2_GetHashCode_m3916089713 (Vector2_t2156229523 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		int32_t L_1 = Single_GetHashCode_m1558506138(L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_1();
		int32_t L_3 = Single_GetHashCode_m1558506138(L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
		goto IL_002c;
	}

IL_002c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  int32_t Vector2_GetHashCode_m3916089713_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	return Vector2_GetHashCode_m3916089713(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C"  bool Vector2_Equals_m832062989 (Vector2_t2156229523 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_Equals_m832062989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector2_t2156229523_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_004c;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		V_1 = ((*(Vector2_t2156229523 *)((Vector2_t2156229523 *)UnBox(L_1, Vector2_t2156229523_il2cpp_TypeInfo_var))));
		float* L_2 = __this->get_address_of_x_0();
		float L_3 = (&V_1)->get_x_0();
		bool L_4 = Single_Equals_m1601893879(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		float* L_5 = __this->get_address_of_y_1();
		float L_6 = (&V_1)->get_y_1();
		bool L_7 = Single_Equals_m1601893879(L_5, L_6, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0046;
	}

IL_0045:
	{
		G_B5_0 = 0;
	}

IL_0046:
	{
		V_0 = (bool)G_B5_0;
		goto IL_004c;
	}

IL_004c:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
extern "C"  bool Vector2_Equals_m832062989_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	return Vector2_Equals_m832062989(_thisAdjusted, ___other0, method);
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C"  float Vector2_get_sqrMagnitude_m837837635 (Vector2_t2156229523 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_x_0();
		float L_2 = __this->get_y_1();
		float L_3 = __this->get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3))));
		goto IL_0022;
	}

IL_0022:
	{
		float L_4 = V_0;
		return L_4;
	}
}
extern "C"  float Vector2_get_sqrMagnitude_m837837635_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	return Vector2_get_sqrMagnitude_m837837635(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___a0, Vector2_t2156229523  ___b1, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___b1)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___b1)->get_y_1();
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), ((float)il2cpp_codegen_add((float)L_0, (float)L_1)), ((float)il2cpp_codegen_add((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		Vector2_t2156229523  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___a0, Vector2_t2156229523  ___b1, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___b1)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___b1)->get_y_1();
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		Vector2_t2156229523  L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool Vector2_op_Equality_m2303255133 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___lhs0, Vector2_t2156229523  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_op_Equality_m2303255133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		Vector2_t2156229523  L_0 = ___lhs0;
		Vector2_t2156229523  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector2_get_sqrMagnitude_m837837635((&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___v0, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___v0)->get_x_0();
		float L_1 = (&___v0)->get_y_1();
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		Vector2_t2156229523  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___v0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___v0)->get_x_0();
		float L_1 = (&___v0)->get_y_1();
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), L_0, L_1, (0.0f), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		Vector3_t3722313464  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Vector2::.cctor()
extern "C"  void Vector2__cctor_m2108982652 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2__cctor_m2108982652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_zeroVector_2(L_0);
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_oneVector_3(L_1);
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_upVector_4(L_2);
		Vector2_t2156229523  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3970636864((&L_3), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_downVector_5(L_3);
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), (-1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_leftVector_6(L_4);
		Vector2_t2156229523  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector2__ctor_m3970636864((&L_5), (1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_rightVector_7(L_5);
		Vector2_t2156229523  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3970636864((&L_6), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_positiveInfinityVector_8(L_6);
		Vector2_t2156229523  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3970636864((&L_7), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_negativeInfinityVector_9(L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		return;
	}
}
extern "C"  void Vector3__ctor_m3353183577_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	Vector3__ctor_m3353183577(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C"  int32_t Vector3_GetHashCode_m2879461828 (Vector3_t3722313464 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		int32_t L_1 = Single_GetHashCode_m1558506138(L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_1();
		int32_t L_3 = Single_GetHashCode_m1558506138(L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_2();
		int32_t L_5 = Single_GetHashCode_m1558506138(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
		goto IL_0040;
	}

IL_0040:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
extern "C"  int32_t Vector3_GetHashCode_m2879461828_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	return Vector3_GetHashCode_m2879461828(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C"  bool Vector3_Equals_m1753054704 (Vector3_t3722313464 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Equals_m1753054704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B6_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector3_t3722313464_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0063;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		V_1 = ((*(Vector3_t3722313464 *)((Vector3_t3722313464 *)UnBox(L_1, Vector3_t3722313464_il2cpp_TypeInfo_var))));
		float* L_2 = __this->get_address_of_x_0();
		float L_3 = (&V_1)->get_x_0();
		bool L_4 = Single_Equals_m1601893879(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		float* L_5 = __this->get_address_of_y_1();
		float L_6 = (&V_1)->get_y_1();
		bool L_7 = Single_Equals_m1601893879(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		float* L_8 = __this->get_address_of_z_2();
		float L_9 = (&V_1)->get_z_2();
		bool L_10 = Single_Equals_m1601893879(L_8, L_9, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_005d;
	}

IL_005c:
	{
		G_B6_0 = 0;
	}

IL_005d:
	{
		V_0 = (bool)G_B6_0;
		goto IL_0063;
	}

IL_0063:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
extern "C"  bool Vector3_Equals_m1753054704_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	return Vector3_Equals_m1753054704(_thisAdjusted, ___other0, method);
}
// System.String UnityEngine.Vector3::ToString()
extern "C"  String_t* Vector3_ToString_m759076600 (Vector3_t3722313464 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_ToString_m759076600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		float L_1 = __this->get_x_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		float L_5 = __this->get_y_1();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		float L_9 = __this->get_z_2();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		String_t* L_12 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral122510266, L_8, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0041;
	}

IL_0041:
	{
		String_t* L_13 = V_0;
		return L_13;
	}
}
extern "C"  String_t* Vector3_ToString_m759076600_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	return Vector3_ToString_m759076600(_thisAdjusted, method);
}
// System.Void UnityEngine.Vector3::.cctor()
extern "C"  void Vector3__cctor_m2599650684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3__cctor_m2599650684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m3353183577((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_zeroVector_3(L_0);
		Vector3_t3722313464  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m3353183577((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_oneVector_4(L_1);
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_upVector_5(L_2);
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_downVector_6(L_3);
		Vector3_t3722313464  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m3353183577((&L_4), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_leftVector_7(L_4);
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_rightVector_8(L_5);
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_forwardVector_9(L_6);
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_backVector_10(L_7);
		Vector3_t3722313464  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m3353183577((&L_8), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_positiveInfinityVector_11(L_8);
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_negativeInfinityVector_12(L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke(const WaitForSeconds_t1699091251& unmarshaled, WaitForSeconds_t1699091251_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_back(const WaitForSeconds_t1699091251_marshaled_pinvoke& marshaled, WaitForSeconds_t1699091251& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_cleanup(WaitForSeconds_t1699091251_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1699091251_marshal_com(const WaitForSeconds_t1699091251& unmarshaled, WaitForSeconds_t1699091251_marshaled_com& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t1699091251_marshal_com_back(const WaitForSeconds_t1699091251_marshaled_com& marshaled, WaitForSeconds_t1699091251& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1699091251_marshal_com_cleanup(WaitForSeconds_t1699091251_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t403091072_marshal_pinvoke(const YieldInstruction_t403091072& unmarshaled, YieldInstruction_t403091072_marshaled_pinvoke& marshaled)
{
}
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_back(const YieldInstruction_t403091072_marshaled_pinvoke& marshaled, YieldInstruction_t403091072& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_cleanup(YieldInstruction_t403091072_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t403091072_marshal_com(const YieldInstruction_t403091072& unmarshaled, YieldInstruction_t403091072_marshaled_com& marshaled)
{
}
extern "C" void YieldInstruction_t403091072_marshal_com_back(const YieldInstruction_t403091072_marshaled_com& marshaled, YieldInstruction_t403091072& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t403091072_marshal_com_cleanup(YieldInstruction_t403091072_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern "C"  void MathfInternal__cctor_m2622893686 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m2622893686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t624072491_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t624072491_il2cpp_TypeInfo_var))->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t624072491_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t624072491_il2cpp_TypeInfo_var))->set_FloatMinDenormal_1((1.401298E-45f));
		float L_0 = ((MathfInternal_t624072491_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t624072491_il2cpp_TypeInfo_var))->get_FloatMinDenormal_1();
		il2cpp_codegen_memory_barrier();
		float L_1 = Interlocked_CompareExchange_m4173283112(NULL /*static, unused*/, (((MathfInternal_t624072491_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t624072491_il2cpp_TypeInfo_var))->get_address_of_FloatMinDenormal_1()), L_0, (0.0f), /*hidden argument*/NULL);
		((MathfInternal_t624072491_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t624072491_il2cpp_TypeInfo_var))->set_IsFlushToZeroEnabled_2((bool)((((float)L_1) == ((float)(0.0f)))? 1 : 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C"  Delegate_t1188392813 * NetFxCoreExtensions_CreateDelegate_m751211712 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, RuntimeObject * ___target2, const RuntimeMethod* method)
{
	Delegate_t1188392813 * V_0 = NULL;
	{
		Type_t * L_0 = ___delegateType1;
		RuntimeObject * L_1 = ___target2;
		MethodInfo_t * L_2 = ___self0;
		Delegate_t1188392813 * L_3 = Delegate_CreateDelegate_m995503480(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		Delegate_t1188392813 * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern "C"  void TypeInferenceRuleAttribute__ctor_m3137488504 (TypeInferenceRuleAttribute_t254868554 * __this, int32_t ___rule0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m3137488504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(TypeInferenceRules_t96689094_il2cpp_TypeInfo_var, (&___rule0));
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___rule0 = *(int32_t*)UnBox(L_0);
		TypeInferenceRuleAttribute__ctor_m2736695831(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m2736695831 (TypeInferenceRuleAttribute_t254868554 * __this, String_t* ___rule0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule0;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C"  String_t* TypeInferenceRuleAttribute_ToString_m4089326196 (TypeInferenceRuleAttribute_t254868554 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get__rule_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
