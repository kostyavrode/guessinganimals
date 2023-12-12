#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
struct Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C;
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179;
struct Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6;
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
struct Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_t5D26B946C26464345D91A3DF860C02A5D3E535D2;
struct KeyCollection_t94F67CDF5E978000C16F49D121E96AC2F10CE60F;
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
struct KeyCollection_tBE32C7F4803A2123E7DD7F1F22DBD1B4B8695130;
struct ValueCollection_t8AFB67E2CB3D3975905C5C4CB69FC38C4CFBDD22;
struct ValueCollection_tB6C7A8B6372F17E2F4C197D8E93B44F04165E83B;
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
struct ValueCollection_t50BB2C026AB01B473E4181B53D300D7448F9B8BA;
struct EntryU5BU5D_t0B236C71AE1FDD11192BEAB2606FFCF0606AE7BF;
struct EntryU5BU5D_t34DD94604A143A63F891FD7F17CE3D5ABA76DEA4;
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
struct EntryU5BU5D_t6439180333F37E3183891804F0F66FC462C05F2A;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodBase_t;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C;
struct UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83;
struct UniWebViewHelper_t166BB0D31B84038617C0DE07E9B52815998DD115;
struct UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4;
struct UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B;
struct UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423;
struct UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28;
struct UniWebViewSafeBrowingComponent_t167EE3B984ADED602FD561B25B927F13C743FDC4;
struct UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tCEA8E78AB99C21AA428B193F5E2D1EDFC2DB1302;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
struct U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4;
struct CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68;
struct FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE;
struct FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615;
struct KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA;
struct MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951;
struct MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8;
struct MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6;
struct OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0;
struct OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E;
struct PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347;
struct PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC;
struct PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1;
struct PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213;
struct ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667;
struct UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF;
struct OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Level_tAE06E24FCDD418667688DA0099DC5625E38EABA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7AFF6C6BCBEF4BEA08BAD0C2FFE8CB5CDCB42A71____73A4FC827D999184BC5423C931D2FB9164868309AB289B8843D00F8C34ABE98B_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7AFF6C6BCBEF4BEA08BAD0C2FFE8CB5CDCB42A71____AE5949BD027B32810363F370DA2D14B792CED012B48113E2A9085DC3ABDA0D2B_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral061A8010D4205A1D21073716210E2F8428BD5E14;
IL2CPP_EXTERN_C String_t* _stringLiteral0E3C4A4E113783E0BF9FDA66C91110A5566B82AE;
IL2CPP_EXTERN_C String_t* _stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E;
IL2CPP_EXTERN_C String_t* _stringLiteral1A2B081AE1D8E7C26E7F45F730E331D5BE655471;
IL2CPP_EXTERN_C String_t* _stringLiteral1B49369FB3D81533ACCE4CC50C7A93DE8EE95FBB;
IL2CPP_EXTERN_C String_t* _stringLiteral1BC91583D7BA76EDFB67CAA1B4AD0D98281BA389;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral201BBE82FF73DFCCE02EF3047E980480E054DF3A;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral304D400932589AB6698AC3233B263A5EF8C1BE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7;
IL2CPP_EXTERN_C String_t* _stringLiteral3A92C3780BFB8E4337E1F918B9736D7E62AC5DAB;
IL2CPP_EXTERN_C String_t* _stringLiteral3BDBF19BEE52D0F6D468D06193E3655A9A4DF9F5;
IL2CPP_EXTERN_C String_t* _stringLiteral3DD62E04D9C08A1A20E499E6C090334BDCBB140A;
IL2CPP_EXTERN_C String_t* _stringLiteral455A7407451936D30ADA3E76C7EB02A81283BF92;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBDA72250283979F1A464C506665274601F2A0C;
IL2CPP_EXTERN_C String_t* _stringLiteral518BD63F7EC12F584B7692F39A21657A70FB44CA;
IL2CPP_EXTERN_C String_t* _stringLiteral52F373B73A2B66DC4990D649FA0DA946AB9A6A10;
IL2CPP_EXTERN_C String_t* _stringLiteral54293F2D54AE4537D84592735A6CFC7A384FEBA1;
IL2CPP_EXTERN_C String_t* _stringLiteral5886CC8EB4F8A781BD0FD273284D9412CD0EC0EA;
IL2CPP_EXTERN_C String_t* _stringLiteral64F055D7E61FBC80ABEE468986D2A24466198A9D;
IL2CPP_EXTERN_C String_t* _stringLiteral6531E410A254E705B3486A18962DF55BBAA92F7F;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6B8C38ECA928BDF06897EE449E38727B78F7D8B2;
IL2CPP_EXTERN_C String_t* _stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral7B7D33323BA93D25E3749ABC98725558724ACFB3;
IL2CPP_EXTERN_C String_t* _stringLiteral7C18CF1B37B49917E6D8058AC143814D191A0E21;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5A1BC658DA7223D5B3A37EDE7E9A3F1C60C984;
IL2CPP_EXTERN_C String_t* _stringLiteral7E2CDB796AC0AE13882E39A6F26B9DF2B27D6A30;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF67CAF3681E05C484A06FDBC22B44C14E1963A;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral93B204B4CDC241356AD725235A5C0966C643FAF8;
IL2CPP_EXTERN_C String_t* _stringLiteralA82D23700F6B0488E16EC900CE9C012B8B8D5EF5;
IL2CPP_EXTERN_C String_t* _stringLiteralA83A925538F3CF2C8C3F376EE41897EBDE39B11A;
IL2CPP_EXTERN_C String_t* _stringLiteralAF86D7EC622B6AE932581F530BC9EAE6B3A4BEAF;
IL2CPP_EXTERN_C String_t* _stringLiteralB0D5E7C91F6A2B19CACBDBA3D85F48CDC24A51E8;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralBAA5A3EA71ED89EC8F8D5755DC9EFFB906291550;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC4CC144598BD145E00CD6F81EDD805EA5BBA24E6;
IL2CPP_EXTERN_C String_t* _stringLiteralC8958CD955E48DB95A49B82386149ED32A9DD59B;
IL2CPP_EXTERN_C String_t* _stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157;
IL2CPP_EXTERN_C String_t* _stringLiteralCCC81426293B91F35B234307120A0683A8E8468A;
IL2CPP_EXTERN_C String_t* _stringLiteralD0261650E60CCD4DB8E943AFD94028507D700FA6;
IL2CPP_EXTERN_C String_t* _stringLiteralD2199E4A06060B44700618DF6B43A85D47E229DF;
IL2CPP_EXTERN_C String_t* _stringLiteralD266A18472019B973EDB918EFBE306F0D0D9413C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D;
IL2CPP_EXTERN_C String_t* _stringLiteralD6BB3661E0B8AF7D91E3EB869BE4036AE1C39321;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE13D66222204052CD72B386B0CB59C1DF8A7F323;
IL2CPP_EXTERN_C String_t* _stringLiteralED16F9589E28E51337A6B35399688F5187808BD2;
IL2CPP_EXTERN_C String_t* _stringLiteralED6AE4548C7A75D64077C9E1530452184FF92182;
IL2CPP_EXTERN_C String_t* _stringLiteralF4A0C981689238AFF713117FEFE71DFB9C94E191;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D6B5E5D1A349370529FE8E7793F6F40FEB98F6;
IL2CPP_EXTERN_C String_t* _stringLiteralFADAFC4A16312377BF957856DCCD59A61D85AB62;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m35248FA6DA553D6A8082C9318F63F98D23FB89AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m39B09CBAD5D2D9156D29277D0788191D6C2AF198_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8BFB0BB6D03FE0A2EA06E89719B4DD3C981125CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5882C0F77F264EC25EF9EBBFD8360E84A079C50E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass153_0_U3CGetHTMLContentU3Eb__0_m889FD5EB3BE1B8A2F3E8ABCFC8FBD67BA09BF752_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniWebViewInterface_SendMessage_m10CFE4B67F435945F14982DD593F9D5747FCE86D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t0CA68B4774C0576102C22D9907CBF946C9F36D3D 
{
};
struct Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0B236C71AE1FDD11192BEAB2606FFCF0606AE7BF* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t5D26B946C26464345D91A3DF860C02A5D3E535D2* ____keys;
	ValueCollection_t8AFB67E2CB3D3975905C5C4CB69FC38C4CFBDD22* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t34DD94604A143A63F891FD7F17CE3D5ABA76DEA4* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t94F67CDF5E978000C16F49D121E96AC2F10CE60F* ____keys;
	ValueCollection_tB6C7A8B6372F17E2F4C197D8E93B44F04165E83B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys;
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6439180333F37E3183891804F0F66FC462C05F2A* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tBE32C7F4803A2123E7DD7F1F22DBD1B4B8695130* ____keys;
	ValueCollection_t50BB2C026AB01B473E4181B53D300D7448F9B8BA* ____values;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t7AFF6C6BCBEF4BEA08BAD0C2FFE8CB5CDCB42A71  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UniWebViewHelper_t166BB0D31B84038617C0DE07E9B52815998DD115  : public RuntimeObject
{
};
struct UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4  : public RuntimeObject
{
};
struct UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B  : public RuntimeObject
{
	int32_t ___level;
};
struct UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28  : public RuntimeObject
{
	String_t* ___identifier;
	String_t* ___resultCode;
	String_t* ___data;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tCEA8E78AB99C21AA428B193F5E2D1EDFC2DB1302  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4  : public RuntimeObject
{
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___handler;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MethodBase_t  : public MemberInfo_t
{
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 
{
	String_t* ___U3CRawMessageU3Ek__BackingField;
	String_t* ___U3CSchemeU3Ek__BackingField;
	String_t* ___U3CPathU3Ek__BackingField;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CArgsU3Ek__BackingField;
};
struct UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_pinvoke
{
	char* ___U3CRawMessageU3Ek__BackingField;
	char* ___U3CSchemeU3Ek__BackingField;
	char* ___U3CPathU3Ek__BackingField;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CArgsU3Ek__BackingField;
};
struct UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_com
{
	Il2CppChar* ___U3CRawMessageU3Ek__BackingField;
	Il2CppChar* ___U3CSchemeU3Ek__BackingField;
	Il2CppChar* ___U3CPathU3Ek__BackingField;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CArgsU3Ek__BackingField;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D274_t69290EBE775DDCCCB64432294F16A3FCFE79A0A6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D274_t69290EBE775DDCCCB64432294F16A3FCFE79A0A6__padding[274];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D520_tB2A188F7430FB97F8506D13771CAB02036D18158 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D520_tB2A188F7430FB97F8506D13771CAB02036D18158__padding[520];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MethodInfo_t  : public MethodBase_t
{
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* ___OnSafeBrowsingFinished;
	String_t* ___id;
	UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* ___listener;
	String_t* ___url;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};
struct Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68  : public MulticastDelegate_t
{
};
struct FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE  : public MulticastDelegate_t
{
};
struct FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615  : public MulticastDelegate_t
{
};
struct KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA  : public MulticastDelegate_t
{
};
struct MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951  : public MulticastDelegate_t
{
};
struct MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8  : public MulticastDelegate_t
{
};
struct MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6  : public MulticastDelegate_t
{
};
struct OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0  : public MulticastDelegate_t
{
};
struct OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E  : public MulticastDelegate_t
{
};
struct PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347  : public MulticastDelegate_t
{
};
struct PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC  : public MulticastDelegate_t
{
};
struct PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1  : public MulticastDelegate_t
{
};
struct PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213  : public MulticastDelegate_t
{
};
struct ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667  : public MulticastDelegate_t
{
};
struct UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF  : public MulticastDelegate_t
{
};
struct OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296  : public MulticastDelegate_t
{
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};
struct UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* ___OnPageStarted;
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* ___OnPageFinished;
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* ___OnPageErrorReceived;
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* ___OnPageProgressChanged;
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* ___OnMessageReceived;
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* ___OnShouldClose;
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* ___OnOrientationChanged;
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* ___OnWebContentProcessTerminated;
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* ___OnFileDownloadStarted;
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* ___OnFileDownloadFinished;
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* ___OnCaptureSnapshotFinished;
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* ___OnMultipleWindowOpened;
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* ___OnMultipleWindowClosed;
	String_t* ___id;
	UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* ___listener;
	bool ___isPortrait;
	String_t* ___urlOnStart;
	bool ___showOnStart;
	bool ___fullScreen;
	bool ___useToolbar;
	int32_t ___toolbarPosition;
	Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* ___actions;
	Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* ___payloadActions;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___frame;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___referenceRectTransform;
	bool ___started;
	bool ___backButtonEnabled;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* ___OnKeyCodeReceived;
};
struct UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___webView;
	UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___safeBrowsing;
};
struct UniWebViewSafeBrowingComponent_t167EE3B984ADED602FD561B25B927F13C743FDC4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	String_t* ___url;
};
struct U3CPrivateImplementationDetailsU3E_t7AFF6C6BCBEF4BEA08BAD0C2FFE8CB5CDCB42A71_StaticFields
{
	__StaticArrayInitTypeSizeU3D274_t69290EBE775DDCCCB64432294F16A3FCFE79A0A6 ___73A4FC827D999184BC5423C931D2FB9164868309AB289B8843D00F8C34ABE98B;
	__StaticArrayInitTypeSizeU3D520_tB2A188F7430FB97F8506D13771CAB02036D18158 ___AE5949BD027B32810363F370DA2D14B792CED012B48113E2A9085DC3ABDA0D2B;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields
{
	bool ___correctPlatform;
};
struct UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_StaticFields
{
	UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* ___instance;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases;
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField;
};
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties;
};
struct UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields
{
	Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* ___listeners;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___0_json, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* UniWebViewNativeListener_GetListener_m39275F3A5DE6212AE442AA579034C7F4169674D5 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SendMessage_m10CFE4B67F435945F14982DD593F9D5747FCE86D (intptr_t ___0_namePtr, intptr_t ___1_methodPtr, intptr_t ___2_parameterPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ConnectMessageSender_mCE81A605D1857A2C977B14BE3A71FAAE665F1E8D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySendMessageDelegate__ctor_m610A4B75EDC8500D57ECA6645C8B943E944252C6 (UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_connectMessageSender_m554E8DAD98B0E45359376DA736122875703DEDC3 (UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* ___0_sendMessageDelegate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Verbose_m7477D7643820B23D6659CDE47B49B70A167BF376 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setLogLevel_mEDD569533622693B1166E82F8F3AC787AF139A2D (int32_t ___0_level, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_init_m588A93EB2A89C44DD289C57B50242741DB8BEB0B (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_destroy_m0BEFB552857BE5787F54CBCF9888BB2469E2967C (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_load_m5EFF4090EAA4E38AF5012EF97D7E355F85ED3D8B (String_t* ___0_name, String_t* ___1_url, bool ___2_skipEncoding, String_t* ___3_readAccessURL, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_loadHTMLString_mF943FDB16DC7EB83DB5A2ED09315EFDB5C47E83F (String_t* ___0_name, String_t* ___1_html, String_t* ___2_baseUrl, bool ___3_skipEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_reload_m266AA48FAA0A42ED5DC7A054BABB9FBE63BBC357 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_stop_mDC7B7A149048A2737D133FC2448C2E4E613DB084 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getUrl_mF7FD36F241F59903AECD5A265839C2F06DE8860E (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setFrame_mBCA5F92165FB886520D527FCF0FF79E8080EF1D4 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setPosition_m612DC7AA369FCFACB4C26A2484D0E34AAD5912DC (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setSize_mF3C37FB4AA5151DC8FB058111C67C8248F1B3638 (String_t* ___0_name, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_show_mB2701DD2AD7836487026C81E00FFACDD232B2179 (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, String_t* ___4_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_hide_m2D75667A562DA9CD0BB5B171201825B3590594D2 (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, String_t* ___4_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_animateTo_mDC51FEE8804CE85809373C9A6DF09FFF7CA43627 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, float ___5_duration, float ___6_delay, String_t* ___7_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addJavaScript_m9ADCF2C30197AADD4EB1687D237594E77771DC53 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_evaluateJavaScript_m59AD6669B6C05C0F4CA91C07709BF56A504F7787 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addUrlScheme_mF23BB107B1A256903F77F6496A8883E4CF7D659C (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeUrlScheme_m9729DFEAEF130B85350CD2926401D3795895722B (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addSslExceptionDomain_m2A44B90A6F3FA4827D0B9E9FCF20ECBA9247EF05 (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeSslExceptionDomain_mEE94D00258300A86BFC5F3B78385EE4387101D38 (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setHeaderField_mFD7294819258F2D3A31F71A3E5C5537B0D7374C3 (String_t* ___0_name, String_t* ___1_key, String_t* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setUserAgent_mBDC98A335FC64F2167E619958AD72F4E1C1AC3C1 (String_t* ___0_name, String_t* ___1_userAgent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getUserAgent_m862E2AC11D9F250FAE2F3FB0C0AF90C5A9C70AD5 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setContentInsetAdjustmentBehavior_m8D4F039FC1B8842ABBEC7DE4363499D8A2F65551 (String_t* ___0_name, int32_t ___1_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowAutoPlay_m44F85D72D1E9994F2043779726727017199F7597 (bool ___0_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowInlinePlay_mE1E79803F6F4D905EC73F69A08E641702225CC47 (bool ___0_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowFileAccess_mAC8225F5B25ADE132AC5F76AD7ADB3223A5A656A (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowFileAccessFromFileURLs_m603C794A4B0C034B6872767CBC83A824058958C9 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowUniversalAccessFromFileURLs_m68011849409FE162185D763AF933BD624EF2CDC9 (bool ___0_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowJavaScriptOpenWindow_mF82E9FA5AD93D24A814E2C549A45E199192AACE4 (bool ___0_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setJavaScriptEnabled_m1344E0E091FE6AFBE3EF81862A91E7AE30F8F5E5 (bool ___0_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_cleanCache_m3AFAAB4F520BD9996DF53B288504172718AC3ED3 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_clearCookies_m71F2CE3F64469A3A61749A3EF8052BB6AD0DC14D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setCookie_m48A2D30B900D7EB14E0D1D3A569F1827F825E4DE (String_t* ___0_url, String_t* ___1_cookie, bool ___2_skipEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeCookies_m34698935C0BF17B761ABBCE558944512B27CE926 (String_t* ___0_url, bool ___1_skipEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeCookie_mC73C4561AEB9F78846A5C573D136C78FF41A8B3C (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getCookie_m38424482B0B8649EDE8D7EB2FF43FAEA05A6FF89 (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_clearHttpAuthUsernamePasswordHost_mF97AEFAB2540AF2F38C0A21ABB2A326EF1100764 (String_t* ___0_host, String_t* ___1_realm, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setBackgroundColor_m9C5C94C3C248A3199528F3351CE86116A6297551 (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, float ___4_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWebViewAlpha_mEAFC08F35EADE5ACE999CCCC1BF598B0D13BCEFE (String_t* ___0_name, float ___1_alpha, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_uv_getWebViewAlpha_m7F587F89EBABAE02375A98A9F0299A7945E6E8C8 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setShowSpinnerWhileLoading_mD778DA2C9326B3A48F3E0BBCAB67CE9EA65D26D7 (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setSpinnerText_mC86C903E399CB17ABD1F5EA6F87B04EBB181D418 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_canGoBack_mC03E8D06D410A48975A718DCC8CEE1E185DCECB0 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_canGoForward_mFCD1F01956C54B88A7E9A6F55EDC1B21013405D9 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_goBack_m63FDB992B3CDDFB852AEDBCBB06648A70555D3EA (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_goForward_mD165C82A7AA35AC819E151CF4015B132B0889494 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setOpenLinksInExternalBrowser_m6D80A4B8CFDE172E01D95BB8E537FE8701E6D118 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setHorizontalScrollBarEnabled_m960C9A74588716902ACD064DE13C84243843F4D0 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setVerticalScrollBarEnabled_m6CA45CB1ECF00D6E9669F6765D5E6E55B1ED2063 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setBouncesEnabled_mAD04B2E18A45ECF423F7C58402511EF232C03E81 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setZoomEnabled_m4161616E146CE9F4C6EF498B860994ED5BFA0271 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setShowToolbar_mF7D212DDA6F9BB9BE712DC4ECC74C5A876E860D1 (String_t* ___0_name, bool ___1_show, bool ___2_animated, bool ___3_onTop, bool ___4_adjustInset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setShowToolbarNavigationButtons_mA03DAE1BDBBD1FFD35B546475ABB5E72E5E27A65 (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setToolbarDoneButtonText_mD1B0B17EADBAA5EDE9C22A341708A7DCA22660B6 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setGoBackButtonText_mBEBD727D8196A3C669095F86962B325D328CB295 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setGoForwardButtonText_m881AEC163F238CEC9D0BB94ABB810DFBCF76F55A (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWindowUserResizeEnabled_m872B42C2E448A09F12AEFFDF4F33987F408F2A71 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setToolbarTintColor_mEA4F17A1ADDEA82AA8545A1289569C7BFBE42504 (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setToolbarTextColor_m043BBCD34C811EDFA4F9B15BFD9FFCC34B7F56BC (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setUserInteractionEnabled_m678D27B93A69846832B2D8DFE6B6CC892119C3D9 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setTransparencyClickingThroughEnabled_mADADEF996A060492FED3A0833405BA584B31809F (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWebContentsDebuggingEnabled_m17C3463C0753E8BC538E43E1A7FF71D18811BB01 (bool ___0_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowBackForwardNavigationGestures_m3493759529522CA397ED780F1A7E9C12A41CB13C (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowHTTPAuthPopUpWindow_mC36E9494729F75BBEC1E4942FC2E500D5BEB9255 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_print_m290A59832D2A856498BA9D6E340EF696990BED0F (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_captureSnapshot_mAA7DF3BDCA83DAF245A1272CCC4430126C655508 (String_t* ___0_name, String_t* ___1_fileName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_scrollTo_mD14D099351F86E38881C05B2DA0AA53A63AC55BF (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, bool ___3_animated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setCalloutEnabled_m85EB833E95DE85EBEB7806DE4DBC3A762593ACC3 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setSupportMultipleWindows_mA27880502B1FAEC3607AECDC4B03052ACC1243B0 (String_t* ___0_name, bool ___1_enabled, bool ___2_allowJavaScriptOpening, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setDragInteractionEnabled_m72BA2C19F21521F7E800F7F42550AFB593D0F058 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_uv_nativeScreenWidth_m7C46ACFE36C0B434AA17D001D25DFFDBCA48A3FA (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_uv_nativeScreenHeight_m05E070863B46DEE363F3D0D4A41696CB985596BA (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addDownloadURL_m0173A55476ECBE9195FA06F1FB3C212F32F86297 (String_t* ___0_name, String_t* ___1_urlString, int32_t ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeDownloadURL_m1AB2A550893B338EBC8DF16163355683F4235F64 (String_t* ___0_name, String_t* ___1_urlString, int32_t ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addDownloadMIMEType_m6B2208093D607936044CCB9470DBEBAF73CE49E7 (String_t* ___0_name, String_t* ___1_MIMEType, int32_t ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeDownloadMIMETypes_mFB17541813BE61923D99C9DAE504EAC544D7C089 (String_t* ___0_name, String_t* ___1_MIMEType, int32_t ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowUserChooseActionAfterDownloading_mDF47AEA89FC7BE6FE0C8AD0720AA611FBB21CDF5 (String_t* ___0_name, bool ___1_allowed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_safeBrowsingInit_mC178B1DFD5427DCDB5475D7B83C78B82540B6DED (String_t* ___0_name, String_t* ___1_url, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_safeBrowsingShow_m53128959C352AA50F8ABDB8E652888C2B838AB82 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_safeBrowsingSetToolbarColor_m2B60B1F88EDD56E009F9F734BD64C6F3FEE7EAD5 (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_safeBrowsingSetToolbarItemColor_mFCFF1F8EE56D8B4C921EEA77012DE8B0BB5C0E0E (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_safeBrowsingDismiss_m9CA2014DD3AF39D21A1EEE354A25181B1602E226 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUrl_mF08492B883076DFF14EFB60CCCA5EE80016617D1 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D UniWebView_NextFrameRect_m222BFF790A1DE336FB40800E08F8DA3846EF4CAE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetFrame_m26FC64F835098BC244FF95F17419ED7B350C6E84 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_fourCornersArray, const RuntimeMethod* method) ;
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenWidth_mB8A2DB90CC317ADBF1A9A096DC834CEB8DD3DFC1 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenHeight_m72EAC5AB2C942E63F020DB4E3CED3D3519EC1570 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
inline UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddListener_mDA0D252CE6ADD3BD00D4279503333839A32C4646 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Init_mA170AB0A59E8F8DAC97FD0FB18CF85D9C16AC2FF (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_Show_m06F609BE438C518277660BF0D5F6D1DB98185CED (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Load_m5BABC3C114E577690E766E892D1A9C1E3BB08E11 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_url, bool ___1_skipEncoding, String_t* ___2_readAccessURL, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_inline (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_get_CanGoBack_mEBC0D299BB63639FC21757135E38395B2FD18D53 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GoBack_m53E58E67305A75D5D640D7FE0A73844277BF7F2B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShouldClose_m288E6C12B6CBB95922E6F700061E148F2658FBC9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView__Show_mD57A217AD16954F405C22355A6C9CFF45CC5D8FC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView__Hide_m31E395ABF66C41ABE8B093DD58619DADCD1B4C6F (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Load_mA0A42A5C9411A0AEDC6EE31E7498E30ECC16A4CB (String_t* ___0_name, String_t* ___1_url, bool ___2_skipEncoding, String_t* ___3_readAccessURL, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_LoadHTMLString_m086934336393BBC4EB333686C46C9288BE027F59 (String_t* ___0_name, String_t* ___1_html, String_t* ___2_baseUrl, bool ___3_skipEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Reload_mC134A615AE8B03A1A7D5DFA9EDBBBD69BA98FCA9 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Stop_m751AC39E1F877E9657F5ED831B0406E2FFC28D41 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoBack_m60694B17993E9DC47826E5DC3B9DFEC12A4DD59A (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoForward_m1461133C0AEC7D32E994FD95642826341FD02627 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoBack_m8BFB6B50A679554881753E824131ACC1558DE59E (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoForward_m7515B07542F0A59DE5B84F677CC09B1511CD9E9B (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetOpenLinksInExternalBrowser_m0F66F68E4AD1A6C6AD2D549A17685B2ACC652C23 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Show_m553D847019728F689F4F7C79B381B73112601C04 (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98 (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, String_t* ___0_key, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, String_t*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowToolbar_m096C958961581C717CBDD141059A3950CF43BF24 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_show, bool ___1_animated, bool ___2_onTop, bool ___3_adjustInset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Hide_m5AB5929F66AAC5EF598DAD25C896A3EB846FDACE (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_AnimateTo_m413573276E43A5E4DB1552ADA1E52F1283CEEA12 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, float ___5_duration, float ___6_delay, String_t* ___7_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddJavaScript_m157E0591488F45B29AADB19FA282BF6B71521740 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9 (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, String_t* ___0_key, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, String_t*, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_EvaluateJavaScript_m027521BB576801D9EA67E9E55065FA52200DADA4 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddUrlScheme_m2A6954D231F428A3677F51C9D41C816FA17F7C49 (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveUrlScheme_mD957A721214715AF1BDA5C8CDC5E28BE5C6A7F4B (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddSslExceptionDomain_m8FE98CFB237F9E4BC9DB3DCB0EE9117AE2D5233C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveSslExceptionDomain_m278FF9C874E87F702E2EE8E480AB8D5D31BD811C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHeaderField_m5EE71BC48E9AE2471780A3AA938CC49B14E75B41 (String_t* ___0_name, String_t* ___1_key, String_t* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserAgent_m9CA3014C1C272A8A3E0D3CB880F18628A11151B3 (String_t* ___0_name, String_t* ___1_userAgent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUserAgent_mA7EFD9E85946106487273961667A23A5C1EEAD94 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetContentInsetAdjustmentBehavior_m4A9AB65814BADF5D5964B410B0AD74E2EAE3BC82 (String_t* ___0_name, int32_t ___1_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowAutoPlay_mDB91254D5C2DF58A1907D8AED24B9D53712C46E2 (bool ___0_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowInlinePlay_mB7A86CF2F9395BD94ECF59F5059AA0D90AB4C4DF (bool ___0_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccess_mDA2098389AC5EBF43FE0B806F4BAC038AD5BD3E2 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccessFromFileURLs_m00AA0BA57A11C231F7BC9836101FF5597AD6640C (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mFA222A5C30FF032C8E1367F75EC605650D130156 (bool ___0_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetJavaScriptEnabled_mA437D5FA34B128F3BCAC49BC49193E42AB3E4EE1 (bool ___0_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEB7A0ECC311A2C3DF7FE3D4E3DD64876860DE24 (bool ___0_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CleanCache_m268E590335183857A83A2C03734F13BA8FB1DE96 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearCookies_mF3E894123E40DE1361663809673386D015FCFEC3 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCookie_m5B1303AA17D400FB0170F656DDB9793F249741DD (String_t* ___0_url, String_t* ___1_cookie, bool ___2_skipEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetCookie_m174641DD922771E679F0D6E1C0522B9A5BD1A9EE (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookies_mF6D699F5113F011455EEE049ED3FBF74748B1CDE (String_t* ___0_url, bool ___1_skipEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookie_mB47A4A575CE544E77874F2D06956266114EC438F (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearHttpAuthUsernamePassword_mAF13DAC71BC90F2784E7AF43A3F136647DEEB34B (String_t* ___0_host, String_t* ___1_realm, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBackgroundColor_m7F638D4057B21CE30389D2D104196ACDEE0DCA1A (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, float ___4_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_GetWebViewAlpha_m408A04169B9E1ACD0BE43D3B96E675AC980A97F6 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebViewAlpha_mD7E804965C2B5C9D503CA7B2BE6FC39C22C6422A (String_t* ___0_name, float ___1_alpha, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowSpinnerWhileLoading_m87A1A260D02881962518D7A23F6DE82FD8E93E74 (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSpinnerText_mF808B322A4F8EBC7F949C67D60775ACA8E78CED6 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHorizontalScrollBarEnabled_m3FB0E27A1E68BDBBCB8C575AAC2ECA0174A9168B (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetVerticalScrollBarEnabled_m5E4E8B06DA5CCCDC2B2C55A324A838040B3A4C22 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBouncesEnabled_m5BB33343416B23097E6DE23565BEE79D5109051C (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetZoomEnabled_mB3E75A4E2E0C8394F350483460C001A8CD1828C7 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowToolbar_m4A0C5A2EA5FA121FAB5357D8DC93C5A177EC2CB4 (String_t* ___0_name, bool ___1_show, bool ___2_animated, bool ___3_onTop, bool ___4_adjustInset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarDoneButtonText_m6313F307A7B7E6D760F851A42DA5402A6A92533D (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarGoBackButtonText_m00D805DB79A76F3148D1AF83450710A63BD17EDF (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarGoForwardButtonText_m7331CFC9BDFE1D2BBC5B0B54D0C0AFE2B03E75C8 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarTintColor_mE32F3228FB6B0C6CDFBAE9299CE84E21A5F08589 (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarTextColor_m4AF3D8A7F1508CB61A05235661E6B023796DB78F (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowToolbarNavigationButtons_m40845F2EDF5A16022FF777DD3CE595A78158959C (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserInteractionEnabled_mCFBAE387A262266014BDCE48BD34653D06F0F179 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTransparencyClickingThroughEnabled_mCA24436C0CEB09A85FD950D3D6F2CF6E24C49AAB (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebContentsDebuggingEnabled_mB89818D831425C081C35732663BDC82B8FE1299E (bool ___0_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWindowUserResizeEnabled_mB764B03C0AE797FD5D3C7B7DC52F397E2D04B7BB (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass153_0__ctor_m97B6BA468B989C60C0762633CA6914C0D2D81E99 (U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4* __this, const RuntimeMethod* method) ;
inline void Action_1__ctor_mFF6683FB50C114EC779ECC0F9E3F78A580F97EA7 (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_EvaluateJavaScript_mCE1BCB51C4DB0F0380F4430F1D9715CCB872B3F0 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_jsString, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_completionHandler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowBackForwardNavigationGestures_mE7EFE68323A42AC1E222DEE7D0C76B2388524731 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mD6E3D7351F9977DFC2A131ABD34656BE5E333496 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCalloutEnabled_m7E1A340CFBE84E75804A4A351D7F27DB6A356AD3 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetSupportMultipleWindows_mC42F557779337AA0B03DC5D450DC39568A508E85 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, bool ___1_allowJavaScriptOpening, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSupportMultipleWindows_m2B3875345342377C53DA6FA62E6CB7C919449752 (String_t* ___0_name, bool ___1_enabled, bool ___2_allowJavaScriptOpening, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDragInteractionEnabled_m268BEA0E80D52E00C61E1CF88615D355B8509E67 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Print_m0689A76490307B282F8E62EA4729422161AD40CF (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CaptureSnapshot_m8DE276F25F9C6720F2A1B030B647BD5D23FD0CDD (String_t* ___0_name, String_t* ___1_fileName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ScrollTo_mBDE75495718EA4A2066F1514BE66EDAA24AE998C (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, bool ___3_animated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddDownloadURL_m3943B8D59DA7058E0C5EE03AB603A38CD52CFE48 (String_t* ___0_name, String_t* ___1_urlString, int32_t ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveDownloadURL_mDB679FDF53FC58F298142946CAD6AFF7FF509C2A (String_t* ___0_name, String_t* ___1_urlString, int32_t ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddDownloadMIMEType_m1E179388C22A0FD1CEE6D9FDB6B4CA047D10CD69 (String_t* ___0_name, String_t* ___1_MIMEType, int32_t ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveDownloadMIMETypes_mEFAD5367200960693EA9EED2EDC137C71F347A48 (String_t* ___0_name, String_t* ___1_MIMEType, int32_t ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowUserChooseActionAfterDownloading_mDB17E8698254C7BD8EDC036C24F2001CD238C041 (String_t* ___0_name, bool ___1_allowed, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_RemoveListener_m6349FABAC78F87FD6AE5DAEDD1945F03F7221713 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Destroy_m03F8C9C4B879EB01ED23BEE624D1F3C35E051D0B (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8 (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, String_t* ___0_key, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, String_t*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0 (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5 (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, String_t* ___0_key, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, String_t*, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Action_1_Invoke_m89D3D0FB83AEFEFD39442766C0C4F5A8329D0285_inline (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
inline bool Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_inline (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_inline (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_inline (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_inline (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage__ctor_mB7BC54EAE6F2C87CAD0C7E4C06B3B322039E4F31 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_rawMessage, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_inline (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_inline (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_inline (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_inline (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_inline (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_inline (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_inline (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_inline (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
inline void Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLogLevel_m9FAEEBF3B0D6D4137561DC7534102FF942FD9503 (int32_t ___0_level, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger__ctor_m34471A32804D2FA24C75F47FE2928C4D502592D8 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, int32_t ___0_level, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniWebViewLogger_get_LogLevel_mDD6D8292FDF564448574978C418BD4A1D042A761_inline (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_RawMessage_mA50E0A27C5843A01C66D5E21860E9A2ACB8BC73F_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Path_m35505E576E5D9CFC542FA04B063A3D90EE2ADEB9_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Debug_m0ACF6E31D335F25643AE2813F4447C0E18DE87FB (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8 (String_t* __this, Il2CppChar ___0_trimChar, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB (String_t* ___0_s, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m35248FA6DA553D6A8082C9318F63F98D23FB89AF (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* __this, String_t* ___0_key, UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE*, String_t*, UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m39B09CBAD5D2D9156D29277D0788191D6C2AF198 (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryGetValue_m8BFB0BB6D03FE0A2EA06E89719B4DD3C981125CC (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* __this, String_t* ___0_key, UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE*, String_t*, UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageStarted_mCC7F59BDFB3D6DCE5BB86478DA91B1C47765D9AE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_url, const RuntimeMethod* method) ;
inline UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageFinished_mC5C2526387EBD9A3C91AA5A7FBEA43578ECC616A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageErrorReceived_mF2FD6E5D4B839AC9CDB00497C9C07BC5672DAACF (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___0_s, float* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageProgressChanged_m315FCE400C99F88020084AD9EE72C97B29B5370C (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, float ___0_progress, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShowTransitionFinished_m43B0D8548BC33F30B809AAE5ACCC6451658B740B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnHideTransitionFinished_m0384C70ED27CF10A11297B4D8D3A71A7076E92D8 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAnimateToFinished_m5FCE7F89EDEAAE8673ECBF8BC0E5BF7CCE2B9632 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAddJavaScriptFinished_m1D42374A36244250F2F6124A0C819B33C5684378 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnEvalJavaScriptFinished_mF80A34BC2BD3F5063BE79C98245CF7D397C7A3E7 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMessageReceived_m6BA779B133E0858266E4C25E5935FE4D78918356 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnWebContentProcessDidTerminate_mDDD3AEF0EC6AD327ACA6B8E9BCD71B6EB73DADDE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_InternalSafeBrowsingFinished_mE666E18A32CA3A020190C9A9738221344796977B (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowOpened_m511D2F03883B77233CDF1975E80DA01531E52C05 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_multiWindowId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowClosed_m1B0A5F7048AC06C683C48C1232B840454F39C028 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_multiWindowId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadStarted_mF8149818A85DB5C0448A0DF32B3626F0D00A8378 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadFinished_mBFE7FC899642D5F12106559319E0E35DC944EB8A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnCaptureSnapshotFinished_mE3338681266888F771F1A9C89F43F831C325690E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m5882C0F77F264EC25EF9EBBFD8360E84A079C50E (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* UniWebViewSafeBrowsing_Create_mC444524EA64AC27D905C841A0BBE81BF55B25794 (String_t* ___0_url, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Show_m7FC6AEC9841DC9F4F425ECFAF34472CF75FA337D (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing__ctor_m11815A3213110A74C5F32C3F740E6547DAD8BD9F (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Init_mE99E67B592AF74177A542B69CC2D9A9934D46B9A (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, String_t* ___0_url, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewSafeBrowsing_get_IsSafeBrowsingSupported_mDA309DDBE04C13BF0F2F6B063D97F0E22D59D340 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingShow_mBCFB1C5840DA42F58DEE56AC65392B04CE905E56 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingDismiss_m50C39E9C76874EBDA8CBEF9F90D7115C052EE3DA (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingSetToolbarColor_m1DCFD167C3FBF30C3ACD3DB46051CDCB157A43CD (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingSetToolbarItemColor_mC91313F910935D21A144F9561163F2B8411991A5 (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingInit_mC6A1F7DE80C89CF98041AC77AD9F9692EB9789B6 (String_t* ___0_name, String_t* ___1_url, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_inline (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL uv_connectMessageSender(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setLogLevel(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_init(char*, int32_t, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_destroy(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_load(char*, char*, int32_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_loadHTMLString(char*, char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_reload(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_stop(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL uv_getUrl(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setFrame(char*, int32_t, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setPosition(char*, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setSize(char*, int32_t, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL uv_show(char*, int32_t, int32_t, float, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL uv_hide(char*, int32_t, int32_t, float, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL uv_animateTo(char*, int32_t, int32_t, int32_t, int32_t, float, float, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_addJavaScript(char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_evaluateJavaScript(char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_addUrlScheme(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_removeUrlScheme(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_addSslExceptionDomain(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_removeSslExceptionDomain(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setHeaderField(char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setUserAgent(char*, char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL uv_getUserAgent(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setContentInsetAdjustmentBehavior(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setAllowAutoPlay(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setAllowInlinePlay(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setAllowFileAccess(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setAllowFileAccessFromFileURLs(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setAllowUniversalAccessFromFileURLs(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setAllowJavaScriptOpenWindow(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setJavaScriptEnabled(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_cleanCache(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_clearCookies();
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setCookie(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_removeCookies(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_removeCookie(char*, char*, int32_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL uv_getCookie(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_clearHttpAuthUsernamePasswordHost(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setBackgroundColor(char*, float, float, float, float);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setWebViewAlpha(char*, float);
IL2CPP_EXTERN_C float DEFAULT_CALL uv_getWebViewAlpha(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setShowSpinnerWhileLoading(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setSpinnerText(char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL uv_canGoBack(char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL uv_canGoForward(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_goBack(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_goForward(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setOpenLinksInExternalBrowser(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setHorizontalScrollBarEnabled(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setVerticalScrollBarEnabled(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setBouncesEnabled(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setZoomEnabled(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setShowToolbar(char*, int32_t, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setShowToolbarNavigationButtons(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setToolbarDoneButtonText(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setGoBackButtonText(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setGoForwardButtonText(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setWindowUserResizeEnabled(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setToolbarTintColor(char*, float, float, float);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setToolbarTextColor(char*, float, float, float);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setUserInteractionEnabled(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setTransparencyClickingThroughEnabled(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setWebContentsDebuggingEnabled(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setAllowBackForwardNavigationGestures(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setAllowHTTPAuthPopUpWindow(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_print(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_captureSnapshot(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_scrollTo(char*, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setCalloutEnabled(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setSupportMultipleWindows(char*, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setDragInteractionEnabled(char*, int32_t);
IL2CPP_EXTERN_C float DEFAULT_CALL uv_nativeScreenWidth();
IL2CPP_EXTERN_C float DEFAULT_CALL uv_nativeScreenHeight();
IL2CPP_EXTERN_C void DEFAULT_CALL uv_addDownloadURL(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_removeDownloadURL(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_addDownloadMIMEType(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_removeDownloadMIMETypes(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_setAllowUserChooseActionAfterDownloading(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_safeBrowsingInit(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_safeBrowsingShow(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_safeBrowsingSetToolbarColor(char*, float, float, float);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_safeBrowsingSetToolbarItemColor(char*, float, float, float);
IL2CPP_EXTERN_C void DEFAULT_CALL uv_safeBrowsingDismiss(char*);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener_Awake_m70ABEC4CEC6CE2F537B73010A2703FBEC4992B5F (UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener_OnJavaMessage_m05F2A2459168497BAE57653377B40DB98D61100B (UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A92C3780BFB8E4337E1F918B9736D7E62AC5DAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5886CC8EB4F8A781BD0FD273284D9412CD0EC0EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	{
		String_t* L_0 = ___0_message;
		NullCheck(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, 0, NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, L_1, 0, NULL);
		V_0 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) >= ((int32_t)3)))
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5886CC8EB4F8A781BD0FD273284D9412CD0EC0EA, NULL);
		return;
	}

IL_0024:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_7;
		L_7 = UniWebViewNativeListener_GetListener_m39275F3A5DE6212AE442AA579034C7F4169674D5(L_6, NULL);
		V_1 = L_7;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		return;
	}

IL_0037:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		MethodInfo_t* L_15;
		L_15 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_11, L_14, NULL);
		V_2 = L_15;
		MethodInfo_t* L_16 = V_2;
		bool L_17;
		L_17 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_16, (MethodInfo_t*)NULL, NULL);
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3A92C3780BFB8E4337E1F918B9736D7E62AC5DAB, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_21, NULL);
	}

IL_0065:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_0;
		NullCheck(L_22);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), 2));
		int32_t L_23 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_23);
		V_4 = L_24;
		V_5 = 0;
		goto IL_0089;
	}

IL_0078:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_4;
		int32_t L_26 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		String_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (String_t*)L_30);
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0089:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_3;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0078;
		}
	}
	{
		MethodInfo_t* L_34 = V_2;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_35 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = V_4;
		String_t* L_39;
		L_39 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, L_38, NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_39);
		NullCheck(L_34);
		RuntimeObject* L_40;
		L_40 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_34, L_35, L_37, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener__ctor_m89F9ACC2686C80F00F7A6823E4A8A44709246E24 (UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UniWebViewInterface_SendMessage_m10CFE4B67F435945F14982DD593F9D5747FCE86D(intptr_t ___0_namePtr, intptr_t ___1_methodPtr, intptr_t ___2_parameterPtr)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	UniWebViewInterface_SendMessage_m10CFE4B67F435945F14982DD593F9D5747FCE86D(___0_namePtr, ___1_methodPtr, ___2_parameterPtr, NULL);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface__cctor_mDFE83B914E15539C37FEFD93ED2FF076F3ED153F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___correctPlatform = (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
		UniWebViewInterface_ConnectMessageSender_mCE81A605D1857A2C977B14BE3A71FAAE665F1E8D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_connectMessageSender_m554E8DAD98B0E45359376DA736122875703DEDC3 (UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* ___0_sendMessageDelegate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	Il2CppMethodPointer ____0_sendMessageDelegate_marshaled = NULL;
	____0_sendMessageDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_sendMessageDelegate));

	reinterpret_cast<PInvokeFunc>(uv_connectMessageSender)(____0_sendMessageDelegate_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ConnectMessageSender_mCE81A605D1857A2C977B14BE3A71FAAE665F1E8D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_SendMessage_m10CFE4B67F435945F14982DD593F9D5747FCE86D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE13D66222204052CD72B386B0CB59C1DF8A7F323);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, _stringLiteralE13D66222204052CD72B386B0CB59C1DF8A7F323, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* L_1 = (UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF*)il2cpp_codegen_object_new(UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF_il2cpp_TypeInfo_var);
		UnitySendMessageDelegate__ctor_m610A4B75EDC8500D57ECA6645C8B943E944252C6(L_1, NULL, (intptr_t)((void*)UniWebViewInterface_SendMessage_m10CFE4B67F435945F14982DD593F9D5747FCE86D_RuntimeMethod_var), NULL);
		UniWebViewInterface_uv_connectMessageSender_m554E8DAD98B0E45359376DA736122875703DEDC3(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SendMessage_m10CFE4B67F435945F14982DD593F9D5747FCE86D (intptr_t ___0_namePtr, intptr_t ___1_methodPtr, intptr_t ___2_parameterPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E3C4A4E113783E0BF9FDA66C91110A5566B82AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455A7407451936D30ADA3E76C7EB02A81283BF92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4A0C981689238AFF713117FEFE71DFB9C94E191);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* V_3 = NULL;
	MethodInfo_t* V_4 = NULL;
	{
		intptr_t L_0 = ___0_namePtr;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = ___1_methodPtr;
		String_t* L_3;
		L_3 = Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275(L_2, NULL);
		V_1 = L_3;
		intptr_t L_4 = ___2_parameterPtr;
		String_t* L_5;
		L_5 = Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275(L_4, NULL);
		V_2 = L_5;
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_6;
		L_6 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF4A0C981689238AFF713117FEFE71DFB9C94E191);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral455A7407451936D30ADA3E76C7EB02A81283BF92);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral0E3C4A4E113783E0BF9FDA66C91110A5566B82AE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		NullCheck(L_6);
		UniWebViewLogger_Verbose_m7477D7643820B23D6659CDE47B49B70A167BF376(L_6, L_17, NULL);
		String_t* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_19;
		L_19 = UniWebViewNativeListener_GetListener_m39275F3A5DE6212AE442AA579034C7F4169674D5(L_18, NULL);
		V_3 = L_19;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_20 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_20, NULL);
		if (!L_21)
		{
			goto IL_008c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		String_t* L_24 = V_1;
		NullCheck(L_23);
		MethodInfo_t* L_25;
		L_25 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_23, L_24, NULL);
		V_4 = L_25;
		MethodInfo_t* L_26 = V_4;
		bool L_27;
		L_27 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_26, (MethodInfo_t*)NULL, NULL);
		if (!L_27)
		{
			goto IL_008c;
		}
	}
	{
		MethodInfo_t* L_28 = V_4;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_29 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_30;
		String_t* L_32 = V_2;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_32);
		NullCheck(L_28);
		RuntimeObject* L_33;
		L_33 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_28, L_29, L_31, NULL);
	}

IL_008c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setLogLevel_mEDD569533622693B1166E82F8F3AC787AF139A2D (int32_t ___0_level, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(uv_setLogLevel)(___0_level);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLogLevel_m9FAEEBF3B0D6D4137561DC7534102FF942FD9503 (int32_t ___0_level, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		int32_t L_0 = ___0_level;
		UniWebViewInterface_uv_setLogLevel_mEDD569533622693B1166E82F8F3AC787AF139A2D(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_init_m588A93EB2A89C44DD289C57B50242741DB8BEB0B (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_init)(____0_name_marshaled, ___1_x, ___2_y, ___3_width, ___4_height);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Init_mA170AB0A59E8F8DAC97FD0FB18CF85D9C16AC2FF (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		String_t* L_2 = ___0_name;
		int32_t L_3 = ___1_x;
		int32_t L_4 = ___2_y;
		int32_t L_5 = ___3_width;
		int32_t L_6 = ___4_height;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_uv_init_m588A93EB2A89C44DD289C57B50242741DB8BEB0B(L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_destroy_m0BEFB552857BE5787F54CBCF9888BB2469E2967C (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_destroy)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Destroy_m03F8C9C4B879EB01ED23BEE624D1F3C35E051D0B (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		UniWebViewInterface_uv_destroy_m0BEFB552857BE5787F54CBCF9888BB2469E2967C(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_load_m5EFF4090EAA4E38AF5012EF97D7E355F85ED3D8B (String_t* ___0_name, String_t* ___1_url, bool ___2_skipEncoding, String_t* ___3_readAccessURL, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_url_marshaled = NULL;
	____1_url_marshaled = il2cpp_codegen_marshal_string(___1_url);

	char* ____3_readAccessURL_marshaled = NULL;
	____3_readAccessURL_marshaled = il2cpp_codegen_marshal_string(___3_readAccessURL);

	reinterpret_cast<PInvokeFunc>(uv_load)(____0_name_marshaled, ____1_url_marshaled, static_cast<int32_t>(___2_skipEncoding), ____3_readAccessURL_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_url_marshaled);
	____1_url_marshaled = NULL;

	il2cpp_codegen_marshal_free(____3_readAccessURL_marshaled);
	____3_readAccessURL_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Load_mA0A42A5C9411A0AEDC6EE31E7498E30ECC16A4CB (String_t* ___0_name, String_t* ___1_url, bool ___2_skipEncoding, String_t* ___3_readAccessURL, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_url;
		bool L_2 = ___2_skipEncoding;
		String_t* L_3 = ___3_readAccessURL;
		UniWebViewInterface_uv_load_m5EFF4090EAA4E38AF5012EF97D7E355F85ED3D8B(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_loadHTMLString_mF943FDB16DC7EB83DB5A2ED09315EFDB5C47E83F (String_t* ___0_name, String_t* ___1_html, String_t* ___2_baseUrl, bool ___3_skipEncoding, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_html_marshaled = NULL;
	____1_html_marshaled = il2cpp_codegen_marshal_string(___1_html);

	char* ____2_baseUrl_marshaled = NULL;
	____2_baseUrl_marshaled = il2cpp_codegen_marshal_string(___2_baseUrl);

	reinterpret_cast<PInvokeFunc>(uv_loadHTMLString)(____0_name_marshaled, ____1_html_marshaled, ____2_baseUrl_marshaled, static_cast<int32_t>(___3_skipEncoding));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_html_marshaled);
	____1_html_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_baseUrl_marshaled);
	____2_baseUrl_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_LoadHTMLString_m086934336393BBC4EB333686C46C9288BE027F59 (String_t* ___0_name, String_t* ___1_html, String_t* ___2_baseUrl, bool ___3_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_html;
		String_t* L_2 = ___2_baseUrl;
		bool L_3 = ___3_skipEncoding;
		UniWebViewInterface_uv_loadHTMLString_mF943FDB16DC7EB83DB5A2ED09315EFDB5C47E83F(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_reload_m266AA48FAA0A42ED5DC7A054BABB9FBE63BBC357 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_reload)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Reload_mC134A615AE8B03A1A7D5DFA9EDBBBD69BA98FCA9 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		UniWebViewInterface_uv_reload_m266AA48FAA0A42ED5DC7A054BABB9FBE63BBC357(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_stop_mDC7B7A149048A2737D133FC2448C2E4E613DB084 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_stop)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Stop_m751AC39E1F877E9657F5ED831B0406E2FFC28D41 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		UniWebViewInterface_uv_stop_mDC7B7A149048A2737D133FC2448C2E4E613DB084(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getUrl_mF7FD36F241F59903AECD5A265839C2F06DE8860E (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* returnValue = reinterpret_cast<PInvokeFunc>(uv_getUrl)(____0_name_marshaled);

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUrl_mF08492B883076DFF14EFB60CCCA5EE80016617D1 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1;
		L_1 = UniWebViewInterface_uv_getUrl_mF7FD36F241F59903AECD5A265839C2F06DE8860E(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setFrame_mBCA5F92165FB886520D527FCF0FF79E8080EF1D4 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setFrame)(____0_name_marshaled, ___1_x, ___2_y, ___3_width, ___4_height);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetFrame_m26FC64F835098BC244FF95F17419ED7B350C6E84 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_x;
		int32_t L_2 = ___2_y;
		int32_t L_3 = ___3_width;
		int32_t L_4 = ___4_height;
		UniWebViewInterface_uv_setFrame_mBCA5F92165FB886520D527FCF0FF79E8080EF1D4(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setPosition_m612DC7AA369FCFACB4C26A2484D0E34AAD5912DC (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setPosition)(____0_name_marshaled, ___1_x, ___2_y);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetPosition_m99848646D1312836E3CF5C42120B3FCC2E253893 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_x;
		int32_t L_2 = ___2_y;
		UniWebViewInterface_uv_setPosition_m612DC7AA369FCFACB4C26A2484D0E34AAD5912DC(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setSize_mF3C37FB4AA5151DC8FB058111C67C8248F1B3638 (String_t* ___0_name, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setSize)(____0_name_marshaled, ___1_width, ___2_height);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSize_mFC520293677926F6247850F1C194A742E549C040 (String_t* ___0_name, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_width;
		int32_t L_2 = ___2_height;
		UniWebViewInterface_uv_setSize_mF3C37FB4AA5151DC8FB058111C67C8248F1B3638(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_show_mB2701DD2AD7836487026C81E00FFACDD232B2179 (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, String_t* ___4_identifier, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____4_identifier_marshaled = NULL;
	____4_identifier_marshaled = il2cpp_codegen_marshal_string(___4_identifier);

	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uv_show)(____0_name_marshaled, static_cast<int32_t>(___1_fade), ___2_edge, ___3_duration, ____4_identifier_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____4_identifier_marshaled);
	____4_identifier_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Show_m553D847019728F689F4F7C79B381B73112601C04 (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_fade;
		int32_t L_2 = ___2_edge;
		float L_3 = ___3_duration;
		String_t* L_4 = ___5_identifier;
		bool L_5;
		L_5 = UniWebViewInterface_uv_show_mB2701DD2AD7836487026C81E00FFACDD232B2179(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_hide_m2D75667A562DA9CD0BB5B171201825B3590594D2 (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, String_t* ___4_identifier, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____4_identifier_marshaled = NULL;
	____4_identifier_marshaled = il2cpp_codegen_marshal_string(___4_identifier);

	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uv_hide)(____0_name_marshaled, static_cast<int32_t>(___1_fade), ___2_edge, ___3_duration, ____4_identifier_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____4_identifier_marshaled);
	____4_identifier_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Hide_m5AB5929F66AAC5EF598DAD25C896A3EB846FDACE (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_fade;
		int32_t L_2 = ___2_edge;
		float L_3 = ___3_duration;
		String_t* L_4 = ___5_identifier;
		bool L_5;
		L_5 = UniWebViewInterface_uv_hide_m2D75667A562DA9CD0BB5B171201825B3590594D2(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_animateTo_mDC51FEE8804CE85809373C9A6DF09FFF7CA43627 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, float ___5_duration, float ___6_delay, String_t* ___7_identifier, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t, int32_t, float, float, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____7_identifier_marshaled = NULL;
	____7_identifier_marshaled = il2cpp_codegen_marshal_string(___7_identifier);

	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uv_animateTo)(____0_name_marshaled, ___1_x, ___2_y, ___3_width, ___4_height, ___5_duration, ___6_delay, ____7_identifier_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____7_identifier_marshaled);
	____7_identifier_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_AnimateTo_m413573276E43A5E4DB1552ADA1E52F1283CEEA12 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, float ___5_duration, float ___6_delay, String_t* ___7_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_x;
		int32_t L_2 = ___2_y;
		int32_t L_3 = ___3_width;
		int32_t L_4 = ___4_height;
		float L_5 = ___5_duration;
		float L_6 = ___6_delay;
		String_t* L_7 = ___7_identifier;
		bool L_8;
		L_8 = UniWebViewInterface_uv_animateTo_mDC51FEE8804CE85809373C9A6DF09FFF7CA43627(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addJavaScript_m9ADCF2C30197AADD4EB1687D237594E77771DC53 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_jsString_marshaled = NULL;
	____1_jsString_marshaled = il2cpp_codegen_marshal_string(___1_jsString);

	char* ____2_identifier_marshaled = NULL;
	____2_identifier_marshaled = il2cpp_codegen_marshal_string(___2_identifier);

	reinterpret_cast<PInvokeFunc>(uv_addJavaScript)(____0_name_marshaled, ____1_jsString_marshaled, ____2_identifier_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_jsString_marshaled);
	____1_jsString_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_identifier_marshaled);
	____2_identifier_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddJavaScript_m157E0591488F45B29AADB19FA282BF6B71521740 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_jsString;
		String_t* L_2 = ___2_identifier;
		UniWebViewInterface_uv_addJavaScript_m9ADCF2C30197AADD4EB1687D237594E77771DC53(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_evaluateJavaScript_m59AD6669B6C05C0F4CA91C07709BF56A504F7787 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_jsString_marshaled = NULL;
	____1_jsString_marshaled = il2cpp_codegen_marshal_string(___1_jsString);

	char* ____2_identifier_marshaled = NULL;
	____2_identifier_marshaled = il2cpp_codegen_marshal_string(___2_identifier);

	reinterpret_cast<PInvokeFunc>(uv_evaluateJavaScript)(____0_name_marshaled, ____1_jsString_marshaled, ____2_identifier_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_jsString_marshaled);
	____1_jsString_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_identifier_marshaled);
	____2_identifier_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_EvaluateJavaScript_m027521BB576801D9EA67E9E55065FA52200DADA4 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_jsString;
		String_t* L_2 = ___2_identifier;
		UniWebViewInterface_uv_evaluateJavaScript_m59AD6669B6C05C0F4CA91C07709BF56A504F7787(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addUrlScheme_mF23BB107B1A256903F77F6496A8883E4CF7D659C (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_scheme_marshaled = NULL;
	____1_scheme_marshaled = il2cpp_codegen_marshal_string(___1_scheme);

	reinterpret_cast<PInvokeFunc>(uv_addUrlScheme)(____0_name_marshaled, ____1_scheme_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_scheme_marshaled);
	____1_scheme_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddUrlScheme_m2A6954D231F428A3677F51C9D41C816FA17F7C49 (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_scheme;
		UniWebViewInterface_uv_addUrlScheme_mF23BB107B1A256903F77F6496A8883E4CF7D659C(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeUrlScheme_m9729DFEAEF130B85350CD2926401D3795895722B (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_scheme_marshaled = NULL;
	____1_scheme_marshaled = il2cpp_codegen_marshal_string(___1_scheme);

	reinterpret_cast<PInvokeFunc>(uv_removeUrlScheme)(____0_name_marshaled, ____1_scheme_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_scheme_marshaled);
	____1_scheme_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveUrlScheme_mD957A721214715AF1BDA5C8CDC5E28BE5C6A7F4B (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_scheme;
		UniWebViewInterface_uv_removeUrlScheme_m9729DFEAEF130B85350CD2926401D3795895722B(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addSslExceptionDomain_m2A44B90A6F3FA4827D0B9E9FCF20ECBA9247EF05 (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_domain_marshaled = NULL;
	____1_domain_marshaled = il2cpp_codegen_marshal_string(___1_domain);

	reinterpret_cast<PInvokeFunc>(uv_addSslExceptionDomain)(____0_name_marshaled, ____1_domain_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_domain_marshaled);
	____1_domain_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddSslExceptionDomain_m8FE98CFB237F9E4BC9DB3DCB0EE9117AE2D5233C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_domain;
		UniWebViewInterface_uv_addSslExceptionDomain_m2A44B90A6F3FA4827D0B9E9FCF20ECBA9247EF05(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeSslExceptionDomain_mEE94D00258300A86BFC5F3B78385EE4387101D38 (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_domain_marshaled = NULL;
	____1_domain_marshaled = il2cpp_codegen_marshal_string(___1_domain);

	reinterpret_cast<PInvokeFunc>(uv_removeSslExceptionDomain)(____0_name_marshaled, ____1_domain_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_domain_marshaled);
	____1_domain_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveSslExceptionDomain_m278FF9C874E87F702E2EE8E480AB8D5D31BD811C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_domain;
		UniWebViewInterface_uv_removeSslExceptionDomain_mEE94D00258300A86BFC5F3B78385EE4387101D38(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setHeaderField_mFD7294819258F2D3A31F71A3E5C5537B0D7374C3 (String_t* ___0_name, String_t* ___1_key, String_t* ___2_value, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_key_marshaled = NULL;
	____1_key_marshaled = il2cpp_codegen_marshal_string(___1_key);

	char* ____2_value_marshaled = NULL;
	____2_value_marshaled = il2cpp_codegen_marshal_string(___2_value);

	reinterpret_cast<PInvokeFunc>(uv_setHeaderField)(____0_name_marshaled, ____1_key_marshaled, ____2_value_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_key_marshaled);
	____1_key_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_value_marshaled);
	____2_value_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHeaderField_m5EE71BC48E9AE2471780A3AA938CC49B14E75B41 (String_t* ___0_name, String_t* ___1_key, String_t* ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_key;
		String_t* L_2 = ___2_value;
		UniWebViewInterface_uv_setHeaderField_mFD7294819258F2D3A31F71A3E5C5537B0D7374C3(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setUserAgent_mBDC98A335FC64F2167E619958AD72F4E1C1AC3C1 (String_t* ___0_name, String_t* ___1_userAgent, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_userAgent_marshaled = NULL;
	____1_userAgent_marshaled = il2cpp_codegen_marshal_string(___1_userAgent);

	reinterpret_cast<PInvokeFunc>(uv_setUserAgent)(____0_name_marshaled, ____1_userAgent_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_userAgent_marshaled);
	____1_userAgent_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserAgent_m9CA3014C1C272A8A3E0D3CB880F18628A11151B3 (String_t* ___0_name, String_t* ___1_userAgent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_userAgent;
		UniWebViewInterface_uv_setUserAgent_mBDC98A335FC64F2167E619958AD72F4E1C1AC3C1(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getUserAgent_m862E2AC11D9F250FAE2F3FB0C0AF90C5A9C70AD5 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* returnValue = reinterpret_cast<PInvokeFunc>(uv_getUserAgent)(____0_name_marshaled);

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUserAgent_mA7EFD9E85946106487273961667A23A5C1EEAD94 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1;
		L_1 = UniWebViewInterface_uv_getUserAgent_m862E2AC11D9F250FAE2F3FB0C0AF90C5A9C70AD5(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setContentInsetAdjustmentBehavior_m8D4F039FC1B8842ABBEC7DE4363499D8A2F65551 (String_t* ___0_name, int32_t ___1_behavior, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setContentInsetAdjustmentBehavior)(____0_name_marshaled, ___1_behavior);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetContentInsetAdjustmentBehavior_m4A9AB65814BADF5D5964B410B0AD74E2EAE3BC82 (String_t* ___0_name, int32_t ___1_behavior, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_behavior;
		UniWebViewInterface_uv_setContentInsetAdjustmentBehavior_m8D4F039FC1B8842ABBEC7DE4363499D8A2F65551(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowAutoPlay_m44F85D72D1E9994F2043779726727017199F7597 (bool ___0_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(uv_setAllowAutoPlay)(static_cast<int32_t>(___0_flag));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowAutoPlay_mDB91254D5C2DF58A1907D8AED24B9D53712C46E2 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		bool L_0 = ___0_flag;
		UniWebViewInterface_uv_setAllowAutoPlay_m44F85D72D1E9994F2043779726727017199F7597(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowInlinePlay_mE1E79803F6F4D905EC73F69A08E641702225CC47 (bool ___0_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(uv_setAllowInlinePlay)(static_cast<int32_t>(___0_flag));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowInlinePlay_mB7A86CF2F9395BD94ECF59F5059AA0D90AB4C4DF (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		bool L_0 = ___0_flag;
		UniWebViewInterface_uv_setAllowInlinePlay_mE1E79803F6F4D905EC73F69A08E641702225CC47(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowFileAccess_mAC8225F5B25ADE132AC5F76AD7ADB3223A5A656A (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setAllowFileAccess)(____0_name_marshaled, static_cast<int32_t>(___1_flag));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccess_mDA2098389AC5EBF43FE0B806F4BAC038AD5BD3E2 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_flag;
		UniWebViewInterface_uv_setAllowFileAccess_mAC8225F5B25ADE132AC5F76AD7ADB3223A5A656A(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowFileAccessFromFileURLs_m603C794A4B0C034B6872767CBC83A824058958C9 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setAllowFileAccessFromFileURLs)(____0_name_marshaled, static_cast<int32_t>(___1_flag));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccessFromFileURLs_m00AA0BA57A11C231F7BC9836101FF5597AD6640C (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_flag;
		UniWebViewInterface_uv_setAllowFileAccessFromFileURLs_m603C794A4B0C034B6872767CBC83A824058958C9(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowUniversalAccessFromFileURLs_m68011849409FE162185D763AF933BD624EF2CDC9 (bool ___0_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(uv_setAllowUniversalAccessFromFileURLs)(static_cast<int32_t>(___0_flag));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mFA222A5C30FF032C8E1367F75EC605650D130156 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		bool L_0 = ___0_flag;
		UniWebViewInterface_uv_setAllowUniversalAccessFromFileURLs_m68011849409FE162185D763AF933BD624EF2CDC9(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowJavaScriptOpenWindow_mF82E9FA5AD93D24A814E2C549A45E199192AACE4 (bool ___0_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(uv_setAllowJavaScriptOpenWindow)(static_cast<int32_t>(___0_flag));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEB7A0ECC311A2C3DF7FE3D4E3DD64876860DE24 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		bool L_0 = ___0_flag;
		UniWebViewInterface_uv_setAllowJavaScriptOpenWindow_mF82E9FA5AD93D24A814E2C549A45E199192AACE4(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setJavaScriptEnabled_m1344E0E091FE6AFBE3EF81862A91E7AE30F8F5E5 (bool ___0_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(uv_setJavaScriptEnabled)(static_cast<int32_t>(___0_flag));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetJavaScriptEnabled_mA437D5FA34B128F3BCAC49BC49193E42AB3E4EE1 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		bool L_0 = ___0_flag;
		UniWebViewInterface_uv_setJavaScriptEnabled_m1344E0E091FE6AFBE3EF81862A91E7AE30F8F5E5(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_cleanCache_m3AFAAB4F520BD9996DF53B288504172718AC3ED3 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_cleanCache)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CleanCache_m268E590335183857A83A2C03734F13BA8FB1DE96 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		UniWebViewInterface_uv_cleanCache_m3AFAAB4F520BD9996DF53B288504172718AC3ED3(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_clearCookies_m71F2CE3F64469A3A61749A3EF8052BB6AD0DC14D (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(uv_clearCookies)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearCookies_mF3E894123E40DE1361663809673386D015FCFEC3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		UniWebViewInterface_uv_clearCookies_m71F2CE3F64469A3A61749A3EF8052BB6AD0DC14D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setCookie_m48A2D30B900D7EB14E0D1D3A569F1827F825E4DE (String_t* ___0_url, String_t* ___1_cookie, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	char* ____1_cookie_marshaled = NULL;
	____1_cookie_marshaled = il2cpp_codegen_marshal_string(___1_cookie);

	reinterpret_cast<PInvokeFunc>(uv_setCookie)(____0_url_marshaled, ____1_cookie_marshaled, static_cast<int32_t>(___2_skipEncoding));

	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_cookie_marshaled);
	____1_cookie_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCookie_m5B1303AA17D400FB0170F656DDB9793F249741DD (String_t* ___0_url, String_t* ___1_cookie, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_cookie;
		bool L_2 = ___2_skipEncoding;
		UniWebViewInterface_uv_setCookie_m48A2D30B900D7EB14E0D1D3A569F1827F825E4DE(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeCookies_m34698935C0BF17B761ABBCE558944512B27CE926 (String_t* ___0_url, bool ___1_skipEncoding, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	reinterpret_cast<PInvokeFunc>(uv_removeCookies)(____0_url_marshaled, static_cast<int32_t>(___1_skipEncoding));

	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookies_mF6D699F5113F011455EEE049ED3FBF74748B1CDE (String_t* ___0_url, bool ___1_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_url;
		bool L_1 = ___1_skipEncoding;
		UniWebViewInterface_uv_removeCookies_m34698935C0BF17B761ABBCE558944512B27CE926(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeCookie_mC73C4561AEB9F78846A5C573D136C78FF41A8B3C (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	char* ____1_key_marshaled = NULL;
	____1_key_marshaled = il2cpp_codegen_marshal_string(___1_key);

	reinterpret_cast<PInvokeFunc>(uv_removeCookie)(____0_url_marshaled, ____1_key_marshaled, static_cast<int32_t>(___2_skipEncoding));

	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_key_marshaled);
	____1_key_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookie_mB47A4A575CE544E77874F2D06956266114EC438F (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_key;
		bool L_2 = ___2_skipEncoding;
		UniWebViewInterface_uv_removeCookie_mC73C4561AEB9F78846A5C573D136C78FF41A8B3C(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getCookie_m38424482B0B8649EDE8D7EB2FF43FAEA05A6FF89 (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	char* ____1_key_marshaled = NULL;
	____1_key_marshaled = il2cpp_codegen_marshal_string(___1_key);

	char* returnValue = reinterpret_cast<PInvokeFunc>(uv_getCookie)(____0_url_marshaled, ____1_key_marshaled, static_cast<int32_t>(___2_skipEncoding));

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_key_marshaled);
	____1_key_marshaled = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetCookie_m174641DD922771E679F0D6E1C0522B9A5BD1A9EE (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_key;
		bool L_2 = ___2_skipEncoding;
		String_t* L_3;
		L_3 = UniWebViewInterface_uv_getCookie_m38424482B0B8649EDE8D7EB2FF43FAEA05A6FF89(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_clearHttpAuthUsernamePasswordHost_mF97AEFAB2540AF2F38C0A21ABB2A326EF1100764 (String_t* ___0_host, String_t* ___1_realm, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_host_marshaled = NULL;
	____0_host_marshaled = il2cpp_codegen_marshal_string(___0_host);

	char* ____1_realm_marshaled = NULL;
	____1_realm_marshaled = il2cpp_codegen_marshal_string(___1_realm);

	reinterpret_cast<PInvokeFunc>(uv_clearHttpAuthUsernamePasswordHost)(____0_host_marshaled, ____1_realm_marshaled);

	il2cpp_codegen_marshal_free(____0_host_marshaled);
	____0_host_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_realm_marshaled);
	____1_realm_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearHttpAuthUsernamePassword_mAF13DAC71BC90F2784E7AF43A3F136647DEEB34B (String_t* ___0_host, String_t* ___1_realm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_host;
		String_t* L_1 = ___1_realm;
		UniWebViewInterface_uv_clearHttpAuthUsernamePasswordHost_mF97AEFAB2540AF2F38C0A21ABB2A326EF1100764(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setBackgroundColor_m9C5C94C3C248A3199528F3351CE86116A6297551 (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, float ___4_a, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float, float, float, float);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setBackgroundColor)(____0_name_marshaled, ___1_r, ___2_g, ___3_b, ___4_a);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBackgroundColor_m7F638D4057B21CE30389D2D104196ACDEE0DCA1A (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, float ___4_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		float L_1 = ___1_r;
		float L_2 = ___2_g;
		float L_3 = ___3_b;
		float L_4 = ___4_a;
		UniWebViewInterface_uv_setBackgroundColor_m9C5C94C3C248A3199528F3351CE86116A6297551(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWebViewAlpha_mEAFC08F35EADE5ACE999CCCC1BF598B0D13BCEFE (String_t* ___0_name, float ___1_alpha, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setWebViewAlpha)(____0_name_marshaled, ___1_alpha);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebViewAlpha_mD7E804965C2B5C9D503CA7B2BE6FC39C22C6422A (String_t* ___0_name, float ___1_alpha, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		float L_1 = ___1_alpha;
		UniWebViewInterface_uv_setWebViewAlpha_mEAFC08F35EADE5ACE999CCCC1BF598B0D13BCEFE(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_uv_getWebViewAlpha_m7F587F89EBABAE02375A98A9F0299A7945E6E8C8 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	float returnValue = reinterpret_cast<PInvokeFunc>(uv_getWebViewAlpha)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_GetWebViewAlpha_m408A04169B9E1ACD0BE43D3B96E675AC980A97F6 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		float L_1;
		L_1 = UniWebViewInterface_uv_getWebViewAlpha_m7F587F89EBABAE02375A98A9F0299A7945E6E8C8(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setShowSpinnerWhileLoading_mD778DA2C9326B3A48F3E0BBCAB67CE9EA65D26D7 (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setShowSpinnerWhileLoading)(____0_name_marshaled, static_cast<int32_t>(___1_show));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowSpinnerWhileLoading_m87A1A260D02881962518D7A23F6DE82FD8E93E74 (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_show;
		UniWebViewInterface_uv_setShowSpinnerWhileLoading_mD778DA2C9326B3A48F3E0BBCAB67CE9EA65D26D7(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setSpinnerText_mC86C903E399CB17ABD1F5EA6F87B04EBB181D418 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_text_marshaled = NULL;
	____1_text_marshaled = il2cpp_codegen_marshal_string(___1_text);

	reinterpret_cast<PInvokeFunc>(uv_setSpinnerText)(____0_name_marshaled, ____1_text_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_text_marshaled);
	____1_text_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSpinnerText_mF808B322A4F8EBC7F949C67D60775ACA8E78CED6 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_text;
		UniWebViewInterface_uv_setSpinnerText_mC86C903E399CB17ABD1F5EA6F87B04EBB181D418(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_canGoBack_mC03E8D06D410A48975A718DCC8CEE1E185DCECB0 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uv_canGoBack)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoBack_m60694B17993E9DC47826E5DC3B9DFEC12A4DD59A (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = UniWebViewInterface_uv_canGoBack_mC03E8D06D410A48975A718DCC8CEE1E185DCECB0(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_canGoForward_mFCD1F01956C54B88A7E9A6F55EDC1B21013405D9 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uv_canGoForward)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoForward_m1461133C0AEC7D32E994FD95642826341FD02627 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = UniWebViewInterface_uv_canGoForward_mFCD1F01956C54B88A7E9A6F55EDC1B21013405D9(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_goBack_m63FDB992B3CDDFB852AEDBCBB06648A70555D3EA (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_goBack)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoBack_m8BFB6B50A679554881753E824131ACC1558DE59E (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		UniWebViewInterface_uv_goBack_m63FDB992B3CDDFB852AEDBCBB06648A70555D3EA(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_goForward_mD165C82A7AA35AC819E151CF4015B132B0889494 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_goForward)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoForward_m7515B07542F0A59DE5B84F677CC09B1511CD9E9B (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		UniWebViewInterface_uv_goForward_mD165C82A7AA35AC819E151CF4015B132B0889494(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setOpenLinksInExternalBrowser_m6D80A4B8CFDE172E01D95BB8E537FE8701E6D118 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setOpenLinksInExternalBrowser)(____0_name_marshaled, static_cast<int32_t>(___1_flag));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetOpenLinksInExternalBrowser_m0F66F68E4AD1A6C6AD2D549A17685B2ACC652C23 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_flag;
		UniWebViewInterface_uv_setOpenLinksInExternalBrowser_m6D80A4B8CFDE172E01D95BB8E537FE8701E6D118(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setHorizontalScrollBarEnabled_m960C9A74588716902ACD064DE13C84243843F4D0 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setHorizontalScrollBarEnabled)(____0_name_marshaled, static_cast<int32_t>(___1_enabled));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHorizontalScrollBarEnabled_m3FB0E27A1E68BDBBCB8C575AAC2ECA0174A9168B (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_enabled;
		UniWebViewInterface_uv_setHorizontalScrollBarEnabled_m960C9A74588716902ACD064DE13C84243843F4D0(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setVerticalScrollBarEnabled_m6CA45CB1ECF00D6E9669F6765D5E6E55B1ED2063 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setVerticalScrollBarEnabled)(____0_name_marshaled, static_cast<int32_t>(___1_enabled));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetVerticalScrollBarEnabled_m5E4E8B06DA5CCCDC2B2C55A324A838040B3A4C22 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_enabled;
		UniWebViewInterface_uv_setVerticalScrollBarEnabled_m6CA45CB1ECF00D6E9669F6765D5E6E55B1ED2063(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setBouncesEnabled_mAD04B2E18A45ECF423F7C58402511EF232C03E81 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setBouncesEnabled)(____0_name_marshaled, static_cast<int32_t>(___1_enabled));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBouncesEnabled_m5BB33343416B23097E6DE23565BEE79D5109051C (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_enabled;
		UniWebViewInterface_uv_setBouncesEnabled_mAD04B2E18A45ECF423F7C58402511EF232C03E81(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setZoomEnabled_m4161616E146CE9F4C6EF498B860994ED5BFA0271 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setZoomEnabled)(____0_name_marshaled, static_cast<int32_t>(___1_enabled));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetZoomEnabled_mB3E75A4E2E0C8394F350483460C001A8CD1828C7 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_enabled;
		UniWebViewInterface_uv_setZoomEnabled_m4161616E146CE9F4C6EF498B860994ED5BFA0271(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setShowToolbar_mF7D212DDA6F9BB9BE712DC4ECC74C5A876E860D1 (String_t* ___0_name, bool ___1_show, bool ___2_animated, bool ___3_onTop, bool ___4_adjustInset, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setShowToolbar)(____0_name_marshaled, static_cast<int32_t>(___1_show), static_cast<int32_t>(___2_animated), static_cast<int32_t>(___3_onTop), static_cast<int32_t>(___4_adjustInset));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowToolbar_m4A0C5A2EA5FA121FAB5357D8DC93C5A177EC2CB4 (String_t* ___0_name, bool ___1_show, bool ___2_animated, bool ___3_onTop, bool ___4_adjustInset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_show;
		bool L_2 = ___2_animated;
		bool L_3 = ___3_onTop;
		bool L_4 = ___4_adjustInset;
		UniWebViewInterface_uv_setShowToolbar_mF7D212DDA6F9BB9BE712DC4ECC74C5A876E860D1(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setShowToolbarNavigationButtons_mA03DAE1BDBBD1FFD35B546475ABB5E72E5E27A65 (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setShowToolbarNavigationButtons)(____0_name_marshaled, static_cast<int32_t>(___1_show));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowToolbarNavigationButtons_m40845F2EDF5A16022FF777DD3CE595A78158959C (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_show;
		UniWebViewInterface_uv_setShowToolbarNavigationButtons_mA03DAE1BDBBD1FFD35B546475ABB5E72E5E27A65(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setToolbarDoneButtonText_mD1B0B17EADBAA5EDE9C22A341708A7DCA22660B6 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_text_marshaled = NULL;
	____1_text_marshaled = il2cpp_codegen_marshal_string(___1_text);

	reinterpret_cast<PInvokeFunc>(uv_setToolbarDoneButtonText)(____0_name_marshaled, ____1_text_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_text_marshaled);
	____1_text_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarDoneButtonText_m6313F307A7B7E6D760F851A42DA5402A6A92533D (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_text;
		UniWebViewInterface_uv_setToolbarDoneButtonText_mD1B0B17EADBAA5EDE9C22A341708A7DCA22660B6(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setGoBackButtonText_mBEBD727D8196A3C669095F86962B325D328CB295 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_text_marshaled = NULL;
	____1_text_marshaled = il2cpp_codegen_marshal_string(___1_text);

	reinterpret_cast<PInvokeFunc>(uv_setGoBackButtonText)(____0_name_marshaled, ____1_text_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_text_marshaled);
	____1_text_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarGoBackButtonText_m00D805DB79A76F3148D1AF83450710A63BD17EDF (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_text;
		UniWebViewInterface_uv_setGoBackButtonText_mBEBD727D8196A3C669095F86962B325D328CB295(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setGoForwardButtonText_m881AEC163F238CEC9D0BB94ABB810DFBCF76F55A (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_text_marshaled = NULL;
	____1_text_marshaled = il2cpp_codegen_marshal_string(___1_text);

	reinterpret_cast<PInvokeFunc>(uv_setGoForwardButtonText)(____0_name_marshaled, ____1_text_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_text_marshaled);
	____1_text_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarGoForwardButtonText_m7331CFC9BDFE1D2BBC5B0B54D0C0AFE2B03E75C8 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_text;
		UniWebViewInterface_uv_setGoForwardButtonText_m881AEC163F238CEC9D0BB94ABB810DFBCF76F55A(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWindowUserResizeEnabled_m872B42C2E448A09F12AEFFDF4F33987F408F2A71 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setWindowUserResizeEnabled)(____0_name_marshaled, static_cast<int32_t>(___1_enabled));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWindowUserResizeEnabled_mB764B03C0AE797FD5D3C7B7DC52F397E2D04B7BB (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_enabled;
		UniWebViewInterface_uv_setWindowUserResizeEnabled_m872B42C2E448A09F12AEFFDF4F33987F408F2A71(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setToolbarTintColor_mEA4F17A1ADDEA82AA8545A1289569C7BFBE42504 (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float, float, float);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setToolbarTintColor)(____0_name_marshaled, ___1_r, ___2_g, ___3_b);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarTintColor_mE32F3228FB6B0C6CDFBAE9299CE84E21A5F08589 (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		float L_1 = ___1_r;
		float L_2 = ___2_g;
		float L_3 = ___3_b;
		UniWebViewInterface_uv_setToolbarTintColor_mEA4F17A1ADDEA82AA8545A1289569C7BFBE42504(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setToolbarTextColor_m043BBCD34C811EDFA4F9B15BFD9FFCC34B7F56BC (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float, float, float);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setToolbarTextColor)(____0_name_marshaled, ___1_r, ___2_g, ___3_b);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarTextColor_m4AF3D8A7F1508CB61A05235661E6B023796DB78F (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		float L_1 = ___1_r;
		float L_2 = ___2_g;
		float L_3 = ___3_b;
		UniWebViewInterface_uv_setToolbarTextColor_m043BBCD34C811EDFA4F9B15BFD9FFCC34B7F56BC(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setUserInteractionEnabled_m678D27B93A69846832B2D8DFE6B6CC892119C3D9 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setUserInteractionEnabled)(____0_name_marshaled, static_cast<int32_t>(___1_enabled));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserInteractionEnabled_mCFBAE387A262266014BDCE48BD34653D06F0F179 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_enabled;
		UniWebViewInterface_uv_setUserInteractionEnabled_m678D27B93A69846832B2D8DFE6B6CC892119C3D9(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setTransparencyClickingThroughEnabled_mADADEF996A060492FED3A0833405BA584B31809F (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setTransparencyClickingThroughEnabled)(____0_name_marshaled, static_cast<int32_t>(___1_enabled));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTransparencyClickingThroughEnabled_mCA24436C0CEB09A85FD950D3D6F2CF6E24C49AAB (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_enabled;
		UniWebViewInterface_uv_setTransparencyClickingThroughEnabled_mADADEF996A060492FED3A0833405BA584B31809F(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWebContentsDebuggingEnabled_m17C3463C0753E8BC538E43E1A7FF71D18811BB01 (bool ___0_enabled, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(uv_setWebContentsDebuggingEnabled)(static_cast<int32_t>(___0_enabled));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebContentsDebuggingEnabled_mB89818D831425C081C35732663BDC82B8FE1299E (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		bool L_0 = ___0_enabled;
		UniWebViewInterface_uv_setWebContentsDebuggingEnabled_m17C3463C0753E8BC538E43E1A7FF71D18811BB01(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowBackForwardNavigationGestures_m3493759529522CA397ED780F1A7E9C12A41CB13C (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setAllowBackForwardNavigationGestures)(____0_name_marshaled, static_cast<int32_t>(___1_flag));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowBackForwardNavigationGestures_mE7EFE68323A42AC1E222DEE7D0C76B2388524731 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_flag;
		UniWebViewInterface_uv_setAllowBackForwardNavigationGestures_m3493759529522CA397ED780F1A7E9C12A41CB13C(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowHTTPAuthPopUpWindow_mC36E9494729F75BBEC1E4942FC2E500D5BEB9255 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setAllowHTTPAuthPopUpWindow)(____0_name_marshaled, static_cast<int32_t>(___1_flag));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mD6E3D7351F9977DFC2A131ABD34656BE5E333496 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_flag;
		UniWebViewInterface_uv_setAllowHTTPAuthPopUpWindow_mC36E9494729F75BBEC1E4942FC2E500D5BEB9255(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_print_m290A59832D2A856498BA9D6E340EF696990BED0F (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_print)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Print_m0689A76490307B282F8E62EA4729422161AD40CF (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		UniWebViewInterface_uv_print_m290A59832D2A856498BA9D6E340EF696990BED0F(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_captureSnapshot_mAA7DF3BDCA83DAF245A1272CCC4430126C655508 (String_t* ___0_name, String_t* ___1_fileName, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_fileName_marshaled = NULL;
	____1_fileName_marshaled = il2cpp_codegen_marshal_string(___1_fileName);

	reinterpret_cast<PInvokeFunc>(uv_captureSnapshot)(____0_name_marshaled, ____1_fileName_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_fileName_marshaled);
	____1_fileName_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CaptureSnapshot_m8DE276F25F9C6720F2A1B030B647BD5D23FD0CDD (String_t* ___0_name, String_t* ___1_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_fileName;
		UniWebViewInterface_uv_captureSnapshot_mAA7DF3BDCA83DAF245A1272CCC4430126C655508(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_scrollTo_mD14D099351F86E38881C05B2DA0AA53A63AC55BF (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, bool ___3_animated, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_scrollTo)(____0_name_marshaled, ___1_x, ___2_y, static_cast<int32_t>(___3_animated));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ScrollTo_mBDE75495718EA4A2066F1514BE66EDAA24AE998C (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, bool ___3_animated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_x;
		int32_t L_2 = ___2_y;
		bool L_3 = ___3_animated;
		UniWebViewInterface_uv_scrollTo_mD14D099351F86E38881C05B2DA0AA53A63AC55BF(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setCalloutEnabled_m85EB833E95DE85EBEB7806DE4DBC3A762593ACC3 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setCalloutEnabled)(____0_name_marshaled, static_cast<int32_t>(___1_flag));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCalloutEnabled_m7E1A340CFBE84E75804A4A351D7F27DB6A356AD3 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_flag;
		UniWebViewInterface_uv_setCalloutEnabled_m85EB833E95DE85EBEB7806DE4DBC3A762593ACC3(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setSupportMultipleWindows_mA27880502B1FAEC3607AECDC4B03052ACC1243B0 (String_t* ___0_name, bool ___1_enabled, bool ___2_allowJavaScriptOpening, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setSupportMultipleWindows)(____0_name_marshaled, static_cast<int32_t>(___1_enabled), static_cast<int32_t>(___2_allowJavaScriptOpening));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSupportMultipleWindows_m2B3875345342377C53DA6FA62E6CB7C919449752 (String_t* ___0_name, bool ___1_enabled, bool ___2_allowJavaScriptOpening, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_enabled;
		bool L_2 = ___2_allowJavaScriptOpening;
		UniWebViewInterface_uv_setSupportMultipleWindows_mA27880502B1FAEC3607AECDC4B03052ACC1243B0(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setDragInteractionEnabled_m72BA2C19F21521F7E800F7F42550AFB593D0F058 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setDragInteractionEnabled)(____0_name_marshaled, static_cast<int32_t>(___1_flag));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDragInteractionEnabled_m268BEA0E80D52E00C61E1CF88615D355B8509E67 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_flag;
		UniWebViewInterface_uv_setDragInteractionEnabled_m72BA2C19F21521F7E800F7F42550AFB593D0F058(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_uv_nativeScreenWidth_m7C46ACFE36C0B434AA17D001D25DFFDBCA48A3FA (const RuntimeMethod* method) 
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();

	float returnValue = reinterpret_cast<PInvokeFunc>(uv_nativeScreenWidth)();

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenWidth_mB8A2DB90CC317ADBF1A9A096DC834CEB8DD3DFC1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = UniWebViewInterface_uv_nativeScreenWidth_m7C46ACFE36C0B434AA17D001D25DFFDBCA48A3FA(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_uv_nativeScreenHeight_m05E070863B46DEE363F3D0D4A41696CB985596BA (const RuntimeMethod* method) 
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();

	float returnValue = reinterpret_cast<PInvokeFunc>(uv_nativeScreenHeight)();

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenHeight_m72EAC5AB2C942E63F020DB4E3CED3D3519EC1570 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = UniWebViewInterface_uv_nativeScreenHeight_m05E070863B46DEE363F3D0D4A41696CB985596BA(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addDownloadURL_m0173A55476ECBE9195FA06F1FB3C212F32F86297 (String_t* ___0_name, String_t* ___1_urlString, int32_t ___2_type, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_urlString_marshaled = NULL;
	____1_urlString_marshaled = il2cpp_codegen_marshal_string(___1_urlString);

	reinterpret_cast<PInvokeFunc>(uv_addDownloadURL)(____0_name_marshaled, ____1_urlString_marshaled, ___2_type);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_urlString_marshaled);
	____1_urlString_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddDownloadURL_m3943B8D59DA7058E0C5EE03AB603A38CD52CFE48 (String_t* ___0_name, String_t* ___1_urlString, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_urlString;
		int32_t L_2 = ___2_type;
		UniWebViewInterface_uv_addDownloadURL_m0173A55476ECBE9195FA06F1FB3C212F32F86297(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeDownloadURL_m1AB2A550893B338EBC8DF16163355683F4235F64 (String_t* ___0_name, String_t* ___1_urlString, int32_t ___2_type, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_urlString_marshaled = NULL;
	____1_urlString_marshaled = il2cpp_codegen_marshal_string(___1_urlString);

	reinterpret_cast<PInvokeFunc>(uv_removeDownloadURL)(____0_name_marshaled, ____1_urlString_marshaled, ___2_type);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_urlString_marshaled);
	____1_urlString_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveDownloadURL_mDB679FDF53FC58F298142946CAD6AFF7FF509C2A (String_t* ___0_name, String_t* ___1_urlString, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_urlString;
		int32_t L_2 = ___2_type;
		UniWebViewInterface_uv_removeDownloadURL_m1AB2A550893B338EBC8DF16163355683F4235F64(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addDownloadMIMEType_m6B2208093D607936044CCB9470DBEBAF73CE49E7 (String_t* ___0_name, String_t* ___1_MIMEType, int32_t ___2_type, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_MIMEType_marshaled = NULL;
	____1_MIMEType_marshaled = il2cpp_codegen_marshal_string(___1_MIMEType);

	reinterpret_cast<PInvokeFunc>(uv_addDownloadMIMEType)(____0_name_marshaled, ____1_MIMEType_marshaled, ___2_type);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_MIMEType_marshaled);
	____1_MIMEType_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddDownloadMIMEType_m1E179388C22A0FD1CEE6D9FDB6B4CA047D10CD69 (String_t* ___0_name, String_t* ___1_MIMEType, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_MIMEType;
		int32_t L_2 = ___2_type;
		UniWebViewInterface_uv_addDownloadMIMEType_m6B2208093D607936044CCB9470DBEBAF73CE49E7(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeDownloadMIMETypes_mFB17541813BE61923D99C9DAE504EAC544D7C089 (String_t* ___0_name, String_t* ___1_MIMEType, int32_t ___2_type, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_MIMEType_marshaled = NULL;
	____1_MIMEType_marshaled = il2cpp_codegen_marshal_string(___1_MIMEType);

	reinterpret_cast<PInvokeFunc>(uv_removeDownloadMIMETypes)(____0_name_marshaled, ____1_MIMEType_marshaled, ___2_type);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_MIMEType_marshaled);
	____1_MIMEType_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveDownloadMIMETypes_mEFAD5367200960693EA9EED2EDC137C71F347A48 (String_t* ___0_name, String_t* ___1_MIMEType, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_MIMEType;
		int32_t L_2 = ___2_type;
		UniWebViewInterface_uv_removeDownloadMIMETypes_mFB17541813BE61923D99C9DAE504EAC544D7C089(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowUserChooseActionAfterDownloading_mDF47AEA89FC7BE6FE0C8AD0720AA611FBB21CDF5 (String_t* ___0_name, bool ___1_allowed, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_setAllowUserChooseActionAfterDownloading)(____0_name_marshaled, static_cast<int32_t>(___1_allowed));

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowUserChooseActionAfterDownloading_mDB17E8698254C7BD8EDC036C24F2001CD238C041 (String_t* ___0_name, bool ___1_allowed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_allowed;
		UniWebViewInterface_uv_setAllowUserChooseActionAfterDownloading_mDF47AEA89FC7BE6FE0C8AD0720AA611FBB21CDF5(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_safeBrowsingInit_mC178B1DFD5427DCDB5475D7B83C78B82540B6DED (String_t* ___0_name, String_t* ___1_url, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	char* ____1_url_marshaled = NULL;
	____1_url_marshaled = il2cpp_codegen_marshal_string(___1_url);

	reinterpret_cast<PInvokeFunc>(uv_safeBrowsingInit)(____0_name_marshaled, ____1_url_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_url_marshaled);
	____1_url_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingInit_mC6A1F7DE80C89CF98041AC77AD9F9692EB9789B6 (String_t* ___0_name, String_t* ___1_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		String_t* L_2 = ___0_name;
		String_t* L_3 = ___1_url;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_uv_safeBrowsingInit_mC178B1DFD5427DCDB5475D7B83C78B82540B6DED(L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_safeBrowsingShow_m53128959C352AA50F8ABDB8E652888C2B838AB82 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_safeBrowsingShow)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingShow_mBCFB1C5840DA42F58DEE56AC65392B04CE905E56 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		UniWebViewInterface_uv_safeBrowsingShow_m53128959C352AA50F8ABDB8E652888C2B838AB82(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_safeBrowsingSetToolbarColor_m2B60B1F88EDD56E009F9F734BD64C6F3FEE7EAD5 (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float, float, float);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_safeBrowsingSetToolbarColor)(____0_name_marshaled, ___1_r, ___2_g, ___3_b);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingSetToolbarColor_m1DCFD167C3FBF30C3ACD3DB46051CDCB157A43CD (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		float L_1 = ___1_r;
		float L_2 = ___2_g;
		float L_3 = ___3_b;
		UniWebViewInterface_uv_safeBrowsingSetToolbarColor_m2B60B1F88EDD56E009F9F734BD64C6F3FEE7EAD5(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_safeBrowsingSetToolbarItemColor_mFCFF1F8EE56D8B4C921EEA77012DE8B0BB5C0E0E (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float, float, float);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_safeBrowsingSetToolbarItemColor)(____0_name_marshaled, ___1_r, ___2_g, ___3_b);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingSetToolbarItemColor_mC91313F910935D21A144F9561163F2B8411991A5 (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		float L_1 = ___1_r;
		float L_2 = ___2_g;
		float L_3 = ___3_b;
		UniWebViewInterface_uv_safeBrowsingSetToolbarItemColor_mFCFF1F8EE56D8B4C921EEA77012DE8B0BB5C0E0E(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_safeBrowsingDismiss_m9CA2014DD3AF39D21A1EEE354A25181B1602E226 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	reinterpret_cast<PInvokeFunc>(uv_safeBrowsingDismiss)(____0_name_marshaled);

	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingDismiss_m50C39E9C76874EBDA8CBEF9F90D7115C052EE3DA (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		String_t* L_0 = ___0_name;
		UniWebViewInterface_uv_safeBrowsingDismiss_m9CA2014DD3AF39D21A1EEE354A25181B1602E226(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___correctPlatform;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var)));
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_0 = L_1;
		Il2CppFakeBox<int32_t> L_2(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var)), (&V_0));
		String_t* L_3;
		L_3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_2), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B8C38ECA928BDF06897EE449E38727B78F7D8B2)), L_3, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C_RuntimeMethod_var)));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface__ctor_m157CD2615373AA53DFA457D91782AD33A0FE794D (UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4* __this, const RuntimeMethod* method) 
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
void UnitySendMessageDelegate_Invoke_m91C9A02936A18801028400020B8862E7BEA59D88_Multicast(UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* __this, intptr_t ___0_objectName, intptr_t ___1_methodName, intptr_t ___2_parameter, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* currentDelegate = reinterpret_cast<UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_objectName, ___1_methodName, ___2_parameter, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void UnitySendMessageDelegate_Invoke_m91C9A02936A18801028400020B8862E7BEA59D88_OpenInst(UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* __this, intptr_t ___0_objectName, intptr_t ___1_methodName, intptr_t ___2_parameter, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_objectName, ___1_methodName, ___2_parameter, method);
}
void UnitySendMessageDelegate_Invoke_m91C9A02936A18801028400020B8862E7BEA59D88_OpenStatic(UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* __this, intptr_t ___0_objectName, intptr_t ___1_methodName, intptr_t ___2_parameter, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_objectName, ___1_methodName, ___2_parameter, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF (UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* __this, intptr_t ___0_objectName, intptr_t ___1_methodName, intptr_t ___2_parameter, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_objectName, ___1_methodName, ___2_parameter);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySendMessageDelegate__ctor_m610A4B75EDC8500D57ECA6645C8B943E944252C6 (UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&UnitySendMessageDelegate_Invoke_m91C9A02936A18801028400020B8862E7BEA59D88_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&UnitySendMessageDelegate_Invoke_m91C9A02936A18801028400020B8862E7BEA59D88_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySendMessageDelegate_Invoke_m91C9A02936A18801028400020B8862E7BEA59D88 (UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* __this, intptr_t ___0_objectName, intptr_t ___1_methodName, intptr_t ___2_parameter, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_objectName, ___1_methodName, ___2_parameter, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitySendMessageDelegate_BeginInvoke_m1CE4BD0E4361D422103B7A3F79AA9E9E833A025A (UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* __this, intptr_t ___0_objectName, intptr_t ___1_methodName, intptr_t ___2_parameter, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_objectName);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_methodName);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_parameter);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySendMessageDelegate_EndInvoke_m567DCF0EEA2BA3419BF3360B7C865BFC4FC54748 (UnitySendMessageDelegate_tB776C418EF79447859A96802DBC0A1834E1C3EEF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageStarted_m5B15DE7EA74B99FD86BB6C29FE57EF99124E9214 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_0 = NULL;
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_1 = NULL;
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_2 = NULL;
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_0 = __this->___OnPageStarted;
		V_0 = L_0;
	}

IL_0007:
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_1 = V_0;
		V_1 = L_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_2 = V_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)CastclassSealed((RuntimeObject*)L_4, PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213_il2cpp_TypeInfo_var));
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213** L_5 = (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213**)(&__this->___OnPageStarted);
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_6 = V_2;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_7 = V_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_9 = V_0;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)L_9) == ((RuntimeObject*)(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageStarted_mC3163EB767F564D58EF82724A151F360AE4BF538 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_0 = NULL;
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_1 = NULL;
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_2 = NULL;
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_0 = __this->___OnPageStarted;
		V_0 = L_0;
	}

IL_0007:
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_1 = V_0;
		V_1 = L_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_2 = V_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)CastclassSealed((RuntimeObject*)L_4, PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213_il2cpp_TypeInfo_var));
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213** L_5 = (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213**)(&__this->___OnPageStarted);
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_6 = V_2;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_7 = V_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_9 = V_0;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)L_9) == ((RuntimeObject*)(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageFinished_m3C02848F31206CB701D15EEABFAB062D742A8B18 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_0 = NULL;
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_1 = NULL;
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_2 = NULL;
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_0 = __this->___OnPageFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_1 = V_0;
		V_1 = L_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_2 = V_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)CastclassSealed((RuntimeObject*)L_4, PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC_il2cpp_TypeInfo_var));
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC** L_5 = (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC**)(&__this->___OnPageFinished);
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_6 = V_2;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_7 = V_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_9 = V_0;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)L_9) == ((RuntimeObject*)(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageFinished_m21FE9388FF9E49765E79CB509E16A040F2586B17 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_0 = NULL;
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_1 = NULL;
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_2 = NULL;
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_0 = __this->___OnPageFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_1 = V_0;
		V_1 = L_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_2 = V_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)CastclassSealed((RuntimeObject*)L_4, PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC_il2cpp_TypeInfo_var));
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC** L_5 = (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC**)(&__this->___OnPageFinished);
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_6 = V_2;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_7 = V_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_9 = V_0;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)L_9) == ((RuntimeObject*)(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageErrorReceived_mD804E31791F0EF5F757BD35B7941DAF7FAF3E81E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_0 = NULL;
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_1 = NULL;
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_2 = NULL;
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_0 = __this->___OnPageErrorReceived;
		V_0 = L_0;
	}

IL_0007:
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_1 = V_0;
		V_1 = L_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_2 = V_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)CastclassSealed((RuntimeObject*)L_4, PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347_il2cpp_TypeInfo_var));
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347** L_5 = (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347**)(&__this->___OnPageErrorReceived);
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_6 = V_2;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_7 = V_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_9 = V_0;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)L_9) == ((RuntimeObject*)(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageErrorReceived_m7D93CF1F96906007CBCB3E6979BE48231CB50128 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_0 = NULL;
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_1 = NULL;
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_2 = NULL;
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_0 = __this->___OnPageErrorReceived;
		V_0 = L_0;
	}

IL_0007:
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_1 = V_0;
		V_1 = L_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_2 = V_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)CastclassSealed((RuntimeObject*)L_4, PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347_il2cpp_TypeInfo_var));
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347** L_5 = (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347**)(&__this->___OnPageErrorReceived);
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_6 = V_2;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_7 = V_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_9 = V_0;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)L_9) == ((RuntimeObject*)(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageProgressChanged_mB8D6F1F93299A2E29260D4ECB0C2FC0D0E1A6BBB (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_0 = NULL;
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_1 = NULL;
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_2 = NULL;
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_0 = __this->___OnPageProgressChanged;
		V_0 = L_0;
	}

IL_0007:
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_1 = V_0;
		V_1 = L_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_2 = V_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)CastclassSealed((RuntimeObject*)L_4, PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1_il2cpp_TypeInfo_var));
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1** L_5 = (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1**)(&__this->___OnPageProgressChanged);
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_6 = V_2;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_7 = V_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_9 = V_0;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)L_9) == ((RuntimeObject*)(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageProgressChanged_mDE658F07E1E3C1499BFC08CF1FC2935CD48EA3ED (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_0 = NULL;
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_1 = NULL;
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_2 = NULL;
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_0 = __this->___OnPageProgressChanged;
		V_0 = L_0;
	}

IL_0007:
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_1 = V_0;
		V_1 = L_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_2 = V_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)CastclassSealed((RuntimeObject*)L_4, PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1_il2cpp_TypeInfo_var));
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1** L_5 = (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1**)(&__this->___OnPageProgressChanged);
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_6 = V_2;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_7 = V_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_9 = V_0;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)L_9) == ((RuntimeObject*)(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnMessageReceived_m38C1795DE1D774FD3B345FAFFEC18823CF7ED9D8 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_0 = NULL;
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_1 = NULL;
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_2 = NULL;
	{
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_0 = __this->___OnMessageReceived;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_1 = V_0;
		V_1 = L_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_2 = V_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)CastclassSealed((RuntimeObject*)L_4, MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951_il2cpp_TypeInfo_var));
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951** L_5 = (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951**)(&__this->___OnMessageReceived);
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_6 = V_2;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_7 = V_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_9 = V_0;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)L_9) == ((RuntimeObject*)(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnMessageReceived_mE4397618545526A3DE46143970641238C5B53B3A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_0 = NULL;
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_1 = NULL;
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_2 = NULL;
	{
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_0 = __this->___OnMessageReceived;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_1 = V_0;
		V_1 = L_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_2 = V_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)CastclassSealed((RuntimeObject*)L_4, MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951_il2cpp_TypeInfo_var));
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951** L_5 = (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951**)(&__this->___OnMessageReceived);
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_6 = V_2;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_7 = V_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_9 = V_0;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)L_9) == ((RuntimeObject*)(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnShouldClose_m969F574D5827CFF603F51F568A35F274D4CFC642 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_0 = NULL;
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_1 = NULL;
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_2 = NULL;
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_0 = __this->___OnShouldClose;
		V_0 = L_0;
	}

IL_0007:
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_1 = V_0;
		V_1 = L_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_2 = V_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)CastclassSealed((RuntimeObject*)L_4, ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667_il2cpp_TypeInfo_var));
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667** L_5 = (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667**)(&__this->___OnShouldClose);
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_6 = V_2;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_7 = V_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_8;
		L_8 = InterlockedCompareExchangeImpl<ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*>(L_5, L_6, L_7);
		V_0 = L_8;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_9 = V_0;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_10 = V_1;
		if ((!(((RuntimeObject*)(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)L_9) == ((RuntimeObject*)(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnShouldClose_m0BC52070447097BCCFB9F6044B2A80C4AAD30EBA (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_0 = NULL;
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_1 = NULL;
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_2 = NULL;
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_0 = __this->___OnShouldClose;
		V_0 = L_0;
	}

IL_0007:
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_1 = V_0;
		V_1 = L_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_2 = V_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)CastclassSealed((RuntimeObject*)L_4, ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667_il2cpp_TypeInfo_var));
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667** L_5 = (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667**)(&__this->___OnShouldClose);
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_6 = V_2;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_7 = V_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_8;
		L_8 = InterlockedCompareExchangeImpl<ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*>(L_5, L_6, L_7);
		V_0 = L_8;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_9 = V_0;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_10 = V_1;
		if ((!(((RuntimeObject*)(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)L_9) == ((RuntimeObject*)(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnOrientationChanged_m1E07087A2815C1ABF779C2279BEA93C10D968824 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_0 = NULL;
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_1 = NULL;
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_2 = NULL;
	{
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_0 = __this->___OnOrientationChanged;
		V_0 = L_0;
	}

IL_0007:
	{
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_1 = V_0;
		V_1 = L_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_2 = V_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)CastclassSealed((RuntimeObject*)L_4, OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E_il2cpp_TypeInfo_var));
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E** L_5 = (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E**)(&__this->___OnOrientationChanged);
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_6 = V_2;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_7 = V_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_8;
		L_8 = InterlockedCompareExchangeImpl<OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*>(L_5, L_6, L_7);
		V_0 = L_8;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_9 = V_0;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_10 = V_1;
		if ((!(((RuntimeObject*)(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)L_9) == ((RuntimeObject*)(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnOrientationChanged_m0FC95AB9A2122E79FBB638768FCA0951E470C6C7 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_0 = NULL;
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_1 = NULL;
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_2 = NULL;
	{
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_0 = __this->___OnOrientationChanged;
		V_0 = L_0;
	}

IL_0007:
	{
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_1 = V_0;
		V_1 = L_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_2 = V_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)CastclassSealed((RuntimeObject*)L_4, OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E_il2cpp_TypeInfo_var));
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E** L_5 = (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E**)(&__this->___OnOrientationChanged);
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_6 = V_2;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_7 = V_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_8;
		L_8 = InterlockedCompareExchangeImpl<OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*>(L_5, L_6, L_7);
		V_0 = L_8;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_9 = V_0;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_10 = V_1;
		if ((!(((RuntimeObject*)(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)L_9) == ((RuntimeObject*)(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnWebContentProcessTerminated_mECC73ACBD6D455B5E16A1E31C4B751197244AD07 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_0 = NULL;
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_1 = NULL;
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_2 = NULL;
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_0 = __this->___OnWebContentProcessTerminated;
		V_0 = L_0;
	}

IL_0007:
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_1 = V_0;
		V_1 = L_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_2 = V_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)CastclassSealed((RuntimeObject*)L_4, OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0_il2cpp_TypeInfo_var));
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0** L_5 = (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0**)(&__this->___OnWebContentProcessTerminated);
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_6 = V_2;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_7 = V_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_9 = V_0;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)L_9) == ((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnWebContentProcessTerminated_mA124C2D5942FD974BC11036F1BA6CC83732FBD08 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_0 = NULL;
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_1 = NULL;
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_2 = NULL;
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_0 = __this->___OnWebContentProcessTerminated;
		V_0 = L_0;
	}

IL_0007:
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_1 = V_0;
		V_1 = L_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_2 = V_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)CastclassSealed((RuntimeObject*)L_4, OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0_il2cpp_TypeInfo_var));
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0** L_5 = (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0**)(&__this->___OnWebContentProcessTerminated);
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_6 = V_2;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_7 = V_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_9 = V_0;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)L_9) == ((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnFileDownloadStarted_m4A938F6CA17E41AD1D68B903E7B3A993883FF20F (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_0 = NULL;
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_1 = NULL;
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_2 = NULL;
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_0 = __this->___OnFileDownloadStarted;
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_1 = V_0;
		V_1 = L_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_2 = V_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)CastclassSealed((RuntimeObject*)L_4, FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615_il2cpp_TypeInfo_var));
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615** L_5 = (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615**)(&__this->___OnFileDownloadStarted);
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_6 = V_2;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_7 = V_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_9 = V_0;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)L_9) == ((RuntimeObject*)(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnFileDownloadStarted_m01B82D6CAA158E1CEBAA64BC7EFEF958B3B8318F (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_0 = NULL;
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_1 = NULL;
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_2 = NULL;
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_0 = __this->___OnFileDownloadStarted;
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_1 = V_0;
		V_1 = L_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_2 = V_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)CastclassSealed((RuntimeObject*)L_4, FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615_il2cpp_TypeInfo_var));
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615** L_5 = (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615**)(&__this->___OnFileDownloadStarted);
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_6 = V_2;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_7 = V_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_9 = V_0;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)L_9) == ((RuntimeObject*)(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnFileDownloadFinished_mD7295586ACC1FD703EF95CAB2AEC480C9FB3B8E3 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_0 = NULL;
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_1 = NULL;
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_2 = NULL;
	{
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_0 = __this->___OnFileDownloadFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_1 = V_0;
		V_1 = L_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_2 = V_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)CastclassSealed((RuntimeObject*)L_4, FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE_il2cpp_TypeInfo_var));
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE** L_5 = (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE**)(&__this->___OnFileDownloadFinished);
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_6 = V_2;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_7 = V_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_9 = V_0;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)L_9) == ((RuntimeObject*)(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnFileDownloadFinished_m60ED2BAFE01D296FDB583F75F7D2EB4CD7BCA2EE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_0 = NULL;
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_1 = NULL;
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_2 = NULL;
	{
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_0 = __this->___OnFileDownloadFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_1 = V_0;
		V_1 = L_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_2 = V_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)CastclassSealed((RuntimeObject*)L_4, FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE_il2cpp_TypeInfo_var));
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE** L_5 = (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE**)(&__this->___OnFileDownloadFinished);
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_6 = V_2;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_7 = V_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_9 = V_0;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)L_9) == ((RuntimeObject*)(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnCaptureSnapshotFinished_mF5FBDA9C2607F10C54374F8827AF36B212BBF280 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_0 = NULL;
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_1 = NULL;
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_2 = NULL;
	{
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_0 = __this->___OnCaptureSnapshotFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_1 = V_0;
		V_1 = L_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_2 = V_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)CastclassSealed((RuntimeObject*)L_4, CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68_il2cpp_TypeInfo_var));
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68** L_5 = (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68**)(&__this->___OnCaptureSnapshotFinished);
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_6 = V_2;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_7 = V_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_8;
		L_8 = InterlockedCompareExchangeImpl<CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*>(L_5, L_6, L_7);
		V_0 = L_8;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_9 = V_0;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_10 = V_1;
		if ((!(((RuntimeObject*)(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)L_9) == ((RuntimeObject*)(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnCaptureSnapshotFinished_m5C115DF1D8510C9E6BDC79904EA82562569B1576 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_0 = NULL;
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_1 = NULL;
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_2 = NULL;
	{
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_0 = __this->___OnCaptureSnapshotFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_1 = V_0;
		V_1 = L_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_2 = V_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)CastclassSealed((RuntimeObject*)L_4, CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68_il2cpp_TypeInfo_var));
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68** L_5 = (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68**)(&__this->___OnCaptureSnapshotFinished);
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_6 = V_2;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_7 = V_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_8;
		L_8 = InterlockedCompareExchangeImpl<CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*>(L_5, L_6, L_7);
		V_0 = L_8;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_9 = V_0;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_10 = V_1;
		if ((!(((RuntimeObject*)(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)L_9) == ((RuntimeObject*)(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnMultipleWindowOpened_mF231E5EC2AF3C62784CA99D2B8EB3B1EBCFFDF9A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_0 = NULL;
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_1 = NULL;
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_2 = NULL;
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_0 = __this->___OnMultipleWindowOpened;
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_1 = V_0;
		V_1 = L_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_2 = V_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)CastclassSealed((RuntimeObject*)L_4, MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6_il2cpp_TypeInfo_var));
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6** L_5 = (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6**)(&__this->___OnMultipleWindowOpened);
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_6 = V_2;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_7 = V_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*>(L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_9 = V_0;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)L_9) == ((RuntimeObject*)(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnMultipleWindowOpened_mE923C32D4E14C6EC4D8182DD67AA329E2823A427 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_0 = NULL;
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_1 = NULL;
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_2 = NULL;
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_0 = __this->___OnMultipleWindowOpened;
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_1 = V_0;
		V_1 = L_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_2 = V_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)CastclassSealed((RuntimeObject*)L_4, MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6_il2cpp_TypeInfo_var));
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6** L_5 = (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6**)(&__this->___OnMultipleWindowOpened);
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_6 = V_2;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_7 = V_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*>(L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_9 = V_0;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)L_9) == ((RuntimeObject*)(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnMultipleWindowClosed_mFF2BDC048DCEA46BFFCBCA839AECA8A5281101D9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_0 = NULL;
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_1 = NULL;
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_2 = NULL;
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_0 = __this->___OnMultipleWindowClosed;
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_1 = V_0;
		V_1 = L_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_2 = V_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)CastclassSealed((RuntimeObject*)L_4, MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8_il2cpp_TypeInfo_var));
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8** L_5 = (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8**)(&__this->___OnMultipleWindowClosed);
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_6 = V_2;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_7 = V_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*>(L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_9 = V_0;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)L_9) == ((RuntimeObject*)(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnMultipleWindowClosed_m0F215C47FF6028CA4D6814C010F9506CDB777FA3 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_0 = NULL;
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_1 = NULL;
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_2 = NULL;
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_0 = __this->___OnMultipleWindowClosed;
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_1 = V_0;
		V_1 = L_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_2 = V_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)CastclassSealed((RuntimeObject*)L_4, MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8_il2cpp_TypeInfo_var));
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8** L_5 = (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8**)(&__this->___OnMultipleWindowClosed);
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_6 = V_2;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_7 = V_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*>(L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_9 = V_0;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)L_9) == ((RuntimeObject*)(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D UniWebView_get_Frame_m330302534D60059224928E436A6AE99C782E74B3 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___frame;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_Frame_mAEA13C2B07D6C0FD7CFCCC6C7A1EED95FF4609C6 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_value, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_value;
		__this->___frame = L_0;
		UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* UniWebView_get_ReferenceRectTransform_m6FEFFFC2377E8B11B098BC3B9D4ABAF497B77B74 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___referenceRectTransform;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_ReferenceRectTransform_m45F10A27F1BEC3CD38156B83AECD9609C539216C (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_value, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_value;
		__this->___referenceRectTransform = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___referenceRectTransform), (void*)L_0);
		UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebView_get_Url_m163A689D92DD1A007A7D161651A762D0F071B812 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = UniWebViewInterface_GetUrl_mF08492B883076DFF14EFB60CCCA5EE80016617D1(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = UniWebView_NextFrameRect_m222BFF790A1DE336FB40800E08F8DA3846EF4CAE(__this, NULL);
		V_0 = L_0;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_1 = __this->___listener;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_1, NULL);
		float L_3;
		L_3 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline((&V_0), NULL);
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline((&V_0), NULL);
		float L_5;
		L_5 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&V_0), NULL);
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetFrame_m26FC64F835098BC244FF95F17419ED7B350C6E84(L_2, il2cpp_codegen_cast_double_to_int<int32_t>(L_3), il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_5), il2cpp_codegen_cast_double_to_int<int32_t>(L_6), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D UniWebView_NextFrameRect_m222BFF790A1DE336FB40800E08F8DA3846EF4CAE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5A1BC658DA7223D5B3A37EDE7E9A3F1C60C984);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAA5A3EA71ED89EC8F8D5755DC9EFFB906291550);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0261650E60CCD4DB8E943AFD94028507D700FA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED6AE4548C7A75D64077C9E1530452184FF92182);
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
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_11 = NULL;
	int32_t V_12 = 0;
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___referenceRectTransform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_2;
		L_2 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_2);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_2, _stringLiteral7D5A1BC658DA7223D5B3A37EDE7E9A3F1C60C984, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = __this->___frame;
		return L_3;
	}

IL_0024:
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_4, _stringLiteralD0261650E60CCD4DB8E943AFD94028507D700FA6, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___referenceRectTransform;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = V_0;
		NullCheck(L_6);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_6, L_7, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___referenceRectTransform;
		NullCheck(L_20);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_21;
		L_21 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(L_20, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		V_5 = L_21;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_22 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0085;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24 = __this->___frame;
		return L_24;
	}

IL_0085:
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_25, NULL);
		V_12 = L_26;
		int32_t L_27 = V_12;
		if (!L_27)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_28 = V_12;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, 1))) <= ((uint32_t)1))))
		{
			goto IL_00f2;
		}
	}
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_29 = V_5;
		NullCheck(L_29);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30;
		L_30 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_29, NULL);
		V_11 = L_30;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_00cc;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_33;
		L_33 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_33);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_33, _stringLiteralED6AE4548C7A75D64077C9E1530452184FF92182, NULL);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_34;
		L_34 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_34);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_34, _stringLiteralBAA5A3EA71ED89EC8F8D5755DC9EFFB906291550, NULL);
		goto IL_00f2;
	}

IL_00cc:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_1;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_35, L_36, NULL);
		V_1 = L_37;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_2;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_38, L_39, NULL);
		V_2 = L_40;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_41 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_3;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_41, L_42, NULL);
		V_3 = L_43;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_4;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_44, L_45, NULL);
		V_4 = L_46;
	}

IL_00f2:
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		float L_47;
		L_47 = UniWebViewInterface_NativeScreenWidth_mB8A2DB90CC317ADBF1A9A096DC834CEB8DD3DFC1(NULL);
		int32_t L_48;
		L_48 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_6 = ((float)(((float)L_47)/((float)L_48)));
		float L_49;
		L_49 = UniWebViewInterface_NativeScreenHeight_m72EAC5AB2C942E63F020DB4E3CED3D3519EC1570(NULL);
		int32_t L_50;
		L_50 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_7 = ((float)(((float)L_49)/((float)L_50)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_2;
		float L_52 = L_51.___x;
		float L_53 = V_6;
		int32_t L_54;
		L_54 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		float L_56 = L_55.___y;
		float L_57 = V_7;
		V_8 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_54), L_56)), L_57));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_4;
		float L_59 = L_58.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_2;
		float L_61 = L_60.___x;
		float L_62 = V_6;
		V_9 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_59, L_61)), L_62));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_2;
		float L_64 = L_63.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_4;
		float L_66 = L_65.___y;
		float L_67 = V_7;
		V_10 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_64, L_66)), L_67));
		float L_68 = V_8;
		float L_69 = V_9;
		float L_70 = V_10;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_71;
		memset((&L_71), 0, sizeof(L_71));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline((&L_71), ((float)il2cpp_codegen_multiply(L_52, L_53)), L_68, L_69, L_70, NULL);
		return L_71;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Awake_mB1E249D23D5286335FA6DE08172420FD8B82677E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = __this->___id;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		V_0 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_3;
		L_3 = GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D(L_2, GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D_RuntimeMethod_var);
		__this->___listener = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listener), (void*)L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_5, L_6, NULL);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_7 = __this->___listener;
		NullCheck(L_7);
		L_7->___webView = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___webView), (void*)__this);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_8 = __this->___listener;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_AddListener_mDA0D252CE6ADD3BD00D4279503333839A32C4646(L_8, NULL);
		bool L_9 = __this->___fullScreen;
		if (!L_9)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_10;
		L_10 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_11;
		L_11 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline((&V_1), (0.0f), (0.0f), ((float)L_10), ((float)L_11), NULL);
		goto IL_006e;
	}

IL_0067:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = UniWebView_NextFrameRect_m222BFF790A1DE336FB40800E08F8DA3846EF4CAE(__this, NULL);
		V_1 = L_12;
	}

IL_006e:
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_13 = __this->___listener;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_13, NULL);
		float L_15;
		L_15 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline((&V_1), NULL);
		float L_16;
		L_16 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline((&V_1), NULL);
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&V_1), NULL);
		float L_18;
		L_18 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Init_mA170AB0A59E8F8DAC97FD0FB18CF85D9C16AC2FF(L_14, il2cpp_codegen_cast_double_to_int<int32_t>(L_15), il2cpp_codegen_cast_double_to_int<int32_t>(L_16), il2cpp_codegen_cast_double_to_int<int32_t>(L_17), il2cpp_codegen_cast_double_to_int<int32_t>(L_18), NULL);
		int32_t L_19;
		L_19 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_20;
		L_20 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		__this->___isPortrait = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Start_m597A16009A46D9C9D493089A31969DDCC6B150D5 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___showOnStart;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1;
		L_1 = UniWebView_Show_m06F609BE438C518277660BF0D5F6D1DB98185CED(__this, (bool)0, 0, (0.400000006f), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_0017:
	{
		String_t* L_2 = __this->___urlOnStart;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_4 = __this->___urlOnStart;
		UniWebView_Load_m5BABC3C114E577690E766E892D1A9C1E3BB08E11(__this, L_4, (bool)0, (String_t*)NULL, NULL);
	}

IL_0032:
	{
		__this->___started = (bool)1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___referenceRectTransform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A(__this, NULL);
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Update_m8FAB3A40F449F28A01A311F01B9F45DD7546506D (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED16F9589E28E51337A6B35399688F5187808BD2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0;
		L_0 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = __this->___isPortrait;
		bool L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		bool L_4 = V_0;
		__this->___isPortrait = L_4;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_5 = __this->___OnOrientationChanged;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_6 = __this->___OnOrientationChanged;
		int32_t L_7;
		L_7 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		NullCheck(L_6);
		OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_inline(L_6, __this, L_7, NULL);
	}

IL_0039:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___referenceRectTransform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A(__this, NULL);
	}

IL_004d:
	{
		bool L_10 = __this->___backButtonEnabled;
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		bool L_11;
		L_11 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)27), NULL);
		G_B8_0 = ((int32_t)(L_11));
		goto IL_005f;
	}

IL_005e:
	{
		G_B8_0 = 0;
	}

IL_005f:
	{
		if (!G_B8_0)
		{
			goto IL_0085;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_12;
		L_12 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_12);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_12, _stringLiteralED16F9589E28E51337A6B35399688F5187808BD2, NULL);
		bool L_13;
		L_13 = UniWebView_get_CanGoBack_mEBC0D299BB63639FC21757135E38395B2FD18D53(__this, NULL);
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		UniWebView_GoBack_m53E58E67305A75D5D640D7FE0A73844277BF7F2B(__this, NULL);
		return;
	}

IL_007f:
	{
		UniWebView_InternalOnShouldClose_m288E6C12B6CBB95922E6F700061E148F2658FBC9(__this, NULL);
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_OnEnable_m7287D113753C02465934F74163A2A166E4B0FB9B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___started;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = UniWebView__Show_mD57A217AD16954F405C22355A6C9CFF45CC5D8FC(__this, (bool)0, 0, (0.400000006f), (bool)1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_OnDisable_m41D158219F6376058A56ECF2CE54574C180744CF (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___started;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = UniWebView__Hide_m31E395ABF66C41ABE8B093DD58619DADCD1B4C6F(__this, (bool)0, 0, (0.400000006f), (bool)1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_get_IsWebViewSupported_mEDB5A51D722C7ECC2668A00E328DC5AA0BC0601C (const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Load_m5BABC3C114E577690E766E892D1A9C1E3BB08E11 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_url, bool ___1_skipEncoding, String_t* ___2_readAccessURL, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_url;
		bool L_3 = ___1_skipEncoding;
		String_t* L_4 = ___2_readAccessURL;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Load_mA0A42A5C9411A0AEDC6EE31E7498E30ECC16A4CB(L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_LoadHTMLString_m84D893FA6DC50A3530238B9F0F59B7B4A8FB82FB (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_htmlString, String_t* ___1_baseUrl, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_htmlString;
		String_t* L_3 = ___1_baseUrl;
		bool L_4 = ___2_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_LoadHTMLString_m086934336393BBC4EB333686C46C9288BE027F59(L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Reload_mDE62B4D83A25F5BD9DCDE5FF3A477B557D9294DF (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Reload_mC134A615AE8B03A1A7D5DFA9EDBBBD69BA98FCA9(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Stop_mB0259ADE628F4205366744F407B0A38C6A99B3BF (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Stop_m751AC39E1F877E9657F5ED831B0406E2FFC28D41(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_get_CanGoBack_mEBC0D299BB63639FC21757135E38395B2FD18D53 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UniWebViewInterface_CanGoBack_m60694B17993E9DC47826E5DC3B9DFEC12A4DD59A(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_get_CanGoForward_mBE03C57FF6710D30D040C6F77C9A1E5770342330 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UniWebViewInterface_CanGoForward_m1461133C0AEC7D32E994FD95642826341FD02627(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GoBack_m53E58E67305A75D5D640D7FE0A73844277BF7F2B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_GoBack_m8BFB6B50A679554881753E824131ACC1558DE59E(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GoForward_m013DFFB4F4B2A25A93EB1CBCA1B5DF32CBA03A8B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_GoForward_m7515B07542F0A59DE5B84F677CC09B1511CD9E9B(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetOpenLinksInExternalBrowser_m139FD6347BF86FBEBEE62506B79F0819AA9CEAE5 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetOpenLinksInExternalBrowser_m0F66F68E4AD1A6C6AD2D549A17685B2ACC652C23(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_Show_m06F609BE438C518277660BF0D5F6D1DB98185CED (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_fade;
		int32_t L_1 = ___1_edge;
		float L_2 = ___2_duration;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___3_completionHandler;
		bool L_4;
		L_4 = UniWebView__Show_mD57A217AD16954F405C22355A6C9CFF45CC5D8FC(__this, L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView__Show_mD57A217AD16954F405C22355A6C9CFF45CC5D8FC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B8_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B5_1 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	bool G_B11_0 = false;
	bool G_B9_0 = false;
	bool G_B10_0 = false;
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		bool L_4 = ___0_fade;
		int32_t L_5 = ___1_edge;
		float L_6 = ___2_duration;
		bool L_7 = ___3_useAsync;
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = UniWebViewInterface_Show_m553D847019728F689F4F7C79B381B73112601C04(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		bool L_10 = L_9;
		if (!L_10)
		{
			G_B8_0 = L_10;
			goto IL_0054;
		}
		G_B1_0 = L_10;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___4_completionHandler;
		if (!L_11)
		{
			G_B8_0 = G_B1_0;
			goto IL_0054;
		}
		G_B2_0 = G_B1_0;
	}
	{
		bool L_12 = ___0_fade;
		if (L_12)
		{
			G_B4_0 = G_B2_0;
			goto IL_003a;
		}
		G_B3_0 = G_B2_0;
	}
	{
		int32_t L_13 = ___1_edge;
		G_B5_0 = ((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_003b:
	{
		if (!G_B5_0)
		{
			G_B7_0 = G_B5_1;
			goto IL_004d;
		}
		G_B6_0 = G_B5_1;
	}
	{
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_14 = __this->___actions;
		String_t* L_15 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___4_completionHandler;
		NullCheck(L_14);
		Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98(L_14, L_15, L_16, Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		G_B8_0 = G_B6_0;
		goto IL_0054;
	}

IL_004d:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___4_completionHandler;
		NullCheck(L_17);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_17, NULL);
		G_B8_0 = G_B7_0;
	}

IL_0054:
	{
		bool L_18 = G_B8_0;
		if (!L_18)
		{
			G_B11_0 = L_18;
			goto IL_0078;
		}
		G_B9_0 = L_18;
	}
	{
		bool L_19 = __this->___useToolbar;
		if (!L_19)
		{
			G_B11_0 = G_B9_0;
			goto IL_0078;
		}
		G_B10_0 = G_B9_0;
	}
	{
		int32_t L_20 = __this->___toolbarPosition;
		V_2 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_2;
		bool L_22 = __this->___fullScreen;
		UniWebView_SetShowToolbar_m096C958961581C717CBDD141059A3950CF43BF24(__this, (bool)1, (bool)0, L_21, L_22, NULL);
		G_B11_0 = G_B10_0;
	}

IL_0078:
	{
		return G_B11_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_Hide_m072E9348808732F001DD4D8C74D7215DD31D1346 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_fade;
		int32_t L_1 = ___1_edge;
		float L_2 = ___2_duration;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___3_completionHandler;
		bool L_4;
		L_4 = UniWebView__Hide_m31E395ABF66C41ABE8B093DD58619DADCD1B4C6F(__this, L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView__Hide_m31E395ABF66C41ABE8B093DD58619DADCD1B4C6F (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B8_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B5_1 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	bool G_B11_0 = false;
	bool G_B9_0 = false;
	bool G_B10_0 = false;
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		bool L_4 = ___0_fade;
		int32_t L_5 = ___1_edge;
		float L_6 = ___2_duration;
		bool L_7 = ___3_useAsync;
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = UniWebViewInterface_Hide_m5AB5929F66AAC5EF598DAD25C896A3EB846FDACE(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		bool L_10 = L_9;
		if (!L_10)
		{
			G_B8_0 = L_10;
			goto IL_0054;
		}
		G_B1_0 = L_10;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___4_completionHandler;
		if (!L_11)
		{
			G_B8_0 = G_B1_0;
			goto IL_0054;
		}
		G_B2_0 = G_B1_0;
	}
	{
		bool L_12 = ___0_fade;
		if (L_12)
		{
			G_B4_0 = G_B2_0;
			goto IL_003a;
		}
		G_B3_0 = G_B2_0;
	}
	{
		int32_t L_13 = ___1_edge;
		G_B5_0 = ((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_003b:
	{
		if (!G_B5_0)
		{
			G_B7_0 = G_B5_1;
			goto IL_004d;
		}
		G_B6_0 = G_B5_1;
	}
	{
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_14 = __this->___actions;
		String_t* L_15 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___4_completionHandler;
		NullCheck(L_14);
		Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98(L_14, L_15, L_16, Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		G_B8_0 = G_B6_0;
		goto IL_0054;
	}

IL_004d:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___4_completionHandler;
		NullCheck(L_17);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_17, NULL);
		G_B8_0 = G_B7_0;
	}

IL_0054:
	{
		bool L_18 = G_B8_0;
		if (!L_18)
		{
			G_B11_0 = L_18;
			goto IL_0078;
		}
		G_B9_0 = L_18;
	}
	{
		bool L_19 = __this->___useToolbar;
		if (!L_19)
		{
			G_B11_0 = G_B9_0;
			goto IL_0078;
		}
		G_B10_0 = G_B9_0;
	}
	{
		int32_t L_20 = __this->___toolbarPosition;
		V_2 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_2;
		bool L_22 = __this->___fullScreen;
		UniWebView_SetShowToolbar_m096C958961581C717CBDD141059A3950CF43BF24(__this, (bool)0, (bool)0, L_21, L_22, NULL);
		G_B11_0 = G_B10_0;
	}

IL_0078:
	{
		return G_B11_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_AnimateTo_m379C422E9CAABCFE7FB522E61E92503ABC4A5E53 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_frame, float ___1_duration, float ___2_delay, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool G_B3_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		float L_4;
		L_4 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline((&___0_frame), NULL);
		float L_5;
		L_5 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline((&___0_frame), NULL);
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&___0_frame), NULL);
		float L_7;
		L_7 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&___0_frame), NULL);
		float L_8 = ___1_duration;
		float L_9 = ___2_delay;
		String_t* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = UniWebViewInterface_AnimateTo_m413573276E43A5E4DB1552ADA1E52F1283CEEA12(L_3, il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_5), il2cpp_codegen_cast_double_to_int<int32_t>(L_6), il2cpp_codegen_cast_double_to_int<int32_t>(L_7), L_8, L_9, L_10, NULL);
		bool L_12 = L_11;
		if (!L_12)
		{
			G_B3_0 = L_12;
			goto IL_0063;
		}
		G_B1_0 = L_12;
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = ___0_frame;
		__this->___frame = L_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ___3_completionHandler;
		if (!L_14)
		{
			G_B3_0 = G_B1_0;
			goto IL_0063;
		}
		G_B2_0 = G_B1_0;
	}
	{
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_15 = __this->___actions;
		String_t* L_16 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___3_completionHandler;
		NullCheck(L_15);
		Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98(L_15, L_16, L_17, Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		G_B3_0 = G_B2_0;
	}

IL_0063:
	{
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddJavaScript_m6B8B41E452FA585A0BD04531CFE95897E480833E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_jsString, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		String_t* L_4 = ___0_jsString;
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddJavaScript_m157E0591488F45B29AADB19FA282BF6B71521740(L_3, L_4, L_5, NULL);
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_6 = ___1_completionHandler;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___payloadActions;
		String_t* L_8 = V_0;
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_9 = ___1_completionHandler;
		NullCheck(L_7);
		Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9(L_7, L_8, L_9, Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
	}

IL_0036:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_EvaluateJavaScript_mCE1BCB51C4DB0F0380F4430F1D9715CCB872B3F0 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_jsString, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		String_t* L_4 = ___0_jsString;
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_EvaluateJavaScript_m027521BB576801D9EA67E9E55065FA52200DADA4(L_3, L_4, L_5, NULL);
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_6 = ___1_completionHandler;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___payloadActions;
		String_t* L_8 = V_0;
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_9 = ___1_completionHandler;
		NullCheck(L_7);
		Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9(L_7, L_8, L_9, Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
	}

IL_0036:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddUrlScheme_m69D58B1FD13B6C4BAB887F4A73F71EDAD6728CCC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_scheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_scheme;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1;
		L_1 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_1, _stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D, NULL);
		return;
	}

IL_0013:
	{
		String_t* L_2 = ___0_scheme;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_4, _stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B, NULL);
		return;
	}

IL_0030:
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_5 = __this->___listener;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_5, NULL);
		String_t* L_7 = ___0_scheme;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddUrlScheme_m2A6954D231F428A3677F51C9D41C816FA17F7C49(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveUrlScheme_m0062D380411F3A928D99B1161252A7DBFD8BA103 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_scheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_scheme;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1;
		L_1 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_1, _stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D, NULL);
		return;
	}

IL_0013:
	{
		String_t* L_2 = ___0_scheme;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_4, _stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B, NULL);
		return;
	}

IL_0030:
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_5 = __this->___listener;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_5, NULL);
		String_t* L_7 = ___0_scheme;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveUrlScheme_mD957A721214715AF1BDA5C8CDC5E28BE5C6A7F4B(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddSslExceptionDomain_mEBEDEE7B8BEF3563222107BA38776FDBB3D1BA6D (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_domain;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1;
		L_1 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_1, _stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E, NULL);
		return;
	}

IL_0013:
	{
		String_t* L_2 = ___0_domain;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_4, _stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7, NULL);
		return;
	}

IL_0030:
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_5 = __this->___listener;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_5, NULL);
		String_t* L_7 = ___0_domain;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddSslExceptionDomain_m8FE98CFB237F9E4BC9DB3DCB0EE9117AE2D5233C(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveSslExceptionDomain_mF1BEC625F440167F640678A5E8E73D8548A4ED6D (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_domain;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1;
		L_1 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_1, _stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E, NULL);
		return;
	}

IL_0013:
	{
		String_t* L_2 = ___0_domain;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_4, _stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7, NULL);
		return;
	}

IL_0030:
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_5 = __this->___listener;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_5, NULL);
		String_t* L_7 = ___0_domain;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveSslExceptionDomain_m278FF9C874E87F702E2EE8E480AB8D5D31BD811C(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetHeaderField_mF06DA2AE52947D8F4785783F3DEE71CE589BF0AA (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93B204B4CDC241356AD725235A5C0966C643FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1;
		L_1 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_1, _stringLiteral93B204B4CDC241356AD725235A5C0966C643FAF8, NULL);
		return;
	}

IL_0013:
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		String_t* L_4 = ___0_key;
		String_t* L_5 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetHeaderField_m5EE71BC48E9AE2471780A3AA938CC49B14E75B41(L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetUserAgent_m327C9199D60AF7FF3E13609A6E48E91967B53BD4 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_agent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_agent;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUserAgent_m9CA3014C1C272A8A3E0D3CB880F18628A11151B3(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebView_GetUserAgent_m1BF3450407754000C524665116721487B4834CE4 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = UniWebViewInterface_GetUserAgent_mA7EFD9E85946106487273961667A23A5C1EEAD94(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetContentInsetAdjustmentBehavior_m10E64F5910FE3E2F410114AC8442D8312895A55B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, int32_t ___0_behavior, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		int32_t L_2 = ___0_behavior;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetContentInsetAdjustmentBehavior_m4A9AB65814BADF5D5964B410B0AD74E2EAE3BC82(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowAutoPlay_m2F8C09D346F4C238FBCF8805FEA9213A688AD2DB (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowAutoPlay_mDB91254D5C2DF58A1907D8AED24B9D53712C46E2(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowInlinePlay_mA527DE8F8E2246F3A9E70DB1C2B7FAD6FB9F7776 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowInlinePlay_mB7A86CF2F9395BD94ECF59F5059AA0D90AB4C4DF(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowFileAccess_m510164E68BE05851B9CCFB38DA92C637EE4AB070 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowFileAccess_mDA2098389AC5EBF43FE0B806F4BAC038AD5BD3E2(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowFileAccessFromFileURLs_m29AA874001CA777B5C44879C5F3DD3B3AC6ED71D (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowFileAccessFromFileURLs_m00AA0BA57A11C231F7BC9836101FF5597AD6640C(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowUniversalAccessFromFileURLs_m4EE2CE5A66501619B3978A243600AD779EE5DCB7 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mFA222A5C30FF032C8E1367F75EC605650D130156(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetEnableKeyboardAvoidance_mCB7A22BFB68D9AF4E0859CFBF78416E056B798F8 (bool ___0_flag, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetJavaScriptEnabled_m77702CE4856DF6CC09BE602DE67141CB900A1BFF (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetJavaScriptEnabled_mA437D5FA34B128F3BCAC49BC49193E42AB3E4EE1(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowJavaScriptOpenWindow_m95065BF4C458716C050EF43FF8BEC9C346FE7F6A (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEB7A0ECC311A2C3DF7FE3D4E3DD64876860DE24(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_CleanCache_mB0863CF09C07DBD30C6769B7DED5AA9E55E26B20 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CleanCache_m268E590335183857A83A2C03734F13BA8FB1DE96(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_ClearCookies_m717D8F64BDAB6A9C237B94776B3982762D245EF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_ClearCookies_mF3E894123E40DE1361663809673386D015FCFEC3(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetCookie_mAE72E381F58BC38E6EE403808F0056F14754BF46 (String_t* ___0_url, String_t* ___1_cookie, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_cookie;
		bool L_2 = ___2_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetCookie_m5B1303AA17D400FB0170F656DDB9793F249741DD(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebView_GetCookie_m04C2B92683FE763B34B7A074166F91F9B71E3173 (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_key;
		bool L_2 = ___2_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = UniWebViewInterface_GetCookie_m174641DD922771E679F0D6E1C0522B9A5BD1A9EE(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveCookies_m9BAD986D847B8582A2199D19D0AAC28AE42B0466 (String_t* ___0_url, bool ___1_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_url;
		bool L_1 = ___1_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveCookies_mF6D699F5113F011455EEE049ED3FBF74748B1CDE(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveCooke_m5DF2BBD4796EEFC55B0CCA55E733671092B80843 (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_key;
		bool L_2 = ___2_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveCookie_mB47A4A575CE544E77874F2D06956266114EC438F(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_ClearHttpAuthUsernamePassword_m334D11701F615A41A8CCD9881C2E920669350DC0 (String_t* ___0_host, String_t* ___1_realm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_host;
		String_t* L_1 = ___1_realm;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_ClearHttpAuthUsernamePassword_mAF13DAC71BC90F2784E7AF43A3F136647DEEB34B(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UniWebView_get_BackgroundColor_m1FE687F2C13F799D6BB60EDFECC1EC48D55F315E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___backgroundColor;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_BackgroundColor_mA2711BF40DDCCBD9E8B9E6101BC8560542FD1ACC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___backgroundColor = L_0;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_1 = __this->___listener;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_value;
		float L_4 = L_3.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_value;
		float L_6 = L_5.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___0_value;
		float L_8 = L_7.___b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_value;
		float L_10 = L_9.___a;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetBackgroundColor_m7F638D4057B21CE30389D2D104196ACDEE0DCA1A(L_2, L_4, L_6, L_8, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebView_get_Alpha_mE510D1D29A7E30476B9BEA00F36DFD491C90A160 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = UniWebViewInterface_GetWebViewAlpha_m408A04169B9E1ACD0BE43D3B96E675AC980A97F6(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_Alpha_m30DDAFDC739C4466CAB0286AC0E74D1E4F596ECC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		float L_2 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWebViewAlpha_mD7E804965C2B5C9D503CA7B2BE6FC39C22C6422A(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowSpinnerWhileLoading_m275082B2B4B426FDE15503AED02E3C46C9E9F23B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetShowSpinnerWhileLoading_m87A1A260D02881962518D7A23F6DE82FD8E93E74(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetSpinnerText_m1E88EC6C1D8DA8CC269B9EAD9E5F11A230D1BCC4 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_text;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetSpinnerText_mF808B322A4F8EBC7F949C67D60775ACA8E78CED6(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetHorizontalScrollBarEnabled_m079C0B751645D161797F0D37EB97C4EE344EC445 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetHorizontalScrollBarEnabled_m3FB0E27A1E68BDBBCB8C575AAC2ECA0174A9168B(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetVerticalScrollBarEnabled_m0D11B47DFEFE037B5AA159B34B221A8C1E64725F (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetVerticalScrollBarEnabled_m5E4E8B06DA5CCCDC2B2C55A324A838040B3A4C22(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetBouncesEnabled_m6844CC5D13603356BDA380F742982924499AB49B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetBouncesEnabled_m5BB33343416B23097E6DE23565BEE79D5109051C(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetZoomEnabled_mDC790FD74384D5658B76C8073DB92E76247E71BC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetZoomEnabled_mB3E75A4E2E0C8394F350483460C001A8CD1828C7(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddPermissionTrustDomain_m2971E4734C2024CF1806A7C3306CC5FBE5BE0F12 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_domain, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemovePermissionTrustDomain_m37FAE0DFD6F57D16B28CBCC0FDD3552CF665E46A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_domain, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetBackButtonEnabled_m54B61F8106B54F85EA5D6AC80CE0E0F7FB6EED22 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_enabled;
		__this->___backButtonEnabled = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetUseWideViewPort_mC8BD8CEE3765DD961D8EB25006F1316DF11FFAD0 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetLoadWithOverviewMode_mA694AE30E4851BFF6C5AD042F543AFDA8FD17C99 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowToolbar_m096C958961581C717CBDD141059A3950CF43BF24 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_show, bool ___1_animated, bool ___2_onTop, bool ___3_adjustInset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_show;
		bool L_3 = ___1_animated;
		bool L_4 = ___2_onTop;
		bool L_5 = ___3_adjustInset;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetShowToolbar_m4A0C5A2EA5FA121FAB5357D8DC93C5A177EC2CB4(L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarDoneButtonText_mF81E2643E32709B124D4267F20AF1DC5E94EB242 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_text;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetToolbarDoneButtonText_m6313F307A7B7E6D760F851A42DA5402A6A92533D(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarGoBackButtonText_m955A1DBA18AF6EF7426BEC33C6356BEBFED26A72 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_text;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetToolbarGoBackButtonText_m00D805DB79A76F3148D1AF83450710A63BD17EDF(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarGoForwardButtonText_m242126DF8AF9BCEFCE230E700EDD31DD60CE0674 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_text;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetToolbarGoForwardButtonText_m7331CFC9BDFE1D2BBC5B0B54D0C0AFE2B03E75C8(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarTintColor_mB06A6C79E86CB32301263735CB229D3BD1608764 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_color;
		float L_3 = L_2.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_color;
		float L_5 = L_4.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_color;
		float L_7 = L_6.___b;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetToolbarTintColor_mE32F3228FB6B0C6CDFBAE9299CE84E21A5F08589(L_1, L_3, L_5, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarTextColor_m14405C4491FEFA3C77383946C59C0EA31B8C1680 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_color;
		float L_3 = L_2.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_color;
		float L_5 = L_4.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_color;
		float L_7 = L_6.___b;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetToolbarTextColor_m4AF3D8A7F1508CB61A05235661E6B023796DB78F(L_1, L_3, L_5, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowToolbarNavigationButtons_m7D2149FD752C0789FE5DD289D3CF7E2BDADA3909 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_show, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_show;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetShowToolbarNavigationButtons_m40845F2EDF5A16022FF777DD3CE595A78158959C(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetUserInteractionEnabled_mA48EFFB7433AD5938D4C50B8254FB9CBAD7A3E09 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUserInteractionEnabled_mCFBAE387A262266014BDCE48BD34653D06F0F179(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetTransparencyClickingThroughEnabled_mCC71F80F6F3F84E63CB02E34038839D680B46A91 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetTransparencyClickingThroughEnabled_mCA24436C0CEB09A85FD950D3D6F2CF6E24C49AAB(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetWebContentsDebuggingEnabled_mDB1204545765BA056D5E798B723F4EA8E389EDA8 (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWebContentsDebuggingEnabled_mB89818D831425C081C35732663BDC82B8FE1299E(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetWindowUserResizeEnabled_m00449035DC258D150CE5707C9116F648A0E670A9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWindowUserResizeEnabled_mB764B03C0AE797FD5D3C7B7DC52F397E2D04B7BB(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GetHTMLContent_mE12CCF45BF33818C6ACFCEC78685E73CEC8602C8 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass153_0_U3CGetHTMLContentU3Eb__0_m889FD5EB3BE1B8A2F3E8ABCFC8FBD67BA09BF752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4* L_0 = (U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass153_0__ctor_m97B6BA468B989C60C0762633CA6914C0D2D81E99(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4* L_1 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ___0_handler;
		NullCheck(L_1);
		L_1->___handler = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___handler), (void*)L_2);
		U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4* L_3 = V_0;
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_4 = (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*)il2cpp_codegen_object_new(Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C_il2cpp_TypeInfo_var);
		Action_1__ctor_mFF6683FB50C114EC779ECC0F9E3F78A580F97EA7(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass153_0_U3CGetHTMLContentU3Eb__0_m889FD5EB3BE1B8A2F3E8ABCFC8FBD67BA09BF752_RuntimeMethod_var), NULL);
		UniWebView_EvaluateJavaScript_mCE1BCB51C4DB0F0380F4430F1D9715CCB872B3F0(__this, _stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowBackForwardNavigationGestures_m34F27F1FB77961CA18EB7C0E550B9891D145796E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowBackForwardNavigationGestures_mE7EFE68323A42AC1E222DEE7D0C76B2388524731(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowHTTPAuthPopUpWindow_m5F5E015D948CF904A55FA0B157EEFFC2A454C81D (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mD6E3D7351F9977DFC2A131ABD34656BE5E333496(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetCalloutEnabled_mC0C10E54B17A85646D3C1CA79E5E3BFCB64DBCE9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetCalloutEnabled_m7E1A340CFBE84E75804A4A351D7F27DB6A356AD3(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetSupportMultipleWindows_m03DB0D1236A7CDA81F270536BA9DA4A7E5E55028 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_enabled;
		UniWebView_SetSupportMultipleWindows_mC42F557779337AA0B03DC5D450DC39568A508E85(__this, L_0, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetSupportMultipleWindows_mC42F557779337AA0B03DC5D450DC39568A508E85 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, bool ___1_allowJavaScriptOpening, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		bool L_3 = ___1_allowJavaScriptOpening;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetSupportMultipleWindows_m2B3875345342377C53DA6FA62E6CB7C919449752(L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetDefaultFontSize_m8418C3F7554DF1F8C54EF7A217DA655E18B11FB6 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetTextZoom_m5D61544806D51508CDB2DCE7A177C20840EEE5CC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, int32_t ___0_textZoom, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetDragInteractionEnabled_m096A8B2D5B45E42771F0D24A8970E53BEAC96EA9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetDragInteractionEnabled_m268BEA0E80D52E00C61E1CF88615D355B8509E67(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Print_m89A1855974B13E7DEAC07FC5DD30D52F974D4A35 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Print_m0689A76490307B282F8E62EA4729422161AD40CF(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_CaptureSnapshot_m6C2CE9E21042DDD08E914339487D26E0F5048797 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_fileName;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CaptureSnapshot_m8DE276F25F9C6720F2A1B030B647BD5D23FD0CDD(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_ScrollTo_m56D73554B8DBBE0E29C86BA7B8A7F200128A5259 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, int32_t ___0_x, int32_t ___1_y, bool ___2_animated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		int32_t L_2 = ___0_x;
		int32_t L_3 = ___1_y;
		bool L_4 = ___2_animated;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_ScrollTo_mBDE75495718EA4A2066F1514BE66EDAA24AE998C(L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddDownloadURL_mE73D3756CEC125E0901C042BF7C70B8252C0744C (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_urlString, int32_t ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_urlString;
		int32_t L_3 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddDownloadURL_m3943B8D59DA7058E0C5EE03AB603A38CD52CFE48(L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveDownloadURL_m7FCC311D710D929DE7A4D46827E67C76E27C2A07 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_urlString, int32_t ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_urlString;
		int32_t L_3 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveDownloadURL_mDB679FDF53FC58F298142946CAD6AFF7FF509C2A(L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddDownloadMIMEType_m7AF3194CCE8842E3DC60D842065645B52296CE12 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_MIMEType, int32_t ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_MIMEType;
		int32_t L_3 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddDownloadMIMEType_m1E179388C22A0FD1CEE6D9FDB6B4CA047D10CD69(L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveDownloadMIMETypes_mABB0890771FC25FECB477968C22EFC423F610C27 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_MIMEType, int32_t ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_MIMEType;
		int32_t L_3 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveDownloadMIMETypes_mEFAD5367200960693EA9EED2EDC137C71F347A48(L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowUserChooseActionAfterDownloading_m3E258ED2A0C0F45AC2367FB2E98C3AF3BC6BF6C9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_allowed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_allowed;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowUserChooseActionAfterDownloading_mDB17E8698254C7BD8EDC036C24F2001CD238C041(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetDownloadEventForContextMenuEnabled_m2A4291413FCA8C032944528CF11C9531EFA5F603 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_OnDestroy_mB7FF60DE5065C3A2E39D3C70EC14C2242661E9A0 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_RemoveListener_m6349FABAC78F87FD6AE5DAEDD1945F03F7221713(L_1, NULL);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Destroy_m03F8C9C4B879EB01ED23BEE624D1F3C35E051D0B(L_3, NULL);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_4 = __this->___listener;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShowTransitionFinished_m43B0D8548BC33F30B809AAE5ACCC6451658B740B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	{
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_0 = __this->___actions;
		String_t* L_1 = ___0_identifier;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_4 = __this->___actions;
		String_t* L_5 = ___0_identifier;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0(L_4, L_5, Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnHideTransitionFinished_m0384C70ED27CF10A11297B4D8D3A71A7076E92D8 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	{
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_0 = __this->___actions;
		String_t* L_1 = ___0_identifier;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_4 = __this->___actions;
		String_t* L_5 = ___0_identifier;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0(L_4, L_5, Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAnimateToFinished_m5FCE7F89EDEAAE8673ECBF8BC0E5BF7CCE2B9632 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	{
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_0 = __this->___actions;
		String_t* L_1 = ___0_identifier;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_4 = __this->___actions;
		String_t* L_5 = ___0_identifier;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0(L_4, L_5, Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAddJavaScriptFinished_m1D42374A36244250F2F6124A0C819B33C5684378 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_0 = ___0_payload;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier;
		V_1 = L_1;
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_2 = __this->___payloadActions;
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_payload;
		NullCheck(L_5);
		Action_1_Invoke_m89D3D0FB83AEFEFD39442766C0C4F5A8329D0285_inline(L_5, L_6, NULL);
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___payloadActions;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D(L_7, L_8, Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnEvalJavaScriptFinished_mF80A34BC2BD3F5063BE79C98245CF7D397C7A3E7 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_0 = ___0_payload;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier;
		V_1 = L_1;
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_2 = __this->___payloadActions;
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_payload;
		NullCheck(L_5);
		Action_1_Invoke_m89D3D0FB83AEFEFD39442766C0C4F5A8329D0285_inline(L_5, L_6, NULL);
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___payloadActions;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D(L_7, L_8, Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageFinished_mC5C2526387EBD9A3C91AA5A7FBEA43578ECC616A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4CC144598BD145E00CD6F81EDD805EA5BBA24E6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_0 = __this->___OnPageFinished;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		V_0 = (-1);
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_payload;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_4 = __this->___OnPageFinished;
		int32_t L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_payload;
		NullCheck(L_6);
		String_t* L_7 = L_6->___data;
		NullCheck(L_4);
		PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_inline(L_4, __this, L_5, L_7, NULL);
		return;
	}

IL_002d:
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_8;
		L_8 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_9 = ___0_payload;
		NullCheck(L_9);
		String_t* L_10 = L_9->___resultCode;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC4CC144598BD145E00CD6F81EDD805EA5BBA24E6, L_10, NULL);
		NullCheck(L_8);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_8, L_11, NULL);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageStarted_mCC7F59BDFB3D6DCE5BB86478DA91B1C47765D9AE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_0 = __this->___OnPageStarted;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_1 = __this->___OnPageStarted;
		String_t* L_2 = ___0_url;
		NullCheck(L_1);
		PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageErrorReceived_mF2FD6E5D4B839AC9CDB00497C9C07BC5672DAACF (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2199E4A06060B44700618DF6B43A85D47E229DF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_0 = __this->___OnPageErrorReceived;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		V_0 = (-1);
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_payload;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_4 = __this->___OnPageErrorReceived;
		int32_t L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_payload;
		NullCheck(L_6);
		String_t* L_7 = L_6->___data;
		NullCheck(L_4);
		PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_inline(L_4, __this, L_5, L_7, NULL);
		return;
	}

IL_002d:
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_8;
		L_8 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_9 = ___0_payload;
		NullCheck(L_9);
		String_t* L_10 = L_9->___resultCode;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD2199E4A06060B44700618DF6B43A85D47E229DF, L_10, NULL);
		NullCheck(L_8);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_8, L_11, NULL);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageProgressChanged_m315FCE400C99F88020084AD9EE72C97B29B5370C (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, float ___0_progress, const RuntimeMethod* method) 
{
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_0 = __this->___OnPageProgressChanged;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_1 = __this->___OnPageProgressChanged;
		float L_2 = ___0_progress;
		NullCheck(L_1);
		PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMessageReceived_m6BA779B133E0858266E4C25E5935FE4D78918356 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_0 = __this->___OnMessageReceived;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = ___0_result;
		UniWebViewMessage__ctor_mB7BC54EAE6F2C87CAD0C7E4C06B3B322039E4F31((&V_0), L_1, NULL);
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_2 = __this->___OnMessageReceived;
		UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 L_3 = V_0;
		NullCheck(L_2);
		MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_inline(L_2, __this, L_3, NULL);
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShouldClose_m288E6C12B6CBB95922E6F700061E148F2658FBC9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_0 = __this->___OnShouldClose;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_1 = __this->___OnShouldClose;
		NullCheck(L_1);
		bool L_2;
		L_2 = ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_inline(L_1, __this, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		return;
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnWebContentProcessDidTerminate_mDDD3AEF0EC6AD327ACA6B8E9BCD71B6EB73DADDE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_0 = __this->___OnWebContentProcessTerminated;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_1 = __this->___OnWebContentProcessTerminated;
		NullCheck(L_1);
		OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_inline(L_1, __this, NULL);
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowOpened_m511D2F03883B77233CDF1975E80DA01531E52C05 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_multiWindowId, const RuntimeMethod* method) 
{
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_0 = __this->___OnMultipleWindowOpened;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_1 = __this->___OnMultipleWindowOpened;
		String_t* L_2 = ___0_multiWindowId;
		NullCheck(L_1);
		MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowClosed_m1B0A5F7048AC06C683C48C1232B840454F39C028 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_multiWindowId, const RuntimeMethod* method) 
{
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_0 = __this->___OnMultipleWindowClosed;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_1 = __this->___OnMultipleWindowClosed;
		String_t* L_2 = ___0_multiWindowId;
		NullCheck(L_1);
		MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadStarted_mF8149818A85DB5C0448A0DF32B3626F0D00A8378 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_0 = __this->___OnFileDownloadStarted;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_1 = __this->___OnFileDownloadStarted;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_2 = ___0_payload;
		NullCheck(L_2);
		String_t* L_3 = L_2->___identifier;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4 = ___0_payload;
		NullCheck(L_4);
		String_t* L_5 = L_4->___data;
		NullCheck(L_1);
		FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_inline(L_1, __this, L_3, L_5, NULL);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadFinished_mBFE7FC899642D5F12106559319E0E35DC944EB8A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_0 = __this->___OnFileDownloadFinished;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_payload;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_001b;
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		G_B4_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B4_0;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_5 = __this->___OnFileDownloadFinished;
		int32_t L_6 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_7 = ___0_payload;
		NullCheck(L_7);
		String_t* L_8 = L_7->___identifier;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_9 = ___0_payload;
		NullCheck(L_9);
		String_t* L_10 = L_9->___data;
		NullCheck(L_5);
		FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_inline(L_5, __this, L_6, L_8, L_10, NULL);
	}

IL_0035:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnCaptureSnapshotFinished_mE3338681266888F771F1A9C89F43F831C325690E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_0 = __this->___OnCaptureSnapshotFinished;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_payload;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_001b;
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		G_B4_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B4_0;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_5 = __this->___OnCaptureSnapshotFinished;
		int32_t L_6 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_7 = ___0_payload;
		NullCheck(L_7);
		String_t* L_8 = L_7->___data;
		NullCheck(L_5);
		CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_inline(L_5, __this, L_6, L_8, NULL);
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetImmersiveModeEnabled_mBC3434DD4C16544ED59542370F99C376F97AD469 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFADAFC4A16312377BF957856DCCD59A61D85AB62);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFADAFC4A16312377BF957856DCCD59A61D85AB62, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnKeyCodeReceived_mDED354ACD195971E6059F0345C9EC3A92F9578BC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_0 = NULL;
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_1 = NULL;
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_2 = NULL;
	{
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_0 = __this->___OnKeyCodeReceived;
		V_0 = L_0;
	}

IL_0007:
	{
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_1 = V_0;
		V_1 = L_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_2 = V_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)CastclassSealed((RuntimeObject*)L_4, KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA_il2cpp_TypeInfo_var));
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA** L_5 = (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA**)(&__this->___OnKeyCodeReceived);
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_6 = V_2;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_7 = V_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_8;
		L_8 = InterlockedCompareExchangeImpl<KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*>(L_5, L_6, L_7);
		V_0 = L_8;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_9 = V_0;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_10 = V_1;
		if ((!(((RuntimeObject*)(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)L_9) == ((RuntimeObject*)(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnKeyCodeReceived_mA92A14A5CA62B8487FCE7FBD86B04602BFCAEB01 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_0 = NULL;
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_1 = NULL;
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_2 = NULL;
	{
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_0 = __this->___OnKeyCodeReceived;
		V_0 = L_0;
	}

IL_0007:
	{
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_1 = V_0;
		V_1 = L_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_2 = V_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)CastclassSealed((RuntimeObject*)L_4, KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA_il2cpp_TypeInfo_var));
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA** L_5 = (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA**)(&__this->___OnKeyCodeReceived);
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_6 = V_2;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_7 = V_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_8;
		L_8 = InterlockedCompareExchangeImpl<KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*>(L_5, L_6, L_7);
		V_0 = L_8;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_9 = V_0;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_10 = V_1;
		if ((!(((RuntimeObject*)(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)L_9) == ((RuntimeObject*)(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView__ctor_m1284EE3CB80B68298787B500C35F215AF57E0D0B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->___id = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id), (void*)L_1);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_2 = (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*)il2cpp_codegen_object_new(Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E(L_2, Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E_RuntimeMethod_var);
		__this->___actions = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actions), (void*)L_2);
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_3 = (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*)il2cpp_codegen_object_new(Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E(L_3, Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E_RuntimeMethod_var);
		__this->___payloadActions = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___payloadActions), (void*)L_3);
		__this->___backButtonEnabled = (bool)1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___backgroundColor = L_4;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_Multicast(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* currentDelegate = reinterpret_cast<PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_url, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenInst(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_url, method);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenStatic(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_url, method);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenVirtual(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_url);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenInterface(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_url);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenGenericVirtual(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_url);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenGenericInterface(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_url);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageStartedDelegate__ctor_mBA40DE0B1878E6C0907BFBCA95083C1080209C4D (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310 (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_url, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageStartedDelegate_BeginInvoke_m07F7EF5EB610B70CA8D41B028D778991167996D7 (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = ___1_url;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageStartedDelegate_EndInvoke_mBADF57A348D200C24597E45DD1143D31D467C69E (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_Multicast(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* currentDelegate = reinterpret_cast<PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_statusCode, ___2_url, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenInst(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_statusCode, ___2_url, method);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenStatic(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_statusCode, ___2_url, method);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenVirtual(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_statusCode, ___2_url);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenInterface(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_statusCode, ___2_url);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenGenericVirtual(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_statusCode, ___2_url);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenGenericInterface(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_statusCode, ___2_url);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageFinishedDelegate__ctor_m601B981286793D02738129D1B444A2D415BE1DB4 (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543 (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_statusCode, ___2_url, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageFinishedDelegate_BeginInvoke_m5F9799DF2E53CA438D6A2C0AE8AC112EE4E300C0 (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_statusCode);
	__d_args[2] = ___2_url;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageFinishedDelegate_EndInvoke_mD14473B8249D6CEF72E6354BE466D69976FAC94B (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_Multicast(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* currentDelegate = reinterpret_cast<PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_errorCode, ___2_errorMessage, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenInst(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_errorCode, ___2_errorMessage, method);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenStatic(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_errorCode, ___2_errorMessage, method);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenVirtual(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenInterface(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenGenericVirtual(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenGenericInterface(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_errorMessage);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate__ctor_m7721736193BB37F11202515587A35A5C7E34C1E2 (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_errorCode, ___2_errorMessage, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageErrorReceivedDelegate_BeginInvoke_mC9AE259AB9C02FD9706D5FAD600A5B4BCC190704 (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_errorCode);
	__d_args[2] = ___2_errorMessage;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_EndInvoke_m819BA17A2BA7731AACEA3293BA012E9B4F50790D (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_Multicast(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* currentDelegate = reinterpret_cast<PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_progress, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenInst(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_progress, method);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenStatic(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_progress, method);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenVirtual(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_progress);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenInterface(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_progress);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenGenericVirtual(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< float >::Invoke(method, ___0_webView, ___1_progress);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenGenericInterface(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< float >::Invoke(method, ___0_webView, ___1_progress);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageProgressChangedDelegate__ctor_mF9C4C9A1243773D147E31C8E86ACC6607B0A3F88 (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87 (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_progress, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageProgressChangedDelegate_BeginInvoke_mDCB31F47CDE7947D75B37AE2606CFC6FC3850F83 (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_progress);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageProgressChangedDelegate_EndInvoke_m3C19874ABD37CC9E5D4CA14C1F703C98445D3CD1 (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_Multicast(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* currentDelegate = reinterpret_cast<MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenInst(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_message, method);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenStatic(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_message, method);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenVirtual(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_message);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenInterface(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_message);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenGenericVirtual(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 >::Invoke(method, ___0_webView, ___1_message);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenGenericInterface(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 >::Invoke(method, ___0_webView, ___1_message);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_m25D03F50241866CB8E4B2B6C415A667502169E1D (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4 (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_message, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageReceivedDelegate_BeginInvoke_mAC63535F79E9725D6B3173B4F6CD504DEC0D3B98 (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_il2cpp_TypeInfo_var, &___1_message);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate_EndInvoke_m2C4AEA03EE048886D90A42AA01C08090D53846D0 (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_Multicast(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* currentDelegate = reinterpret_cast<ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenInst(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef bool (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_webView, method);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenStatic(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_webView, method);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenVirtual(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenInterface(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenGenericVirtual(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___0_webView);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenGenericInterface(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___0_webView);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShouldCloseDelegate__ctor_m3945881B49BA14E22CC2205660E6E603AF621384 (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShouldCloseDelegate_BeginInvoke_mB06B004F287659DB44CDC551DEF5F3467ADB99DC (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_webView;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_EndInvoke_m0AFF8F64D820C3F83D9C52E36D67896531B4CD77 (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_Multicast(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* currentDelegate = reinterpret_cast<OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_orientation, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenInst(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_orientation, method);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenStatic(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_orientation, method);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenVirtual(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_orientation);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenInterface(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_orientation);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenGenericVirtual(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< int32_t >::Invoke(method, ___0_webView, ___1_orientation);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenGenericInterface(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< int32_t >::Invoke(method, ___0_webView, ___1_orientation);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrientationChangedDelegate__ctor_m37E3B206DFF8008458410A8B65564D16D7C98776 (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_orientation, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrientationChangedDelegate_BeginInvoke_m7818C15AD0C166BF5C543096642640ADCE00E192 (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var, &___1_orientation);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrientationChangedDelegate_EndInvoke_mFFEB3E2BBFC85BA30E39BBC5A6456FFC4FB301CB (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_Multicast(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* currentDelegate = reinterpret_cast<OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenInst(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, method);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenStatic(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, method);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenVirtual(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenInterface(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenGenericVirtual(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker0::Invoke(method, ___0_webView);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenGenericInterface(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_webView);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate__ctor_mA27D173B831A28688F196ECA10F12D6E81B5B939 (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnWebContentProcessTerminatedDelegate_BeginInvoke_mF994304DB853D86C10EA7D551585A3B4A0B76BDA (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_webView;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_EndInvoke_m8B480BC4128E5C4FB86498369A86CF6EA12DCBA8 (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_Multicast(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* currentDelegate = reinterpret_cast<FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_remoteUrl, ___2_fileName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenInst(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_remoteUrl, ___2_fileName, method);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenStatic(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_remoteUrl, ___2_fileName, method);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenVirtual(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_remoteUrl, ___2_fileName);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenInterface(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_remoteUrl, ___2_fileName);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenGenericVirtual(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker2< String_t*, String_t* >::Invoke(method, ___0_webView, ___1_remoteUrl, ___2_fileName);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenGenericInterface(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(method, ___0_webView, ___1_remoteUrl, ___2_fileName);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadStarted__ctor_mF2020AC146E3F5F89B3A2F7AD597FFBB53836FB9 (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964 (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_remoteUrl, ___2_fileName, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDownloadStarted_BeginInvoke_mE281D28A91F0EAB2C206346217FE1F0A6749108A (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = ___1_remoteUrl;
	__d_args[2] = ___2_fileName;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadStarted_EndInvoke_m3E4016F261503436B5CDE6BBC066013CF68CF74E (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_Multicast(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* currentDelegate = reinterpret_cast<FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenInst(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath, method);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenStatic(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath, method);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenVirtual(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker3< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenInterface(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker3< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenGenericVirtual(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker3< int32_t, String_t*, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenGenericInterface(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker3< int32_t, String_t*, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadFinished__ctor_mFC492554E0EC9074A1BDB2B68F71EB7ED23D9F7A (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22 (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDownloadFinished_BeginInvoke_mA11F8B48285120882F8F68B2EF6B4D9DE1E53144 (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_errorCode);
	__d_args[2] = ___2_remoteUrl;
	__d_args[3] = ___3_diskPath;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadFinished_EndInvoke_mF03DE1AF71503573ACE3AE7AC8730E6C98FC6783 (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_Multicast(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* currentDelegate = reinterpret_cast<CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_errorCode, ___2_diskPath, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenInst(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_errorCode, ___2_diskPath, method);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenStatic(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_errorCode, ___2_diskPath, method);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenVirtual(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_errorCode, ___2_diskPath);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenInterface(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_errorCode, ___2_diskPath);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenGenericVirtual(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_diskPath);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenGenericInterface(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_diskPath);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureSnapshotFinished__ctor_m21446E832DBD5AA428A8BCA5E28AF1E71E37542F (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_errorCode, ___2_diskPath, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CaptureSnapshotFinished_BeginInvoke_m73534D46C3A12E9F44CAA3999520372A88509F44 (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_errorCode);
	__d_args[2] = ___2_diskPath;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureSnapshotFinished_EndInvoke_m37620C3935CEDC0224C5B5EE6C6565C6EA83B86D (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_Multicast(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* currentDelegate = reinterpret_cast<MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenInst(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_multipleWindowId, method);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenStatic(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_multipleWindowId, method);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenVirtual(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenInterface(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenGenericVirtual(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenGenericInterface(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_multipleWindowId);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate__ctor_m1F985EA7A625DF73ECBE80DD8109936845FAD24D (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998 (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultipleWindowOpenedDelegate_BeginInvoke_m41787CD15D05E6535751E4E23F50FB36CEEF7DCC (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = ___1_multipleWindowId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate_EndInvoke_m79285A5A88211CF011B0667C2E9C70989511A703 (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_Multicast(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* currentDelegate = reinterpret_cast<MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenInst(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_multipleWindowId, method);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenStatic(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_multipleWindowId, method);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenVirtual(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenInterface(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenGenericVirtual(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenGenericInterface(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_multipleWindowId);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate__ctor_mA49BF2208D4994577339806017B19FF4392575DE (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultipleWindowClosedDelegate_BeginInvoke_m3ABC27AED0AD0E577C38651E5A38D982A64D8809 (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = ___1_multipleWindowId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate_EndInvoke_m81C6A4D48C57F94E151E10AA0DBDA44F6FA19592 (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_Multicast(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* currentDelegate = reinterpret_cast<KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_webView, ___1_keyCode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenInst(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_keyCode, method);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenStatic(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_webView, ___1_keyCode, method);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenVirtual(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_keyCode);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenInterface(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_keyCode);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenGenericVirtual(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< int32_t >::Invoke(method, ___0_webView, ___1_keyCode);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenGenericInterface(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< int32_t >::Invoke(method, ___0_webView, ___1_keyCode);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate__ctor_m5A079C08977B382522F40C6F8898322FC4F0FCF2 (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_keyCode, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyCodeReceivedDelegate_BeginInvoke_mD0267EC46BCCF88246C969F00733865903015872 (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_keyCode);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate_EndInvoke_mB4CDE92ABD245E8414EC80E541F85A9D88FC81FD (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass153_0__ctor_m97B6BA468B989C60C0762633CA6914C0D2D81E99 (U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass153_0_U3CGetHTMLContentU3Eb__0_m889FD5EB3BE1B8A2F3E8ABCFC8FBD67BA09BF752 (U3CU3Ec__DisplayClass153_0_t8E7E742CB6131F24C93E3B8033C723E430B6D9D4* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___handler;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___handler;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_2 = ___0_payload;
		NullCheck(L_2);
		String_t* L_3 = L_2->___data;
		NullCheck(L_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_1, L_3, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewHelper_StreamingAssetURLForPath_m229ED82D5FE5E89B0DA610821BFAE5CFF1CDB67B (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_0, NULL);
		String_t* L_2 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewHelper_PersistentDataURLForPath_m1FEBFED174D8CB73E4820B70D2832BFBD87F96B5 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_0, NULL);
		String_t* L_2 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7 (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewHelper__ctor_mE92A9263846DF36C8C0D8F77433CF9E6FC911012 (UniWebViewHelper_t166BB0D31B84038617C0DE07E9B52815998DD115* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UniWebViewLogger_get_LogLevel_mDD6D8292FDF564448574978C418BD4A1D042A761 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___level;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_set_LogLevel_m263685CB89CE311475E708B4FF5B551ECE529BDE (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_tAE06E24FCDD418667688DA0099DC5625E38EABA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54293F2D54AE4537D84592735A6CFC7A384FEBA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(Level_tAE06E24FCDD418667688DA0099DC5625E38EABA0_il2cpp_TypeInfo_var, (&___0_value));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral54293F2D54AE4537D84592735A6CFC7A384FEBA1, L_1, NULL);
		UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F(__this, ((int32_t)99), L_2, NULL);
		int32_t L_3 = ___0_value;
		__this->___level = L_3;
		int32_t L_4 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetLogLevel_m9FAEEBF3B0D6D4137561DC7534102FF942FD9503(L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger__ctor_m34471A32804D2FA24C75F47FE2928C4D502592D8 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, int32_t ___0_level, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_level;
		__this->___level = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0 = ((UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var))->___instance;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1 = (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B*)il2cpp_codegen_object_new(UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var);
		UniWebViewLogger__ctor_m34471A32804D2FA24C75F47FE2928C4D502592D8(L_1, ((int32_t)80), NULL);
		((UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var))->___instance = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var))->___instance), (void*)L_1);
	}

IL_0013:
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_2 = ((UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var))->___instance;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Verbose_m7477D7643820B23D6659CDE47B49B70A167BF376 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F(__this, 0, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Debug_m0ACF6E31D335F25643AE2813F4447C0E18DE87FB (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F(__this, ((int32_t)10), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F(__this, ((int32_t)20), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F(__this, ((int32_t)80), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8D6B5E5D1A349370529FE8E7793F6F40FEB98F6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___0_level;
		int32_t L_1;
		L_1 = UniWebViewLogger_get_LogLevel_mDD6D8292FDF564448574978C418BD4A1D042A761_inline(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = ___1_message;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF8D6B5E5D1A349370529FE8E7793F6F40FEB98F6, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = ___0_level;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		return;
	}

IL_0021:
	{
		String_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0027:
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
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_pinvoke(const UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3& unmarshaled, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_pinvoke_back(const UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_pinvoke& marshaled, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3& unmarshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_pinvoke_cleanup(UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_com(const UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3& unmarshaled, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_com& marshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_com_back(const UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_com& marshaled, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3& unmarshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_com_cleanup(UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_RawMessage_mA50E0A27C5843A01C66D5E21860E9A2ACB8BC73F (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRawMessageU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* UniWebViewMessage_get_RawMessage_mA50E0A27C5843A01C66D5E21860E9A2ACB8BC73F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UniWebViewMessage_get_RawMessage_mA50E0A27C5843A01C66D5E21860E9A2ACB8BC73F_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRawMessageU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawMessageU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSchemeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSchemeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSchemeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Path_m35505E576E5D9CFC542FA04B063A3D90EE2ADEB9 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPathU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* UniWebViewMessage_get_Path_m35505E576E5D9CFC542FA04B063A3D90EE2ADEB9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UniWebViewMessage_get_Path_m35505E576E5D9CFC542FA04B063A3D90EE2ADEB9_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPathU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CArgsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* _returnValue;
	_returnValue = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->___U3CArgsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgsU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A_AdjustorThunk (RuntimeObject* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage__ctor_mB7BC54EAE6F2C87CAD0C7E4C06B3B322039E4F31 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_rawMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral061A8010D4205A1D21073716210E2F8428BD5E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B49369FB3D81533ACCE4CC50C7A93DE8EE95FBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral518BD63F7EC12F584B7692F39A21657A70FB44CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64F055D7E61FBC80ABEE468986D2A24466198A9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C18CF1B37B49917E6D8058AC143814D191A0E21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8958CD955E48DB95A49B82386149ED32A9DD59B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		il2cpp_codegen_initobj(__this, sizeof(UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3));
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_rawMessage;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral518BD63F7EC12F584B7692F39A21657A70FB44CA, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Debug_m0ACF6E31D335F25643AE2813F4447C0E18DE87FB(L_0, L_2, NULL);
		String_t* L_3 = ___0_rawMessage;
		UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4_inline(__this, L_3, NULL);
		String_t* L_4 = ___0_rawMessage;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_4, L_6, 0, NULL);
		V_0 = L_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		NullCheck(L_8);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_9 = ___0_rawMessage;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157);
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_9, L_11, 0, NULL);
		V_0 = L_12;
	}

IL_0055:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
		NullCheck(L_13);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_14 = ___0_rawMessage;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17;
		L_17 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_14, L_16, 0, NULL);
		V_0 = L_17;
	}

IL_0071:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))) < ((int32_t)2)))
		{
			goto IL_01e9;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991_inline(__this, L_21, NULL);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_22;
		L_22 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_23;
		L_23 = UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D_inline(__this, NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral64F055D7E61FBC80ABEE468986D2A24466198A9D, L_23, NULL);
		NullCheck(L_22);
		UniWebViewLogger_Debug_m0ACF6E31D335F25643AE2813F4447C0E18DE87FB(L_22, L_24, NULL);
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = 1;
		goto IL_00b5;
	}

IL_00a7:
	{
		String_t* L_25 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_0;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		String_t* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_25, L_29, NULL);
		V_1 = L_30;
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00b5:
	{
		int32_t L_32 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_0;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_00a7;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_34;
		L_34 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_35 = V_1;
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral061A8010D4205A1D21073716210E2F8428BD5E14, L_35, NULL);
		NullCheck(L_34);
		UniWebViewLogger_Verbose_m7477D7643820B23D6659CDE47B49B70A167BF376(L_34, L_36, NULL);
		String_t* L_37 = V_1;
		NullCheck(_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		Il2CppChar L_38;
		L_38 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, 0, NULL);
		NullCheck(L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_37, L_38, 0, NULL);
		V_3 = L_39;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = V_3;
		NullCheck(L_40);
		int32_t L_41 = 0;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		String_t* L_43;
		L_43 = String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8(L_42, ((int32_t)47), NULL);
		String_t* L_44;
		L_44 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_43, NULL);
		UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6_inline(__this, L_44, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_45 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_45, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A_inline(__this, L_45, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = V_3;
		NullCheck(L_46);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))) <= ((int32_t)1)))
		{
			goto IL_01fe;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_3;
		NullCheck(L_47);
		int32_t L_48 = 1;
		String_t* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		Il2CppChar L_50;
		L_50 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, 0, NULL);
		NullCheck(L_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51;
		L_51 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_49, L_50, 0, NULL);
		V_4 = L_51;
		V_5 = 0;
		goto IL_01dd;
	}

IL_012a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_4;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		String_t* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		Il2CppChar L_56;
		L_56 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, 0, NULL);
		NullCheck(L_55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57;
		L_57 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_55, L_56, 0, NULL);
		V_6 = L_57;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = V_6;
		NullCheck(L_58);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))) <= ((int32_t)1)))
		{
			goto IL_01d7;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = V_6;
		NullCheck(L_59);
		int32_t L_60 = 0;
		String_t* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		String_t* L_62;
		L_62 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_61, NULL);
		V_7 = L_62;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_63;
		L_63 = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(__this, NULL);
		String_t* L_64 = V_7;
		NullCheck(L_63);
		bool L_65;
		L_65 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_63, L_64, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_65)
		{
			goto IL_0199;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_66;
		L_66 = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(__this, NULL);
		String_t* L_67 = V_7;
		NullCheck(L_66);
		String_t* L_68;
		L_68 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_66, L_67, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		V_8 = L_68;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_69;
		L_69 = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(__this, NULL);
		String_t* L_70 = V_7;
		String_t* L_71 = V_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = V_6;
		NullCheck(L_72);
		int32_t L_73 = 1;
		String_t* L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		String_t* L_75;
		L_75 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_74, NULL);
		String_t* L_76;
		L_76 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_71, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_75, NULL);
		NullCheck(L_69);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_69, L_70, L_76, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		goto IL_01af;
	}

IL_0199:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_77;
		L_77 = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(__this, NULL);
		String_t* L_78 = V_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = V_6;
		NullCheck(L_79);
		int32_t L_80 = 1;
		String_t* L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		String_t* L_82;
		L_82 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_81, NULL);
		NullCheck(L_77);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_77, L_78, L_82, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_01af:
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_83;
		L_83 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_84 = V_7;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_85;
		L_85 = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(__this, NULL);
		String_t* L_86 = V_7;
		NullCheck(L_85);
		String_t* L_87;
		L_87 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_85, L_86, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		String_t* L_88;
		L_88 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral7C18CF1B37B49917E6D8058AC143814D191A0E21, L_84, _stringLiteralC8958CD955E48DB95A49B82386149ED32A9DD59B, L_87, NULL);
		NullCheck(L_83);
		UniWebViewLogger_Debug_m0ACF6E31D335F25643AE2813F4447C0E18DE87FB(L_83, L_88, NULL);
	}

IL_01d7:
	{
		int32_t L_89 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01dd:
	{
		int32_t L_90 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = V_4;
		NullCheck(L_91);
		if ((((int32_t)L_90) < ((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length)))))
		{
			goto IL_012a;
		}
	}
	{
		return;
	}

IL_01e9:
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_92;
		L_92 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_93 = ___0_rawMessage;
		String_t* L_94;
		L_94 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B49369FB3D81533ACCE4CC50C7A93DE8EE95FBB, L_93, NULL);
		NullCheck(L_92);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_92, L_94, NULL);
	}

IL_01fe:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage__ctor_mB7BC54EAE6F2C87CAD0C7E4C06B3B322039E4F31_AdjustorThunk (RuntimeObject* __this, String_t* ___0_rawMessage, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	UniWebViewMessage__ctor_mB7BC54EAE6F2C87CAD0C7E4C06B3B322039E4F31(_thisAdjusted, ___0_rawMessage, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddListener_mDA0D252CE6ADD3BD00D4279503333839A32C4646 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m35248FA6DA553D6A8082C9318F63F98D23FB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* L_0 = ((UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var))->___listeners;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_1 = ___0_target;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_1, NULL);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_3 = ___0_target;
		NullCheck(L_0);
		Dictionary_2_Add_m35248FA6DA553D6A8082C9318F63F98D23FB89AF(L_0, L_2, L_3, Dictionary_2_Add_m35248FA6DA553D6A8082C9318F63F98D23FB89AF_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_RemoveListener_m6349FABAC78F87FD6AE5DAEDD1945F03F7221713 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m39B09CBAD5D2D9156D29277D0788191D6C2AF198_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* L_0 = ((UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var))->___listeners;
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_m39B09CBAD5D2D9156D29277D0788191D6C2AF198(L_0, L_1, Dictionary_2_Remove_m39B09CBAD5D2D9156D29277D0788191D6C2AF198_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* UniWebViewNativeListener_GetListener_m39275F3A5DE6212AE442AA579034C7F4169674D5 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8BFB0BB6D03FE0A2EA06E89719B4DD3C981125CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* V_0 = NULL;
	{
		V_0 = (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423*)NULL;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* L_0 = ((UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var))->___listeners;
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m8BFB0BB6D03FE0A2EA06E89719B4DD3C981125CC(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m8BFB0BB6D03FE0A2EA06E89719B4DD3C981125CC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_3 = V_0;
		return L_3;
	}

IL_0013:
	{
		return (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageStarted_m11F7F5E75CBDAC8538AB1090C0890D2640080240 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA82D23700F6B0488E16EC900CE9C012B8B8D5EF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_url;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA82D23700F6B0488E16EC900CE9C012B8B8D5EF5, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView;
		String_t* L_4 = ___0_url;
		NullCheck(L_3);
		UniWebView_InternalOnPageStarted_mCC7F59BDFB3D6DCE5BB86478DA91B1C47765D9AE(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageFinished_m8329BE83B6D2D45A61785DB1E04D5DA7A51367E7 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCC81426293B91F35B234307120A0683A8E8468A);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCCC81426293B91F35B234307120A0683A8E8468A, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnPageFinished_mC5C2526387EBD9A3C91AA5A7FBEA43578ECC616A(L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageErrorReceived_m4C6931CEA51048A72892DC6A471B7E1D83921999 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6BB3661E0B8AF7D91E3EB869BE4036AE1C39321);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD6BB3661E0B8AF7D91E3EB869BE4036AE1C39321, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnPageErrorReceived_mF2FD6E5D4B839AC9CDB00497C9C07BC5672DAACF(L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageProgressChanged_m4D70E0077FA782F0BFA6DD3B566DEA8F6853CA03 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___0_result;
		bool L_1;
		L_1 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_2 = __this->___webView;
		float L_3 = V_0;
		NullCheck(L_2);
		UniWebView_InternalOnPageProgressChanged_m315FCE400C99F88020084AD9EE72C97B29B5370C(L_2, L_3, NULL);
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_ShowTransitionFinished_m68539822FEC02CC0EA73483E19BBDD764A370292 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_identifer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral304D400932589AB6698AC3233B263A5EF8C1BE0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_identifer;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral304D400932589AB6698AC3233B263A5EF8C1BE0A, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView;
		String_t* L_4 = ___0_identifer;
		NullCheck(L_3);
		UniWebView_InternalOnShowTransitionFinished_m43B0D8548BC33F30B809AAE5ACCC6451658B740B(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_HideTransitionFinished_m3C02B673176C9442278346DD3A6F098EED2EEFD6 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_identifer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BDBF19BEE52D0F6D468D06193E3655A9A4DF9F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_identifer;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3BDBF19BEE52D0F6D468D06193E3655A9A4DF9F5, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView;
		String_t* L_4 = ___0_identifer;
		NullCheck(L_3);
		UniWebView_InternalOnHideTransitionFinished_m0384C70ED27CF10A11297B4D8D3A71A7076E92D8(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AnimateToFinished_mBC750BF1D399DA39EF07AAF3DAD23087CB3052E5 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_identifer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E2CDB796AC0AE13882E39A6F26B9DF2B27D6A30);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_identifer;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7E2CDB796AC0AE13882E39A6F26B9DF2B27D6A30, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView;
		String_t* L_4 = ___0_identifer;
		NullCheck(L_3);
		UniWebView_InternalOnAnimateToFinished_m5FCE7F89EDEAAE8673ECBF8BC0E5BF7CCE2B9632(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddJavaScriptFinished_m5EDB2431BEB92563394D1CC0890601670C53C17E (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0D5E7C91F6A2B19CACBDBA3D85F48CDC24A51E8);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB0D5E7C91F6A2B19CACBDBA3D85F48CDC24A51E8, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnAddJavaScriptFinished_m1D42374A36244250F2F6124A0C819B33C5684378(L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_EvalJavaScriptFinished_m4B1F127A23161172F087CAB993AC024F2DA55EBE (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EBDA72250283979F1A464C506665274601F2A0C);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4EBDA72250283979F1A464C506665274601F2A0C, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnEvalJavaScriptFinished_mF80A34BC2BD3F5063BE79C98245CF7D397C7A3E7(L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_MessageReceived_m831A2CDEDFA23CDC76A417F6C284D4CADAF851A2 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B7D33323BA93D25E3749ABC98725558724ACFB3);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7B7D33323BA93D25E3749ABC98725558724ACFB3, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView;
		String_t* L_4 = ___0_result;
		NullCheck(L_3);
		UniWebView_InternalOnMessageReceived_m6BA779B133E0858266E4C25E5935FE4D78918356(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_WebViewDone_mCF725C4049CD090E6CE506C3E318FED4354FEF3E (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF67CAF3681E05C484A06FDBC22B44C14E1963A);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, _stringLiteral7EF67CAF3681E05C484A06FDBC22B44C14E1963A, NULL);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_1 = __this->___webView;
		NullCheck(L_1);
		UniWebView_InternalOnShouldClose_m288E6C12B6CBB95922E6F700061E148F2658FBC9(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_WebContentProcessDidTerminate_mEC3AFBE42BD02ED57C3F3D0E68473DE462A6B6F3 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6531E410A254E705B3486A18962DF55BBAA92F7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, _stringLiteral6531E410A254E705B3486A18962DF55BBAA92F7F, NULL);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_1 = __this->___webView;
		NullCheck(L_1);
		UniWebView_InternalOnWebContentProcessDidTerminate_mDDD3AEF0EC6AD327ACA6B8E9BCD71B6EB73DADDE(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_SafeBrowsingFinished_m41907D144429C9D4D4B53CF862EBB98384630541 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A2B081AE1D8E7C26E7F45F730E331D5BE655471);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, _stringLiteral1A2B081AE1D8E7C26E7F45F730E331D5BE655471, NULL);
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_1 = __this->___safeBrowsing;
		NullCheck(L_1);
		UniWebViewSafeBrowsing_InternalSafeBrowsingFinished_mE666E18A32CA3A020190C9A9738221344796977B(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_MultipleWindowOpened_mD4AD7633A634D6E99AF2C037A6897D0EA7A5E881 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF86D7EC622B6AE932581F530BC9EAE6B3A4BEAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_param;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAF86D7EC622B6AE932581F530BC9EAE6B3A4BEAF, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView;
		String_t* L_4 = ___0_param;
		NullCheck(L_3);
		UniWebView_InternalOnMultipleWindowOpened_m511D2F03883B77233CDF1975E80DA01531E52C05(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_MultipleWindowClosed_m1DECF2DA7A06B4B0367AE4CA4361F78A9E354046 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52F373B73A2B66DC4990D649FA0DA946AB9A6A10);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_param;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral52F373B73A2B66DC4990D649FA0DA946AB9A6A10, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView;
		String_t* L_4 = ___0_param;
		NullCheck(L_3);
		UniWebView_InternalOnMultipleWindowClosed_m1B0A5F7048AC06C683C48C1232B840454F39C028(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_FileDownloadStarted_m2BC237CB837819B5EEE2E0A6F26738B8726B3D3D (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201BBE82FF73DFCCE02EF3047E980480E054DF3A);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral201BBE82FF73DFCCE02EF3047E980480E054DF3A, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnFileDownloadStarted_mF8149818A85DB5C0448A0DF32B3626F0D00A8378(L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_FileDownloadFinished_m03BE5E0D39927DF5D153420FEC8386560020BF38 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD266A18472019B973EDB918EFBE306F0D0D9413C);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD266A18472019B973EDB918EFBE306F0D0D9413C, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnFileDownloadFinished_mBFE7FC899642D5F12106559319E0E35DC944EB8A(L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_CaptureSnapshotFinished_m427172C38BD3132FD44BC324D9B4C0618DB96E08 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DD62E04D9C08A1A20E499E6C090334BDCBB140A);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3DD62E04D9C08A1A20E499E6C090334BDCBB140A, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnCaptureSnapshotFinished_mE3338681266888F771F1A9C89F43F831C325690E(L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener__ctor_m3262259BA11873A336B0A575008DD24952005468 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener__cctor_mF7BA2C9D0ABFE719B894C97BF67CD5F78E4DB67A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5882C0F77F264EC25EF9EBBFD8360E84A079C50E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* L_0 = (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE*)il2cpp_codegen_object_new(Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5882C0F77F264EC25EF9EBBFD8360E84A079C50E(L_0, Dictionary_2__ctor_m5882C0F77F264EC25EF9EBBFD8360E84A079C50E_RuntimeMethod_var);
		((UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var))->___listeners = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var))->___listeners), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeResultPayload__ctor_m376159F6A83E6F4D512C683F23FE3963CCE28A07 (UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowingComponent_Start_m645CAED48CF368D847947021DA96E8721E277FA7 (UniWebViewSafeBrowingComponent_t167EE3B984ADED602FD561B25B927F13C743FDC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83A925538F3CF2C8C3F376EE41897EBDE39B11A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___url;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA83A925538F3CF2C8C3F376EE41897EBDE39B11A, NULL);
		return;
	}

IL_0018:
	{
		String_t* L_2 = __this->___url;
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_3;
		L_3 = UniWebViewSafeBrowsing_Create_mC444524EA64AC27D905C841A0BBE81BF55B25794(L_2, NULL);
		NullCheck(L_3);
		UniWebViewSafeBrowsing_Show_m7FC6AEC9841DC9F4F425ECFAF34472CF75FA337D(L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowingComponent__ctor_m66A091D86F01159C8B1663937BA9E258BCD5DCF7 (UniWebViewSafeBrowingComponent_t167EE3B984ADED602FD561B25B927F13C743FDC4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_add_OnSafeBrowsingFinished_m2B1523726E5DAB12FEBEB70BE15FB1C84FD38009 (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_0 = NULL;
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_1 = NULL;
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_2 = NULL;
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_0 = __this->___OnSafeBrowsingFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_1 = V_0;
		V_1 = L_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_2 = V_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)CastclassSealed((RuntimeObject*)L_4, OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296_il2cpp_TypeInfo_var));
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296** L_5 = (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296**)(&__this->___OnSafeBrowsingFinished);
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_6 = V_2;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_7 = V_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_9 = V_0;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)L_9) == ((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_remove_OnSafeBrowsingFinished_mA42ADDB0A90572B96F72A41D9AD11C22D9D4C0C7 (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_0 = NULL;
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_1 = NULL;
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_2 = NULL;
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_0 = __this->___OnSafeBrowsingFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_1 = V_0;
		V_1 = L_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_2 = V_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)CastclassSealed((RuntimeObject*)L_4, OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296_il2cpp_TypeInfo_var));
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296** L_5 = (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296**)(&__this->___OnSafeBrowsingFinished);
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_6 = V_2;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_7 = V_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_9 = V_0;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)L_9) == ((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewSafeBrowsing_get_IsSafeBrowsingSupported_mDA309DDBE04C13BF0F2F6B063D97F0E22D59D340 (const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* UniWebViewSafeBrowsing_Create_mC444524EA64AC27D905C841A0BBE81BF55B25794 (String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* V_0 = NULL;
	{
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_0 = (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*)il2cpp_codegen_object_new(UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4_il2cpp_TypeInfo_var);
		UniWebViewSafeBrowsing__ctor_m11815A3213110A74C5F32C3F740E6547DAD8BD9F(L_0, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7(NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_2 = V_0;
		NullCheck(L_2);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_3 = L_2->___listener;
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_4 = V_0;
		NullCheck(L_3);
		L_3->___safeBrowsing = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___safeBrowsing), (void*)L_4);
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_5 = V_0;
		String_t* L_6 = ___0_url;
		NullCheck(L_5);
		UniWebViewSafeBrowsing_Init_mE99E67B592AF74177A542B69CC2D9A9934D46B9A(L_5, L_6, NULL);
	}

IL_0020:
	{
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_7 = V_0;
		String_t* L_8 = ___0_url;
		NullCheck(L_7);
		L_7->___url = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___url), (void*)L_8);
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Show_m7FC6AEC9841DC9F4F425ECFAF34472CF75FA337D (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BC91583D7BA76EDFB67CAA1B4AD0D98281BA389);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = UniWebViewSafeBrowsing_get_IsSafeBrowsingSupported_mDA309DDBE04C13BF0F2F6B063D97F0E22D59D340(NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_1 = __this->___listener;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingShow_mBCFB1C5840DA42F58DEE56AC65392B04CE905E56(L_2, NULL);
		return;
	}

IL_0018:
	{
		bool L_3;
		L_3 = UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7(NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_4, _stringLiteral1BC91583D7BA76EDFB67CAA1B4AD0D98281BA389, NULL);
	}

IL_002e:
	{
		String_t* L_5 = __this->___url;
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Dismiss_m3D1E6F0AB2F11BAA30EB5BE4209CA43353CAD018 (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingDismiss_m50C39E9C76874EBDA8CBEF9F90D7115C052EE3DA(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_SetToolbarColor_m315F17283C9B61F7A8B48F838758596C40BF8F79 (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7(NULL);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_1 = __this->___listener;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_color;
		float L_4 = L_3.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_color;
		float L_6 = L_5.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___0_color;
		float L_8 = L_7.___b;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingSetToolbarColor_m1DCFD167C3FBF30C3ACD3DB46051CDCB157A43CD(L_2, L_4, L_6, L_8, NULL);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_SetToolbarItemColor_m95A80A9E40C39ACEB7554644E5BEF5055840FAEF (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_color;
		float L_3 = L_2.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_color;
		float L_5 = L_4.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_color;
		float L_7 = L_6.___b;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingSetToolbarItemColor_mC91313F910935D21A144F9561163F2B8411991A5(L_1, L_3, L_5, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing__ctor_m11815A3213110A74C5F32C3F740E6547DAD8BD9F (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->___id = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		bool L_2;
		L_2 = UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7(NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = __this->___id;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, L_3, NULL);
		V_1 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		NullCheck(L_5);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_6;
		L_6 = GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D(L_5, GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D_RuntimeMethod_var);
		__this->___listener = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listener), (void*)L_6);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_7 = __this->___listener;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_AddListener_mDA0D252CE6ADD3BD00D4279503333839A32C4646(L_7, NULL);
	}

IL_0049:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Init_mE99E67B592AF74177A542B69CC2D9A9934D46B9A (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_url;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingInit_mC6A1F7DE80C89CF98041AC77AD9F9692EB9789B6(L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_InternalSafeBrowsingFinished_mE666E18A32CA3A020190C9A9738221344796977B (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_0 = __this->___OnSafeBrowsingFinished;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_1 = __this->___OnSafeBrowsingFinished;
		NullCheck(L_1);
		OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_inline(L_1, __this, NULL);
	}

IL_0014:
	{
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_RemoveListener_m6349FABAC78F87FD6AE5DAEDD1945F03F7221713(L_3, NULL);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_4 = __this->___listener;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
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
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_Multicast(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* currentDelegate = reinterpret_cast<OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_browsing, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenInst(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	typedef void (*FunctionPointerType) (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_browsing, method);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenStatic(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_browsing, method);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenVirtual(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_browsing);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenInterface(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_browsing);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenGenericVirtual(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	GenericVirtualActionInvoker0::Invoke(method, ___0_browsing);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenGenericInterface(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_browsing);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate__ctor_m5004997A03E045519011AE41B6F6B2A771A7D532 (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5 (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_browsing, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSafeBrowsingFinishedDelegate_BeginInvoke_m100A97ACF7A17AB75B2B3B31FD51C48047370204 (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_browsing;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate_EndInvoke_m9D574CCABAB5DFF795F7203C0EBF3897B573A861 (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m98FE715B9B61E6A750254D291131AA7AEA83854E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7AFF6C6BCBEF4BEA08BAD0C2FFE8CB5CDCB42A71____73A4FC827D999184BC5423C931D2FB9164868309AB289B8843D00F8C34ABE98B_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7AFF6C6BCBEF4BEA08BAD0C2FFE8CB5CDCB42A71____AE5949BD027B32810363F370DA2D14B792CED012B48113E2A9085DC3ABDA0D2B_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)520));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7AFF6C6BCBEF4BEA08BAD0C2FFE8CB5CDCB42A71____AE5949BD027B32810363F370DA2D14B792CED012B48113E2A9085DC3ABDA0D2B_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)274));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7AFF6C6BCBEF4BEA08BAD0C2FFE8CB5CDCB42A71____73A4FC827D999184BC5423C931D2FB9164868309AB289B8843D00F8C34ABE98B_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)9);
		(&V_0)->___TotalTypes = ((int32_t)10);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mCA46E2F8951C06B451AD377F58BC19DD998C44B4 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tCEA8E78AB99C21AA428B193F5E2D1EDFC2DB1302* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshal_pinvoke(const MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F& unmarshaled, MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshal_pinvoke_back(const MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshaled_pinvoke& marshaled, MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshal_pinvoke_cleanup(MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshal_com(const MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F& unmarshaled, MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshal_com_back(const MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshaled_com& marshaled, MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshal_com_cleanup(MonoScriptData_t26394D6BF162313829CA39B22E3270AB69ECF03F_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_XMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_YMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Width;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Height;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___m_XMin = L_0;
		float L_1 = ___1_y;
		__this->___m_YMin = L_1;
		float L_2 = ___2_width;
		__this->___m_Width = L_2;
		float L_3 = ___3_height;
		__this->___m_Height = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_inline (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_orientation, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_inline (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_statusCode, ___2_url, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_inline (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_url, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_inline (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_errorCode, ___2_errorMessage, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_inline (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_progress, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_inline (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_message, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_inline (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_inline (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_inline (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_inline (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_inline (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_remoteUrl, ___2_fileName, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_inline (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_inline (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_webView, ___1_errorCode, ___2_diskPath, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniWebViewLogger_get_LogLevel_mDD6D8292FDF564448574978C418BD4A1D042A761_inline (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___level;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_RawMessage_mA50E0A27C5843A01C66D5E21860E9A2ACB8BC73F_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRawMessageU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRawMessageU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawMessageU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSchemeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSchemeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSchemeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Path_m35505E576E5D9CFC542FA04B063A3D90EE2ADEB9_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPathU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPathU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CArgsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->___U3CArgsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgsU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_inline (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_browsing, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
