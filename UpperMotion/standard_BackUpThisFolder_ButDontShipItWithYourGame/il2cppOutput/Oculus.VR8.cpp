﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<OVRCameraRig>
struct Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct KeyCollection_t3CD0D6331A5AECDB84A4B9837420F0C50AA8F4F7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyCollection_t358D9D86EA73609D5A330DEAD2AFC492CC3882BA;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<OVRRaycaster/RaycastHit>
struct List_1_t9F19053F72A3E5B96604F70A14B49B27869D5C97;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t6D515F3BEDA0E1BF16E735CE960F740AB8ACBDD3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>[]
struct EntryU5BU5D_tD6E39CDF844AFC3D70C8C36A17734FEA6F4ED2AA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.EventSystems.PointerEventData>[]
struct EntryU5BU5D_t9F389575B9AE1F230AC15DBCA6E6007A112E6440;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// OVR.OpenVR.CVRApplications
struct CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA;
// OVR.OpenVR.CVRChaperone
struct CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7;
// OVR.OpenVR.CVRChaperoneSetup
struct CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A;
// OVR.OpenVR.CVRCompositor
struct CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D;
// OVR.OpenVR.CVRExtendedDisplay
struct CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE;
// OVR.OpenVR.CVRInput
struct CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F;
// OVR.OpenVR.CVROverlay
struct CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D;
// OVR.OpenVR.CVRRenderModels
struct CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414;
// OVR.OpenVR.CVRScreenshots
struct CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23;
// OVR.OpenVR.CVRSettings
struct CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA;
// OVR.OpenVR.CVRSpatialAnchors
struct CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C;
// OVR.OpenVR.CVRSystem
struct CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A;
// OVR.OpenVR.CVRTrackedCamera
struct CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Assets.OVR.Scripts.FixMethodDelegate
struct FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F;
// Assets.OVR.Scripts.FixRecord
struct FixRecord_tA9619245BB76F73A6E03002DD6C237812E79254D;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.EventSystems.IBeginDragHandler
struct IBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB;
// UnityEngine.EventSystems.ICancelHandler
struct ICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.EventSystems.IDragHandler
struct IDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D;
// UnityEngine.EventSystems.IDropHandler
struct IDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35;
// UnityEngine.EventSystems.IEndDragHandler
struct IEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9;
// UnityEngine.EventSystems.IInitializePotentialDragHandler
struct IInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E;
// UnityEngine.EventSystems.IMoveHandler
struct IMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB;
// UnityEngine.EventSystems.IPointerClickHandler
struct IPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8;
// UnityEngine.EventSystems.IPointerDownHandler
struct IPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573;
// UnityEngine.EventSystems.IPointerUpHandler
struct IPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// UnityEngine.EventSystems.ISubmitHandler
struct ISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75;
// UnityEngine.EventSystems.IUpdateSelectedHandler
struct IUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9;
// OVRCursor
struct OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A;
// UnityEngine.EventSystems.OVRInputModule
struct OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A;
// UnityEngine.EventSystems.OVRPhysicsRaycaster
struct OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7;
// UnityEngine.EventSystems.OVRPointerEventData
struct OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D;
// OVRRaycaster
struct OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Oculus.XR.OculusXRFeature
struct OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94;
// OVR.OpenVR.OpenVR
struct OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556;
// Assets.OVR.Scripts.RangedRecord
struct RangedRecord_t25D9982F58541F843CB54DC4E4B246EFCBD29699;
// Assets.OVR.Scripts.Record
struct Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// OVR.OpenVR.IVRApplications/_AddApplicationManifest
struct _AddApplicationManifest_tB2134603E7C8088A9AA673F7A4A4D1C0E28E6824;
// OVR.OpenVR.IVRApplications/_CancelApplicationLaunch
struct _CancelApplicationLaunch_t86934ADDD52239E3D1F9035336F5654191803B0F;
// OVR.OpenVR.IVRApplications/_GetApplicationAutoLaunch
struct _GetApplicationAutoLaunch_tD3C961C939CCE20AB711DBC4CCEA75D1FD7D16B5;
// OVR.OpenVR.IVRApplications/_GetApplicationCount
struct _GetApplicationCount_t66BD00649FFD743E4B2DAF999E24B49BCF244539;
// OVR.OpenVR.IVRApplications/_GetApplicationKeyByIndex
struct _GetApplicationKeyByIndex_t77640F4E3EA4CE9EEA3EE69375BC7C3961D78EBF;
// OVR.OpenVR.IVRApplications/_GetApplicationKeyByProcessId
struct _GetApplicationKeyByProcessId_t6B2248A5ECF00F41007B20CC0586C28643D4D023;
// OVR.OpenVR.IVRApplications/_GetApplicationLaunchArguments
struct _GetApplicationLaunchArguments_t69693DEB05938AADA158E81C8AAF88C501D0B109;
// OVR.OpenVR.IVRApplications/_GetApplicationProcessId
struct _GetApplicationProcessId_tE62C7B73085BFC11F339CC0661133F7B28FDBA13;
// OVR.OpenVR.IVRApplications/_GetApplicationPropertyBool
struct _GetApplicationPropertyBool_t98CF7E6039202B54DA9795BA6162EDEBF83D7816;
// OVR.OpenVR.IVRApplications/_GetApplicationPropertyString
struct _GetApplicationPropertyString_t6FE1E9F99C8355CDBA68F8976D5FEB7858D70197;
// OVR.OpenVR.IVRApplications/_GetApplicationPropertyUint64
struct _GetApplicationPropertyUint64_t771851CC95671A19F55B282C84959CC18367004C;
// OVR.OpenVR.IVRApplications/_GetApplicationSupportedMimeTypes
struct _GetApplicationSupportedMimeTypes_t382D111237AD7EF7B8E195D7D312FBA291785F3E;
// OVR.OpenVR.IVRApplications/_GetApplicationsErrorNameFromEnum
struct _GetApplicationsErrorNameFromEnum_tD413DF2229541511448BA791425742744A6187FF;
// OVR.OpenVR.IVRApplications/_GetApplicationsThatSupportMimeType
struct _GetApplicationsThatSupportMimeType_t13E456F2E3BB757B38C782C8D232665D83768832;
// OVR.OpenVR.IVRApplications/_GetApplicationsTransitionStateNameFromEnum
struct _GetApplicationsTransitionStateNameFromEnum_tE7256117DDFAF6CDAD71A9D0CE7EFDC83B5D7D46;
// OVR.OpenVR.IVRApplications/_GetCurrentSceneProcessId
struct _GetCurrentSceneProcessId_t71F4BAE23AE7A3333D0BD7AB0264B1BCC96BD05F;
// OVR.OpenVR.IVRApplications/_GetDefaultApplicationForMimeType
struct _GetDefaultApplicationForMimeType_t33F32E03564ED826685AA592774DC85C14BEEDD8;
// OVR.OpenVR.IVRApplications/_GetStartingApplication
struct _GetStartingApplication_tDA95EDF3BE1DC20FBC8B29DC987670CDBEE52B0D;
// OVR.OpenVR.IVRApplications/_GetTransitionState
struct _GetTransitionState_t7860EFB586686276E29A860FC05FFBEABFDC2C3E;
// OVR.OpenVR.IVRApplications/_IdentifyApplication
struct _IdentifyApplication_tFBEE85C3E7A2DC6EA2A6DB00016C157FE76BFE5C;
// OVR.OpenVR.IVRApplications/_IsApplicationInstalled
struct _IsApplicationInstalled_tDC846A5201A9A9ED5858D562FF23FF7F582B416A;
// OVR.OpenVR.IVRApplications/_IsQuitUserPromptRequested
struct _IsQuitUserPromptRequested_t92A7613624BD682887D5A8967C83708099EE5BBA;
// OVR.OpenVR.IVRApplications/_LaunchApplication
struct _LaunchApplication_t6ADF874C0C2962F95CBE36AFD2FEED4891959688;
// OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType
struct _LaunchApplicationFromMimeType_t9295A82DBD19BF9E20F03F490E3E0A1A22BA02E1;
// OVR.OpenVR.IVRApplications/_LaunchDashboardOverlay
struct _LaunchDashboardOverlay_tFEDDA05647EEBAEA00B195476EDA456EB775591D;
// OVR.OpenVR.IVRApplications/_LaunchInternalProcess
struct _LaunchInternalProcess_t6777545D14DAA61D1A83A5A3DA51018CCA92E4BF;
// OVR.OpenVR.IVRApplications/_LaunchTemplateApplication
struct _LaunchTemplateApplication_t02E892FFFEE8F4E79A54EFE4766F78E9F97BFB26;
// OVR.OpenVR.IVRApplications/_PerformApplicationPrelaunchCheck
struct _PerformApplicationPrelaunchCheck_t6EF3B4EE8FF95B1E260B81AB953E671803758FCB;
// OVR.OpenVR.IVRApplications/_RemoveApplicationManifest
struct _RemoveApplicationManifest_tB91807F57CF8DD61E9E0CC48BE57D15807E07B49;
// OVR.OpenVR.IVRApplications/_SetApplicationAutoLaunch
struct _SetApplicationAutoLaunch_t4646DA1CC3440D864DA4D8C2DF9547E8D8CA0E1E;
// OVR.OpenVR.IVRApplications/_SetDefaultApplicationForMimeType
struct _SetDefaultApplicationForMimeType_t20EAD51B0D0B39DEB7D40E66B3F112F0651A852B;
// OVR.OpenVR.IVRChaperone/_AreBoundsVisible
struct _AreBoundsVisible_tF8D7BD9887C25D87D0D446B0CD4862D9F2D679F1;
// OVR.OpenVR.IVRChaperone/_ForceBoundsVisible
struct _ForceBoundsVisible_t1A5CB76DC93B2C2BFF16D0621E300E8CA01039C6;
// OVR.OpenVR.IVRChaperone/_GetBoundsColor
struct _GetBoundsColor_t5336B5AE8B44BE10ACD232B1EC9501558C2F296D;
// OVR.OpenVR.IVRChaperone/_GetCalibrationState
struct _GetCalibrationState_t1AFD85FE859C72ADD2600F3AA6050C762BFDA8A6;
// OVR.OpenVR.IVRChaperone/_GetPlayAreaRect
struct _GetPlayAreaRect_t4EF5A642F58B105515B6F1334090F35E66072599;
// OVR.OpenVR.IVRChaperone/_GetPlayAreaSize
struct _GetPlayAreaSize_tD8DCFD70AE2DFF421706C976BE912C1AE8199D98;
// OVR.OpenVR.IVRChaperone/_ReloadInfo
struct _ReloadInfo_tD325C5625CAF6B2D6B26CA4C6674555470743FC8;
// OVR.OpenVR.IVRChaperone/_SetSceneColor
struct _SetSceneColor_tDF31CB54DC4C6C2B36AC1078D2F920803BA525BA;
// OVR.OpenVR.IVRChaperoneSetup/_CommitWorkingCopy
struct _CommitWorkingCopy_t9880727C4FC8722E12AD8A2037A297558AB65A5D;
// OVR.OpenVR.IVRChaperoneSetup/_ExportLiveToBuffer
struct _ExportLiveToBuffer_tF5FBF7E71CFA6172127F8365E3C5D5334C46E303;
// OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo
struct _GetLiveCollisionBoundsInfo_tBBF95292081C1D6AFCC74D184E2D5F97658C2BE3;
// OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
struct _GetLiveCollisionBoundsTagsInfo_tEEE0147816C31226E25310B10CF277EF4B77959C;
// OVR.OpenVR.IVRChaperoneSetup/_GetLivePhysicalBoundsInfo
struct _GetLivePhysicalBoundsInfo_t94E32D16FF7B09EC1D82B0E75718F164AF3C365D;
// OVR.OpenVR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose
struct _GetLiveSeatedZeroPoseToRawTrackingPose_t835E3470CE57F4057BD78A49E82DF20E4BFAACEB;
// OVR.OpenVR.IVRChaperoneSetup/_GetWorkingCollisionBoundsInfo
struct _GetWorkingCollisionBoundsInfo_tFA8242F1BE7D745000AC58309B1FF2D43B229D34;
// OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaRect
struct _GetWorkingPlayAreaRect_t7D3E0087CFA846DD295B57F7B1FEF5DF0D3AE24D;
// OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaSize
struct _GetWorkingPlayAreaSize_t7DBA8CB4F72E476C33FC993949DFE50F4439DD94;
// OVR.OpenVR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose
struct _GetWorkingSeatedZeroPoseToRawTrackingPose_tE4AB0E734686910A211A85F28F949B9BD6D71B9C;
// OVR.OpenVR.IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose
struct _GetWorkingStandingZeroPoseToRawTrackingPose_t4EC1736EF81202A06AB43288B0755CDA70D25C2E;
// OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking
struct _ImportFromBufferToWorking_t16903557624BDA57E7BC42CFDA654DA7638AA641;
// OVR.OpenVR.IVRChaperoneSetup/_ReloadFromDisk
struct _ReloadFromDisk_tC88E3E23183913569FB5D76838BD1F507A9E66DF;
// OVR.OpenVR.IVRChaperoneSetup/_RevertWorkingCopy
struct _RevertWorkingCopy_tD878AE47408B87BFBD9F88411696E4D66A9166F5;
// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo
struct _SetWorkingCollisionBoundsInfo_t0DB6624DDC34CC10CB7B225EC7B085CB28EBBD70;
// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo
struct _SetWorkingCollisionBoundsTagsInfo_t8BB773F52B942457EF50428476486A892D4D6C7E;
// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo
struct _SetWorkingPhysicalBoundsInfo_tD0E7DF0A43941807DC038C58539FCAD158104270;
// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPlayAreaSize
struct _SetWorkingPlayAreaSize_t6CF2DBD1BD53727008F32DECEC5333B6BA01DA2A;
// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose
struct _SetWorkingSeatedZeroPoseToRawTrackingPose_tD23D5C8E2151D6E1E6961881994FB8E22A48CD27;
// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose
struct _SetWorkingStandingZeroPoseToRawTrackingPose_tD3C959C457F041DBDB5536BFA162394586780DEC;
// OVR.OpenVR.IVRCompositor/_CanRenderScene
struct _CanRenderScene_t87BD55B23A6E762F046FEC7A07AEAEF4256C61AB;
// OVR.OpenVR.IVRCompositor/_ClearLastSubmittedFrame
struct _ClearLastSubmittedFrame_tAFC2410938A79F715664C19A2F2C3CE9BA5DC544;
// OVR.OpenVR.IVRCompositor/_ClearSkyboxOverride
struct _ClearSkyboxOverride_t46B668F129492C03591F08B0BE9AFDBB97A00691;
// OVR.OpenVR.IVRCompositor/_CompositorBringToFront
struct _CompositorBringToFront_t3D928D19F5047ECA3746D22DB2DFF8F1154B6274;
// OVR.OpenVR.IVRCompositor/_CompositorDumpImages
struct _CompositorDumpImages_t2C607DC32885967B6D53D75F5681FF58D419AFF1;
// OVR.OpenVR.IVRCompositor/_CompositorGoToBack
struct _CompositorGoToBack_t253B7AA8875601E4359CF02577C6243E44DF3272;
// OVR.OpenVR.IVRCompositor/_CompositorQuit
struct _CompositorQuit_t6F2BD0FE1FEC12D10AB988127D619C4DE16DC2FB;
// OVR.OpenVR.IVRCompositor/_FadeGrid
struct _FadeGrid_t650CDF2A23FC729AC210548E8CBA0CB913B96979;
// OVR.OpenVR.IVRCompositor/_FadeToColor
struct _FadeToColor_t121E6287BED1BD11330F7D40E4468E800A3F9884;
// OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn
struct _ForceInterleavedReprojectionOn_t2E2159CCDB19E331E6F37A293765F1646A56DA22;
// OVR.OpenVR.IVRCompositor/_ForceReconnectProcess
struct _ForceReconnectProcess_tD19461D2311A958A867AAE0F41FCBA76495CA56B;
// OVR.OpenVR.IVRCompositor/_GetCumulativeStats
struct _GetCumulativeStats_tD4D354FC6FC968C74965B559E9024A51685E5855;
// OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor
struct _GetCurrentFadeColor_t2D44A08815BA84F67615068B442EA5EEB7A0BE7A;
// OVR.OpenVR.IVRCompositor/_GetCurrentGridAlpha
struct _GetCurrentGridAlpha_t7487679E150A9E30EACD9E79986D9A16DF14025B;
// OVR.OpenVR.IVRCompositor/_GetCurrentSceneFocusProcess
struct _GetCurrentSceneFocusProcess_tCF8A2124575A09E3929B5B8A421C99FD95FCC79C;
// OVR.OpenVR.IVRCompositor/_GetFrameTimeRemaining
struct _GetFrameTimeRemaining_t67ADEF5FEFDF70005598F4765C6396DD22FA6001;
// OVR.OpenVR.IVRCompositor/_GetFrameTiming
struct _GetFrameTiming_t9615F6E82A00672215641F1ED69036DDCAEAB4B4;
// OVR.OpenVR.IVRCompositor/_GetFrameTimings
struct _GetFrameTimings_tD753E5BEC77A893B88CA8B01985E43C6DC4CE051;
// OVR.OpenVR.IVRCompositor/_GetLastFrameRenderer
struct _GetLastFrameRenderer_t244108CB75920FA45C3C8C49F9DF411283392DE6;
// OVR.OpenVR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex
struct _GetLastPoseForTrackedDeviceIndex_t5A0CA1821264304990B74D6D8A4F35C1B83F0BAF;
// OVR.OpenVR.IVRCompositor/_GetLastPoses
struct _GetLastPoses_t5B065AF3302B75CC6E4503A49AB098E2C374BFAD;
// OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11
struct _GetMirrorTextureD3D11_t733C3FDD9CC32072F8C2CF65DB3455724D892783;
// OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL
struct _GetMirrorTextureGL_t6930BF51F5E7D78D356A7BE75D862736E605A653;
// OVR.OpenVR.IVRCompositor/_GetTrackingSpace
struct _GetTrackingSpace_t0562B59D5C76631A46ED7D4D5D00072DAA86D932;
// OVR.OpenVR.IVRCompositor/_GetVulkanDeviceExtensionsRequired
struct _GetVulkanDeviceExtensionsRequired_tE8B9F0DC9BE6558BED74371D154A5676F1EC6593;
// OVR.OpenVR.IVRCompositor/_GetVulkanInstanceExtensionsRequired
struct _GetVulkanInstanceExtensionsRequired_t02214D401773984820B15BB8BA1873BE301E0B7D;
// OVR.OpenVR.IVRCompositor/_HideMirrorWindow
struct _HideMirrorWindow_t2AF8703671D7F3CA01738924AC4935CE82317F0A;
// OVR.OpenVR.IVRCompositor/_IsFullscreen
struct _IsFullscreen_tFD9DFC2C0CF21DDAB127E99BF936B17E188DAFFA;
// OVR.OpenVR.IVRCompositor/_IsMirrorWindowVisible
struct _IsMirrorWindowVisible_tEEC6293C1C832ACF124B96757EBDBF064BBDBDBF;
// OVR.OpenVR.IVRCompositor/_LockGLSharedTextureForAccess
struct _LockGLSharedTextureForAccess_t5A3857BB8E6BC71B0E2BC317C4915A0744F8E9EC;
// OVR.OpenVR.IVRCompositor/_PostPresentHandoff
struct _PostPresentHandoff_t2FB1A151C07D0DBD1CFAD942FD9C57595C89A118;
// OVR.OpenVR.IVRCompositor/_ReleaseMirrorTextureD3D11
struct _ReleaseMirrorTextureD3D11_tFDF453C21A503D26C0A7CD18323D53E6D527F10A;
// OVR.OpenVR.IVRCompositor/_ReleaseSharedGLTexture
struct _ReleaseSharedGLTexture_t5F693BC0577C88F2EE86A139F306C868B0BA3921;
// OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode
struct _SetExplicitTimingMode_t12D5085E4D2285D32D78A90A97AEC2D1EEA6898C;
// OVR.OpenVR.IVRCompositor/_SetSkyboxOverride
struct _SetSkyboxOverride_t799A7CCEE3BFB04FA19C37FA15DAF2072B981D1F;
// OVR.OpenVR.IVRCompositor/_SetTrackingSpace
struct _SetTrackingSpace_tBFF6CE3D8987B3CB8288FD148CA4E7882A9C754E;
// OVR.OpenVR.IVRCompositor/_ShouldAppRenderWithLowResources
struct _ShouldAppRenderWithLowResources_t6CBAEE18B3987BBBC64E748CF31AA0801DD4CDB4;
// OVR.OpenVR.IVRCompositor/_ShowMirrorWindow
struct _ShowMirrorWindow_tAB2A3E209CE89E9F4715D5A5C3D0BE1FB8E8A3F4;
// OVR.OpenVR.IVRCompositor/_Submit
struct _Submit_t0F332246BDCEBC756C84B4EAD2486D627769135A;
// OVR.OpenVR.IVRCompositor/_SubmitExplicitTimingData
struct _SubmitExplicitTimingData_t0AC2595316A9044B5B49CB787DC94AE767995C1E;
// OVR.OpenVR.IVRCompositor/_SuspendRendering
struct _SuspendRendering_tB799E0505ACBE20AFAF327ED90A7C055CD496183;
// OVR.OpenVR.IVRCompositor/_UnlockGLSharedTextureForAccess
struct _UnlockGLSharedTextureForAccess_t627213672696F793927BFE4FBE1591E0DA645705;
// OVR.OpenVR.IVRCompositor/_WaitGetPoses
struct _WaitGetPoses_t65ED9115B474A9A3B0700D8807CFB5A723A60A08;
// OVR.OpenVR.IVRExtendedDisplay/_GetDXGIOutputInfo
struct _GetDXGIOutputInfo_t0B5CC37DCD207B5A6B0606B0C54D5B756BC7F243;
// OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport
struct _GetEyeOutputViewport_t37FBB86EDF06894BE0CE1DD396F8FD6B97E569E5;
// OVR.OpenVR.IVRExtendedDisplay/_GetWindowBounds
struct _GetWindowBounds_t8A5EE4FEA706C1E2132D0867F4EDA5C480369FE4;
// OVR.OpenVR.IVRInput/_DecompressSkeletalBoneData
struct _DecompressSkeletalBoneData_t0795FF773DDA3E07E2530AD3EAF3EF500FCDED54;
// OVR.OpenVR.IVRInput/_GetActionHandle
struct _GetActionHandle_t39687D8C957CC72700EB789569511CE49A6887AA;
// OVR.OpenVR.IVRInput/_GetActionOrigins
struct _GetActionOrigins_t02D3F6AA21518D8409114EB96C9862BCFE06D014;
// OVR.OpenVR.IVRInput/_GetActionSetHandle
struct _GetActionSetHandle_tE44EE2278C7ECAE67894D97421427FC535C6ED86;
// OVR.OpenVR.IVRInput/_GetAnalogActionData
struct _GetAnalogActionData_t33F3832C40079A8B5BC284939F694FF79503A6E0;
// OVR.OpenVR.IVRInput/_GetDigitalActionData
struct _GetDigitalActionData_tC4ED08E3304DF7CBD9AD288D8ECBE78461B0C667;
// OVR.OpenVR.IVRInput/_GetInputSourceHandle
struct _GetInputSourceHandle_tB4F253D6BED390474F619356FE0F92CA23E6B74E;
// OVR.OpenVR.IVRInput/_GetOriginLocalizedName
struct _GetOriginLocalizedName_t449130E1262626D4E366745AE5FA14F043682A26;
// OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo
struct _GetOriginTrackedDeviceInfo_tB16781893247989A97CBC0F84D7EC6A48DD29D34;
// OVR.OpenVR.IVRInput/_GetPoseActionData
struct _GetPoseActionData_t75C7FAB1DB16893DF110B06A6C466A2C15D7D30C;
// OVR.OpenVR.IVRInput/_GetSkeletalActionData
struct _GetSkeletalActionData_t7FFB9696FFE2E3F36B591D7B46D1DD8B6B60570E;
// OVR.OpenVR.IVRInput/_GetSkeletalBoneData
struct _GetSkeletalBoneData_t6E341E34803B8415B8A1BD9BA1A8D9181F57FF2F;
// OVR.OpenVR.IVRInput/_GetSkeletalBoneDataCompressed
struct _GetSkeletalBoneDataCompressed_t4A81338DAFC4A52D1364EB694943AF73C2245A19;
// OVR.OpenVR.IVRInput/_SetActionManifestPath
struct _SetActionManifestPath_t007D27FE5EC4DAB48FFFB5D25B25EBDF34210A2D;
// OVR.OpenVR.IVRInput/_ShowActionOrigins
struct _ShowActionOrigins_t1CDFD1768C660D605CDA2B1CC89065EA2B992C3D;
// OVR.OpenVR.IVRInput/_ShowBindingsForActionSet
struct _ShowBindingsForActionSet_t4303E97F8A04760480AB5129904FA50FA9471CF5;
// OVR.OpenVR.IVRInput/_TriggerHapticVibrationAction
struct _TriggerHapticVibrationAction_t1A066FFBC7DBF34094EF95271394C9D9FB2E1739;
// OVR.OpenVR.IVRInput/_UpdateActionState
struct _UpdateActionState_tACCEE9E8315AAC639F386F0E5E1352A12DF728B2;
// OVR.OpenVR.IVROverlay/_ClearOverlayTexture
struct _ClearOverlayTexture_tFFC6110B6E7118585822C4EC91426EECF55DDE2D;
// OVR.OpenVR.IVROverlay/_CloseMessageOverlay
struct _CloseMessageOverlay_tEC2DEDD441F091EF78915B0A0BD8487722539D0F;
// OVR.OpenVR.IVROverlay/_ComputeOverlayIntersection
struct _ComputeOverlayIntersection_tCED6948296A5F66347803E61D649426AC795E8CF;
// OVR.OpenVR.IVROverlay/_CreateDashboardOverlay
struct _CreateDashboardOverlay_tF97873092E399C09805C0A916093734348B5304D;
// OVR.OpenVR.IVROverlay/_CreateOverlay
struct _CreateOverlay_t39025EDF1826E9D95A5E01B9D6FA809FD2E718AF;
// OVR.OpenVR.IVROverlay/_DestroyOverlay
struct _DestroyOverlay_t38EFCB644BFDE914E24A7CBD778BBA088EC901D5;
// OVR.OpenVR.IVROverlay/_FindOverlay
struct _FindOverlay_tAE960AA2C6B42919AD03CE164D7D39A22BB01033;
// OVR.OpenVR.IVROverlay/_GetDashboardOverlaySceneProcess
struct _GetDashboardOverlaySceneProcess_t1DE4D2D445D002DE984C1D5C360AE6E64233798E;
// OVR.OpenVR.IVROverlay/_GetGamepadFocusOverlay
struct _GetGamepadFocusOverlay_tA8D7B9E689FCD3BAD42449710717C34A9D5353B1;
// OVR.OpenVR.IVROverlay/_GetHighQualityOverlay
struct _GetHighQualityOverlay_t1971BCB925797B9197F9D1EEDF044613EB2513AB;
// OVR.OpenVR.IVROverlay/_GetKeyboardText
struct _GetKeyboardText_t4D13F42ED39CBD7B45322FBA3B075B786B2DDED6;
// OVR.OpenVR.IVROverlay/_GetOverlayAlpha
struct _GetOverlayAlpha_tDADA0BB21ABC426722A40CC32DB279769DCF021A;
// OVR.OpenVR.IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters
struct _GetOverlayAutoCurveDistanceRangeInMeters_tA92ABA483C12CC57AF5BE7064465E45E61A88C23;
// OVR.OpenVR.IVROverlay/_GetOverlayColor
struct _GetOverlayColor_tFAB0ACB07BDE770AA13BB5E43EB4096A93A7107F;
// OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform
struct _GetOverlayDualAnalogTransform_t404625AB2AA2C28CB18A9C52514500BD1B6AD314;
// OVR.OpenVR.IVROverlay/_GetOverlayErrorNameFromEnum
struct _GetOverlayErrorNameFromEnum_t5E2A92AF7E10FAEB8DC6A9B83CB964623AF65B57;
// OVR.OpenVR.IVROverlay/_GetOverlayFlag
struct _GetOverlayFlag_t304E10EEDC342F118C854A3F2999D90AA8448C54;
// OVR.OpenVR.IVROverlay/_GetOverlayFlags
struct _GetOverlayFlags_t44E5C4A2EC91529F47DC48FEC054CC746451CD7D;
// OVR.OpenVR.IVROverlay/_GetOverlayImageData
struct _GetOverlayImageData_tC296EE7A537CC37A50B13C9BB21C42E119BFEBF3;
// OVR.OpenVR.IVROverlay/_GetOverlayInputMethod
struct _GetOverlayInputMethod_tCB6A8DE641A2F0DC2AE54DCB5E625D8BFD4104E1;
// OVR.OpenVR.IVROverlay/_GetOverlayKey
struct _GetOverlayKey_t04E5303BB3B8351ACB123FA9679BDE96A56E53CA;
// OVR.OpenVR.IVROverlay/_GetOverlayMouseScale
struct _GetOverlayMouseScale_tA8CBBA77190651C271D36B39C86563B176112DAC;
// OVR.OpenVR.IVROverlay/_GetOverlayName
struct _GetOverlayName_t9D08814FB16F293E719321A455E4FFE0180C48C7;
// OVR.OpenVR.IVROverlay/_GetOverlayRenderModel
struct _GetOverlayRenderModel_t77332019BB8EA1382A34E1DF2C4DE30EC8586136;
// OVR.OpenVR.IVROverlay/_GetOverlayRenderingPid
struct _GetOverlayRenderingPid_t8B0CB9FCC759F791FBF70596E913E49A50A9623C;
// OVR.OpenVR.IVROverlay/_GetOverlaySortOrder
struct _GetOverlaySortOrder_tD30DCEF0DC27DBF62C7FD8CFB4CB4B27A042CD99;
// OVR.OpenVR.IVROverlay/_GetOverlayTexelAspect
struct _GetOverlayTexelAspect_t2588FAAA9256DAB500789D45446FCD9B9C3341AE;
// OVR.OpenVR.IVROverlay/_GetOverlayTexture
struct _GetOverlayTexture_t67AC8CF0315368A175D183FD6B8B18853D857139;
// OVR.OpenVR.IVROverlay/_GetOverlayTextureBounds
struct _GetOverlayTextureBounds_t2C2DA89DF6265C667C98352D433BEF964AD51D83;
// OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace
struct _GetOverlayTextureColorSpace_t8C6D9E3C64159C910AE228282CD92ADFDE73251C;
// OVR.OpenVR.IVROverlay/_GetOverlayTextureSize
struct _GetOverlayTextureSize_t51D0FF0C60C1AE56D484CC02189E1CB7FA4039DB;
// OVR.OpenVR.IVROverlay/_GetOverlayTransformAbsolute
struct _GetOverlayTransformAbsolute_t879060F1EF17C256C94FFEAA89A165213F7EA7B3;
// OVR.OpenVR.IVROverlay/_GetOverlayTransformOverlayRelative
struct _GetOverlayTransformOverlayRelative_tEC30088656BF1375A80F5F83311E100390C23899;
// OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent
struct _GetOverlayTransformTrackedDeviceComponent_t6D6D6E536F03E5F484270DA2063E692833C8C553;
// OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative
struct _GetOverlayTransformTrackedDeviceRelative_t6D0C0F2C25DF1E8FE63869F6D171672FBFDB9D37;
// OVR.OpenVR.IVROverlay/_GetOverlayTransformType
struct _GetOverlayTransformType_t8C6834F0574553D54618E7FE4A47697920264AB9;
// OVR.OpenVR.IVROverlay/_GetOverlayWidthInMeters
struct _GetOverlayWidthInMeters_t332D0C1E24DBA4D7E69C08FE1E2CB857BBAA7BB7;
// OVR.OpenVR.IVROverlay/_GetPrimaryDashboardDevice
struct _GetPrimaryDashboardDevice_tDA46E8CABE82915FCD216F6CA21A6D1BEA11010B;
// OVR.OpenVR.IVROverlay/_GetTransformForOverlayCoordinates
struct _GetTransformForOverlayCoordinates_tC6923776B4A8411D63402D9178A9C5CD1FBF7D3E;
// OVR.OpenVR.IVROverlay/_HideKeyboard
struct _HideKeyboard_t4F532F93EE9B416A79E7313115007024B0867B6C;
// OVR.OpenVR.IVROverlay/_HideOverlay
struct _HideOverlay_tBCB13A361710FD0B2014BF41C8D90E8657BCF78F;
// OVR.OpenVR.IVROverlay/_IsActiveDashboardOverlay
struct _IsActiveDashboardOverlay_t99372611271BA8BDC647FED2397BD131320B96B4;
// OVR.OpenVR.IVROverlay/_IsDashboardVisible
struct _IsDashboardVisible_tBACAC97FDD339E6F836ECEBA981AB2A725E1D93A;
// OVR.OpenVR.IVROverlay/_IsHoverTargetOverlay
struct _IsHoverTargetOverlay_tA4AC077F55D0C9D109B7EC275D19C494E4687B91;
// OVR.OpenVR.IVROverlay/_IsOverlayVisible
struct _IsOverlayVisible_t3C5C8EEC1D3CEE3372299FE5D13B02638954CBC1;
// OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor
struct _MoveGamepadFocusToNeighbor_tEC3BDC5D3A5AA07C7BC459D3E9E2BDE29A376A61;
// OVR.OpenVR.IVROverlay/_PollNextOverlayEvent
struct _PollNextOverlayEvent_t861B82E88DCEA65F2BED439C81B3BF2DCB3D8A56;
// OVR.OpenVR.IVROverlay/_ReleaseNativeOverlayHandle
struct _ReleaseNativeOverlayHandle_t0051D17B74002B4E6DD4E2BE7331314830CA0798;
// OVR.OpenVR.IVROverlay/_SetDashboardOverlaySceneProcess
struct _SetDashboardOverlaySceneProcess_tDB53D4E98795548BA55A028EC757794DF02D1A4E;
// OVR.OpenVR.IVROverlay/_SetGamepadFocusOverlay
struct _SetGamepadFocusOverlay_tA538A9D45966E31323CD06675F8164A8D3326C7D;
// OVR.OpenVR.IVROverlay/_SetHighQualityOverlay
struct _SetHighQualityOverlay_tD2EC58029C57F518FC0BD32BA49D954DF5DA21B9;
// OVR.OpenVR.IVROverlay/_SetKeyboardPositionForOverlay
struct _SetKeyboardPositionForOverlay_t244BE803F53B3EFE2BFBCF9061453A2A1309B8EF;
// OVR.OpenVR.IVROverlay/_SetKeyboardTransformAbsolute
struct _SetKeyboardTransformAbsolute_tD124AF043E47202B43D6826CE99D6E84C838AB85;
// OVR.OpenVR.IVROverlay/_SetOverlayAlpha
struct _SetOverlayAlpha_t89F2909463A1A87222C4ADE8E6A9B97FA7D815E2;
// OVR.OpenVR.IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters
struct _SetOverlayAutoCurveDistanceRangeInMeters_t70611E84FE31CF3AE06D867439E05B6AA29BB6E3;
// OVR.OpenVR.IVROverlay/_SetOverlayColor
struct _SetOverlayColor_tC7B21B0DACDBCAF62443C4379F6469BA32196D7E;
// OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform
struct _SetOverlayDualAnalogTransform_t3000681F8D96981D99C030F20625B962D4A030BF;
// OVR.OpenVR.IVROverlay/_SetOverlayFlag
struct _SetOverlayFlag_t2E4E80F706BB0353DE6FFAEBE880014A4600A02F;
// OVR.OpenVR.IVROverlay/_SetOverlayFromFile
struct _SetOverlayFromFile_t5B1988B50A0A81F72BEFF99FB83D92A9101391EA;
// OVR.OpenVR.IVROverlay/_SetOverlayInputMethod
struct _SetOverlayInputMethod_t0D329E6A101EA6E3004D5A1843D988E94A41E522;
// OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask
struct _SetOverlayIntersectionMask_tAE5CA17C565A30886F10D7A11260E6263092B376;
// OVR.OpenVR.IVROverlay/_SetOverlayMouseScale
struct _SetOverlayMouseScale_t53A3DB9CA8CFA7D0C982DFE70F3BF6526E397B62;
// OVR.OpenVR.IVROverlay/_SetOverlayName
struct _SetOverlayName_tB1F43B0D461D43E3C74A0F3470D17489478AAB01;
// OVR.OpenVR.IVROverlay/_SetOverlayNeighbor
struct _SetOverlayNeighbor_t940D54C253D9B8DA001AFF3422FFEAFCAA89D581;
// OVR.OpenVR.IVROverlay/_SetOverlayRaw
struct _SetOverlayRaw_tCF57C8541185FCCAA4AC3583DA872A4A046D0B1B;
// OVR.OpenVR.IVROverlay/_SetOverlayRenderModel
struct _SetOverlayRenderModel_t6AA08CE4B1A865EFD28B9995AFB14E12D1DDE263;
// OVR.OpenVR.IVROverlay/_SetOverlayRenderingPid
struct _SetOverlayRenderingPid_t860D46875C206D3A0494F3FB39CB956CA0ACEF11;
// OVR.OpenVR.IVROverlay/_SetOverlaySortOrder
struct _SetOverlaySortOrder_t8593A1D71B05DE8FC7BB3AAB6C5B1393A0059CEB;
// OVR.OpenVR.IVROverlay/_SetOverlayTexelAspect
struct _SetOverlayTexelAspect_t3FABDC04D9599FD0AAB0ACBF8AA3BBEC32929DFD;
// OVR.OpenVR.IVROverlay/_SetOverlayTexture
struct _SetOverlayTexture_t339C34C655DE707851F518E72EE5B54AC8230260;
// OVR.OpenVR.IVROverlay/_SetOverlayTextureBounds
struct _SetOverlayTextureBounds_t9409D3709F417BA3D4F239303AA7C70E5543E2C6;
// OVR.OpenVR.IVROverlay/_SetOverlayTextureColorSpace
struct _SetOverlayTextureColorSpace_tA461E86D2455E1A47A898EA6BDF9B3072FCAEE79;
// OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute
struct _SetOverlayTransformAbsolute_t0576036BCE72EAA1058E5463CF463129932ED014;
// OVR.OpenVR.IVROverlay/_SetOverlayTransformOverlayRelative
struct _SetOverlayTransformOverlayRelative_tE71C623CAE5889E35901C6B1D48EF7197F2D3977;
// OVR.OpenVR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent
struct _SetOverlayTransformTrackedDeviceComponent_tE3F87DEEBBC8BF1166B735A84528B387A8D617C4;
// OVR.OpenVR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative
struct _SetOverlayTransformTrackedDeviceRelative_t33FBD552EF11DF0F4BCEA44E766694502C284295;
// OVR.OpenVR.IVROverlay/_SetOverlayWidthInMeters
struct _SetOverlayWidthInMeters_t3499F9F5B93449716E795BD6494C2F2465E2851C;
// OVR.OpenVR.IVROverlay/_ShowDashboard
struct _ShowDashboard_tF6F5EC88D960FDCFE77B9DEEF5FDEF8ADC7322A4;
// OVR.OpenVR.IVROverlay/_ShowKeyboard
struct _ShowKeyboard_tC4004266F122C2EA442DCBBE6A5E4147C646607E;
// OVR.OpenVR.IVROverlay/_ShowKeyboardForOverlay
struct _ShowKeyboardForOverlay_tD95F95B2E3AD73DC540C7ABDE633480C06AB8E1A;
// OVR.OpenVR.IVROverlay/_ShowMessageOverlay
struct _ShowMessageOverlay_t66E673DEEF62CC4BC981C5FEF8A46AB588B67C3C;
// OVR.OpenVR.IVROverlay/_ShowOverlay
struct _ShowOverlay_t6BD14A5A4683B52F4ED881890ABBED19EE8D5A92;
// OVR.OpenVR.IVRRenderModels/_FreeRenderModel
struct _FreeRenderModel_tE41E4A27E462FD2C26239CB2D4DAC027946C7D86;
// OVR.OpenVR.IVRRenderModels/_FreeTexture
struct _FreeTexture_tC2F1F3E17EB538F2062D6DC20C6E7CFA8B81373B;
// OVR.OpenVR.IVRRenderModels/_FreeTextureD3D11
struct _FreeTextureD3D11_t69CA1907BBF7DDCF5C7E8B17E7A92C93B9ECFA7A;
// OVR.OpenVR.IVRRenderModels/_GetComponentButtonMask
struct _GetComponentButtonMask_t72CEC4637FF7C3BE2B1F2CEBD60C01C665DB284B;
// OVR.OpenVR.IVRRenderModels/_GetComponentCount
struct _GetComponentCount_t1F748AD512498F9BF3B23D622A4C1B2FBF1776BE;
// OVR.OpenVR.IVRRenderModels/_GetComponentName
struct _GetComponentName_t7299B12E9580B82EAFB2C3C98576322C1FA3DB0F;
// OVR.OpenVR.IVRRenderModels/_GetComponentRenderModelName
struct _GetComponentRenderModelName_tD2B798AB4FC395634444E8667BA389B5861F47A1;
// OVR.OpenVR.IVRRenderModels/_GetComponentState
struct _GetComponentState_t674BF5C44FF954F474C2F7557EE68C8399EE7D79;
// OVR.OpenVR.IVRRenderModels/_GetComponentStateForDevicePath
struct _GetComponentStateForDevicePath_t2FC5E923758C5B41B6BC3049EAD6B043D9E44936;
// OVR.OpenVR.IVRRenderModels/_GetRenderModelCount
struct _GetRenderModelCount_tCB831BEA4DD84FE81E4CD8193DD496530CB0AB11;
// OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum
struct _GetRenderModelErrorNameFromEnum_tF2FA0CC09F6503BC3FB59FACB0ED370A304E5012;
// OVR.OpenVR.IVRRenderModels/_GetRenderModelName
struct _GetRenderModelName_tFB3366C105A45F229CB4430B82F5C5801860CF28;
// OVR.OpenVR.IVRRenderModels/_GetRenderModelOriginalPath
struct _GetRenderModelOriginalPath_tB6E08E5F6C75B2C426E5D0CE2969E2A31DC45994;
// OVR.OpenVR.IVRRenderModels/_GetRenderModelThumbnailURL
struct _GetRenderModelThumbnailURL_tD05F5C73B26E362981EAB0BCE35E1591CEA88267;
// OVR.OpenVR.IVRRenderModels/_LoadIntoTextureD3D11_Async
struct _LoadIntoTextureD3D11_Async_t0D1673D83774DFEBCC76896938CEACCFBA491B16;
// OVR.OpenVR.IVRRenderModels/_LoadRenderModel_Async
struct _LoadRenderModel_Async_tE8E63954032C284B008807EE4CF1531221D608DA;
// OVR.OpenVR.IVRRenderModels/_LoadTextureD3D11_Async
struct _LoadTextureD3D11_Async_t5D3CE5C4651078EF2D91A51670FD8834BF73EEF8;
// OVR.OpenVR.IVRRenderModels/_LoadTexture_Async
struct _LoadTexture_Async_t3EE34541EEE0128821D90456D708E41764535923;
// OVR.OpenVR.IVRRenderModels/_RenderModelHasComponent
struct _RenderModelHasComponent_t1BE46B86D466CEC4149009CE794724C393E31C05;
// OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyFilename
struct _GetScreenshotPropertyFilename_tC69E6AF13818B54364AE7B02C43537BD48DF4E76;
// OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyType
struct _GetScreenshotPropertyType_t884FA5B326A0AA72D3ACE9EE7D68E33D5EA3DC3B;
// OVR.OpenVR.IVRScreenshots/_HookScreenshot
struct _HookScreenshot_tA6785AC8EBF0D04CF69D27D656C2A6FB3F659334;
// OVR.OpenVR.IVRScreenshots/_RequestScreenshot
struct _RequestScreenshot_tC517F798F459B5BA7144A0130EDE242610068FD9;
// OVR.OpenVR.IVRScreenshots/_SubmitScreenshot
struct _SubmitScreenshot_t52597DCA551B3F5CD77FFFBFD6546907BF1FEFC5;
// OVR.OpenVR.IVRScreenshots/_TakeStereoScreenshot
struct _TakeStereoScreenshot_t0515309753D7CCEF3F9DD7A77E16BF7F2A8AC2F9;
// OVR.OpenVR.IVRScreenshots/_UpdateScreenshotProgress
struct _UpdateScreenshotProgress_t81F0DF5F950DBF93E3892995DA01F7843D4A3682;
// OVR.OpenVR.IVRSettings/_GetBool
struct _GetBool_t29EA55F8DD3D522FD063768958A2F408683BC035;
// OVR.OpenVR.IVRSettings/_GetFloat
struct _GetFloat_t848D513E61C65565FC4B6F7691AD9D7B32E136D0;
// OVR.OpenVR.IVRSettings/_GetInt32
struct _GetInt32_tD937806391FE3FB32419301C9B27007E8618DB56;
// OVR.OpenVR.IVRSettings/_GetSettingsErrorNameFromEnum
struct _GetSettingsErrorNameFromEnum_tE19BF24F45CCAB8E99D8AEA8638EA2F86E8E6D05;
// OVR.OpenVR.IVRSettings/_GetString
struct _GetString_tFC69BFD84DBF2D49A787716ED1A0F47BF885C256;
// OVR.OpenVR.IVRSettings/_RemoveKeyInSection
struct _RemoveKeyInSection_tE3DD46E935D75353E0C5E246F3814CCDE6C24813;
// OVR.OpenVR.IVRSettings/_RemoveSection
struct _RemoveSection_t79069D43F391B66FD545913D879F29568694D89E;
// OVR.OpenVR.IVRSettings/_SetBool
struct _SetBool_t590A9BAD61735EB0CA000B2CF2C31BF4C8E1C461;
// OVR.OpenVR.IVRSettings/_SetFloat
struct _SetFloat_tF6BC7345AA2576A2050756958C48A8BEAEA83D60;
// OVR.OpenVR.IVRSettings/_SetInt32
struct _SetInt32_t24716C9A29208CAB49C0772500A13FB7629545EE;
// OVR.OpenVR.IVRSettings/_SetString
struct _SetString_tA84B0B0115B8651854756E7F91DCFAAA78E250C3;
// OVR.OpenVR.IVRSettings/_Sync
struct _Sync_t430077019655288600E02875B7D1EAE5BE13DF84;
// OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor
struct _CreateSpatialAnchorFromDescriptor_tBA53981C13E3D9073976CCD6539297864F99DC44;
// OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose
struct _CreateSpatialAnchorFromPose_tE13DF519C9E1EBE00E68F6EA6F6D8486C6F7E08F;
// OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor
struct _GetSpatialAnchorDescriptor_tAAA8579E216F58E7DDC2DF4E24285AA30E5EFFFA;
// OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose
struct _GetSpatialAnchorPose_t94B25B5A23E2B42FE88F859C721FF4E04DB14B24;
// OVR.OpenVR.IVRSystem/_AcknowledgeQuit_Exiting
struct _AcknowledgeQuit_Exiting_tEF47D178982F69800F0863A0556AA537BE44047D;
// OVR.OpenVR.IVRSystem/_AcknowledgeQuit_UserPrompt
struct _AcknowledgeQuit_UserPrompt_t39607F7E8E1F30F7A3286CC18C60010E7568AF37;
// OVR.OpenVR.IVRSystem/_ApplyTransform
struct _ApplyTransform_t1D87B7AC1195BDAAA4CB3A0BC58BADBA6E134082;
// OVR.OpenVR.IVRSystem/_ComputeDistortion
struct _ComputeDistortion_tD147426B3B0270DAA7EB1C32043EBEF527870407;
// OVR.OpenVR.IVRSystem/_DriverDebugRequest
struct _DriverDebugRequest_t3418F0E739483EDFBDB2AB22D7AF53CFA2EAE313;
// OVR.OpenVR.IVRSystem/_GetArrayTrackedDeviceProperty
struct _GetArrayTrackedDeviceProperty_t36E75990577ED75C9F44C743E8E27396AF36240C;
// OVR.OpenVR.IVRSystem/_GetBoolTrackedDeviceProperty
struct _GetBoolTrackedDeviceProperty_t8F0763D4AAD303DA0DD843E9A8336C7B3E098A63;
// OVR.OpenVR.IVRSystem/_GetButtonIdNameFromEnum
struct _GetButtonIdNameFromEnum_t723788274FE11A4D7D6CD49D95D14266B392E65F;
// OVR.OpenVR.IVRSystem/_GetControllerAxisTypeNameFromEnum
struct _GetControllerAxisTypeNameFromEnum_t7FD5B5167CB91A7866C19AA6D30A175467EC2CAF;
// OVR.OpenVR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex
struct _GetControllerRoleForTrackedDeviceIndex_t04E0EBF506A4CA91A1F9F1E4528AD1BC9738C5EC;
// OVR.OpenVR.IVRSystem/_GetControllerState
struct _GetControllerState_tA53B014959406294ECAB190EBC86F3A1EFF49E00;
// OVR.OpenVR.IVRSystem/_GetControllerStateWithPose
struct _GetControllerStateWithPose_t64510A0EF68D6CB2CAFDC50BA60A66729637DB56;
// OVR.OpenVR.IVRSystem/_GetD3D9AdapterIndex
struct _GetD3D9AdapterIndex_t6EEF3293C1B40E937D92113B8A3F96DED8415791;
// OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo
struct _GetDXGIOutputInfo_t73FA51E5AB534DC0A3A6FDFD0C2D67177090E66C;
// OVR.OpenVR.IVRSystem/_GetDeviceToAbsoluteTrackingPose
struct _GetDeviceToAbsoluteTrackingPose_tBB4998801BAFE6FFD6003002E6948AABD08D081C;
// OVR.OpenVR.IVRSystem/_GetEventTypeNameFromEnum
struct _GetEventTypeNameFromEnum_tBCFA4CF8CD31A63BCE5C028F86023D5B3F56C4C5;
// OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform
struct _GetEyeToHeadTransform_t85F575C6B4387A61016410FF9B7F670D25973926;
// OVR.OpenVR.IVRSystem/_GetFloatTrackedDeviceProperty
struct _GetFloatTrackedDeviceProperty_t819CE8B33EBD3DB70A2F691EC0EA87F3B9E9F117;
// OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh
struct _GetHiddenAreaMesh_t426F5CEB93D8D3593835185EA732C11AB30E2A43;
// OVR.OpenVR.IVRSystem/_GetInt32TrackedDeviceProperty
struct _GetInt32TrackedDeviceProperty_t90F760BFCB8EFA6DE76F7DC6B6ADDB9E7A82AB86;
// OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty
struct _GetMatrix34TrackedDeviceProperty_t2CF43EAD342BBD7FDE42D16D697091316658494B;
// OVR.OpenVR.IVRSystem/_GetOutputDevice
struct _GetOutputDevice_t83D6AE0AB6B1F21E5D87ECBB559E60D183610222;
// OVR.OpenVR.IVRSystem/_GetProjectionMatrix
struct _GetProjectionMatrix_t9B0D0C3225387862FA516D50DB79579834EF0DD0;
// OVR.OpenVR.IVRSystem/_GetProjectionRaw
struct _GetProjectionRaw_t6867187AE3A0151807D995F184BC67408FFA7496;
// OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum
struct _GetPropErrorNameFromEnum_t89F1CBA1871CB900043DA4EA17B5C59A44A19EF5;
// OVR.OpenVR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
struct _GetRawZeroPoseToStandingAbsoluteTrackingPose_t4CA0DDBB2D4969509146BAE587278F7C5DD922B2;
// OVR.OpenVR.IVRSystem/_GetRecommendedRenderTargetSize
struct _GetRecommendedRenderTargetSize_tE5DCCAA3C127070265E730E834989CD71122B1EF;
// OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
struct _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tBCAF710571F3E9B304E65DB1A7EC953392A29CF8;
// OVR.OpenVR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
struct _GetSortedTrackedDeviceIndicesOfClass_t883B6DB2CE87516A965060EE45B5451AA01541E5;
// OVR.OpenVR.IVRSystem/_GetStringTrackedDeviceProperty
struct _GetStringTrackedDeviceProperty_t76FD9D8448083C12ED3BE15AE73D5C38E4ADECC5;
// OVR.OpenVR.IVRSystem/_GetTimeSinceLastVsync
struct _GetTimeSinceLastVsync_tCC442F5CDBF0A619CD0CD84A061FEA9DB1774D33;
// OVR.OpenVR.IVRSystem/_GetTrackedDeviceActivityLevel
struct _GetTrackedDeviceActivityLevel_t18F25E592E9F23E1B42CE3FC8BBCDA9991877F73;
// OVR.OpenVR.IVRSystem/_GetTrackedDeviceClass
struct _GetTrackedDeviceClass_t7347331DDB1CBA2ED64A115A3F67805DACFB92F9;
// OVR.OpenVR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
struct _GetTrackedDeviceIndexForControllerRole_tDC374474D4B923D02CF3907E7C7F19B0E01CE418;
// OVR.OpenVR.IVRSystem/_GetUint64TrackedDeviceProperty
struct _GetUint64TrackedDeviceProperty_tF9AAE5FDB16FE39CDF74EA82D87D05C9A58D6A8A;
// OVR.OpenVR.IVRSystem/_IsDisplayOnDesktop
struct _IsDisplayOnDesktop_tB1D86880DF7E8EEFEA7D0DA7B46695B38688FDF3;
// OVR.OpenVR.IVRSystem/_IsInputAvailable
struct _IsInputAvailable_t432F7CFC272FE7E8A2D8C57AC0F6A9AD55BF759B;
// OVR.OpenVR.IVRSystem/_IsSteamVRDrawingControllers
struct _IsSteamVRDrawingControllers_t2BBCA30078A8E13FA361F46562662C6B4DEB0223;
// OVR.OpenVR.IVRSystem/_IsTrackedDeviceConnected
struct _IsTrackedDeviceConnected_t9AA842DF79300B59CA9D06D4BB080D34F2A8BE55;
// OVR.OpenVR.IVRSystem/_PerformFirmwareUpdate
struct _PerformFirmwareUpdate_t26607D5B0AFAB7AFE81A453EC1749DC43FAB3E98;
// OVR.OpenVR.IVRSystem/_PollNextEvent
struct _PollNextEvent_t7661E5AF679D8C0B4F9959F46724FAB9AD4658DD;
// OVR.OpenVR.IVRSystem/_PollNextEventWithPose
struct _PollNextEventWithPose_tAC36873017089F9D283AFA6D22503AFD8ACFA96F;
// OVR.OpenVR.IVRSystem/_ResetSeatedZeroPose
struct _ResetSeatedZeroPose_t5DA7EB83B5BC1CC765227E8BA0B5AAA63D14F009;
// OVR.OpenVR.IVRSystem/_SetDisplayVisibility
struct _SetDisplayVisibility_tF1714A7C8CF32C530DF3BFEBA6F217AD02250F26;
// OVR.OpenVR.IVRSystem/_ShouldApplicationPause
struct _ShouldApplicationPause_t363B2CBD8131B77FADAF11D24071E94B3A15FA37;
// OVR.OpenVR.IVRSystem/_ShouldApplicationReduceRenderingWork
struct _ShouldApplicationReduceRenderingWork_t49429140C48F7CFAFDD2EAFBEB0FE31BA6FBFA29;
// OVR.OpenVR.IVRSystem/_TriggerHapticPulse
struct _TriggerHapticPulse_tEDD2E25EA770F3D7341ECEA5409A692C8BCCE773;
// OVR.OpenVR.IVRTrackedCamera/_AcquireVideoStreamingService
struct _AcquireVideoStreamingService_tC0E6E106B44AF9B48F0CE1B5061869A9E23839CC;
// OVR.OpenVR.IVRTrackedCamera/_GetCameraErrorNameFromEnum
struct _GetCameraErrorNameFromEnum_t4D8847A5F5D409B6EA57229203B0F28DE3DBAA22;
// OVR.OpenVR.IVRTrackedCamera/_GetCameraFrameSize
struct _GetCameraFrameSize_tBA868F720BFF12F3AC15E15172EF881236F01260;
// OVR.OpenVR.IVRTrackedCamera/_GetCameraIntrinsics
struct _GetCameraIntrinsics_tF4D6057A3EDAC670DBF6BD155C6C8A348F7DB8BB;
// OVR.OpenVR.IVRTrackedCamera/_GetCameraProjection
struct _GetCameraProjection_t2D53F4CA7DD1218E99470F20CFF342DC7F1F31DC;
// OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamFrameBuffer
struct _GetVideoStreamFrameBuffer_t5B2634C87D11C5DE78B67F99748D687F2273E4B4;
// OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureD3D11
struct _GetVideoStreamTextureD3D11_t6C22B3197DC2024EE879DB995135672362798CFD;
// OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureGL
struct _GetVideoStreamTextureGL_t8205B382FFDB160BAA8E91BCB673F4707C5F3893;
// OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureSize
struct _GetVideoStreamTextureSize_tA59FC0BCB333B8107834A1BE40EDDF45D6F2513C;
// OVR.OpenVR.IVRTrackedCamera/_HasCamera
struct _HasCamera_tD458536D06615D86A0F5223ECC92BBDA8B12DDEB;
// OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL
struct _ReleaseVideoStreamTextureGL_tFD74B96FFC9530DC64D895310AAA0D3F35A05B80;
// OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamingService
struct _ReleaseVideoStreamingService_t9F8B638163F48EADAC095A5957C5EA999B52640C;
// UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c
struct U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D;
// OVR.OpenVR.OpenVR/COpenVRContext
struct COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B422875D5C0FF99CE7A100F2D0831190FE9D98;
IL2CPP_EXTERN_C String_t* _stringLiteral06A17D93E6D67BEA37EBBF3A9D7FC06B40689CD1;
IL2CPP_EXTERN_C String_t* _stringLiteral075497E631984D110F50DD57A78D3322985E7074;
IL2CPP_EXTERN_C String_t* _stringLiteral15E7EEE9B4F65A10FF1CD01608CD7013FC21BE87;
IL2CPP_EXTERN_C String_t* _stringLiteral16708333EE13D11D37AF0570616A0BFB858D19DE;
IL2CPP_EXTERN_C String_t* _stringLiteral18451CB4F8D85191EA12451077801CA96348F6B8;
IL2CPP_EXTERN_C String_t* _stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895;
IL2CPP_EXTERN_C String_t* _stringLiteral1AC7A6AADEE9F4144302CCF4A8EA733455CCA310;
IL2CPP_EXTERN_C String_t* _stringLiteral1EC5A90CC65C8BDA58643C956BA4E6F8E4436A5A;
IL2CPP_EXTERN_C String_t* _stringLiteral1FF1E10A290EC11AB4C6B8CA7BD71BA07C515124;
IL2CPP_EXTERN_C String_t* _stringLiteral25B713EDB4DF5E4198DEA30F18F1135F97772F0E;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3B504484310EE713CED878912EAABC43761A6A94;
IL2CPP_EXTERN_C String_t* _stringLiteral4D87623416DA885BA890D0C9A00FBF74ACE0ECF3;
IL2CPP_EXTERN_C String_t* _stringLiteral4F0B57C63F68090BCCBB32EF92337E1397F68045;
IL2CPP_EXTERN_C String_t* _stringLiteral5AD2F46BEB210D9D86A73F04E249F587A2D5C7EF;
IL2CPP_EXTERN_C String_t* _stringLiteral6523CD2512C835CE5969797D0A68F508DAFDEEF8;
IL2CPP_EXTERN_C String_t* _stringLiteral6B1D394BA1E10CCEFFAE406CCEE946FCD85707C8;
IL2CPP_EXTERN_C String_t* _stringLiteral709C1BE385364BF7215290F6C80B9E13ED6C07AB;
IL2CPP_EXTERN_C String_t* _stringLiteral7EB420128797DE44A56AD800649FF1F2C9086CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral81DE322259BE79213DE3711934CCA81612299A22;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteral97949C809FAE8AD49BF4DA35A46951F99B00E5E1;
IL2CPP_EXTERN_C String_t* _stringLiteral9A080EA79123FB1699656F259E9714E227AA0674;
IL2CPP_EXTERN_C String_t* _stringLiteral9C5CA5F3D440697E7CE47F45B0AE3B6DB74C2054;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD329BEE4AA4299DC498EF86EE4D802F5F77951;
IL2CPP_EXTERN_C String_t* _stringLiteralB4705CCB6B015DADE9B7063D15E59D6BAE057C37;
IL2CPP_EXTERN_C String_t* _stringLiteralB6D3E2AB4D1E478D7F1FA5972CFD48037CD0C151;
IL2CPP_EXTERN_C String_t* _stringLiteralBC250738CF6553169DE970EACBEDFB060B58A41B;
IL2CPP_EXTERN_C String_t* _stringLiteralBCD92AA05C77719824EAA3FACEBE1B405BF8B7C1;
IL2CPP_EXTERN_C String_t* _stringLiteralC329DDB1444A0B2400D046076774E23B4E59914E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E069394931E8E0955FD9C8114C74F9F13FBDEC;
IL2CPP_EXTERN_C String_t* _stringLiteralC90919371B2B89DEA9D88530D18C91F93A2B7F2C;
IL2CPP_EXTERN_C String_t* _stringLiteralD8B26D2E49ED1906CB08D5EAA595ADF035C65C70;
IL2CPP_EXTERN_C String_t* _stringLiteralDAEB7B8940990F9109863DC8E84D57775C55E0B6;
IL2CPP_EXTERN_C String_t* _stringLiteralDB1334B07CE2A0153E77054CF8FA3829A2097735;
IL2CPP_EXTERN_C String_t* _stringLiteralE84598B08D3618F20B435236CA0E9AF5C4A2A86D;
IL2CPP_EXTERN_C String_t* _stringLiteralE9A60084C1546F7084A6B054A0BB5F950E25B26C;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisOVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_mB058B605A1DAC76CD12D7D26B4436BF8B7C63590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m077B7F6A5755E612BD0ACA0BAD8F8FCAA9FB6E62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m512E97E36FC083FBFAFE025842BE8237F6350ADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mBB95A511CAA4D6BCF1D6EC54722BCA4DA4B37CF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2A24573C40622EB90B3DEFD32113AABC59940447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m945703AD572432985F6A555BBE2C516D84D78989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m1E6873716F54341B48F90A1BAD7909BF8DF33429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m3B581D1E2D9D47BCC3513DC77CC6C6F8718F13DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1CF97DE800C326E6EF6C7599AA385EC109C21ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9FC32AA198E53E701EEAF271527A221A8F363A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m66996C54FC3C3A499A738BD4A3E50CE3EAD5082B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA415C7B94AC3728AFA7791318E9210FC5EEFAB58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8515E9D5662F47A89C296550439BBD4DA548AE6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA8B955F9BDD498641D4406EF93DD9B4325F2D642_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m0C0E2A729F88D6AB5AC2B4FD9C4E33D181A52A57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mF031AC46543C02039764EDB1B0673DFA36B1F58C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m764A9EE16005FFF9BB7A28EF762E6EB9CFDDA7B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m1543843C77436B385445DCDE0E472112C8E40F87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244_m6BCE3E1FAE7620DC9F22722FA5CCE5AB35BAA5B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mAE71323F63A667FE0A4F8B9B0E27C6012B28FFE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m6AA443D4F53AF0FEBAC269F761A158635243467E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mABD9E1ECC8C04235760B3855DF03F2308F62071C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB_m77205DFCC4110B95CC241F556BE89F612EFFD2CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75_mA153EBDD6059AC5FF4C3ADD0A0628D816CD112CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m8AFB13536731ABE80F6AE964DA907EE6B27F055E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m9AA4E18082F53C60962F70D75570F1D400C37FBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m3BFE4214B6075DAE2F291E508DC912DC72262D2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRaycastU3Eb__15_0_mEFC66B60EE677A040D1C002373D4CF3C5DFF97FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSpherecastU3Eb__16_0_m01ADCEABB9904FA2BE7802AEA7CD76AEADC96D7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m0124B7611A2B03F480EB52872F7A1B24F0CA6EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m1F9346AEC811FD3F8FF694F13BAED581F93252EA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD6E39CDF844AFC3D70C8C36A17734FEA6F4ED2AA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3CD0D6331A5AECDB84A4B9837420F0C50AA8F4F7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9F389575B9AE1F230AC15DBCA6E6007A112E6440* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t358D9D86EA73609D5A330DEAD2AFC492CC3882BA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ____dictionary_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// OVR.OpenVR.OpenVR
struct OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E  : public RuntimeObject
{
};

struct OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_StaticFields
{
	// System.UInt32 OVR.OpenVR.OpenVR::<VRToken>k__BackingField
	uint32_t ___U3CVRTokenU3Ek__BackingField_219;
	// OVR.OpenVR.OpenVR/COpenVRContext OVR.OpenVR.OpenVR::_OpenVRInternal_ModuleContext
	COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* ____OpenVRInternal_ModuleContext_221;
};

// UnityEngine.EventSystems.PointerEventDataExtension
struct PointerEventDataExtension_t4335B94AF6A64806EED176B63B67CAD2BB98E0EA  : public RuntimeObject
{
};

// Assets.OVR.Scripts.Record
struct Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2  : public RuntimeObject
{
	// System.Int32 Assets.OVR.Scripts.Record::sortOrder
	int32_t ___sortOrder_0;
	// System.String Assets.OVR.Scripts.Record::category
	String_t* ___category_1;
	// System.String Assets.OVR.Scripts.Record::message
	String_t* ___message_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c
struct U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D  : public RuntimeObject
{
};

struct U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields
{
	// UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::<>9
	U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::<>9__15_0
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* ___U3CU3E9__15_0_1;
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::<>9__16_0
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* ___U3CU3E9__16_0_2;
};

// OVRPlugin/UnityOpenXR
struct UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E  : public RuntimeObject
{
};

struct UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E_StaticFields
{
	// System.Boolean OVRPlugin/UnityOpenXR::Enabled
	bool ___Enabled_0;
};

// OVR.OpenVR.OpenVR/COpenVRContext
struct COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D  : public RuntimeObject
{
	// OVR.OpenVR.CVRSystem OVR.OpenVR.OpenVR/COpenVRContext::m_pVRSystem
	CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* ___m_pVRSystem_0;
	// OVR.OpenVR.CVRChaperone OVR.OpenVR.OpenVR/COpenVRContext::m_pVRChaperone
	CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* ___m_pVRChaperone_1;
	// OVR.OpenVR.CVRChaperoneSetup OVR.OpenVR.OpenVR/COpenVRContext::m_pVRChaperoneSetup
	CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* ___m_pVRChaperoneSetup_2;
	// OVR.OpenVR.CVRCompositor OVR.OpenVR.OpenVR/COpenVRContext::m_pVRCompositor
	CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* ___m_pVRCompositor_3;
	// OVR.OpenVR.CVROverlay OVR.OpenVR.OpenVR/COpenVRContext::m_pVROverlay
	CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* ___m_pVROverlay_4;
	// OVR.OpenVR.CVRRenderModels OVR.OpenVR.OpenVR/COpenVRContext::m_pVRRenderModels
	CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* ___m_pVRRenderModels_5;
	// OVR.OpenVR.CVRExtendedDisplay OVR.OpenVR.OpenVR/COpenVRContext::m_pVRExtendedDisplay
	CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* ___m_pVRExtendedDisplay_6;
	// OVR.OpenVR.CVRSettings OVR.OpenVR.OpenVR/COpenVRContext::m_pVRSettings
	CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* ___m_pVRSettings_7;
	// OVR.OpenVR.CVRApplications OVR.OpenVR.OpenVR/COpenVRContext::m_pVRApplications
	CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* ___m_pVRApplications_8;
	// OVR.OpenVR.CVRScreenshots OVR.OpenVR.OpenVR/COpenVRContext::m_pVRScreenshots
	CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* ___m_pVRScreenshots_9;
	// OVR.OpenVR.CVRTrackedCamera OVR.OpenVR.OpenVR/COpenVRContext::m_pVRTrackedCamera
	CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* ___m_pVRTrackedCamera_10;
	// OVR.OpenVR.CVRInput OVR.OpenVR.OpenVR/COpenVRContext::m_pVRInput
	CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* ___m_pVRInput_11;
	// OVR.OpenVR.CVRSpatialAnchors OVR.OpenVR.OpenVR/COpenVRContext::m_pVRSpatialAnchors
	CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* ___m_pVRSpatialAnchors_12;
};

// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503  : public RuntimeObject
{
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::m_Button
	int32_t ___m_Button_0;
	// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::m_EventData
	MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ___m_EventData_1;
};

// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154  : public RuntimeObject
{
	// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::buttonState
	int32_t ___buttonState_0;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::buttonData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___buttonData_1;
};

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> UnityEngine.EventSystems.PointerInputModule/MouseState::m_TrackedButtons
	List_1_t6D515F3BEDA0E1BF16E735CE960F740AB8ACBDD3* ___m_TrackedButtons_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ____currentValue_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Assets.OVR.Scripts.FixRecord
struct FixRecord_tA9619245BB76F73A6E03002DD6C237812E79254D  : public Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2
{
	// Assets.OVR.Scripts.FixMethodDelegate Assets.OVR.Scripts.FixRecord::fixMethod
	FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* ___fixMethod_3;
	// UnityEngine.Object Assets.OVR.Scripts.FixRecord::targetObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___targetObject_4;
	// System.String[] Assets.OVR.Scripts.FixRecord::buttonNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___buttonNames_5;
	// System.Boolean Assets.OVR.Scripts.FixRecord::editModeRequired
	bool ___editModeRequired_6;
	// System.Boolean Assets.OVR.Scripts.FixRecord::complete
	bool ___complete_7;
};

// OVR.OpenVR.HmdMatrix34_t
struct HmdMatrix34_t_t63D86814DA8F9D9DC7AA3143CE8C95454D5709F9 
{
	// System.Single OVR.OpenVR.HmdMatrix34_t::m0
	float ___m0_0;
	// System.Single OVR.OpenVR.HmdMatrix34_t::m1
	float ___m1_1;
	// System.Single OVR.OpenVR.HmdMatrix34_t::m2
	float ___m2_2;
	// System.Single OVR.OpenVR.HmdMatrix34_t::m3
	float ___m3_3;
	// System.Single OVR.OpenVR.HmdMatrix34_t::m4
	float ___m4_4;
	// System.Single OVR.OpenVR.HmdMatrix34_t::m5
	float ___m5_5;
	// System.Single OVR.OpenVR.HmdMatrix34_t::m6
	float ___m6_6;
	// System.Single OVR.OpenVR.HmdMatrix34_t::m7
	float ___m7_7;
	// System.Single OVR.OpenVR.HmdMatrix34_t::m8
	float ___m8_8;
	// System.Single OVR.OpenVR.HmdMatrix34_t::m9
	float ___m9_9;
	// System.Single OVR.OpenVR.HmdMatrix34_t::m10
	float ___m10_10;
	// System.Single OVR.OpenVR.HmdMatrix34_t::m11
	float ___m11_11;
};

// OVR.OpenVR.IVRApplications
struct IVRApplications_t514FC22F24D4E92F266BED6EFC7E478EB4743DE9 
{
	// OVR.OpenVR.IVRApplications/_AddApplicationManifest OVR.OpenVR.IVRApplications::AddApplicationManifest
	_AddApplicationManifest_tB2134603E7C8088A9AA673F7A4A4D1C0E28E6824* ___AddApplicationManifest_0;
	// OVR.OpenVR.IVRApplications/_RemoveApplicationManifest OVR.OpenVR.IVRApplications::RemoveApplicationManifest
	_RemoveApplicationManifest_tB91807F57CF8DD61E9E0CC48BE57D15807E07B49* ___RemoveApplicationManifest_1;
	// OVR.OpenVR.IVRApplications/_IsApplicationInstalled OVR.OpenVR.IVRApplications::IsApplicationInstalled
	_IsApplicationInstalled_tDC846A5201A9A9ED5858D562FF23FF7F582B416A* ___IsApplicationInstalled_2;
	// OVR.OpenVR.IVRApplications/_GetApplicationCount OVR.OpenVR.IVRApplications::GetApplicationCount
	_GetApplicationCount_t66BD00649FFD743E4B2DAF999E24B49BCF244539* ___GetApplicationCount_3;
	// OVR.OpenVR.IVRApplications/_GetApplicationKeyByIndex OVR.OpenVR.IVRApplications::GetApplicationKeyByIndex
	_GetApplicationKeyByIndex_t77640F4E3EA4CE9EEA3EE69375BC7C3961D78EBF* ___GetApplicationKeyByIndex_4;
	// OVR.OpenVR.IVRApplications/_GetApplicationKeyByProcessId OVR.OpenVR.IVRApplications::GetApplicationKeyByProcessId
	_GetApplicationKeyByProcessId_t6B2248A5ECF00F41007B20CC0586C28643D4D023* ___GetApplicationKeyByProcessId_5;
	// OVR.OpenVR.IVRApplications/_LaunchApplication OVR.OpenVR.IVRApplications::LaunchApplication
	_LaunchApplication_t6ADF874C0C2962F95CBE36AFD2FEED4891959688* ___LaunchApplication_6;
	// OVR.OpenVR.IVRApplications/_LaunchTemplateApplication OVR.OpenVR.IVRApplications::LaunchTemplateApplication
	_LaunchTemplateApplication_t02E892FFFEE8F4E79A54EFE4766F78E9F97BFB26* ___LaunchTemplateApplication_7;
	// OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType OVR.OpenVR.IVRApplications::LaunchApplicationFromMimeType
	_LaunchApplicationFromMimeType_t9295A82DBD19BF9E20F03F490E3E0A1A22BA02E1* ___LaunchApplicationFromMimeType_8;
	// OVR.OpenVR.IVRApplications/_LaunchDashboardOverlay OVR.OpenVR.IVRApplications::LaunchDashboardOverlay
	_LaunchDashboardOverlay_tFEDDA05647EEBAEA00B195476EDA456EB775591D* ___LaunchDashboardOverlay_9;
	// OVR.OpenVR.IVRApplications/_CancelApplicationLaunch OVR.OpenVR.IVRApplications::CancelApplicationLaunch
	_CancelApplicationLaunch_t86934ADDD52239E3D1F9035336F5654191803B0F* ___CancelApplicationLaunch_10;
	// OVR.OpenVR.IVRApplications/_IdentifyApplication OVR.OpenVR.IVRApplications::IdentifyApplication
	_IdentifyApplication_tFBEE85C3E7A2DC6EA2A6DB00016C157FE76BFE5C* ___IdentifyApplication_11;
	// OVR.OpenVR.IVRApplications/_GetApplicationProcessId OVR.OpenVR.IVRApplications::GetApplicationProcessId
	_GetApplicationProcessId_tE62C7B73085BFC11F339CC0661133F7B28FDBA13* ___GetApplicationProcessId_12;
	// OVR.OpenVR.IVRApplications/_GetApplicationsErrorNameFromEnum OVR.OpenVR.IVRApplications::GetApplicationsErrorNameFromEnum
	_GetApplicationsErrorNameFromEnum_tD413DF2229541511448BA791425742744A6187FF* ___GetApplicationsErrorNameFromEnum_13;
	// OVR.OpenVR.IVRApplications/_GetApplicationPropertyString OVR.OpenVR.IVRApplications::GetApplicationPropertyString
	_GetApplicationPropertyString_t6FE1E9F99C8355CDBA68F8976D5FEB7858D70197* ___GetApplicationPropertyString_14;
	// OVR.OpenVR.IVRApplications/_GetApplicationPropertyBool OVR.OpenVR.IVRApplications::GetApplicationPropertyBool
	_GetApplicationPropertyBool_t98CF7E6039202B54DA9795BA6162EDEBF83D7816* ___GetApplicationPropertyBool_15;
	// OVR.OpenVR.IVRApplications/_GetApplicationPropertyUint64 OVR.OpenVR.IVRApplications::GetApplicationPropertyUint64
	_GetApplicationPropertyUint64_t771851CC95671A19F55B282C84959CC18367004C* ___GetApplicationPropertyUint64_16;
	// OVR.OpenVR.IVRApplications/_SetApplicationAutoLaunch OVR.OpenVR.IVRApplications::SetApplicationAutoLaunch
	_SetApplicationAutoLaunch_t4646DA1CC3440D864DA4D8C2DF9547E8D8CA0E1E* ___SetApplicationAutoLaunch_17;
	// OVR.OpenVR.IVRApplications/_GetApplicationAutoLaunch OVR.OpenVR.IVRApplications::GetApplicationAutoLaunch
	_GetApplicationAutoLaunch_tD3C961C939CCE20AB711DBC4CCEA75D1FD7D16B5* ___GetApplicationAutoLaunch_18;
	// OVR.OpenVR.IVRApplications/_SetDefaultApplicationForMimeType OVR.OpenVR.IVRApplications::SetDefaultApplicationForMimeType
	_SetDefaultApplicationForMimeType_t20EAD51B0D0B39DEB7D40E66B3F112F0651A852B* ___SetDefaultApplicationForMimeType_19;
	// OVR.OpenVR.IVRApplications/_GetDefaultApplicationForMimeType OVR.OpenVR.IVRApplications::GetDefaultApplicationForMimeType
	_GetDefaultApplicationForMimeType_t33F32E03564ED826685AA592774DC85C14BEEDD8* ___GetDefaultApplicationForMimeType_20;
	// OVR.OpenVR.IVRApplications/_GetApplicationSupportedMimeTypes OVR.OpenVR.IVRApplications::GetApplicationSupportedMimeTypes
	_GetApplicationSupportedMimeTypes_t382D111237AD7EF7B8E195D7D312FBA291785F3E* ___GetApplicationSupportedMimeTypes_21;
	// OVR.OpenVR.IVRApplications/_GetApplicationsThatSupportMimeType OVR.OpenVR.IVRApplications::GetApplicationsThatSupportMimeType
	_GetApplicationsThatSupportMimeType_t13E456F2E3BB757B38C782C8D232665D83768832* ___GetApplicationsThatSupportMimeType_22;
	// OVR.OpenVR.IVRApplications/_GetApplicationLaunchArguments OVR.OpenVR.IVRApplications::GetApplicationLaunchArguments
	_GetApplicationLaunchArguments_t69693DEB05938AADA158E81C8AAF88C501D0B109* ___GetApplicationLaunchArguments_23;
	// OVR.OpenVR.IVRApplications/_GetStartingApplication OVR.OpenVR.IVRApplications::GetStartingApplication
	_GetStartingApplication_tDA95EDF3BE1DC20FBC8B29DC987670CDBEE52B0D* ___GetStartingApplication_24;
	// OVR.OpenVR.IVRApplications/_GetTransitionState OVR.OpenVR.IVRApplications::GetTransitionState
	_GetTransitionState_t7860EFB586686276E29A860FC05FFBEABFDC2C3E* ___GetTransitionState_25;
	// OVR.OpenVR.IVRApplications/_PerformApplicationPrelaunchCheck OVR.OpenVR.IVRApplications::PerformApplicationPrelaunchCheck
	_PerformApplicationPrelaunchCheck_t6EF3B4EE8FF95B1E260B81AB953E671803758FCB* ___PerformApplicationPrelaunchCheck_26;
	// OVR.OpenVR.IVRApplications/_GetApplicationsTransitionStateNameFromEnum OVR.OpenVR.IVRApplications::GetApplicationsTransitionStateNameFromEnum
	_GetApplicationsTransitionStateNameFromEnum_tE7256117DDFAF6CDAD71A9D0CE7EFDC83B5D7D46* ___GetApplicationsTransitionStateNameFromEnum_27;
	// OVR.OpenVR.IVRApplications/_IsQuitUserPromptRequested OVR.OpenVR.IVRApplications::IsQuitUserPromptRequested
	_IsQuitUserPromptRequested_t92A7613624BD682887D5A8967C83708099EE5BBA* ___IsQuitUserPromptRequested_28;
	// OVR.OpenVR.IVRApplications/_LaunchInternalProcess OVR.OpenVR.IVRApplications::LaunchInternalProcess
	_LaunchInternalProcess_t6777545D14DAA61D1A83A5A3DA51018CCA92E4BF* ___LaunchInternalProcess_29;
	// OVR.OpenVR.IVRApplications/_GetCurrentSceneProcessId OVR.OpenVR.IVRApplications::GetCurrentSceneProcessId
	_GetCurrentSceneProcessId_t71F4BAE23AE7A3333D0BD7AB0264B1BCC96BD05F* ___GetCurrentSceneProcessId_30;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRApplications
struct IVRApplications_t514FC22F24D4E92F266BED6EFC7E478EB4743DE9_marshaled_pinvoke
{
	Il2CppMethodPointer ___AddApplicationManifest_0;
	Il2CppMethodPointer ___RemoveApplicationManifest_1;
	Il2CppMethodPointer ___IsApplicationInstalled_2;
	Il2CppMethodPointer ___GetApplicationCount_3;
	Il2CppMethodPointer ___GetApplicationKeyByIndex_4;
	Il2CppMethodPointer ___GetApplicationKeyByProcessId_5;
	Il2CppMethodPointer ___LaunchApplication_6;
	Il2CppMethodPointer ___LaunchTemplateApplication_7;
	Il2CppMethodPointer ___LaunchApplicationFromMimeType_8;
	Il2CppMethodPointer ___LaunchDashboardOverlay_9;
	Il2CppMethodPointer ___CancelApplicationLaunch_10;
	Il2CppMethodPointer ___IdentifyApplication_11;
	Il2CppMethodPointer ___GetApplicationProcessId_12;
	Il2CppMethodPointer ___GetApplicationsErrorNameFromEnum_13;
	Il2CppMethodPointer ___GetApplicationPropertyString_14;
	Il2CppMethodPointer ___GetApplicationPropertyBool_15;
	Il2CppMethodPointer ___GetApplicationPropertyUint64_16;
	Il2CppMethodPointer ___SetApplicationAutoLaunch_17;
	Il2CppMethodPointer ___GetApplicationAutoLaunch_18;
	Il2CppMethodPointer ___SetDefaultApplicationForMimeType_19;
	Il2CppMethodPointer ___GetDefaultApplicationForMimeType_20;
	Il2CppMethodPointer ___GetApplicationSupportedMimeTypes_21;
	Il2CppMethodPointer ___GetApplicationsThatSupportMimeType_22;
	Il2CppMethodPointer ___GetApplicationLaunchArguments_23;
	Il2CppMethodPointer ___GetStartingApplication_24;
	Il2CppMethodPointer ___GetTransitionState_25;
	Il2CppMethodPointer ___PerformApplicationPrelaunchCheck_26;
	Il2CppMethodPointer ___GetApplicationsTransitionStateNameFromEnum_27;
	Il2CppMethodPointer ___IsQuitUserPromptRequested_28;
	Il2CppMethodPointer ___LaunchInternalProcess_29;
	Il2CppMethodPointer ___GetCurrentSceneProcessId_30;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRApplications
struct IVRApplications_t514FC22F24D4E92F266BED6EFC7E478EB4743DE9_marshaled_com
{
	Il2CppMethodPointer ___AddApplicationManifest_0;
	Il2CppMethodPointer ___RemoveApplicationManifest_1;
	Il2CppMethodPointer ___IsApplicationInstalled_2;
	Il2CppMethodPointer ___GetApplicationCount_3;
	Il2CppMethodPointer ___GetApplicationKeyByIndex_4;
	Il2CppMethodPointer ___GetApplicationKeyByProcessId_5;
	Il2CppMethodPointer ___LaunchApplication_6;
	Il2CppMethodPointer ___LaunchTemplateApplication_7;
	Il2CppMethodPointer ___LaunchApplicationFromMimeType_8;
	Il2CppMethodPointer ___LaunchDashboardOverlay_9;
	Il2CppMethodPointer ___CancelApplicationLaunch_10;
	Il2CppMethodPointer ___IdentifyApplication_11;
	Il2CppMethodPointer ___GetApplicationProcessId_12;
	Il2CppMethodPointer ___GetApplicationsErrorNameFromEnum_13;
	Il2CppMethodPointer ___GetApplicationPropertyString_14;
	Il2CppMethodPointer ___GetApplicationPropertyBool_15;
	Il2CppMethodPointer ___GetApplicationPropertyUint64_16;
	Il2CppMethodPointer ___SetApplicationAutoLaunch_17;
	Il2CppMethodPointer ___GetApplicationAutoLaunch_18;
	Il2CppMethodPointer ___SetDefaultApplicationForMimeType_19;
	Il2CppMethodPointer ___GetDefaultApplicationForMimeType_20;
	Il2CppMethodPointer ___GetApplicationSupportedMimeTypes_21;
	Il2CppMethodPointer ___GetApplicationsThatSupportMimeType_22;
	Il2CppMethodPointer ___GetApplicationLaunchArguments_23;
	Il2CppMethodPointer ___GetStartingApplication_24;
	Il2CppMethodPointer ___GetTransitionState_25;
	Il2CppMethodPointer ___PerformApplicationPrelaunchCheck_26;
	Il2CppMethodPointer ___GetApplicationsTransitionStateNameFromEnum_27;
	Il2CppMethodPointer ___IsQuitUserPromptRequested_28;
	Il2CppMethodPointer ___LaunchInternalProcess_29;
	Il2CppMethodPointer ___GetCurrentSceneProcessId_30;
};

// OVR.OpenVR.IVRChaperone
struct IVRChaperone_t991FA89759F26D4928F7EDAE4610F16E935A3AAB 
{
	// OVR.OpenVR.IVRChaperone/_GetCalibrationState OVR.OpenVR.IVRChaperone::GetCalibrationState
	_GetCalibrationState_t1AFD85FE859C72ADD2600F3AA6050C762BFDA8A6* ___GetCalibrationState_0;
	// OVR.OpenVR.IVRChaperone/_GetPlayAreaSize OVR.OpenVR.IVRChaperone::GetPlayAreaSize
	_GetPlayAreaSize_tD8DCFD70AE2DFF421706C976BE912C1AE8199D98* ___GetPlayAreaSize_1;
	// OVR.OpenVR.IVRChaperone/_GetPlayAreaRect OVR.OpenVR.IVRChaperone::GetPlayAreaRect
	_GetPlayAreaRect_t4EF5A642F58B105515B6F1334090F35E66072599* ___GetPlayAreaRect_2;
	// OVR.OpenVR.IVRChaperone/_ReloadInfo OVR.OpenVR.IVRChaperone::ReloadInfo
	_ReloadInfo_tD325C5625CAF6B2D6B26CA4C6674555470743FC8* ___ReloadInfo_3;
	// OVR.OpenVR.IVRChaperone/_SetSceneColor OVR.OpenVR.IVRChaperone::SetSceneColor
	_SetSceneColor_tDF31CB54DC4C6C2B36AC1078D2F920803BA525BA* ___SetSceneColor_4;
	// OVR.OpenVR.IVRChaperone/_GetBoundsColor OVR.OpenVR.IVRChaperone::GetBoundsColor
	_GetBoundsColor_t5336B5AE8B44BE10ACD232B1EC9501558C2F296D* ___GetBoundsColor_5;
	// OVR.OpenVR.IVRChaperone/_AreBoundsVisible OVR.OpenVR.IVRChaperone::AreBoundsVisible
	_AreBoundsVisible_tF8D7BD9887C25D87D0D446B0CD4862D9F2D679F1* ___AreBoundsVisible_6;
	// OVR.OpenVR.IVRChaperone/_ForceBoundsVisible OVR.OpenVR.IVRChaperone::ForceBoundsVisible
	_ForceBoundsVisible_t1A5CB76DC93B2C2BFF16D0621E300E8CA01039C6* ___ForceBoundsVisible_7;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRChaperone
struct IVRChaperone_t991FA89759F26D4928F7EDAE4610F16E935A3AAB_marshaled_pinvoke
{
	Il2CppMethodPointer ___GetCalibrationState_0;
	Il2CppMethodPointer ___GetPlayAreaSize_1;
	Il2CppMethodPointer ___GetPlayAreaRect_2;
	Il2CppMethodPointer ___ReloadInfo_3;
	Il2CppMethodPointer ___SetSceneColor_4;
	Il2CppMethodPointer ___GetBoundsColor_5;
	Il2CppMethodPointer ___AreBoundsVisible_6;
	Il2CppMethodPointer ___ForceBoundsVisible_7;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRChaperone
struct IVRChaperone_t991FA89759F26D4928F7EDAE4610F16E935A3AAB_marshaled_com
{
	Il2CppMethodPointer ___GetCalibrationState_0;
	Il2CppMethodPointer ___GetPlayAreaSize_1;
	Il2CppMethodPointer ___GetPlayAreaRect_2;
	Il2CppMethodPointer ___ReloadInfo_3;
	Il2CppMethodPointer ___SetSceneColor_4;
	Il2CppMethodPointer ___GetBoundsColor_5;
	Il2CppMethodPointer ___AreBoundsVisible_6;
	Il2CppMethodPointer ___ForceBoundsVisible_7;
};

// OVR.OpenVR.IVRChaperoneSetup
struct IVRChaperoneSetup_t4B83717DEF4B4594F4B730800E979923DEA0690F 
{
	// OVR.OpenVR.IVRChaperoneSetup/_CommitWorkingCopy OVR.OpenVR.IVRChaperoneSetup::CommitWorkingCopy
	_CommitWorkingCopy_t9880727C4FC8722E12AD8A2037A297558AB65A5D* ___CommitWorkingCopy_0;
	// OVR.OpenVR.IVRChaperoneSetup/_RevertWorkingCopy OVR.OpenVR.IVRChaperoneSetup::RevertWorkingCopy
	_RevertWorkingCopy_tD878AE47408B87BFBD9F88411696E4D66A9166F5* ___RevertWorkingCopy_1;
	// OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaSize OVR.OpenVR.IVRChaperoneSetup::GetWorkingPlayAreaSize
	_GetWorkingPlayAreaSize_t7DBA8CB4F72E476C33FC993949DFE50F4439DD94* ___GetWorkingPlayAreaSize_2;
	// OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaRect OVR.OpenVR.IVRChaperoneSetup::GetWorkingPlayAreaRect
	_GetWorkingPlayAreaRect_t7D3E0087CFA846DD295B57F7B1FEF5DF0D3AE24D* ___GetWorkingPlayAreaRect_3;
	// OVR.OpenVR.IVRChaperoneSetup/_GetWorkingCollisionBoundsInfo OVR.OpenVR.IVRChaperoneSetup::GetWorkingCollisionBoundsInfo
	_GetWorkingCollisionBoundsInfo_tFA8242F1BE7D745000AC58309B1FF2D43B229D34* ___GetWorkingCollisionBoundsInfo_4;
	// OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo OVR.OpenVR.IVRChaperoneSetup::GetLiveCollisionBoundsInfo
	_GetLiveCollisionBoundsInfo_tBBF95292081C1D6AFCC74D184E2D5F97658C2BE3* ___GetLiveCollisionBoundsInfo_5;
	// OVR.OpenVR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose OVR.OpenVR.IVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose
	_GetWorkingSeatedZeroPoseToRawTrackingPose_tE4AB0E734686910A211A85F28F949B9BD6D71B9C* ___GetWorkingSeatedZeroPoseToRawTrackingPose_6;
	// OVR.OpenVR.IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose OVR.OpenVR.IVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose
	_GetWorkingStandingZeroPoseToRawTrackingPose_t4EC1736EF81202A06AB43288B0755CDA70D25C2E* ___GetWorkingStandingZeroPoseToRawTrackingPose_7;
	// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPlayAreaSize OVR.OpenVR.IVRChaperoneSetup::SetWorkingPlayAreaSize
	_SetWorkingPlayAreaSize_t6CF2DBD1BD53727008F32DECEC5333B6BA01DA2A* ___SetWorkingPlayAreaSize_8;
	// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo OVR.OpenVR.IVRChaperoneSetup::SetWorkingCollisionBoundsInfo
	_SetWorkingCollisionBoundsInfo_t0DB6624DDC34CC10CB7B225EC7B085CB28EBBD70* ___SetWorkingCollisionBoundsInfo_9;
	// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose OVR.OpenVR.IVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose
	_SetWorkingSeatedZeroPoseToRawTrackingPose_tD23D5C8E2151D6E1E6961881994FB8E22A48CD27* ___SetWorkingSeatedZeroPoseToRawTrackingPose_10;
	// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose OVR.OpenVR.IVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose
	_SetWorkingStandingZeroPoseToRawTrackingPose_tD3C959C457F041DBDB5536BFA162394586780DEC* ___SetWorkingStandingZeroPoseToRawTrackingPose_11;
	// OVR.OpenVR.IVRChaperoneSetup/_ReloadFromDisk OVR.OpenVR.IVRChaperoneSetup::ReloadFromDisk
	_ReloadFromDisk_tC88E3E23183913569FB5D76838BD1F507A9E66DF* ___ReloadFromDisk_12;
	// OVR.OpenVR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose OVR.OpenVR.IVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose
	_GetLiveSeatedZeroPoseToRawTrackingPose_t835E3470CE57F4057BD78A49E82DF20E4BFAACEB* ___GetLiveSeatedZeroPoseToRawTrackingPose_13;
	// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo OVR.OpenVR.IVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo
	_SetWorkingCollisionBoundsTagsInfo_t8BB773F52B942457EF50428476486A892D4D6C7E* ___SetWorkingCollisionBoundsTagsInfo_14;
	// OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo OVR.OpenVR.IVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo
	_GetLiveCollisionBoundsTagsInfo_tEEE0147816C31226E25310B10CF277EF4B77959C* ___GetLiveCollisionBoundsTagsInfo_15;
	// OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo OVR.OpenVR.IVRChaperoneSetup::SetWorkingPhysicalBoundsInfo
	_SetWorkingPhysicalBoundsInfo_tD0E7DF0A43941807DC038C58539FCAD158104270* ___SetWorkingPhysicalBoundsInfo_16;
	// OVR.OpenVR.IVRChaperoneSetup/_GetLivePhysicalBoundsInfo OVR.OpenVR.IVRChaperoneSetup::GetLivePhysicalBoundsInfo
	_GetLivePhysicalBoundsInfo_t94E32D16FF7B09EC1D82B0E75718F164AF3C365D* ___GetLivePhysicalBoundsInfo_17;
	// OVR.OpenVR.IVRChaperoneSetup/_ExportLiveToBuffer OVR.OpenVR.IVRChaperoneSetup::ExportLiveToBuffer
	_ExportLiveToBuffer_tF5FBF7E71CFA6172127F8365E3C5D5334C46E303* ___ExportLiveToBuffer_18;
	// OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking OVR.OpenVR.IVRChaperoneSetup::ImportFromBufferToWorking
	_ImportFromBufferToWorking_t16903557624BDA57E7BC42CFDA654DA7638AA641* ___ImportFromBufferToWorking_19;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRChaperoneSetup
struct IVRChaperoneSetup_t4B83717DEF4B4594F4B730800E979923DEA0690F_marshaled_pinvoke
{
	Il2CppMethodPointer ___CommitWorkingCopy_0;
	Il2CppMethodPointer ___RevertWorkingCopy_1;
	Il2CppMethodPointer ___GetWorkingPlayAreaSize_2;
	Il2CppMethodPointer ___GetWorkingPlayAreaRect_3;
	Il2CppMethodPointer ___GetWorkingCollisionBoundsInfo_4;
	Il2CppMethodPointer ___GetLiveCollisionBoundsInfo_5;
	Il2CppMethodPointer ___GetWorkingSeatedZeroPoseToRawTrackingPose_6;
	Il2CppMethodPointer ___GetWorkingStandingZeroPoseToRawTrackingPose_7;
	Il2CppMethodPointer ___SetWorkingPlayAreaSize_8;
	Il2CppMethodPointer ___SetWorkingCollisionBoundsInfo_9;
	Il2CppMethodPointer ___SetWorkingSeatedZeroPoseToRawTrackingPose_10;
	Il2CppMethodPointer ___SetWorkingStandingZeroPoseToRawTrackingPose_11;
	Il2CppMethodPointer ___ReloadFromDisk_12;
	Il2CppMethodPointer ___GetLiveSeatedZeroPoseToRawTrackingPose_13;
	Il2CppMethodPointer ___SetWorkingCollisionBoundsTagsInfo_14;
	Il2CppMethodPointer ___GetLiveCollisionBoundsTagsInfo_15;
	Il2CppMethodPointer ___SetWorkingPhysicalBoundsInfo_16;
	Il2CppMethodPointer ___GetLivePhysicalBoundsInfo_17;
	Il2CppMethodPointer ___ExportLiveToBuffer_18;
	Il2CppMethodPointer ___ImportFromBufferToWorking_19;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRChaperoneSetup
struct IVRChaperoneSetup_t4B83717DEF4B4594F4B730800E979923DEA0690F_marshaled_com
{
	Il2CppMethodPointer ___CommitWorkingCopy_0;
	Il2CppMethodPointer ___RevertWorkingCopy_1;
	Il2CppMethodPointer ___GetWorkingPlayAreaSize_2;
	Il2CppMethodPointer ___GetWorkingPlayAreaRect_3;
	Il2CppMethodPointer ___GetWorkingCollisionBoundsInfo_4;
	Il2CppMethodPointer ___GetLiveCollisionBoundsInfo_5;
	Il2CppMethodPointer ___GetWorkingSeatedZeroPoseToRawTrackingPose_6;
	Il2CppMethodPointer ___GetWorkingStandingZeroPoseToRawTrackingPose_7;
	Il2CppMethodPointer ___SetWorkingPlayAreaSize_8;
	Il2CppMethodPointer ___SetWorkingCollisionBoundsInfo_9;
	Il2CppMethodPointer ___SetWorkingSeatedZeroPoseToRawTrackingPose_10;
	Il2CppMethodPointer ___SetWorkingStandingZeroPoseToRawTrackingPose_11;
	Il2CppMethodPointer ___ReloadFromDisk_12;
	Il2CppMethodPointer ___GetLiveSeatedZeroPoseToRawTrackingPose_13;
	Il2CppMethodPointer ___SetWorkingCollisionBoundsTagsInfo_14;
	Il2CppMethodPointer ___GetLiveCollisionBoundsTagsInfo_15;
	Il2CppMethodPointer ___SetWorkingPhysicalBoundsInfo_16;
	Il2CppMethodPointer ___GetLivePhysicalBoundsInfo_17;
	Il2CppMethodPointer ___ExportLiveToBuffer_18;
	Il2CppMethodPointer ___ImportFromBufferToWorking_19;
};

// OVR.OpenVR.IVRCompositor
struct IVRCompositor_tA115D9B9E7B67163A0501BF1F5DFBDA439849EB0 
{
	// OVR.OpenVR.IVRCompositor/_SetTrackingSpace OVR.OpenVR.IVRCompositor::SetTrackingSpace
	_SetTrackingSpace_tBFF6CE3D8987B3CB8288FD148CA4E7882A9C754E* ___SetTrackingSpace_0;
	// OVR.OpenVR.IVRCompositor/_GetTrackingSpace OVR.OpenVR.IVRCompositor::GetTrackingSpace
	_GetTrackingSpace_t0562B59D5C76631A46ED7D4D5D00072DAA86D932* ___GetTrackingSpace_1;
	// OVR.OpenVR.IVRCompositor/_WaitGetPoses OVR.OpenVR.IVRCompositor::WaitGetPoses
	_WaitGetPoses_t65ED9115B474A9A3B0700D8807CFB5A723A60A08* ___WaitGetPoses_2;
	// OVR.OpenVR.IVRCompositor/_GetLastPoses OVR.OpenVR.IVRCompositor::GetLastPoses
	_GetLastPoses_t5B065AF3302B75CC6E4503A49AB098E2C374BFAD* ___GetLastPoses_3;
	// OVR.OpenVR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex OVR.OpenVR.IVRCompositor::GetLastPoseForTrackedDeviceIndex
	_GetLastPoseForTrackedDeviceIndex_t5A0CA1821264304990B74D6D8A4F35C1B83F0BAF* ___GetLastPoseForTrackedDeviceIndex_4;
	// OVR.OpenVR.IVRCompositor/_Submit OVR.OpenVR.IVRCompositor::Submit
	_Submit_t0F332246BDCEBC756C84B4EAD2486D627769135A* ___Submit_5;
	// OVR.OpenVR.IVRCompositor/_ClearLastSubmittedFrame OVR.OpenVR.IVRCompositor::ClearLastSubmittedFrame
	_ClearLastSubmittedFrame_tAFC2410938A79F715664C19A2F2C3CE9BA5DC544* ___ClearLastSubmittedFrame_6;
	// OVR.OpenVR.IVRCompositor/_PostPresentHandoff OVR.OpenVR.IVRCompositor::PostPresentHandoff
	_PostPresentHandoff_t2FB1A151C07D0DBD1CFAD942FD9C57595C89A118* ___PostPresentHandoff_7;
	// OVR.OpenVR.IVRCompositor/_GetFrameTiming OVR.OpenVR.IVRCompositor::GetFrameTiming
	_GetFrameTiming_t9615F6E82A00672215641F1ED69036DDCAEAB4B4* ___GetFrameTiming_8;
	// OVR.OpenVR.IVRCompositor/_GetFrameTimings OVR.OpenVR.IVRCompositor::GetFrameTimings
	_GetFrameTimings_tD753E5BEC77A893B88CA8B01985E43C6DC4CE051* ___GetFrameTimings_9;
	// OVR.OpenVR.IVRCompositor/_GetFrameTimeRemaining OVR.OpenVR.IVRCompositor::GetFrameTimeRemaining
	_GetFrameTimeRemaining_t67ADEF5FEFDF70005598F4765C6396DD22FA6001* ___GetFrameTimeRemaining_10;
	// OVR.OpenVR.IVRCompositor/_GetCumulativeStats OVR.OpenVR.IVRCompositor::GetCumulativeStats
	_GetCumulativeStats_tD4D354FC6FC968C74965B559E9024A51685E5855* ___GetCumulativeStats_11;
	// OVR.OpenVR.IVRCompositor/_FadeToColor OVR.OpenVR.IVRCompositor::FadeToColor
	_FadeToColor_t121E6287BED1BD11330F7D40E4468E800A3F9884* ___FadeToColor_12;
	// OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor OVR.OpenVR.IVRCompositor::GetCurrentFadeColor
	_GetCurrentFadeColor_t2D44A08815BA84F67615068B442EA5EEB7A0BE7A* ___GetCurrentFadeColor_13;
	// OVR.OpenVR.IVRCompositor/_FadeGrid OVR.OpenVR.IVRCompositor::FadeGrid
	_FadeGrid_t650CDF2A23FC729AC210548E8CBA0CB913B96979* ___FadeGrid_14;
	// OVR.OpenVR.IVRCompositor/_GetCurrentGridAlpha OVR.OpenVR.IVRCompositor::GetCurrentGridAlpha
	_GetCurrentGridAlpha_t7487679E150A9E30EACD9E79986D9A16DF14025B* ___GetCurrentGridAlpha_15;
	// OVR.OpenVR.IVRCompositor/_SetSkyboxOverride OVR.OpenVR.IVRCompositor::SetSkyboxOverride
	_SetSkyboxOverride_t799A7CCEE3BFB04FA19C37FA15DAF2072B981D1F* ___SetSkyboxOverride_16;
	// OVR.OpenVR.IVRCompositor/_ClearSkyboxOverride OVR.OpenVR.IVRCompositor::ClearSkyboxOverride
	_ClearSkyboxOverride_t46B668F129492C03591F08B0BE9AFDBB97A00691* ___ClearSkyboxOverride_17;
	// OVR.OpenVR.IVRCompositor/_CompositorBringToFront OVR.OpenVR.IVRCompositor::CompositorBringToFront
	_CompositorBringToFront_t3D928D19F5047ECA3746D22DB2DFF8F1154B6274* ___CompositorBringToFront_18;
	// OVR.OpenVR.IVRCompositor/_CompositorGoToBack OVR.OpenVR.IVRCompositor::CompositorGoToBack
	_CompositorGoToBack_t253B7AA8875601E4359CF02577C6243E44DF3272* ___CompositorGoToBack_19;
	// OVR.OpenVR.IVRCompositor/_CompositorQuit OVR.OpenVR.IVRCompositor::CompositorQuit
	_CompositorQuit_t6F2BD0FE1FEC12D10AB988127D619C4DE16DC2FB* ___CompositorQuit_20;
	// OVR.OpenVR.IVRCompositor/_IsFullscreen OVR.OpenVR.IVRCompositor::IsFullscreen
	_IsFullscreen_tFD9DFC2C0CF21DDAB127E99BF936B17E188DAFFA* ___IsFullscreen_21;
	// OVR.OpenVR.IVRCompositor/_GetCurrentSceneFocusProcess OVR.OpenVR.IVRCompositor::GetCurrentSceneFocusProcess
	_GetCurrentSceneFocusProcess_tCF8A2124575A09E3929B5B8A421C99FD95FCC79C* ___GetCurrentSceneFocusProcess_22;
	// OVR.OpenVR.IVRCompositor/_GetLastFrameRenderer OVR.OpenVR.IVRCompositor::GetLastFrameRenderer
	_GetLastFrameRenderer_t244108CB75920FA45C3C8C49F9DF411283392DE6* ___GetLastFrameRenderer_23;
	// OVR.OpenVR.IVRCompositor/_CanRenderScene OVR.OpenVR.IVRCompositor::CanRenderScene
	_CanRenderScene_t87BD55B23A6E762F046FEC7A07AEAEF4256C61AB* ___CanRenderScene_24;
	// OVR.OpenVR.IVRCompositor/_ShowMirrorWindow OVR.OpenVR.IVRCompositor::ShowMirrorWindow
	_ShowMirrorWindow_tAB2A3E209CE89E9F4715D5A5C3D0BE1FB8E8A3F4* ___ShowMirrorWindow_25;
	// OVR.OpenVR.IVRCompositor/_HideMirrorWindow OVR.OpenVR.IVRCompositor::HideMirrorWindow
	_HideMirrorWindow_t2AF8703671D7F3CA01738924AC4935CE82317F0A* ___HideMirrorWindow_26;
	// OVR.OpenVR.IVRCompositor/_IsMirrorWindowVisible OVR.OpenVR.IVRCompositor::IsMirrorWindowVisible
	_IsMirrorWindowVisible_tEEC6293C1C832ACF124B96757EBDBF064BBDBDBF* ___IsMirrorWindowVisible_27;
	// OVR.OpenVR.IVRCompositor/_CompositorDumpImages OVR.OpenVR.IVRCompositor::CompositorDumpImages
	_CompositorDumpImages_t2C607DC32885967B6D53D75F5681FF58D419AFF1* ___CompositorDumpImages_28;
	// OVR.OpenVR.IVRCompositor/_ShouldAppRenderWithLowResources OVR.OpenVR.IVRCompositor::ShouldAppRenderWithLowResources
	_ShouldAppRenderWithLowResources_t6CBAEE18B3987BBBC64E748CF31AA0801DD4CDB4* ___ShouldAppRenderWithLowResources_29;
	// OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn OVR.OpenVR.IVRCompositor::ForceInterleavedReprojectionOn
	_ForceInterleavedReprojectionOn_t2E2159CCDB19E331E6F37A293765F1646A56DA22* ___ForceInterleavedReprojectionOn_30;
	// OVR.OpenVR.IVRCompositor/_ForceReconnectProcess OVR.OpenVR.IVRCompositor::ForceReconnectProcess
	_ForceReconnectProcess_tD19461D2311A958A867AAE0F41FCBA76495CA56B* ___ForceReconnectProcess_31;
	// OVR.OpenVR.IVRCompositor/_SuspendRendering OVR.OpenVR.IVRCompositor::SuspendRendering
	_SuspendRendering_tB799E0505ACBE20AFAF327ED90A7C055CD496183* ___SuspendRendering_32;
	// OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11 OVR.OpenVR.IVRCompositor::GetMirrorTextureD3D11
	_GetMirrorTextureD3D11_t733C3FDD9CC32072F8C2CF65DB3455724D892783* ___GetMirrorTextureD3D11_33;
	// OVR.OpenVR.IVRCompositor/_ReleaseMirrorTextureD3D11 OVR.OpenVR.IVRCompositor::ReleaseMirrorTextureD3D11
	_ReleaseMirrorTextureD3D11_tFDF453C21A503D26C0A7CD18323D53E6D527F10A* ___ReleaseMirrorTextureD3D11_34;
	// OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL OVR.OpenVR.IVRCompositor::GetMirrorTextureGL
	_GetMirrorTextureGL_t6930BF51F5E7D78D356A7BE75D862736E605A653* ___GetMirrorTextureGL_35;
	// OVR.OpenVR.IVRCompositor/_ReleaseSharedGLTexture OVR.OpenVR.IVRCompositor::ReleaseSharedGLTexture
	_ReleaseSharedGLTexture_t5F693BC0577C88F2EE86A139F306C868B0BA3921* ___ReleaseSharedGLTexture_36;
	// OVR.OpenVR.IVRCompositor/_LockGLSharedTextureForAccess OVR.OpenVR.IVRCompositor::LockGLSharedTextureForAccess
	_LockGLSharedTextureForAccess_t5A3857BB8E6BC71B0E2BC317C4915A0744F8E9EC* ___LockGLSharedTextureForAccess_37;
	// OVR.OpenVR.IVRCompositor/_UnlockGLSharedTextureForAccess OVR.OpenVR.IVRCompositor::UnlockGLSharedTextureForAccess
	_UnlockGLSharedTextureForAccess_t627213672696F793927BFE4FBE1591E0DA645705* ___UnlockGLSharedTextureForAccess_38;
	// OVR.OpenVR.IVRCompositor/_GetVulkanInstanceExtensionsRequired OVR.OpenVR.IVRCompositor::GetVulkanInstanceExtensionsRequired
	_GetVulkanInstanceExtensionsRequired_t02214D401773984820B15BB8BA1873BE301E0B7D* ___GetVulkanInstanceExtensionsRequired_39;
	// OVR.OpenVR.IVRCompositor/_GetVulkanDeviceExtensionsRequired OVR.OpenVR.IVRCompositor::GetVulkanDeviceExtensionsRequired
	_GetVulkanDeviceExtensionsRequired_tE8B9F0DC9BE6558BED74371D154A5676F1EC6593* ___GetVulkanDeviceExtensionsRequired_40;
	// OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode OVR.OpenVR.IVRCompositor::SetExplicitTimingMode
	_SetExplicitTimingMode_t12D5085E4D2285D32D78A90A97AEC2D1EEA6898C* ___SetExplicitTimingMode_41;
	// OVR.OpenVR.IVRCompositor/_SubmitExplicitTimingData OVR.OpenVR.IVRCompositor::SubmitExplicitTimingData
	_SubmitExplicitTimingData_t0AC2595316A9044B5B49CB787DC94AE767995C1E* ___SubmitExplicitTimingData_42;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRCompositor
struct IVRCompositor_tA115D9B9E7B67163A0501BF1F5DFBDA439849EB0_marshaled_pinvoke
{
	Il2CppMethodPointer ___SetTrackingSpace_0;
	Il2CppMethodPointer ___GetTrackingSpace_1;
	Il2CppMethodPointer ___WaitGetPoses_2;
	Il2CppMethodPointer ___GetLastPoses_3;
	Il2CppMethodPointer ___GetLastPoseForTrackedDeviceIndex_4;
	Il2CppMethodPointer ___Submit_5;
	Il2CppMethodPointer ___ClearLastSubmittedFrame_6;
	Il2CppMethodPointer ___PostPresentHandoff_7;
	Il2CppMethodPointer ___GetFrameTiming_8;
	Il2CppMethodPointer ___GetFrameTimings_9;
	Il2CppMethodPointer ___GetFrameTimeRemaining_10;
	Il2CppMethodPointer ___GetCumulativeStats_11;
	Il2CppMethodPointer ___FadeToColor_12;
	Il2CppMethodPointer ___GetCurrentFadeColor_13;
	Il2CppMethodPointer ___FadeGrid_14;
	Il2CppMethodPointer ___GetCurrentGridAlpha_15;
	Il2CppMethodPointer ___SetSkyboxOverride_16;
	Il2CppMethodPointer ___ClearSkyboxOverride_17;
	Il2CppMethodPointer ___CompositorBringToFront_18;
	Il2CppMethodPointer ___CompositorGoToBack_19;
	Il2CppMethodPointer ___CompositorQuit_20;
	Il2CppMethodPointer ___IsFullscreen_21;
	Il2CppMethodPointer ___GetCurrentSceneFocusProcess_22;
	Il2CppMethodPointer ___GetLastFrameRenderer_23;
	Il2CppMethodPointer ___CanRenderScene_24;
	Il2CppMethodPointer ___ShowMirrorWindow_25;
	Il2CppMethodPointer ___HideMirrorWindow_26;
	Il2CppMethodPointer ___IsMirrorWindowVisible_27;
	Il2CppMethodPointer ___CompositorDumpImages_28;
	Il2CppMethodPointer ___ShouldAppRenderWithLowResources_29;
	Il2CppMethodPointer ___ForceInterleavedReprojectionOn_30;
	Il2CppMethodPointer ___ForceReconnectProcess_31;
	Il2CppMethodPointer ___SuspendRendering_32;
	Il2CppMethodPointer ___GetMirrorTextureD3D11_33;
	Il2CppMethodPointer ___ReleaseMirrorTextureD3D11_34;
	Il2CppMethodPointer ___GetMirrorTextureGL_35;
	Il2CppMethodPointer ___ReleaseSharedGLTexture_36;
	Il2CppMethodPointer ___LockGLSharedTextureForAccess_37;
	Il2CppMethodPointer ___UnlockGLSharedTextureForAccess_38;
	Il2CppMethodPointer ___GetVulkanInstanceExtensionsRequired_39;
	Il2CppMethodPointer ___GetVulkanDeviceExtensionsRequired_40;
	Il2CppMethodPointer ___SetExplicitTimingMode_41;
	Il2CppMethodPointer ___SubmitExplicitTimingData_42;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRCompositor
struct IVRCompositor_tA115D9B9E7B67163A0501BF1F5DFBDA439849EB0_marshaled_com
{
	Il2CppMethodPointer ___SetTrackingSpace_0;
	Il2CppMethodPointer ___GetTrackingSpace_1;
	Il2CppMethodPointer ___WaitGetPoses_2;
	Il2CppMethodPointer ___GetLastPoses_3;
	Il2CppMethodPointer ___GetLastPoseForTrackedDeviceIndex_4;
	Il2CppMethodPointer ___Submit_5;
	Il2CppMethodPointer ___ClearLastSubmittedFrame_6;
	Il2CppMethodPointer ___PostPresentHandoff_7;
	Il2CppMethodPointer ___GetFrameTiming_8;
	Il2CppMethodPointer ___GetFrameTimings_9;
	Il2CppMethodPointer ___GetFrameTimeRemaining_10;
	Il2CppMethodPointer ___GetCumulativeStats_11;
	Il2CppMethodPointer ___FadeToColor_12;
	Il2CppMethodPointer ___GetCurrentFadeColor_13;
	Il2CppMethodPointer ___FadeGrid_14;
	Il2CppMethodPointer ___GetCurrentGridAlpha_15;
	Il2CppMethodPointer ___SetSkyboxOverride_16;
	Il2CppMethodPointer ___ClearSkyboxOverride_17;
	Il2CppMethodPointer ___CompositorBringToFront_18;
	Il2CppMethodPointer ___CompositorGoToBack_19;
	Il2CppMethodPointer ___CompositorQuit_20;
	Il2CppMethodPointer ___IsFullscreen_21;
	Il2CppMethodPointer ___GetCurrentSceneFocusProcess_22;
	Il2CppMethodPointer ___GetLastFrameRenderer_23;
	Il2CppMethodPointer ___CanRenderScene_24;
	Il2CppMethodPointer ___ShowMirrorWindow_25;
	Il2CppMethodPointer ___HideMirrorWindow_26;
	Il2CppMethodPointer ___IsMirrorWindowVisible_27;
	Il2CppMethodPointer ___CompositorDumpImages_28;
	Il2CppMethodPointer ___ShouldAppRenderWithLowResources_29;
	Il2CppMethodPointer ___ForceInterleavedReprojectionOn_30;
	Il2CppMethodPointer ___ForceReconnectProcess_31;
	Il2CppMethodPointer ___SuspendRendering_32;
	Il2CppMethodPointer ___GetMirrorTextureD3D11_33;
	Il2CppMethodPointer ___ReleaseMirrorTextureD3D11_34;
	Il2CppMethodPointer ___GetMirrorTextureGL_35;
	Il2CppMethodPointer ___ReleaseSharedGLTexture_36;
	Il2CppMethodPointer ___LockGLSharedTextureForAccess_37;
	Il2CppMethodPointer ___UnlockGLSharedTextureForAccess_38;
	Il2CppMethodPointer ___GetVulkanInstanceExtensionsRequired_39;
	Il2CppMethodPointer ___GetVulkanDeviceExtensionsRequired_40;
	Il2CppMethodPointer ___SetExplicitTimingMode_41;
	Il2CppMethodPointer ___SubmitExplicitTimingData_42;
};

// OVR.OpenVR.IVRExtendedDisplay
struct IVRExtendedDisplay_t35C46EEBB0DD15A6BD91F9079AC1C8F15A14AD92 
{
	// OVR.OpenVR.IVRExtendedDisplay/_GetWindowBounds OVR.OpenVR.IVRExtendedDisplay::GetWindowBounds
	_GetWindowBounds_t8A5EE4FEA706C1E2132D0867F4EDA5C480369FE4* ___GetWindowBounds_0;
	// OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport OVR.OpenVR.IVRExtendedDisplay::GetEyeOutputViewport
	_GetEyeOutputViewport_t37FBB86EDF06894BE0CE1DD396F8FD6B97E569E5* ___GetEyeOutputViewport_1;
	// OVR.OpenVR.IVRExtendedDisplay/_GetDXGIOutputInfo OVR.OpenVR.IVRExtendedDisplay::GetDXGIOutputInfo
	_GetDXGIOutputInfo_t0B5CC37DCD207B5A6B0606B0C54D5B756BC7F243* ___GetDXGIOutputInfo_2;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRExtendedDisplay
struct IVRExtendedDisplay_t35C46EEBB0DD15A6BD91F9079AC1C8F15A14AD92_marshaled_pinvoke
{
	Il2CppMethodPointer ___GetWindowBounds_0;
	Il2CppMethodPointer ___GetEyeOutputViewport_1;
	Il2CppMethodPointer ___GetDXGIOutputInfo_2;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRExtendedDisplay
struct IVRExtendedDisplay_t35C46EEBB0DD15A6BD91F9079AC1C8F15A14AD92_marshaled_com
{
	Il2CppMethodPointer ___GetWindowBounds_0;
	Il2CppMethodPointer ___GetEyeOutputViewport_1;
	Il2CppMethodPointer ___GetDXGIOutputInfo_2;
};

// OVR.OpenVR.IVRInput
struct IVRInput_t2388F05027ABF70F7274C50DE3F028D2B7441147 
{
	// OVR.OpenVR.IVRInput/_SetActionManifestPath OVR.OpenVR.IVRInput::SetActionManifestPath
	_SetActionManifestPath_t007D27FE5EC4DAB48FFFB5D25B25EBDF34210A2D* ___SetActionManifestPath_0;
	// OVR.OpenVR.IVRInput/_GetActionSetHandle OVR.OpenVR.IVRInput::GetActionSetHandle
	_GetActionSetHandle_tE44EE2278C7ECAE67894D97421427FC535C6ED86* ___GetActionSetHandle_1;
	// OVR.OpenVR.IVRInput/_GetActionHandle OVR.OpenVR.IVRInput::GetActionHandle
	_GetActionHandle_t39687D8C957CC72700EB789569511CE49A6887AA* ___GetActionHandle_2;
	// OVR.OpenVR.IVRInput/_GetInputSourceHandle OVR.OpenVR.IVRInput::GetInputSourceHandle
	_GetInputSourceHandle_tB4F253D6BED390474F619356FE0F92CA23E6B74E* ___GetInputSourceHandle_3;
	// OVR.OpenVR.IVRInput/_UpdateActionState OVR.OpenVR.IVRInput::UpdateActionState
	_UpdateActionState_tACCEE9E8315AAC639F386F0E5E1352A12DF728B2* ___UpdateActionState_4;
	// OVR.OpenVR.IVRInput/_GetDigitalActionData OVR.OpenVR.IVRInput::GetDigitalActionData
	_GetDigitalActionData_tC4ED08E3304DF7CBD9AD288D8ECBE78461B0C667* ___GetDigitalActionData_5;
	// OVR.OpenVR.IVRInput/_GetAnalogActionData OVR.OpenVR.IVRInput::GetAnalogActionData
	_GetAnalogActionData_t33F3832C40079A8B5BC284939F694FF79503A6E0* ___GetAnalogActionData_6;
	// OVR.OpenVR.IVRInput/_GetPoseActionData OVR.OpenVR.IVRInput::GetPoseActionData
	_GetPoseActionData_t75C7FAB1DB16893DF110B06A6C466A2C15D7D30C* ___GetPoseActionData_7;
	// OVR.OpenVR.IVRInput/_GetSkeletalActionData OVR.OpenVR.IVRInput::GetSkeletalActionData
	_GetSkeletalActionData_t7FFB9696FFE2E3F36B591D7B46D1DD8B6B60570E* ___GetSkeletalActionData_8;
	// OVR.OpenVR.IVRInput/_GetSkeletalBoneData OVR.OpenVR.IVRInput::GetSkeletalBoneData
	_GetSkeletalBoneData_t6E341E34803B8415B8A1BD9BA1A8D9181F57FF2F* ___GetSkeletalBoneData_9;
	// OVR.OpenVR.IVRInput/_GetSkeletalBoneDataCompressed OVR.OpenVR.IVRInput::GetSkeletalBoneDataCompressed
	_GetSkeletalBoneDataCompressed_t4A81338DAFC4A52D1364EB694943AF73C2245A19* ___GetSkeletalBoneDataCompressed_10;
	// OVR.OpenVR.IVRInput/_DecompressSkeletalBoneData OVR.OpenVR.IVRInput::DecompressSkeletalBoneData
	_DecompressSkeletalBoneData_t0795FF773DDA3E07E2530AD3EAF3EF500FCDED54* ___DecompressSkeletalBoneData_11;
	// OVR.OpenVR.IVRInput/_TriggerHapticVibrationAction OVR.OpenVR.IVRInput::TriggerHapticVibrationAction
	_TriggerHapticVibrationAction_t1A066FFBC7DBF34094EF95271394C9D9FB2E1739* ___TriggerHapticVibrationAction_12;
	// OVR.OpenVR.IVRInput/_GetActionOrigins OVR.OpenVR.IVRInput::GetActionOrigins
	_GetActionOrigins_t02D3F6AA21518D8409114EB96C9862BCFE06D014* ___GetActionOrigins_13;
	// OVR.OpenVR.IVRInput/_GetOriginLocalizedName OVR.OpenVR.IVRInput::GetOriginLocalizedName
	_GetOriginLocalizedName_t449130E1262626D4E366745AE5FA14F043682A26* ___GetOriginLocalizedName_14;
	// OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo OVR.OpenVR.IVRInput::GetOriginTrackedDeviceInfo
	_GetOriginTrackedDeviceInfo_tB16781893247989A97CBC0F84D7EC6A48DD29D34* ___GetOriginTrackedDeviceInfo_15;
	// OVR.OpenVR.IVRInput/_ShowActionOrigins OVR.OpenVR.IVRInput::ShowActionOrigins
	_ShowActionOrigins_t1CDFD1768C660D605CDA2B1CC89065EA2B992C3D* ___ShowActionOrigins_16;
	// OVR.OpenVR.IVRInput/_ShowBindingsForActionSet OVR.OpenVR.IVRInput::ShowBindingsForActionSet
	_ShowBindingsForActionSet_t4303E97F8A04760480AB5129904FA50FA9471CF5* ___ShowBindingsForActionSet_17;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRInput
struct IVRInput_t2388F05027ABF70F7274C50DE3F028D2B7441147_marshaled_pinvoke
{
	Il2CppMethodPointer ___SetActionManifestPath_0;
	Il2CppMethodPointer ___GetActionSetHandle_1;
	Il2CppMethodPointer ___GetActionHandle_2;
	Il2CppMethodPointer ___GetInputSourceHandle_3;
	Il2CppMethodPointer ___UpdateActionState_4;
	Il2CppMethodPointer ___GetDigitalActionData_5;
	Il2CppMethodPointer ___GetAnalogActionData_6;
	Il2CppMethodPointer ___GetPoseActionData_7;
	Il2CppMethodPointer ___GetSkeletalActionData_8;
	Il2CppMethodPointer ___GetSkeletalBoneData_9;
	Il2CppMethodPointer ___GetSkeletalBoneDataCompressed_10;
	Il2CppMethodPointer ___DecompressSkeletalBoneData_11;
	Il2CppMethodPointer ___TriggerHapticVibrationAction_12;
	Il2CppMethodPointer ___GetActionOrigins_13;
	Il2CppMethodPointer ___GetOriginLocalizedName_14;
	Il2CppMethodPointer ___GetOriginTrackedDeviceInfo_15;
	Il2CppMethodPointer ___ShowActionOrigins_16;
	Il2CppMethodPointer ___ShowBindingsForActionSet_17;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRInput
struct IVRInput_t2388F05027ABF70F7274C50DE3F028D2B7441147_marshaled_com
{
	Il2CppMethodPointer ___SetActionManifestPath_0;
	Il2CppMethodPointer ___GetActionSetHandle_1;
	Il2CppMethodPointer ___GetActionHandle_2;
	Il2CppMethodPointer ___GetInputSourceHandle_3;
	Il2CppMethodPointer ___UpdateActionState_4;
	Il2CppMethodPointer ___GetDigitalActionData_5;
	Il2CppMethodPointer ___GetAnalogActionData_6;
	Il2CppMethodPointer ___GetPoseActionData_7;
	Il2CppMethodPointer ___GetSkeletalActionData_8;
	Il2CppMethodPointer ___GetSkeletalBoneData_9;
	Il2CppMethodPointer ___GetSkeletalBoneDataCompressed_10;
	Il2CppMethodPointer ___DecompressSkeletalBoneData_11;
	Il2CppMethodPointer ___TriggerHapticVibrationAction_12;
	Il2CppMethodPointer ___GetActionOrigins_13;
	Il2CppMethodPointer ___GetOriginLocalizedName_14;
	Il2CppMethodPointer ___GetOriginTrackedDeviceInfo_15;
	Il2CppMethodPointer ___ShowActionOrigins_16;
	Il2CppMethodPointer ___ShowBindingsForActionSet_17;
};

// OVR.OpenVR.IVROverlay
struct IVROverlay_t1F72C1A5A7D309113494D12FC43D63DD03533D79 
{
	// OVR.OpenVR.IVROverlay/_FindOverlay OVR.OpenVR.IVROverlay::FindOverlay
	_FindOverlay_tAE960AA2C6B42919AD03CE164D7D39A22BB01033* ___FindOverlay_0;
	// OVR.OpenVR.IVROverlay/_CreateOverlay OVR.OpenVR.IVROverlay::CreateOverlay
	_CreateOverlay_t39025EDF1826E9D95A5E01B9D6FA809FD2E718AF* ___CreateOverlay_1;
	// OVR.OpenVR.IVROverlay/_DestroyOverlay OVR.OpenVR.IVROverlay::DestroyOverlay
	_DestroyOverlay_t38EFCB644BFDE914E24A7CBD778BBA088EC901D5* ___DestroyOverlay_2;
	// OVR.OpenVR.IVROverlay/_SetHighQualityOverlay OVR.OpenVR.IVROverlay::SetHighQualityOverlay
	_SetHighQualityOverlay_tD2EC58029C57F518FC0BD32BA49D954DF5DA21B9* ___SetHighQualityOverlay_3;
	// OVR.OpenVR.IVROverlay/_GetHighQualityOverlay OVR.OpenVR.IVROverlay::GetHighQualityOverlay
	_GetHighQualityOverlay_t1971BCB925797B9197F9D1EEDF044613EB2513AB* ___GetHighQualityOverlay_4;
	// OVR.OpenVR.IVROverlay/_GetOverlayKey OVR.OpenVR.IVROverlay::GetOverlayKey
	_GetOverlayKey_t04E5303BB3B8351ACB123FA9679BDE96A56E53CA* ___GetOverlayKey_5;
	// OVR.OpenVR.IVROverlay/_GetOverlayName OVR.OpenVR.IVROverlay::GetOverlayName
	_GetOverlayName_t9D08814FB16F293E719321A455E4FFE0180C48C7* ___GetOverlayName_6;
	// OVR.OpenVR.IVROverlay/_SetOverlayName OVR.OpenVR.IVROverlay::SetOverlayName
	_SetOverlayName_tB1F43B0D461D43E3C74A0F3470D17489478AAB01* ___SetOverlayName_7;
	// OVR.OpenVR.IVROverlay/_GetOverlayImageData OVR.OpenVR.IVROverlay::GetOverlayImageData
	_GetOverlayImageData_tC296EE7A537CC37A50B13C9BB21C42E119BFEBF3* ___GetOverlayImageData_8;
	// OVR.OpenVR.IVROverlay/_GetOverlayErrorNameFromEnum OVR.OpenVR.IVROverlay::GetOverlayErrorNameFromEnum
	_GetOverlayErrorNameFromEnum_t5E2A92AF7E10FAEB8DC6A9B83CB964623AF65B57* ___GetOverlayErrorNameFromEnum_9;
	// OVR.OpenVR.IVROverlay/_SetOverlayRenderingPid OVR.OpenVR.IVROverlay::SetOverlayRenderingPid
	_SetOverlayRenderingPid_t860D46875C206D3A0494F3FB39CB956CA0ACEF11* ___SetOverlayRenderingPid_10;
	// OVR.OpenVR.IVROverlay/_GetOverlayRenderingPid OVR.OpenVR.IVROverlay::GetOverlayRenderingPid
	_GetOverlayRenderingPid_t8B0CB9FCC759F791FBF70596E913E49A50A9623C* ___GetOverlayRenderingPid_11;
	// OVR.OpenVR.IVROverlay/_SetOverlayFlag OVR.OpenVR.IVROverlay::SetOverlayFlag
	_SetOverlayFlag_t2E4E80F706BB0353DE6FFAEBE880014A4600A02F* ___SetOverlayFlag_12;
	// OVR.OpenVR.IVROverlay/_GetOverlayFlag OVR.OpenVR.IVROverlay::GetOverlayFlag
	_GetOverlayFlag_t304E10EEDC342F118C854A3F2999D90AA8448C54* ___GetOverlayFlag_13;
	// OVR.OpenVR.IVROverlay/_SetOverlayColor OVR.OpenVR.IVROverlay::SetOverlayColor
	_SetOverlayColor_tC7B21B0DACDBCAF62443C4379F6469BA32196D7E* ___SetOverlayColor_14;
	// OVR.OpenVR.IVROverlay/_GetOverlayColor OVR.OpenVR.IVROverlay::GetOverlayColor
	_GetOverlayColor_tFAB0ACB07BDE770AA13BB5E43EB4096A93A7107F* ___GetOverlayColor_15;
	// OVR.OpenVR.IVROverlay/_SetOverlayAlpha OVR.OpenVR.IVROverlay::SetOverlayAlpha
	_SetOverlayAlpha_t89F2909463A1A87222C4ADE8E6A9B97FA7D815E2* ___SetOverlayAlpha_16;
	// OVR.OpenVR.IVROverlay/_GetOverlayAlpha OVR.OpenVR.IVROverlay::GetOverlayAlpha
	_GetOverlayAlpha_tDADA0BB21ABC426722A40CC32DB279769DCF021A* ___GetOverlayAlpha_17;
	// OVR.OpenVR.IVROverlay/_SetOverlayTexelAspect OVR.OpenVR.IVROverlay::SetOverlayTexelAspect
	_SetOverlayTexelAspect_t3FABDC04D9599FD0AAB0ACBF8AA3BBEC32929DFD* ___SetOverlayTexelAspect_18;
	// OVR.OpenVR.IVROverlay/_GetOverlayTexelAspect OVR.OpenVR.IVROverlay::GetOverlayTexelAspect
	_GetOverlayTexelAspect_t2588FAAA9256DAB500789D45446FCD9B9C3341AE* ___GetOverlayTexelAspect_19;
	// OVR.OpenVR.IVROverlay/_SetOverlaySortOrder OVR.OpenVR.IVROverlay::SetOverlaySortOrder
	_SetOverlaySortOrder_t8593A1D71B05DE8FC7BB3AAB6C5B1393A0059CEB* ___SetOverlaySortOrder_20;
	// OVR.OpenVR.IVROverlay/_GetOverlaySortOrder OVR.OpenVR.IVROverlay::GetOverlaySortOrder
	_GetOverlaySortOrder_tD30DCEF0DC27DBF62C7FD8CFB4CB4B27A042CD99* ___GetOverlaySortOrder_21;
	// OVR.OpenVR.IVROverlay/_SetOverlayWidthInMeters OVR.OpenVR.IVROverlay::SetOverlayWidthInMeters
	_SetOverlayWidthInMeters_t3499F9F5B93449716E795BD6494C2F2465E2851C* ___SetOverlayWidthInMeters_22;
	// OVR.OpenVR.IVROverlay/_GetOverlayWidthInMeters OVR.OpenVR.IVROverlay::GetOverlayWidthInMeters
	_GetOverlayWidthInMeters_t332D0C1E24DBA4D7E69C08FE1E2CB857BBAA7BB7* ___GetOverlayWidthInMeters_23;
	// OVR.OpenVR.IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters OVR.OpenVR.IVROverlay::SetOverlayAutoCurveDistanceRangeInMeters
	_SetOverlayAutoCurveDistanceRangeInMeters_t70611E84FE31CF3AE06D867439E05B6AA29BB6E3* ___SetOverlayAutoCurveDistanceRangeInMeters_24;
	// OVR.OpenVR.IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters OVR.OpenVR.IVROverlay::GetOverlayAutoCurveDistanceRangeInMeters
	_GetOverlayAutoCurveDistanceRangeInMeters_tA92ABA483C12CC57AF5BE7064465E45E61A88C23* ___GetOverlayAutoCurveDistanceRangeInMeters_25;
	// OVR.OpenVR.IVROverlay/_SetOverlayTextureColorSpace OVR.OpenVR.IVROverlay::SetOverlayTextureColorSpace
	_SetOverlayTextureColorSpace_tA461E86D2455E1A47A898EA6BDF9B3072FCAEE79* ___SetOverlayTextureColorSpace_26;
	// OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace OVR.OpenVR.IVROverlay::GetOverlayTextureColorSpace
	_GetOverlayTextureColorSpace_t8C6D9E3C64159C910AE228282CD92ADFDE73251C* ___GetOverlayTextureColorSpace_27;
	// OVR.OpenVR.IVROverlay/_SetOverlayTextureBounds OVR.OpenVR.IVROverlay::SetOverlayTextureBounds
	_SetOverlayTextureBounds_t9409D3709F417BA3D4F239303AA7C70E5543E2C6* ___SetOverlayTextureBounds_28;
	// OVR.OpenVR.IVROverlay/_GetOverlayTextureBounds OVR.OpenVR.IVROverlay::GetOverlayTextureBounds
	_GetOverlayTextureBounds_t2C2DA89DF6265C667C98352D433BEF964AD51D83* ___GetOverlayTextureBounds_29;
	// OVR.OpenVR.IVROverlay/_GetOverlayRenderModel OVR.OpenVR.IVROverlay::GetOverlayRenderModel
	_GetOverlayRenderModel_t77332019BB8EA1382A34E1DF2C4DE30EC8586136* ___GetOverlayRenderModel_30;
	// OVR.OpenVR.IVROverlay/_SetOverlayRenderModel OVR.OpenVR.IVROverlay::SetOverlayRenderModel
	_SetOverlayRenderModel_t6AA08CE4B1A865EFD28B9995AFB14E12D1DDE263* ___SetOverlayRenderModel_31;
	// OVR.OpenVR.IVROverlay/_GetOverlayTransformType OVR.OpenVR.IVROverlay::GetOverlayTransformType
	_GetOverlayTransformType_t8C6834F0574553D54618E7FE4A47697920264AB9* ___GetOverlayTransformType_32;
	// OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute OVR.OpenVR.IVROverlay::SetOverlayTransformAbsolute
	_SetOverlayTransformAbsolute_t0576036BCE72EAA1058E5463CF463129932ED014* ___SetOverlayTransformAbsolute_33;
	// OVR.OpenVR.IVROverlay/_GetOverlayTransformAbsolute OVR.OpenVR.IVROverlay::GetOverlayTransformAbsolute
	_GetOverlayTransformAbsolute_t879060F1EF17C256C94FFEAA89A165213F7EA7B3* ___GetOverlayTransformAbsolute_34;
	// OVR.OpenVR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative OVR.OpenVR.IVROverlay::SetOverlayTransformTrackedDeviceRelative
	_SetOverlayTransformTrackedDeviceRelative_t33FBD552EF11DF0F4BCEA44E766694502C284295* ___SetOverlayTransformTrackedDeviceRelative_35;
	// OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative OVR.OpenVR.IVROverlay::GetOverlayTransformTrackedDeviceRelative
	_GetOverlayTransformTrackedDeviceRelative_t6D0C0F2C25DF1E8FE63869F6D171672FBFDB9D37* ___GetOverlayTransformTrackedDeviceRelative_36;
	// OVR.OpenVR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent OVR.OpenVR.IVROverlay::SetOverlayTransformTrackedDeviceComponent
	_SetOverlayTransformTrackedDeviceComponent_tE3F87DEEBBC8BF1166B735A84528B387A8D617C4* ___SetOverlayTransformTrackedDeviceComponent_37;
	// OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent OVR.OpenVR.IVROverlay::GetOverlayTransformTrackedDeviceComponent
	_GetOverlayTransformTrackedDeviceComponent_t6D6D6E536F03E5F484270DA2063E692833C8C553* ___GetOverlayTransformTrackedDeviceComponent_38;
	// OVR.OpenVR.IVROverlay/_GetOverlayTransformOverlayRelative OVR.OpenVR.IVROverlay::GetOverlayTransformOverlayRelative
	_GetOverlayTransformOverlayRelative_tEC30088656BF1375A80F5F83311E100390C23899* ___GetOverlayTransformOverlayRelative_39;
	// OVR.OpenVR.IVROverlay/_SetOverlayTransformOverlayRelative OVR.OpenVR.IVROverlay::SetOverlayTransformOverlayRelative
	_SetOverlayTransformOverlayRelative_tE71C623CAE5889E35901C6B1D48EF7197F2D3977* ___SetOverlayTransformOverlayRelative_40;
	// OVR.OpenVR.IVROverlay/_ShowOverlay OVR.OpenVR.IVROverlay::ShowOverlay
	_ShowOverlay_t6BD14A5A4683B52F4ED881890ABBED19EE8D5A92* ___ShowOverlay_41;
	// OVR.OpenVR.IVROverlay/_HideOverlay OVR.OpenVR.IVROverlay::HideOverlay
	_HideOverlay_tBCB13A361710FD0B2014BF41C8D90E8657BCF78F* ___HideOverlay_42;
	// OVR.OpenVR.IVROverlay/_IsOverlayVisible OVR.OpenVR.IVROverlay::IsOverlayVisible
	_IsOverlayVisible_t3C5C8EEC1D3CEE3372299FE5D13B02638954CBC1* ___IsOverlayVisible_43;
	// OVR.OpenVR.IVROverlay/_GetTransformForOverlayCoordinates OVR.OpenVR.IVROverlay::GetTransformForOverlayCoordinates
	_GetTransformForOverlayCoordinates_tC6923776B4A8411D63402D9178A9C5CD1FBF7D3E* ___GetTransformForOverlayCoordinates_44;
	// OVR.OpenVR.IVROverlay/_PollNextOverlayEvent OVR.OpenVR.IVROverlay::PollNextOverlayEvent
	_PollNextOverlayEvent_t861B82E88DCEA65F2BED439C81B3BF2DCB3D8A56* ___PollNextOverlayEvent_45;
	// OVR.OpenVR.IVROverlay/_GetOverlayInputMethod OVR.OpenVR.IVROverlay::GetOverlayInputMethod
	_GetOverlayInputMethod_tCB6A8DE641A2F0DC2AE54DCB5E625D8BFD4104E1* ___GetOverlayInputMethod_46;
	// OVR.OpenVR.IVROverlay/_SetOverlayInputMethod OVR.OpenVR.IVROverlay::SetOverlayInputMethod
	_SetOverlayInputMethod_t0D329E6A101EA6E3004D5A1843D988E94A41E522* ___SetOverlayInputMethod_47;
	// OVR.OpenVR.IVROverlay/_GetOverlayMouseScale OVR.OpenVR.IVROverlay::GetOverlayMouseScale
	_GetOverlayMouseScale_tA8CBBA77190651C271D36B39C86563B176112DAC* ___GetOverlayMouseScale_48;
	// OVR.OpenVR.IVROverlay/_SetOverlayMouseScale OVR.OpenVR.IVROverlay::SetOverlayMouseScale
	_SetOverlayMouseScale_t53A3DB9CA8CFA7D0C982DFE70F3BF6526E397B62* ___SetOverlayMouseScale_49;
	// OVR.OpenVR.IVROverlay/_ComputeOverlayIntersection OVR.OpenVR.IVROverlay::ComputeOverlayIntersection
	_ComputeOverlayIntersection_tCED6948296A5F66347803E61D649426AC795E8CF* ___ComputeOverlayIntersection_50;
	// OVR.OpenVR.IVROverlay/_IsHoverTargetOverlay OVR.OpenVR.IVROverlay::IsHoverTargetOverlay
	_IsHoverTargetOverlay_tA4AC077F55D0C9D109B7EC275D19C494E4687B91* ___IsHoverTargetOverlay_51;
	// OVR.OpenVR.IVROverlay/_GetGamepadFocusOverlay OVR.OpenVR.IVROverlay::GetGamepadFocusOverlay
	_GetGamepadFocusOverlay_tA8D7B9E689FCD3BAD42449710717C34A9D5353B1* ___GetGamepadFocusOverlay_52;
	// OVR.OpenVR.IVROverlay/_SetGamepadFocusOverlay OVR.OpenVR.IVROverlay::SetGamepadFocusOverlay
	_SetGamepadFocusOverlay_tA538A9D45966E31323CD06675F8164A8D3326C7D* ___SetGamepadFocusOverlay_53;
	// OVR.OpenVR.IVROverlay/_SetOverlayNeighbor OVR.OpenVR.IVROverlay::SetOverlayNeighbor
	_SetOverlayNeighbor_t940D54C253D9B8DA001AFF3422FFEAFCAA89D581* ___SetOverlayNeighbor_54;
	// OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor OVR.OpenVR.IVROverlay::MoveGamepadFocusToNeighbor
	_MoveGamepadFocusToNeighbor_tEC3BDC5D3A5AA07C7BC459D3E9E2BDE29A376A61* ___MoveGamepadFocusToNeighbor_55;
	// OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform OVR.OpenVR.IVROverlay::SetOverlayDualAnalogTransform
	_SetOverlayDualAnalogTransform_t3000681F8D96981D99C030F20625B962D4A030BF* ___SetOverlayDualAnalogTransform_56;
	// OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform OVR.OpenVR.IVROverlay::GetOverlayDualAnalogTransform
	_GetOverlayDualAnalogTransform_t404625AB2AA2C28CB18A9C52514500BD1B6AD314* ___GetOverlayDualAnalogTransform_57;
	// OVR.OpenVR.IVROverlay/_SetOverlayTexture OVR.OpenVR.IVROverlay::SetOverlayTexture
	_SetOverlayTexture_t339C34C655DE707851F518E72EE5B54AC8230260* ___SetOverlayTexture_58;
	// OVR.OpenVR.IVROverlay/_ClearOverlayTexture OVR.OpenVR.IVROverlay::ClearOverlayTexture
	_ClearOverlayTexture_tFFC6110B6E7118585822C4EC91426EECF55DDE2D* ___ClearOverlayTexture_59;
	// OVR.OpenVR.IVROverlay/_SetOverlayRaw OVR.OpenVR.IVROverlay::SetOverlayRaw
	_SetOverlayRaw_tCF57C8541185FCCAA4AC3583DA872A4A046D0B1B* ___SetOverlayRaw_60;
	// OVR.OpenVR.IVROverlay/_SetOverlayFromFile OVR.OpenVR.IVROverlay::SetOverlayFromFile
	_SetOverlayFromFile_t5B1988B50A0A81F72BEFF99FB83D92A9101391EA* ___SetOverlayFromFile_61;
	// OVR.OpenVR.IVROverlay/_GetOverlayTexture OVR.OpenVR.IVROverlay::GetOverlayTexture
	_GetOverlayTexture_t67AC8CF0315368A175D183FD6B8B18853D857139* ___GetOverlayTexture_62;
	// OVR.OpenVR.IVROverlay/_ReleaseNativeOverlayHandle OVR.OpenVR.IVROverlay::ReleaseNativeOverlayHandle
	_ReleaseNativeOverlayHandle_t0051D17B74002B4E6DD4E2BE7331314830CA0798* ___ReleaseNativeOverlayHandle_63;
	// OVR.OpenVR.IVROverlay/_GetOverlayTextureSize OVR.OpenVR.IVROverlay::GetOverlayTextureSize
	_GetOverlayTextureSize_t51D0FF0C60C1AE56D484CC02189E1CB7FA4039DB* ___GetOverlayTextureSize_64;
	// OVR.OpenVR.IVROverlay/_CreateDashboardOverlay OVR.OpenVR.IVROverlay::CreateDashboardOverlay
	_CreateDashboardOverlay_tF97873092E399C09805C0A916093734348B5304D* ___CreateDashboardOverlay_65;
	// OVR.OpenVR.IVROverlay/_IsDashboardVisible OVR.OpenVR.IVROverlay::IsDashboardVisible
	_IsDashboardVisible_tBACAC97FDD339E6F836ECEBA981AB2A725E1D93A* ___IsDashboardVisible_66;
	// OVR.OpenVR.IVROverlay/_IsActiveDashboardOverlay OVR.OpenVR.IVROverlay::IsActiveDashboardOverlay
	_IsActiveDashboardOverlay_t99372611271BA8BDC647FED2397BD131320B96B4* ___IsActiveDashboardOverlay_67;
	// OVR.OpenVR.IVROverlay/_SetDashboardOverlaySceneProcess OVR.OpenVR.IVROverlay::SetDashboardOverlaySceneProcess
	_SetDashboardOverlaySceneProcess_tDB53D4E98795548BA55A028EC757794DF02D1A4E* ___SetDashboardOverlaySceneProcess_68;
	// OVR.OpenVR.IVROverlay/_GetDashboardOverlaySceneProcess OVR.OpenVR.IVROverlay::GetDashboardOverlaySceneProcess
	_GetDashboardOverlaySceneProcess_t1DE4D2D445D002DE984C1D5C360AE6E64233798E* ___GetDashboardOverlaySceneProcess_69;
	// OVR.OpenVR.IVROverlay/_ShowDashboard OVR.OpenVR.IVROverlay::ShowDashboard
	_ShowDashboard_tF6F5EC88D960FDCFE77B9DEEF5FDEF8ADC7322A4* ___ShowDashboard_70;
	// OVR.OpenVR.IVROverlay/_GetPrimaryDashboardDevice OVR.OpenVR.IVROverlay::GetPrimaryDashboardDevice
	_GetPrimaryDashboardDevice_tDA46E8CABE82915FCD216F6CA21A6D1BEA11010B* ___GetPrimaryDashboardDevice_71;
	// OVR.OpenVR.IVROverlay/_ShowKeyboard OVR.OpenVR.IVROverlay::ShowKeyboard
	_ShowKeyboard_tC4004266F122C2EA442DCBBE6A5E4147C646607E* ___ShowKeyboard_72;
	// OVR.OpenVR.IVROverlay/_ShowKeyboardForOverlay OVR.OpenVR.IVROverlay::ShowKeyboardForOverlay
	_ShowKeyboardForOverlay_tD95F95B2E3AD73DC540C7ABDE633480C06AB8E1A* ___ShowKeyboardForOverlay_73;
	// OVR.OpenVR.IVROverlay/_GetKeyboardText OVR.OpenVR.IVROverlay::GetKeyboardText
	_GetKeyboardText_t4D13F42ED39CBD7B45322FBA3B075B786B2DDED6* ___GetKeyboardText_74;
	// OVR.OpenVR.IVROverlay/_HideKeyboard OVR.OpenVR.IVROverlay::HideKeyboard
	_HideKeyboard_t4F532F93EE9B416A79E7313115007024B0867B6C* ___HideKeyboard_75;
	// OVR.OpenVR.IVROverlay/_SetKeyboardTransformAbsolute OVR.OpenVR.IVROverlay::SetKeyboardTransformAbsolute
	_SetKeyboardTransformAbsolute_tD124AF043E47202B43D6826CE99D6E84C838AB85* ___SetKeyboardTransformAbsolute_76;
	// OVR.OpenVR.IVROverlay/_SetKeyboardPositionForOverlay OVR.OpenVR.IVROverlay::SetKeyboardPositionForOverlay
	_SetKeyboardPositionForOverlay_t244BE803F53B3EFE2BFBCF9061453A2A1309B8EF* ___SetKeyboardPositionForOverlay_77;
	// OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask OVR.OpenVR.IVROverlay::SetOverlayIntersectionMask
	_SetOverlayIntersectionMask_tAE5CA17C565A30886F10D7A11260E6263092B376* ___SetOverlayIntersectionMask_78;
	// OVR.OpenVR.IVROverlay/_GetOverlayFlags OVR.OpenVR.IVROverlay::GetOverlayFlags
	_GetOverlayFlags_t44E5C4A2EC91529F47DC48FEC054CC746451CD7D* ___GetOverlayFlags_79;
	// OVR.OpenVR.IVROverlay/_ShowMessageOverlay OVR.OpenVR.IVROverlay::ShowMessageOverlay
	_ShowMessageOverlay_t66E673DEEF62CC4BC981C5FEF8A46AB588B67C3C* ___ShowMessageOverlay_80;
	// OVR.OpenVR.IVROverlay/_CloseMessageOverlay OVR.OpenVR.IVROverlay::CloseMessageOverlay
	_CloseMessageOverlay_tEC2DEDD441F091EF78915B0A0BD8487722539D0F* ___CloseMessageOverlay_81;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVROverlay
struct IVROverlay_t1F72C1A5A7D309113494D12FC43D63DD03533D79_marshaled_pinvoke
{
	Il2CppMethodPointer ___FindOverlay_0;
	Il2CppMethodPointer ___CreateOverlay_1;
	Il2CppMethodPointer ___DestroyOverlay_2;
	Il2CppMethodPointer ___SetHighQualityOverlay_3;
	Il2CppMethodPointer ___GetHighQualityOverlay_4;
	Il2CppMethodPointer ___GetOverlayKey_5;
	Il2CppMethodPointer ___GetOverlayName_6;
	Il2CppMethodPointer ___SetOverlayName_7;
	Il2CppMethodPointer ___GetOverlayImageData_8;
	Il2CppMethodPointer ___GetOverlayErrorNameFromEnum_9;
	Il2CppMethodPointer ___SetOverlayRenderingPid_10;
	Il2CppMethodPointer ___GetOverlayRenderingPid_11;
	Il2CppMethodPointer ___SetOverlayFlag_12;
	Il2CppMethodPointer ___GetOverlayFlag_13;
	Il2CppMethodPointer ___SetOverlayColor_14;
	Il2CppMethodPointer ___GetOverlayColor_15;
	Il2CppMethodPointer ___SetOverlayAlpha_16;
	Il2CppMethodPointer ___GetOverlayAlpha_17;
	Il2CppMethodPointer ___SetOverlayTexelAspect_18;
	Il2CppMethodPointer ___GetOverlayTexelAspect_19;
	Il2CppMethodPointer ___SetOverlaySortOrder_20;
	Il2CppMethodPointer ___GetOverlaySortOrder_21;
	Il2CppMethodPointer ___SetOverlayWidthInMeters_22;
	Il2CppMethodPointer ___GetOverlayWidthInMeters_23;
	Il2CppMethodPointer ___SetOverlayAutoCurveDistanceRangeInMeters_24;
	Il2CppMethodPointer ___GetOverlayAutoCurveDistanceRangeInMeters_25;
	Il2CppMethodPointer ___SetOverlayTextureColorSpace_26;
	Il2CppMethodPointer ___GetOverlayTextureColorSpace_27;
	Il2CppMethodPointer ___SetOverlayTextureBounds_28;
	Il2CppMethodPointer ___GetOverlayTextureBounds_29;
	Il2CppMethodPointer ___GetOverlayRenderModel_30;
	Il2CppMethodPointer ___SetOverlayRenderModel_31;
	Il2CppMethodPointer ___GetOverlayTransformType_32;
	Il2CppMethodPointer ___SetOverlayTransformAbsolute_33;
	Il2CppMethodPointer ___GetOverlayTransformAbsolute_34;
	Il2CppMethodPointer ___SetOverlayTransformTrackedDeviceRelative_35;
	Il2CppMethodPointer ___GetOverlayTransformTrackedDeviceRelative_36;
	Il2CppMethodPointer ___SetOverlayTransformTrackedDeviceComponent_37;
	Il2CppMethodPointer ___GetOverlayTransformTrackedDeviceComponent_38;
	Il2CppMethodPointer ___GetOverlayTransformOverlayRelative_39;
	Il2CppMethodPointer ___SetOverlayTransformOverlayRelative_40;
	Il2CppMethodPointer ___ShowOverlay_41;
	Il2CppMethodPointer ___HideOverlay_42;
	Il2CppMethodPointer ___IsOverlayVisible_43;
	Il2CppMethodPointer ___GetTransformForOverlayCoordinates_44;
	Il2CppMethodPointer ___PollNextOverlayEvent_45;
	Il2CppMethodPointer ___GetOverlayInputMethod_46;
	Il2CppMethodPointer ___SetOverlayInputMethod_47;
	Il2CppMethodPointer ___GetOverlayMouseScale_48;
	Il2CppMethodPointer ___SetOverlayMouseScale_49;
	Il2CppMethodPointer ___ComputeOverlayIntersection_50;
	Il2CppMethodPointer ___IsHoverTargetOverlay_51;
	Il2CppMethodPointer ___GetGamepadFocusOverlay_52;
	Il2CppMethodPointer ___SetGamepadFocusOverlay_53;
	Il2CppMethodPointer ___SetOverlayNeighbor_54;
	Il2CppMethodPointer ___MoveGamepadFocusToNeighbor_55;
	Il2CppMethodPointer ___SetOverlayDualAnalogTransform_56;
	Il2CppMethodPointer ___GetOverlayDualAnalogTransform_57;
	Il2CppMethodPointer ___SetOverlayTexture_58;
	Il2CppMethodPointer ___ClearOverlayTexture_59;
	Il2CppMethodPointer ___SetOverlayRaw_60;
	Il2CppMethodPointer ___SetOverlayFromFile_61;
	Il2CppMethodPointer ___GetOverlayTexture_62;
	Il2CppMethodPointer ___ReleaseNativeOverlayHandle_63;
	Il2CppMethodPointer ___GetOverlayTextureSize_64;
	Il2CppMethodPointer ___CreateDashboardOverlay_65;
	Il2CppMethodPointer ___IsDashboardVisible_66;
	Il2CppMethodPointer ___IsActiveDashboardOverlay_67;
	Il2CppMethodPointer ___SetDashboardOverlaySceneProcess_68;
	Il2CppMethodPointer ___GetDashboardOverlaySceneProcess_69;
	Il2CppMethodPointer ___ShowDashboard_70;
	Il2CppMethodPointer ___GetPrimaryDashboardDevice_71;
	Il2CppMethodPointer ___ShowKeyboard_72;
	Il2CppMethodPointer ___ShowKeyboardForOverlay_73;
	Il2CppMethodPointer ___GetKeyboardText_74;
	Il2CppMethodPointer ___HideKeyboard_75;
	Il2CppMethodPointer ___SetKeyboardTransformAbsolute_76;
	Il2CppMethodPointer ___SetKeyboardPositionForOverlay_77;
	Il2CppMethodPointer ___SetOverlayIntersectionMask_78;
	Il2CppMethodPointer ___GetOverlayFlags_79;
	Il2CppMethodPointer ___ShowMessageOverlay_80;
	Il2CppMethodPointer ___CloseMessageOverlay_81;
};
// Native definition for COM marshalling of OVR.OpenVR.IVROverlay
struct IVROverlay_t1F72C1A5A7D309113494D12FC43D63DD03533D79_marshaled_com
{
	Il2CppMethodPointer ___FindOverlay_0;
	Il2CppMethodPointer ___CreateOverlay_1;
	Il2CppMethodPointer ___DestroyOverlay_2;
	Il2CppMethodPointer ___SetHighQualityOverlay_3;
	Il2CppMethodPointer ___GetHighQualityOverlay_4;
	Il2CppMethodPointer ___GetOverlayKey_5;
	Il2CppMethodPointer ___GetOverlayName_6;
	Il2CppMethodPointer ___SetOverlayName_7;
	Il2CppMethodPointer ___GetOverlayImageData_8;
	Il2CppMethodPointer ___GetOverlayErrorNameFromEnum_9;
	Il2CppMethodPointer ___SetOverlayRenderingPid_10;
	Il2CppMethodPointer ___GetOverlayRenderingPid_11;
	Il2CppMethodPointer ___SetOverlayFlag_12;
	Il2CppMethodPointer ___GetOverlayFlag_13;
	Il2CppMethodPointer ___SetOverlayColor_14;
	Il2CppMethodPointer ___GetOverlayColor_15;
	Il2CppMethodPointer ___SetOverlayAlpha_16;
	Il2CppMethodPointer ___GetOverlayAlpha_17;
	Il2CppMethodPointer ___SetOverlayTexelAspect_18;
	Il2CppMethodPointer ___GetOverlayTexelAspect_19;
	Il2CppMethodPointer ___SetOverlaySortOrder_20;
	Il2CppMethodPointer ___GetOverlaySortOrder_21;
	Il2CppMethodPointer ___SetOverlayWidthInMeters_22;
	Il2CppMethodPointer ___GetOverlayWidthInMeters_23;
	Il2CppMethodPointer ___SetOverlayAutoCurveDistanceRangeInMeters_24;
	Il2CppMethodPointer ___GetOverlayAutoCurveDistanceRangeInMeters_25;
	Il2CppMethodPointer ___SetOverlayTextureColorSpace_26;
	Il2CppMethodPointer ___GetOverlayTextureColorSpace_27;
	Il2CppMethodPointer ___SetOverlayTextureBounds_28;
	Il2CppMethodPointer ___GetOverlayTextureBounds_29;
	Il2CppMethodPointer ___GetOverlayRenderModel_30;
	Il2CppMethodPointer ___SetOverlayRenderModel_31;
	Il2CppMethodPointer ___GetOverlayTransformType_32;
	Il2CppMethodPointer ___SetOverlayTransformAbsolute_33;
	Il2CppMethodPointer ___GetOverlayTransformAbsolute_34;
	Il2CppMethodPointer ___SetOverlayTransformTrackedDeviceRelative_35;
	Il2CppMethodPointer ___GetOverlayTransformTrackedDeviceRelative_36;
	Il2CppMethodPointer ___SetOverlayTransformTrackedDeviceComponent_37;
	Il2CppMethodPointer ___GetOverlayTransformTrackedDeviceComponent_38;
	Il2CppMethodPointer ___GetOverlayTransformOverlayRelative_39;
	Il2CppMethodPointer ___SetOverlayTransformOverlayRelative_40;
	Il2CppMethodPointer ___ShowOverlay_41;
	Il2CppMethodPointer ___HideOverlay_42;
	Il2CppMethodPointer ___IsOverlayVisible_43;
	Il2CppMethodPointer ___GetTransformForOverlayCoordinates_44;
	Il2CppMethodPointer ___PollNextOverlayEvent_45;
	Il2CppMethodPointer ___GetOverlayInputMethod_46;
	Il2CppMethodPointer ___SetOverlayInputMethod_47;
	Il2CppMethodPointer ___GetOverlayMouseScale_48;
	Il2CppMethodPointer ___SetOverlayMouseScale_49;
	Il2CppMethodPointer ___ComputeOverlayIntersection_50;
	Il2CppMethodPointer ___IsHoverTargetOverlay_51;
	Il2CppMethodPointer ___GetGamepadFocusOverlay_52;
	Il2CppMethodPointer ___SetGamepadFocusOverlay_53;
	Il2CppMethodPointer ___SetOverlayNeighbor_54;
	Il2CppMethodPointer ___MoveGamepadFocusToNeighbor_55;
	Il2CppMethodPointer ___SetOverlayDualAnalogTransform_56;
	Il2CppMethodPointer ___GetOverlayDualAnalogTransform_57;
	Il2CppMethodPointer ___SetOverlayTexture_58;
	Il2CppMethodPointer ___ClearOverlayTexture_59;
	Il2CppMethodPointer ___SetOverlayRaw_60;
	Il2CppMethodPointer ___SetOverlayFromFile_61;
	Il2CppMethodPointer ___GetOverlayTexture_62;
	Il2CppMethodPointer ___ReleaseNativeOverlayHandle_63;
	Il2CppMethodPointer ___GetOverlayTextureSize_64;
	Il2CppMethodPointer ___CreateDashboardOverlay_65;
	Il2CppMethodPointer ___IsDashboardVisible_66;
	Il2CppMethodPointer ___IsActiveDashboardOverlay_67;
	Il2CppMethodPointer ___SetDashboardOverlaySceneProcess_68;
	Il2CppMethodPointer ___GetDashboardOverlaySceneProcess_69;
	Il2CppMethodPointer ___ShowDashboard_70;
	Il2CppMethodPointer ___GetPrimaryDashboardDevice_71;
	Il2CppMethodPointer ___ShowKeyboard_72;
	Il2CppMethodPointer ___ShowKeyboardForOverlay_73;
	Il2CppMethodPointer ___GetKeyboardText_74;
	Il2CppMethodPointer ___HideKeyboard_75;
	Il2CppMethodPointer ___SetKeyboardTransformAbsolute_76;
	Il2CppMethodPointer ___SetKeyboardPositionForOverlay_77;
	Il2CppMethodPointer ___SetOverlayIntersectionMask_78;
	Il2CppMethodPointer ___GetOverlayFlags_79;
	Il2CppMethodPointer ___ShowMessageOverlay_80;
	Il2CppMethodPointer ___CloseMessageOverlay_81;
};

// OVR.OpenVR.IVRRenderModels
struct IVRRenderModels_t403A4506C6E82781E47914FC6B07A36164137FD3 
{
	// OVR.OpenVR.IVRRenderModels/_LoadRenderModel_Async OVR.OpenVR.IVRRenderModels::LoadRenderModel_Async
	_LoadRenderModel_Async_tE8E63954032C284B008807EE4CF1531221D608DA* ___LoadRenderModel_Async_0;
	// OVR.OpenVR.IVRRenderModels/_FreeRenderModel OVR.OpenVR.IVRRenderModels::FreeRenderModel
	_FreeRenderModel_tE41E4A27E462FD2C26239CB2D4DAC027946C7D86* ___FreeRenderModel_1;
	// OVR.OpenVR.IVRRenderModels/_LoadTexture_Async OVR.OpenVR.IVRRenderModels::LoadTexture_Async
	_LoadTexture_Async_t3EE34541EEE0128821D90456D708E41764535923* ___LoadTexture_Async_2;
	// OVR.OpenVR.IVRRenderModels/_FreeTexture OVR.OpenVR.IVRRenderModels::FreeTexture
	_FreeTexture_tC2F1F3E17EB538F2062D6DC20C6E7CFA8B81373B* ___FreeTexture_3;
	// OVR.OpenVR.IVRRenderModels/_LoadTextureD3D11_Async OVR.OpenVR.IVRRenderModels::LoadTextureD3D11_Async
	_LoadTextureD3D11_Async_t5D3CE5C4651078EF2D91A51670FD8834BF73EEF8* ___LoadTextureD3D11_Async_4;
	// OVR.OpenVR.IVRRenderModels/_LoadIntoTextureD3D11_Async OVR.OpenVR.IVRRenderModels::LoadIntoTextureD3D11_Async
	_LoadIntoTextureD3D11_Async_t0D1673D83774DFEBCC76896938CEACCFBA491B16* ___LoadIntoTextureD3D11_Async_5;
	// OVR.OpenVR.IVRRenderModels/_FreeTextureD3D11 OVR.OpenVR.IVRRenderModels::FreeTextureD3D11
	_FreeTextureD3D11_t69CA1907BBF7DDCF5C7E8B17E7A92C93B9ECFA7A* ___FreeTextureD3D11_6;
	// OVR.OpenVR.IVRRenderModels/_GetRenderModelName OVR.OpenVR.IVRRenderModels::GetRenderModelName
	_GetRenderModelName_tFB3366C105A45F229CB4430B82F5C5801860CF28* ___GetRenderModelName_7;
	// OVR.OpenVR.IVRRenderModels/_GetRenderModelCount OVR.OpenVR.IVRRenderModels::GetRenderModelCount
	_GetRenderModelCount_tCB831BEA4DD84FE81E4CD8193DD496530CB0AB11* ___GetRenderModelCount_8;
	// OVR.OpenVR.IVRRenderModels/_GetComponentCount OVR.OpenVR.IVRRenderModels::GetComponentCount
	_GetComponentCount_t1F748AD512498F9BF3B23D622A4C1B2FBF1776BE* ___GetComponentCount_9;
	// OVR.OpenVR.IVRRenderModels/_GetComponentName OVR.OpenVR.IVRRenderModels::GetComponentName
	_GetComponentName_t7299B12E9580B82EAFB2C3C98576322C1FA3DB0F* ___GetComponentName_10;
	// OVR.OpenVR.IVRRenderModels/_GetComponentButtonMask OVR.OpenVR.IVRRenderModels::GetComponentButtonMask
	_GetComponentButtonMask_t72CEC4637FF7C3BE2B1F2CEBD60C01C665DB284B* ___GetComponentButtonMask_11;
	// OVR.OpenVR.IVRRenderModels/_GetComponentRenderModelName OVR.OpenVR.IVRRenderModels::GetComponentRenderModelName
	_GetComponentRenderModelName_tD2B798AB4FC395634444E8667BA389B5861F47A1* ___GetComponentRenderModelName_12;
	// OVR.OpenVR.IVRRenderModels/_GetComponentStateForDevicePath OVR.OpenVR.IVRRenderModels::GetComponentStateForDevicePath
	_GetComponentStateForDevicePath_t2FC5E923758C5B41B6BC3049EAD6B043D9E44936* ___GetComponentStateForDevicePath_13;
	// OVR.OpenVR.IVRRenderModels/_GetComponentState OVR.OpenVR.IVRRenderModels::GetComponentState
	_GetComponentState_t674BF5C44FF954F474C2F7557EE68C8399EE7D79* ___GetComponentState_14;
	// OVR.OpenVR.IVRRenderModels/_RenderModelHasComponent OVR.OpenVR.IVRRenderModels::RenderModelHasComponent
	_RenderModelHasComponent_t1BE46B86D466CEC4149009CE794724C393E31C05* ___RenderModelHasComponent_15;
	// OVR.OpenVR.IVRRenderModels/_GetRenderModelThumbnailURL OVR.OpenVR.IVRRenderModels::GetRenderModelThumbnailURL
	_GetRenderModelThumbnailURL_tD05F5C73B26E362981EAB0BCE35E1591CEA88267* ___GetRenderModelThumbnailURL_16;
	// OVR.OpenVR.IVRRenderModels/_GetRenderModelOriginalPath OVR.OpenVR.IVRRenderModels::GetRenderModelOriginalPath
	_GetRenderModelOriginalPath_tB6E08E5F6C75B2C426E5D0CE2969E2A31DC45994* ___GetRenderModelOriginalPath_17;
	// OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum OVR.OpenVR.IVRRenderModels::GetRenderModelErrorNameFromEnum
	_GetRenderModelErrorNameFromEnum_tF2FA0CC09F6503BC3FB59FACB0ED370A304E5012* ___GetRenderModelErrorNameFromEnum_18;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRRenderModels
struct IVRRenderModels_t403A4506C6E82781E47914FC6B07A36164137FD3_marshaled_pinvoke
{
	Il2CppMethodPointer ___LoadRenderModel_Async_0;
	Il2CppMethodPointer ___FreeRenderModel_1;
	Il2CppMethodPointer ___LoadTexture_Async_2;
	Il2CppMethodPointer ___FreeTexture_3;
	Il2CppMethodPointer ___LoadTextureD3D11_Async_4;
	Il2CppMethodPointer ___LoadIntoTextureD3D11_Async_5;
	Il2CppMethodPointer ___FreeTextureD3D11_6;
	Il2CppMethodPointer ___GetRenderModelName_7;
	Il2CppMethodPointer ___GetRenderModelCount_8;
	Il2CppMethodPointer ___GetComponentCount_9;
	Il2CppMethodPointer ___GetComponentName_10;
	Il2CppMethodPointer ___GetComponentButtonMask_11;
	Il2CppMethodPointer ___GetComponentRenderModelName_12;
	Il2CppMethodPointer ___GetComponentStateForDevicePath_13;
	Il2CppMethodPointer ___GetComponentState_14;
	Il2CppMethodPointer ___RenderModelHasComponent_15;
	Il2CppMethodPointer ___GetRenderModelThumbnailURL_16;
	Il2CppMethodPointer ___GetRenderModelOriginalPath_17;
	Il2CppMethodPointer ___GetRenderModelErrorNameFromEnum_18;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRRenderModels
struct IVRRenderModels_t403A4506C6E82781E47914FC6B07A36164137FD3_marshaled_com
{
	Il2CppMethodPointer ___LoadRenderModel_Async_0;
	Il2CppMethodPointer ___FreeRenderModel_1;
	Il2CppMethodPointer ___LoadTexture_Async_2;
	Il2CppMethodPointer ___FreeTexture_3;
	Il2CppMethodPointer ___LoadTextureD3D11_Async_4;
	Il2CppMethodPointer ___LoadIntoTextureD3D11_Async_5;
	Il2CppMethodPointer ___FreeTextureD3D11_6;
	Il2CppMethodPointer ___GetRenderModelName_7;
	Il2CppMethodPointer ___GetRenderModelCount_8;
	Il2CppMethodPointer ___GetComponentCount_9;
	Il2CppMethodPointer ___GetComponentName_10;
	Il2CppMethodPointer ___GetComponentButtonMask_11;
	Il2CppMethodPointer ___GetComponentRenderModelName_12;
	Il2CppMethodPointer ___GetComponentStateForDevicePath_13;
	Il2CppMethodPointer ___GetComponentState_14;
	Il2CppMethodPointer ___RenderModelHasComponent_15;
	Il2CppMethodPointer ___GetRenderModelThumbnailURL_16;
	Il2CppMethodPointer ___GetRenderModelOriginalPath_17;
	Il2CppMethodPointer ___GetRenderModelErrorNameFromEnum_18;
};

// OVR.OpenVR.IVRScreenshots
struct IVRScreenshots_t7FB9DAD22CC684EBE50D4256CD3197507FDDDBA3 
{
	// OVR.OpenVR.IVRScreenshots/_RequestScreenshot OVR.OpenVR.IVRScreenshots::RequestScreenshot
	_RequestScreenshot_tC517F798F459B5BA7144A0130EDE242610068FD9* ___RequestScreenshot_0;
	// OVR.OpenVR.IVRScreenshots/_HookScreenshot OVR.OpenVR.IVRScreenshots::HookScreenshot
	_HookScreenshot_tA6785AC8EBF0D04CF69D27D656C2A6FB3F659334* ___HookScreenshot_1;
	// OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyType OVR.OpenVR.IVRScreenshots::GetScreenshotPropertyType
	_GetScreenshotPropertyType_t884FA5B326A0AA72D3ACE9EE7D68E33D5EA3DC3B* ___GetScreenshotPropertyType_2;
	// OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyFilename OVR.OpenVR.IVRScreenshots::GetScreenshotPropertyFilename
	_GetScreenshotPropertyFilename_tC69E6AF13818B54364AE7B02C43537BD48DF4E76* ___GetScreenshotPropertyFilename_3;
	// OVR.OpenVR.IVRScreenshots/_UpdateScreenshotProgress OVR.OpenVR.IVRScreenshots::UpdateScreenshotProgress
	_UpdateScreenshotProgress_t81F0DF5F950DBF93E3892995DA01F7843D4A3682* ___UpdateScreenshotProgress_4;
	// OVR.OpenVR.IVRScreenshots/_TakeStereoScreenshot OVR.OpenVR.IVRScreenshots::TakeStereoScreenshot
	_TakeStereoScreenshot_t0515309753D7CCEF3F9DD7A77E16BF7F2A8AC2F9* ___TakeStereoScreenshot_5;
	// OVR.OpenVR.IVRScreenshots/_SubmitScreenshot OVR.OpenVR.IVRScreenshots::SubmitScreenshot
	_SubmitScreenshot_t52597DCA551B3F5CD77FFFBFD6546907BF1FEFC5* ___SubmitScreenshot_6;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRScreenshots
struct IVRScreenshots_t7FB9DAD22CC684EBE50D4256CD3197507FDDDBA3_marshaled_pinvoke
{
	Il2CppMethodPointer ___RequestScreenshot_0;
	Il2CppMethodPointer ___HookScreenshot_1;
	Il2CppMethodPointer ___GetScreenshotPropertyType_2;
	Il2CppMethodPointer ___GetScreenshotPropertyFilename_3;
	Il2CppMethodPointer ___UpdateScreenshotProgress_4;
	Il2CppMethodPointer ___TakeStereoScreenshot_5;
	Il2CppMethodPointer ___SubmitScreenshot_6;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRScreenshots
struct IVRScreenshots_t7FB9DAD22CC684EBE50D4256CD3197507FDDDBA3_marshaled_com
{
	Il2CppMethodPointer ___RequestScreenshot_0;
	Il2CppMethodPointer ___HookScreenshot_1;
	Il2CppMethodPointer ___GetScreenshotPropertyType_2;
	Il2CppMethodPointer ___GetScreenshotPropertyFilename_3;
	Il2CppMethodPointer ___UpdateScreenshotProgress_4;
	Il2CppMethodPointer ___TakeStereoScreenshot_5;
	Il2CppMethodPointer ___SubmitScreenshot_6;
};

// OVR.OpenVR.IVRSettings
struct IVRSettings_tEE42EA90E095038800200064A9451F4E718A73F1 
{
	// OVR.OpenVR.IVRSettings/_GetSettingsErrorNameFromEnum OVR.OpenVR.IVRSettings::GetSettingsErrorNameFromEnum
	_GetSettingsErrorNameFromEnum_tE19BF24F45CCAB8E99D8AEA8638EA2F86E8E6D05* ___GetSettingsErrorNameFromEnum_0;
	// OVR.OpenVR.IVRSettings/_Sync OVR.OpenVR.IVRSettings::Sync
	_Sync_t430077019655288600E02875B7D1EAE5BE13DF84* ___Sync_1;
	// OVR.OpenVR.IVRSettings/_SetBool OVR.OpenVR.IVRSettings::SetBool
	_SetBool_t590A9BAD61735EB0CA000B2CF2C31BF4C8E1C461* ___SetBool_2;
	// OVR.OpenVR.IVRSettings/_SetInt32 OVR.OpenVR.IVRSettings::SetInt32
	_SetInt32_t24716C9A29208CAB49C0772500A13FB7629545EE* ___SetInt32_3;
	// OVR.OpenVR.IVRSettings/_SetFloat OVR.OpenVR.IVRSettings::SetFloat
	_SetFloat_tF6BC7345AA2576A2050756958C48A8BEAEA83D60* ___SetFloat_4;
	// OVR.OpenVR.IVRSettings/_SetString OVR.OpenVR.IVRSettings::SetString
	_SetString_tA84B0B0115B8651854756E7F91DCFAAA78E250C3* ___SetString_5;
	// OVR.OpenVR.IVRSettings/_GetBool OVR.OpenVR.IVRSettings::GetBool
	_GetBool_t29EA55F8DD3D522FD063768958A2F408683BC035* ___GetBool_6;
	// OVR.OpenVR.IVRSettings/_GetInt32 OVR.OpenVR.IVRSettings::GetInt32
	_GetInt32_tD937806391FE3FB32419301C9B27007E8618DB56* ___GetInt32_7;
	// OVR.OpenVR.IVRSettings/_GetFloat OVR.OpenVR.IVRSettings::GetFloat
	_GetFloat_t848D513E61C65565FC4B6F7691AD9D7B32E136D0* ___GetFloat_8;
	// OVR.OpenVR.IVRSettings/_GetString OVR.OpenVR.IVRSettings::GetString
	_GetString_tFC69BFD84DBF2D49A787716ED1A0F47BF885C256* ___GetString_9;
	// OVR.OpenVR.IVRSettings/_RemoveSection OVR.OpenVR.IVRSettings::RemoveSection
	_RemoveSection_t79069D43F391B66FD545913D879F29568694D89E* ___RemoveSection_10;
	// OVR.OpenVR.IVRSettings/_RemoveKeyInSection OVR.OpenVR.IVRSettings::RemoveKeyInSection
	_RemoveKeyInSection_tE3DD46E935D75353E0C5E246F3814CCDE6C24813* ___RemoveKeyInSection_11;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRSettings
struct IVRSettings_tEE42EA90E095038800200064A9451F4E718A73F1_marshaled_pinvoke
{
	Il2CppMethodPointer ___GetSettingsErrorNameFromEnum_0;
	Il2CppMethodPointer ___Sync_1;
	Il2CppMethodPointer ___SetBool_2;
	Il2CppMethodPointer ___SetInt32_3;
	Il2CppMethodPointer ___SetFloat_4;
	Il2CppMethodPointer ___SetString_5;
	Il2CppMethodPointer ___GetBool_6;
	Il2CppMethodPointer ___GetInt32_7;
	Il2CppMethodPointer ___GetFloat_8;
	Il2CppMethodPointer ___GetString_9;
	Il2CppMethodPointer ___RemoveSection_10;
	Il2CppMethodPointer ___RemoveKeyInSection_11;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRSettings
struct IVRSettings_tEE42EA90E095038800200064A9451F4E718A73F1_marshaled_com
{
	Il2CppMethodPointer ___GetSettingsErrorNameFromEnum_0;
	Il2CppMethodPointer ___Sync_1;
	Il2CppMethodPointer ___SetBool_2;
	Il2CppMethodPointer ___SetInt32_3;
	Il2CppMethodPointer ___SetFloat_4;
	Il2CppMethodPointer ___SetString_5;
	Il2CppMethodPointer ___GetBool_6;
	Il2CppMethodPointer ___GetInt32_7;
	Il2CppMethodPointer ___GetFloat_8;
	Il2CppMethodPointer ___GetString_9;
	Il2CppMethodPointer ___RemoveSection_10;
	Il2CppMethodPointer ___RemoveKeyInSection_11;
};

// OVR.OpenVR.IVRSpatialAnchors
struct IVRSpatialAnchors_tFAD20563C0543E5ABE191F247BCF14F768DD7E03 
{
	// OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor OVR.OpenVR.IVRSpatialAnchors::CreateSpatialAnchorFromDescriptor
	_CreateSpatialAnchorFromDescriptor_tBA53981C13E3D9073976CCD6539297864F99DC44* ___CreateSpatialAnchorFromDescriptor_0;
	// OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose OVR.OpenVR.IVRSpatialAnchors::CreateSpatialAnchorFromPose
	_CreateSpatialAnchorFromPose_tE13DF519C9E1EBE00E68F6EA6F6D8486C6F7E08F* ___CreateSpatialAnchorFromPose_1;
	// OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose OVR.OpenVR.IVRSpatialAnchors::GetSpatialAnchorPose
	_GetSpatialAnchorPose_t94B25B5A23E2B42FE88F859C721FF4E04DB14B24* ___GetSpatialAnchorPose_2;
	// OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor OVR.OpenVR.IVRSpatialAnchors::GetSpatialAnchorDescriptor
	_GetSpatialAnchorDescriptor_tAAA8579E216F58E7DDC2DF4E24285AA30E5EFFFA* ___GetSpatialAnchorDescriptor_3;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRSpatialAnchors
struct IVRSpatialAnchors_tFAD20563C0543E5ABE191F247BCF14F768DD7E03_marshaled_pinvoke
{
	Il2CppMethodPointer ___CreateSpatialAnchorFromDescriptor_0;
	Il2CppMethodPointer ___CreateSpatialAnchorFromPose_1;
	Il2CppMethodPointer ___GetSpatialAnchorPose_2;
	Il2CppMethodPointer ___GetSpatialAnchorDescriptor_3;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRSpatialAnchors
struct IVRSpatialAnchors_tFAD20563C0543E5ABE191F247BCF14F768DD7E03_marshaled_com
{
	Il2CppMethodPointer ___CreateSpatialAnchorFromDescriptor_0;
	Il2CppMethodPointer ___CreateSpatialAnchorFromPose_1;
	Il2CppMethodPointer ___GetSpatialAnchorPose_2;
	Il2CppMethodPointer ___GetSpatialAnchorDescriptor_3;
};

// OVR.OpenVR.IVRSystem
struct IVRSystem_t6B77F1167E7DA3724D1593D1046A529EDB2A5F58 
{
	// OVR.OpenVR.IVRSystem/_GetRecommendedRenderTargetSize OVR.OpenVR.IVRSystem::GetRecommendedRenderTargetSize
	_GetRecommendedRenderTargetSize_tE5DCCAA3C127070265E730E834989CD71122B1EF* ___GetRecommendedRenderTargetSize_0;
	// OVR.OpenVR.IVRSystem/_GetProjectionMatrix OVR.OpenVR.IVRSystem::GetProjectionMatrix
	_GetProjectionMatrix_t9B0D0C3225387862FA516D50DB79579834EF0DD0* ___GetProjectionMatrix_1;
	// OVR.OpenVR.IVRSystem/_GetProjectionRaw OVR.OpenVR.IVRSystem::GetProjectionRaw
	_GetProjectionRaw_t6867187AE3A0151807D995F184BC67408FFA7496* ___GetProjectionRaw_2;
	// OVR.OpenVR.IVRSystem/_ComputeDistortion OVR.OpenVR.IVRSystem::ComputeDistortion
	_ComputeDistortion_tD147426B3B0270DAA7EB1C32043EBEF527870407* ___ComputeDistortion_3;
	// OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform OVR.OpenVR.IVRSystem::GetEyeToHeadTransform
	_GetEyeToHeadTransform_t85F575C6B4387A61016410FF9B7F670D25973926* ___GetEyeToHeadTransform_4;
	// OVR.OpenVR.IVRSystem/_GetTimeSinceLastVsync OVR.OpenVR.IVRSystem::GetTimeSinceLastVsync
	_GetTimeSinceLastVsync_tCC442F5CDBF0A619CD0CD84A061FEA9DB1774D33* ___GetTimeSinceLastVsync_5;
	// OVR.OpenVR.IVRSystem/_GetD3D9AdapterIndex OVR.OpenVR.IVRSystem::GetD3D9AdapterIndex
	_GetD3D9AdapterIndex_t6EEF3293C1B40E937D92113B8A3F96DED8415791* ___GetD3D9AdapterIndex_6;
	// OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo OVR.OpenVR.IVRSystem::GetDXGIOutputInfo
	_GetDXGIOutputInfo_t73FA51E5AB534DC0A3A6FDFD0C2D67177090E66C* ___GetDXGIOutputInfo_7;
	// OVR.OpenVR.IVRSystem/_GetOutputDevice OVR.OpenVR.IVRSystem::GetOutputDevice
	_GetOutputDevice_t83D6AE0AB6B1F21E5D87ECBB559E60D183610222* ___GetOutputDevice_8;
	// OVR.OpenVR.IVRSystem/_IsDisplayOnDesktop OVR.OpenVR.IVRSystem::IsDisplayOnDesktop
	_IsDisplayOnDesktop_tB1D86880DF7E8EEFEA7D0DA7B46695B38688FDF3* ___IsDisplayOnDesktop_9;
	// OVR.OpenVR.IVRSystem/_SetDisplayVisibility OVR.OpenVR.IVRSystem::SetDisplayVisibility
	_SetDisplayVisibility_tF1714A7C8CF32C530DF3BFEBA6F217AD02250F26* ___SetDisplayVisibility_10;
	// OVR.OpenVR.IVRSystem/_GetDeviceToAbsoluteTrackingPose OVR.OpenVR.IVRSystem::GetDeviceToAbsoluteTrackingPose
	_GetDeviceToAbsoluteTrackingPose_tBB4998801BAFE6FFD6003002E6948AABD08D081C* ___GetDeviceToAbsoluteTrackingPose_11;
	// OVR.OpenVR.IVRSystem/_ResetSeatedZeroPose OVR.OpenVR.IVRSystem::ResetSeatedZeroPose
	_ResetSeatedZeroPose_t5DA7EB83B5BC1CC765227E8BA0B5AAA63D14F009* ___ResetSeatedZeroPose_12;
	// OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose OVR.OpenVR.IVRSystem::GetSeatedZeroPoseToStandingAbsoluteTrackingPose
	_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_tBCAF710571F3E9B304E65DB1A7EC953392A29CF8* ___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13;
	// OVR.OpenVR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose OVR.OpenVR.IVRSystem::GetRawZeroPoseToStandingAbsoluteTrackingPose
	_GetRawZeroPoseToStandingAbsoluteTrackingPose_t4CA0DDBB2D4969509146BAE587278F7C5DD922B2* ___GetRawZeroPoseToStandingAbsoluteTrackingPose_14;
	// OVR.OpenVR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass OVR.OpenVR.IVRSystem::GetSortedTrackedDeviceIndicesOfClass
	_GetSortedTrackedDeviceIndicesOfClass_t883B6DB2CE87516A965060EE45B5451AA01541E5* ___GetSortedTrackedDeviceIndicesOfClass_15;
	// OVR.OpenVR.IVRSystem/_GetTrackedDeviceActivityLevel OVR.OpenVR.IVRSystem::GetTrackedDeviceActivityLevel
	_GetTrackedDeviceActivityLevel_t18F25E592E9F23E1B42CE3FC8BBCDA9991877F73* ___GetTrackedDeviceActivityLevel_16;
	// OVR.OpenVR.IVRSystem/_ApplyTransform OVR.OpenVR.IVRSystem::ApplyTransform
	_ApplyTransform_t1D87B7AC1195BDAAA4CB3A0BC58BADBA6E134082* ___ApplyTransform_17;
	// OVR.OpenVR.IVRSystem/_GetTrackedDeviceIndexForControllerRole OVR.OpenVR.IVRSystem::GetTrackedDeviceIndexForControllerRole
	_GetTrackedDeviceIndexForControllerRole_tDC374474D4B923D02CF3907E7C7F19B0E01CE418* ___GetTrackedDeviceIndexForControllerRole_18;
	// OVR.OpenVR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex OVR.OpenVR.IVRSystem::GetControllerRoleForTrackedDeviceIndex
	_GetControllerRoleForTrackedDeviceIndex_t04E0EBF506A4CA91A1F9F1E4528AD1BC9738C5EC* ___GetControllerRoleForTrackedDeviceIndex_19;
	// OVR.OpenVR.IVRSystem/_GetTrackedDeviceClass OVR.OpenVR.IVRSystem::GetTrackedDeviceClass
	_GetTrackedDeviceClass_t7347331DDB1CBA2ED64A115A3F67805DACFB92F9* ___GetTrackedDeviceClass_20;
	// OVR.OpenVR.IVRSystem/_IsTrackedDeviceConnected OVR.OpenVR.IVRSystem::IsTrackedDeviceConnected
	_IsTrackedDeviceConnected_t9AA842DF79300B59CA9D06D4BB080D34F2A8BE55* ___IsTrackedDeviceConnected_21;
	// OVR.OpenVR.IVRSystem/_GetBoolTrackedDeviceProperty OVR.OpenVR.IVRSystem::GetBoolTrackedDeviceProperty
	_GetBoolTrackedDeviceProperty_t8F0763D4AAD303DA0DD843E9A8336C7B3E098A63* ___GetBoolTrackedDeviceProperty_22;
	// OVR.OpenVR.IVRSystem/_GetFloatTrackedDeviceProperty OVR.OpenVR.IVRSystem::GetFloatTrackedDeviceProperty
	_GetFloatTrackedDeviceProperty_t819CE8B33EBD3DB70A2F691EC0EA87F3B9E9F117* ___GetFloatTrackedDeviceProperty_23;
	// OVR.OpenVR.IVRSystem/_GetInt32TrackedDeviceProperty OVR.OpenVR.IVRSystem::GetInt32TrackedDeviceProperty
	_GetInt32TrackedDeviceProperty_t90F760BFCB8EFA6DE76F7DC6B6ADDB9E7A82AB86* ___GetInt32TrackedDeviceProperty_24;
	// OVR.OpenVR.IVRSystem/_GetUint64TrackedDeviceProperty OVR.OpenVR.IVRSystem::GetUint64TrackedDeviceProperty
	_GetUint64TrackedDeviceProperty_tF9AAE5FDB16FE39CDF74EA82D87D05C9A58D6A8A* ___GetUint64TrackedDeviceProperty_25;
	// OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty OVR.OpenVR.IVRSystem::GetMatrix34TrackedDeviceProperty
	_GetMatrix34TrackedDeviceProperty_t2CF43EAD342BBD7FDE42D16D697091316658494B* ___GetMatrix34TrackedDeviceProperty_26;
	// OVR.OpenVR.IVRSystem/_GetArrayTrackedDeviceProperty OVR.OpenVR.IVRSystem::GetArrayTrackedDeviceProperty
	_GetArrayTrackedDeviceProperty_t36E75990577ED75C9F44C743E8E27396AF36240C* ___GetArrayTrackedDeviceProperty_27;
	// OVR.OpenVR.IVRSystem/_GetStringTrackedDeviceProperty OVR.OpenVR.IVRSystem::GetStringTrackedDeviceProperty
	_GetStringTrackedDeviceProperty_t76FD9D8448083C12ED3BE15AE73D5C38E4ADECC5* ___GetStringTrackedDeviceProperty_28;
	// OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum OVR.OpenVR.IVRSystem::GetPropErrorNameFromEnum
	_GetPropErrorNameFromEnum_t89F1CBA1871CB900043DA4EA17B5C59A44A19EF5* ___GetPropErrorNameFromEnum_29;
	// OVR.OpenVR.IVRSystem/_PollNextEvent OVR.OpenVR.IVRSystem::PollNextEvent
	_PollNextEvent_t7661E5AF679D8C0B4F9959F46724FAB9AD4658DD* ___PollNextEvent_30;
	// OVR.OpenVR.IVRSystem/_PollNextEventWithPose OVR.OpenVR.IVRSystem::PollNextEventWithPose
	_PollNextEventWithPose_tAC36873017089F9D283AFA6D22503AFD8ACFA96F* ___PollNextEventWithPose_31;
	// OVR.OpenVR.IVRSystem/_GetEventTypeNameFromEnum OVR.OpenVR.IVRSystem::GetEventTypeNameFromEnum
	_GetEventTypeNameFromEnum_tBCFA4CF8CD31A63BCE5C028F86023D5B3F56C4C5* ___GetEventTypeNameFromEnum_32;
	// OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh OVR.OpenVR.IVRSystem::GetHiddenAreaMesh
	_GetHiddenAreaMesh_t426F5CEB93D8D3593835185EA732C11AB30E2A43* ___GetHiddenAreaMesh_33;
	// OVR.OpenVR.IVRSystem/_GetControllerState OVR.OpenVR.IVRSystem::GetControllerState
	_GetControllerState_tA53B014959406294ECAB190EBC86F3A1EFF49E00* ___GetControllerState_34;
	// OVR.OpenVR.IVRSystem/_GetControllerStateWithPose OVR.OpenVR.IVRSystem::GetControllerStateWithPose
	_GetControllerStateWithPose_t64510A0EF68D6CB2CAFDC50BA60A66729637DB56* ___GetControllerStateWithPose_35;
	// OVR.OpenVR.IVRSystem/_TriggerHapticPulse OVR.OpenVR.IVRSystem::TriggerHapticPulse
	_TriggerHapticPulse_tEDD2E25EA770F3D7341ECEA5409A692C8BCCE773* ___TriggerHapticPulse_36;
	// OVR.OpenVR.IVRSystem/_GetButtonIdNameFromEnum OVR.OpenVR.IVRSystem::GetButtonIdNameFromEnum
	_GetButtonIdNameFromEnum_t723788274FE11A4D7D6CD49D95D14266B392E65F* ___GetButtonIdNameFromEnum_37;
	// OVR.OpenVR.IVRSystem/_GetControllerAxisTypeNameFromEnum OVR.OpenVR.IVRSystem::GetControllerAxisTypeNameFromEnum
	_GetControllerAxisTypeNameFromEnum_t7FD5B5167CB91A7866C19AA6D30A175467EC2CAF* ___GetControllerAxisTypeNameFromEnum_38;
	// OVR.OpenVR.IVRSystem/_IsInputAvailable OVR.OpenVR.IVRSystem::IsInputAvailable
	_IsInputAvailable_t432F7CFC272FE7E8A2D8C57AC0F6A9AD55BF759B* ___IsInputAvailable_39;
	// OVR.OpenVR.IVRSystem/_IsSteamVRDrawingControllers OVR.OpenVR.IVRSystem::IsSteamVRDrawingControllers
	_IsSteamVRDrawingControllers_t2BBCA30078A8E13FA361F46562662C6B4DEB0223* ___IsSteamVRDrawingControllers_40;
	// OVR.OpenVR.IVRSystem/_ShouldApplicationPause OVR.OpenVR.IVRSystem::ShouldApplicationPause
	_ShouldApplicationPause_t363B2CBD8131B77FADAF11D24071E94B3A15FA37* ___ShouldApplicationPause_41;
	// OVR.OpenVR.IVRSystem/_ShouldApplicationReduceRenderingWork OVR.OpenVR.IVRSystem::ShouldApplicationReduceRenderingWork
	_ShouldApplicationReduceRenderingWork_t49429140C48F7CFAFDD2EAFBEB0FE31BA6FBFA29* ___ShouldApplicationReduceRenderingWork_42;
	// OVR.OpenVR.IVRSystem/_DriverDebugRequest OVR.OpenVR.IVRSystem::DriverDebugRequest
	_DriverDebugRequest_t3418F0E739483EDFBDB2AB22D7AF53CFA2EAE313* ___DriverDebugRequest_43;
	// OVR.OpenVR.IVRSystem/_PerformFirmwareUpdate OVR.OpenVR.IVRSystem::PerformFirmwareUpdate
	_PerformFirmwareUpdate_t26607D5B0AFAB7AFE81A453EC1749DC43FAB3E98* ___PerformFirmwareUpdate_44;
	// OVR.OpenVR.IVRSystem/_AcknowledgeQuit_Exiting OVR.OpenVR.IVRSystem::AcknowledgeQuit_Exiting
	_AcknowledgeQuit_Exiting_tEF47D178982F69800F0863A0556AA537BE44047D* ___AcknowledgeQuit_Exiting_45;
	// OVR.OpenVR.IVRSystem/_AcknowledgeQuit_UserPrompt OVR.OpenVR.IVRSystem::AcknowledgeQuit_UserPrompt
	_AcknowledgeQuit_UserPrompt_t39607F7E8E1F30F7A3286CC18C60010E7568AF37* ___AcknowledgeQuit_UserPrompt_46;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRSystem
struct IVRSystem_t6B77F1167E7DA3724D1593D1046A529EDB2A5F58_marshaled_pinvoke
{
	Il2CppMethodPointer ___GetRecommendedRenderTargetSize_0;
	Il2CppMethodPointer ___GetProjectionMatrix_1;
	Il2CppMethodPointer ___GetProjectionRaw_2;
	Il2CppMethodPointer ___ComputeDistortion_3;
	Il2CppMethodPointer ___GetEyeToHeadTransform_4;
	Il2CppMethodPointer ___GetTimeSinceLastVsync_5;
	Il2CppMethodPointer ___GetD3D9AdapterIndex_6;
	Il2CppMethodPointer ___GetDXGIOutputInfo_7;
	Il2CppMethodPointer ___GetOutputDevice_8;
	Il2CppMethodPointer ___IsDisplayOnDesktop_9;
	Il2CppMethodPointer ___SetDisplayVisibility_10;
	Il2CppMethodPointer ___GetDeviceToAbsoluteTrackingPose_11;
	Il2CppMethodPointer ___ResetSeatedZeroPose_12;
	Il2CppMethodPointer ___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13;
	Il2CppMethodPointer ___GetRawZeroPoseToStandingAbsoluteTrackingPose_14;
	Il2CppMethodPointer ___GetSortedTrackedDeviceIndicesOfClass_15;
	Il2CppMethodPointer ___GetTrackedDeviceActivityLevel_16;
	Il2CppMethodPointer ___ApplyTransform_17;
	Il2CppMethodPointer ___GetTrackedDeviceIndexForControllerRole_18;
	Il2CppMethodPointer ___GetControllerRoleForTrackedDeviceIndex_19;
	Il2CppMethodPointer ___GetTrackedDeviceClass_20;
	Il2CppMethodPointer ___IsTrackedDeviceConnected_21;
	Il2CppMethodPointer ___GetBoolTrackedDeviceProperty_22;
	Il2CppMethodPointer ___GetFloatTrackedDeviceProperty_23;
	Il2CppMethodPointer ___GetInt32TrackedDeviceProperty_24;
	Il2CppMethodPointer ___GetUint64TrackedDeviceProperty_25;
	Il2CppMethodPointer ___GetMatrix34TrackedDeviceProperty_26;
	Il2CppMethodPointer ___GetArrayTrackedDeviceProperty_27;
	Il2CppMethodPointer ___GetStringTrackedDeviceProperty_28;
	Il2CppMethodPointer ___GetPropErrorNameFromEnum_29;
	Il2CppMethodPointer ___PollNextEvent_30;
	Il2CppMethodPointer ___PollNextEventWithPose_31;
	Il2CppMethodPointer ___GetEventTypeNameFromEnum_32;
	Il2CppMethodPointer ___GetHiddenAreaMesh_33;
	Il2CppMethodPointer ___GetControllerState_34;
	Il2CppMethodPointer ___GetControllerStateWithPose_35;
	Il2CppMethodPointer ___TriggerHapticPulse_36;
	Il2CppMethodPointer ___GetButtonIdNameFromEnum_37;
	Il2CppMethodPointer ___GetControllerAxisTypeNameFromEnum_38;
	Il2CppMethodPointer ___IsInputAvailable_39;
	Il2CppMethodPointer ___IsSteamVRDrawingControllers_40;
	Il2CppMethodPointer ___ShouldApplicationPause_41;
	Il2CppMethodPointer ___ShouldApplicationReduceRenderingWork_42;
	Il2CppMethodPointer ___DriverDebugRequest_43;
	Il2CppMethodPointer ___PerformFirmwareUpdate_44;
	Il2CppMethodPointer ___AcknowledgeQuit_Exiting_45;
	Il2CppMethodPointer ___AcknowledgeQuit_UserPrompt_46;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRSystem
struct IVRSystem_t6B77F1167E7DA3724D1593D1046A529EDB2A5F58_marshaled_com
{
	Il2CppMethodPointer ___GetRecommendedRenderTargetSize_0;
	Il2CppMethodPointer ___GetProjectionMatrix_1;
	Il2CppMethodPointer ___GetProjectionRaw_2;
	Il2CppMethodPointer ___ComputeDistortion_3;
	Il2CppMethodPointer ___GetEyeToHeadTransform_4;
	Il2CppMethodPointer ___GetTimeSinceLastVsync_5;
	Il2CppMethodPointer ___GetD3D9AdapterIndex_6;
	Il2CppMethodPointer ___GetDXGIOutputInfo_7;
	Il2CppMethodPointer ___GetOutputDevice_8;
	Il2CppMethodPointer ___IsDisplayOnDesktop_9;
	Il2CppMethodPointer ___SetDisplayVisibility_10;
	Il2CppMethodPointer ___GetDeviceToAbsoluteTrackingPose_11;
	Il2CppMethodPointer ___ResetSeatedZeroPose_12;
	Il2CppMethodPointer ___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_13;
	Il2CppMethodPointer ___GetRawZeroPoseToStandingAbsoluteTrackingPose_14;
	Il2CppMethodPointer ___GetSortedTrackedDeviceIndicesOfClass_15;
	Il2CppMethodPointer ___GetTrackedDeviceActivityLevel_16;
	Il2CppMethodPointer ___ApplyTransform_17;
	Il2CppMethodPointer ___GetTrackedDeviceIndexForControllerRole_18;
	Il2CppMethodPointer ___GetControllerRoleForTrackedDeviceIndex_19;
	Il2CppMethodPointer ___GetTrackedDeviceClass_20;
	Il2CppMethodPointer ___IsTrackedDeviceConnected_21;
	Il2CppMethodPointer ___GetBoolTrackedDeviceProperty_22;
	Il2CppMethodPointer ___GetFloatTrackedDeviceProperty_23;
	Il2CppMethodPointer ___GetInt32TrackedDeviceProperty_24;
	Il2CppMethodPointer ___GetUint64TrackedDeviceProperty_25;
	Il2CppMethodPointer ___GetMatrix34TrackedDeviceProperty_26;
	Il2CppMethodPointer ___GetArrayTrackedDeviceProperty_27;
	Il2CppMethodPointer ___GetStringTrackedDeviceProperty_28;
	Il2CppMethodPointer ___GetPropErrorNameFromEnum_29;
	Il2CppMethodPointer ___PollNextEvent_30;
	Il2CppMethodPointer ___PollNextEventWithPose_31;
	Il2CppMethodPointer ___GetEventTypeNameFromEnum_32;
	Il2CppMethodPointer ___GetHiddenAreaMesh_33;
	Il2CppMethodPointer ___GetControllerState_34;
	Il2CppMethodPointer ___GetControllerStateWithPose_35;
	Il2CppMethodPointer ___TriggerHapticPulse_36;
	Il2CppMethodPointer ___GetButtonIdNameFromEnum_37;
	Il2CppMethodPointer ___GetControllerAxisTypeNameFromEnum_38;
	Il2CppMethodPointer ___IsInputAvailable_39;
	Il2CppMethodPointer ___IsSteamVRDrawingControllers_40;
	Il2CppMethodPointer ___ShouldApplicationPause_41;
	Il2CppMethodPointer ___ShouldApplicationReduceRenderingWork_42;
	Il2CppMethodPointer ___DriverDebugRequest_43;
	Il2CppMethodPointer ___PerformFirmwareUpdate_44;
	Il2CppMethodPointer ___AcknowledgeQuit_Exiting_45;
	Il2CppMethodPointer ___AcknowledgeQuit_UserPrompt_46;
};

// OVR.OpenVR.IVRTrackedCamera
struct IVRTrackedCamera_t3D8EA01AFEB0F5395F4449B6C33730D531B32E06 
{
	// OVR.OpenVR.IVRTrackedCamera/_GetCameraErrorNameFromEnum OVR.OpenVR.IVRTrackedCamera::GetCameraErrorNameFromEnum
	_GetCameraErrorNameFromEnum_t4D8847A5F5D409B6EA57229203B0F28DE3DBAA22* ___GetCameraErrorNameFromEnum_0;
	// OVR.OpenVR.IVRTrackedCamera/_HasCamera OVR.OpenVR.IVRTrackedCamera::HasCamera
	_HasCamera_tD458536D06615D86A0F5223ECC92BBDA8B12DDEB* ___HasCamera_1;
	// OVR.OpenVR.IVRTrackedCamera/_GetCameraFrameSize OVR.OpenVR.IVRTrackedCamera::GetCameraFrameSize
	_GetCameraFrameSize_tBA868F720BFF12F3AC15E15172EF881236F01260* ___GetCameraFrameSize_2;
	// OVR.OpenVR.IVRTrackedCamera/_GetCameraIntrinsics OVR.OpenVR.IVRTrackedCamera::GetCameraIntrinsics
	_GetCameraIntrinsics_tF4D6057A3EDAC670DBF6BD155C6C8A348F7DB8BB* ___GetCameraIntrinsics_3;
	// OVR.OpenVR.IVRTrackedCamera/_GetCameraProjection OVR.OpenVR.IVRTrackedCamera::GetCameraProjection
	_GetCameraProjection_t2D53F4CA7DD1218E99470F20CFF342DC7F1F31DC* ___GetCameraProjection_4;
	// OVR.OpenVR.IVRTrackedCamera/_AcquireVideoStreamingService OVR.OpenVR.IVRTrackedCamera::AcquireVideoStreamingService
	_AcquireVideoStreamingService_tC0E6E106B44AF9B48F0CE1B5061869A9E23839CC* ___AcquireVideoStreamingService_5;
	// OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamingService OVR.OpenVR.IVRTrackedCamera::ReleaseVideoStreamingService
	_ReleaseVideoStreamingService_t9F8B638163F48EADAC095A5957C5EA999B52640C* ___ReleaseVideoStreamingService_6;
	// OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamFrameBuffer OVR.OpenVR.IVRTrackedCamera::GetVideoStreamFrameBuffer
	_GetVideoStreamFrameBuffer_t5B2634C87D11C5DE78B67F99748D687F2273E4B4* ___GetVideoStreamFrameBuffer_7;
	// OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureSize OVR.OpenVR.IVRTrackedCamera::GetVideoStreamTextureSize
	_GetVideoStreamTextureSize_tA59FC0BCB333B8107834A1BE40EDDF45D6F2513C* ___GetVideoStreamTextureSize_8;
	// OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureD3D11 OVR.OpenVR.IVRTrackedCamera::GetVideoStreamTextureD3D11
	_GetVideoStreamTextureD3D11_t6C22B3197DC2024EE879DB995135672362798CFD* ___GetVideoStreamTextureD3D11_9;
	// OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureGL OVR.OpenVR.IVRTrackedCamera::GetVideoStreamTextureGL
	_GetVideoStreamTextureGL_t8205B382FFDB160BAA8E91BCB673F4707C5F3893* ___GetVideoStreamTextureGL_10;
	// OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL OVR.OpenVR.IVRTrackedCamera::ReleaseVideoStreamTextureGL
	_ReleaseVideoStreamTextureGL_tFD74B96FFC9530DC64D895310AAA0D3F35A05B80* ___ReleaseVideoStreamTextureGL_11;
};
// Native definition for P/Invoke marshalling of OVR.OpenVR.IVRTrackedCamera
struct IVRTrackedCamera_t3D8EA01AFEB0F5395F4449B6C33730D531B32E06_marshaled_pinvoke
{
	Il2CppMethodPointer ___GetCameraErrorNameFromEnum_0;
	Il2CppMethodPointer ___HasCamera_1;
	Il2CppMethodPointer ___GetCameraFrameSize_2;
	Il2CppMethodPointer ___GetCameraIntrinsics_3;
	Il2CppMethodPointer ___GetCameraProjection_4;
	Il2CppMethodPointer ___AcquireVideoStreamingService_5;
	Il2CppMethodPointer ___ReleaseVideoStreamingService_6;
	Il2CppMethodPointer ___GetVideoStreamFrameBuffer_7;
	Il2CppMethodPointer ___GetVideoStreamTextureSize_8;
	Il2CppMethodPointer ___GetVideoStreamTextureD3D11_9;
	Il2CppMethodPointer ___GetVideoStreamTextureGL_10;
	Il2CppMethodPointer ___ReleaseVideoStreamTextureGL_11;
};
// Native definition for COM marshalling of OVR.OpenVR.IVRTrackedCamera
struct IVRTrackedCamera_t3D8EA01AFEB0F5395F4449B6C33730D531B32E06_marshaled_com
{
	Il2CppMethodPointer ___GetCameraErrorNameFromEnum_0;
	Il2CppMethodPointer ___HasCamera_1;
	Il2CppMethodPointer ___GetCameraFrameSize_2;
	Il2CppMethodPointer ___GetCameraIntrinsics_3;
	Il2CppMethodPointer ___GetCameraProjection_4;
	Il2CppMethodPointer ___AcquireVideoStreamingService_5;
	Il2CppMethodPointer ___ReleaseVideoStreamingService_6;
	Il2CppMethodPointer ___GetVideoStreamFrameBuffer_7;
	Il2CppMethodPointer ___GetVideoStreamTextureSize_8;
	Il2CppMethodPointer ___GetVideoStreamTextureD3D11_9;
	Il2CppMethodPointer ___GetVideoStreamTextureGL_10;
	Il2CppMethodPointer ___ReleaseVideoStreamTextureGL_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// Assets.OVR.Scripts.RangedRecord
struct RangedRecord_t25D9982F58541F843CB54DC4E4B246EFCBD29699  : public Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2
{
	// System.Single Assets.OVR.Scripts.RangedRecord::value
	float ___value_3;
	// System.Single Assets.OVR.Scripts.RangedRecord::min
	float ___min_4;
	// System.Single Assets.OVR.Scripts.RangedRecord::max
	float ___max_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// OVR.OpenVR.VRActiveActionSet_t
struct VRActiveActionSet_t_t75460FB6AD162CEE3E823907F444059DB792837C 
{
	// System.UInt64 OVR.OpenVR.VRActiveActionSet_t::ulActionSet
	uint64_t ___ulActionSet_0;
	// System.UInt64 OVR.OpenVR.VRActiveActionSet_t::ulRestrictedToDevice
	uint64_t ___ulRestrictedToDevice_1;
	// System.UInt64 OVR.OpenVR.VRActiveActionSet_t::ulSecondaryActionSet
	uint64_t ___ulSecondaryActionSet_2;
	// System.UInt32 OVR.OpenVR.VRActiveActionSet_t::unPadding
	uint32_t ___unPadding_3;
	// System.Int32 OVR.OpenVR.VRActiveActionSet_t::nPriority
	int32_t ___nPriority_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_tB80B93638C5B131A2ECBFB2B90A6F7C524560B75 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tB80B93638C5B131A2ECBFB2B90A6F7C524560B75__padding[24];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t8CCC1D019897BE2F4568BD89DEABE32FE4F8114C  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t8CCC1D019897BE2F4568BD89DEABE32FE4F8114C_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D
	__StaticArrayInitTypeSizeU3D24_tB80B93638C5B131A2ECBFB2B90A6F7C524560B75 ___CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D_0;
};

// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::<moveVector>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CmoveVectorU3Ek__BackingField_2;
	// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::<moveDir>k__BackingField
	int32_t ___U3CmoveDirU3Ek__BackingField_3;
};

// OVR.OpenVR.COpenVRContext
struct COpenVRContext_t68831AFF9CD54270121504C1AD675193430164DF 
{
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRSystem
	intptr_t ___m_pVRSystem_0;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRChaperone
	intptr_t ___m_pVRChaperone_1;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRChaperoneSetup
	intptr_t ___m_pVRChaperoneSetup_2;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRCompositor
	intptr_t ___m_pVRCompositor_3;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVROverlay
	intptr_t ___m_pVROverlay_4;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRResources
	intptr_t ___m_pVRResources_5;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRRenderModels
	intptr_t ___m_pVRRenderModels_6;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRExtendedDisplay
	intptr_t ___m_pVRExtendedDisplay_7;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRSettings
	intptr_t ___m_pVRSettings_8;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRApplications
	intptr_t ___m_pVRApplications_9;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRTrackedCamera
	intptr_t ___m_pVRTrackedCamera_10;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRScreenshots
	intptr_t ___m_pVRScreenshots_11;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRDriverManager
	intptr_t ___m_pVRDriverManager_12;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRInput
	intptr_t ___m_pVRInput_13;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRIOBuffer
	intptr_t ___m_pVRIOBuffer_14;
	// System.IntPtr OVR.OpenVR.COpenVRContext::m_pVRSpatialAnchors
	intptr_t ___m_pVRSpatialAnchors_15;
};

// OVR.OpenVR.CVRApplications
struct CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA  : public RuntimeObject
{
	// OVR.OpenVR.IVRApplications OVR.OpenVR.CVRApplications::FnTable
	IVRApplications_t514FC22F24D4E92F266BED6EFC7E478EB4743DE9 ___FnTable_0;
};

// OVR.OpenVR.CVRChaperone
struct CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7  : public RuntimeObject
{
	// OVR.OpenVR.IVRChaperone OVR.OpenVR.CVRChaperone::FnTable
	IVRChaperone_t991FA89759F26D4928F7EDAE4610F16E935A3AAB ___FnTable_0;
};

// OVR.OpenVR.CVRChaperoneSetup
struct CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A  : public RuntimeObject
{
	// OVR.OpenVR.IVRChaperoneSetup OVR.OpenVR.CVRChaperoneSetup::FnTable
	IVRChaperoneSetup_t4B83717DEF4B4594F4B730800E979923DEA0690F ___FnTable_0;
};

// OVR.OpenVR.CVRCompositor
struct CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D  : public RuntimeObject
{
	// OVR.OpenVR.IVRCompositor OVR.OpenVR.CVRCompositor::FnTable
	IVRCompositor_tA115D9B9E7B67163A0501BF1F5DFBDA439849EB0 ___FnTable_0;
};

// OVR.OpenVR.CVRExtendedDisplay
struct CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE  : public RuntimeObject
{
	// OVR.OpenVR.IVRExtendedDisplay OVR.OpenVR.CVRExtendedDisplay::FnTable
	IVRExtendedDisplay_t35C46EEBB0DD15A6BD91F9079AC1C8F15A14AD92 ___FnTable_0;
};

// OVR.OpenVR.CVRInput
struct CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F  : public RuntimeObject
{
	// OVR.OpenVR.IVRInput OVR.OpenVR.CVRInput::FnTable
	IVRInput_t2388F05027ABF70F7274C50DE3F028D2B7441147 ___FnTable_0;
};

// OVR.OpenVR.CVROverlay
struct CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D  : public RuntimeObject
{
	// OVR.OpenVR.IVROverlay OVR.OpenVR.CVROverlay::FnTable
	IVROverlay_t1F72C1A5A7D309113494D12FC43D63DD03533D79 ___FnTable_0;
};

// OVR.OpenVR.CVRRenderModels
struct CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414  : public RuntimeObject
{
	// OVR.OpenVR.IVRRenderModels OVR.OpenVR.CVRRenderModels::FnTable
	IVRRenderModels_t403A4506C6E82781E47914FC6B07A36164137FD3 ___FnTable_0;
};

// OVR.OpenVR.CVRScreenshots
struct CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23  : public RuntimeObject
{
	// OVR.OpenVR.IVRScreenshots OVR.OpenVR.CVRScreenshots::FnTable
	IVRScreenshots_t7FB9DAD22CC684EBE50D4256CD3197507FDDDBA3 ___FnTable_0;
};

// OVR.OpenVR.CVRSettings
struct CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA  : public RuntimeObject
{
	// OVR.OpenVR.IVRSettings OVR.OpenVR.CVRSettings::FnTable
	IVRSettings_tEE42EA90E095038800200064A9451F4E718A73F1 ___FnTable_0;
};

// OVR.OpenVR.CVRSpatialAnchors
struct CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C  : public RuntimeObject
{
	// OVR.OpenVR.IVRSpatialAnchors OVR.OpenVR.CVRSpatialAnchors::FnTable
	IVRSpatialAnchors_tFAD20563C0543E5ABE191F247BCF14F768DD7E03 ___FnTable_0;
};

// OVR.OpenVR.CVRSystem
struct CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A  : public RuntimeObject
{
	// OVR.OpenVR.IVRSystem OVR.OpenVR.CVRSystem::FnTable
	IVRSystem_t6B77F1167E7DA3724D1593D1046A529EDB2A5F58 ___FnTable_0;
};

// OVR.OpenVR.CVRTrackedCamera
struct CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D  : public RuntimeObject
{
	// OVR.OpenVR.IVRTrackedCamera OVR.OpenVR.CVRTrackedCamera::FnTable
	IVRTrackedCamera_t3D8EA01AFEB0F5395F4449B6C33730D531B32E06 ___FnTable_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// OVR.OpenVR.SpatialAnchorPose_t
struct SpatialAnchorPose_t_tEE076016CB29802BF44A08A9EB016337343C9A89 
{
	// OVR.OpenVR.HmdMatrix34_t OVR.OpenVR.SpatialAnchorPose_t::mAnchorToAbsoluteTracking
	HmdMatrix34_t_t63D86814DA8F9D9DC7AA3143CE8C95454D5709F9 ___mAnchorToAbsoluteTracking_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Assets.OVR.Scripts.FixMethodDelegate
struct FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.OVRPointerEventData
struct OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D  : public PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB
{
	// UnityEngine.Ray UnityEngine.EventSystems.OVRPointerEventData::worldSpaceRay
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___worldSpaceRay_33;
	// UnityEngine.Vector2 UnityEngine.EventSystems.OVRPointerEventData::swipeStart
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___swipeStart_34;
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_18;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_19;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_20;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_21;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// System.EntryPointNotFoundException
struct EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Oculus.XR.OculusXRFeature
struct OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform OVRCameraRig::<trackingSpace>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackingSpaceU3Ek__BackingField_4;
	// UnityEngine.Transform OVRCameraRig::<leftEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftEyeAnchorU3Ek__BackingField_5;
	// UnityEngine.Transform OVRCameraRig::<centerEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CcenterEyeAnchorU3Ek__BackingField_6;
	// UnityEngine.Transform OVRCameraRig::<rightEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightEyeAnchorU3Ek__BackingField_7;
	// UnityEngine.Transform OVRCameraRig::<leftHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandAnchorU3Ek__BackingField_8;
	// UnityEngine.Transform OVRCameraRig::<rightHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandAnchorU3Ek__BackingField_9;
	// UnityEngine.Transform OVRCameraRig::<leftControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftControllerAnchorU3Ek__BackingField_10;
	// UnityEngine.Transform OVRCameraRig::<rightControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightControllerAnchorU3Ek__BackingField_11;
	// UnityEngine.Transform OVRCameraRig::<trackerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackerAnchorU3Ek__BackingField_12;
	// System.Action`1<OVRCameraRig> OVRCameraRig::UpdatedAnchors
	Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* ___UpdatedAnchors_13;
	// System.Boolean OVRCameraRig::usePerEyeCameras
	bool ___usePerEyeCameras_14;
	// System.Boolean OVRCameraRig::useFixedUpdateForTracking
	bool ___useFixedUpdateForTracking_15;
	// System.Boolean OVRCameraRig::disableEyeAnchorCameras
	bool ___disableEyeAnchorCameras_16;
	// System.Boolean OVRCameraRig::_skipUpdate
	bool ____skipUpdate_17;
	// System.String OVRCameraRig::trackingSpaceName
	String_t* ___trackingSpaceName_18;
	// System.String OVRCameraRig::trackerAnchorName
	String_t* ___trackerAnchorName_19;
	// System.String OVRCameraRig::leftEyeAnchorName
	String_t* ___leftEyeAnchorName_20;
	// System.String OVRCameraRig::centerEyeAnchorName
	String_t* ___centerEyeAnchorName_21;
	// System.String OVRCameraRig::rightEyeAnchorName
	String_t* ___rightEyeAnchorName_22;
	// System.String OVRCameraRig::leftHandAnchorName
	String_t* ___leftHandAnchorName_23;
	// System.String OVRCameraRig::rightHandAnchorName
	String_t* ___rightHandAnchorName_24;
	// System.String OVRCameraRig::leftControllerAnchorName
	String_t* ___leftControllerAnchorName_25;
	// System.String OVRCameraRig::rightControllerAnchorName
	String_t* ___rightControllerAnchorName_26;
	// UnityEngine.Camera OVRCameraRig::_centerEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____centerEyeCamera_27;
	// UnityEngine.Camera OVRCameraRig::_leftEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____leftEyeCamera_28;
	// UnityEngine.Camera OVRCameraRig::_rightEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____rightEyeCamera_29;
};

// OVRCursor
struct OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// System.Boolean UnityEngine.EventSystems.BaseInputModule::m_SendPointerHoverToParent
	bool ___m_SendPointerHoverToParent_5;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_6;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_7;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_9;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_10;
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_7;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_BlockingMask_8;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___m_RaycastResults_10;
};

struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___s_SortedGraphics_11;
};

// UnityEngine.EventSystems.OVRPhysicsRaycaster
struct OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// UnityEngine.LayerMask UnityEngine.EventSystems.OVRPhysicsRaycaster::m_EventMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_EventMask_6;
	// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster::sortOrder
	int32_t ___sortOrder_7;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_15;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_16;
};

// UnityEngine.EventSystems.OVRInputModule
struct OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// UnityEngine.Transform UnityEngine.EventSystems.OVRInputModule::rayTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rayTransform_17;
	// OVRCursor UnityEngine.EventSystems.OVRInputModule::m_Cursor
	OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A* ___m_Cursor_18;
	// OVRInput/Button UnityEngine.EventSystems.OVRInputModule::joyPadClickButton
	int32_t ___joyPadClickButton_19;
	// UnityEngine.KeyCode UnityEngine.EventSystems.OVRInputModule::gazeClickKey
	int32_t ___gazeClickKey_20;
	// System.Boolean UnityEngine.EventSystems.OVRInputModule::performSphereCastForGazepointer
	bool ___performSphereCastForGazepointer_21;
	// System.Boolean UnityEngine.EventSystems.OVRInputModule::useRightStickScroll
	bool ___useRightStickScroll_22;
	// System.Single UnityEngine.EventSystems.OVRInputModule::rightStickDeadZone
	float ___rightStickDeadZone_23;
	// System.Boolean UnityEngine.EventSystems.OVRInputModule::useSwipeScroll
	bool ___useSwipeScroll_24;
	// System.Single UnityEngine.EventSystems.OVRInputModule::swipeDragThreshold
	float ___swipeDragThreshold_25;
	// System.Single UnityEngine.EventSystems.OVRInputModule::swipeDragScale
	float ___swipeDragScale_26;
	// System.Boolean UnityEngine.EventSystems.OVRInputModule::InvertSwipeXAxis
	bool ___InvertSwipeXAxis_27;
	// OVRRaycaster UnityEngine.EventSystems.OVRInputModule::activeGraphicRaycaster
	OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* ___activeGraphicRaycaster_28;
	// System.Single UnityEngine.EventSystems.OVRInputModule::angleDragThreshold
	float ___angleDragThreshold_29;
	// System.Single UnityEngine.EventSystems.OVRInputModule::m_SpherecastRadius
	float ___m_SpherecastRadius_30;
	// System.Single UnityEngine.EventSystems.OVRInputModule::m_NextAction
	float ___m_NextAction_31;
	// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_32;
	// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_33;
	// System.String UnityEngine.EventSystems.OVRInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_34;
	// System.String UnityEngine.EventSystems.OVRInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_35;
	// System.String UnityEngine.EventSystems.OVRInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_36;
	// System.String UnityEngine.EventSystems.OVRInputModule::m_CancelButton
	String_t* ___m_CancelButton_37;
	// System.Single UnityEngine.EventSystems.OVRInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_38;
	// System.Boolean UnityEngine.EventSystems.OVRInputModule::m_AllowActivationOnMobileDevice
	bool ___m_AllowActivationOnMobileDevice_39;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData> UnityEngine.EventSystems.OVRInputModule::m_VRRayPointerData
	Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* ___m_VRRayPointerData_40;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.OVRInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_41;
};

// OVRRaycaster
struct OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182  : public GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B
{
	// UnityEngine.GameObject OVRRaycaster::pointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointer_12;
	// System.Int32 OVRRaycaster::sortOrder
	int32_t ___sortOrder_13;
	// UnityEngine.Canvas OVRRaycaster::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> OVRRaycaster::m_RaycastResults
	List_1_t9F19053F72A3E5B96604F70A14B49B27869D5C97* ___m_RaycastResults_15;
};

struct OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_StaticFields
{
	// System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> OVRRaycaster::s_SortedGraphics
	List_1_t9F19053F72A3E5B96604F70A14B49B27869D5C97* ___s_SortedGraphics_16;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 m_Items[1];

	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927* ___functor2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m47C22A77611C31042CA566EE345A4A1017A40A65_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927* ___callbackFunction2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisRuntimeObject_m86588AD6FDDC9670CE26E5111D23F49B821330C5_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m36EAA21C7F6D0230006DB0A6024580A54685757C_gshared (Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<UnityEngine.RaycastHit>(T[],System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_gshared (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___array0, Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* ___comparison1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;

// System.UInt32 OVR.OpenVR.OpenVRInterop::InitInternal(OVR.OpenVR.EVRInitError&,OVR.OpenVR.EVRApplicationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVRInterop_InitInternal_m2665536BA84D167E89155D65993EAC00951054FD (int32_t* ___peError0, int32_t ___eApplicationType1, const RuntimeMethod* method) ;
// System.UInt32 OVR.OpenVR.OpenVRInterop::InitInternal2(OVR.OpenVR.EVRInitError&,OVR.OpenVR.EVRApplicationType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVRInterop_InitInternal2_mE04F2583494FF480713CDEEC9D8FF826F3BEB1A2 (int32_t* ___peError0, int32_t ___eApplicationType1, String_t* ___pStartupInfo2, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.OpenVRInterop::ShutdownInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenVRInterop_ShutdownInternal_m450D042F95B365E91AAB3F718EB1858234F218D9 (const RuntimeMethod* method) ;
// System.Boolean OVR.OpenVR.OpenVRInterop::IsHmdPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenVRInterop_IsHmdPresent_mABA5F20535ECCFFF121C0DC7C538D1A1AC3B9490 (const RuntimeMethod* method) ;
// System.Boolean OVR.OpenVR.OpenVRInterop::IsRuntimeInstalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenVRInterop_IsRuntimeInstalled_mF545A675398A5C9BB1D6ACDBCD65004B59552EB0 (const RuntimeMethod* method) ;
// System.IntPtr OVR.OpenVR.OpenVRInterop::GetStringForHmdError(OVR.OpenVR.EVRInitError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OpenVRInterop_GetStringForHmdError_m8FF399213281B5199E32C93EA597FBCDAEB39C35 (int32_t ___error0, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.IntPtr OVR.OpenVR.OpenVRInterop::GetGenericInterface(System.String,OVR.OpenVR.EVRInitError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5 (String_t* ___pchInterfaceVersion0, int32_t* ___peError1, const RuntimeMethod* method) ;
// System.Boolean OVR.OpenVR.OpenVRInterop::IsInterfaceVersionValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenVRInterop_IsInterfaceVersionValid_m785F253730F9886BBF3D7DA26C806B69F4A2149D (String_t* ___pchInterfaceVersion0, const RuntimeMethod* method) ;
// System.UInt32 OVR.OpenVR.OpenVRInterop::GetInitToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVRInterop_GetInitToken_m9CB8AF9977E98367AAD96EBD97A9488C8AFB3F97 (const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.OpenVR/COpenVRContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void COpenVRContext__ctor_mE9D5B40D5D13661C47719EF7E915A29DBF38F274 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.OpenVR/COpenVRContext OVR.OpenVR.OpenVR::get_OpenVRInternal_ModuleContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6 (const RuntimeMethod* method) ;
// OVR.OpenVR.CVRSystem OVR.OpenVR.OpenVR/COpenVRContext::VRSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* COpenVRContext_VRSystem_mFB4F01AAC348CCF777085B2F031D023DF29AFD36 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVRChaperone OVR.OpenVR.OpenVR/COpenVRContext::VRChaperone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* COpenVRContext_VRChaperone_m2E2015F8AFDF49251648ACFF493224696DCB912B (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVRChaperoneSetup OVR.OpenVR.OpenVR/COpenVRContext::VRChaperoneSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* COpenVRContext_VRChaperoneSetup_mD9E462BC041FF70D74E103BE0F8C496E1356EAB5 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVRCompositor OVR.OpenVR.OpenVR/COpenVRContext::VRCompositor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* COpenVRContext_VRCompositor_m57C6BF74EA582D6B39DF4B69AE8FEBEF4810447E (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVROverlay OVR.OpenVR.OpenVR/COpenVRContext::VROverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* COpenVRContext_VROverlay_mC25A80B677698DB64B339087159707214FDA484D (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVRRenderModels OVR.OpenVR.OpenVR/COpenVRContext::VRRenderModels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* COpenVRContext_VRRenderModels_m409DC3B43EA44BC857DBFB17FF33AD4D1113F930 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVRExtendedDisplay OVR.OpenVR.OpenVR/COpenVRContext::VRExtendedDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* COpenVRContext_VRExtendedDisplay_m73C36537234B5CD4D6682EE708CC28E07993450E (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVRSettings OVR.OpenVR.OpenVR/COpenVRContext::VRSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* COpenVRContext_VRSettings_m7234ABD3808C7B377117ECA28630A289E6AB1117 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVRApplications OVR.OpenVR.OpenVR/COpenVRContext::VRApplications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* COpenVRContext_VRApplications_mB225C5178C02C9B3F7010692B614D05CD1767CA6 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVRScreenshots OVR.OpenVR.OpenVR/COpenVRContext::VRScreenshots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* COpenVRContext_VRScreenshots_m8B1495095AF7C3843C72A658316835828ED7BA8E (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVRTrackedCamera OVR.OpenVR.OpenVR/COpenVRContext::VRTrackedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* COpenVRContext_VRTrackedCamera_m856B515B62039CF95DB2768529F91D2A8E9E6F26 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVRInput OVR.OpenVR.OpenVR/COpenVRContext::VRInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* COpenVRContext_VRInput_m5DEA01019BFC28E75178B65CBC7159A45B5C0339 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// OVR.OpenVR.CVRSpatialAnchors OVR.OpenVR.OpenVR/COpenVRContext::VRSpatialAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* COpenVRContext_VRSpatialAnchors_m14BBE3ECDD1290A2322A92340C80DA5AF1400786 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// System.UInt32 OVR.OpenVR.OpenVR::InitInternal2(OVR.OpenVR.EVRInitError&,OVR.OpenVR.EVRApplicationType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVR_InitInternal2_m15578451924C0230AE669E766B30312AE86AF464 (int32_t* ___peError0, int32_t ___eApplicationType1, String_t* ___pchStartupInfo2, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.OpenVR::set_VRToken(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenVR_set_VRToken_mC7E9BB9F5F6A01C78347241B0BE75343741BF768_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 OVR.OpenVR.OpenVR::InitInternal(OVR.OpenVR.EVRInitError&,OVR.OpenVR.EVRApplicationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVR_InitInternal_mE3F867F429E23B03889D2E28C99A9411DDB6EE38 (int32_t* ___peError0, int32_t ___eApplicationType1, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.OpenVR/COpenVRContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void COpenVRContext_Clear_m51E0244AAD6E1EFADB69A34AAF713D8E9EB6FA73 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// System.Boolean OVR.OpenVR.OpenVR::IsInterfaceVersionValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenVR_IsInterfaceVersionValid_mA6D387D4DD48B7EAB28F45A66DE73041775D9838 (String_t* ___pchInterfaceVersion0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.OpenVR::ShutdownInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenVR_ShutdownInternal_m469DC26C55EBCCF5BE670A3E95449501BDB0F3AE (const RuntimeMethod* method) ;
// OVR.OpenVR.CVRSystem OVR.OpenVR.OpenVR::get_System()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* OpenVR_get_System_m3E623FF7D408DACC163D9CB6CD2F9193CB5E51EA (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.UInt32 OVR.OpenVR.OpenVR::get_VRToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t OpenVR_get_VRToken_mCD564FB45B8B2975059C0829310A9EE0653931A4_inline (const RuntimeMethod* method) ;
// System.UInt32 OVR.OpenVR.OpenVR::GetInitToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVR_GetInitToken_mC0921D780224352282C1DFC4A3958E9158FACEC3 (const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.OpenVR/COpenVRContext::CheckClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRSystem::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRSystem__ctor_mFEA433AFD11D20C3FA69758D9C2C76DC2526A677 (CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRChaperone::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRChaperone__ctor_mD0A8DF59B14B9AB0174F4D2C1B6DE68AE9F24E8C (CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRChaperoneSetup::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRChaperoneSetup__ctor_mB5288467BB57852219EECE351CDF8E76F67212DA (CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRCompositor::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRCompositor__ctor_mD6542AAFD23DDF760AA0E44892218659A7A0F209 (CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVROverlay::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVROverlay__ctor_mAFDD8A03579398D5CF2194086C9CFBDF774E36AB (CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRRenderModels::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRRenderModels__ctor_mBB5574FD94741A582017DE3F74DB8987B21DF688 (CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRExtendedDisplay::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRExtendedDisplay__ctor_m28DBF83045329DA0E709A057BAA99FCAE6A4C727 (CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRSettings::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRSettings__ctor_m0E1E80DC9504F30ECD80B0BD8A3CFBEA46F10884 (CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRApplications::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRApplications__ctor_mA23CABB9CB976C75552E6A7EF93C323CDC2897A2 (CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRScreenshots::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRScreenshots__ctor_mBF3A0C16F332C4F518572295B55A1BE418DF874A (CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRTrackedCamera::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRTrackedCamera__ctor_mBBE912CB35A38F53B963E8D495650876DE7F3F38 (CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRInput::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRInput__ctor_m4F41D0D9B884BC130C4854CB531D1820C00C6273 (CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void OVR.OpenVR.CVRSpatialAnchors::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CVRSpatialAnchors__ctor_m632B95E1D9EBBB0C8A56465372C79FC6CE5B5CB6 (CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* __this, intptr_t ___pInterface0, const RuntimeMethod* method) ;
// System.Void Assets.OVR.Scripts.Record::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_m737CDD176B83A2905E1D1A6D8BC7C01430161BF3 (Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2* __this, int32_t ___order0, String_t* ___cat1, String_t* ___msg2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::.ctor()
inline void Dictionary_2__ctor_m945703AD572432985F6A555BBE2C516D84D78989 (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState__ctor_mF4A8041A86E50D91202770E73CE0DAF12BB207D9 (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerInputModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerInputModule__ctor_mBF074492478BFC24F87EF2C941D6C11A8ACDAF11 (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_mousePresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_mousePresent_mAD77FFD987CD5B998AFAD4DAECADBC76034026BF (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseInputModule_ShouldActivateModule_m51B70F9097EF7FEB20B62D4D775F7FEA853185A1 (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputModule_ActivateModule_m2C693E95727E13FDF06D54FA8762A040175AC3BA (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33 (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_firstSelectedGameObject_m15FB056EE7A99D8DD5891D40A6E3EF18719F0553 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___pointer1, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputModule_DeactivateModule_mAE698307DADBE4DE8A26BD3DE5F3F7E3D75B385D (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRInputModule::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ClearSelection_m8BB4DB17CCE3F2897281E77858D85C9A8E218906 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::get_submitHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F* ExecuteEvents_get_submitHandler_mDCAAA40F0F6AEA385B375C1839B4DC37E5FC4A7A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.ISubmitHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75_mA153EBDD6059AC5FF4C3ADD0A0628D816CD112CC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::get_cancelHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA* ExecuteEvents_get_cancelHandler_mBCDFD10C95FC2BBC5DC5A512FEA1BBEECC2DAE12 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.ICancelHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244_m6BCE3E1FAE7620DC9F22722FA5CCE5AB35BAA5B0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::AllowMoveEventProcessing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_AllowMoveEventProcessing_mCE84D054A5F4C27EFBACAAD16D1EDCA6F524F508 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::GetRawMoveVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_GetRawMoveVector_mAD07DA87FE40D256FAD36721214E8E5F554BC605 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::get_moveVector()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 AxisEventData_get_moveVector_m7979B5CF62B6B3B0C5F2DA8B328C499ED80ECC41_inline (AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::get_moveHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013* ExecuteEvents_get_moveHandler_mF717824AB0018BBED3C2DF3C67486E3B2B3836D2 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IMoveHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB_m77205DFCC4110B95CC241F556BE89F612EFFD2CA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::get_updateSelectedHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* ExecuteEvents_get_updateSelectedHandler_m8AF7543437082AD4F5690AAA77F2623AE28C3D09 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IUpdateSelectedHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m8AFB13536731ABE80F6AE964DA907EE6B27F055E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1 (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::PressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseButtonEventData_PressedThisFrame_mEE5DC95537AAEB346C57DCA85917E0701A44388D (MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerEventDataExtension::IsVRPointer(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEventData0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventDataExtension::SetSwipeStart(UnityEngine.EventSystems.PointerEventData,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventDataExtension_SetSwipeStart_m3FD15231D3C0B9BC95B84E7048FF8289CF4359C5 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEventData0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start1, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerInputModule::DeselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerInputModule_DeselectIfSelectionChanged_m8F111DD2317E33C4F0498F651BC52BD5C984A95B (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentOverGo0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___pointerEvent1, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerDownHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ExecuteEvents_get_pointerDownHandler_mA67CE33D32540939A273DB88D6456C7FE43C13EF (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mF031AC46543C02039764EDB1B0673DFA36B1F58C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m47C22A77611C31042CA566EE345A4A1017A40A65_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisRuntimeObject_m86588AD6FDDC9670CE26E5111D23F49B821330C5_gshared)(___root0, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_lastPress_m46720C62503214A44EE947679A8BA307BC2AEEDC_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_clickTime_m5ABE0298E8CEF28B6BD7E750E940756CD78AB96E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_clickCount_m3977011C09DB9F904B1AAC3708B821B8D6AC0F9F_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IDragHandler>(UnityEngine.GameObject)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m9AA4E18082F53C60962F70D75570F1D400C37FBA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisRuntimeObject_m86588AD6FDDC9670CE26E5111D23F49B821330C5_gshared)(___root0, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_initializePotentialDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* ExecuteEvents_get_initializePotentialDrag_m16F4CD40448FB1B78F6683AA26A9CC574F48AFBD (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IInitializePotentialDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mABD9E1ECC8C04235760B3855DF03F2308F62071C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___target0, ___eventData1, ___functor2, method);
}
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::ReleasedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseButtonEventData_ReleasedThisFrame_m5AD4F06D1CA6E0ACD6E84EEFAD4FB112098AFD51 (MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerUpHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ExecuteEvents_get_pointerUpHandler_m51B83B4AD7498D6F7A2CBD5F2331E91A37AE4CF2 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___target0, ___eventData1, ___functor2, method);
}
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_eligibleForClick_m4B01A1640C694FD7421BDFB19CF763BC85672C8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerClickHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ExecuteEvents_get_pointerClickHandler_m0017F9D1EAF7C02CDDB4C148C92D6685D88EA8D5 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::get_dropHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ExecuteEvents_get_dropHandler_m8E00FA7361DE68780ACEB365E6B14206A2180D03 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IDropHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m0C0E2A729F88D6AB5AC2B4FD9C4E33D181A52A57 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m47C22A77611C31042CA566EE345A4A1017A40A65_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_endDragHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ExecuteEvents_get_endDragHandler_mE78FEEEAE114635E416FF1FE33C851E62B60555B (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IEndDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m6AA443D4F53AF0FEBAC269F761A158635243467E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298 (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___currentPointerData0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newEnterTarget1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyPressesThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseState_AnyPressesThisFrame_m4887FF61D58D641496B95C83710C8A4E841970F3 (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyReleasesThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseState_AnyReleasesThisFrame_m4FBA37A12735418AD0970F11BC44850517B05E93 (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51 (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* __this, int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::get_eventData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F (ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::UseMouse(System.Boolean,System.Boolean,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_UseMouse_mF84F562B4F48BD85BC13A20D9C231DDEF0C9B710 (bool ___pressed0, bool ___released1, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerData2, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ProcessMousePress_m8FB12642E4586D7C5F71ECFA5E56ABE3FFE834E9 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ___data0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IScrollHandler>(UnityEngine.GameObject)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m3BFE4214B6075DAE2F291E508DC912DC72262D2E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisRuntimeObject_m86588AD6FDDC9670CE26E5111D23F49B821330C5_gshared)(___root0, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::get_scrollHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65* ExecuteEvents_get_scrollHandler_m51E902070611D3F81AD5F1F5762AE2C48E84AFE2 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IScrollHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m764A9EE16005FFF9BB7A28EF762E6EB9CFDDA7B9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65* ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m47C22A77611C31042CA566EE345A4A1017A40A65_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendUpdateEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendUpdateEventToSelectedObject_mF799E28F265830EDBFC991825BEB97D3448472C1 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_get_sendNavigationEvents_m8BA21E58E633B2C5B477E49DAABAD3C97A8158AF (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendMoveEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendMoveEventToSelectedObject_mF3C86101342F589244CDA3984DAAEC291C693081 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendSubmitEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendSubmitEventToSelectedObject_mBCBAAAC7FE36D0C8AC77C333EC6376C0BA13A00A (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRInputModule::ProcessMouseEvent(UnityEngine.EventSystems.PointerInputModule/MouseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ProcessMouseEvent_mEF8F3DCD9DEBD00901217A431B8ADD2D15C007BF (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___mouseData0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::IsPointerMoving(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_IsPointerMoving_m5D57E25B238B95FDD5BE45DA3A377529345FD186 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEvent0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventData_IsScrolling_mFB78E050A248CDF5221482334808B82500D0A564 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m2A24573C40622EB90B3DEFD32113AABC59940447 (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* __this, int32_t ___key0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B*, int32_t, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.EventSystems.OVRPointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPointerEventData__ctor_mF3624D599F08C10D0D2E14CB8E8016AEC1FFA1B9 (OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerId_m5B5FF54AB1DE7BD4454022A7C0535C618049BD9B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::Add(TKey,TValue)
inline void Dictionary_2_Add_m512E97E36FC083FBFAFE025842BE8237F6350ADA (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* __this, int32_t ___key0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B*, int32_t, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Values()
inline ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41* Dictionary_2_get_Values_m3B581D1E2D9D47BCC3513DC77CC6C6F8718F13DC (Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41* (*) (Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493*, const RuntimeMethod*))Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
inline Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294 ValueCollection_GetEnumerator_m0124B7611A2B03F480EB52872F7A1B24F0CA6EDC (ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294 (*) (ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41*, const RuntimeMethod*))ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::Dispose()
inline void Enumerator_Dispose_m9FC32AA198E53E701EEAF271527A221A8F363A86 (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294*, const RuntimeMethod*))Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Current()
inline PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* Enumerator_get_Current_m8515E9D5662F47A89C296550439BBD4DA548AE6A_inline (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294* __this, const RuntimeMethod* method)
{
	return ((  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* (*) (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294*, const RuntimeMethod*))Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::MoveNext()
inline bool Enumerator_MoveNext_mA415C7B94AC3728AFA7791318E9210FC5EEFAB58 (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294*, const RuntimeMethod*))Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::get_Values()
inline ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB* Dictionary_2_get_Values_m1E6873716F54341B48F90A1BAD7909BF8DF33429 (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB* (*) (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B*, const RuntimeMethod*))Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::GetEnumerator()
inline Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392 ValueCollection_GetEnumerator_m1F9346AEC811FD3F8FF694F13BAED581F93252EA (ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392 (*) (ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB*, const RuntimeMethod*))ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::Dispose()
inline void Enumerator_Dispose_m1CF97DE800C326E6EF6C7599AA385EC109C21ED3 (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392*, const RuntimeMethod*))Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::get_Current()
inline OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* Enumerator_get_Current_mA8B955F9BDD498641D4406EF93DD9B4325F2D642_inline (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392* __this, const RuntimeMethod* method)
{
	return ((  OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* (*) (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392*, const RuntimeMethod*))Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::MoveNext()
inline bool Enumerator_MoveNext_m66996C54FC3C3A499A738BD4A3E50CE3EAD5082B (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392*, const RuntimeMethod*))Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Clear()
inline void Dictionary_2_Clear_mBB95A511CAA4D6BCF1D6EC54722BCA4DA4B37CF9 (Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___fourCornersArray0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.OVRPointerEventData&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, int32_t ___id0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** ___data1, bool ___create2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::GetExtraScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_GetExtraScrollDelta_mE441287D8A96D1E47BF5B28F8E61CF9CEA888AC5 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___raycastResults1, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 BaseInputModule_FindFirstRaycast_mE07BDA14A7C9A8E3DFBFDAF449E5896597C9F6F5 (List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___candidates0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
inline void List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 OVRRaycaster::GetScreenPosition(UnityEngine.EventSystems.RaycastResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRRaycaster_GetScreenPosition_mE54FD696C615E1CFF7E7AE19F0F9B95AB084617A (OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___raycastResult0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.EventSystems.OVRInputModule::GetRectTransformNormal(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRInputModule_GetRectTransformNormal_mF03B37932F37A309381C3EBF51CAA0FE7C1BF348 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster::Spherecast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPhysicsRaycaster_Spherecast_m5C0B2A941C9D1F9C92A2AD1026510DC5D64E9945 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___resultAppendList1, float ___radius2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, int32_t, const RuntimeMethod*))List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRPhysicsRaycaster::GetScreenPos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRPhysicsRaycaster_GetScreenPos_mAD6CC9D4FC2F01C2CBFA281660E8BC7B3C3C0A84 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRInputModule::CopyFromTo(UnityEngine.EventSystems.OVRPointerEventData,UnityEngine.EventSystems.OVRPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_CopyFromTo_m7469C2E36FBE72A7109BC094DC3B19651698A691 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ___from0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ___to1, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton,UnityEngine.EventSystems.PointerEventData/FramePressState,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326 (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* __this, int32_t ___button0, int32_t ___stateForMouseButton1, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.PointerEventData&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerInputModule_GetPointerData_m8D1C52EE44136560312932072786A2B5AA2C8BE5 (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, int32_t ___id0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB** ___data1, bool ___create2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74 (const RuntimeMethod* method) ;
// System.Void OVRRaycaster::RaycastPointer(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRRaycaster_RaycastPointer_m5ECFC6B6EF2F57D5DE2C07AD91CEB698CE29E4BB (OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___resultAppendList1, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_CopyFromTo_m37C59AD69F91D8C3A407B94FC6D182F9B2F035C8 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___from0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___to1, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule::StateForMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerInputModule_StateForMouseButton_mED5B48F98F706160F97A26511FB82BD84DBAB0CF (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, int32_t ___buttonId0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_useDragThreshold_m3ED1F39E71630C9AB1F340C92F8FA39AA489E1C5_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventSystem_get_pixelDragThreshold_m2F7B0D1B5ACC63EB507FD7CCFE74F2B2804FF2E3 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventDataExtension::GetSwipeStart(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventDataExtension_GetSwipeStart_m09ED39DC9E87EDFB80926815E29A3B130E3CA586 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerPressRaycast_mEB1B974F5543F78162984E2924EF908E18CE3B5D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventData_IsPointerMoving_m281B3698E618D116F3D1E7473BADFAE5B67C834E (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::ShouldStartDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_ShouldStartDrag_mCF231D4DB00DDD77F5A5DCA8D35FBC1F47844AF6 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEvent0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::SwipeAdjustedPosition(UnityEngine.Vector2,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_SwipeAdjustedPosition_mA47A3CED9DE48B6338F6DF0D0D43245705962EEC (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___originalPosition0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEvent1, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_beginDragHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* ExecuteEvents_get_beginDragHandler_mB0BEAC09E4A8F31438B07FE68A5BF7267FF8C2FC (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IBeginDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m1543843C77436B385445DCDE0E472112C8E40F87 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_dragHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* ExecuteEvents_get_dragHandler_m9193926B9685C80C0560C2E105FF6150C4EAE507 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mAE71323F63A667FE0A4F8B9B0E27C6012B28FFE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___target0, ___eventData1, ___functor2, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean OVRInput::GetDown(OVRInput/Button,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_GetDown_mEC4F71AEC93D3AF1A041934CA4C61680C6DB9AC7 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean OVRInput::GetUp(OVRInput/Button,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_GetUp_m66B13613FF16CBAB8B0A77A5ADCFD1A3A68F3898 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 OVRInput::Get(OVRInput/Axis2D,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRaycaster__ctor_m1B6A963368E54C1E450BE15FAF1AE082142A1683 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<OVRCameraRig>()
inline OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* Component_GetComponent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m077B7F6A5755E612BD0ACA0BAD8F8FCAA9FB6E62 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera OVRCameraRig::get_leftEyeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* OVRCameraRig_get_leftEyeCamera_m1C1CA12F69226BE8B0AC3142DAF77BDED7DF27CD (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.EventSystems.PointerEventDataExtension::GetRay(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 PointerEventDataExtension_GetRay_m8C036451341B0C37A138E9D3BB509B9DFDCADD99 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEventData0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster::get_finalEventMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRPhysicsRaycaster_get_finalEventMask_m0870F8AB5B0021AB7BFE8A1CE5CC729E680484E2 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_RaycastAll_m4055619E0F7EFA04620EAA0517F8393C4EBCFE87 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float ___maxDistance1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m36EAA21C7F6D0230006DB0A6024580A54685757C (Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m36EAA21C7F6D0230006DB0A6024580A54685757C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Array::Sort<UnityEngine.RaycastHit>(T[],System.Comparison`1<T>)
inline void Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673 (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___array0, Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* ___comparison1, const RuntimeMethod* method)
{
	((  void (*) (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*, Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7*, const RuntimeMethod*))Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_gshared)(___array0, ___comparison1, method);
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.RaycastResult::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
inline void List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_SphereCastAll_m0886C4624531C71A2CC6A3196B9EAEE108C17CB5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float ___radius1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC1568EC2B965777FBA11D46651A32FB41491E2A (U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Ray::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Ray_ToString_m06274331D92120539B4C6E0D3747EE620DB468E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsNotNull<UnityEngine.EventSystems.OVRPointerEventData>(T)
inline void Assert_IsNotNull_TisOVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_mB058B605A1DAC76CD12D7D26B4436BF8B7C63590 (OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ___value0, const RuntimeMethod* method)
{
	((  void (*) (OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared)(___value0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::SetClientVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_SetClientVersion_m4090E8C9C4B6DCE29E0B4947BCEB6F943C1E14A5 (const RuntimeMethod* method) ;
// System.IntPtr OVRPlugin/UnityOpenXR::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityOpenXR_HookGetInstanceProcAddr_m47D995F8D369E3C5128B927468F0ABD95352EFD4 (intptr_t ___func0, const RuntimeMethod* method) ;
// System.Boolean OVRPlugin/UnityOpenXR::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityOpenXR_OnInstanceCreate_mD8C51F81DF5B66595890F4D53FD5C11B066E3AF5 (uint64_t ___xrInstance0, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnInstanceDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnInstanceDestroy_m434D377978F23755AEA67D5A447614023E0802CF (uint64_t ___xrInstance0, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionCreate_m1AC2B5B77ACF1FD2BDB44AD92902B86724284D1F (uint64_t ___xrSession0, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnAppSpaceChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnAppSpaceChange_m75150D53FE36E1F1063AB0C95AB5418BF155AD06 (uint64_t ___xrSpace0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionStateChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionStateChange_m0C99770FA4B4B984958C15BB609D093A8C9B0F46 (int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionBegin(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionBegin_m0422580F20229CC217DB02155FC2DC0D867F74CE (uint64_t ___xrSession0, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionEnd(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionEnd_mEC2BB76CD260EC200996264B816F8715C04EA755 (uint64_t ___xrSession0, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionExiting(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionExiting_m5A219E00988AF17792094B9D1E4B31F8FBC50DB1 (uint64_t ___xrSession0, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionDestroy_mE22528F3A18F2409377CD0862CC005D7F07442BD (uint64_t ___xrSession0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
// System.UInt32 OVR.OpenVR.OpenVR::InitInternal(OVR.OpenVR.EVRInitError&,OVR.OpenVR.EVRApplicationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVR_InitInternal_mE3F867F429E23B03889D2E28C99A9411DDB6EE38 (int32_t* ___peError0, int32_t ___eApplicationType1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// return OpenVRInterop.InitInternal(ref peError, eApplicationType);
		int32_t* L_0 = ___peError0;
		int32_t L_1 = ___eApplicationType1;
		uint32_t L_2;
		L_2 = OpenVRInterop_InitInternal_m2665536BA84D167E89155D65993EAC00951054FD(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		uint32_t L_3 = V_0;
		return L_3;
	}
}
// System.UInt32 OVR.OpenVR.OpenVR::InitInternal2(OVR.OpenVR.EVRInitError&,OVR.OpenVR.EVRApplicationType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVR_InitInternal2_m15578451924C0230AE669E766B30312AE86AF464 (int32_t* ___peError0, int32_t ___eApplicationType1, String_t* ___pchStartupInfo2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// return OpenVRInterop.InitInternal2(ref peError, eApplicationType, pchStartupInfo);
		int32_t* L_0 = ___peError0;
		int32_t L_1 = ___eApplicationType1;
		String_t* L_2 = ___pchStartupInfo2;
		uint32_t L_3;
		L_3 = OpenVRInterop_InitInternal2_mE04F2583494FF480713CDEEC9D8FF826F3BEB1A2(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void OVR.OpenVR.OpenVR::ShutdownInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenVR_ShutdownInternal_m469DC26C55EBCCF5BE670A3E95449501BDB0F3AE (const RuntimeMethod* method) 
{
	{
		// OpenVRInterop.ShutdownInternal();
		OpenVRInterop_ShutdownInternal_m450D042F95B365E91AAB3F718EB1858234F218D9(NULL);
		// }
		return;
	}
}
// System.Boolean OVR.OpenVR.OpenVR::IsHmdPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenVR_IsHmdPresent_m178A98315AC2097BF71963E1D03223DA302CE8BF (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return OpenVRInterop.IsHmdPresent();
		bool L_0;
		L_0 = OpenVRInterop_IsHmdPresent_mABA5F20535ECCFFF121C0DC7C538D1A1AC3B9490(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean OVR.OpenVR.OpenVR::IsRuntimeInstalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenVR_IsRuntimeInstalled_m0C444E7D9A36A3C2B7812D59DC2F66D1B332B8A4 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return OpenVRInterop.IsRuntimeInstalled();
		bool L_0;
		L_0 = OpenVRInterop_IsRuntimeInstalled_mF545A675398A5C9BB1D6ACDBCD65004B59552EB0(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String OVR.OpenVR.OpenVR::GetStringForHmdError(OVR.OpenVR.EVRInitError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OpenVR_GetStringForHmdError_mA0883891AEDC288BAA5670B33359D10C502A5F75 (int32_t ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Marshal.PtrToStringAnsi(OpenVRInterop.GetStringForHmdError(error));
		int32_t L_0 = ___error0;
		intptr_t L_1;
		L_1 = OpenVRInterop_GetStringForHmdError_m8FF399213281B5199E32C93EA597FBCDAEB39C35(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.IntPtr OVR.OpenVR.OpenVR::GetGenericInterface(System.String,OVR.OpenVR.EVRInitError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OpenVR_GetGenericInterface_m7D8E98D035EF8B81F68A97B78832147123E28483 (String_t* ___pchInterfaceVersion0, int32_t* ___peError1, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return OpenVRInterop.GetGenericInterface(pchInterfaceVersion, ref peError);
		String_t* L_0 = ___pchInterfaceVersion0;
		int32_t* L_1 = ___peError1;
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		intptr_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean OVR.OpenVR.OpenVR::IsInterfaceVersionValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenVR_IsInterfaceVersionValid_mA6D387D4DD48B7EAB28F45A66DE73041775D9838 (String_t* ___pchInterfaceVersion0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return OpenVRInterop.IsInterfaceVersionValid(pchInterfaceVersion);
		String_t* L_0 = ___pchInterfaceVersion0;
		bool L_1;
		L_1 = OpenVRInterop_IsInterfaceVersionValid_m785F253730F9886BBF3D7DA26C806B69F4A2149D(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.UInt32 OVR.OpenVR.OpenVR::GetInitToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVR_GetInitToken_mC0921D780224352282C1DFC4A3958E9158FACEC3 (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// return OpenVRInterop.GetInitToken();
		uint32_t L_0;
		L_0 = OpenVRInterop_GetInitToken_m9CB8AF9977E98367AAD96EBD97A9488C8AFB3F97(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 OVR.OpenVR.OpenVR::get_VRToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenVR_get_VRToken_mCD564FB45B8B2975059C0829310A9EE0653931A4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static uint VRToken { get; set; }
		uint32_t L_0 = ((OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_StaticFields*)il2cpp_codegen_static_fields_for(OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var))->___U3CVRTokenU3Ek__BackingField_219;
		return L_0;
	}
}
// System.Void OVR.OpenVR.OpenVR::set_VRToken(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenVR_set_VRToken_mC7E9BB9F5F6A01C78347241B0BE75343741BF768 (uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static uint VRToken { get; set; }
		uint32_t L_0 = ___value0;
		((OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_StaticFields*)il2cpp_codegen_static_fields_for(OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var))->___U3CVRTokenU3Ek__BackingField_219 = L_0;
		return;
	}
}
// OVR.OpenVR.OpenVR/COpenVRContext OVR.OpenVR.OpenVR::get_OpenVRInternal_ModuleContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* V_1 = NULL;
	{
		// if (_OpenVRInternal_ModuleContext == null)
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0 = ((OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_StaticFields*)il2cpp_codegen_static_fields_for(OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var))->____OpenVRInternal_ModuleContext_221;
		V_0 = (bool)((((RuntimeObject*)(COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// _OpenVRInternal_ModuleContext = new COpenVRContext();
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_2 = (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D*)il2cpp_codegen_object_new(COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		COpenVRContext__ctor_mE9D5B40D5D13661C47719EF7E915A29DBF38F274(L_2, NULL);
		((OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_StaticFields*)il2cpp_codegen_static_fields_for(OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var))->____OpenVRInternal_ModuleContext_221 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_StaticFields*)il2cpp_codegen_static_fields_for(OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var))->____OpenVRInternal_ModuleContext_221), (void*)L_2);
	}

IL_0017:
	{
		// return _OpenVRInternal_ModuleContext;
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_3 = ((OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_StaticFields*)il2cpp_codegen_static_fields_for(OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var))->____OpenVRInternal_ModuleContext_221;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_4 = V_1;
		return L_4;
	}
}
// OVR.OpenVR.CVRSystem OVR.OpenVR.OpenVR::get_System()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* OpenVR_get_System_m3E623FF7D408DACC163D9CB6CD2F9193CB5E51EA (const RuntimeMethod* method) 
{
	CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* V_0 = NULL;
	{
		// public static CVRSystem System { get { return OpenVRInternal_ModuleContext.VRSystem(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* L_1;
		L_1 = COpenVRContext_VRSystem_mFB4F01AAC348CCF777085B2F031D023DF29AFD36(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRSystem System { get { return OpenVRInternal_ModuleContext.VRSystem(); } }
		CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRChaperone OVR.OpenVR.OpenVR::get_Chaperone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* OpenVR_get_Chaperone_mF7F84491320C4C7F16851A3AECE99E954D4664E7 (const RuntimeMethod* method) 
{
	CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* V_0 = NULL;
	{
		// public static CVRChaperone Chaperone { get { return OpenVRInternal_ModuleContext.VRChaperone(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* L_1;
		L_1 = COpenVRContext_VRChaperone_m2E2015F8AFDF49251648ACFF493224696DCB912B(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRChaperone Chaperone { get { return OpenVRInternal_ModuleContext.VRChaperone(); } }
		CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRChaperoneSetup OVR.OpenVR.OpenVR::get_ChaperoneSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* OpenVR_get_ChaperoneSetup_mB86A19D56D2B2DD6E7B817A11C11C7462F6AAFD8 (const RuntimeMethod* method) 
{
	CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* V_0 = NULL;
	{
		// public static CVRChaperoneSetup ChaperoneSetup { get { return OpenVRInternal_ModuleContext.VRChaperoneSetup(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* L_1;
		L_1 = COpenVRContext_VRChaperoneSetup_mD9E462BC041FF70D74E103BE0F8C496E1356EAB5(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRChaperoneSetup ChaperoneSetup { get { return OpenVRInternal_ModuleContext.VRChaperoneSetup(); } }
		CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRCompositor OVR.OpenVR.OpenVR::get_Compositor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* OpenVR_get_Compositor_m029FB3CBC26F2F6CE377EBF065DDF54F47BDFE3E (const RuntimeMethod* method) 
{
	CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* V_0 = NULL;
	{
		// public static CVRCompositor Compositor { get { return OpenVRInternal_ModuleContext.VRCompositor(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* L_1;
		L_1 = COpenVRContext_VRCompositor_m57C6BF74EA582D6B39DF4B69AE8FEBEF4810447E(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRCompositor Compositor { get { return OpenVRInternal_ModuleContext.VRCompositor(); } }
		CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVROverlay OVR.OpenVR.OpenVR::get_Overlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* OpenVR_get_Overlay_m5EC60FDA4DA7BEC8A260FF9BA611F437E0953672 (const RuntimeMethod* method) 
{
	CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* V_0 = NULL;
	{
		// public static CVROverlay Overlay { get { return OpenVRInternal_ModuleContext.VROverlay(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* L_1;
		L_1 = COpenVRContext_VROverlay_mC25A80B677698DB64B339087159707214FDA484D(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVROverlay Overlay { get { return OpenVRInternal_ModuleContext.VROverlay(); } }
		CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRRenderModels OVR.OpenVR.OpenVR::get_RenderModels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* OpenVR_get_RenderModels_m345A8E505CAD870D2145554A450093C21198B6EF (const RuntimeMethod* method) 
{
	CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* V_0 = NULL;
	{
		// public static CVRRenderModels RenderModels { get { return OpenVRInternal_ModuleContext.VRRenderModels(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* L_1;
		L_1 = COpenVRContext_VRRenderModels_m409DC3B43EA44BC857DBFB17FF33AD4D1113F930(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRRenderModels RenderModels { get { return OpenVRInternal_ModuleContext.VRRenderModels(); } }
		CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRExtendedDisplay OVR.OpenVR.OpenVR::get_ExtendedDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* OpenVR_get_ExtendedDisplay_m3180E8D78ADE72077EB28C3D6EC69F832EBA4658 (const RuntimeMethod* method) 
{
	CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* V_0 = NULL;
	{
		// public static CVRExtendedDisplay ExtendedDisplay { get { return OpenVRInternal_ModuleContext.VRExtendedDisplay(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* L_1;
		L_1 = COpenVRContext_VRExtendedDisplay_m73C36537234B5CD4D6682EE708CC28E07993450E(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRExtendedDisplay ExtendedDisplay { get { return OpenVRInternal_ModuleContext.VRExtendedDisplay(); } }
		CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRSettings OVR.OpenVR.OpenVR::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* OpenVR_get_Settings_mEA3226083DD26C27BD431CD183FA9744CAFC6FBD (const RuntimeMethod* method) 
{
	CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* V_0 = NULL;
	{
		// public static CVRSettings Settings { get { return OpenVRInternal_ModuleContext.VRSettings(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* L_1;
		L_1 = COpenVRContext_VRSettings_m7234ABD3808C7B377117ECA28630A289E6AB1117(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRSettings Settings { get { return OpenVRInternal_ModuleContext.VRSettings(); } }
		CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRApplications OVR.OpenVR.OpenVR::get_Applications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* OpenVR_get_Applications_m9B86C8B9F93167C4102269896C5073F0CDCD5BFE (const RuntimeMethod* method) 
{
	CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* V_0 = NULL;
	{
		// public static CVRApplications Applications { get { return OpenVRInternal_ModuleContext.VRApplications(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* L_1;
		L_1 = COpenVRContext_VRApplications_mB225C5178C02C9B3F7010692B614D05CD1767CA6(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRApplications Applications { get { return OpenVRInternal_ModuleContext.VRApplications(); } }
		CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRScreenshots OVR.OpenVR.OpenVR::get_Screenshots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* OpenVR_get_Screenshots_mE551B4050FA10EA6DA2EE8D542A3A97F27A14423 (const RuntimeMethod* method) 
{
	CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* V_0 = NULL;
	{
		// public static CVRScreenshots Screenshots { get { return OpenVRInternal_ModuleContext.VRScreenshots(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* L_1;
		L_1 = COpenVRContext_VRScreenshots_m8B1495095AF7C3843C72A658316835828ED7BA8E(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRScreenshots Screenshots { get { return OpenVRInternal_ModuleContext.VRScreenshots(); } }
		CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRTrackedCamera OVR.OpenVR.OpenVR::get_TrackedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* OpenVR_get_TrackedCamera_m1592A1B6EDBD89A110F71ADA4247BFCB54293D8A (const RuntimeMethod* method) 
{
	CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* V_0 = NULL;
	{
		// public static CVRTrackedCamera TrackedCamera { get { return OpenVRInternal_ModuleContext.VRTrackedCamera(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* L_1;
		L_1 = COpenVRContext_VRTrackedCamera_m856B515B62039CF95DB2768529F91D2A8E9E6F26(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRTrackedCamera TrackedCamera { get { return OpenVRInternal_ModuleContext.VRTrackedCamera(); } }
		CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRInput OVR.OpenVR.OpenVR::get_Input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* OpenVR_get_Input_mCEA62714C394CA4663123B6BF51E77A4461CF6CF (const RuntimeMethod* method) 
{
	CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* V_0 = NULL;
	{
		// public static CVRInput Input { get { return OpenVRInternal_ModuleContext.VRInput(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* L_1;
		L_1 = COpenVRContext_VRInput_m5DEA01019BFC28E75178B65CBC7159A45B5C0339(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRInput Input { get { return OpenVRInternal_ModuleContext.VRInput(); } }
		CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRSpatialAnchors OVR.OpenVR.OpenVR::get_SpatialAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* OpenVR_get_SpatialAnchors_m8066719876EFC2E7576810ED31AAC95CAD96FA5D (const RuntimeMethod* method) 
{
	CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* V_0 = NULL;
	{
		// public static CVRSpatialAnchors SpatialAnchors { get { return OpenVRInternal_ModuleContext.VRSpatialAnchors(); } }
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_0;
		L_0 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_0);
		CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* L_1;
		L_1 = COpenVRContext_VRSpatialAnchors_m14BBE3ECDD1290A2322A92340C80DA5AF1400786(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// public static CVRSpatialAnchors SpatialAnchors { get { return OpenVRInternal_ModuleContext.VRSpatialAnchors(); } }
		CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* L_2 = V_0;
		return L_2;
	}
}
// OVR.OpenVR.CVRSystem OVR.OpenVR.OpenVR::Init(OVR.OpenVR.EVRInitError&,OVR.OpenVR.EVRApplicationType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* OpenVR_Init_mA6CD6FC88561FF4B56E8DC1E340D3579C240D7E5 (int32_t* ___peError0, int32_t ___eApplicationType1, String_t* ___pchStartupInfo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAEB7B8940990F9109863DC8E84D57775C55E0B6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* V_2 = NULL;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// VRToken = InitInternal2(ref peError, eApplicationType, pchStartupInfo);
		int32_t* L_0 = ___peError0;
		int32_t L_1 = ___eApplicationType1;
		String_t* L_2 = ___pchStartupInfo2;
		uint32_t L_3;
		L_3 = OpenVR_InitInternal2_m15578451924C0230AE669E766B30312AE86AF464(L_0, L_1, L_2, NULL);
		OpenVR_set_VRToken_mC7E9BB9F5F6A01C78347241B0BE75343741BF768_inline(L_3, NULL);
		goto IL_0025;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0013;
		}
		throw e;
	}

CATCH_0013:
	{// begin catch(System.EntryPointNotFoundException)
		// catch (EntryPointNotFoundException)
		// VRToken = InitInternal(ref peError, eApplicationType);
		int32_t* L_4 = ___peError0;
		int32_t L_5 = ___eApplicationType1;
		uint32_t L_6;
		L_6 = OpenVR_InitInternal_mE3F867F429E23B03889D2E28C99A9411DDB6EE38(L_4, L_5, NULL);
		OpenVR_set_VRToken_mC7E9BB9F5F6A01C78347241B0BE75343741BF768_inline(L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0025;
	}// end catch (depth: 1)

IL_0025:
	{
		// OpenVRInternal_ModuleContext.Clear();
		COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* L_7;
		L_7 = OpenVR_get_OpenVRInternal_ModuleContext_m709E03F3C4F61E9FDDADA10540E5F2E997D55AD6(NULL);
		NullCheck(L_7);
		COpenVRContext_Clear_m51E0244AAD6E1EFADB69A34AAF713D8E9EB6FA73(L_7, NULL);
		// if (peError != EVRInitError.None)
		int32_t* L_8 = ___peError0;
		int32_t L_9 = *((int32_t*)L_8);
		V_1 = (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		// return null;
		V_2 = (CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A*)NULL;
		goto IL_0067;
	}

IL_003d:
	{
		// bool bInterfaceValid = IsInterfaceVersionValid(IVRSystem_Version);
		bool L_11;
		L_11 = OpenVR_IsInterfaceVersionValid_mA6D387D4DD48B7EAB28F45A66DE73041775D9838(_stringLiteralDAEB7B8940990F9109863DC8E84D57775C55E0B6, NULL);
		V_0 = L_11;
		// if (!bInterfaceValid)
		bool L_12 = V_0;
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_005f;
		}
	}
	{
		// ShutdownInternal();
		OpenVR_ShutdownInternal_m469DC26C55EBCCF5BE670A3E95449501BDB0F3AE(NULL);
		// peError = EVRInitError.Init_InterfaceNotFound;
		int32_t* L_14 = ___peError0;
		*((int32_t*)L_14) = (int32_t)((int32_t)105);
		// return null;
		V_2 = (CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A*)NULL;
		goto IL_0067;
	}

IL_005f:
	{
		// return OpenVR.System;
		CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* L_15;
		L_15 = OpenVR_get_System_m3E623FF7D408DACC163D9CB6CD2F9193CB5E51EA(NULL);
		V_2 = L_15;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* L_16 = V_2;
		return L_16;
	}
}
// System.Void OVR.OpenVR.OpenVR::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenVR_Shutdown_mAE690261A33B64510E4C08F9CF416AC993DD6F22 (const RuntimeMethod* method) 
{
	{
		// ShutdownInternal();
		OpenVR_ShutdownInternal_m469DC26C55EBCCF5BE670A3E95449501BDB0F3AE(NULL);
		// }
		return;
	}
}
// System.Void OVR.OpenVR.OpenVR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenVR__ctor_mC15B753CDE11FCA2A80D94EF6429FF03E3628FAA (OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void OVR.OpenVR.OpenVR/COpenVRContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void COpenVRContext__ctor_mE9D5B40D5D13661C47719EF7E915A29DBF38F274 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	{
		// public COpenVRContext() { Clear(); }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public COpenVRContext() { Clear(); }
		COpenVRContext_Clear_m51E0244AAD6E1EFADB69A34AAF713D8E9EB6FA73(__this, NULL);
		// public COpenVRContext() { Clear(); }
		return;
	}
}
// System.Void OVR.OpenVR.OpenVR/COpenVRContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void COpenVRContext_Clear_m51E0244AAD6E1EFADB69A34AAF713D8E9EB6FA73 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	{
		// m_pVRSystem = null;
		__this->___m_pVRSystem_0 = (CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRSystem_0), (void*)(CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A*)NULL);
		// m_pVRChaperone = null;
		__this->___m_pVRChaperone_1 = (CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRChaperone_1), (void*)(CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7*)NULL);
		// m_pVRChaperoneSetup = null;
		__this->___m_pVRChaperoneSetup_2 = (CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRChaperoneSetup_2), (void*)(CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A*)NULL);
		// m_pVRCompositor = null;
		__this->___m_pVRCompositor_3 = (CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRCompositor_3), (void*)(CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D*)NULL);
		// m_pVROverlay = null;
		__this->___m_pVROverlay_4 = (CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVROverlay_4), (void*)(CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D*)NULL);
		// m_pVRRenderModels = null;
		__this->___m_pVRRenderModels_5 = (CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRRenderModels_5), (void*)(CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414*)NULL);
		// m_pVRExtendedDisplay = null;
		__this->___m_pVRExtendedDisplay_6 = (CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRExtendedDisplay_6), (void*)(CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE*)NULL);
		// m_pVRSettings = null;
		__this->___m_pVRSettings_7 = (CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRSettings_7), (void*)(CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA*)NULL);
		// m_pVRApplications = null;
		__this->___m_pVRApplications_8 = (CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRApplications_8), (void*)(CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA*)NULL);
		// m_pVRScreenshots = null;
		__this->___m_pVRScreenshots_9 = (CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRScreenshots_9), (void*)(CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23*)NULL);
		// m_pVRTrackedCamera = null;
		__this->___m_pVRTrackedCamera_10 = (CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRTrackedCamera_10), (void*)(CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D*)NULL);
		// m_pVRInput = null;
		__this->___m_pVRInput_11 = (CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRInput_11), (void*)(CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F*)NULL);
		// m_pVRSpatialAnchors = null;
		__this->___m_pVRSpatialAnchors_12 = (CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRSpatialAnchors_12), (void*)(CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C*)NULL);
		// }
		return;
	}
}
// System.Void OVR.OpenVR.OpenVR/COpenVRContext::CheckClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (VRToken != GetInitToken())
		uint32_t L_0;
		L_0 = OpenVR_get_VRToken_mCD564FB45B8B2975059C0829310A9EE0653931A4_inline(NULL);
		uint32_t L_1;
		L_1 = OpenVR_GetInitToken_mC0921D780224352282C1DFC4A3958E9158FACEC3(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// Clear();
		COpenVRContext_Clear_m51E0244AAD6E1EFADB69A34AAF713D8E9EB6FA73(__this, NULL);
		// VRToken = GetInitToken();
		uint32_t L_3;
		L_3 = OpenVR_GetInitToken_mC0921D780224352282C1DFC4A3958E9158FACEC3(NULL);
		OpenVR_set_VRToken_mC7E9BB9F5F6A01C78347241B0BE75343741BF768_inline(L_3, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// OVR.OpenVR.CVRSystem OVR.OpenVR.OpenVR/COpenVRContext::VRSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* COpenVRContext_VRSystem_mFB4F01AAC348CCF777085B2F031D023DF29AFD36 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15E7EEE9B4F65A10FF1CD01608CD7013FC21BE87);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRSystem == null)
		CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* L_0 = __this->___m_pVRSystem_0;
		V_0 = (bool)((((RuntimeObject*)(CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVRSystem_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteral15E7EEE9B4F65A10FF1CD01608CD7013FC21BE87, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRSystem = new CVRSystem(pInterface);
		intptr_t L_8 = V_2;
		CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* L_9 = (CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A*)il2cpp_codegen_object_new(CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRSystem__ctor_mFEA433AFD11D20C3FA69758D9C2C76DC2526A677(L_9, L_8, NULL);
		__this->___m_pVRSystem_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRSystem_0), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRSystem;
		CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* L_10 = __this->___m_pVRSystem_0;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRSystem_tD199D16B8A7CC7F19E6E0B5D9AE59156C2312B1A* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVRChaperone OVR.OpenVR.OpenVR/COpenVRContext::VRChaperone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* COpenVRContext_VRChaperone_m2E2015F8AFDF49251648ACFF493224696DCB912B (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9A60084C1546F7084A6B054A0BB5F950E25B26C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRChaperone == null)
		CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* L_0 = __this->___m_pVRChaperone_1;
		V_0 = (bool)((((RuntimeObject*)(CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVRChaperone_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteralE9A60084C1546F7084A6B054A0BB5F950E25B26C, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRChaperone = new CVRChaperone(pInterface);
		intptr_t L_8 = V_2;
		CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* L_9 = (CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7*)il2cpp_codegen_object_new(CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRChaperone__ctor_mD0A8DF59B14B9AB0174F4D2C1B6DE68AE9F24E8C(L_9, L_8, NULL);
		__this->___m_pVRChaperone_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRChaperone_1), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRChaperone;
		CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* L_10 = __this->___m_pVRChaperone_1;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRChaperone_t99B5BAE5EECAE65CD16E55AA9167ADD6E5895EC7* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVRChaperoneSetup OVR.OpenVR.OpenVR/COpenVRContext::VRChaperoneSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* COpenVRContext_VRChaperoneSetup_mD9E462BC041FF70D74E103BE0F8C496E1356EAB5 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AC7A6AADEE9F4144302CCF4A8EA733455CCA310);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRChaperoneSetup == null)
		CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* L_0 = __this->___m_pVRChaperoneSetup_2;
		V_0 = (bool)((((RuntimeObject*)(CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVRChaperoneSetup_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteral1AC7A6AADEE9F4144302CCF4A8EA733455CCA310, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRChaperoneSetup = new CVRChaperoneSetup(pInterface);
		intptr_t L_8 = V_2;
		CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* L_9 = (CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A*)il2cpp_codegen_object_new(CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRChaperoneSetup__ctor_mB5288467BB57852219EECE351CDF8E76F67212DA(L_9, L_8, NULL);
		__this->___m_pVRChaperoneSetup_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRChaperoneSetup_2), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRChaperoneSetup;
		CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* L_10 = __this->___m_pVRChaperoneSetup_2;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRChaperoneSetup_tEAFD9324CBCF526B4313763709704381091BA36A* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVRCompositor OVR.OpenVR.OpenVR/COpenVRContext::VRCompositor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* COpenVRContext_VRCompositor_m57C6BF74EA582D6B39DF4B69AE8FEBEF4810447E (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC329DDB1444A0B2400D046076774E23B4E59914E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRCompositor == null)
		CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* L_0 = __this->___m_pVRCompositor_3;
		V_0 = (bool)((((RuntimeObject*)(CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVRCompositor_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteralC329DDB1444A0B2400D046076774E23B4E59914E, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRCompositor = new CVRCompositor(pInterface);
		intptr_t L_8 = V_2;
		CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* L_9 = (CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D*)il2cpp_codegen_object_new(CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRCompositor__ctor_mD6542AAFD23DDF760AA0E44892218659A7A0F209(L_9, L_8, NULL);
		__this->___m_pVRCompositor_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRCompositor_3), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRCompositor;
		CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* L_10 = __this->___m_pVRCompositor_3;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRCompositor_tA4A7AE3CA079F0F40650854647B5A6616067138D* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVROverlay OVR.OpenVR.OpenVR/COpenVRContext::VROverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* COpenVRContext_VROverlay_mC25A80B677698DB64B339087159707214FDA484D (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B504484310EE713CED878912EAABC43761A6A94);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVROverlay == null)
		CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* L_0 = __this->___m_pVROverlay_4;
		V_0 = (bool)((((RuntimeObject*)(CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVROverlay_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteral3B504484310EE713CED878912EAABC43761A6A94, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVROverlay = new CVROverlay(pInterface);
		intptr_t L_8 = V_2;
		CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* L_9 = (CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D*)il2cpp_codegen_object_new(CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVROverlay__ctor_mAFDD8A03579398D5CF2194086C9CFBDF774E36AB(L_9, L_8, NULL);
		__this->___m_pVROverlay_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVROverlay_4), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVROverlay;
		CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* L_10 = __this->___m_pVROverlay_4;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVROverlay_tEEC15D8EE0BB588983281A0C78C889B018546C0D* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVRRenderModels OVR.OpenVR.OpenVR/COpenVRContext::VRRenderModels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* COpenVRContext_VRRenderModels_m409DC3B43EA44BC857DBFB17FF33AD4D1113F930 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B1D394BA1E10CCEFFAE406CCEE946FCD85707C8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRRenderModels == null)
		CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* L_0 = __this->___m_pVRRenderModels_5;
		V_0 = (bool)((((RuntimeObject*)(CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVRRenderModels_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteral6B1D394BA1E10CCEFFAE406CCEE946FCD85707C8, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRRenderModels = new CVRRenderModels(pInterface);
		intptr_t L_8 = V_2;
		CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* L_9 = (CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414*)il2cpp_codegen_object_new(CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRRenderModels__ctor_mBB5574FD94741A582017DE3F74DB8987B21DF688(L_9, L_8, NULL);
		__this->___m_pVRRenderModels_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRRenderModels_5), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRRenderModels;
		CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* L_10 = __this->___m_pVRRenderModels_5;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRRenderModels_tAC044C1AE6AB2150C9C19BCED781F795F99B0414* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVRExtendedDisplay OVR.OpenVR.OpenVR/COpenVRContext::VRExtendedDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* COpenVRContext_VRExtendedDisplay_m73C36537234B5CD4D6682EE708CC28E07993450E (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E069394931E8E0955FD9C8114C74F9F13FBDEC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRExtendedDisplay == null)
		CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* L_0 = __this->___m_pVRExtendedDisplay_6;
		V_0 = (bool)((((RuntimeObject*)(CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVRExtendedDisplay_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteralC5E069394931E8E0955FD9C8114C74F9F13FBDEC, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRExtendedDisplay = new CVRExtendedDisplay(pInterface);
		intptr_t L_8 = V_2;
		CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* L_9 = (CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE*)il2cpp_codegen_object_new(CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRExtendedDisplay__ctor_m28DBF83045329DA0E709A057BAA99FCAE6A4C727(L_9, L_8, NULL);
		__this->___m_pVRExtendedDisplay_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRExtendedDisplay_6), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRExtendedDisplay;
		CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* L_10 = __this->___m_pVRExtendedDisplay_6;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRExtendedDisplay_tDE92CF626C4BDC1A262706CF8C35499887276ACE* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVRSettings OVR.OpenVR.OpenVR/COpenVRContext::VRSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* COpenVRContext_VRSettings_m7234ABD3808C7B377117ECA28630A289E6AB1117 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral075497E631984D110F50DD57A78D3322985E7074);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRSettings == null)
		CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* L_0 = __this->___m_pVRSettings_7;
		V_0 = (bool)((((RuntimeObject*)(CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVRSettings_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteral075497E631984D110F50DD57A78D3322985E7074, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRSettings = new CVRSettings(pInterface);
		intptr_t L_8 = V_2;
		CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* L_9 = (CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA*)il2cpp_codegen_object_new(CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRSettings__ctor_m0E1E80DC9504F30ECD80B0BD8A3CFBEA46F10884(L_9, L_8, NULL);
		__this->___m_pVRSettings_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRSettings_7), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRSettings;
		CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* L_10 = __this->___m_pVRSettings_7;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRSettings_tEEC46FCC85078682D38B8E505955A8768A405FCA* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVRApplications OVR.OpenVR.OpenVR/COpenVRContext::VRApplications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* COpenVRContext_VRApplications_mB225C5178C02C9B3F7010692B614D05CD1767CA6 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8B26D2E49ED1906CB08D5EAA595ADF035C65C70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRApplications == null)
		CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* L_0 = __this->___m_pVRApplications_8;
		V_0 = (bool)((((RuntimeObject*)(CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVRApplications_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteralD8B26D2E49ED1906CB08D5EAA595ADF035C65C70, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRApplications = new CVRApplications(pInterface);
		intptr_t L_8 = V_2;
		CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* L_9 = (CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA*)il2cpp_codegen_object_new(CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRApplications__ctor_mA23CABB9CB976C75552E6A7EF93C323CDC2897A2(L_9, L_8, NULL);
		__this->___m_pVRApplications_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRApplications_8), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRApplications;
		CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* L_10 = __this->___m_pVRApplications_8;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRApplications_t618A5474E6688FD75B26FA522628B10A897A1DFA* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVRScreenshots OVR.OpenVR.OpenVR/COpenVRContext::VRScreenshots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* COpenVRContext_VRScreenshots_m8B1495095AF7C3843C72A658316835828ED7BA8E (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD92AA05C77719824EAA3FACEBE1B405BF8B7C1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRScreenshots == null)
		CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* L_0 = __this->___m_pVRScreenshots_9;
		V_0 = (bool)((((RuntimeObject*)(CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVRScreenshots_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteralBCD92AA05C77719824EAA3FACEBE1B405BF8B7C1, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRScreenshots = new CVRScreenshots(pInterface);
		intptr_t L_8 = V_2;
		CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* L_9 = (CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23*)il2cpp_codegen_object_new(CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRScreenshots__ctor_mBF3A0C16F332C4F518572295B55A1BE418DF874A(L_9, L_8, NULL);
		__this->___m_pVRScreenshots_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRScreenshots_9), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRScreenshots;
		CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* L_10 = __this->___m_pVRScreenshots_9;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRScreenshots_t717B8407A3B04AA5ADC75E8C8A55889DA5D96B23* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVRTrackedCamera OVR.OpenVR.OpenVR/COpenVRContext::VRTrackedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* COpenVRContext_VRTrackedCamera_m856B515B62039CF95DB2768529F91D2A8E9E6F26 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AD2F46BEB210D9D86A73F04E249F587A2D5C7EF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRTrackedCamera == null)
		CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* L_0 = __this->___m_pVRTrackedCamera_10;
		V_0 = (bool)((((RuntimeObject*)(CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVRTrackedCamera_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteral5AD2F46BEB210D9D86A73F04E249F587A2D5C7EF, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRTrackedCamera = new CVRTrackedCamera(pInterface);
		intptr_t L_8 = V_2;
		CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* L_9 = (CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D*)il2cpp_codegen_object_new(CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRTrackedCamera__ctor_mBBE912CB35A38F53B963E8D495650876DE7F3F38(L_9, L_8, NULL);
		__this->___m_pVRTrackedCamera_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRTrackedCamera_10), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRTrackedCamera;
		CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* L_10 = __this->___m_pVRTrackedCamera_10;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRTrackedCamera_t78C04DB15BA3010BD4E482D2714C70E8E76B219D* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVRInput OVR.OpenVR.OpenVR/COpenVRContext::VRInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* COpenVRContext_VRInput_m5DEA01019BFC28E75178B65CBC7159A45B5C0339 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC90919371B2B89DEA9D88530D18C91F93A2B7F2C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRInput == null)
		CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* L_0 = __this->___m_pVRInput_11;
		V_0 = (bool)((((RuntimeObject*)(CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix+IVRInput_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteralC90919371B2B89DEA9D88530D18C91F93A2B7F2C, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRInput = new CVRInput(pInterface);
		intptr_t L_8 = V_2;
		CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* L_9 = (CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F*)il2cpp_codegen_object_new(CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRInput__ctor_m4F41D0D9B884BC130C4854CB531D1820C00C6273(L_9, L_8, NULL);
		__this->___m_pVRInput_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRInput_11), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRInput;
		CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* L_10 = __this->___m_pVRInput_11;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRInput_t7A4ADF2E054654D1283EFEE8C3439FFDAF20FA3F* L_11 = V_4;
		return L_11;
	}
}
// OVR.OpenVR.CVRSpatialAnchors OVR.OpenVR.OpenVR/COpenVRContext::VRSpatialAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* COpenVRContext_VRSpatialAnchors_m14BBE3ECDD1290A2322A92340C80DA5AF1400786 (COpenVRContext_tC9F7BAED05AFE15C6EA6FF312B30FB8C60C88E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A080EA79123FB1699656F259E9714E227AA0674);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		// CheckClear();
		COpenVRContext_CheckClear_m35BC9A5A5B6E66C960850C628B7D18CDC719380E(__this, NULL);
		// if (m_pVRSpatialAnchors == null)
		CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* L_0 = __this->___m_pVRSpatialAnchors_12;
		V_0 = (bool)((((RuntimeObject*)(CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var eError = EVRInitError.None;
		V_1 = 0;
		// var pInterface = OpenVRInterop.GetGenericInterface(FnTable_Prefix + IVRSpatialAnchors_Version, ref eError);
		intptr_t L_2;
		L_2 = OpenVRInterop_GetGenericInterface_m4F5734C2DDE0F35772D76F41E2F30651F44F42F5(_stringLiteral9A080EA79123FB1699656F259E9714E227AA0674, (&V_1), NULL);
		V_2 = L_2;
		// if (pInterface != IntPtr.Zero && eError == EVRInitError.None)
		intptr_t L_3 = V_2;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = V_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_3 = (bool)G_B4_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// m_pVRSpatialAnchors = new CVRSpatialAnchors(pInterface);
		intptr_t L_8 = V_2;
		CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* L_9 = (CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C*)il2cpp_codegen_object_new(CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CVRSpatialAnchors__ctor_m632B95E1D9EBBB0C8A56465372C79FC6CE5B5CB6(L_9, L_8, NULL);
		__this->___m_pVRSpatialAnchors_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_pVRSpatialAnchors_12), (void*)L_9);
	}

IL_0049:
	{
	}

IL_004a:
	{
		// return m_pVRSpatialAnchors;
		CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* L_10 = __this->___m_pVRSpatialAnchors_12;
		V_4 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CVRSpatialAnchors_t8E126D6724183A251E6649E32BB114979368086C* L_11 = V_4;
		return L_11;
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
// System.Void Assets.OVR.Scripts.Record::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_m737CDD176B83A2905E1D1A6D8BC7C01430161BF3 (Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2* __this, int32_t ___order0, String_t* ___cat1, String_t* ___msg2, const RuntimeMethod* method) 
{
	{
		// public Record(int order, string cat, string msg)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// sortOrder = order;
		int32_t L_0 = ___order0;
		__this->___sortOrder_0 = L_0;
		// category = cat;
		String_t* L_1 = ___cat1;
		__this->___category_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___category_1), (void*)L_1);
		// message = msg;
		String_t* L_2 = ___msg2;
		__this->___message_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_2), (void*)L_2);
		// }
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
// System.Void Assets.OVR.Scripts.RangedRecord::.ctor(System.Int32,System.String,System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangedRecord__ctor_mB5CBC3362E784E17401E590E1973C6302806A4DD (RangedRecord_t25D9982F58541F843CB54DC4E4B246EFCBD29699* __this, int32_t ___order0, String_t* ___cat1, String_t* ___msg2, float ___val3, float ___minVal4, float ___maxVal5, const RuntimeMethod* method) 
{
	{
		// : base(order, cat, msg)
		int32_t L_0 = ___order0;
		String_t* L_1 = ___cat1;
		String_t* L_2 = ___msg2;
		Record__ctor_m737CDD176B83A2905E1D1A6D8BC7C01430161BF3(__this, L_0, L_1, L_2, NULL);
		// value = val;
		float L_3 = ___val3;
		__this->___value_3 = L_3;
		// min = minVal;
		float L_4 = ___minVal4;
		__this->___min_4 = L_4;
		// max = maxVal;
		float L_5 = ___maxVal5;
		__this->___max_5 = L_5;
		// }
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
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_Multicast(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* currentDelegate = reinterpret_cast<FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___obj0, ___isLastInSet1, ___selectedIndex2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenInst(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	typedef void (*FunctionPointerType) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, ___isLastInSet1, ___selectedIndex2, method);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenStatic(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, ___isLastInSet1, ___selectedIndex2, method);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenStaticInvoker(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___obj0, ___isLastInSet1, ___selectedIndex2);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_ClosedStaticInvoker(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___obj0, ___isLastInSet1, ___selectedIndex2);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenVirtual(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	VirtualActionInvoker2< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___obj0, ___isLastInSet1, ___selectedIndex2);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenInterface(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	InterfaceActionInvoker2< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___obj0, ___isLastInSet1, ___selectedIndex2);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenGenericVirtual(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	GenericVirtualActionInvoker2< bool, int32_t >::Invoke(method, ___obj0, ___isLastInSet1, ___selectedIndex2);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenGenericInterface(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	GenericInterfaceActionInvoker2< bool, int32_t >::Invoke(method, ___obj0, ___isLastInSet1, ___selectedIndex2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F (FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___obj0' to native representation
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ____obj0_marshaled = {};
	if (___obj0 != NULL)
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(*___obj0, ____obj0_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___obj0 != NULL ? (&____obj0_marshaled) : NULL, static_cast<int32_t>(___isLastInSet1), ___selectedIndex2);

	// Marshaling of parameter '___obj0' back from native representation
	if (___obj0 != NULL)
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(____obj0_marshaled, *___obj0);
	}

	// Marshaling cleanup of parameter '___obj0' native representation
	if ((&____obj0_marshaled) != NULL)
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(____obj0_marshaled);
	}

}
// System.Void Assets.OVR.Scripts.FixMethodDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixMethodDelegate__ctor_mFF496697BF82692D0FCB79A67301C14F3DBD4CF1 (FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_Multicast;
}
// System.Void Assets.OVR.Scripts.FixMethodDelegate::Invoke(UnityEngine.Object,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5 (FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, ___isLastInSet1, ___selectedIndex2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Assets.OVR.Scripts.FixMethodDelegate::BeginInvoke(UnityEngine.Object,System.Boolean,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixMethodDelegate_BeginInvoke_m5EB11FFD92C55A12BDAB5A2A8531C0BEE8E057B1 (FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, bool ___isLastInSet1, int32_t ___selectedIndex2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___isLastInSet1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___selectedIndex2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Assets.OVR.Scripts.FixMethodDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixMethodDelegate_EndInvoke_mE4151F7DD68F41D8ED32D08435959029124EFF07 (FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Assets.OVR.Scripts.FixRecord::.ctor(System.Int32,System.String,System.String,Assets.OVR.Scripts.FixMethodDelegate,UnityEngine.Object,System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixRecord__ctor_m855B11D45BA913A08C1D0ABE5BF3726A4313C059 (FixRecord_tA9619245BB76F73A6E03002DD6C237812E79254D* __this, int32_t ___order0, String_t* ___cat1, String_t* ___msg2, FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* ___fix3, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target4, bool ___editRequired5, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___buttons6, const RuntimeMethod* method) 
{
	{
		// : base(order, cat, msg)
		int32_t L_0 = ___order0;
		String_t* L_1 = ___cat1;
		String_t* L_2 = ___msg2;
		Record__ctor_m737CDD176B83A2905E1D1A6D8BC7C01430161BF3(__this, L_0, L_1, L_2, NULL);
		// buttonNames = buttons;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___buttons6;
		__this->___buttonNames_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonNames_5), (void*)L_3);
		// fixMethod = fix;
		FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* L_4 = ___fix3;
		__this->___fixMethod_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fixMethod_3), (void*)L_4);
		// targetObject = target;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___target4;
		__this->___targetObject_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetObject_4), (void*)L_5);
		// editModeRequired = editRequired;
		bool L_6 = ___editRequired5;
		__this->___editModeRequired_6 = L_6;
		// complete = false;
		__this->___complete_7 = (bool)0;
		// }
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
// System.Void UnityEngine.EventSystems.OVRInputModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule__ctor_m9F284E36BA8F046C6BB76C7C7A1D5246609DE102 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m945703AD572432985F6A555BBE2C516D84D78989_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OVRInput.Button joyPadClickButton = OVRInput.Button.One;
		__this->___joyPadClickButton_19 = 1;
		// public KeyCode gazeClickKey = KeyCode.Space;
		__this->___gazeClickKey_20 = ((int32_t)32);
		// public bool useRightStickScroll = true;
		__this->___useRightStickScroll_22 = (bool)1;
		// public float rightStickDeadZone = 0.15f;
		__this->___rightStickDeadZone_23 = (0.150000006f);
		// public bool useSwipeScroll = true;
		__this->___useSwipeScroll_24 = (bool)1;
		// public float swipeDragThreshold = 2;
		__this->___swipeDragThreshold_25 = (2.0f);
		// public float swipeDragScale = 1f;
		__this->___swipeDragScale_26 = (1.0f);
		// public bool InvertSwipeXAxis = false;
		__this->___InvertSwipeXAxis_27 = (bool)0;
		// public float angleDragThreshold = 1;
		__this->___angleDragThreshold_29 = (1.0f);
		// private float m_SpherecastRadius = 1.0f;
		__this->___m_SpherecastRadius_30 = (1.0f);
		// private string m_HorizontalAxis = "Horizontal";
		__this->___m_HorizontalAxis_34 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HorizontalAxis_34), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// private string m_VerticalAxis = "Vertical";
		__this->___m_VerticalAxis_35 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VerticalAxis_35), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// private string m_SubmitButton = "Submit";
		__this->___m_SubmitButton_36 = _stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SubmitButton_36), (void*)_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895);
		// private string m_CancelButton = "Cancel";
		__this->___m_CancelButton_37 = _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CancelButton_37), (void*)_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		// private float m_InputActionsPerSecond = 10;
		__this->___m_InputActionsPerSecond_38 = (10.0f);
		// protected Dictionary<int, OVRPointerEventData> m_VRRayPointerData = new Dictionary<int, OVRPointerEventData>();
		Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* L_0 = (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B*)il2cpp_codegen_object_new(Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m945703AD572432985F6A555BBE2C516D84D78989(L_0, Dictionary_2__ctor_m945703AD572432985F6A555BBE2C516D84D78989_RuntimeMethod_var);
		__this->___m_VRRayPointerData_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VRRayPointerData_40), (void*)L_0);
		// private readonly MouseState m_MouseState = new MouseState();
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_1 = (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09*)il2cpp_codegen_object_new(MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MouseState__ctor_mF4A8041A86E50D91202770E73CE0DAF12BB207D9(L_1, NULL);
		__this->___m_MouseState_41 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MouseState_41), (void*)L_1);
		// protected OVRInputModule()
		PointerInputModule__ctor_mBF074492478BFC24F87EF2C941D6C11A8ACDAF11(__this, NULL);
		// {}
		return;
	}
}
// UnityEngine.EventSystems.OVRInputModule/InputMode UnityEngine.EventSystems.OVRInputModule::get_inputMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRInputModule_get_inputMode_m703F87EE86EB8904C748AAB9F3845AE4E27C0449 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return InputMode.Mouse; }
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return InputMode.Mouse; }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::get_allowActivationOnMobileDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_get_allowActivationOnMobileDevice_m01129453E7D13735211F8F975C7CE4344A3292DA (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return m_AllowActivationOnMobileDevice; }
		bool L_0 = __this->___m_AllowActivationOnMobileDevice_39;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_AllowActivationOnMobileDevice; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_allowActivationOnMobileDevice(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_allowActivationOnMobileDevice_m6299794725C1183B18933AFC121512F941696F96 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_AllowActivationOnMobileDevice = value; }
		bool L_0 = ___value0;
		__this->___m_AllowActivationOnMobileDevice_39 = L_0;
		// set { m_AllowActivationOnMobileDevice = value; }
		return;
	}
}
// System.Single UnityEngine.EventSystems.OVRInputModule::get_inputActionsPerSecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OVRInputModule_get_inputActionsPerSecond_m1D908DC9F877C2174C2F7286C2EE0C1F3152AD67 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return m_InputActionsPerSecond; }
		float L_0 = __this->___m_InputActionsPerSecond_38;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_InputActionsPerSecond; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_inputActionsPerSecond(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_inputActionsPerSecond_m40445C073981556ACCEB8A9FB364837D7AA8E32E (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_InputActionsPerSecond = value; }
		float L_0 = ___value0;
		__this->___m_InputActionsPerSecond_38 = L_0;
		// set { m_InputActionsPerSecond = value; }
		return;
	}
}
// System.String UnityEngine.EventSystems.OVRInputModule::get_horizontalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OVRInputModule_get_horizontalAxis_m2ABAD368719FD1D795E539046FF537781A94FDEB (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return m_HorizontalAxis; }
		String_t* L_0 = __this->___m_HorizontalAxis_34;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_HorizontalAxis; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_horizontalAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_horizontalAxis_mC1ACF279E38A74A00E39AC82457FD67016CE5FDC (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_HorizontalAxis = value; }
		String_t* L_0 = ___value0;
		__this->___m_HorizontalAxis_34 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HorizontalAxis_34), (void*)L_0);
		// set { m_HorizontalAxis = value; }
		return;
	}
}
// System.String UnityEngine.EventSystems.OVRInputModule::get_verticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OVRInputModule_get_verticalAxis_m4D38ADE8D09F62B65DD7C6D2DAFE7B4CAC0772F1 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return m_VerticalAxis; }
		String_t* L_0 = __this->___m_VerticalAxis_35;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_VerticalAxis; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_verticalAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_verticalAxis_m0FD387FB0CA03DBD7673389702497B3A5D582B69 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_VerticalAxis = value; }
		String_t* L_0 = ___value0;
		__this->___m_VerticalAxis_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VerticalAxis_35), (void*)L_0);
		// set { m_VerticalAxis = value; }
		return;
	}
}
// System.String UnityEngine.EventSystems.OVRInputModule::get_submitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OVRInputModule_get_submitButton_mB419D3F4EB6BEA013A8258423BECCE1C53F8592A (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return m_SubmitButton; }
		String_t* L_0 = __this->___m_SubmitButton_36;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_SubmitButton; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_submitButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_submitButton_m79894AD3C370FA5E3762E7B99B212CD7CFC6488B (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_SubmitButton = value; }
		String_t* L_0 = ___value0;
		__this->___m_SubmitButton_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SubmitButton_36), (void*)L_0);
		// set { m_SubmitButton = value; }
		return;
	}
}
// System.String UnityEngine.EventSystems.OVRInputModule::get_cancelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OVRInputModule_get_cancelButton_m75EA72B209DF45390BC74319C81BD2E7F61D0B3D (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return m_CancelButton; }
		String_t* L_0 = __this->___m_CancelButton_37;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_CancelButton; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_cancelButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_cancelButton_m439529CB954D799F5548E0E3C9E1ADEBBA130172 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_CancelButton = value; }
		String_t* L_0 = ___value0;
		__this->___m_CancelButton_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CancelButton_37), (void*)L_0);
		// set { m_CancelButton = value; }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::UpdateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_UpdateModule_m1FE521EFA9268EDD9FDE4B2F1AAE33ED56AEF66E (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// m_LastMousePosition = m_MousePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_MousePosition_33;
		__this->___m_LastMousePosition_32 = L_0;
		// m_MousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		__this->___m_MousePosition_33 = L_2;
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::IsModuleSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_IsModuleSupported_m7B9DE0BA7E25485387B5C2E3D9F4ECC3B0573251 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return m_AllowActivationOnMobileDevice || Input.mousePresent;
		bool L_0 = __this->___m_AllowActivationOnMobileDevice_39;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = Input_get_mousePresent_mAD77FFD987CD5B998AFAD4DAECADBC76034026BF(NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 1;
	}

IL_0011:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::ShouldActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_ShouldActivateModule_mA012158257C8F2608D97BD3F4754BA8F9DF5AFED (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!base.ShouldActivateModule())
		bool L_0;
		L_0 = BaseInputModule_ShouldActivateModule_m51B70F9097EF7FEB20B62D4D775F7FEA853185A1(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0095;
	}

IL_0015:
	{
		// var shouldActivate = Input.GetButtonDown(m_SubmitButton);
		String_t* L_2 = __this->___m_SubmitButton_36;
		bool L_3;
		L_3 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_2, NULL);
		V_0 = L_3;
		// shouldActivate |= Input.GetButtonDown(m_CancelButton);
		bool L_4 = V_0;
		String_t* L_5 = __this->___m_CancelButton_37;
		bool L_6;
		L_6 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_5, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_4|(int32_t)L_6));
		// shouldActivate |= !Mathf.Approximately(Input.GetAxisRaw(m_HorizontalAxis), 0.0f);
		bool L_7 = V_0;
		String_t* L_8 = __this->___m_HorizontalAxis_34;
		float L_9;
		L_9 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_8, NULL);
		bool L_10;
		L_10 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_9, (0.0f), NULL);
		V_0 = (bool)((int32_t)((int32_t)L_7|((((int32_t)L_10) == ((int32_t)0))? 1 : 0)));
		// shouldActivate |= !Mathf.Approximately(Input.GetAxisRaw(m_VerticalAxis), 0.0f);
		bool L_11 = V_0;
		String_t* L_12 = __this->___m_VerticalAxis_35;
		float L_13;
		L_13 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_12, NULL);
		bool L_14;
		L_14 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_13, (0.0f), NULL);
		V_0 = (bool)((int32_t)((int32_t)L_11|((((int32_t)L_14) == ((int32_t)0))? 1 : 0)));
		// shouldActivate |= (m_MousePosition - m_LastMousePosition).sqrMagnitude > 0.0f;
		bool L_15 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___m_MousePosition_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___m_LastMousePosition_32;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_16, L_17, NULL);
		V_3 = L_18;
		float L_19;
		L_19 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_3), NULL);
		V_0 = (bool)((int32_t)((int32_t)L_15|((((float)L_19) > ((float)(0.0f)))? 1 : 0)));
		// shouldActivate |= Input.GetMouseButtonDown(0);
		bool L_20 = V_0;
		bool L_21;
		L_21 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_20|(int32_t)L_21));
		// return shouldActivate;
		bool L_22 = V_0;
		V_2 = L_22;
		goto IL_0095;
	}

IL_0095:
	{
		// }
		bool L_23 = V_2;
		return L_23;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::ActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ActivateModule_m62AF1A8B1D2224058DB2E7BC312BEAE28DCCBAC3 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	{
		// base.ActivateModule();
		BaseInputModule_ActivateModule_m2C693E95727E13FDF06D54FA8762A040175AC3BA(__this, NULL);
		// m_MousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_0, NULL);
		__this->___m_MousePosition_33 = L_1;
		// m_LastMousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		__this->___m_LastMousePosition_32 = L_3;
		// var toSelect = eventSystem.currentSelectedGameObject;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A(L_4, NULL);
		V_0 = L_5;
		// if (toSelect == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// toSelect = eventSystem.firstSelectedGameObject;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_9;
		L_9 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = EventSystem_get_firstSelectedGameObject_m15FB056EE7A99D8DD5891D40A6E3EF18719F0553(L_9, NULL);
		V_0 = L_10;
	}

IL_004b:
	{
		// eventSystem.SetSelectedGameObject(toSelect, GetBaseEventData());
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_11;
		L_11 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_13;
		L_13 = VirtualFuncInvoker0< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		NullCheck(L_11);
		EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173(L_11, L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::DeactivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_DeactivateModule_m57CD320E3D3BA8D6B64BD69F15F5B35E6E2597DB (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// base.DeactivateModule();
		BaseInputModule_DeactivateModule_mAE698307DADBE4DE8A26BD3DE5F3F7E3D75B385D(__this, NULL);
		// ClearSelection();
		OVRInputModule_ClearSelection_m8BB4DB17CCE3F2897281E77858D85C9A8E218906(__this, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendSubmitEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendSubmitEventToSelectedObject_mBCBAAAC7FE36D0C8AC77C333EC6376C0BA13A00A (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244_m6BCE3E1FAE7620DC9F22722FA5CCE5AB35BAA5B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75_mA153EBDD6059AC5FF4C3ADD0A0628D816CD112CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (eventSystem.currentSelectedGameObject == null)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0078;
	}

IL_001a:
	{
		// var data = GetBaseEventData();
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_4;
		L_4 = VirtualFuncInvoker0< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		V_0 = L_4;
		// if (Input.GetButtonDown(m_SubmitButton))
		String_t* L_5 = __this->___m_SubmitButton_36;
		bool L_6;
		L_6 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_5, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.submitHandler);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_8;
		L_8 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A(L_8, NULL);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F* L_11;
		L_11 = ExecuteEvents_get_submitHandler_mDCAAA40F0F6AEA385B375C1839B4DC37E5FC4A7A(NULL);
		bool L_12;
		L_12 = ExecuteEvents_Execute_TisISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75_mA153EBDD6059AC5FF4C3ADD0A0628D816CD112CC(L_9, L_10, L_11, ExecuteEvents_Execute_TisISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75_mA153EBDD6059AC5FF4C3ADD0A0628D816CD112CC_RuntimeMethod_var);
	}

IL_0047:
	{
		// if (Input.GetButtonDown(m_CancelButton))
		String_t* L_13 = __this->___m_CancelButton_37;
		bool L_14;
		L_14 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_13, NULL);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_006f;
		}
	}
	{
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.cancelHandler);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_16;
		L_16 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A(L_16, NULL);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA* L_19;
		L_19 = ExecuteEvents_get_cancelHandler_mBCDFD10C95FC2BBC5DC5A512FEA1BBEECC2DAE12(NULL);
		bool L_20;
		L_20 = ExecuteEvents_Execute_TisICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244_m6BCE3E1FAE7620DC9F22722FA5CCE5AB35BAA5B0(L_17, L_18, L_19, ExecuteEvents_Execute_TisICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244_m6BCE3E1FAE7620DC9F22722FA5CCE5AB35BAA5B0_RuntimeMethod_var);
	}

IL_006f:
	{
		// return data.used;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_21 = V_0;
		NullCheck(L_21);
		bool L_22;
		L_22 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_21);
		V_2 = L_22;
		goto IL_0078;
	}

IL_0078:
	{
		// }
		bool L_23 = V_2;
		return L_23;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::AllowMoveEventProcessing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_AllowMoveEventProcessing_mCE84D054A5F4C27EFBACAAD16D1EDCA6F524F508 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, float ___time0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool allow = Input.GetButtonDown(m_HorizontalAxis);
		String_t* L_0 = __this->___m_HorizontalAxis_34;
		bool L_1;
		L_1 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_0, NULL);
		V_0 = L_1;
		// allow |= Input.GetButtonDown(m_VerticalAxis);
		bool L_2 = V_0;
		String_t* L_3 = __this->___m_VerticalAxis_35;
		bool L_4;
		L_4 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_3, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_2|(int32_t)L_4));
		// allow |= (time > m_NextAction);
		bool L_5 = V_0;
		float L_6 = ___time0;
		float L_7 = __this->___m_NextAction_31;
		V_0 = (bool)((int32_t)((int32_t)L_5|((((float)L_6) > ((float)L_7))? 1 : 0)));
		// return allow;
		bool L_8 = V_0;
		V_1 = L_8;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::GetRawMoveVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_GetRawMoveVector_mAD07DA87FE40D256FAD36721214E8E5F554BC605 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// Vector2 move = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_0;
		// move.x = Input.GetAxisRaw(m_HorizontalAxis);
		String_t* L_1 = __this->___m_HorizontalAxis_34;
		float L_2;
		L_2 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_1, NULL);
		(&V_0)->___x_0 = L_2;
		// move.y = Input.GetAxisRaw(m_VerticalAxis);
		String_t* L_3 = __this->___m_VerticalAxis_35;
		float L_4;
		L_4 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_3, NULL);
		(&V_0)->___y_1 = L_4;
		// if (Input.GetButtonDown(m_HorizontalAxis))
		String_t* L_5 = __this->___m_HorizontalAxis_34;
		bool L_6;
		L_6 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		// if (move.x < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___x_0;
		V_2 = (bool)((((float)L_9) < ((float)(0.0f)))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		// move.x = -1f;
		(&V_0)->___x_0 = (-1.0f);
	}

IL_0058:
	{
		// if (move.x > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		float L_12 = L_11.___x_0;
		V_3 = (bool)((((float)L_12) > ((float)(0.0f)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		// move.x = 1f;
		(&V_0)->___x_0 = (1.0f);
	}

IL_0075:
	{
	}

IL_0076:
	{
		// if (Input.GetButtonDown(m_VerticalAxis))
		String_t* L_14 = __this->___m_VerticalAxis_35;
		bool L_15;
		L_15 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_14, NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_00c7;
		}
	}
	{
		// if (move.y < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		float L_18 = L_17.___y_1;
		V_5 = (bool)((((float)L_18) < ((float)(0.0f)))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00a7;
		}
	}
	{
		// move.y = -1f;
		(&V_0)->___y_1 = (-1.0f);
	}

IL_00a7:
	{
		// if (move.y > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_0;
		float L_21 = L_20.___y_1;
		V_6 = (bool)((((float)L_21) > ((float)(0.0f)))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00c6;
		}
	}
	{
		// move.y = 1f;
		(&V_0)->___y_1 = (1.0f);
	}

IL_00c6:
	{
	}

IL_00c7:
	{
		// return move;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		V_7 = L_23;
		goto IL_00cc;
	}

IL_00cc:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_7;
		return L_24;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendMoveEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendMoveEventToSelectedObject_mF3C86101342F589244CDA3984DAAEC291C693081 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB_m77205DFCC4110B95CC241F556BE89F612EFFD2CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		// float time = Time.unscaledTime;
		float L_0;
		L_0 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		V_0 = L_0;
		// if (!AllowMoveEventProcessing(time))
		float L_1 = V_0;
		bool L_2;
		L_2 = OVRInputModule_AllowMoveEventProcessing_mCE84D054A5F4C27EFBACAAD16D1EDCA6F524F508(__this, L_1, NULL);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return false;
		V_4 = (bool)0;
		goto IL_00ab;
	}

IL_001d:
	{
		// Vector2 movement = GetRawMoveVector();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = OVRInputModule_GetRawMoveVector_mAD07DA87FE40D256FAD36721214E8E5F554BC605(__this, NULL);
		V_1 = L_4;
		// var axisEventData = GetAxisEventData(movement.x, movement.y, 0.6f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_1;
		float L_6 = L_5.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		float L_8 = L_7.___y_1;
		AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* L_9;
		L_9 = VirtualFuncInvoker3< AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938*, float, float, float >::Invoke(18 /* UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single) */, __this, L_6, L_8, (0.600000024f));
		V_2 = L_9;
		// if (!Mathf.Approximately(axisEventData.moveVector.x, 0f)
		//     || !Mathf.Approximately(axisEventData.moveVector.y, 0f))
		AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* L_10 = V_2;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = AxisEventData_get_moveVector_m7979B5CF62B6B3B0C5F2DA8B328C499ED80ECC41_inline(L_10, NULL);
		float L_12 = L_11.___x_0;
		bool L_13;
		L_13 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_12, (0.0f), NULL);
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* L_14 = V_2;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = AxisEventData_get_moveVector_m7979B5CF62B6B3B0C5F2DA8B328C499ED80ECC41_inline(L_14, NULL);
		float L_16 = L_15.___y_1;
		bool L_17;
		L_17 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_16, (0.0f), NULL);
		G_B5_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B5_0 = 1;
	}

IL_006e:
	{
		V_5 = (bool)G_B5_0;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_008d;
		}
	}
	{
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, axisEventData, ExecuteEvents.moveHandler);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_19;
		L_19 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A(L_19, NULL);
		AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013* L_22;
		L_22 = ExecuteEvents_get_moveHandler_mF717824AB0018BBED3C2DF3C67486E3B2B3836D2(NULL);
		bool L_23;
		L_23 = ExecuteEvents_Execute_TisIMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB_m77205DFCC4110B95CC241F556BE89F612EFFD2CA(L_20, L_21, L_22, ExecuteEvents_Execute_TisIMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB_m77205DFCC4110B95CC241F556BE89F612EFFD2CA_RuntimeMethod_var);
	}

IL_008d:
	{
		// m_NextAction = time + 1f / m_InputActionsPerSecond;
		float L_24 = V_0;
		float L_25 = __this->___m_InputActionsPerSecond_38;
		__this->___m_NextAction_31 = ((float)il2cpp_codegen_add(L_24, ((float)((1.0f)/L_25))));
		// return axisEventData.used;
		AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* L_26 = V_2;
		NullCheck(L_26);
		bool L_27;
		L_27 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_26);
		V_4 = L_27;
		goto IL_00ab;
	}

IL_00ab:
	{
		// }
		bool L_28 = V_4;
		return L_28;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendUpdateEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendUpdateEventToSelectedObject_mF799E28F265830EDBFC991825BEB97D3448472C1 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m8AFB13536731ABE80F6AE964DA907EE6B27F055E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (eventSystem.currentSelectedGameObject == null)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0041;
	}

IL_001a:
	{
		// var data = GetBaseEventData();
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_4;
		L_4 = VirtualFuncInvoker0< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		V_0 = L_4;
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.updateSelectedHandler);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_5;
		L_5 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A(L_5, NULL);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* L_8;
		L_8 = ExecuteEvents_get_updateSelectedHandler_m8AF7543437082AD4F5690AAA77F2623AE28C3D09(NULL);
		bool L_9;
		L_9 = ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m8AFB13536731ABE80F6AE964DA907EE6B27F055E(L_6, L_7, L_8, ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m8AFB13536731ABE80F6AE964DA907EE6B27F055E_RuntimeMethod_var);
		// return data.used;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_10);
		V_2 = L_11;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ProcessMousePress_m8FB12642E4586D7C5F71ECFA5E56ABE3FFE834E9 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m0C0E2A729F88D6AB5AC2B4FD9C4E33D181A52A57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mF031AC46543C02039764EDB1B0673DFA36B1F58C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m6AA443D4F53AF0FEBAC269F761A158635243467E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mABD9E1ECC8C04235760B3855DF03F2308F62071C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m9AA4E18082F53C60962F70D75570F1D400C37FBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	float V_9 = 0.0f;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B18_0 = 0;
	int32_t G_B25_0 = 0;
	{
		// var pointerEvent = data.buttonData;
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_0 = ___data0;
		NullCheck(L_0);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = L_0->___buttonData_1;
		V_0 = L_1;
		// var currentOverGo = pointerEvent.pointerCurrentRaycast.gameObject;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		NullCheck(L_2);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_3;
		L_3 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_2, NULL);
		V_2 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1((&V_2), NULL);
		V_1 = L_4;
		// if (data.PressedThisFrame())
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_5 = ___data0;
		NullCheck(L_5);
		bool L_6;
		L_6 = MouseButtonEventData_PressedThisFrame_mEE5DC95537AAEB346C57DCA85917E0701A44388D(L_5, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0163;
		}
	}
	{
		// pointerEvent.eligibleForClick = true;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = V_0;
		NullCheck(L_8);
		PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline(L_8, (bool)1, NULL);
		// pointerEvent.delta = Vector2.zero;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_9 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_9);
		PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline(L_9, L_10, NULL);
		// pointerEvent.dragging = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = V_0;
		NullCheck(L_11);
		PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline(L_11, (bool)0, NULL);
		// pointerEvent.useDragThreshold = true;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = V_0;
		NullCheck(L_12);
		PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline(L_12, (bool)1, NULL);
		// pointerEvent.pressPosition = pointerEvent.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_14 = V_0;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_14, NULL);
		NullCheck(L_13);
		PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline(L_13, L_15, NULL);
		// if (pointerEvent.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_16 = V_0;
		bool L_17;
		L_17 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_16, NULL);
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0075;
		}
	}
	{
		// pointerEvent.SetSwipeStart(Input.mousePosition);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_20, NULL);
		PointerEventDataExtension_SetSwipeStart_m3FD15231D3C0B9BC95B84E7048FF8289CF4359C5(L_19, L_21, NULL);
	}

IL_0075:
	{
		// pointerEvent.pointerPressRaycast = pointerEvent.pointerCurrentRaycast;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_22 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_23 = V_0;
		NullCheck(L_23);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_24;
		L_24 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_23, NULL);
		NullCheck(L_22);
		PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline(L_22, L_24, NULL);
		// DeselectIfSelectionChanged(currentOverGo, pointerEvent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_26 = V_0;
		PointerInputModule_DeselectIfSelectionChanged_m8F111DD2317E33C4F0498F651BC52BD5C984A95B(__this, L_25, L_26, NULL);
		// var newPressed = ExecuteEvents.ExecuteHierarchy(currentOverGo, pointerEvent, ExecuteEvents.pointerDownHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* L_29;
		L_29 = ExecuteEvents_get_pointerDownHandler_mA67CE33D32540939A273DB88D6456C7FE43C13EF(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mF031AC46543C02039764EDB1B0673DFA36B1F58C(L_27, L_28, L_29, ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mF031AC46543C02039764EDB1B0673DFA36B1F58C_RuntimeMethod_var);
		V_4 = L_30;
		// if (newPressed == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_7 = L_32;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00af;
		}
	}
	{
		// newPressed = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentOverGo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E(L_34, ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E_RuntimeMethod_var);
		V_4 = L_35;
	}

IL_00af:
	{
		// float time = Time.unscaledTime;
		float L_36;
		L_36 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		V_5 = L_36;
		// if (newPressed == pointerEvent.lastPress)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_38 = V_0;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = PointerEventData_get_lastPress_m46720C62503214A44EE947679A8BA307BC2AEEDC_inline(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_37, L_39, NULL);
		V_8 = L_40;
		bool L_41 = V_8;
		if (!L_41)
		{
			goto IL_010d;
		}
	}
	{
		// var diffTime = time - pointerEvent.clickTime;
		float L_42 = V_5;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_43 = V_0;
		NullCheck(L_43);
		float L_44;
		L_44 = PointerEventData_get_clickTime_m5ABE0298E8CEF28B6BD7E750E940756CD78AB96E_inline(L_43, NULL);
		V_9 = ((float)il2cpp_codegen_subtract(L_42, L_44));
		// if (diffTime < 0.3f)
		float L_45 = V_9;
		V_10 = (bool)((((float)L_45) < ((float)(0.300000012f)))? 1 : 0);
		bool L_46 = V_10;
		if (!L_46)
		{
			goto IL_00f9;
		}
	}
	{
		// ++pointerEvent.clickCount;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_47 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = PointerEventData_get_clickCount_m3977011C09DB9F904B1AAC3708B821B8D6AC0F9F_inline(L_48, NULL);
		V_11 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_11;
		NullCheck(L_48);
		PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline(L_48, L_50, NULL);
		goto IL_0101;
	}

IL_00f9:
	{
		// pointerEvent.clickCount = 1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_51 = V_0;
		NullCheck(L_51);
		PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline(L_51, 1, NULL);
	}

IL_0101:
	{
		// pointerEvent.clickTime = time;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_52 = V_0;
		float L_53 = V_5;
		NullCheck(L_52);
		PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline(L_52, L_53, NULL);
		goto IL_0117;
	}

IL_010d:
	{
		// pointerEvent.clickCount = 1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_54 = V_0;
		NullCheck(L_54);
		PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline(L_54, 1, NULL);
	}

IL_0117:
	{
		// pointerEvent.pointerPress = newPressed;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_55 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_4;
		NullCheck(L_55);
		PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8(L_55, L_56, NULL);
		// pointerEvent.rawPointerPress = currentOverGo;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_57 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = V_1;
		NullCheck(L_57);
		PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline(L_57, L_58, NULL);
		// pointerEvent.clickTime = time;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_59 = V_0;
		float L_60 = V_5;
		NullCheck(L_59);
		PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline(L_59, L_60, NULL);
		// pointerEvent.pointerDrag = ExecuteEvents.GetEventHandler<IDragHandler>(currentOverGo);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_61 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63;
		L_63 = ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m9AA4E18082F53C60962F70D75570F1D400C37FBA(L_62, ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m9AA4E18082F53C60962F70D75570F1D400C37FBA_RuntimeMethod_var);
		NullCheck(L_61);
		PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_61, L_63, NULL);
		// if (pointerEvent.pointerDrag != null)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_64 = V_0;
		NullCheck(L_64);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65;
		L_65 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_64, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_65, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_12 = L_66;
		bool L_67 = V_12;
		if (!L_67)
		{
			goto IL_0162;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerDrag, pointerEvent, ExecuteEvents.initializePotentialDrag);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_68 = V_0;
		NullCheck(L_68);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
		L_69 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_68, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_70 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* L_71;
		L_71 = ExecuteEvents_get_initializePotentialDrag_m16F4CD40448FB1B78F6683AA26A9CC574F48AFBD(NULL);
		bool L_72;
		L_72 = ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mABD9E1ECC8C04235760B3855DF03F2308F62071C(L_69, L_70, L_71, ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mABD9E1ECC8C04235760B3855DF03F2308F62071C_RuntimeMethod_var);
	}

IL_0162:
	{
	}

IL_0163:
	{
		// if (data.ReleasedThisFrame())
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_73 = ___data0;
		NullCheck(L_73);
		bool L_74;
		L_74 = MouseButtonEventData_ReleasedThisFrame_m5AD4F06D1CA6E0ACD6E84EEFAD4FB112098AFD51(L_73, NULL);
		V_13 = L_74;
		bool L_75 = V_13;
		if (!L_75)
		{
			goto IL_0260;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerPress, pointerEvent, ExecuteEvents.pointerUpHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_76 = V_0;
		NullCheck(L_76);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77;
		L_77 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A(L_76, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_78 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* L_79;
		L_79 = ExecuteEvents_get_pointerUpHandler_m51B83B4AD7498D6F7A2CBD5F2331E91A37AE4CF2(NULL);
		bool L_80;
		L_80 = ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6(L_77, L_78, L_79, ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var);
		// var pointerUpHandler = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentOverGo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82;
		L_82 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E(L_81, ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E_RuntimeMethod_var);
		V_14 = L_82;
		// if (pointerEvent.pointerPress == pointerUpHandler && pointerEvent.eligibleForClick)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_83 = V_0;
		NullCheck(L_83);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84;
		L_84 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A(L_83, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_84, L_85, NULL);
		if (!L_86)
		{
			goto IL_01a4;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_87 = V_0;
		NullCheck(L_87);
		bool L_88;
		L_88 = PointerEventData_get_eligibleForClick_m4B01A1640C694FD7421BDFB19CF763BC85672C8E_inline(L_87, NULL);
		G_B18_0 = ((int32_t)(L_88));
		goto IL_01a5;
	}

IL_01a4:
	{
		G_B18_0 = 0;
	}

IL_01a5:
	{
		V_15 = (bool)G_B18_0;
		bool L_89 = V_15;
		if (!L_89)
		{
			goto IL_01c1;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerPress, pointerEvent, ExecuteEvents.pointerClickHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_90 = V_0;
		NullCheck(L_90);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91;
		L_91 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A(L_90, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_92 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* L_93;
		L_93 = ExecuteEvents_get_pointerClickHandler_m0017F9D1EAF7C02CDDB4C148C92D6685D88EA8D5(NULL);
		bool L_94;
		L_94 = ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6(L_91, L_92, L_93, ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6_RuntimeMethod_var);
		goto IL_01e2;
	}

IL_01c1:
	{
		// else if (pointerEvent.pointerDrag != null)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_95 = V_0;
		NullCheck(L_95);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96;
		L_96 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_95, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_97;
		L_97 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_96, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_16 = L_97;
		bool L_98 = V_16;
		if (!L_98)
		{
			goto IL_01e2;
		}
	}
	{
		// ExecuteEvents.ExecuteHierarchy(currentOverGo, pointerEvent, ExecuteEvents.dropHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_100 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* L_101;
		L_101 = ExecuteEvents_get_dropHandler_m8E00FA7361DE68780ACEB365E6B14206A2180D03(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102;
		L_102 = ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m0C0E2A729F88D6AB5AC2B4FD9C4E33D181A52A57(L_99, L_100, L_101, ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m0C0E2A729F88D6AB5AC2B4FD9C4E33D181A52A57_RuntimeMethod_var);
	}

IL_01e2:
	{
		// pointerEvent.eligibleForClick = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_103 = V_0;
		NullCheck(L_103);
		PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline(L_103, (bool)0, NULL);
		// pointerEvent.pointerPress = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_104 = V_0;
		NullCheck(L_104);
		PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8(L_104, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// pointerEvent.rawPointerPress = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_105 = V_0;
		NullCheck(L_105);
		PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline(L_105, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// if (pointerEvent.pointerDrag != null && pointerEvent.dragging)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_106 = V_0;
		NullCheck(L_106);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107;
		L_107 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_106, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_107, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_108)
		{
			goto IL_0210;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_109 = V_0;
		NullCheck(L_109);
		bool L_110;
		L_110 = PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline(L_109, NULL);
		G_B25_0 = ((int32_t)(L_110));
		goto IL_0211;
	}

IL_0210:
	{
		G_B25_0 = 0;
	}

IL_0211:
	{
		V_17 = (bool)G_B25_0;
		bool L_111 = V_17;
		if (!L_111)
		{
			goto IL_0229;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerDrag, pointerEvent, ExecuteEvents.endDragHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_112 = V_0;
		NullCheck(L_112);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113;
		L_113 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_112, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_114 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* L_115;
		L_115 = ExecuteEvents_get_endDragHandler_mE78FEEEAE114635E416FF1FE33C851E62B60555B(NULL);
		bool L_116;
		L_116 = ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m6AA443D4F53AF0FEBAC269F761A158635243467E(L_113, L_114, L_115, ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m6AA443D4F53AF0FEBAC269F761A158635243467E_RuntimeMethod_var);
	}

IL_0229:
	{
		// pointerEvent.dragging = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_117 = V_0;
		NullCheck(L_117);
		PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline(L_117, (bool)0, NULL);
		// pointerEvent.pointerDrag = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_118 = V_0;
		NullCheck(L_118);
		PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_118, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// if (currentOverGo != pointerEvent.pointerEnter)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_119 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_120 = V_0;
		NullCheck(L_120);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_121;
		L_121 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(L_120, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_122;
		L_122 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_119, L_121, NULL);
		V_18 = L_122;
		bool L_123 = V_18;
		if (!L_123)
		{
			goto IL_025f;
		}
	}
	{
		// HandlePointerExitAndEnter(pointerEvent, null);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_124 = V_0;
		BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298(__this, L_124, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// HandlePointerExitAndEnter(pointerEvent, currentOverGo);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_125 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126 = V_1;
		BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298(__this, L_125, L_126, NULL);
	}

IL_025f:
	{
	}

IL_0260:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::ProcessMouseEvent(UnityEngine.EventSystems.PointerInputModule/MouseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ProcessMouseEvent_mEF8F3DCD9DEBD00901217A431B8ADD2D15C007BF (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___mouseData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m764A9EE16005FFF9BB7A28EF762E6EB9CFDDA7B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m3BFE4214B6075DAE2F291E508DC912DC72262D2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// var pressed = mouseData.AnyPressesThisFrame();
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_0 = ___mouseData0;
		NullCheck(L_0);
		bool L_1;
		L_1 = MouseState_AnyPressesThisFrame_m4887FF61D58D641496B95C83710C8A4E841970F3(L_0, NULL);
		V_0 = L_1;
		// var released = mouseData.AnyReleasesThisFrame();
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_2 = ___mouseData0;
		NullCheck(L_2);
		bool L_3;
		L_3 = MouseState_AnyReleasesThisFrame_m4FBA37A12735418AD0970F11BC44850517B05E93(L_2, NULL);
		V_1 = L_3;
		// var leftButtonData = mouseData.GetButtonState(PointerEventData.InputButton.Left).eventData;
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_4 = ___mouseData0;
		NullCheck(L_4);
		ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* L_5;
		L_5 = MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51(L_4, 0, NULL);
		NullCheck(L_5);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_6;
		L_6 = ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F(L_5, NULL);
		V_2 = L_6;
		// if (!UseMouse(pressed, released, leftButtonData.buttonData))
		bool L_7 = V_0;
		bool L_8 = V_1;
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_9 = V_2;
		NullCheck(L_9);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = L_9->___buttonData_1;
		bool L_11;
		L_11 = OVRInputModule_UseMouse_mF84F562B4F48BD85BC13A20D9C231DDEF0C9B710(L_7, L_8, L_10, NULL);
		V_3 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0035;
		}
	}
	{
		// return;
		goto IL_0104;
	}

IL_0035:
	{
		// ProcessMousePress(leftButtonData);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_13 = V_2;
		OVRInputModule_ProcessMousePress_m8FB12642E4586D7C5F71ECFA5E56ABE3FFE834E9(__this, L_13, NULL);
		// ProcessMove(leftButtonData.buttonData);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_14 = V_2;
		NullCheck(L_14);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_15 = L_14->___buttonData_1;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(29 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessMove(UnityEngine.EventSystems.PointerEventData) */, __this, L_15);
		// ProcessDrag(leftButtonData.buttonData);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_16 = V_2;
		NullCheck(L_16);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_17 = L_16->___buttonData_1;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(30 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_17);
		// ProcessMousePress(mouseData.GetButtonState(PointerEventData.InputButton.Right).eventData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_18 = ___mouseData0;
		NullCheck(L_18);
		ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* L_19;
		L_19 = MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51(L_18, 1, NULL);
		NullCheck(L_19);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_20;
		L_20 = ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F(L_19, NULL);
		OVRInputModule_ProcessMousePress_m8FB12642E4586D7C5F71ECFA5E56ABE3FFE834E9(__this, L_20, NULL);
		// ProcessDrag(mouseData.GetButtonState(PointerEventData.InputButton.Right).eventData.buttonData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_21 = ___mouseData0;
		NullCheck(L_21);
		ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* L_22;
		L_22 = MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51(L_21, 1, NULL);
		NullCheck(L_22);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_23;
		L_23 = ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F(L_22, NULL);
		NullCheck(L_23);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_24 = L_23->___buttonData_1;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(30 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_24);
		// ProcessMousePress(mouseData.GetButtonState(PointerEventData.InputButton.Middle).eventData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_25 = ___mouseData0;
		NullCheck(L_25);
		ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* L_26;
		L_26 = MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51(L_25, 2, NULL);
		NullCheck(L_26);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_27;
		L_27 = ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F(L_26, NULL);
		OVRInputModule_ProcessMousePress_m8FB12642E4586D7C5F71ECFA5E56ABE3FFE834E9(__this, L_27, NULL);
		// ProcessDrag(mouseData.GetButtonState(PointerEventData.InputButton.Middle).eventData.buttonData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_28 = ___mouseData0;
		NullCheck(L_28);
		ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* L_29;
		L_29 = MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51(L_28, 2, NULL);
		NullCheck(L_29);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_30;
		L_30 = ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F(L_29, NULL);
		NullCheck(L_30);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_31 = L_30->___buttonData_1;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(30 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_31);
		// if (!Mathf.Approximately(leftButtonData.buttonData.scrollDelta.sqrMagnitude, 0.0f))
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_32 = V_2;
		NullCheck(L_32);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_33 = L_32->___buttonData_1;
		NullCheck(L_33);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline(L_33, NULL);
		V_5 = L_34;
		float L_35;
		L_35 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_5), NULL);
		bool L_36;
		L_36 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_35, (0.0f), NULL);
		V_4 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_4;
		if (!L_37)
		{
			goto IL_0104;
		}
	}
	{
		// var scrollHandler = ExecuteEvents.GetEventHandler<IScrollHandler>(leftButtonData.buttonData.pointerCurrentRaycast.gameObject);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_38 = V_2;
		NullCheck(L_38);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_39 = L_38->___buttonData_1;
		NullCheck(L_39);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_40;
		L_40 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_39, NULL);
		V_7 = L_40;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1((&V_7), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = ExecuteEvents_GetEventHandler_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m3BFE4214B6075DAE2F291E508DC912DC72262D2E(L_41, ExecuteEvents_GetEventHandler_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m3BFE4214B6075DAE2F291E508DC912DC72262D2E_RuntimeMethod_var);
		V_6 = L_42;
		// ExecuteEvents.ExecuteHierarchy(scrollHandler, leftButtonData.buttonData, ExecuteEvents.scrollHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_6;
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_44 = V_2;
		NullCheck(L_44);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_45 = L_44->___buttonData_1;
		EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65* L_46;
		L_46 = ExecuteEvents_get_scrollHandler_m51E902070611D3F81AD5F1F5762AE2C48E84AFE2(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m764A9EE16005FFF9BB7A28EF762E6EB9CFDDA7B9(L_43, L_45, L_46, ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m764A9EE16005FFF9BB7A28EF762E6EB9CFDDA7B9_RuntimeMethod_var);
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::Process()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_Process_mAD086AA91AE7346006E455F117A91170045BB53A (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// bool usedEvent = SendUpdateEventToSelectedObject();
		bool L_0;
		L_0 = OVRInputModule_SendUpdateEventToSelectedObject_mF799E28F265830EDBFC991825BEB97D3448472C1(__this, NULL);
		V_0 = L_0;
		// if (eventSystem.sendNavigationEvents)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1;
		L_1 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = EventSystem_get_sendNavigationEvents_m8BA21E58E633B2C5B477E49DAABAD3C97A8158AF(L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// if (!usedEvent)
		bool L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// usedEvent |= SendMoveEventToSelectedObject();
		bool L_6 = V_0;
		bool L_7;
		L_7 = OVRInputModule_SendMoveEventToSelectedObject_mF3C86101342F589244CDA3984DAAEC291C693081(__this, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_6|(int32_t)L_7));
	}

IL_0029:
	{
		// if (!usedEvent)
		bool L_8 = V_0;
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// SendSubmitEventToSelectedObject();
		bool L_10;
		L_10 = OVRInputModule_SendSubmitEventToSelectedObject_mBCBAAAC7FE36D0C8AC77C333EC6376C0BA13A00A(__this, NULL);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// ProcessMouseEvent(GetGazePointerData());
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_11;
		L_11 = VirtualFuncInvoker0< MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* >::Invoke(31 /* UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.OVRInputModule::GetGazePointerData() */, __this);
		OVRInputModule_ProcessMouseEvent_mEF8F3DCD9DEBD00901217A431B8ADD2D15C007BF(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::UseMouse(System.Boolean,System.Boolean,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_UseMouse_mF84F562B4F48BD85BC13A20D9C231DDEF0C9B710 (bool ___pressed0, bool ___released1, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerData2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if (pressed || released || IsPointerMoving(pointerData) || pointerData.IsScrolling())
		bool L_0 = ___pressed0;
		bool L_1 = ___released1;
		if (((int32_t)((int32_t)L_0|(int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___pointerData2;
		bool L_3;
		L_3 = OVRInputModule_IsPointerMoving_m5D57E25B238B95FDD5BE45DA3A377529345FD186(L_2, NULL);
		if (L_3)
		{
			goto IL_0016;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___pointerData2;
		NullCheck(L_4);
		bool L_5;
		L_5 = PointerEventData_IsScrolling_mFB78E050A248CDF5221482334808B82500D0A564(L_4, NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_0017;
	}

IL_0016:
	{
		G_B4_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0023;
	}

IL_001f:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::CopyFromTo(UnityEngine.EventSystems.OVRPointerEventData,UnityEngine.EventSystems.OVRPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_CopyFromTo_m7469C2E36FBE72A7109BC094DC3B19651698A691 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ___from0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ___to1, const RuntimeMethod* method) 
{
	{
		// @to.position = @from.position;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_0 = ___to1;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_1 = ___from0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		NullCheck(L_0);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_0, L_2, NULL);
		// @to.delta = @from.delta;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_3 = ___to1;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_4 = ___from0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_4, NULL);
		NullCheck(L_3);
		PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline(L_3, L_5, NULL);
		// @to.scrollDelta = @from.scrollDelta;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_6 = ___to1;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_7 = ___from0;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline(L_7, NULL);
		NullCheck(L_6);
		PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline(L_6, L_8, NULL);
		// @to.pointerCurrentRaycast = @from.pointerCurrentRaycast;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_9 = ___to1;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_10 = ___from0;
		NullCheck(L_10);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_11;
		L_11 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_10, NULL);
		NullCheck(L_9);
		PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline(L_9, L_11, NULL);
		// @to.pointerEnter = @from.pointerEnter;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_12 = ___to1;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_13 = ___from0;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(L_13, NULL);
		NullCheck(L_12);
		PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline(L_12, L_14, NULL);
		// @to.worldSpaceRay = @from.worldSpaceRay;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_15 = ___to1;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_16 = ___from0;
		NullCheck(L_16);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = L_16->___worldSpaceRay_33;
		NullCheck(L_15);
		L_15->___worldSpaceRay_33 = L_17;
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_CopyFromTo_m37C59AD69F91D8C3A407B94FC6D182F9B2F035C8 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___from0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___to1, const RuntimeMethod* method) 
{
	{
		// @to.position = @from.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___to1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___from0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		NullCheck(L_0);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_0, L_2, NULL);
		// @to.delta = @from.delta;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___to1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___from0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_4, NULL);
		NullCheck(L_3);
		PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline(L_3, L_5, NULL);
		// @to.scrollDelta = @from.scrollDelta;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___to1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___from0;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline(L_7, NULL);
		NullCheck(L_6);
		PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline(L_6, L_8, NULL);
		// @to.pointerCurrentRaycast = @from.pointerCurrentRaycast;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_9 = ___to1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = ___from0;
		NullCheck(L_10);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_11;
		L_11 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_10, NULL);
		NullCheck(L_9);
		PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline(L_9, L_11, NULL);
		// @to.pointerEnter = @from.pointerEnter;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = ___to1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = ___from0;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(L_13, NULL);
		NullCheck(L_12);
		PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline(L_12, L_14, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.OVRPointerEventData&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, int32_t ___id0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** ___data1, bool ___create2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m512E97E36FC083FBFAFE025842BE8237F6350ADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2A24573C40622EB90B3DEFD32113AABC59940447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!m_VRRayPointerData.TryGetValue(id, out data) && create)
		Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* L_0 = __this->___m_VRRayPointerData_40;
		int32_t L_1 = ___id0;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** L_2 = ___data1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m2A24573C40622EB90B3DEFD32113AABC59940447(L_0, L_1, L_2, Dictionary_2_TryGetValue_m2A24573C40622EB90B3DEFD32113AABC59940447_RuntimeMethod_var);
		bool L_4 = ___create2;
		V_0 = (bool)((int32_t)(((((int32_t)L_3) == ((int32_t)0))? 1 : 0)&(int32_t)L_4));
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// data = new OVRPointerEventData(eventSystem)
		// {
		//     pointerId = id,
		// };
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** L_6 = ___data1;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_7;
		L_7 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_8 = (OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)il2cpp_codegen_object_new(OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		OVRPointerEventData__ctor_mF3624D599F08C10D0D2E14CB8E8016AEC1FFA1B9(L_8, L_7, NULL);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_9 = L_8;
		int32_t L_10 = ___id0;
		NullCheck(L_9);
		PointerEventData_set_pointerId_m5B5FF54AB1DE7BD4454022A7C0535C618049BD9B_inline(L_9, L_10, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_9);
		// m_VRRayPointerData.Add(id, data);
		Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* L_11 = __this->___m_VRRayPointerData_40;
		int32_t L_12 = ___id0;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** L_13 = ___data1;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_14 = *((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D**)L_13);
		NullCheck(L_11);
		Dictionary_2_Add_m512E97E36FC083FBFAFE025842BE8237F6350ADA(L_11, L_12, L_14, Dictionary_2_Add_m512E97E36FC083FBFAFE025842BE8237F6350ADA_RuntimeMethod_var);
		// return true;
		V_1 = (bool)1;
		goto IL_0044;
	}

IL_0040:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		bool L_15 = V_1;
		return L_15;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ClearSelection_m8BB4DB17CCE3F2897281E77858D85C9A8E218906 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mBB95A511CAA4D6BCF1D6EC54722BCA4DA4B37CF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m1E6873716F54341B48F90A1BAD7909BF8DF33429_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m3B581D1E2D9D47BCC3513DC77CC6C6F8718F13DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1CF97DE800C326E6EF6C7599AA385EC109C21ED3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9FC32AA198E53E701EEAF271527A221A8F363A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m66996C54FC3C3A499A738BD4A3E50CE3EAD5082B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA415C7B94AC3728AFA7791318E9210FC5EEFAB58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8515E9D5662F47A89C296550439BBD4DA548AE6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA8B955F9BDD498641D4406EF93DD9B4325F2D642_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m0124B7611A2B03F480EB52872F7A1B24F0CA6EDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m1F9346AEC811FD3F8FF694F13BAED581F93252EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* V_0 = NULL;
	Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_2 = NULL;
	Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392 V_3;
	memset((&V_3), 0, sizeof(V_3));
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* V_4 = NULL;
	{
		// var baseEventData = GetBaseEventData();
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0;
		L_0 = VirtualFuncInvoker0< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		V_0 = L_0;
		// foreach (var pointer in m_PointerData.Values)
		Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* L_1 = ((PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556*)__this)->___m_PointerData_15;
		NullCheck(L_1);
		ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41* L_2;
		L_2 = Dictionary_2_get_Values_m3B581D1E2D9D47BCC3513DC77CC6C6F8718F13DC(L_1, Dictionary_2_get_Values_m3B581D1E2D9D47BCC3513DC77CC6C6F8718F13DC_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294 L_3;
		L_3 = ValueCollection_GetEnumerator_m0124B7611A2B03F480EB52872F7A1B24F0CA6EDC(L_2, ValueCollection_GetEnumerator_m0124B7611A2B03F480EB52872F7A1B24F0CA6EDC_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9FC32AA198E53E701EEAF271527A221A8F363A86((&V_1), Enumerator_Dispose_m9FC32AA198E53E701EEAF271527A221A8F363A86_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_001c_1:
			{
				// foreach (var pointer in m_PointerData.Values)
				PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4;
				L_4 = Enumerator_get_Current_m8515E9D5662F47A89C296550439BBD4DA548AE6A_inline((&V_1), Enumerator_get_Current_m8515E9D5662F47A89C296550439BBD4DA548AE6A_RuntimeMethod_var);
				V_2 = L_4;
				// HandlePointerExitAndEnter(pointer, null);
				PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = V_2;
				BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298(__this, L_5, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
			}

IL_002f_1:
			{
				// foreach (var pointer in m_PointerData.Values)
				bool L_6;
				L_6 = Enumerator_MoveNext_mA415C7B94AC3728AFA7791318E9210FC5EEFAB58((&V_1), Enumerator_MoveNext_mA415C7B94AC3728AFA7791318E9210FC5EEFAB58_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// foreach (var pointer in m_VRRayPointerData.Values)
		Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* L_7 = __this->___m_VRRayPointerData_40;
		NullCheck(L_7);
		ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB* L_8;
		L_8 = Dictionary_2_get_Values_m1E6873716F54341B48F90A1BAD7909BF8DF33429(L_7, Dictionary_2_get_Values_m1E6873716F54341B48F90A1BAD7909BF8DF33429_RuntimeMethod_var);
		NullCheck(L_8);
		Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392 L_9;
		L_9 = ValueCollection_GetEnumerator_m1F9346AEC811FD3F8FF694F13BAED581F93252EA(L_8, ValueCollection_GetEnumerator_m1F9346AEC811FD3F8FF694F13BAED581F93252EA_RuntimeMethod_var);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1CF97DE800C326E6EF6C7599AA385EC109C21ED3((&V_3), Enumerator_Dispose_m1CF97DE800C326E6EF6C7599AA385EC109C21ED3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0072_1;
			}

IL_005d_1:
			{
				// foreach (var pointer in m_VRRayPointerData.Values)
				OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_10;
				L_10 = Enumerator_get_Current_mA8B955F9BDD498641D4406EF93DD9B4325F2D642_inline((&V_3), Enumerator_get_Current_mA8B955F9BDD498641D4406EF93DD9B4325F2D642_RuntimeMethod_var);
				V_4 = L_10;
				// HandlePointerExitAndEnter(pointer, null);
				OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_11 = V_4;
				BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298(__this, L_11, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
			}

IL_0072_1:
			{
				// foreach (var pointer in m_VRRayPointerData.Values)
				bool L_12;
				L_12 = Enumerator_MoveNext_m66996C54FC3C3A499A738BD4A3E50CE3EAD5082B((&V_3), Enumerator_MoveNext_m66996C54FC3C3A499A738BD4A3E50CE3EAD5082B_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_005d_1;
				}
			}
			{
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		// m_PointerData.Clear();
		Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* L_13 = ((PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556*)__this)->___m_PointerData_15;
		NullCheck(L_13);
		Dictionary_2_Clear_mBB95A511CAA4D6BCF1D6EC54722BCA4DA4B37CF9(L_13, Dictionary_2_Clear_mBB95A511CAA4D6BCF1D6EC54722BCA4DA4B37CF9_RuntimeMethod_var);
		// eventSystem.SetSelectedGameObject(null, baseEventData);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_14;
		L_14 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_15 = V_0;
		NullCheck(L_14);
		EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173(L_14, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, L_15, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.EventSystems.OVRInputModule::GetRectTransformNormal(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRInputModule_GetRectTransformNormal_mF03B37932F37A309381C3EBF51CAA0FE7C1BF348 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3[] corners = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// rectTransform.GetWorldCorners(corners);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___rectTransform0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_0;
		NullCheck(L_1);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_1, L_2, NULL);
		// Vector3 BottomEdge = corners[3] - corners[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_8, NULL);
		V_1 = L_9;
		// Vector3 LeftEdge = corners[1] - corners[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_15, NULL);
		V_2 = L_16;
		// rectTransform.GetWorldCorners(corners);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ___rectTransform0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_0;
		NullCheck(L_17);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_17, L_18, NULL);
		// return Vector3.Cross(BottomEdge, LeftEdge).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_19, L_20, NULL);
		V_3 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_4 = L_22;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_4;
		return L_23;
	}
}
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.OVRInputModule::GetGazePointerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* OVRInputModule_GetGazePointerData_m2F1B5254C796E2677281553493A295B0AD89857F (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* V_0 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_1;
	memset((&V_1), 0, sizeof(V_1));
	OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* V_2 = NULL;
	OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* V_3 = NULL;
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* V_4 = NULL;
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* V_5 = NULL;
	bool V_6 = false;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_7 = NULL;
	bool V_8 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_14 = NULL;
	bool V_15 = false;
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* V_16 = NULL;
	int32_t G_B9_0 = 0;
	{
		// GetPointerData(kMouseLeftId, out leftData, true );
		bool L_0;
		L_0 = OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0(__this, (-1), (&V_0), (bool)1, NULL);
		// leftData.Reset();
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_1 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(4 /* System.Void UnityEngine.EventSystems.AbstractEventData::Reset() */, L_1);
		// leftData.worldSpaceRay = new Ray(rayTransform.position, rayTransform.forward);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_2 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___rayTransform_17;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___rayTransform_17;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_7), L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->___worldSpaceRay_33 = L_7;
		// leftData.scrollDelta = GetExtraScrollDelta();
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = OVRInputModule_GetExtraScrollDelta_mE441287D8A96D1E47BF5B28F8E61CF9CEA888AC5(__this, NULL);
		NullCheck(L_8);
		PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline(L_8, L_9, NULL);
		// leftData.button = PointerEventData.InputButton.Left;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_10 = V_0;
		NullCheck(L_10);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_10, 0, NULL);
		// leftData.useDragThreshold = true;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_11 = V_0;
		NullCheck(L_11);
		PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline(L_11, (bool)1, NULL);
		// eventSystem.RaycastAll(leftData, m_RaycastResultCache);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_12;
		L_12 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_13 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_14 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		NullCheck(L_12);
		EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528(L_12, L_13, L_14, NULL);
		// var raycast = FindFirstRaycast(m_RaycastResultCache);
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_15 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_16;
		L_16 = BaseInputModule_FindFirstRaycast_mE07BDA14A7C9A8E3DFBFDAF449E5896597C9F6F5(L_15, NULL);
		V_1 = L_16;
		// leftData.pointerCurrentRaycast = raycast;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_17 = V_0;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_18 = V_1;
		NullCheck(L_17);
		PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline(L_17, L_18, NULL);
		// m_RaycastResultCache.Clear();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_19 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		NullCheck(L_19);
		List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_inline(L_19, List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var);
		// m_Cursor.SetCursorRay(rayTransform);
		OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A* L_20 = __this->___m_Cursor_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___rayTransform_17;
		NullCheck(L_20);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(4 /* System.Void OVRCursor::SetCursorRay(UnityEngine.Transform) */, L_20, L_21);
		// OVRRaycaster ovrRaycaster = raycast.module as OVRRaycaster;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_22 = V_1;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_23 = L_22.___module_1;
		V_2 = ((OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182*)IsInstClass((RuntimeObject*)L_23, OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_il2cpp_TypeInfo_var));
		// if (ovrRaycaster)
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_24 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_0108;
		}
	}
	{
		// leftData.position = ovrRaycaster.GetScreenPosition(raycast);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_27 = V_0;
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_28 = V_2;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_29 = V_1;
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = OVRRaycaster_GetScreenPosition_mE54FD696C615E1CFF7E7AE19F0F9B95AB084617A(L_28, L_29, NULL);
		NullCheck(L_27);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_27, L_30, NULL);
		// RectTransform graphicRect = raycast.gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1((&V_1), NULL);
		NullCheck(L_31);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32;
		L_32 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_31, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		V_7 = L_32;
		// if (graphicRect != null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_33 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_8 = L_34;
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_0107;
		}
	}
	{
		// Vector3 worldPos = raycast.worldPosition;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_36 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___worldPosition_7;
		V_9 = L_37;
		// Vector3 normal = GetRectTransformNormal(graphicRect);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = OVRInputModule_GetRectTransformNormal_mF03B37932F37A309381C3EBF51CAA0FE7C1BF348(L_38, NULL);
		V_10 = L_39;
		// m_Cursor.SetCursorStartDest(rayTransform.position, worldPos, normal);
		OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A* L_40 = __this->___m_Cursor_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___rayTransform_17;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_10;
		NullCheck(L_40);
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Void OVRCursor::SetCursorStartDest(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3) */, L_40, L_42, L_43, L_44);
	}

IL_0107:
	{
	}

IL_0108:
	{
		// OVRPhysicsRaycaster physicsRaycaster = raycast.module as OVRPhysicsRaycaster;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_45 = V_1;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_46 = L_45.___module_1;
		V_3 = ((OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7*)IsInstClass((RuntimeObject*)L_46, OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7_il2cpp_TypeInfo_var));
		// if (physicsRaycaster)
		OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* L_47 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_47, NULL);
		V_11 = L_48;
		bool L_49 = V_11;
		if (!L_49)
		{
			goto IL_01bd;
		}
	}
	{
		// Vector3 position =  raycast.worldPosition;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_50 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = L_50.___worldPosition_7;
		V_12 = L_51;
		// if (performSphereCastForGazepointer)
		bool L_52 = __this->___performSphereCastForGazepointer_21;
		V_13 = L_52;
		bool L_53 = V_13;
		if (!L_53)
		{
			goto IL_018a;
		}
	}
	{
		// List<RaycastResult> results = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_54 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_54, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_14 = L_54;
		// physicsRaycaster.Spherecast(leftData, results, m_SpherecastRadius);
		OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* L_55 = V_3;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_56 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_57 = V_14;
		float L_58 = __this->___m_SpherecastRadius_30;
		NullCheck(L_55);
		OVRPhysicsRaycaster_Spherecast_m5C0B2A941C9D1F9C92A2AD1026510DC5D64E9945(L_55, L_56, L_57, L_58, NULL);
		// if (results.Count > 0 && results[0].distance < raycast.distance)
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_59 = V_14;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_59, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			goto IL_0171;
		}
	}
	{
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_61 = V_14;
		NullCheck(L_61);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_62;
		L_62 = List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA(L_61, 0, List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var);
		float L_63 = L_62.___distance_2;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_64 = V_1;
		float L_65 = L_64.___distance_2;
		G_B9_0 = ((((float)L_63) < ((float)L_65))? 1 : 0);
		goto IL_0172;
	}

IL_0171:
	{
		G_B9_0 = 0;
	}

IL_0172:
	{
		V_15 = (bool)G_B9_0;
		bool L_66 = V_15;
		if (!L_66)
		{
			goto IL_0189;
		}
	}
	{
		// position = results[0].worldPosition;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_67 = V_14;
		NullCheck(L_67);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_68;
		L_68 = List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA(L_67, 0, List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = L_68.___worldPosition_7;
		V_12 = L_69;
	}

IL_0189:
	{
	}

IL_018a:
	{
		// leftData.position = physicsRaycaster.GetScreenPos(raycast.worldPosition);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_70 = V_0;
		OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* L_71 = V_3;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_72 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = L_72.___worldPosition_7;
		NullCheck(L_71);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		L_74 = OVRPhysicsRaycaster_GetScreenPos_mAD6CC9D4FC2F01C2CBFA281660E8BC7B3C3C0A84(L_71, L_73, NULL);
		NullCheck(L_70);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_70, L_74, NULL);
		// m_Cursor.SetCursorStartDest(rayTransform.position, position, raycast.worldNormal);
		OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A* L_75 = __this->___m_Cursor_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76 = __this->___rayTransform_17;
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_12;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_79 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = L_79.___worldNormal_8;
		NullCheck(L_75);
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Void OVRCursor::SetCursorStartDest(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3) */, L_75, L_77, L_78, L_80);
	}

IL_01bd:
	{
		// GetPointerData(kMouseRightId, out rightData, true );
		bool L_81;
		L_81 = OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0(__this, ((int32_t)-2), (&V_4), (bool)1, NULL);
		// CopyFromTo(leftData, rightData);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_82 = V_0;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_83 = V_4;
		OVRInputModule_CopyFromTo_m7469C2E36FBE72A7109BC094DC3B19651698A691(__this, L_82, L_83, NULL);
		// rightData.button = PointerEventData.InputButton.Right;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_84 = V_4;
		NullCheck(L_84);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_84, 1, NULL);
		// GetPointerData(kMouseMiddleId, out middleData, true );
		bool L_85;
		L_85 = OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0(__this, ((int32_t)-3), (&V_5), (bool)1, NULL);
		// CopyFromTo(leftData, middleData);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_86 = V_0;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_87 = V_5;
		OVRInputModule_CopyFromTo_m7469C2E36FBE72A7109BC094DC3B19651698A691(__this, L_86, L_87, NULL);
		// middleData.button = PointerEventData.InputButton.Middle;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_88 = V_5;
		NullCheck(L_88);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_88, 2, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Left, GetGazeButtonState(), leftData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_89 = __this->___m_MouseState_41;
		int32_t L_90;
		L_90 = VirtualFuncInvoker0< int32_t >::Invoke(32 /* UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.OVRInputModule::GetGazeButtonState() */, __this);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_91 = V_0;
		NullCheck(L_89);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_89, 0, L_90, L_91, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Right, PointerEventData.FramePressState.NotChanged, rightData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_92 = __this->___m_MouseState_41;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_93 = V_4;
		NullCheck(L_92);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_92, 1, 3, L_93, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Middle, PointerEventData.FramePressState.NotChanged, middleData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_94 = __this->___m_MouseState_41;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_95 = V_5;
		NullCheck(L_94);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_94, 2, 3, L_95, NULL);
		// return m_MouseState;
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_96 = __this->___m_MouseState_41;
		V_16 = L_96;
		goto IL_0239;
	}

IL_0239:
	{
		// }
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_97 = V_16;
		return L_97;
	}
}
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.OVRInputModule::GetCanvasPointerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* OVRInputModule_GetCanvasPointerData_mA781BE0613EB11DCE69F0ECC0079443A7DCB15E4 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_1 = NULL;
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_2 = NULL;
	bool V_3 = false;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_4;
	memset((&V_4), 0, sizeof(V_4));
	OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* V_5 = NULL;
	bool V_6 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* V_8 = NULL;
	{
		// GetPointerData(kMouseLeftId, out leftData, true );
		bool L_0;
		L_0 = PointerInputModule_GetPointerData_m8D1C52EE44136560312932072786A2B5AA2C8BE5(__this, (-1), (&V_0), (bool)1, NULL);
		// leftData.Reset();
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(4 /* System.Void UnityEngine.EventSystems.AbstractEventData::Reset() */, L_1);
		// leftData.position = Vector2.zero;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_2);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_2, L_3, NULL);
		// leftData.scrollDelta = Input.mouseScrollDelta;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74(NULL);
		NullCheck(L_4);
		PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline(L_4, L_5, NULL);
		// leftData.button = PointerEventData.InputButton.Left;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = V_0;
		NullCheck(L_6);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_6, 0, NULL);
		// if (activeGraphicRaycaster)
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_7 = __this->___activeGraphicRaycaster_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00be;
		}
	}
	{
		// activeGraphicRaycaster.RaycastPointer(leftData, m_RaycastResultCache);
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_10 = __this->___activeGraphicRaycaster_28;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_12 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		NullCheck(L_10);
		OVRRaycaster_RaycastPointer_m5ECFC6B6EF2F57D5DE2C07AD91CEB698CE29E4BB(L_10, L_11, L_12, NULL);
		// var raycast = FindFirstRaycast(m_RaycastResultCache);
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_13 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_14;
		L_14 = BaseInputModule_FindFirstRaycast_mE07BDA14A7C9A8E3DFBFDAF449E5896597C9F6F5(L_13, NULL);
		V_4 = L_14;
		// leftData.pointerCurrentRaycast = raycast;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_15 = V_0;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_16 = V_4;
		NullCheck(L_15);
		PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline(L_15, L_16, NULL);
		// m_RaycastResultCache.Clear();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_17 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		NullCheck(L_17);
		List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_inline(L_17, List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var);
		// OVRRaycaster ovrRaycaster = raycast.module as OVRRaycaster;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_18 = V_4;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_19 = L_18.___module_1;
		V_5 = ((OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182*)IsInstClass((RuntimeObject*)L_19, OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_il2cpp_TypeInfo_var));
		// if (ovrRaycaster) // raycast may not actually contain a result
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_20 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00bd;
		}
	}
	{
		// Vector2 position = ovrRaycaster.GetScreenPosition(raycast);
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_23 = V_5;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_24 = V_4;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = OVRRaycaster_GetScreenPosition_mE54FD696C615E1CFF7E7AE19F0F9B95AB084617A(L_23, L_24, NULL);
		V_7 = L_25;
		// leftData.delta = position - leftData.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_26 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_7;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_28 = V_0;
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_28, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_27, L_29, NULL);
		NullCheck(L_26);
		PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline(L_26, L_30, NULL);
		// leftData.position = position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_31 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_7;
		NullCheck(L_31);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_31, L_32, NULL);
	}

IL_00bd:
	{
	}

IL_00be:
	{
		// GetPointerData(kMouseRightId, out rightData, true );
		bool L_33;
		L_33 = PointerInputModule_GetPointerData_m8D1C52EE44136560312932072786A2B5AA2C8BE5(__this, ((int32_t)-2), (&V_1), (bool)1, NULL);
		// CopyFromTo(leftData, rightData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_34 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_35 = V_1;
		OVRInputModule_CopyFromTo_m37C59AD69F91D8C3A407B94FC6D182F9B2F035C8(__this, L_34, L_35, NULL);
		// rightData.button = PointerEventData.InputButton.Right;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_36 = V_1;
		NullCheck(L_36);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_36, 1, NULL);
		// GetPointerData(kMouseMiddleId, out middleData, true );
		bool L_37;
		L_37 = PointerInputModule_GetPointerData_m8D1C52EE44136560312932072786A2B5AA2C8BE5(__this, ((int32_t)-3), (&V_2), (bool)1, NULL);
		// CopyFromTo(leftData, middleData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_38 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_39 = V_2;
		OVRInputModule_CopyFromTo_m37C59AD69F91D8C3A407B94FC6D182F9B2F035C8(__this, L_38, L_39, NULL);
		// middleData.button = PointerEventData.InputButton.Middle;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_40 = V_2;
		NullCheck(L_40);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_40, 2, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Left, StateForMouseButton(0), leftData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_41 = __this->___m_MouseState_41;
		int32_t L_42;
		L_42 = PointerInputModule_StateForMouseButton_mED5B48F98F706160F97A26511FB82BD84DBAB0CF(__this, 0, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_43 = V_0;
		NullCheck(L_41);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_41, 0, L_42, L_43, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Right, StateForMouseButton(1), rightData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_44 = __this->___m_MouseState_41;
		int32_t L_45;
		L_45 = PointerInputModule_StateForMouseButton_mED5B48F98F706160F97A26511FB82BD84DBAB0CF(__this, 1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_46 = V_1;
		NullCheck(L_44);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_44, 1, L_45, L_46, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Middle, StateForMouseButton(2), middleData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_47 = __this->___m_MouseState_41;
		int32_t L_48;
		L_48 = PointerInputModule_StateForMouseButton_mED5B48F98F706160F97A26511FB82BD84DBAB0CF(__this, 2, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_49 = V_2;
		NullCheck(L_47);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_47, 2, L_48, L_49, NULL);
		// return m_MouseState;
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_50 = __this->___m_MouseState_41;
		V_8 = L_50;
		goto IL_0141;
	}

IL_0141:
	{
		// }
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_51 = V_8;
		return L_51;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::ShouldStartDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_ShouldStartDrag_mCF231D4DB00DDD77F5A5DCA8D35FBC1F47844AF6 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEvent0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t G_B7_0 = 0;
	{
		// if (!pointerEvent.useDragThreshold)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___pointerEvent0;
		NullCheck(L_0);
		bool L_1;
		L_1 = PointerEventData_get_useDragThreshold_m3ED1F39E71630C9AB1F340C92F8FA39AA489E1C5_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0107;
	}

IL_0015:
	{
		// if (!pointerEvent.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___pointerEvent0;
		bool L_4;
		L_4 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		// return (pointerEvent.pressPosition - pointerEvent.position).sqrMagnitude >= eventSystem.pixelDragThreshold * eventSystem.pixelDragThreshold;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___pointerEvent0;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_6, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = ___pointerEvent0;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_7, L_9, NULL);
		V_3 = L_10;
		float L_11;
		L_11 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_3), NULL);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_12;
		L_12 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = EventSystem_get_pixelDragThreshold_m2F7B0D1B5ACC63EB507FD7CCFE74F2B2804FF2E3(L_12, NULL);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_14;
		L_14 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = EventSystem_get_pixelDragThreshold_m2F7B0D1B5ACC63EB507FD7CCFE74F2B2804FF2E3(L_14, NULL);
		V_1 = (bool)((((int32_t)((!(((float)L_11) >= ((float)((float)((int32_t)il2cpp_codegen_multiply(L_13, L_15))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0107;
	}

IL_005f:
	{
		// if (useSwipeScroll && ((Vector3)pointerEvent.GetSwipeStart() - Input.mousePosition).magnitude > swipeDragThreshold)
		bool L_16 = __this->___useSwipeScroll_24;
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_17 = ___pointerEvent0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = PointerEventDataExtension_GetSwipeStart_m09ED39DC9E87EDFB80926815E29A3B130E3CA586(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_19, L_20, NULL);
		V_8 = L_21;
		float L_22;
		L_22 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_8), NULL);
		float L_23 = __this->___swipeDragThreshold_25;
		G_B7_0 = ((((float)L_22) > ((float)L_23))? 1 : 0);
		goto IL_0091;
	}

IL_0090:
	{
		G_B7_0 = 0;
	}

IL_0091:
	{
		V_7 = (bool)G_B7_0;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_009c;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0107;
	}

IL_009c:
	{
		// Vector3 cameraPos = pointerEvent.pressEventCamera.transform.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_25 = ___pointerEvent0;
		NullCheck(L_25);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26;
		L_26 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_25, NULL);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		V_4 = L_28;
		// Vector3 pressDir = (pointerEvent.pointerPressRaycast.worldPosition - cameraPos).normalized;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_29 = ___pointerEvent0;
		NullCheck(L_29);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_30;
		L_30 = PointerEventData_get_pointerPressRaycast_mEB1B974F5543F78162984E2924EF908E18CE3B5D_inline(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30.___worldPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_31, L_32, NULL);
		V_8 = L_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_8), NULL);
		V_5 = L_34;
		// Vector3 currentDir = (pointerEvent.pointerCurrentRaycast.worldPosition - cameraPos).normalized;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_35 = ___pointerEvent0;
		NullCheck(L_35);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_36;
		L_36 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___worldPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_37, L_38, NULL);
		V_8 = L_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_8), NULL);
		V_6 = L_40;
		// return Vector3.Dot(pressDir, currentDir) < Mathf.Cos(Mathf.Deg2Rad * (angleDragThreshold));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_6;
		float L_43;
		L_43 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_41, L_42, NULL);
		float L_44 = __this->___angleDragThreshold_29;
		float L_45;
		L_45 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_44)));
		V_1 = (bool)((((float)L_43) < ((float)L_45))? 1 : 0);
		goto IL_0107;
	}

IL_0107:
	{
		// }
		bool L_46 = V_1;
		return L_46;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::IsPointerMoving(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_IsPointerMoving_m5D57E25B238B95FDD5BE45DA3A377529345FD186 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEvent0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (pointerEvent.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___pointerEvent0;
		bool L_1;
		L_1 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0018;
	}

IL_000f:
	{
		// return pointerEvent.IsPointerMoving();
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___pointerEvent0;
		NullCheck(L_3);
		bool L_4;
		L_4 = PointerEventData_IsPointerMoving_m281B3698E618D116F3D1E7473BADFAE5B67C834E(L_3, NULL);
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::SwipeAdjustedPosition(UnityEngine.Vector2,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_SwipeAdjustedPosition_mA47A3CED9DE48B6338F6DF0D0D43245705962EEC (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___originalPosition0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEvent1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (useSwipeScroll)
		bool L_0 = __this->___useSwipeScroll_24;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		// Vector2 delta =  (Vector2)Input.mousePosition - pointerEvent.GetSwipeStart();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___pointerEvent1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventDataExtension_GetSwipeStart_m09ED39DC9E87EDFB80926815E29A3B130E3CA586(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_3, L_5, NULL);
		V_1 = L_6;
		// if (InvertSwipeXAxis)
		bool L_7 = __this->___InvertSwipeXAxis_27;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// delta.x *= -1;
		float* L_9 = (&(&V_1)->___x_0);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		*((float*)L_10) = (float)((float)il2cpp_codegen_multiply(L_11, (-1.0f)));
	}

IL_003c:
	{
		// return originalPosition + delta * swipeDragScale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___originalPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		float L_14 = __this->___swipeDragScale_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_13, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_12, L_15, NULL);
		V_3 = L_16;
		goto IL_0055;
	}

IL_0051:
	{
		// return originalPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___originalPosition0;
		V_3 = L_17;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_3;
		return L_18;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ProcessDrag_m2782747DF3402E604A05276895FA5BA518D34F40 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m1543843C77436B385445DCDE0E472112C8E40F87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mAE71323F63A667FE0A4F8B9B0E27C6012B28FFE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// Vector2 originalPosition = pointerEvent.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___pointerEvent0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_0, NULL);
		V_0 = L_1;
		// bool moving = IsPointerMoving(pointerEvent);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___pointerEvent0;
		bool L_3;
		L_3 = OVRInputModule_IsPointerMoving_m5D57E25B238B95FDD5BE45DA3A377529345FD186(L_2, NULL);
		V_1 = L_3;
		// if (moving && pointerEvent.pointerDrag != null
		//     && !pointerEvent.dragging
		//     && ShouldStartDrag(pointerEvent))
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___pointerEvent0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = ___pointerEvent0;
		NullCheck(L_8);
		bool L_9;
		L_9 = PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = ___pointerEvent0;
		bool L_11;
		L_11 = OVRInputModule_ShouldStartDrag_mCF231D4DB00DDD77F5A5DCA8D35FBC1F47844AF6(__this, L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = 0;
	}

IL_0032:
	{
		V_2 = (bool)G_B5_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		// if (pointerEvent.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = ___pointerEvent0;
		bool L_14;
		L_14 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0052;
		}
	}
	{
		// pointerEvent.position = SwipeAdjustedPosition (originalPosition, pointerEvent);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_16 = ___pointerEvent0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_18 = ___pointerEvent0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = OVRInputModule_SwipeAdjustedPosition_mA47A3CED9DE48B6338F6DF0D0D43245705962EEC(__this, L_17, L_18, NULL);
		NullCheck(L_16);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_16, L_19, NULL);
	}

IL_0052:
	{
		// ExecuteEvents.Execute(pointerEvent.pointerDrag, pointerEvent, ExecuteEvents.beginDragHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_20 = ___pointerEvent0;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_20, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_22 = ___pointerEvent0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* L_23;
		L_23 = ExecuteEvents_get_beginDragHandler_mB0BEAC09E4A8F31438B07FE68A5BF7267FF8C2FC(NULL);
		bool L_24;
		L_24 = ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m1543843C77436B385445DCDE0E472112C8E40F87(L_21, L_22, L_23, ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m1543843C77436B385445DCDE0E472112C8E40F87_RuntimeMethod_var);
		// pointerEvent.dragging = true;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_25 = ___pointerEvent0;
		NullCheck(L_25);
		PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline(L_25, (bool)1, NULL);
	}

IL_006d:
	{
		// if (pointerEvent.dragging && moving && pointerEvent.pointerDrag != null)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_26 = ___pointerEvent0;
		NullCheck(L_26);
		bool L_27;
		L_27 = PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline(L_26, NULL);
		bool L_28 = V_1;
		if (!((int32_t)((int32_t)L_27&(int32_t)L_28)))
		{
			goto IL_0085;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_29 = ___pointerEvent0;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B12_0 = ((int32_t)(L_31));
		goto IL_0086;
	}

IL_0085:
	{
		G_B12_0 = 0;
	}

IL_0086:
	{
		V_4 = (bool)G_B12_0;
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_0100;
		}
	}
	{
		// if (pointerEvent.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_33 = ___pointerEvent0;
		bool L_34;
		L_34 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_33, NULL);
		V_5 = L_34;
		bool L_35 = V_5;
		if (!L_35)
		{
			goto IL_00aa;
		}
	}
	{
		// pointerEvent.position = SwipeAdjustedPosition(originalPosition, pointerEvent);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_36 = ___pointerEvent0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_38 = ___pointerEvent0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = OVRInputModule_SwipeAdjustedPosition_mA47A3CED9DE48B6338F6DF0D0D43245705962EEC(__this, L_37, L_38, NULL);
		NullCheck(L_36);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_36, L_39, NULL);
	}

IL_00aa:
	{
		// if (pointerEvent.pointerPress != pointerEvent.pointerDrag)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_40 = ___pointerEvent0;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A(L_40, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_42 = ___pointerEvent0;
		NullCheck(L_42);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_42, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_41, L_43, NULL);
		V_6 = L_44;
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00ed;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerPress, pointerEvent, ExecuteEvents.pointerUpHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_46 = ___pointerEvent0;
		NullCheck(L_46);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A(L_46, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_48 = ___pointerEvent0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* L_49;
		L_49 = ExecuteEvents_get_pointerUpHandler_m51B83B4AD7498D6F7A2CBD5F2331E91A37AE4CF2(NULL);
		bool L_50;
		L_50 = ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6(L_47, L_48, L_49, ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var);
		// pointerEvent.eligibleForClick = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_51 = ___pointerEvent0;
		NullCheck(L_51);
		PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline(L_51, (bool)0, NULL);
		// pointerEvent.pointerPress = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_52 = ___pointerEvent0;
		NullCheck(L_52);
		PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8(L_52, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// pointerEvent.rawPointerPress = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_53 = ___pointerEvent0;
		NullCheck(L_53);
		PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline(L_53, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
	}

IL_00ed:
	{
		// ExecuteEvents.Execute(pointerEvent.pointerDrag, pointerEvent, ExecuteEvents.dragHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_54 = ___pointerEvent0;
		NullCheck(L_54);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_54, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_56 = ___pointerEvent0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* L_57;
		L_57 = ExecuteEvents_get_dragHandler_m9193926B9685C80C0560C2E105FF6150C4EAE507(NULL);
		bool L_58;
		L_58 = ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mAE71323F63A667FE0A4F8B9B0E27C6012B28FFE8(L_55, L_56, L_57, ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mAE71323F63A667FE0A4F8B9B0E27C6012B28FFE8_RuntimeMethod_var);
	}

IL_0100:
	{
		// }
		return;
	}
}
// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.OVRInputModule::GetGazeButtonState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRInputModule_GetGazeButtonState_mAF33F9D7355D973D517D6C77B9142280A76B97E2 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// var pressed = Input.GetKeyDown(gazeClickKey) || OVRInput.GetDown(joyPadClickButton);
		int32_t L_0 = __this->___gazeClickKey_20;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_0, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = __this->___joyPadClickButton_19;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = OVRInput_GetDown_mEC4F71AEC93D3AF1A041934CA4C61680C6DB9AC7(L_2, ((int32_t)-2147483648LL), NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		// var released = Input.GetKeyUp(gazeClickKey) || OVRInput.GetUp(joyPadClickButton);
		int32_t L_4 = __this->___gazeClickKey_20;
		bool L_5;
		L_5 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(L_4, NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = __this->___joyPadClickButton_19;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = OVRInput_GetUp_m66B13613FF16CBAB8B0A77A5ADCFD1A3A68F3898(L_6, ((int32_t)-2147483648LL), NULL);
		G_B6_0 = ((int32_t)(L_7));
		goto IL_0042;
	}

IL_0041:
	{
		G_B6_0 = 1;
	}

IL_0042:
	{
		V_1 = (bool)G_B6_0;
		// pressed |= Input.GetMouseButtonDown(0);
		bool L_8 = V_0;
		bool L_9;
		L_9 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_8|(int32_t)L_9));
		// released |= Input.GetMouseButtonUp(0);
		bool L_10 = V_1;
		bool L_11;
		L_11 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_10|(int32_t)L_11));
		// if (pressed && released)
		bool L_12 = V_0;
		bool L_13 = V_1;
		V_2 = (bool)((int32_t)((int32_t)L_12&(int32_t)L_13));
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		// return PointerEventData.FramePressState.PressedAndReleased;
		V_3 = 2;
		goto IL_007a;
	}

IL_0060:
	{
		// if (pressed)
		bool L_15 = V_0;
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_006b;
		}
	}
	{
		// return PointerEventData.FramePressState.Pressed;
		V_3 = 0;
		goto IL_007a;
	}

IL_006b:
	{
		// if (released)
		bool L_17 = V_1;
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0076;
		}
	}
	{
		// return PointerEventData.FramePressState.Released;
		V_3 = 1;
		goto IL_007a;
	}

IL_0076:
	{
		// return PointerEventData.FramePressState.NotChanged;
		V_3 = 3;
		goto IL_007a;
	}

IL_007a:
	{
		// }
		int32_t L_19 = V_3;
		return L_19;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::GetExtraScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_GetExtraScrollDelta_mE441287D8A96D1E47BF5B28F8E61CF9CEA888AC5 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Vector2 scrollDelta = new Vector2();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// if (useRightStickScroll)
		bool L_0 = __this->___useRightStickScroll_22;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006b;
		}
	}
	{
		// Vector2 s = OVRInput.Get(OVRInput.Axis2D.SecondaryThumbstick);
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8(2, ((int32_t)-2147483648LL), NULL);
		V_2 = L_2;
		// if (Mathf.Abs(s.x) < rightStickDeadZone) s.x = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_2;
		float L_4 = L_3.___x_0;
		float L_5;
		L_5 = fabsf(L_4);
		float L_6 = __this->___rightStickDeadZone_23;
		V_3 = (bool)((((float)L_5) < ((float)L_6))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// if (Mathf.Abs(s.x) < rightStickDeadZone) s.x = 0;
		(&V_2)->___x_0 = (0.0f);
	}

IL_0043:
	{
		// if (Mathf.Abs(s.y) < rightStickDeadZone) s.y = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_2;
		float L_9 = L_8.___y_1;
		float L_10;
		L_10 = fabsf(L_9);
		float L_11 = __this->___rightStickDeadZone_23;
		V_4 = (bool)((((float)L_10) < ((float)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		// if (Mathf.Abs(s.y) < rightStickDeadZone) s.y = 0;
		(&V_2)->___y_1 = (0.0f);
	}

IL_0068:
	{
		// scrollDelta = s;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_2;
		V_0 = L_13;
	}

IL_006b:
	{
		// return scrollDelta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		V_5 = L_14;
		goto IL_0070;
	}

IL_0070:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_5;
		return L_15;
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
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPhysicsRaycaster__ctor_m71618373897E4446CFD05055A56A540B3CB56ECD (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	{
		// protected LayerMask m_EventMask = kNoEventMaskSet;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->___m_EventMask_6 = L_0;
		// public int sortOrder = 0;
		__this->___sortOrder_7 = 0;
		// protected OVRPhysicsRaycaster()
		BaseRaycaster__ctor_m1B6A963368E54C1E450BE15FAF1AE082142A1683(__this, NULL);
		// { }
		return;
	}
}
// UnityEngine.Camera UnityEngine.EventSystems.OVRPhysicsRaycaster::get_eventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* OVRPhysicsRaycaster_get_eventCamera_mE2D5CE0073AD9C33B9BD5B763ADA1D878EFB9A6D (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m077B7F6A5755E612BD0ACA0BAD8F8FCAA9FB6E62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	{
		// return GetComponent<OVRCameraRig>().leftEyeCamera;
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0;
		L_0 = Component_GetComponent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m077B7F6A5755E612BD0ACA0BAD8F8FCAA9FB6E62(__this, Component_GetComponent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m077B7F6A5755E612BD0ACA0BAD8F8FCAA9FB6E62_RuntimeMethod_var);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = OVRCameraRig_get_leftEyeCamera_m1C1CA12F69226BE8B0AC3142DAF77BDED7DF27CD(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRPhysicsRaycaster_get_depth_m02C0C48F9F2D963B850188AF4FF0246C44C3464E (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// get { return (eventCamera != null) ? (int)eventCamera.depth : 0xFFFFFF; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((int32_t)16777215);
		goto IL_0022;
	}

IL_0016:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(L_2, NULL);
		G_B3_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
	}

IL_0022:
	{
		V_0 = G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		// get { return (eventCamera != null) ? (int)eventCamera.depth : 0xFFFFFF; }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster::get_sortOrderPriority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRPhysicsRaycaster_get_sortOrderPriority_m72C941C67B30A4ED8B280EB2BEB0140EE5FFC1C5 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return sortOrder;
		int32_t L_0 = __this->___sortOrder_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster::get_finalEventMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRPhysicsRaycaster_get_finalEventMask_m0870F8AB5B0021AB7BFE8A1CE5CC729E680484E2 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// get { return (eventCamera != null) ? eventCamera.cullingMask & m_EventMask : kNoEventMaskSet; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0029;
	}

IL_0012:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8(L_2, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___m_EventMask_6;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_4, NULL);
		G_B3_0 = ((int32_t)(L_3&L_5));
	}

IL_0029:
	{
		V_0 = G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		// get { return (eventCamera != null) ? eventCamera.cullingMask & m_EventMask : kNoEventMaskSet; }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.LayerMask UnityEngine.EventSystems.OVRPhysicsRaycaster::get_eventMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB OVRPhysicsRaycaster_get_eventMask_m0B52D9DC406E35C7EEBD2ED2205CC8589DAD9AA3 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_EventMask; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___m_EventMask_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_EventMask; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPhysicsRaycaster_set_eventMask_m29EBF0CDD59910195F49BD8A1609BC3DD1DC3B0D (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_EventMask = value; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___value0;
		__this->___m_EventMask_6 = L_0;
		// set { m_EventMask = value; }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPhysicsRaycaster_Raycast_m843259975D6BF5E0BF69D226F6229BAE21488DE5 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___resultAppendList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRaycastU3Eb__15_0_mEFC66B60EE677A040D1C002373D4CF3C5DFF97FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_9;
	memset((&V_9), 0, sizeof(V_9));
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* G_B7_0 = NULL;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* G_B7_1 = NULL;
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* G_B6_0 = NULL;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* G_B6_1 = NULL;
	{
		// if (eventCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_013c;
	}

IL_0016:
	{
		// if (!eventData.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		bool L_4;
		L_4 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_3, NULL);
		V_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		goto IL_013c;
	}

IL_002a:
	{
		// var ray = eventData.GetRay();
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = PointerEventDataExtension_GetRay_m8C036451341B0C37A138E9D3BB509B9DFDCADD99(L_6, NULL);
		V_0 = L_7;
		// float dist = eventCamera.farClipPlane - eventCamera.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_8);
		float L_9;
		L_9 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_8, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_10);
		float L_11;
		L_11 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_10, NULL);
		V_1 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		// var hits = Physics.RaycastAll(ray, dist, finalEventMask);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_12 = V_0;
		float L_13 = V_1;
		int32_t L_14;
		L_14 = OVRPhysicsRaycaster_get_finalEventMask_m0870F8AB5B0021AB7BFE8A1CE5CC729E680484E2(__this, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_15;
		L_15 = Physics_RaycastAll_m4055619E0F7EFA04620EAA0517F8393C4EBCFE87(L_12, L_13, L_14, NULL);
		V_2 = L_15;
		// if (hits.Length > 1)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_16 = V_2;
		NullCheck(L_16);
		V_5 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))) > ((int32_t)1))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		// System.Array.Sort(hits, (r1, r2) => r1.distance.CompareTo(r2.distance));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_19 = ((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1;
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_20 = L_19;
		G_B6_0 = L_20;
		G_B6_1 = L_18;
		if (L_20)
		{
			G_B7_0 = L_20;
			G_B7_1 = L_18;
			goto IL_0083;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* L_21 = ((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_22 = (Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7*)il2cpp_codegen_object_new(Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Comparison_1__ctor_m36EAA21C7F6D0230006DB0A6024580A54685757C(L_22, L_21, (intptr_t)((void*)U3CU3Ec_U3CRaycastU3Eb__15_0_mEFC66B60EE677A040D1C002373D4CF3C5DFF97FF_RuntimeMethod_var), NULL);
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_23 = L_22;
		((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1), (void*)L_23);
		G_B7_0 = L_23;
		G_B7_1 = G_B6_1;
	}

IL_0083:
	{
		Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673(G_B7_1, G_B7_0, Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_RuntimeMethod_var);
	}

IL_0089:
	{
		// if (hits.Length != 0)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_24 = V_2;
		NullCheck(L_24);
		V_6 = (bool)((!(((uint32_t)(((RuntimeArray*)L_24)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_013c;
		}
	}
	{
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		V_7 = 0;
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_26 = V_2;
		NullCheck(L_26);
		V_8 = ((int32_t)(((RuntimeArray*)L_26)->max_length));
		goto IL_012c;
	}

IL_00a5:
	{
		// var result = new RaycastResult
		// {
		//     gameObject = hits[b].collider.gameObject,
		//     module = this,
		//     distance = hits[b].distance,
		//     index = resultAppendList.Count,
		//     worldPosition = hits[0].point,
		//     worldNormal = hits[0].normal,
		// };
		il2cpp_codegen_initobj((&V_10), sizeof(RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_27 = V_2;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_29;
		L_29 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), NULL);
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E((&V_10), L_30, NULL);
		(&V_10)->___module_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_10)->___module_1), (void*)__this);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_31 = V_2;
		int32_t L_32 = V_7;
		NullCheck(L_31);
		float L_33;
		L_33 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78(((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), NULL);
		(&V_10)->___distance_2 = L_33;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_34 = ___resultAppendList1;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_34, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		(&V_10)->___index_3 = ((float)L_35);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_36 = V_2;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		(&V_10)->___worldPosition_7 = L_37;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_38 = V_2;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		(&V_10)->___worldNormal_8 = L_39;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_40 = V_10;
		V_9 = L_40;
		// resultAppendList.Add(result);
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_41 = ___resultAppendList1;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_42 = V_9;
		NullCheck(L_41);
		List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_inline(L_41, L_42, List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		int32_t L_43 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_012c:
	{
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		int32_t L_44 = V_7;
		int32_t L_45 = V_8;
		V_11 = (bool)((((int32_t)L_44) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_00a5;
		}
	}
	{
	}

IL_013c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster::Spherecast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPhysicsRaycaster_Spherecast_m5C0B2A941C9D1F9C92A2AD1026510DC5D64E9945 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___resultAppendList1, float ___radius2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSpherecastU3Eb__16_0_m01ADCEABB9904FA2BE7802AEA7CD76AEADC96D7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_9;
	memset((&V_9), 0, sizeof(V_9));
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* G_B7_0 = NULL;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* G_B7_1 = NULL;
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* G_B6_0 = NULL;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* G_B6_1 = NULL;
	{
		// if (eventCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_013d;
	}

IL_0016:
	{
		// if (!eventData.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		bool L_4;
		L_4 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_3, NULL);
		V_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		goto IL_013d;
	}

IL_002a:
	{
		// var ray = eventData.GetRay();
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = PointerEventDataExtension_GetRay_m8C036451341B0C37A138E9D3BB509B9DFDCADD99(L_6, NULL);
		V_0 = L_7;
		// float dist = eventCamera.farClipPlane - eventCamera.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_8);
		float L_9;
		L_9 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_8, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_10);
		float L_11;
		L_11 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_10, NULL);
		V_1 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		// var hits = Physics.SphereCastAll(ray, radius, dist, finalEventMask);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_12 = V_0;
		float L_13 = ___radius2;
		float L_14 = V_1;
		int32_t L_15;
		L_15 = OVRPhysicsRaycaster_get_finalEventMask_m0870F8AB5B0021AB7BFE8A1CE5CC729E680484E2(__this, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_16;
		L_16 = Physics_SphereCastAll_m0886C4624531C71A2CC6A3196B9EAEE108C17CB5(L_12, L_13, L_14, L_15, NULL);
		V_2 = L_16;
		// if (hits.Length > 1)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_17 = V_2;
		NullCheck(L_17);
		V_5 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) > ((int32_t)1))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_008a;
		}
	}
	{
		// System.Array.Sort(hits, (r1, r2) => r1.distance.CompareTo(r2.distance));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_20 = ((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2;
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_21 = L_20;
		G_B6_0 = L_21;
		G_B6_1 = L_19;
		if (L_21)
		{
			G_B7_0 = L_21;
			G_B7_1 = L_19;
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* L_22 = ((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_23 = (Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7*)il2cpp_codegen_object_new(Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Comparison_1__ctor_m36EAA21C7F6D0230006DB0A6024580A54685757C(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3CSpherecastU3Eb__16_0_m01ADCEABB9904FA2BE7802AEA7CD76AEADC96D7B_RuntimeMethod_var), NULL);
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_24 = L_23;
		((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2), (void*)L_24);
		G_B7_0 = L_24;
		G_B7_1 = G_B6_1;
	}

IL_0084:
	{
		Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673(G_B7_1, G_B7_0, Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_RuntimeMethod_var);
	}

IL_008a:
	{
		// if (hits.Length != 0)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_25 = V_2;
		NullCheck(L_25);
		V_6 = (bool)((!(((uint32_t)(((RuntimeArray*)L_25)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_013d;
		}
	}
	{
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		V_7 = 0;
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_27 = V_2;
		NullCheck(L_27);
		V_8 = ((int32_t)(((RuntimeArray*)L_27)->max_length));
		goto IL_012d;
	}

IL_00a6:
	{
		// var result = new RaycastResult
		// {
		//     gameObject = hits[b].collider.gameObject,
		//     module = this,
		//     distance = hits[b].distance,
		//     index = resultAppendList.Count,
		//     worldPosition = hits[0].point,
		//     worldNormal = hits[0].normal,
		// };
		il2cpp_codegen_initobj((&V_10), sizeof(RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_28 = V_2;
		int32_t L_29 = V_7;
		NullCheck(L_28);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_30;
		L_30 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), NULL);
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E((&V_10), L_31, NULL);
		(&V_10)->___module_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_10)->___module_1), (void*)__this);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_32 = V_2;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		float L_34;
		L_34 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78(((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), NULL);
		(&V_10)->___distance_2 = L_34;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_35 = ___resultAppendList1;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_35, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		(&V_10)->___index_3 = ((float)L_36);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_37 = V_2;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		(&V_10)->___worldPosition_7 = L_38;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_39 = V_2;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		(&V_10)->___worldNormal_8 = L_40;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_41 = V_10;
		V_9 = L_41;
		// resultAppendList.Add(result);
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_42 = ___resultAppendList1;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_43 = V_9;
		NullCheck(L_42);
		List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_inline(L_42, L_43, List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		int32_t L_44 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_012d:
	{
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		int32_t L_45 = V_7;
		int32_t L_46 = V_8;
		V_11 = (bool)((((int32_t)L_45) < ((int32_t)L_46))? 1 : 0);
		bool L_47 = V_11;
		if (L_47)
		{
			goto IL_00a6;
		}
	}
	{
	}

IL_013d:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRPhysicsRaycaster::GetScreenPos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRPhysicsRaycaster_GetScreenPos_mAD6CC9D4FC2F01C2CBFA281660E8BC7B3C3C0A84 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return eventCamera.WorldToScreenPoint(worldPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___worldPosition0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_0, L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
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
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA489E90CFBC65EE9F35B42C72ECA8037362EF497 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* L_0 = (U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D*)il2cpp_codegen_object_new(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFC1568EC2B965777FBA11D46651A32FB41491E2A(L_0, NULL);
		((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC1568EC2B965777FBA11D46651A32FB41491E2A (U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::<Raycast>b__15_0(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRaycastU3Eb__15_0_mEFC66B60EE677A040D1C002373D4CF3C5DFF97FF (U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___r10, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___r21, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// System.Array.Sort(hits, (r1, r2) => r1.distance.CompareTo(r2.distance));
		float L_0;
		L_0 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&___r10), NULL);
		V_0 = L_0;
		float L_1;
		L_1 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&___r21), NULL);
		int32_t L_2;
		L_2 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_0), L_1, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::<Spherecast>b__16_0(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSpherecastU3Eb__16_0_m01ADCEABB9904FA2BE7802AEA7CD76AEADC96D7B (U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___r10, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___r21, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// System.Array.Sort(hits, (r1, r2) => r1.distance.CompareTo(r2.distance));
		float L_0;
		L_0 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&___r10), NULL);
		V_0 = L_0;
		float L_1;
		L_1 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&___r21), NULL);
		int32_t L_2;
		L_2 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_0), L_1, NULL);
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
// System.Void UnityEngine.EventSystems.OVRPointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPointerEventData__ctor_mF3624D599F08C10D0D2E14CB8E8016AEC1FFA1B9 (OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) 
{
	{
		// : base(eventSystem)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0 = ___eventSystem0;
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.String UnityEngine.EventSystems.OVRPointerEventData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OVRPointerEventData_ToString_m37BD8F9E0912E8BD6F215B28D5C662BD60AA5261 (OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06A17D93E6D67BEA37EBBF3A9D7FC06B40689CD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EC5A90CC65C8BDA58643C956BA4E6F8E4436A5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FF1E10A290EC11AB4C6B8CA7BD71BA07C515124);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral709C1BE385364BF7215290F6C80B9E13ED6C07AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97949C809FAE8AD49BF4DA35A46951F99B00E5E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C5CA5F3D440697E7CE47F45B0AE3B6DB74C2054);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAD329BEE4AA4299DC498EF86EE4D802F5F77951);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4705CCB6B015DADE9B7063D15E59D6BAE057C37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC250738CF6553169DE970EACBEDFB060B58A41B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB1334B07CE2A0153E77054CF8FA3829A2097735);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	StringBuilder_t* G_B2_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	StringBuilder_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	StringBuilder_t* G_B3_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	StringBuilder_t* G_B5_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	StringBuilder_t* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	StringBuilder_t* G_B6_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	StringBuilder_t* G_B8_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	StringBuilder_t* G_B7_2 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	StringBuilder_t* G_B9_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	StringBuilder_t* G_B11_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	StringBuilder_t* G_B10_2 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	StringBuilder_t* G_B12_2 = NULL;
	{
		// var sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// sb.AppendLine("<b>Position</b>: " + position);
		StringBuilder_t* L_1 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(__this, NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_1), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAAD329BEE4AA4299DC498EF86EE4D802F5F77951, L_3, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, L_4, NULL);
		// sb.AppendLine("<b>delta</b>: " + delta);
		StringBuilder_t* L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(__this, NULL);
		V_1 = L_7;
		String_t* L_8;
		L_8 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_1), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDB1334B07CE2A0153E77054CF8FA3829A2097735, L_8, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_6, L_9, NULL);
		// sb.AppendLine("<b>eligibleForClick</b>: " + eligibleForClick);
		StringBuilder_t* L_11 = V_0;
		bool L_12;
		L_12 = PointerEventData_get_eligibleForClick_m4B01A1640C694FD7421BDFB19CF763BC85672C8E_inline(__this, NULL);
		V_2 = L_12;
		String_t* L_13;
		L_13 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_2), NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB4705CCB6B015DADE9B7063D15E59D6BAE057C37, L_13, NULL);
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_11, L_14, NULL);
		// sb.AppendLine("<b>pointerEnter</b>: " + pointerEnter);
		StringBuilder_t* L_16 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17;
		G_B1_0 = L_18;
		G_B1_1 = _stringLiteral9C5CA5F3D440697E7CE47F45B0AE3B6DB74C2054;
		G_B1_2 = L_16;
		if (L_18)
		{
			G_B2_0 = L_18;
			G_B2_1 = _stringLiteral9C5CA5F3D440697E7CE47F45B0AE3B6DB74C2054;
			G_B2_2 = L_16;
			goto IL_0083;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0088;
	}

IL_0083:
	{
		NullCheck(G_B2_0);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_19;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0088:
	{
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		NullCheck(G_B3_2);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B3_2, L_20, NULL);
		// sb.AppendLine("<b>pointerPress</b>: " + pointerPress);
		StringBuilder_t* L_22 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23;
		G_B4_0 = L_24;
		G_B4_1 = _stringLiteralBC250738CF6553169DE970EACBEDFB060B58A41B;
		G_B4_2 = L_22;
		if (L_24)
		{
			G_B5_0 = L_24;
			G_B5_1 = _stringLiteralBC250738CF6553169DE970EACBEDFB060B58A41B;
			G_B5_2 = L_22;
			goto IL_00a6;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		goto IL_00ab;
	}

IL_00a6:
	{
		NullCheck(G_B5_0);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_25;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_00ab:
	{
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_1, G_B6_0, NULL);
		NullCheck(G_B6_2);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B6_2, L_26, NULL);
		// sb.AppendLine("<b>lastPointerPress</b>: " + lastPress);
		StringBuilder_t* L_28 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = PointerEventData_get_lastPress_m46720C62503214A44EE947679A8BA307BC2AEEDC_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29;
		G_B7_0 = L_30;
		G_B7_1 = _stringLiteral1EC5A90CC65C8BDA58643C956BA4E6F8E4436A5A;
		G_B7_2 = L_28;
		if (L_30)
		{
			G_B8_0 = L_30;
			G_B8_1 = _stringLiteral1EC5A90CC65C8BDA58643C956BA4E6F8E4436A5A;
			G_B8_2 = L_28;
			goto IL_00c9;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		goto IL_00ce;
	}

IL_00c9:
	{
		NullCheck(G_B8_0);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
		G_B9_0 = L_31;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
	}

IL_00ce:
	{
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B9_1, G_B9_0, NULL);
		NullCheck(G_B9_2);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B9_2, L_32, NULL);
		// sb.AppendLine("<b>pointerDrag</b>: " + pointerDrag);
		StringBuilder_t* L_34 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = L_35;
		G_B10_0 = L_36;
		G_B10_1 = _stringLiteral06A17D93E6D67BEA37EBBF3A9D7FC06B40689CD1;
		G_B10_2 = L_34;
		if (L_36)
		{
			G_B11_0 = L_36;
			G_B11_1 = _stringLiteral06A17D93E6D67BEA37EBBF3A9D7FC06B40689CD1;
			G_B11_2 = L_34;
			goto IL_00ec;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_00f1;
	}

IL_00ec:
	{
		NullCheck(G_B11_0);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B11_0);
		G_B12_0 = L_37;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_00f1:
	{
		String_t* L_38;
		L_38 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B12_1, G_B12_0, NULL);
		NullCheck(G_B12_2);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B12_2, L_38, NULL);
		// sb.AppendLine("<b>worldSpaceRay</b>: " + worldSpaceRay);
		StringBuilder_t* L_40 = V_0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_41 = __this->___worldSpaceRay_33;
		V_3 = L_41;
		String_t* L_42;
		L_42 = Ray_ToString_m06274331D92120539B4C6E0D3747EE620DB468E5((&V_3), NULL);
		String_t* L_43;
		L_43 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1FF1E10A290EC11AB4C6B8CA7BD71BA07C515124, L_42, NULL);
		NullCheck(L_40);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_40, L_43, NULL);
		// sb.AppendLine("<b>swipeStart</b>: " + swipeStart);
		StringBuilder_t* L_45 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = __this->___swipeStart_34;
		V_1 = L_46;
		String_t* L_47;
		L_47 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_1), NULL);
		String_t* L_48;
		L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral97949C809FAE8AD49BF4DA35A46951F99B00E5E1, L_47, NULL);
		NullCheck(L_45);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_45, L_48, NULL);
		// sb.AppendLine("<b>Use Drag Threshold</b>: " + useDragThreshold);
		StringBuilder_t* L_50 = V_0;
		bool L_51;
		L_51 = PointerEventData_get_useDragThreshold_m3ED1F39E71630C9AB1F340C92F8FA39AA489E1C5_inline(__this, NULL);
		V_2 = L_51;
		String_t* L_52;
		L_52 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_2), NULL);
		String_t* L_53;
		L_53 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral709C1BE385364BF7215290F6C80B9E13ED6C07AB, L_52, NULL);
		NullCheck(L_50);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_50, L_53, NULL);
		// return sb.ToString();
		StringBuilder_t* L_55 = V_0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_55);
		V_4 = L_56;
		goto IL_016f;
	}

IL_016f:
	{
		// }
		String_t* L_57 = V_4;
		return L_57;
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
// System.Boolean UnityEngine.EventSystems.PointerEventDataExtension::IsVRPointer(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return (pointerEventData is OVRPointerEventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___pointerEventData0;
		V_0 = (bool)((!(((RuntimeObject*)(OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)IsInstClass((RuntimeObject*)L_0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Ray UnityEngine.EventSystems.PointerEventDataExtension::GetRay(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 PointerEventDataExtension_GetRay_m8C036451341B0C37A138E9D3BB509B9DFDCADD99 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisOVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_mB058B605A1DAC76CD12D7D26B4436BF8B7C63590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* V_0 = NULL;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// OVRPointerEventData vrPointerEventData = pointerEventData as OVRPointerEventData;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___pointerEventData0;
		V_0 = ((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)IsInstClass((RuntimeObject*)L_0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var));
		// Assert.IsNotNull(vrPointerEventData);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisOVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_mB058B605A1DAC76CD12D7D26B4436BF8B7C63590(L_1, Assert_IsNotNull_TisOVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_mB058B605A1DAC76CD12D7D26B4436BF8B7C63590_RuntimeMethod_var);
		// return vrPointerEventData.worldSpaceRay;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_2 = V_0;
		NullCheck(L_2);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3 = L_2->___worldSpaceRay_33;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventDataExtension::GetSwipeStart(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventDataExtension_GetSwipeStart_m09ED39DC9E87EDFB80926815E29A3B130E3CA586 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisOVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_mB058B605A1DAC76CD12D7D26B4436BF8B7C63590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// OVRPointerEventData vrPointerEventData = pointerEventData as OVRPointerEventData;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___pointerEventData0;
		V_0 = ((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)IsInstClass((RuntimeObject*)L_0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var));
		// Assert.IsNotNull(vrPointerEventData);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisOVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_mB058B605A1DAC76CD12D7D26B4436BF8B7C63590(L_1, Assert_IsNotNull_TisOVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_mB058B605A1DAC76CD12D7D26B4436BF8B7C63590_RuntimeMethod_var);
		// return vrPointerEventData.swipeStart;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_2 = V_0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = L_2->___swipeStart_34;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.EventSystems.PointerEventDataExtension::SetSwipeStart(UnityEngine.EventSystems.PointerEventData,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventDataExtension_SetSwipeStart_m3FD15231D3C0B9BC95B84E7048FF8289CF4359C5 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEventData0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisOVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_mB058B605A1DAC76CD12D7D26B4436BF8B7C63590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* V_0 = NULL;
	{
		// OVRPointerEventData vrPointerEventData = pointerEventData as OVRPointerEventData;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___pointerEventData0;
		V_0 = ((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)IsInstClass((RuntimeObject*)L_0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var));
		// Assert.IsNotNull(vrPointerEventData);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisOVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_mB058B605A1DAC76CD12D7D26B4436BF8B7C63590(L_1, Assert_IsNotNull_TisOVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_mB058B605A1DAC76CD12D7D26B4436BF8B7C63590_RuntimeMethod_var);
		// vrPointerEventData.swipeStart = start;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_2 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___start1;
		NullCheck(L_2);
		L_2->___swipeStart_34 = L_3;
		// }
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
// System.IntPtr Oculus.XR.OculusXRFeature::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OculusXRFeature_HookGetInstanceProcAddr_m84F55CE702836D2D53149B39329E7A474C0DE1A8 (OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94* __this, intptr_t ___func0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B422875D5C0FF99CE7A100F2D0831190FE9D98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16708333EE13D11D37AF0570616A0BFB858D19DE);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// OVRPlugin.UnityOpenXR.Enabled = true;
		((UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E_StaticFields*)il2cpp_codegen_static_fields_for(UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E_il2cpp_TypeInfo_var))->___Enabled_0 = (bool)1;
		// Debug.Log($"[OculusXRFeature] HookGetInstanceProcAddr: {func}");
		intptr_t L_0 = ___func0;
		intptr_t L_1 = L_0;
		RuntimeObject* L_2 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral00B422875D5C0FF99CE7A100F2D0831190FE9D98, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log($"[OculusXRFeature] SetClientVersion");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral16708333EE13D11D37AF0570616A0BFB858D19DE, NULL);
		// OVRPlugin.UnityOpenXR.SetClientVersion();
		UnityOpenXR_SetClientVersion_m4090E8C9C4B6DCE29E0B4947BCEB6F943C1E14A5(NULL);
		// return OVRPlugin.UnityOpenXR.HookGetInstanceProcAddr(func);
		intptr_t L_4 = ___func0;
		intptr_t L_5;
		L_5 = UnityOpenXR_HookGetInstanceProcAddr_m47D995F8D369E3C5128B927468F0ABD95352EFD4(L_4, NULL);
		V_0 = L_5;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Oculus.XR.OculusXRFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusXRFeature_OnInstanceCreate_m6BD23B480A63340023A5ECB2DD214FA35A9B79AD (OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94* __this, uint64_t ___xrInstance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81DE322259BE79213DE3711934CCA81612299A22);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log($"[OculusXRFeature] OnInstanceCreate: {xrInstance}");
		uint64_t L_0 = ___xrInstance0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral81DE322259BE79213DE3711934CCA81612299A22, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// return OVRPlugin.UnityOpenXR.OnInstanceCreate(xrInstance);
		uint64_t L_4 = ___xrInstance0;
		bool L_5;
		L_5 = UnityOpenXR_OnInstanceCreate_mD8C51F81DF5B66595890F4D53FD5C11B066E3AF5(L_4, NULL);
		V_0 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void Oculus.XR.OculusXRFeature::OnInstanceDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusXRFeature_OnInstanceDestroy_m5A1ABDC8002FC822E88244EFA5A2F96959109B55 (OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94* __this, uint64_t ___xrInstance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6523CD2512C835CE5969797D0A68F508DAFDEEF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[OculusXRFeature] OnInstanceDestroy: {xrInstance}");
		uint64_t L_0 = ___xrInstance0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral6523CD2512C835CE5969797D0A68F508DAFDEEF8, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnInstanceDestroy(xrInstance);
		uint64_t L_4 = ___xrInstance0;
		UnityOpenXR_OnInstanceDestroy_m434D377978F23755AEA67D5A447614023E0802CF(L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.XR.OculusXRFeature::OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusXRFeature_OnSessionCreate_m7061EE48D73AD56BE8AD42D5D804CD6A67821445 (OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D87623416DA885BA890D0C9A00FBF74ACE0ECF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[OculusXRFeature] OnSessionCreate: {xrSession}");
		uint64_t L_0 = ___xrSession0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4D87623416DA885BA890D0C9A00FBF74ACE0ECF3, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionCreate(xrSession);
		uint64_t L_4 = ___xrSession0;
		UnityOpenXR_OnSessionCreate_m1AC2B5B77ACF1FD2BDB44AD92902B86724284D1F(L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.XR.OculusXRFeature::OnAppSpaceChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusXRFeature_OnAppSpaceChange_m9D8346E15A6D48B3568B38C1F195A6D9609FB4E0 (OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94* __this, uint64_t ___xrSpace0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25B713EDB4DF5E4198DEA30F18F1135F97772F0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[OculusXRFeature] OnAppSpaceChange: {xrSpace}");
		uint64_t L_0 = ___xrSpace0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral25B713EDB4DF5E4198DEA30F18F1135F97772F0E, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnAppSpaceChange(xrSpace);
		uint64_t L_4 = ___xrSpace0;
		UnityOpenXR_OnAppSpaceChange_m75150D53FE36E1F1063AB0C95AB5418BF155AD06(L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.XR.OculusXRFeature::OnSessionStateChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusXRFeature_OnSessionStateChange_m8533FDA8E65277FB4E8D3B25EC9169ECBF1BC6A5 (OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94* __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE84598B08D3618F20B435236CA0E9AF5C4A2A86D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[OculusXRFeature] OnSessionStateChange: {oldState} -> {newState}");
		int32_t L_0 = ___oldState0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___newState1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE84598B08D3618F20B435236CA0E9AF5C4A2A86D, L_2, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionStateChange(oldState, newState);
		int32_t L_7 = ___oldState0;
		int32_t L_8 = ___newState1;
		UnityOpenXR_OnSessionStateChange_m0C99770FA4B4B984958C15BB609D093A8C9B0F46(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Oculus.XR.OculusXRFeature::OnSessionBegin(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusXRFeature_OnSessionBegin_m6279C4B5853B6A9EE77364313D49960B9DDF6D5F (OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18451CB4F8D85191EA12451077801CA96348F6B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[OculusXRFeature] OnSessionBegin: {xrSession}");
		uint64_t L_0 = ___xrSession0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral18451CB4F8D85191EA12451077801CA96348F6B8, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionBegin(xrSession);
		uint64_t L_4 = ___xrSession0;
		UnityOpenXR_OnSessionBegin_m0422580F20229CC217DB02155FC2DC0D867F74CE(L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.XR.OculusXRFeature::OnSessionEnd(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusXRFeature_OnSessionEnd_m7012B8DE40C7DC2C88BDA4C0BA9977E5B0C6D7D5 (OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6D3E2AB4D1E478D7F1FA5972CFD48037CD0C151);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[OculusXRFeature] OnSessionEnd: {xrSession}");
		uint64_t L_0 = ___xrSession0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralB6D3E2AB4D1E478D7F1FA5972CFD48037CD0C151, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionEnd(xrSession);
		uint64_t L_4 = ___xrSession0;
		UnityOpenXR_OnSessionEnd_mEC2BB76CD260EC200996264B816F8715C04EA755(L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.XR.OculusXRFeature::OnSessionExiting(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusXRFeature_OnSessionExiting_mDC24862BBE8118F8C9F3E6820364CCB3CDB4FE9A (OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F0B57C63F68090BCCBB32EF92337E1397F68045);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[OculusXRFeature] OnSessionExiting: {xrSession}");
		uint64_t L_0 = ___xrSession0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4F0B57C63F68090BCCBB32EF92337E1397F68045, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionExiting(xrSession);
		uint64_t L_4 = ___xrSession0;
		UnityOpenXR_OnSessionExiting_m5A219E00988AF17792094B9D1E4B31F8FBC50DB1(L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.XR.OculusXRFeature::OnSessionDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusXRFeature_OnSessionDestroy_mBBB5DE80AD4CC0964620F9F6F7D270D6856F1348 (OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EB420128797DE44A56AD800649FF1F2C9086CC9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[OculusXRFeature] OnSessionDestroy: {xrSession}");
		uint64_t L_0 = ___xrSession0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7EB420128797DE44A56AD800649FF1F2C9086CC9, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionDestroy(xrSession);
		uint64_t L_4 = ___xrSession0;
		UnityOpenXR_OnSessionDestroy_mE22528F3A18F2409377CD0862CC005D7F07442BD(L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.XR.OculusXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusXRFeature__ctor_mB0033141D54A9FEE9D6AEFDCC5DB0173F4F0CDC1 (OculusXRFeature_tCB2152105E5B2A57F23565E1C6822451EB99EE94* __this, const RuntimeMethod* method) 
{
	{
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenVR_set_VRToken_mC7E9BB9F5F6A01C78347241B0BE75343741BF768_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static uint VRToken { get; set; }
		uint32_t L_0 = ___value0;
		((OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_StaticFields*)il2cpp_codegen_static_fields_for(OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var))->___U3CVRTokenU3Ek__BackingField_219 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t OpenVR_get_VRToken_mCD564FB45B8B2975059C0829310A9EE0653931A4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static uint VRToken { get; set; }
		uint32_t L_0 = ((OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_StaticFields*)il2cpp_codegen_static_fields_for(OpenVR_tD6A11EE014C48512C9048D3B1D02260B69B4847E_il2cpp_TypeInfo_var))->___U3CVRTokenU3Ek__BackingField_219;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 AxisEventData_get_moveVector_m7979B5CF62B6B3B0C5F2DA8B328C499ED80ECC41_inline (AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 moveVector { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmoveVectorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = __this->___U3CpointerCurrentRaycastU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool eligibleForClick { get; set; }
		bool L_0 = ___value0;
		__this->___U3CeligibleForClickU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CdeltaU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool dragging { get; set; }
		bool L_0 = ___value0;
		__this->___U3CdraggingU3Ek__BackingField_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool useDragThreshold { get; set; }
		bool L_0 = ___value0;
		__this->___U3CuseDragThresholdU3Ek__BackingField_21 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpressPositionU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___value0, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerPressRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = ___value0;
		__this->___U3CpointerPressRaycastU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_lastPress_m46720C62503214A44EE947679A8BA307BC2AEEDC_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject lastPress { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3ClastPressU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_clickTime_m5ABE0298E8CEF28B6BD7E750E940756CD78AB96E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public float clickTime { get; set; }
		float L_0 = __this->___U3CclickTimeU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_clickCount_m3977011C09DB9F904B1AAC3708B821B8D6AC0F9F_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public int clickCount { get; set; }
		int32_t L_0 = __this->___U3CclickCountU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int clickCount { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CclickCountU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float clickTime { get; set; }
		float L_0 = ___value0;
		__this->___U3CclickTimeU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject rawPointerPress { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CrawPointerPressU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrawPointerPressU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CpointerDragU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerDragU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CpointerDragU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_eligibleForClick_m4B01A1640C694FD7421BDFB19CF763BC85672C8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool eligibleForClick { get; set; }
		bool L_0 = __this->___U3CeligibleForClickU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool dragging { get; set; }
		bool L_0 = __this->___U3CdraggingU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerEnter { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CpointerEnterU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 scrollDelta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CscrollDeltaU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CdeltaU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 scrollDelta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CscrollDeltaU3Ek__BackingField_20 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___value0, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = ___value0;
		__this->___U3CpointerCurrentRaycastU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerEnter { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CpointerEnterU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerEnterU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerId_m5B5FF54AB1DE7BD4454022A7C0535C618049BD9B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CpointerIdU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public InputButton button { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CbuttonU3Ek__BackingField_23 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_useDragThreshold_m3ED1F39E71630C9AB1F340C92F8FA39AA489E1C5_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool useDragThreshold { get; set; }
		bool L_0 = __this->___U3CuseDragThresholdU3Ek__BackingField_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpressPositionU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerPressRaycast_mEB1B974F5543F78162984E2924EF908E18CE3B5D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerPressRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = __this->___U3CpointerPressRaycastU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* L_3 = (RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___item0, const RuntimeMethod* method) 
{
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* L_1 = (RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* L_6 = V_0;
		int32_t L_7 = V_1;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023)L_8);
		return;
	}

IL_0034:
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_9 = ___item0;
		((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
