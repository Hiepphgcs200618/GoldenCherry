#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.InputSystem.PlayerInput>
struct Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>
struct Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>
struct Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932;
// System.Action`1<UnityEngine.InputSystem.PlayerInput>[]
struct Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>[]
struct Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>[]
struct Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>[]
struct Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// UnityEngine.InputSystem.Users.InputUser[]
struct InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection[]
struct OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8;
// UnityEngine.InputSystem.Users.InputUser/UserData[]
struct UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E;
// UnityEngine.InputSystem.PlayerInput/ActionEvent[]
struct ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// Acid
struct Acid_t27E874BDDBDB90064E95982B37181DEE3D822342;
// AnimationController
struct AnimationController_t3FB186F57A51155F3AA9120B20218243E11220C9;
// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174;
// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Banana
struct Banana_tC1A01B1622AE167C04DC997513F8D30FA8D1EE2B;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// BasicRigidBodyPush
struct BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// ButtonScript
struct ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// StarterAssets.FirstPersonController
struct FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// FoodRorate
struct FoodRorate_t21C36CD8DC96910BE8C227994D423D4817ECE023;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GlobalScore
struct GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252;
// GlobalTimer
struct GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726;
// GoldenCherry
struct GoldenCherry_t4AA9F50E358512669CA43546E44F78CEA28E4D14;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.UI.InputSystemUIInputModule
struct InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LevelFinishButton
struct LevelFinishButton_t706F2FDCFA789B344BB5C1BE52B8651DDC27C441;
// LevelLoad
struct LevelLoad_t01F90B5D3114F61188048ABE684108A4FB069E07;
// LowPolyWater.LowPolyWater
struct LowPolyWater_t78C6ECF22372C5313BA1937B03DF2113AED7F728;
// MainMenuController
struct MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Melon
struct Melon_tA0A7F1E07024A8705AE18548FF9D1A0308BF2A97;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// MobileDisableAutoSwitchControls
struct MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Ocean
struct Ocean_t802B83C805A66CCE7D2A2D2B927A8CFE531D5FEB;
// Olive
struct Olive_t5784F41BE6C6C099A713C02B5355AB15C3BB09A5;
// PauseGame
struct PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlatformGripper
struct PlatformGripper_t05FDBF0B651F1CA664DD46A266F653F42965BF1C;
// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F;
// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RedirectToLevel
struct RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// RollCredit
struct RollCredit_tE060A94459FE00DBD6BE3D552AB720101451614F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// SkyRotate
struct SkyRotate_t36D70D1B58732415ED35D7C9D3747E1DC9C6B089;
// SplashToMenu
struct SplashToMenu_t2F63243CBD1887689A3EF74E18BC24036F624205;
// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ThanksScene
struct ThanksScene_t808D69210E37A71C26C52CEBE9A9D0E8AE1A4D1C;
// StarterAssets.ThirdPersonController
struct ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F;
// UIVirtualButton
struct UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5;
// UIVirtualJoystick
struct UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16;
// UIVirtualTouchZone
struct UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Unsafe_Ground
struct Unsafe_Ground_tB3CE2542B447BBB9FA5105477AE572C0AF9A123E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameManager/<DeathSequene>d__20
struct U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655;
// GameManager/<IComplete>d__21
struct U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406;
// GlobalTimer/<AddSecond>d__8
struct U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E;
// LevelLoad/<FadeIn>d__2
struct U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent
struct ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48;
// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent
struct DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4;
// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent
struct DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// RollCredit/<Credit>d__2
struct U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020;
// SplashToMenu/<RunSplash>d__2
struct U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37;
// ThanksScene/<Thanks>d__2
struct U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7;
// UIVirtualButton/BoolEvent
struct BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A;
// UIVirtualButton/Event
struct Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8;
// UIVirtualJoystick/Event
struct Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3;
// UIVirtualTouchZone/Event
struct Event_t39EC29014C2EF54751D4079DD636172E90DCE53E;

IL2CPP_EXTERN_C RuntimeClass* GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A6CC6020AB1895196FFFCE31AAD59C23958EDC0;
IL2CPP_EXTERN_C String_t* _stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3;
IL2CPP_EXTERN_C String_t* _stringLiteral163DCC8E458A1FCC2E86F0FD61BE2BCE27195238;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral1CF153F5FEAAE07A3F8502779EE9C7913D639322;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907;
IL2CPP_EXTERN_C String_t* _stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940;
IL2CPP_EXTERN_C String_t* _stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8D22CAC23364D9E15818D1578F26C07BAC7021A1;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteralA44E231599C0D163AA156E583DFC97B2A1E22935;
IL2CPP_EXTERN_C String_t* _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994;
IL2CPP_EXTERN_C String_t* _stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8;
IL2CPP_EXTERN_C String_t* _stringLiteralC488C82ED76F775B7C6E33C6A6A3B46EBD9FE51A;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD997748FA7F769B6075F10242EE99AFDCD89D1A6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE14996CC3CDEF721A6281424002F6F34AE96AC8A;
IL2CPP_EXTERN_C String_t* _stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4;
IL2CPP_EXTERN_C String_t* _stringLiteralF2F8A73F36BC9F8340CA51E5D8320663390E37DC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_mB01D1499477290A7FF8106B2575007F0734458DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAddSecondU3Ed__8_System_Collections_IEnumerator_Reset_mE2F49991D130096622A5A76BC41228E976FA99D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreditU3Ed__2_System_Collections_IEnumerator_Reset_m9120F47D05A04977C6BF1CEE7638098C446BB3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeathSequeneU3Ed__20_System_Collections_IEnumerator_Reset_mE343B2CCA10D80026F53129FC39E0FF8C349299A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInU3Ed__2_System_Collections_IEnumerator_Reset_mEB3637D0D48CB3325EAB37F8615FF04D8E5CD6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CICompleteU3Ed__21_System_Collections_IEnumerator_Reset_m6C24A9EE3C3905F9A6056D43662E5EB5DB8B276D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRunSplashU3Ed__2_System_Collections_IEnumerator_Reset_m662D25A6BECB6E851BF1E1EB521D5701CB704C16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CThanksU3Ed__2_System_Collections_IEnumerator_Reset_m54B430CBB16BC77AF3F2BA7D252AE67BA8E4F1CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GameManager/<DeathSequene>d__20
struct U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655  : public RuntimeObject
{
	// System.Int32 GameManager/<DeathSequene>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<DeathSequene>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<DeathSequene>d__20::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<IComplete>d__21
struct U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406  : public RuntimeObject
{
	// System.Int32 GameManager/<IComplete>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<IComplete>d__21::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<IComplete>d__21::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GlobalTimer/<AddSecond>d__8
struct U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E  : public RuntimeObject
{
	// System.Int32 GlobalTimer/<AddSecond>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GlobalTimer/<AddSecond>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GlobalTimer GlobalTimer/<AddSecond>d__8::<>4__this
	GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726* ___U3CU3E4__this_2;
};

// LevelLoad/<FadeIn>d__2
struct U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57  : public RuntimeObject
{
	// System.Int32 LevelLoad/<FadeIn>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelLoad/<FadeIn>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LevelLoad LevelLoad/<FadeIn>d__2::<>4__this
	LevelLoad_t01F90B5D3114F61188048ABE684108A4FB069E07* ___U3CU3E4__this_2;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// RollCredit/<Credit>d__2
struct U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020  : public RuntimeObject
{
	// System.Int32 RollCredit/<Credit>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RollCredit/<Credit>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RollCredit RollCredit/<Credit>d__2::<>4__this
	RollCredit_tE060A94459FE00DBD6BE3D552AB720101451614F* ___U3CU3E4__this_2;
};

// SplashToMenu/<RunSplash>d__2
struct U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37  : public RuntimeObject
{
	// System.Int32 SplashToMenu/<RunSplash>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SplashToMenu/<RunSplash>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SplashToMenu SplashToMenu/<RunSplash>d__2::<>4__this
	SplashToMenu_t2F63243CBD1887689A3EF74E18BC24036F624205* ___U3CU3E4__this_2;
};

// ThanksScene/<Thanks>d__2
struct U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7  : public RuntimeObject
{
	// System.Int32 ThanksScene/<Thanks>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ThanksScene/<Thanks>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ThanksScene ThanksScene/<Thanks>d__2::<>4__this
	ThanksScene_t808D69210E37A71C26C52CEBE9A9D0E8AE1A4D1C* ___U3CU3E4__this_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6* ___additionalValues_2;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 
{
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::userId
	uint32_t ___userId_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>
struct InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8* ___additionalValues_2;
};

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value_1;
};

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92  : public RuntimeObject
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_pinvoke
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_com
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UIVirtualButton/BoolEvent
struct BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UIVirtualButton/Event
struct Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UIVirtualJoystick/Event
struct Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// UIVirtualTouchZone/Event
struct Event_t39EC29014C2EF54751D4079DD636172E90DCE53E  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174  : public RuntimeObject
{
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 ___m_Context_0;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 
{
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::pairingStateVersion
	int32_t ___pairingStateVersion_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/GlobalState::lastUserId
	uint32_t ___lastUserId_1;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserCount
	int32_t ___allUserCount_2;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDeviceCount
	int32_t ___allPairedDeviceCount_3;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDeviceCount
	int32_t ___allLostDeviceCount_4;
	// UnityEngine.InputSystem.Users.InputUser[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUsers
	InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* ___allUsers_5;
	// UnityEngine.InputSystem.Users.InputUser/UserData[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserData
	UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E* ___allUserData_6;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection> UnityEngine.InputSystem.Users.InputUser/GlobalState::ongoingAccountSelections
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onChange
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onUnpairedDeviceUsed
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onPreFilterUnpairedDeviceUsed
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::actionChangeDelegate
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___actionChangeDelegate_13;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChangeDelegate_14;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventDelegate
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___onEventDelegate_15;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onActionChangeHooked
	bool ___onActionChangeHooked_16;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeHooked
	bool ___onDeviceChangeHooked_17;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventHooked
	bool ___onEventHooked_18;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::listenForUnpairedDeviceActivity
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_pinvoke
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_com
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.Users.InputUser
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E 
{
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser::m_Id
	uint32_t ___m_Id_1;
};

struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E_StaticFields
{
	// UnityEngine.InputSystem.Users.InputUser/GlobalState UnityEngine.InputSystem.Users.InputUser::s_GlobalState
	GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 ___s_GlobalState_2;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
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

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// Acid
struct Acid_t27E874BDDBDB90064E95982B37181DEE3D822342  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AnimationController
struct AnimationController_t3FB186F57A51155F3AA9120B20218243E11220C9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator AnimationController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// UnityEngine.Transform AnimationController::groundCheck
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___groundCheck_5;
	// System.Single AnimationController::groundDistant
	float ___groundDistant_6;
	// UnityEngine.LayerMask AnimationController::groundMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundMask_7;
	// System.Boolean AnimationController::isGrounded
	bool ___isGrounded_8;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Banana
struct Banana_tC1A01B1622AE167C04DC997513F8D30FA8D1EE2B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Banana::collectSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___collectSound_4;
};

// BasicRigidBodyPush
struct BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask BasicRigidBodyPush::pushLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___pushLayers_4;
	// System.Boolean BasicRigidBodyPush::canPush
	bool ___canPush_5;
	// System.Single BasicRigidBodyPush::strength
	float ___strength_6;
};

// ButtonScript
struct ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ButtonScript::pauseMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenu_4;
};

// StarterAssets.FirstPersonController
struct FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single StarterAssets.FirstPersonController::MoveSpeed
	float ___MoveSpeed_4;
	// System.Single StarterAssets.FirstPersonController::SprintSpeed
	float ___SprintSpeed_5;
	// System.Single StarterAssets.FirstPersonController::RotationSpeed
	float ___RotationSpeed_6;
	// System.Single StarterAssets.FirstPersonController::SpeedChangeRate
	float ___SpeedChangeRate_7;
	// System.Single StarterAssets.FirstPersonController::JumpHeight
	float ___JumpHeight_8;
	// System.Single StarterAssets.FirstPersonController::Gravity
	float ___Gravity_9;
	// System.Single StarterAssets.FirstPersonController::JumpTimeout
	float ___JumpTimeout_10;
	// System.Single StarterAssets.FirstPersonController::FallTimeout
	float ___FallTimeout_11;
	// System.Boolean StarterAssets.FirstPersonController::Grounded
	bool ___Grounded_12;
	// System.Single StarterAssets.FirstPersonController::GroundedOffset
	float ___GroundedOffset_13;
	// System.Single StarterAssets.FirstPersonController::GroundedRadius
	float ___GroundedRadius_14;
	// UnityEngine.LayerMask StarterAssets.FirstPersonController::GroundLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___GroundLayers_15;
	// UnityEngine.GameObject StarterAssets.FirstPersonController::CinemachineCameraTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CinemachineCameraTarget_16;
	// System.Single StarterAssets.FirstPersonController::TopClamp
	float ___TopClamp_17;
	// System.Single StarterAssets.FirstPersonController::BottomClamp
	float ___BottomClamp_18;
	// System.Single StarterAssets.FirstPersonController::_cinemachineTargetPitch
	float ____cinemachineTargetPitch_19;
	// System.Single StarterAssets.FirstPersonController::_speed
	float ____speed_20;
	// System.Single StarterAssets.FirstPersonController::_rotationVelocity
	float ____rotationVelocity_21;
	// System.Single StarterAssets.FirstPersonController::_verticalVelocity
	float ____verticalVelocity_22;
	// System.Single StarterAssets.FirstPersonController::_terminalVelocity
	float ____terminalVelocity_23;
	// System.Single StarterAssets.FirstPersonController::_jumpTimeoutDelta
	float ____jumpTimeoutDelta_24;
	// System.Single StarterAssets.FirstPersonController::_fallTimeoutDelta
	float ____fallTimeoutDelta_25;
	// UnityEngine.InputSystem.PlayerInput StarterAssets.FirstPersonController::_playerInput
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ____playerInput_26;
	// UnityEngine.CharacterController StarterAssets.FirstPersonController::_controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____controller_27;
	// StarterAssets.StarterAssetsInputs StarterAssets.FirstPersonController::_input
	StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* ____input_28;
	// UnityEngine.GameObject StarterAssets.FirstPersonController::_mainCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mainCamera_29;
};

// FoodRorate
struct FoodRorate_t21C36CD8DC96910BE8C227994D423D4817ECE023  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FoodRorate::rotateSpeed
	float ___rotateSpeed_4;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform GameManager::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// UnityEngine.Transform GameManager::spawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPoint_5;
	// UnityEngine.AudioSource GameManager::hitGround
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___hitGround_6;
	// UnityEngine.GameObject GameManager::deathBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deathBox_7;
	// UnityEngine.GameObject GameManager::deathMessage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deathMessage_8;
	// UnityEngine.AudioSource GameManager::LevelComplete
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___LevelComplete_9;
	// UnityEngine.GameObject GameManager::backGroundMusic
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___backGroundMusic_10;
	// UnityEngine.GameObject GameManager::globalTime
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___globalTime_11;
	// UnityEngine.GameObject GameManager::time
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___time_12;
	// UnityEngine.GameObject GameManager::score
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___score_13;
	// UnityEngine.GameObject GameManager::line
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___line_14;
	// UnityEngine.GameObject GameManager::totalScore
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___totalScore_15;
	// UnityEngine.GameObject GameManager::playAgain
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playAgain_16;
	// UnityEngine.GameObject GameManager::nextLevel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextLevel_17;
	// System.Int32 GameManager::timeCalc
	int32_t ___timeCalc_18;
};

// GlobalScore
struct GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GlobalScore::scoreBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scoreBox_4;
	// System.Int32 GlobalScore::internalScore
	int32_t ___internalScore_6;
};

struct GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields
{
	// System.Int32 GlobalScore::currentScore
	int32_t ___currentScore_5;
};

// GlobalTimer
struct GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GlobalTimer::timeDisplay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___timeDisplay_4;
	// System.Boolean GlobalTimer::tickingTime
	bool ___tickingTime_5;
};

struct GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields
{
	// System.Int32 GlobalTimer::seconds
	int32_t ___seconds_6;
	// System.Int32 GlobalTimer::minutes
	int32_t ___minutes_7;
	// System.Int32 GlobalTimer::hours
	int32_t ___hours_8;
	// System.Int32 GlobalTimer::extendScore
	int32_t ___extendScore_9;
};

// GoldenCherry
struct GoldenCherry_t4AA9F50E358512669CA43546E44F78CEA28E4D14  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource GoldenCherry::collectSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___collectSound_4;
};

// LevelFinishButton
struct LevelFinishButton_t706F2FDCFA789B344BB5C1BE52B8651DDC27C441  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource LevelFinishButton::buttonPress
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___buttonPress_4;
	// UnityEngine.GameObject LevelFinishButton::pauseMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenu_5;
};

// LevelLoad
struct LevelLoad_t01F90B5D3114F61188048ABE684108A4FB069E07  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LevelLoad::fadeIn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fadeIn_4;
};

// LowPolyWater.LowPolyWater
struct LowPolyWater_t78C6ECF22372C5313BA1937B03DF2113AED7F728  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single LowPolyWater.LowPolyWater::waveHeight
	float ___waveHeight_4;
	// System.Single LowPolyWater.LowPolyWater::waveFrequency
	float ___waveFrequency_5;
	// System.Single LowPolyWater.LowPolyWater::waveLength
	float ___waveLength_6;
	// UnityEngine.Vector3 LowPolyWater.LowPolyWater::waveOriginPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___waveOriginPosition_7;
	// UnityEngine.MeshFilter LowPolyWater.LowPolyWater::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_8;
	// UnityEngine.Mesh LowPolyWater.LowPolyWater::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_9;
	// UnityEngine.Vector3[] LowPolyWater.LowPolyWater::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_10;
};

// MainMenuController
struct MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource MainMenuController::buttonPress
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___buttonPress_4;
};

// Melon
struct Melon_tA0A7F1E07024A8705AE18548FF9D1A0308BF2A97  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Melon::collectSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___collectSound_4;
};

// MobileDisableAutoSwitchControls
struct MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MouseLook::mouseSensitivity
	float ___mouseSensitivity_4;
	// UnityEngine.Transform MouseLook::playerBody
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerBody_5;
	// System.Single MouseLook::xRotattion
	float ___xRotattion_6;
};

// Ocean
struct Ocean_t802B83C805A66CCE7D2A2D2B927A8CFE531D5FEB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Olive
struct Olive_t5784F41BE6C6C099A713C02B5355AB15C3BB09A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Olive::collectSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___collectSound_4;
};

// PauseGame
struct PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PauseGame::pauseMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenu_5;
};

struct PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_StaticFields
{
	// System.Boolean PauseGame::gamePause
	bool ___gamePause_4;
};

// PlatformGripper
struct PlatformGripper_t05FDBF0B651F1CA664DD46A266F653F42965BF1C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::m_Actions
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Actions_7;
	// UnityEngine.InputSystem.PlayerNotifications UnityEngine.InputSystem.PlayerInput::m_NotificationBehavior
	int32_t ___m_NotificationBehavior_8;
	// UnityEngine.InputSystem.UI.InputSystemUIInputModule UnityEngine.InputSystem.PlayerInput::m_UIInputModule
	InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58* ___m_UIInputModule_9;
	// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent UnityEngine.InputSystem.PlayerInput::m_DeviceLostEvent
	DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4* ___m_DeviceLostEvent_10;
	// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedEvent
	DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1* ___m_DeviceRegainedEvent_11;
	// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent UnityEngine.InputSystem.PlayerInput::m_ControlsChangedEvent
	ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48* ___m_ControlsChangedEvent_12;
	// UnityEngine.InputSystem.PlayerInput/ActionEvent[] UnityEngine.InputSystem.PlayerInput::m_ActionEvents
	ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F* ___m_ActionEvents_13;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_NeverAutoSwitchControlSchemes
	bool ___m_NeverAutoSwitchControlSchemes_14;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultControlScheme
	String_t* ___m_DefaultControlScheme_15;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultActionMap
	String_t* ___m_DefaultActionMap_16;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_SplitScreenIndex
	int32_t ___m_SplitScreenIndex_17;
	// UnityEngine.Camera UnityEngine.InputSystem.PlayerInput::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_18;
	// UnityEngine.InputSystem.InputValue UnityEngine.InputSystem.PlayerInput::m_InputValueObject
	InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___m_InputValueObject_19;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.PlayerInput::m_CurrentActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_CurrentActionMap_20;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_PlayerIndex
	int32_t ___m_PlayerIndex_21;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_InputActive
	bool ___m_InputActive_22;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_Enabled
	bool ___m_Enabled_23;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_ActionsInitialized
	bool ___m_ActionsInitialized_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.InputSystem.PlayerInput::m_ActionMessageNames
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_ActionMessageNames_25;
	// UnityEngine.InputSystem.Users.InputUser UnityEngine.InputSystem.PlayerInput::m_InputUser
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ___m_InputUser_26;
	// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredDelegate
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___m_ActionTriggeredDelegate_27;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceLostCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceLostCallbacks_28;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceRegainedCallbacks_29;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_ControlsChangedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_ControlsChangedCallbacks_30;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionTriggeredCallbacks_31;
	// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.PlayerInput::m_UnpairedDeviceUsedDelegate
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___m_UnpairedDeviceUsedDelegate_32;
	// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean> UnityEngine.InputSystem.PlayerInput::m_PreFilterUnpairedDeviceUsedDelegate
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___m_PreFilterUnpairedDeviceUsedDelegate_33;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnUnpairedDeviceUsedHooked
	bool ___m_OnUnpairedDeviceUsedHooked_34;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.PlayerInput::m_DeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___m_DeviceChangeDelegate_35;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnDeviceChangeHooked
	bool ___m_OnDeviceChangeHooked_36;
};

struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_AllActivePlayersCount
	int32_t ___s_AllActivePlayersCount_37;
	// UnityEngine.InputSystem.PlayerInput[] UnityEngine.InputSystem.PlayerInput::s_AllActivePlayers
	PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080* ___s_AllActivePlayers_38;
	// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.PlayerInput::s_UserChangeDelegate
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___s_UserChangeDelegate_39;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevicesCount
	int32_t ___s_InitPairWithDevicesCount_40;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___s_InitPairWithDevices_41;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPlayerIndex
	int32_t ___s_InitPlayerIndex_42;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitSplitScreenIndex
	int32_t ___s_InitSplitScreenIndex_43;
	// System.String UnityEngine.InputSystem.PlayerInput::s_InitControlScheme
	String_t* ___s_InitControlScheme_44;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::s_DestroyIfDeviceSetupUnsuccessful
	bool ___s_DestroyIfDeviceSetupUnsuccessful_45;
};

// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController PlayerMovement::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_4;
	// System.Single PlayerMovement::speed
	float ___speed_5;
	// System.Single PlayerMovement::boost
	float ___boost_6;
	// System.Single PlayerMovement::gravity
	float ___gravity_7;
	// System.Single PlayerMovement::jumpHeight
	float ___jumpHeight_8;
	// UnityEngine.Transform PlayerMovement::groundCheck
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___groundCheck_9;
	// System.Single PlayerMovement::groundDistant
	float ___groundDistant_10;
	// UnityEngine.LayerMask PlayerMovement::groundMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundMask_11;
	// UnityEngine.Vector3 PlayerMovement::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_12;
	// UnityEngine.Vector3 PlayerMovement::move
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move_13;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_14;
	// System.Boolean PlayerMovement::isFalling
	bool ___isFalling_15;
};

// RedirectToLevel
struct RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_StaticFields
{
	// System.Int32 RedirectToLevel::redirectToLevel
	int32_t ___redirectToLevel_4;
};

// RollCredit
struct RollCredit_tE060A94459FE00DBD6BE3D552AB720101451614F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject RollCredit::credit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___credit_4;
};

// SkyRotate
struct SkyRotate_t36D70D1B58732415ED35D7C9D3747E1DC9C6B089  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SkyRotate::rotateSpeed
	float ___rotateSpeed_4;
};

// SplashToMenu
struct SplashToMenu_t2F63243CBD1887689A3EF74E18BC24036F624205  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SplashToMenu::logo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___logo_4;
};

// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::move
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___move_4;
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::look
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___look_5;
	// System.Boolean StarterAssets.StarterAssetsInputs::jump
	bool ___jump_6;
	// System.Boolean StarterAssets.StarterAssetsInputs::sprint
	bool ___sprint_7;
	// System.Boolean StarterAssets.StarterAssetsInputs::analogMovement
	bool ___analogMovement_8;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorLocked
	bool ___cursorLocked_9;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorInputForLook
	bool ___cursorInputForLook_10;
};

// ThanksScene
struct ThanksScene_t808D69210E37A71C26C52CEBE9A9D0E8AE1A4D1C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ThanksScene::content
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___content_4;
};

// StarterAssets.ThirdPersonController
struct ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single StarterAssets.ThirdPersonController::MoveSpeed
	float ___MoveSpeed_4;
	// System.Single StarterAssets.ThirdPersonController::SprintSpeed
	float ___SprintSpeed_5;
	// System.Single StarterAssets.ThirdPersonController::RotationSmoothTime
	float ___RotationSmoothTime_6;
	// System.Single StarterAssets.ThirdPersonController::SpeedChangeRate
	float ___SpeedChangeRate_7;
	// UnityEngine.AudioClip StarterAssets.ThirdPersonController::LandingAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___LandingAudioClip_8;
	// UnityEngine.AudioClip[] StarterAssets.ThirdPersonController::FootstepAudioClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___FootstepAudioClips_9;
	// System.Single StarterAssets.ThirdPersonController::FootstepAudioVolume
	float ___FootstepAudioVolume_10;
	// System.Single StarterAssets.ThirdPersonController::JumpHeight
	float ___JumpHeight_11;
	// System.Single StarterAssets.ThirdPersonController::Gravity
	float ___Gravity_12;
	// System.Single StarterAssets.ThirdPersonController::JumpTimeout
	float ___JumpTimeout_13;
	// System.Single StarterAssets.ThirdPersonController::FallTimeout
	float ___FallTimeout_14;
	// System.Boolean StarterAssets.ThirdPersonController::Grounded
	bool ___Grounded_15;
	// System.Single StarterAssets.ThirdPersonController::GroundedOffset
	float ___GroundedOffset_16;
	// System.Single StarterAssets.ThirdPersonController::GroundedRadius
	float ___GroundedRadius_17;
	// UnityEngine.LayerMask StarterAssets.ThirdPersonController::GroundLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___GroundLayers_18;
	// UnityEngine.GameObject StarterAssets.ThirdPersonController::CinemachineCameraTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CinemachineCameraTarget_19;
	// System.Single StarterAssets.ThirdPersonController::TopClamp
	float ___TopClamp_20;
	// System.Single StarterAssets.ThirdPersonController::BottomClamp
	float ___BottomClamp_21;
	// System.Single StarterAssets.ThirdPersonController::CameraAngleOverride
	float ___CameraAngleOverride_22;
	// System.Boolean StarterAssets.ThirdPersonController::LockCameraPosition
	bool ___LockCameraPosition_23;
	// System.Single StarterAssets.ThirdPersonController::_cinemachineTargetYaw
	float ____cinemachineTargetYaw_24;
	// System.Single StarterAssets.ThirdPersonController::_cinemachineTargetPitch
	float ____cinemachineTargetPitch_25;
	// System.Single StarterAssets.ThirdPersonController::_speed
	float ____speed_26;
	// System.Single StarterAssets.ThirdPersonController::_animationBlend
	float ____animationBlend_27;
	// System.Single StarterAssets.ThirdPersonController::_targetRotation
	float ____targetRotation_28;
	// System.Single StarterAssets.ThirdPersonController::_rotationVelocity
	float ____rotationVelocity_29;
	// System.Single StarterAssets.ThirdPersonController::_verticalVelocity
	float ____verticalVelocity_30;
	// System.Single StarterAssets.ThirdPersonController::_terminalVelocity
	float ____terminalVelocity_31;
	// System.Single StarterAssets.ThirdPersonController::_jumpTimeoutDelta
	float ____jumpTimeoutDelta_32;
	// System.Single StarterAssets.ThirdPersonController::_fallTimeoutDelta
	float ____fallTimeoutDelta_33;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDSpeed
	int32_t ____animIDSpeed_34;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDGrounded
	int32_t ____animIDGrounded_35;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDJump
	int32_t ____animIDJump_36;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDFreeFall
	int32_t ____animIDFreeFall_37;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDMotionSpeed
	int32_t ____animIDMotionSpeed_38;
	// UnityEngine.InputSystem.PlayerInput StarterAssets.ThirdPersonController::_playerInput
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ____playerInput_39;
	// UnityEngine.Animator StarterAssets.ThirdPersonController::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_40;
	// UnityEngine.CharacterController StarterAssets.ThirdPersonController::_controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____controller_41;
	// StarterAssets.StarterAssetsInputs StarterAssets.ThirdPersonController::_input
	StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* ____input_42;
	// UnityEngine.GameObject StarterAssets.ThirdPersonController::_mainCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mainCamera_43;
	// System.Boolean StarterAssets.ThirdPersonController::_hasAnimator
	bool ____hasAnimator_45;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// StarterAssets.StarterAssetsInputs StarterAssets.UICanvasControllerInput::starterAssetsInputs
	StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* ___starterAssetsInputs_4;
};

// UIVirtualButton
struct UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UIVirtualButton/BoolEvent UIVirtualButton::buttonStateOutputEvent
	BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* ___buttonStateOutputEvent_4;
	// UIVirtualButton/Event UIVirtualButton::buttonClickOutputEvent
	Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* ___buttonClickOutputEvent_5;
};

// UIVirtualJoystick
struct UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform UIVirtualJoystick::containerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualJoystick::handleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handleRect_5;
	// System.Single UIVirtualJoystick::joystickRange
	float ___joystickRange_6;
	// System.Single UIVirtualJoystick::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualJoystick::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualJoystick::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UIVirtualJoystick/Event UIVirtualJoystick::joystickOutputEvent
	Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* ___joystickOutputEvent_10;
};

// UIVirtualTouchZone
struct UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform UIVirtualTouchZone::containerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualTouchZone::handleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handleRect_5;
	// System.Boolean UIVirtualTouchZone::clampToMagnitude
	bool ___clampToMagnitude_6;
	// System.Single UIVirtualTouchZone::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualTouchZone::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualTouchZone::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UnityEngine.Vector2 UIVirtualTouchZone::pointerDownPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerDownPosition_10;
	// UnityEngine.Vector2 UIVirtualTouchZone::currentPointerPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentPointerPosition_11;
	// UIVirtualTouchZone/Event UIVirtualTouchZone::touchZoneOutputEvent
	Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* ___touchZoneOutputEvent_12;
};

// Unsafe_Ground
struct Unsafe_Ground_tB3CE2542B447BBB9FA5105477AE572C0AF9A123E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40 (const RuntimeMethod* method)
{
	return ((  GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void GameManager::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Complete_mC7700ACDA36D251965BC254C136F52DC195EB167 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::DeathSequene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_DeathSequene_mA4A742CA4D78B3EDE490A5C5F7BC864ECF174A9D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Collections.IEnumerator GameManager::IComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_IComplete_mDAA9C27CA04C2475EEA7B15571161633C56D92B1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<DeathSequene>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeathSequeneU3Ed__20__ctor_mD63A69B6FE14DE6C7982DDD9A73F2D33D035385B (U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager/<IComplete>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CICompleteU3Ed__21__ctor_m8817BC53EBFF57238639FD22CA30B7234CE64428 (U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PlayerMovement>()
inline PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* Component_GetComponent_TisPlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_mB01D1499477290A7FF8106B2575007F0734458DE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics::SyncTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_SyncTransforms_mB88B6B27C24234D18846F614F9AE674976A5F1CA (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GlobalTimer::AddSecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalTimer_AddSecond_m4EB4752E842B6FD38C54A62424891C092149E829 (GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726* __this, const RuntimeMethod* method) ;
// System.Void GlobalTimer/<AddSecond>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddSecondU3Ed__8__ctor_m1089EB472653FBF6CAA0C99F01A63931CBD332A5 (U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void GameManager::Death_Fall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Death_Fall_mC78B723BF03280349AFBE1B3597DAD84057735AD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void ButtonScript::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_Resume_mB3188279CE28D5EEC943BBFC248B1D9DBD93FE78 (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LevelLoad::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelLoad_FadeIn_m8FC748BF2DADEF2C8054D686F0A5AE62F1C321AD (LevelLoad_t01F90B5D3114F61188048ABE684108A4FB069E07* __this, const RuntimeMethod* method) ;
// System.Void LevelLoad/<FadeIn>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__2__ctor_m22A4E8A1FECCBA5F238D18411D79D9F5BB750F6D (U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCountInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCountInBuildSettings_m414CDE36617596AC75C8E1A03DA65752A09A8944 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator SplashToMenu::RunSplash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplashToMenu_RunSplash_mFF7CC21467DAFAD782AFE1143EFF37A8B60C23CD (SplashToMenu_t2F63243CBD1887689A3EF74E18BC24036F624205* __this, const RuntimeMethod* method) ;
// System.Void SplashToMenu/<RunSplash>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunSplashU3Ed__2__ctor_mD3F5139895E3113515EF14424744E5CB0ABFDCBF (U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void GameManager::Death_Acid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Death_Acid_m12B6D674BC725FC321DCCD469775ADBE0BBE3A4A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::Death_Ocean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Death_Ocean_m2066F15025E73D576D9CA560FBD669BA5C6CEF93 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator RollCredit::Credit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RollCredit_Credit_m4CD7491C3458746F738ABE2BF69A9A88DEE5BC8B (RollCredit_tE060A94459FE00DBD6BE3D552AB720101451614F* __this, const RuntimeMethod* method) ;
// System.Void RollCredit/<Credit>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreditU3Ed__2__ctor_m59D27CF6E301FB9BABD0CD513D50133391B03B3A (U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.RenderSettings::get_skybox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* RenderSettings_get_skybox_m1738CCDBAFAA20797D174DB97066440B10FBCE6F (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ThanksScene::Thanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ThanksScene_Thanks_mD0DB0E0D102997325393FD5C35C18EA2BAEE5F65 (ThanksScene_t808D69210E37A71C26C52CEBE9A9D0E8AE1A4D1C* __this, const RuntimeMethod* method) ;
// System.Void ThanksScene/<Thanks>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CThanksU3Ed__2__ctor_mCC48092326CA6E6680D78586E49FC1CD260B1995 (U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager::Death_Unsafe_Ground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Death_Unsafe_Ground_mDC9344F90E6360CD8766214F38C4EB9478B85272 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void BasicRigidBodyPush::PushRigidBodies(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_moveDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, bool ___buttonState0, const RuntimeMethod* method) ;
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, const RuntimeMethod*))UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
inline void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0 (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
inline void UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, const RuntimeMethod*))UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_gshared)(__this, method);
}
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, bool ___newState1, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___firstPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondPosition1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.PlayerInput::get_currentControlScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInput_get_currentControlScheme_mA70B5C50BA1A61D2E232F17730BAECD3F690204C (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<StarterAssets.StarterAssetsInputs>()
inline StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.InputSystem.PlayerInput>()
inline PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void StarterAssets.FirstPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_JumpAndGravity_mE8E57E5D89BE4289C81F1D668AB99588356FD44A (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.FirstPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GroundedCheck_mBD7B0C905A60ED82AD81BD5E8124C309688AB5D6 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.FirstPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Move_mD3B86419A063305FAF1598ED1FDE790B407A20F3 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.FirstPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_CameraRotation_m8D6B31A95A1DDF1B34ECD3806E6052F255781D8D (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mC32BB961B0CF9D23EDDEEC3F30021FD1BE88E261 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Boolean StarterAssets.FirstPersonController::get_IsCurrentDeviceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirstPersonController_get_IsCurrentDeviceMouse_mBD2A02E3A33E0A4074283C7CD2C40BAC507278B0 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) ;
// System.Single StarterAssets.FirstPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FirstPersonController_ClampAngle_m2B9F299C2F735DBC14DD608696F8515B1428F5C8 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared)(__this, method);
}
// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputValue::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::SetCursorState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newState0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Animator>(T&)
inline bool Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void StarterAssets.ThirdPersonController::AssignAnimationIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean StarterAssets.ThirdPersonController::get_IsCurrentDeviceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonController_get_IsCurrentDeviceMouse_m5EBE0107CBD975A6178FCE2840C3D159A13C6D9C (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Single StarterAssets.ThirdPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonController_ClampAngle_m8C3245A45B5FB84338F87BEAECEEE36E3C53B2B6 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 AnimationEvent_get_animatorClipInfo_m0D763FA1A2E3CD81AC08F1F24977859AE25938F3 (AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D (AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, float ___volume2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.MeshFilter LowPolyWater.LowPolyWater::CreateMeshLowPoly(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* LowPolyWater_CreateMeshLowPoly_mD334974E007EE6B8204B866ED70BF3D8B99F735C (LowPolyWater_t78C6ECF22372C5313BA1937B03DF2113AED7F728* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___mf0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles0, int32_t ___submesh1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void LowPolyWater.LowPolyWater::GenerateWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowPolyWater_GenerateWaves_m272208F2F0BD170DFCD36057697CE2777EF66972 (LowPolyWater_t78C6ECF22372C5313BA1937B03DF2113AED7F728* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::MarkDynamic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___current0, float ___target1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
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
// System.Void AnimationController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_Start_mC2E6E251390BCB44555D1877E2866D31B49B1E06 (AnimationController_t3FB186F57A51155F3AA9120B20218243E11220C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AnimationController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_Update_mED7CBCC3A8D88C345162363E4137119CE52B209D (AnimationController_t3FB186F57A51155F3AA9120B20218243E11220C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A6CC6020AB1895196FFFCE31AAD59C23958EDC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163DCC8E458A1FCC2E86F0FD61BE2BCE27195238);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF153F5FEAAE07A3F8502779EE9C7913D639322);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44E231599C0D163AA156E583DFC97B2A1E22935);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC488C82ED76F775B7C6E33C6A6A3B46EBD9FE51A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD997748FA7F769B6075F10242EE99AFDCD89D1A6);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B12_0 = 0.0f;
	{
		// isGrounded = Physics.CheckSphere(groundCheck.position, groundDistant, groundMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___groundCheck_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___groundDistant_6;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___groundMask_7;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		bool L_5;
		L_5 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_1, L_2, L_4, NULL);
		__this->___isGrounded_8 = L_5;
		// float x = Input.GetAxisRaw("Horizontal");
		float L_6;
		L_6 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		// float z = Input.GetAxisRaw("Vertical");
		float L_7;
		L_7 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_0 = L_7;
		// if (z == 1)
		float L_8 = V_0;
		G_B1_0 = L_6;
		if ((!(((float)L_8) == ((float)(1.0f)))))
		{
			G_B2_0 = L_6;
			goto IL_0057;
		}
	}
	{
		// animator.SetBool("isRunForward", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_9, _stringLiteralD997748FA7F769B6075F10242EE99AFDCD89D1A6, (bool)1, NULL);
		G_B3_0 = G_B1_0;
		goto IL_0068;
	}

IL_0057:
	{
		// animator.SetBool("isRunForward", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteralD997748FA7F769B6075F10242EE99AFDCD89D1A6, (bool)0, NULL);
		G_B3_0 = G_B2_0;
	}

IL_0068:
	{
		// if (z == -1)
		float L_11 = V_0;
		G_B4_0 = G_B3_0;
		if ((!(((float)L_11) == ((float)(-1.0f)))))
		{
			G_B5_0 = G_B3_0;
			goto IL_0083;
		}
	}
	{
		// animator.SetBool("isRunBackward", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteral0A6CC6020AB1895196FFFCE31AAD59C23958EDC0, (bool)1, NULL);
		G_B6_0 = G_B4_0;
		goto IL_0094;
	}

IL_0083:
	{
		// animator.SetBool("isRunBackward", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_13, _stringLiteral0A6CC6020AB1895196FFFCE31AAD59C23958EDC0, (bool)0, NULL);
		G_B6_0 = G_B5_0;
	}

IL_0094:
	{
		// if (x == -1)
		float L_14 = G_B6_0;
		G_B7_0 = L_14;
		if ((!(((float)L_14) == ((float)(-1.0f)))))
		{
			G_B8_0 = L_14;
			goto IL_00af;
		}
	}
	{
		// animator.SetBool("isRunRight", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_15, _stringLiteralA44E231599C0D163AA156E583DFC97B2A1E22935, (bool)1, NULL);
		G_B9_0 = G_B7_0;
		goto IL_00c0;
	}

IL_00af:
	{
		// animator.SetBool("isRunRight", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_16, _stringLiteralA44E231599C0D163AA156E583DFC97B2A1E22935, (bool)0, NULL);
		G_B9_0 = G_B8_0;
	}

IL_00c0:
	{
		// if (x == 1)
		float L_17 = G_B9_0;
		G_B10_0 = L_17;
		if ((!(((float)L_17) == ((float)(1.0f)))))
		{
			G_B11_0 = L_17;
			goto IL_00db;
		}
	}
	{
		// animator.SetBool("isRunLeft", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_18, _stringLiteralC488C82ED76F775B7C6E33C6A6A3B46EBD9FE51A, (bool)1, NULL);
		G_B12_0 = G_B10_0;
		goto IL_00ec;
	}

IL_00db:
	{
		// animator.SetBool("isRunLeft", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_19, _stringLiteralC488C82ED76F775B7C6E33C6A6A3B46EBD9FE51A, (bool)0, NULL);
		G_B12_0 = G_B11_0;
	}

IL_00ec:
	{
		// if( x != 0 || z != 0)
		if ((!(((float)G_B12_0) == ((float)(0.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		float L_20 = V_0;
		if ((((float)L_20) == ((float)(0.0f))))
		{
			goto IL_010e;
		}
	}

IL_00fb:
	{
		// animator.SetBool("isMoving", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_21, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)1, NULL);
		goto IL_011f;
	}

IL_010e:
	{
		// animator.SetBool("isMoving", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_22, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)0, NULL);
	}

IL_011f:
	{
		// if (Input.GetButtonDown("Jump"))
		bool L_23;
		L_23 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_23)
		{
			goto IL_013e;
		}
	}
	{
		// animator.SetBool("isJump", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_24, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, (bool)1, NULL);
		goto IL_014f;
	}

IL_013e:
	{
		// animator.SetBool("isJump", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_25, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, (bool)0, NULL);
	}

IL_014f:
	{
		// if(isGrounded)
		bool L_26 = __this->___isGrounded_8;
		if (!L_26)
		{
			goto IL_016a;
		}
	}
	{
		// animator.SetBool("isFall", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_27, _stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8, (bool)0, NULL);
		goto IL_017b;
	}

IL_016a:
	{
		// animator.SetBool("isFall", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_28, _stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8, (bool)1, NULL);
	}

IL_017b:
	{
		// if (Input.GetAxis("Sprint") == 1)
		float L_29;
		L_29 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral163DCC8E458A1FCC2E86F0FD61BE2BCE27195238, NULL);
		if ((!(((float)L_29) == ((float)(1.0f)))))
		{
			goto IL_019e;
		}
	}
	{
		// animator.SetBool("isSprint", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_30, _stringLiteral1CF153F5FEAAE07A3F8502779EE9C7913D639322, (bool)1, NULL);
		return;
	}

IL_019e:
	{
		// animator.SetBool("isSprint", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_31 = __this->___animator_4;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_31, _stringLiteral1CF153F5FEAAE07A3F8502779EE9C7913D639322, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AnimationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController__ctor_m31F56E37E82CAE59A12197D577F7F8257A5FA984 (AnimationController_t3FB186F57A51155F3AA9120B20218243E11220C9* __this, const RuntimeMethod* method) 
{
	{
		// public float groundDistant = 0.4f;
		__this->___groundDistant_6 = (0.400000006f);
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
// System.Void MainMenuController::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_PlayGame_m1C159C15CE08D07E3F9AADD4FCB27452C30B21A1 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPress.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___buttonPress_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// RedirectToLevel.redirectToLevel = 5;
		((RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_StaticFields*)il2cpp_codegen_static_fields_for(RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var))->___redirectToLevel_4 = 5;
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::ShowCredit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_ShowCredit_m50E27FCD574B1EAB408AA75583AC0DB086FF36A2 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPress.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___buttonPress_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// RedirectToLevel.redirectToLevel = 3;
		((RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_StaticFields*)il2cpp_codegen_static_fields_for(RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var))->___redirectToLevel_4 = 3;
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController_QuitGame_m956465F2D9BCD0CACF39B6F23EFA86DD0D608ABD (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void MainMenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController__ctor_m9727FC638FDF6BDF302E10C6351846B395013EA4 (MainMenuController_tC1AE80D8996B3AE38DACF2ABDAF9FC95E0293569* __this, const RuntimeMethod* method) 
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
// System.Void Banana::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banana_OnTriggerEnter_mB49764204A8E587E24B9B5F451BB29EE07A0D70D (Banana_tC1A01B1622AE167C04DC997513F8D30FA8D1EE2B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GlobalScore.currentScore += 200;
		int32_t L_0 = ((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5;
		((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)200)));
		// collectSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___collectSound_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Banana::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banana__ctor_m42266D43B64D545495A357820F81CF3544592CA2 (Banana_tC1A01B1622AE167C04DC997513F8D30FA8D1EE2B* __this, const RuntimeMethod* method) 
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
// System.Void FoodRorate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodRorate_Update_m8931209F88346D1E3C24B7C29712C5A61C8E10B6 (FoodRorate_t21C36CD8DC96910BE8C227994D423D4817ECE023* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0, rotateSpeed * Time.deltaTime, 0, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___rotateSpeed_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_0, (0.0f), ((float)il2cpp_codegen_multiply(L_1, L_2)), (0.0f), 0, NULL);
		// }
		return;
	}
}
// System.Void FoodRorate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodRorate__ctor_m8C82F0A92948A3EA1B703009EEC398F7855342E7 (FoodRorate_t21C36CD8DC96910BE8C227994D423D4817ECE023* __this, const RuntimeMethod* method) 
{
	{
		// public float rotateSpeed = 50f;
		__this->___rotateSpeed_4 = (50.0f);
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
// System.Void GoldenCherry::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoldenCherry_OnTriggerEnter_m29952BB5B95FE092EBCF6B8B751A8EFF42EA35C8 (GoldenCherry_t4AA9F50E358512669CA43546E44F78CEA28E4D14* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GlobalScore.currentScore += 1000;
		int32_t L_0 = ((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5;
		((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)1000)));
		// collectSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___collectSound_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// FindObjectOfType<GameManager>().Complete();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3;
		L_3 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		GameManager_Complete_mC7700ACDA36D251965BC254C136F52DC195EB167(L_3, NULL);
		// }
		return;
	}
}
// System.Void GoldenCherry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoldenCherry__ctor_m343AAEAB1AA6F124F0008E3BA6AD3DC5DB1FD286 (GoldenCherry_t4AA9F50E358512669CA43546E44F78CEA28E4D14* __this, const RuntimeMethod* method) 
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
// System.Void Melon::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Melon_OnTriggerEnter_m47452F551F39EF64D4F0F67A5588E7BBFD05FA8D (Melon_tA0A7F1E07024A8705AE18548FF9D1A0308BF2A97* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GlobalScore.currentScore += 100;
		int32_t L_0 = ((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5;
		((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)100)));
		// collectSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___collectSound_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Melon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Melon__ctor_m8615084F623454150C9B5B66548D1A73B047E8B3 (Melon_tA0A7F1E07024A8705AE18548FF9D1A0308BF2A97* __this, const RuntimeMethod* method) 
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
// System.Void Olive::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Olive_OnTriggerEnter_mD7C71D623FB53EA4240E882CFD21A606F9B81EFF (Olive_t5784F41BE6C6C099A713C02B5355AB15C3BB09A5* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GlobalScore.currentScore += 50;
		int32_t L_0 = ((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5;
		((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)50)));
		// collectSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___collectSound_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Olive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Olive__ctor_mC6D3D2C0189037801D993BE08076FC167579CDF2 (Olive_t5784F41BE6C6C099A713C02B5355AB15C3BB09A5* __this, const RuntimeMethod* method) 
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
// System.Void GameManager::Death_Fall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Death_Fall_mC78B723BF03280349AFBE1B3597DAD84057735AD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// hitGround.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___hitGround_6;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// StartCoroutine(DeathSequene());
		RuntimeObject* L_1;
		L_1 = GameManager_DeathSequene_mA4A742CA4D78B3EDE490A5C5F7BC864ECF174A9D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Death_Ocean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Death_Ocean_m2066F15025E73D576D9CA560FBD669BA5C6CEF93 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(DeathSequene());
		RuntimeObject* L_0;
		L_0 = GameManager_DeathSequene_mA4A742CA4D78B3EDE490A5C5F7BC864ECF174A9D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Death_Unsafe_Ground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Death_Unsafe_Ground_mDC9344F90E6360CD8766214F38C4EB9478B85272 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE14996CC3CDEF721A6281424002F6F34AE96AC8A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hitGround.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___hitGround_6;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// deathMessage.GetComponent<Text>().text = "You got poisoned by sludge";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___deathMessage_8;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_1, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralE14996CC3CDEF721A6281424002F6F34AE96AC8A);
		// StartCoroutine(DeathSequene());
		RuntimeObject* L_3;
		L_3 = GameManager_DeathSequene_mA4A742CA4D78B3EDE490A5C5F7BC864ECF174A9D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Death_Acid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Death_Acid_m12B6D674BC725FC321DCCD469775ADBE0BBE3A4A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D22CAC23364D9E15818D1578F26C07BAC7021A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathMessage.GetComponent<Text>().text = "You melted by acid";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___deathMessage_8;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral8D22CAC23364D9E15818D1578F26C07BAC7021A1);
		// StartCoroutine(DeathSequene());
		RuntimeObject* L_2;
		L_2 = GameManager_DeathSequene_mA4A742CA4D78B3EDE490A5C5F7BC864ECF174A9D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Complete_mC7700ACDA36D251965BC254C136F52DC195EB167 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(IComplete());
		RuntimeObject* L_0;
		L_0 = GameManager_IComplete_mDAA9C27CA04C2475EEA7B15571161633C56D92B1(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::DeathSequene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_DeathSequene_mA4A742CA4D78B3EDE490A5C5F7BC864ECF174A9D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655* L_0 = (U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655*)il2cpp_codegen_object_new(U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655_il2cpp_TypeInfo_var);
		U3CDeathSequeneU3Ed__20__ctor_mD63A69B6FE14DE6C7982DDD9A73F2D33D035385B(L_0, 0, NULL);
		U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::IComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_IComplete_mDAA9C27CA04C2475EEA7B15571161633C56D92B1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406* L_0 = (U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406*)il2cpp_codegen_object_new(U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406_il2cpp_TypeInfo_var);
		U3CICompleteU3Ed__21__ctor_m8817BC53EBFF57238639FD22CA30B7234CE64428(L_0, 0, NULL);
		U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
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
// System.Void GameManager/<DeathSequene>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeathSequeneU3Ed__20__ctor_mD63A69B6FE14DE6C7982DDD9A73F2D33D035385B (U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<DeathSequene>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeathSequeneU3Ed__20_System_IDisposable_Dispose_m8B391D420090ED8F6DB27A040EEC78B36856F2E2 (U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<DeathSequene>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeathSequeneU3Ed__20_MoveNext_mB4B8027683F57611A996E338AF6541C7E7CA3044 (U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_mB01D1499477290A7FF8106B2575007F0734458DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// deathBox.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___deathBox_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// player.GetComponent<PlayerMovement>().enabled = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___player_4;
		PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* L_8;
		L_8 = Component_GetComponent_TisPlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_mB01D1499477290A7FF8106B2575007F0734458DE(L_7, Component_GetComponent_TisPlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_mB01D1499477290A7FF8106B2575007F0734458DE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
		// player.GetComponent<Animator>().enabled = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9->___player_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11;
		L_11 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_10, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_12 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_12, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0065:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// deathBox.SetActive(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___deathBox_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// player.GetComponent<PlayerMovement>().enabled = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_15 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15->___player_4;
		PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* L_17;
		L_17 = Component_GetComponent_TisPlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_mB01D1499477290A7FF8106B2575007F0734458DE(L_16, Component_GetComponent_TisPlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_mB01D1499477290A7FF8106B2575007F0734458DE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)1, NULL);
		// player.GetComponent<Animator>().enabled = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18->___player_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20;
		L_20 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_19, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_20, (bool)1, NULL);
		// player.transform.position = spawnPoint.transform.position;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_21 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_24 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = L_24->___spawnPoint_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_27, NULL);
		// player.transform.rotation = Quaternion.identity;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_28 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = L_28->___player_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_30, L_31, NULL);
		// Physics.SyncTransforms();
		Physics_SyncTransforms_mB88B6B27C24234D18846F614F9AE674976A5F1CA(NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<DeathSequene>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeathSequeneU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE8A5D306062E411D8FB495BA1CB3B6D48EA3676E (U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<DeathSequene>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeathSequeneU3Ed__20_System_Collections_IEnumerator_Reset_mE343B2CCA10D80026F53129FC39E0FF8C349299A (U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeathSequeneU3Ed__20_System_Collections_IEnumerator_Reset_mE343B2CCA10D80026F53129FC39E0FF8C349299A_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<DeathSequene>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeathSequeneU3Ed__20_System_Collections_IEnumerator_get_Current_m52F27406328A7AAA24926BFD0BA76A68655875D6 (U3CDeathSequeneU3Ed__20_t1B292D7C51BBA10E6FC032DD9293BA7F01461655* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void GameManager/<IComplete>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CICompleteU3Ed__21__ctor_m8817BC53EBFF57238639FD22CA30B7234CE64428 (U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<IComplete>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CICompleteU3Ed__21_System_IDisposable_Dispose_m3DBEA07BCEC378D67C85D64688120BAF65F5355A (U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<IComplete>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CICompleteU3Ed__21_MoveNext_m16F35CBAD82AE76C268FBA3CD989B7C3E0CBA474 (U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_mB01D1499477290A7FF8106B2575007F0734458DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0154;
			}
			case 2:
			{
				goto IL_0180;
			}
			case 3:
			{
				goto IL_01b8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// timeCalc = GlobalScore.currentScore + GlobalTimer.extendScore * -10;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = V_1;
		int32_t L_4 = ((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5;
		int32_t L_5 = ((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___extendScore_9;
		L_3->___timeCalc_18 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)-10)))));
		// time.GetComponent<Text>().text = "" + "Time: " + GlobalTimer.hours + ":" + GlobalTimer.minutes + ":" + GlobalTimer.seconds;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___time_12;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8;
		L_8 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_7, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___hours_8), NULL);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		ArrayElementTypeCheck (L_13, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___minutes_7), NULL);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
		ArrayElementTypeCheck (L_16, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___seconds_6), NULL);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_19);
		// score.GetComponent<Text>().text = "" + "Score: " + GlobalScore.currentScore;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___score_13;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22;
		L_22 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_21, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5), NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_23, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_24);
		// totalScore.GetComponent<Text>().text = "" + "Total Score: " + timeCalc;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_25 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___totalScore_15;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27;
		L_27 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_26, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_28 = V_1;
		int32_t* L_29 = (&L_28->___timeCalc_18);
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_29, NULL);
		String_t* L_31;
		L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9, L_30, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_31);
		// globalTime.SetActive(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_32 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = L_32->___globalTime_11;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// backGroundMusic.SetActive(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_34 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34->___backGroundMusic_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// LevelComplete.Play();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_36 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_37 = L_36->___LevelComplete_9;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_37, NULL);
		// player.GetComponent<PlayerMovement>().enabled = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_38 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = L_38->___player_4;
		PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* L_40;
		L_40 = Component_GetComponent_TisPlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_mB01D1499477290A7FF8106B2575007F0734458DE(L_39, Component_GetComponent_TisPlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351_mB01D1499477290A7FF8106B2575007F0734458DE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_40, (bool)0, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// player.GetComponent<Animator>().enabled = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_41 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = L_41->___player_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_43;
		L_43 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_42, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_43, (bool)0, NULL);
		// time.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_44 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = L_44->___time_12;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_46 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_46, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_46);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0154:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// score.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_47 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = L_47->___score_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_49 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_49, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_49);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0180:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// line.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_50 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = L_50->___line_14;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_51, (bool)1, NULL);
		// totalScore.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_52 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = L_52->___totalScore_15;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_54 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_54, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_54);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_01b8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// playAgain.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_55 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = L_55->___playAgain_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)1, NULL);
		// nextLevel.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_57 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = L_57->___nextLevel_17;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<IComplete>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CICompleteU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m25945DB0CFB67E60F0E074A7690B2208D671B4D7 (U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<IComplete>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CICompleteU3Ed__21_System_Collections_IEnumerator_Reset_m6C24A9EE3C3905F9A6056D43662E5EB5DB8B276D (U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CICompleteU3Ed__21_System_Collections_IEnumerator_Reset_m6C24A9EE3C3905F9A6056D43662E5EB5DB8B276D_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<IComplete>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CICompleteU3Ed__21_System_Collections_IEnumerator_get_Current_mE875A1960590CCD343D0E247CCEBC1C788BA3CB6 (U3CICompleteU3Ed__21_t0247F4FD766932A8D072821454A056700B246406* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void GlobalScore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalScore_Start_m80351DC84F70D412C3FCD0AFE4F29D99D3005BEF (GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentScore = 0;
		((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5 = 0;
		// }
		return;
	}
}
// System.Void GlobalScore::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalScore_Update_mA0BFB04D03F185C474CDA7A01FC9D73EF945CF26 (GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// internalScore = currentScore;
		int32_t L_0 = ((GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_StaticFields*)il2cpp_codegen_static_fields_for(GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252_il2cpp_TypeInfo_var))->___currentScore_5;
		__this->___internalScore_6 = L_0;
		// scoreBox.GetComponent<Text>().text = "" + internalScore;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___scoreBox_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_1, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		int32_t* L_3 = (&__this->___internalScore_6);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_2;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_2;
			goto IL_002a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Void GlobalScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalScore__ctor_m24A9EAD10CF8808C6F39D45B5E85F20C0E6EBFEB (GlobalScore_tA8E5A210F37B398EFFB1F1A6694AEB89289DD252* __this, const RuntimeMethod* method) 
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
// System.Void GlobalTimer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalTimer_Start_m8D29C83C0B874BE54EB423ADE90CBB835146A4B6 (GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// seconds = minutes = hours = 0;
		int32_t L_0 = 0;
		((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___hours_8 = L_0;
		int32_t L_1 = L_0;
		((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___minutes_7 = L_1;
		((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___seconds_6 = L_1;
		// }
		return;
	}
}
// System.Void GlobalTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalTimer_Update_mA221F7C3A5D72213F7C9CBA0BA0CE4116941FC87 (GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// extendScore = hours * 3600 + minutes * 60 + seconds;
		int32_t L_0 = ((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___hours_8;
		int32_t L_1 = ((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___minutes_7;
		int32_t L_2 = ((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___seconds_6;
		((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___extendScore_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)3600))), ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)60))))), L_2));
		// if (tickingTime == false)
		bool L_3 = __this->___tickingTime_5;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		// StartCoroutine(AddSecond());
		RuntimeObject* L_4;
		L_4 = GlobalTimer_AddSecond_m4EB4752E842B6FD38C54A62424891C092149E829(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GlobalTimer::AddSecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalTimer_AddSecond_m4EB4752E842B6FD38C54A62424891C092149E829 (GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E* L_0 = (U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E*)il2cpp_codegen_object_new(U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E_il2cpp_TypeInfo_var);
		U3CAddSecondU3Ed__8__ctor_m1089EB472653FBF6CAA0C99F01A63931CBD332A5(L_0, 0, NULL);
		U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GlobalTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalTimer__ctor_m8C9200F31001A10E17184F3AEFE830C26D533891 (GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726* __this, const RuntimeMethod* method) 
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
// System.Void GlobalTimer/<AddSecond>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddSecondU3Ed__8__ctor_m1089EB472653FBF6CAA0C99F01A63931CBD332A5 (U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GlobalTimer/<AddSecond>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddSecondU3Ed__8_System_IDisposable_Dispose_m1DB819E8E8942A1E0911E01C53952C7BB16BED06 (U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GlobalTimer/<AddSecond>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAddSecondU3Ed__8_MoveNext_mBE6BF4F25F623D05F53B691BDFA273A14E84AA82 (U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00d5;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// tickingTime = true;
		GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726* L_4 = V_1;
		L_4->___tickingTime_5 = (bool)1;
		// seconds++;
		int32_t L_5 = ((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___seconds_6;
		((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___seconds_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if (seconds >= 60)
		int32_t L_6 = ((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___seconds_6;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)60))))
		{
			goto IL_004f;
		}
	}
	{
		// seconds = 0;
		((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___seconds_6 = 0;
		// minutes++;
		int32_t L_7 = ((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___minutes_7;
		((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___minutes_7 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004f:
	{
		// if (minutes >= 60)
		int32_t L_8 = ((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___minutes_7;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)60))))
		{
			goto IL_006a;
		}
	}
	{
		// minutes = 0;
		((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___minutes_7 = 0;
		// hours++;
		int32_t L_9 = ((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___hours_8;
		((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___hours_8 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_006a:
	{
		// timeDisplay.GetComponent<Text>().text = "" + hours + ":" + minutes +":" +seconds;
		GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726* L_10 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___timeDisplay_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12;
		L_12 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_11, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___hours_8), NULL);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
		ArrayElementTypeCheck (L_16, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___minutes_7), NULL);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_17;
		ArrayElementTypeCheck (L_19, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_StaticFields*)il2cpp_codegen_static_fields_for(GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726_il2cpp_TypeInfo_var))->___seconds_6), NULL);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_21);
		String_t* L_22;
		L_22 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_20, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_22);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_23 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_23, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d5:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// tickingTime = false;
		GlobalTimer_t21DF06C9FEE1684B783FF716BCDB7C1840D16726* L_24 = V_1;
		L_24->___tickingTime_5 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object GlobalTimer/<AddSecond>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAddSecondU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBB024A26843D79060057B74B4C02B27161084FFD (U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GlobalTimer/<AddSecond>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddSecondU3Ed__8_System_Collections_IEnumerator_Reset_mE2F49991D130096622A5A76BC41228E976FA99D2 (U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAddSecondU3Ed__8_System_Collections_IEnumerator_Reset_mE2F49991D130096622A5A76BC41228E976FA99D2_RuntimeMethod_var)));
	}
}
// System.Object GlobalTimer/<AddSecond>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAddSecondU3Ed__8_System_Collections_IEnumerator_get_Current_m7F86F6645DF89447F14B12BB255FAC7365A079E6 (U3CAddSecondU3Ed__8_tBEDEEFD21943669E9FE19B1BFE5D56144748822E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void MouseLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Start_m08FD16A47A96624540CD1B8EBA5FFAA1FD75E686 (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// }
		return;
	}
}
// System.Void MouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Update_m18C0A114A78C19B888A9F74CA1FE5A837DF9E42A (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime;
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___mouseSensitivity_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_4 = __this->___mouseSensitivity_4;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// xRotattion -= mouseY;
		float L_6 = __this->___xRotattion_6;
		float L_7 = V_1;
		__this->___xRotattion_6 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// xRotattion = Mathf.Clamp(xRotattion, -90f, 90f);
		float L_8 = __this->___xRotattion_6;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, (-90.0f), (90.0f), NULL);
		__this->___xRotattion_6 = L_9;
		// transform.localRotation = Quaternion.Euler(xRotattion, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_11 = __this->___xRotattion_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_11, (0.0f), (0.0f), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_12, NULL);
		// playerBody.Rotate(Vector3.up * mouseX);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___playerBody_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_13, L_16, NULL);
		// }
		return;
	}
}
// System.Void MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_m4C8A79A3CB8D46D3E22E3AB1F645D41ED589312B (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	{
		// public float mouseSensitivity = 100f;
		__this->___mouseSensitivity_4 = (100.0f);
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
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_m5BB6CE35AF68EE00CFEB4BA5EBA17E10667551D3 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163DCC8E458A1FCC2E86F0FD61BE2BCE27195238);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// isGrounded = Physics.CheckSphere(groundCheck.position, groundDistant, groundMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___groundCheck_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___groundDistant_10;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___groundMask_11;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		bool L_5;
		L_5 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_1, L_2, L_4, NULL);
		__this->___isGrounded_14 = L_5;
		// if (isGrounded && velocity.y < -17)
		bool L_6 = __this->___isGrounded_14;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___velocity_12);
		float L_8 = L_7->___y_3;
		if ((!(((float)L_8) < ((float)(-17.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// velocity.y = -1f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___velocity_12);
		L_9->___y_3 = (-1.0f);
		// FindObjectOfType<GameManager>().Death_Fall();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10;
		L_10 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		GameManager_Death_Fall_mC78B723BF03280349AFBE1B3597DAD84057735AD(L_10, NULL);
	}

IL_005b:
	{
		// if (isGrounded && velocity.y < 0)
		bool L_11 = __this->___isGrounded_14;
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___velocity_12);
		float L_13 = L_12->___y_3;
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		// velocity.y = -1f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___velocity_12);
		L_14->___y_3 = (-1.0f);
	}

IL_0085:
	{
		// float x = Input.GetAxis("Horizontal");
		float L_15;
		L_15 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_15;
		// float z = Input.GetAxis("Vertical");
		float L_16;
		L_16 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_16;
		// if (Input.GetAxis("Sprint") == 1)
		float L_17;
		L_17 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral163DCC8E458A1FCC2E86F0FD61BE2BCE27195238, NULL);
		if ((!(((float)L_17) == ((float)(1.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		// move = transform.right * x * boost + transform.forward * z * boost;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_18, NULL);
		float L_20 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		float L_22 = __this->___boost_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_24, NULL);
		float L_26 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		float L_28 = __this->___boost_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_29, NULL);
		__this->___move_13 = L_30;
		goto IL_011e;
	}

IL_00f1:
	{
		// move = transform.right * x  + transform.forward * z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_31, NULL);
		float L_33 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_35, NULL);
		float L_37 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_34, L_38, NULL);
		__this->___move_13 = L_39;
	}

IL_011e:
	{
		// controller.Move(move*speed * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_40 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___move_13;
		float L_42 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_41, L_42, NULL);
		float L_44;
		L_44 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, L_44, NULL);
		int32_t L_46;
		L_46 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_40, L_45, NULL);
		// if(Input.GetButtonDown("Jump") && isGrounded)
		bool L_47;
		L_47 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_47)
		{
			goto IL_017c;
		}
	}
	{
		bool L_48 = __this->___isGrounded_14;
		if (!L_48)
		{
			goto IL_017c;
		}
	}
	{
		// velocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = (&__this->___velocity_12);
		float L_50 = __this->___jumpHeight_8;
		float L_51 = __this->___gravity_7;
		float L_52;
		L_52 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_50, (-2.0f))), L_51)));
		L_49->___y_3 = L_52;
	}

IL_017c:
	{
		// velocity.y += gravity * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53 = (&__this->___velocity_12);
		float* L_54 = (&L_53->___y_3);
		float* L_55 = L_54;
		float L_56 = *((float*)L_55);
		float L_57 = __this->___gravity_7;
		float L_58;
		L_58 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_55) = (float)((float)il2cpp_codegen_add(L_56, ((float)il2cpp_codegen_multiply(L_57, L_58))));
		// controller.Move(velocity * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_59 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = __this->___velocity_12;
		float L_61;
		L_61 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_60, L_61, NULL);
		int32_t L_63;
		L_63 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_59, L_62, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mB37559C5B0638161878D20E00B7C672FC38BBBAA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 12f;
		__this->___speed_5 = (12.0f);
		// public float boost = 1.7f;
		__this->___boost_6 = (1.70000005f);
		// public float gravity = -9.8f;
		__this->___gravity_7 = (-9.80000019f);
		// public float jumpHeight = 3f;
		__this->___jumpHeight_8 = (3.0f);
		// public float groundDistant = 0.4f;
		__this->___groundDistant_10 = (0.400000006f);
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
// System.Void ButtonScript::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_Resume_mB3188279CE28D5EEC943BBFC248B1D9DBD93FE78 (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PauseGame.gamePause = false;
		((PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_StaticFields*)il2cpp_codegen_static_fields_for(PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var))->___gamePause_4 = (bool)0;
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// pauseMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenu_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_Restart_mB305E3826DB3FFB7B33215C5B12E1FD872E534BA (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Resume();
		ButtonScript_Resume_mB3188279CE28D5EEC943BBFC248B1D9DBD93FE78(__this, NULL);
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::PlayAgain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_PlayAgain_m91B9B98ADAB5822B614D2DF96E553CC63D5284AE (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_NextLevel_mA9859D1F1315C41F23FD3EE2B97E2531DD47FD75 (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RedirectToLevel.redirectToLevel++;
		int32_t L_0 = ((RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_StaticFields*)il2cpp_codegen_static_fields_for(RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var))->___redirectToLevel_4;
		((RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_StaticFields*)il2cpp_codegen_static_fields_for(RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var))->___redirectToLevel_4 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_MainMenu_m00BF5BED57AAB04CF9A9FEF12D4B2A49C15CDF1E (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Resume();
		ButtonScript_Resume_mB3188279CE28D5EEC943BBFC248B1D9DBD93FE78(__this, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// RedirectToLevel.redirectToLevel = 1;
		((RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_StaticFields*)il2cpp_codegen_static_fields_for(RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var))->___redirectToLevel_4 = 1;
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::RollCredit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_RollCredit_mCF45068C93D098BB0ADD3051899E273B7C0CFC2F (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(3, NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript__ctor_m8877AA5F1151123B36B4513BD26E3547494C3FB8 (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
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
// System.Void LevelFinishButton::PlayAgain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelFinishButton_PlayAgain_m217E6E4B72EB20A449755D558AAAD0CA610DEBD7 (LevelFinishButton_t706F2FDCFA789B344BB5C1BE52B8651DDC27C441* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPress.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___buttonPress_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void LevelFinishButton::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelFinishButton_NextLevel_m7A03A7F48D541715A58BB17797DDF6F43E832B48 (LevelFinishButton_t706F2FDCFA789B344BB5C1BE52B8651DDC27C441* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPress.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___buttonPress_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// RedirectToLevel.redirectToLevel++;
		int32_t L_1 = ((RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_StaticFields*)il2cpp_codegen_static_fields_for(RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var))->___redirectToLevel_4;
		((RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_StaticFields*)il2cpp_codegen_static_fields_for(RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var))->___redirectToLevel_4 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void LevelFinishButton::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelFinishButton_Resume_mC0A7A0F5B0A25C78F1FDBD8A669424AE77983CE3 (LevelFinishButton_t706F2FDCFA789B344BB5C1BE52B8651DDC27C441* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPress.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___buttonPress_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// PauseGame.gamePause = false;
		((PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_StaticFields*)il2cpp_codegen_static_fields_for(PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var))->___gamePause_4 = (bool)0;
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// pauseMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pauseMenu_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LevelFinishButton::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelFinishButton_Restart_mC2E63B159F136E2DEA802081AABFA3141E4F38F2 (LevelFinishButton_t706F2FDCFA789B344BB5C1BE52B8651DDC27C441* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPress.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___buttonPress_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// PauseGame.gamePause = false;
		((PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_StaticFields*)il2cpp_codegen_static_fields_for(PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var))->___gamePause_4 = (bool)0;
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return;
	}
}
// System.Void LevelFinishButton::QuitToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelFinishButton_QuitToMenu_mB2A87163284784455021B513DF1FA92508581CB5 (LevelFinishButton_t706F2FDCFA789B344BB5C1BE52B8651DDC27C441* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPress.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___buttonPress_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// PauseGame.gamePause = false;
		((PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_StaticFields*)il2cpp_codegen_static_fields_for(PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var))->___gamePause_4 = (bool)0;
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void LevelFinishButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelFinishButton__ctor_m1B2B47A5AA154D75BB8BE68B3D840E81A7DA1925 (LevelFinishButton_t706F2FDCFA789B344BB5C1BE52B8651DDC27C441* __this, const RuntimeMethod* method) 
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
// System.Void LevelLoad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoad_Start_m0A176C23DA12F136B7B9350CA97718629B88696E (LevelLoad_t01F90B5D3114F61188048ABE684108A4FB069E07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RedirectToLevel.redirectToLevel = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		((RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_StaticFields*)il2cpp_codegen_static_fields_for(RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var))->___redirectToLevel_4 = L_1;
		// StartCoroutine(FadeIn());
		RuntimeObject* L_2;
		L_2 = LevelLoad_FadeIn_m8FC748BF2DADEF2C8054D686F0A5AE62F1C321AD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LevelLoad::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelLoad_FadeIn_m8FC748BF2DADEF2C8054D686F0A5AE62F1C321AD (LevelLoad_t01F90B5D3114F61188048ABE684108A4FB069E07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57* L_0 = (U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57*)il2cpp_codegen_object_new(U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57_il2cpp_TypeInfo_var);
		U3CFadeInU3Ed__2__ctor_m22A4E8A1FECCBA5F238D18411D79D9F5BB750F6D(L_0, 0, NULL);
		U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void LevelLoad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoad__ctor_m80AD66354F277899D3159524305DCF7302B111EC (LevelLoad_t01F90B5D3114F61188048ABE684108A4FB069E07* __this, const RuntimeMethod* method) 
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
// System.Void LevelLoad/<FadeIn>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__2__ctor_m22A4E8A1FECCBA5F238D18411D79D9F5BB750F6D (U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LevelLoad/<FadeIn>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__2_System_IDisposable_Dispose_m057D1027C88F4DD6604250C973670A372962D995 (U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LevelLoad/<FadeIn>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInU3Ed__2_MoveNext_m023466DC6654946E30B2CAF2498381451010B4CA (U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelLoad_t01F90B5D3114F61188048ABE684108A4FB069E07* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LevelLoad_t01F90B5D3114F61188048ABE684108A4FB069E07* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// fadeIn.SetActive(false);
		LevelLoad_t01F90B5D3114F61188048ABE684108A4FB069E07* L_5 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___fadeIn_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LevelLoad/<FadeIn>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD2869DF7E13F9664684D50BC7C21659A6F40F9F6 (U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LevelLoad/<FadeIn>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__2_System_Collections_IEnumerator_Reset_mEB3637D0D48CB3325EAB37F8615FF04D8E5CD6A0 (U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInU3Ed__2_System_Collections_IEnumerator_Reset_mEB3637D0D48CB3325EAB37F8615FF04D8E5CD6A0_RuntimeMethod_var)));
	}
}
// System.Object LevelLoad/<FadeIn>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__2_System_Collections_IEnumerator_get_Current_mEDBA640EF584A14359D595E117FB6A9145FEF410 (U3CFadeInU3Ed__2_t72A5C62F355A7D9EEDC50B41572B3E59A028CB57* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void RedirectToLevel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedirectToLevel_Update_mB4B1F05422099EC669258B4D7513308465381AAE (RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (redirectToLevel < SceneManager.sceneCountInBuildSettings)
		int32_t L_0 = ((RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_StaticFields*)il2cpp_codegen_static_fields_for(RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var))->___redirectToLevel_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SceneManager_get_sceneCountInBuildSettings_m414CDE36617596AC75C8E1A03DA65752A09A8944(NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		// SceneManager.LoadScene(redirectToLevel);
		int32_t L_2 = ((RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_StaticFields*)il2cpp_codegen_static_fields_for(RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14_il2cpp_TypeInfo_var))->___redirectToLevel_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_2, NULL);
		return;
	}

IL_0017:
	{
		// SceneManager.LoadScene(4);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(4, NULL);
		// }
		return;
	}
}
// System.Void RedirectToLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedirectToLevel__ctor_mF72353B64502A1F4E2D04DA491D52E186CD60EBB (RedirectToLevel_t6094774B685EC475622FDCDDA1559FD03DAAAB14* __this, const RuntimeMethod* method) 
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
// System.Void SplashToMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashToMenu_Start_mB4A082F35B485E068510A019C026777FDBD58FFE (SplashToMenu_t2F63243CBD1887689A3EF74E18BC24036F624205* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(RunSplash());
		RuntimeObject* L_0;
		L_0 = SplashToMenu_RunSplash_mFF7CC21467DAFAD782AFE1143EFF37A8B60C23CD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SplashToMenu::RunSplash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplashToMenu_RunSplash_mFF7CC21467DAFAD782AFE1143EFF37A8B60C23CD (SplashToMenu_t2F63243CBD1887689A3EF74E18BC24036F624205* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37* L_0 = (U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37*)il2cpp_codegen_object_new(U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37_il2cpp_TypeInfo_var);
		U3CRunSplashU3Ed__2__ctor_mD3F5139895E3113515EF14424744E5CB0ABFDCBF(L_0, 0, NULL);
		U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SplashToMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashToMenu__ctor_m65F18A861720AEBCBEFFF6856026765304A882B1 (SplashToMenu_t2F63243CBD1887689A3EF74E18BC24036F624205* __this, const RuntimeMethod* method) 
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
// System.Void SplashToMenu/<RunSplash>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunSplashU3Ed__2__ctor_mD3F5139895E3113515EF14424744E5CB0ABFDCBF (U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SplashToMenu/<RunSplash>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunSplashU3Ed__2_System_IDisposable_Dispose_m93E04D717B39D9FCF30CAC72A113901A30A71145 (U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SplashToMenu/<RunSplash>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRunSplashU3Ed__2_MoveNext_m121F8FE8904BEC232CE4EAF34ED5C6589B24E858 (U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SplashToMenu_t2F63243CBD1887689A3EF74E18BC24036F624205* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SplashToMenu_t2F63243CBD1887689A3EF74E18BC24036F624205* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_006e;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// logo.SetActive(true);
		SplashToMenu_t2F63243CBD1887689A3EF74E18BC24036F624205* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___logo_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// yield return new WaitForSeconds(4f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (4.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_006e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SplashToMenu/<RunSplash>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRunSplashU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m26C897D25DD8D5ADCFED33DC7C38E6D108AC642B (U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SplashToMenu/<RunSplash>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunSplashU3Ed__2_System_Collections_IEnumerator_Reset_m662D25A6BECB6E851BF1E1EB521D5701CB704C16 (U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRunSplashU3Ed__2_System_Collections_IEnumerator_Reset_m662D25A6BECB6E851BF1E1EB521D5701CB704C16_RuntimeMethod_var)));
	}
}
// System.Object SplashToMenu/<RunSplash>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRunSplashU3Ed__2_System_Collections_IEnumerator_get_Current_m67FEC65EBD95597DB3AC408F33A01B7620231B3F (U3CRunSplashU3Ed__2_tCAF52CD3ED2AC3276D274054B65FF44EA6E24B37* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Acid::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Acid_OnTriggerEnter_mA91CB10943EE8539C2E670D5197CE8B0C533125E (Acid_t27E874BDDBDB90064E95982B37181DEE3D822342* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// FindObjectOfType<GameManager>().Death_Acid();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2;
		L_2 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		GameManager_Death_Acid_m12B6D674BC725FC321DCCD469775ADBE0BBE3A4A(L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Acid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Acid__ctor_m431EC1F99812BBD0206EF391E5CCC778A17EE88A (Acid_t27E874BDDBDB90064E95982B37181DEE3D822342* __this, const RuntimeMethod* method) 
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
// System.Void Ocean::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ocean_OnTriggerEnter_mA5459C2567F4F3F05A542C1DCBD2DDAA2817F5A9 (Ocean_t802B83C805A66CCE7D2A2D2B927A8CFE531D5FEB* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// FindObjectOfType<GameManager>().Death_Ocean();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2;
		L_2 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		GameManager_Death_Ocean_m2066F15025E73D576D9CA560FBD669BA5C6CEF93(L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Ocean::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ocean__ctor_mF89DD21C71857EBC687DA2F1970D88CE928FA8F5 (Ocean_t802B83C805A66CCE7D2A2D2B927A8CFE531D5FEB* __this, const RuntimeMethod* method) 
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
// System.Void PauseGame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame_Update_m9507F53042EDEAE0B180020D2D29B8AD19E32069 (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Cancel"))
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, NULL);
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		// if (gamePause == false)
		bool L_1 = ((PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_StaticFields*)il2cpp_codegen_static_fields_for(PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var))->___gamePause_4;
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// gamePause = true;
		((PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_StaticFields*)il2cpp_codegen_static_fields_for(PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var))->___gamePause_4 = (bool)1;
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// pauseMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pauseMenu_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		return;
	}

IL_0036:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// gamePause = false;
		((PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_StaticFields*)il2cpp_codegen_static_fields_for(PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF_il2cpp_TypeInfo_var))->___gamePause_4 = (bool)0;
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// pauseMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___pauseMenu_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void PauseGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame__ctor_m40F04C5BDA467AE03A77CA6D7A4080F85CAA4056 (PauseGame_tA617E7404B2C12C16017D336A87E11CE8FBAAECF* __this, const RuntimeMethod* method) 
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
// System.Void PlatformGripper::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformGripper_OnTriggerEnter_m233C86A3931F8989DCC707B3E10207E6CD243FF4 (PlatformGripper_t05FDBF0B651F1CA664DD46A266F653F42965BF1C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// other.transform.SetParent(transform);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void PlatformGripper::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformGripper_OnTriggerExit_m90A8644FB23F4C8D1B41AD493415F27559B338D2 (PlatformGripper_t05FDBF0B651F1CA664DD46A266F653F42965BF1C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// other.transform.SetParent(null);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_1, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// }
		return;
	}
}
// System.Void PlatformGripper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformGripper__ctor_mC5407BAE6AF434ABEC8FB5584EFBF04ACA5F2D1D (PlatformGripper_t05FDBF0B651F1CA664DD46A266F653F42965BF1C* __this, const RuntimeMethod* method) 
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
// System.Void RollCredit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RollCredit_Start_m555E83B2595648B7902809157B4947E3A040B344 (RollCredit_tE060A94459FE00DBD6BE3D552AB720101451614F* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Credit());
		RuntimeObject* L_0;
		L_0 = RollCredit_Credit_m4CD7491C3458746F738ABE2BF69A9A88DEE5BC8B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator RollCredit::Credit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RollCredit_Credit_m4CD7491C3458746F738ABE2BF69A9A88DEE5BC8B (RollCredit_tE060A94459FE00DBD6BE3D552AB720101451614F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020* L_0 = (U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020*)il2cpp_codegen_object_new(U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020_il2cpp_TypeInfo_var);
		U3CCreditU3Ed__2__ctor_m59D27CF6E301FB9BABD0CD513D50133391B03B3A(L_0, 0, NULL);
		U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void RollCredit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RollCredit__ctor_m6673943D700B58532E7ACF4251638169EC314583 (RollCredit_tE060A94459FE00DBD6BE3D552AB720101451614F* __this, const RuntimeMethod* method) 
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
// System.Void RollCredit/<Credit>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreditU3Ed__2__ctor_m59D27CF6E301FB9BABD0CD513D50133391B03B3A (U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RollCredit/<Credit>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreditU3Ed__2_System_IDisposable_Dispose_m7E31E0444FD182744B9EF33BD251706CAF66015E (U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RollCredit/<Credit>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreditU3Ed__2_MoveNext_m9BB6E788B1214B3F4851B59A727A2794F35FBA34 (U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RollCredit_tE060A94459FE00DBD6BE3D552AB720101451614F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RollCredit_tE060A94459FE00DBD6BE3D552AB720101451614F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_006e;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// credit.SetActive(true);
		RollCredit_tE060A94459FE00DBD6BE3D552AB720101451614F* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___credit_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// yield return new WaitForSeconds(10);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (10.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_006e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object RollCredit/<Credit>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreditU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1BB93B0BA6F0A3730C7C4E7697D4DB842851EAE4 (U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RollCredit/<Credit>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreditU3Ed__2_System_Collections_IEnumerator_Reset_m9120F47D05A04977C6BF1CEE7638098C446BB3DD (U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreditU3Ed__2_System_Collections_IEnumerator_Reset_m9120F47D05A04977C6BF1CEE7638098C446BB3DD_RuntimeMethod_var)));
	}
}
// System.Object RollCredit/<Credit>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreditU3Ed__2_System_Collections_IEnumerator_get_Current_m90B3001C33CE0C461F8CE6DA35096B1983122478 (U3CCreditU3Ed__2_t388D08A4CB7CD0F47744DFA1AE6DDF9BF1EB7020* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void SkyRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyRotate_Update_mE41C523B269644FE02AE3248D81659B1F98098F2 (SkyRotate_t36D70D1B58732415ED35D7C9D3747E1DC9C6B089* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2F8A73F36BC9F8340CA51E5D8320663390E37DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RenderSettings.skybox.SetFloat("_Rotation", Time.time * rotateSpeed);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = RenderSettings_get_skybox_m1738CCDBAFAA20797D174DB97066440B10FBCE6F(NULL);
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___rotateSpeed_4;
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteralF2F8A73F36BC9F8340CA51E5D8320663390E37DC, ((float)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		// }
		return;
	}
}
// System.Void SkyRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyRotate__ctor_m46015A0CF416C39FF62BD2A5CE78FC62EAA02717 (SkyRotate_t36D70D1B58732415ED35D7C9D3747E1DC9C6B089* __this, const RuntimeMethod* method) 
{
	{
		// public float rotateSpeed = 1.2f;
		__this->___rotateSpeed_4 = (1.20000005f);
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
// System.Void ThanksScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThanksScene_Start_m1F08FF96F8C32B0DD1DFC453E99C60D7F98FD17F (ThanksScene_t808D69210E37A71C26C52CEBE9A9D0E8AE1A4D1C* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Thanks());
		RuntimeObject* L_0;
		L_0 = ThanksScene_Thanks_mD0DB0E0D102997325393FD5C35C18EA2BAEE5F65(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ThanksScene::Thanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ThanksScene_Thanks_mD0DB0E0D102997325393FD5C35C18EA2BAEE5F65 (ThanksScene_t808D69210E37A71C26C52CEBE9A9D0E8AE1A4D1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7* L_0 = (U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7*)il2cpp_codegen_object_new(U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7_il2cpp_TypeInfo_var);
		U3CThanksU3Ed__2__ctor_mCC48092326CA6E6680D78586E49FC1CD260B1995(L_0, 0, NULL);
		U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ThanksScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThanksScene__ctor_m30E60E7788685F85038886F72539923558AD9F63 (ThanksScene_t808D69210E37A71C26C52CEBE9A9D0E8AE1A4D1C* __this, const RuntimeMethod* method) 
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
// System.Void ThanksScene/<Thanks>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CThanksU3Ed__2__ctor_mCC48092326CA6E6680D78586E49FC1CD260B1995 (U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ThanksScene/<Thanks>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CThanksU3Ed__2_System_IDisposable_Dispose_mFF77D578D3EDA05E1A1AF45C7FBFDC7F74FE5112 (U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ThanksScene/<Thanks>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CThanksU3Ed__2_MoveNext_m46110AFCB3C6D0C44F0B4585085524BA7806C9B5 (U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ThanksScene_t808D69210E37A71C26C52CEBE9A9D0E8AE1A4D1C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ThanksScene_t808D69210E37A71C26C52CEBE9A9D0E8AE1A4D1C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// content.SetActive(true);
		ThanksScene_t808D69210E37A71C26C52CEBE9A9D0E8AE1A4D1C* L_5 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___content_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ThanksScene/<Thanks>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CThanksU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8C382587DA9210162EBD9296CE66AB2E36127502 (U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ThanksScene/<Thanks>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CThanksU3Ed__2_System_Collections_IEnumerator_Reset_m54B430CBB16BC77AF3F2BA7D252AE67BA8E4F1CB (U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CThanksU3Ed__2_System_Collections_IEnumerator_Reset_m54B430CBB16BC77AF3F2BA7D252AE67BA8E4F1CB_RuntimeMethod_var)));
	}
}
// System.Object ThanksScene/<Thanks>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CThanksU3Ed__2_System_Collections_IEnumerator_get_Current_mFA7B800C5088FA40EEEA6924084F14985358252D (U3CThanksU3Ed__2_t4A136B6CD1C4B3503D120747C4F7AF7B1B12D3C7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Unsafe_Ground::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Ground_OnTriggerEnter_m68C522A93C3E2E0B1BC6359520F5217B1125503C (Unsafe_Ground_tB3CE2542B447BBB9FA5105477AE572C0AF9A123E* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// FindObjectOfType<GameManager>().Death_Unsafe_Ground();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2;
		L_2 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		GameManager_Death_Unsafe_Ground_mDC9344F90E6360CD8766214F38C4EB9478B85272(L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Unsafe_Ground::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Ground__ctor_mCF29DC3A419E8EF42CC6F0F197DE9558C7E8537D (Unsafe_Ground_tB3CE2542B447BBB9FA5105477AE572C0AF9A123E* __this, const RuntimeMethod* method) 
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
// System.Void BasicRigidBodyPush::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_OnControllerColliderHit_mAB4A1B5340D41961D9592034FE626BC8A8FC379E (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	{
		// if (canPush) PushRigidBodies(hit);
		bool L_0 = __this->___canPush_5;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (canPush) PushRigidBodies(hit);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_1 = ___hit0;
		BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13(__this, L_1, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void BasicRigidBodyPush::PushRigidBodies(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Rigidbody body = hit.collider.attachedRigidbody;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_0 = ___hit0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6(L_0, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_1, NULL);
		V_0 = L_2;
		// if (body == null || body.isKinematic) return;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = V_0;
		bool L_6;
		L_6 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_5, NULL);
		if (!L_6)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// if (body == null || body.isKinematic) return;
		return;
	}

IL_001e:
	{
		// var bodyLayerMask = 1 << body.gameObject.layer;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		int32_t L_9;
		L_9 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_8, NULL);
		// if ((bodyLayerMask & pushLayers.value) == 0) return;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_10 = (&__this->___pushLayers_4);
		int32_t L_11;
		L_11 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_10, NULL);
		if (((int32_t)(((int32_t)(1<<((int32_t)(L_9&((int32_t)31)))))&L_11)))
		{
			goto IL_003d;
		}
	}
	{
		// if ((bodyLayerMask & pushLayers.value) == 0) return;
		return;
	}

IL_003d:
	{
		// if (hit.moveDirection.y < -0.3f) return;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_12 = ___hit0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_12, NULL);
		float L_14 = L_13.___y_3;
		if ((!(((float)L_14) < ((float)(-0.300000012f)))))
		{
			goto IL_0050;
		}
	}
	{
		// if (hit.moveDirection.y < -0.3f) return;
		return;
	}

IL_0050:
	{
		// Vector3 pushDir = new Vector3(hit.moveDirection.x, 0.0f, hit.moveDirection.z);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_15 = ___hit0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_15, NULL);
		float L_17 = L_16.___x_2;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_18 = ___hit0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_18, NULL);
		float L_20 = L_19.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_17, (0.0f), L_20, NULL);
		// body.AddForce(pushDir * strength, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		float L_23 = __this->___strength_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_21, L_24, 1, NULL);
		// }
		return;
	}
}
// System.Void BasicRigidBodyPush::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush__ctor_mCD0033473AC08BFF32309E49AE95271C711099A9 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0.5f, 5f)] public float strength = 1.1f;
		__this->___strength_6 = (1.10000002f);
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
// System.Void MobileDisableAutoSwitchControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls__ctor_mF934985411953E473C075F0C8680F75C118E8FCC (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) 
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
// System.Void UIVirtualButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerDown_m1B73262454FA610913DA71F1C0792FD780787D56 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonStateValue(true);
		UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerUp_mD67F7DFB29033E7C84A2F41C31FA3CFDA1174C8B (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonStateValue(false);
		UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerClick_m3FEAAD559F8262DC2C8A8E91C85765E327CDB8FC (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonClickEvent();
		UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, bool ___buttonState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonStateOutputEvent.Invoke(buttonState);
		BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* L_0 = __this->___buttonStateOutputEvent_4;
		bool L_1 = ___buttonState0;
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_0, L_1, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) 
{
	{
		// buttonClickOutputEvent.Invoke();
		Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* L_0 = __this->___buttonClickOutputEvent_5;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton__ctor_m2CF3E3351F342BF028B0B89C015137EDF0D1B8D7 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) 
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
// System.Void UIVirtualButton/BoolEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolEvent__ctor_m42AA0406D1CB826FFD96A45AE4FFD71224A581D7 (BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(__this, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
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
// System.Void UIVirtualButton/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mF10E167E7BE71239919769A3884196FF8581BC95 (Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* __this, const RuntimeMethod* method) 
{
	{
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(__this, NULL);
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
// System.Void UIVirtualJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_Start_mD2D5C68628D62647018960CBF87655E0D13D845C (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	{
		// SetupHandle();
		UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerDown_m2CADC0629A70249CC581C3DEF77A2D70558DF2B5 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out Vector2 position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, (&V_0), NULL);
		// position = ApplySizeDelta(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB(__this, L_6, NULL);
		V_0 = L_7;
		// Vector2 clampedPosition = ClampValuesToMagnitude(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E(__this, L_8, NULL);
		V_1 = L_9;
		// Vector2 outputPosition = ApplyInversionFilter(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E(__this, L_10, NULL);
		V_2 = L_11;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = __this->___magnitudeMultiplier_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_12, L_13, NULL);
		UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6(__this, L_14, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0063;
		}
	}
	{
		// UpdateHandleRectPosition(clampedPosition * joystickRange);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		float L_18 = __this->___joystickRange_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_17, L_18, NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_19, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerUp_m32B1B96876A1AD9636D7119CF428E8A9441379EA (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OutputPointerEventValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6(__this, L_0, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_3, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joystickOutputEvent.Invoke(pointerPosition);
		Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* L_0 = __this->___joystickOutputEvent_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___pointerPosition0;
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_0, L_1, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) 
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPosition0;
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float x = (position.x/containerRect.sizeDelta.x) * 2.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		float L_1 = L_0.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___containerRect_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_2, NULL);
		float L_4 = L_3.___x_0;
		// float y = (position.y/containerRect.sizeDelta.y) * 2.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___containerRect_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		float L_9 = L_8.___y_1;
		V_0 = ((float)il2cpp_codegen_multiply(((float)(L_6/L_9)), (2.5f)));
		// return new Vector2(x, y);
		float L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)il2cpp_codegen_multiply(((float)(L_1/L_4)), (2.5f))), L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline(L_0, (1.0f), NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->___invertXOutputValue_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507(__this, L_2, NULL);
		(&___position0)->___x_0 = L_3;
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->___invertYOutputValue_9;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507(__this, L_6, NULL);
		(&___position0)->___y_1 = L_7;
	}

IL_0036:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick__ctor_m8526A96A470D77A141CAD1D824FF8DC137B63415 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	{
		// public float joystickRange = 50f;
		__this->___joystickRange_6 = (50.0f);
		// public float magnitudeMultiplier = 1f;
		__this->___magnitudeMultiplier_7 = (1.0f);
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
// System.Void UIVirtualJoystick/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m89D370961FB9424418084FD7CC1FFF237A4606C5 (Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
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
// System.Void UIVirtualTouchZone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_Start_m5178EDEC0B12F59242283DD29F480CFA00D77676 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	{
		// SetupHandle();
		UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___handleRect_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_3, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerDown_m8FD8081376FC0AEEDDF7F4ADF1B9C6624D358DEE (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out pointerDownPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___pointerDownPosition_10);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, L_5, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___handleRect_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_10, (bool)1, NULL);
		// UpdateHandleRectPosition(pointerDownPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___pointerDownPosition_10;
		UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E(__this, L_11, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnDrag_m018815333D4A45EC9288289C3230B446F86F522F (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out currentPointerPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___currentPointerPosition_11);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, L_5, NULL);
		// Vector2 positionDelta = GetDeltaBetweenPositions(pointerDownPosition, currentPointerPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___pointerDownPosition_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___currentPointerPosition_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B(__this, L_7, L_8, NULL);
		V_0 = L_9;
		// Vector2 clampedPosition = ClampValuesToMagnitude(positionDelta);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95(__this, L_10, NULL);
		V_1 = L_11;
		// Vector2 outputPosition = ApplyInversionFilter(clampedPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823(__this, L_12, NULL);
		V_2 = L_13;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		float L_15 = __this->___magnitudeMultiplier_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_14, L_15, NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF(__this, L_16, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerUp_m6572F60C16F6D09A07FDE778F69FD710E06315A5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointerDownPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___pointerDownPosition_10 = L_0;
		// currentPointerPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___currentPointerPosition_11 = L_1;
		// OutputPointerEventValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF(__this, L_2, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___handleRect_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_6, (bool)0, NULL);
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E(__this, L_7, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchZoneOutputEvent.Invoke(pointerPosition);
		Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* L_0 = __this->___touchZoneOutputEvent_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___pointerPosition0;
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_0, L_1, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) 
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPosition0;
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, bool ___newState1, const RuntimeMethod* method) 
{
	{
		// targetObject.SetActive(newState);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		bool L_1 = ___newState1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___firstPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondPosition1, const RuntimeMethod* method) 
{
	{
		// return secondPosition - firstPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___secondPosition1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___firstPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline(L_0, (1.0f), NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->___invertXOutputValue_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA(__this, L_2, NULL);
		(&___position0)->___x_0 = L_3;
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->___invertYOutputValue_9;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA(__this, L_6, NULL);
		(&___position0)->___y_1 = L_7;
	}

IL_0036:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualTouchZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone__ctor_m3FA22B25B88E7ECBBB54AF2464EFB9A978D76CC6 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	{
		// public float magnitudeMultiplier = 1f;
		__this->___magnitudeMultiplier_7 = (1.0f);
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
// System.Void UIVirtualTouchZone/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m5EC032D776C29C6281EF446F93420F4DB87B6728 (Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
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
// System.Boolean StarterAssets.FirstPersonController::get_IsCurrentDeviceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirstPersonController_get_IsCurrentDeviceMouse_mBD2A02E3A33E0A4074283C7CD2C40BAC507278B0 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _playerInput.currentControlScheme == "KeyboardMouse";
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->____playerInput_26;
		String_t* L_1;
		L_1 = PlayerInput_get_currentControlScheme_mA70B5C50BA1A61D2E232F17730BAECD3F690204C(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940, NULL);
		return L_2;
	}
}
// System.Void StarterAssets.FirstPersonController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Awake_m97115C4294DCE20924F5649107DF575C3BF59A3F (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_mainCamera == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____mainCamera_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		__this->____mainCamera_29 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_29), (void*)L_2);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Start_m73BF516410ACFA61B3E3745C037FED856B180689 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _controller = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->____controller_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controller_27), (void*)L_0);
		// _input = GetComponent<StarterAssetsInputs>();
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_1;
		L_1 = Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC(__this, Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		__this->____input_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____input_28), (void*)L_1);
		// _playerInput = GetComponent<PlayerInput>();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_2;
		L_2 = Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89(__this, Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		__this->____playerInput_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerInput_26), (void*)L_2);
		// _jumpTimeoutDelta = JumpTimeout;
		float L_3 = __this->___JumpTimeout_10;
		__this->____jumpTimeoutDelta_24 = L_3;
		// _fallTimeoutDelta = FallTimeout;
		float L_4 = __this->___FallTimeout_11;
		__this->____fallTimeoutDelta_25 = L_4;
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Update_mA9100327050EDD5A4EDFC1F770FD65E9E4F44A64 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	{
		// JumpAndGravity();
		FirstPersonController_JumpAndGravity_mE8E57E5D89BE4289C81F1D668AB99588356FD44A(__this, NULL);
		// GroundedCheck();
		FirstPersonController_GroundedCheck_mBD7B0C905A60ED82AD81BD5E8124C309688AB5D6(__this, NULL);
		// Move();
		FirstPersonController_Move_mD3B86419A063305FAF1598ED1FDE790B407A20F3(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_LateUpdate_mDD87A9960299EB96B38E5DC1359C350B6F679A98 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	{
		// CameraRotation();
		FirstPersonController_CameraRotation_m8D6B31A95A1DDF1B34ECD3806E6052F255781D8D(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GroundedCheck_mBD7B0C905A60ED82AD81BD5E8124C309688AB5D6 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		float L_6 = __this->___GroundedOffset_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_2, ((float)il2cpp_codegen_subtract(L_5, L_6)), L_9, NULL);
		// Grounded = Physics.CheckSphere(spherePosition, GroundedRadius, GroundLayers, QueryTriggerInteraction.Ignore);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___GroundedRadius_14;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = __this->___GroundLayers_15;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_12, NULL);
		bool L_14;
		L_14 = Physics_CheckSphere_mC32BB961B0CF9D23EDDEEC3F30021FD1BE88E261(L_10, L_11, L_13, 1, NULL);
		__this->___Grounded_12 = L_14;
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_CameraRotation_m8D6B31A95A1DDF1B34ECD3806E6052F255781D8D (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// if (_input.look.sqrMagnitude >= _threshold)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&L_0->___look_5);
		float L_2;
		L_2 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_1, NULL);
		if ((!(((float)L_2) >= ((float)(0.00999999978f)))))
		{
			goto IL_00d1;
		}
	}
	{
		// float deltaTimeMultiplier = IsCurrentDeviceMouse ? 1.0f : Time.deltaTime;
		bool L_3;
		L_3 = FirstPersonController_get_IsCurrentDeviceMouse_mBD2A02E3A33E0A4074283C7CD2C40BAC507278B0(__this, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B4_0 = L_4;
		goto IL_002e;
	}

IL_0029:
	{
		G_B4_0 = (1.0f);
	}

IL_002e:
	{
		V_0 = G_B4_0;
		// _cinemachineTargetPitch += _input.look.y * RotationSpeed * deltaTimeMultiplier;
		float L_5 = __this->____cinemachineTargetPitch_19;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_6 = __this->____input_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&L_6->___look_5);
		float L_8 = L_7->___y_1;
		float L_9 = __this->___RotationSpeed_6;
		float L_10 = V_0;
		__this->____cinemachineTargetPitch_19 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), L_10))));
		// _rotationVelocity = _input.look.x * RotationSpeed * deltaTimeMultiplier;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_11 = __this->____input_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&L_11->___look_5);
		float L_13 = L_12->___x_0;
		float L_14 = __this->___RotationSpeed_6;
		float L_15 = V_0;
		__this->____rotationVelocity_21 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15));
		// _cinemachineTargetPitch = ClampAngle(_cinemachineTargetPitch, BottomClamp, TopClamp);
		float L_16 = __this->____cinemachineTargetPitch_19;
		float L_17 = __this->___BottomClamp_18;
		float L_18 = __this->___TopClamp_17;
		float L_19;
		L_19 = FirstPersonController_ClampAngle_m2B9F299C2F735DBC14DD608696F8515B1428F5C8(L_16, L_17, L_18, NULL);
		__this->____cinemachineTargetPitch_19 = L_19;
		// CinemachineCameraTarget.transform.localRotation = Quaternion.Euler(_cinemachineTargetPitch, 0.0f, 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___CinemachineCameraTarget_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		float L_22 = __this->____cinemachineTargetPitch_19;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_22, (0.0f), (0.0f), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_21, L_23, NULL);
		// transform.Rotate(Vector3.up * _rotationVelocity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_26 = __this->____rotationVelocity_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_24, L_27, NULL);
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Move_mD3B86419A063305FAF1598ED1FDE790B407A20F3 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float G_B3_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		// float targetSpeed = _input.sprint ? SprintSpeed : MoveSpeed;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_28;
		bool L_1 = L_0->___sprint_7;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = __this->___MoveSpeed_4;
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		float L_3 = __this->___SprintSpeed_5;
		G_B3_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_4 = __this->____input_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = L_4->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_7;
		L_7 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		V_0 = (0.0f);
	}

IL_0039:
	{
		// float currentHorizontalSpeed = new Vector3(_controller.velocity.x, 0.0f, _controller.velocity.z).magnitude;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->____controller_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_8, NULL);
		float L_10 = L_9.___x_2;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->____controller_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_10, (0.0f), L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_5), NULL);
		V_1 = L_15;
		// float speedOffset = 0.1f;
		V_2 = (0.100000001f);
		// float inputMagnitude = _input.analogMovement ? _input.move.magnitude : 1f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_16 = __this->____input_28;
		bool L_17 = L_16->___analogMovement_8;
		if (L_17)
		{
			goto IL_0087;
		}
	}
	{
		G_B8_0 = (1.0f);
		goto IL_0097;
	}

IL_0087:
	{
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_18 = __this->____input_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&L_18->___move_4);
		float L_20;
		L_20 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_19, NULL);
		G_B8_0 = L_20;
	}

IL_0097:
	{
		V_3 = G_B8_0;
		// if (currentHorizontalSpeed < targetSpeed - speedOffset || currentHorizontalSpeed > targetSpeed + speedOffset)
		float L_21 = V_1;
		float L_22 = V_0;
		float L_23 = V_2;
		if ((((float)L_21) < ((float)((float)il2cpp_codegen_subtract(L_22, L_23)))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_24 = V_1;
		float L_25 = V_0;
		float L_26 = V_2;
		if ((!(((float)L_24) > ((float)((float)il2cpp_codegen_add(L_25, L_26))))))
		{
			goto IL_00de;
		}
	}

IL_00a4:
	{
		// _speed = Mathf.Lerp(currentHorizontalSpeed, targetSpeed * inputMagnitude, Time.deltaTime * SpeedChangeRate);
		float L_27 = V_1;
		float L_28 = V_0;
		float L_29 = V_3;
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_31 = __this->___SpeedChangeRate_7;
		float L_32;
		L_32 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_27, ((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_30, L_31)), NULL);
		__this->____speed_20 = L_32;
		// _speed = Mathf.Round(_speed * 1000f) / 1000f;
		float L_33 = __this->____speed_20;
		float L_34;
		L_34 = bankers_roundf(((float)il2cpp_codegen_multiply(L_33, (1000.0f))));
		__this->____speed_20 = ((float)(L_34/(1000.0f)));
		goto IL_00e5;
	}

IL_00de:
	{
		// _speed = targetSpeed;
		float L_35 = V_0;
		__this->____speed_20 = L_35;
	}

IL_00e5:
	{
		// Vector3 inputDirection = new Vector3(_input.move.x, 0.0f, _input.move.y).normalized;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_36 = __this->____input_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_37 = (&L_36->___move_4);
		float L_38 = L_37->___x_0;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_39 = __this->____input_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = (&L_39->___move_4);
		float L_41 = L_40->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), L_38, (0.0f), L_41, /*hidden argument*/NULL);
		V_5 = L_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		V_4 = L_43;
		// if (_input.move != Vector2.zero)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_44 = __this->____input_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = L_44->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_47;
		L_47 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_45, L_46, NULL);
		if (!L_47)
		{
			goto IL_0178;
		}
	}
	{
		// inputDirection = transform.right * _input.move.x + transform.forward * _input.move.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_48, NULL);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_50 = __this->____input_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_51 = (&L_50->___move_4);
		float L_52 = L_51->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_49, L_52, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_54, NULL);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_56 = __this->____input_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_57 = (&L_56->___move_4);
		float L_58 = L_57->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_55, L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_53, L_59, NULL);
		V_4 = L_60;
	}

IL_0178:
	{
		// _controller.Move(inputDirection.normalized * (_speed * Time.deltaTime) + new Vector3(0.0f, _verticalVelocity, 0.0f) * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_61 = __this->____controller_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_63 = __this->____speed_20;
		float L_64;
		L_64 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_62, ((float)il2cpp_codegen_multiply(L_63, L_64)), NULL);
		float L_66 = __this->____verticalVelocity_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_67), (0.0f), L_66, (0.0f), /*hidden argument*/NULL);
		float L_68;
		L_68 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_67, L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_65, L_69, NULL);
		int32_t L_71;
		L_71 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_61, L_70, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_JumpAndGravity_mE8E57E5D89BE4289C81F1D668AB99588356FD44A (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	{
		// if (Grounded)
		bool L_0 = __this->___Grounded_12;
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		// _fallTimeoutDelta = FallTimeout;
		float L_1 = __this->___FallTimeout_11;
		__this->____fallTimeoutDelta_25 = L_1;
		// if (_verticalVelocity < 0.0f)
		float L_2 = __this->____verticalVelocity_22;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// _verticalVelocity = -2f;
		__this->____verticalVelocity_22 = (-2.0f);
	}

IL_002c:
	{
		// if (_input.jump && _jumpTimeoutDelta <= 0.0f)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_3 = __this->____input_28;
		bool L_4 = L_3->___jump_6;
		if (!L_4)
		{
			goto IL_0064;
		}
	}
	{
		float L_5 = __this->____jumpTimeoutDelta_24;
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		// _verticalVelocity = Mathf.Sqrt(JumpHeight * -2f * Gravity);
		float L_6 = __this->___JumpHeight_8;
		float L_7 = __this->___Gravity_9;
		float L_8;
		L_8 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, (-2.0f))), L_7)));
		__this->____verticalVelocity_22 = L_8;
	}

IL_0064:
	{
		// if (_jumpTimeoutDelta >= 0.0f)
		float L_9 = __this->____jumpTimeoutDelta_24;
		if ((!(((float)L_9) >= ((float)(0.0f)))))
		{
			goto IL_00bc;
		}
	}
	{
		// _jumpTimeoutDelta -= Time.deltaTime;
		float L_10 = __this->____jumpTimeoutDelta_24;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____jumpTimeoutDelta_24 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		goto IL_00bc;
	}

IL_0085:
	{
		// _jumpTimeoutDelta = JumpTimeout;
		float L_12 = __this->___JumpTimeout_10;
		__this->____jumpTimeoutDelta_24 = L_12;
		// if (_fallTimeoutDelta >= 0.0f)
		float L_13 = __this->____fallTimeoutDelta_25;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_00b0;
		}
	}
	{
		// _fallTimeoutDelta -= Time.deltaTime;
		float L_14 = __this->____fallTimeoutDelta_25;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____fallTimeoutDelta_25 = ((float)il2cpp_codegen_subtract(L_14, L_15));
	}

IL_00b0:
	{
		// _input.jump = false;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_16 = __this->____input_28;
		L_16->___jump_6 = (bool)0;
	}

IL_00bc:
	{
		// if (_verticalVelocity < _terminalVelocity)
		float L_17 = __this->____verticalVelocity_22;
		float L_18 = __this->____terminalVelocity_23;
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_00e3;
		}
	}
	{
		// _verticalVelocity += Gravity * Time.deltaTime;
		float L_19 = __this->____verticalVelocity_22;
		float L_20 = __this->___Gravity_9;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____verticalVelocity_22 = ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_multiply(L_20, L_21))));
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Single StarterAssets.FirstPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FirstPersonController_ClampAngle_m2B9F299C2F735DBC14DD608696F8515B1428F5C8 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method) 
{
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_0 = ___lfAngle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_1 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_2 = ___lfAngle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_3 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(lfAngle, lfMin, lfMax);
		float L_4 = ___lfAngle0;
		float L_5 = ___lfMin1;
		float L_6 = ___lfMax2;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void StarterAssets.FirstPersonController::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_OnDrawGizmosSelected_m99F84F3AB717811D6824B6E38099E4B39811D2D7 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Color transparentGreen = new Color(0.0f, 1.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.0f), (1.0f), (0.0f), (0.349999994f), NULL);
		// Color transparentRed = new Color(1.0f, 0.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_1), (1.0f), (0.0f), (0.0f), (0.349999994f), NULL);
		// if (Grounded) Gizmos.color = transparentGreen;
		bool L_0 = __this->___Grounded_12;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		// if (Grounded) Gizmos.color = transparentGreen;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_1, NULL);
		goto IL_004c;
	}

IL_0046:
	{
		// else Gizmos.color = transparentRed;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_1;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_2, NULL);
	}

IL_004c:
	{
		// Gizmos.DrawSphere(new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z), GroundedRadius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		float L_9 = __this->___GroundedOffset_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_5, ((float)il2cpp_codegen_subtract(L_8, L_9)), L_12, /*hidden argument*/NULL);
		float L_14 = __this->___GroundedRadius_14;
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController__ctor_mF29161500094F25943059DAFCA9CABCC1F1BA3A5 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed = 4.0f;
		__this->___MoveSpeed_4 = (4.0f);
		// public float SprintSpeed = 6.0f;
		__this->___SprintSpeed_5 = (6.0f);
		// public float RotationSpeed = 1.0f;
		__this->___RotationSpeed_6 = (1.0f);
		// public float SpeedChangeRate = 10.0f;
		__this->___SpeedChangeRate_7 = (10.0f);
		// public float JumpHeight = 1.2f;
		__this->___JumpHeight_8 = (1.20000005f);
		// public float Gravity = -15.0f;
		__this->___Gravity_9 = (-15.0f);
		// public float JumpTimeout = 0.1f;
		__this->___JumpTimeout_10 = (0.100000001f);
		// public float FallTimeout = 0.15f;
		__this->___FallTimeout_11 = (0.150000006f);
		// public bool Grounded = true;
		__this->___Grounded_12 = (bool)1;
		// public float GroundedOffset = -0.14f;
		__this->___GroundedOffset_13 = (-0.140000001f);
		// public float GroundedRadius = 0.5f;
		__this->___GroundedRadius_14 = (0.5f);
		// public float TopClamp = 90.0f;
		__this->___TopClamp_17 = (90.0f);
		// public float BottomClamp = -90.0f;
		__this->___BottomClamp_18 = (-90.0f);
		// private float _terminalVelocity = 53.0f;
		__this->____terminalVelocity_23 = (53.0f);
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
// System.Void StarterAssets.StarterAssetsInputs::OnMove(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnMove_m1037EAE12A06BEF9F73CAF4A3127C6A9CF4D6532 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MoveInput(value.Get<Vector2>());
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnLook(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnLook_m457792363F0A68571BD7A917C44B1A0B1C5D7EC4 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(cursorInputForLook)
		bool L_0 = __this->___cursorInputForLook_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// LookInput(value.Get<Vector2>());
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_1 = ___value0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_1, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline(__this, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnJump(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnJump_m077D720656D5B78D423A5D7E0194BA2D9DE089E4 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	{
		// JumpInput(value.isPressed);
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		bool L_1;
		L_1 = InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F(L_0, NULL);
		StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnSprint(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnSprint_m8FF0D36964527B10A1A14E55A9EE4025C1AFF0EF (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	{
		// SprintInput(value.isPressed);
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		bool L_1;
		L_1 = InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F(L_0, NULL);
		StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) 
{
	{
		// move = newMoveDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newMoveDirection0;
		__this->___move_4 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) 
{
	{
		// look = newLookDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newLookDirection0;
		__this->___look_5 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) 
{
	{
		// jump = newJumpState;
		bool L_0 = ___newJumpState0;
		__this->___jump_6 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) 
{
	{
		// sprint = newSprintState;
		bool L_0 = ___newSprintState0;
		__this->___sprint_7 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnApplicationFocus_m461C49F2AC387B76D98B87A98BA38A0289C34EA9 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	{
		// SetCursorState(cursorLocked);
		bool L_0 = __this->___cursorLocked_9;
		StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::SetCursorState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newState0, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// Cursor.lockState = newState ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_0 = ___newState0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs__ctor_m1A0CAEE3381A63077E196B7C815859617C9BCDBA (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, const RuntimeMethod* method) 
{
	{
		// public bool cursorLocked = true;
		__this->___cursorLocked_9 = (bool)1;
		// public bool cursorInputForLook = true;
		__this->___cursorInputForLook_10 = (bool)1;
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
// System.Void StarterAssets.UICanvasControllerInput::VirtualMoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualMoveInput_m56E41472A26B3A6B517D63844304F7196FFF449C (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___virtualMoveDirection0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.MoveInput(virtualMoveDirection);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___virtualMoveDirection0;
		StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualLookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualLookInput_m88A9B7AC7F338CFBEC98FBBBD2EC8793C1C8288E (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___virtualLookDirection0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.LookInput(virtualLookDirection);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___virtualLookDirection0;
		StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualJumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualJumpInput_m45600335B430348707B730FFA2FCB334E8D807FE (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, bool ___virtualJumpState0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.JumpInput(virtualJumpState);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		bool L_1 = ___virtualJumpState0;
		StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualSprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualSprintInput_m80CBF3433D8C053AB55A0D3F01B26070F1799759 (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, bool ___virtualSprintState0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.SprintInput(virtualSprintState);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		bool L_1 = ___virtualSprintState0;
		StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput__ctor_m3B7626E7C92128BC984ABE40C9C250720F352017 (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, const RuntimeMethod* method) 
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
// System.Boolean StarterAssets.ThirdPersonController::get_IsCurrentDeviceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonController_get_IsCurrentDeviceMouse_m5EBE0107CBD975A6178FCE2840C3D159A13C6D9C (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _playerInput.currentControlScheme == "KeyboardMouse";
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->____playerInput_39;
		String_t* L_1;
		L_1 = PlayerInput_get_currentControlScheme_mA70B5C50BA1A61D2E232F17730BAECD3F690204C(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940, NULL);
		return L_2;
	}
}
// System.Void StarterAssets.ThirdPersonController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Awake_mE08F39AEA7E4CE2E15C7828E9C24AC4CE9C487C3 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_mainCamera == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____mainCamera_43;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		__this->____mainCamera_43 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_43), (void*)L_2);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Start_m99AC2EAB6D2136A754B1B9B2E001732ED198D7E7 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _cinemachineTargetYaw = CinemachineCameraTarget.transform.rotation.eulerAngles.y;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___CinemachineCameraTarget_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_4 = L_3.___y_3;
		__this->____cinemachineTargetYaw_24 = L_4;
		// _hasAnimator = TryGetComponent(out _animator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** L_5 = (&__this->____animator_40);
		bool L_6;
		L_6 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(__this, L_5, Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		__this->____hasAnimator_45 = L_6;
		// _controller = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_7;
		L_7 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->____controller_41 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controller_41), (void*)L_7);
		// _input = GetComponent<StarterAssetsInputs>();
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_8;
		L_8 = Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC(__this, Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		__this->____input_42 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____input_42), (void*)L_8);
		// _playerInput = GetComponent<PlayerInput>();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_9;
		L_9 = Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89(__this, Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		__this->____playerInput_39 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerInput_39), (void*)L_9);
		// AssignAnimationIDs();
		ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A(__this, NULL);
		// _jumpTimeoutDelta = JumpTimeout;
		float L_10 = __this->___JumpTimeout_13;
		__this->____jumpTimeoutDelta_32 = L_10;
		// _fallTimeoutDelta = FallTimeout;
		float L_11 = __this->___FallTimeout_14;
		__this->____fallTimeoutDelta_33 = L_11;
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Update_mAFF4B3A14DCC2D6F6C5D318C41DFC61F3EDE43C5 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hasAnimator = TryGetComponent(out _animator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** L_0 = (&__this->____animator_40);
		bool L_1;
		L_1 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(__this, L_0, Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		__this->____hasAnimator_45 = L_1;
		// JumpAndGravity();
		ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F(__this, NULL);
		// GroundedCheck();
		ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE(__this, NULL);
		// Move();
		ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_LateUpdate_m02FBD3801F369821F2FEF5ADD8890B3FB9759BC0 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// CameraRotation();
		ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::AssignAnimationIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animIDSpeed = Animator.StringToHash("Speed");
		int32_t L_0;
		L_0 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, NULL);
		__this->____animIDSpeed_34 = L_0;
		// _animIDGrounded = Animator.StringToHash("Grounded");
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4, NULL);
		__this->____animIDGrounded_35 = L_1;
		// _animIDJump = Animator.StringToHash("Jump");
		int32_t L_2;
		L_2 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		__this->____animIDJump_36 = L_2;
		// _animIDFreeFall = Animator.StringToHash("FreeFall");
		int32_t L_3;
		L_3 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3, NULL);
		__this->____animIDFreeFall_37 = L_3;
		// _animIDMotionSpeed = Animator.StringToHash("MotionSpeed");
		int32_t L_4;
		L_4 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0, NULL);
		__this->____animIDMotionSpeed_38 = L_4;
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - GroundedOffset,
		//     transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		float L_6 = __this->___GroundedOffset_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_2, ((float)il2cpp_codegen_subtract(L_5, L_6)), L_9, NULL);
		// Grounded = Physics.CheckSphere(spherePosition, GroundedRadius, GroundLayers,
		//     QueryTriggerInteraction.Ignore);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___GroundedRadius_17;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = __this->___GroundLayers_18;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_12, NULL);
		bool L_14;
		L_14 = Physics_CheckSphere_mC32BB961B0CF9D23EDDEEC3F30021FD1BE88E261(L_10, L_11, L_13, 1, NULL);
		__this->___Grounded_15 = L_14;
		// if (_hasAnimator)
		bool L_15 = __this->____hasAnimator_45;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// _animator.SetBool(_animIDGrounded, Grounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->____animator_40;
		int32_t L_17 = __this->____animIDGrounded_35;
		bool L_18 = __this->___Grounded_15;
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_16, L_17, L_18, NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B5_0 = 0.0f;
	{
		// if (_input.look.sqrMagnitude >= _threshold && !LockCameraPosition)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&L_0->___look_5);
		float L_2;
		L_2 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_1, NULL);
		if ((!(((float)L_2) >= ((float)(0.00999999978f)))))
		{
			goto IL_0072;
		}
	}
	{
		bool L_3 = __this->___LockCameraPosition_23;
		if (L_3)
		{
			goto IL_0072;
		}
	}
	{
		// float deltaTimeMultiplier = IsCurrentDeviceMouse ? 1.0f : Time.deltaTime;
		bool L_4;
		L_4 = ThirdPersonController_get_IsCurrentDeviceMouse_m5EBE0107CBD975A6178FCE2840C3D159A13C6D9C(__this, NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B5_0 = L_5;
		goto IL_0033;
	}

IL_002e:
	{
		G_B5_0 = (1.0f);
	}

IL_0033:
	{
		V_0 = G_B5_0;
		// _cinemachineTargetYaw += _input.look.x * deltaTimeMultiplier;
		float L_6 = __this->____cinemachineTargetYaw_24;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_7 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&L_7->___look_5);
		float L_9 = L_8->___x_0;
		float L_10 = V_0;
		__this->____cinemachineTargetYaw_24 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		// _cinemachineTargetPitch += _input.look.y * deltaTimeMultiplier;
		float L_11 = __this->____cinemachineTargetPitch_25;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_12 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&L_12->___look_5);
		float L_14 = L_13->___y_1;
		float L_15 = V_0;
		__this->____cinemachineTargetPitch_25 = ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(L_14, L_15))));
	}

IL_0072:
	{
		// _cinemachineTargetYaw = ClampAngle(_cinemachineTargetYaw, float.MinValue, float.MaxValue);
		float L_16 = __this->____cinemachineTargetYaw_24;
		float L_17;
		L_17 = ThirdPersonController_ClampAngle_m8C3245A45B5FB84338F87BEAECEEE36E3C53B2B6(L_16, (-(std::numeric_limits<float>::max)()), ((std::numeric_limits<float>::max)()), NULL);
		__this->____cinemachineTargetYaw_24 = L_17;
		// _cinemachineTargetPitch = ClampAngle(_cinemachineTargetPitch, BottomClamp, TopClamp);
		float L_18 = __this->____cinemachineTargetPitch_25;
		float L_19 = __this->___BottomClamp_21;
		float L_20 = __this->___TopClamp_20;
		float L_21;
		L_21 = ThirdPersonController_ClampAngle_m8C3245A45B5FB84338F87BEAECEEE36E3C53B2B6(L_18, L_19, L_20, NULL);
		__this->____cinemachineTargetPitch_25 = L_21;
		// CinemachineCameraTarget.transform.rotation = Quaternion.Euler(_cinemachineTargetPitch + CameraAngleOverride,
		//     _cinemachineTargetYaw, 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___CinemachineCameraTarget_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		float L_24 = __this->____cinemachineTargetPitch_25;
		float L_25 = __this->___CameraAngleOverride_22;
		float L_26 = __this->____cinemachineTargetYaw_24;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_add(L_24, L_25)), L_26, (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_23, L_27, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		// float targetSpeed = _input.sprint ? SprintSpeed : MoveSpeed;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_42;
		bool L_1 = L_0->___sprint_7;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = __this->___MoveSpeed_4;
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		float L_3 = __this->___SprintSpeed_5;
		G_B3_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_4 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = L_4->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_7;
		L_7 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		V_0 = (0.0f);
	}

IL_0039:
	{
		// float currentHorizontalSpeed = new Vector3(_controller.velocity.x, 0.0f, _controller.velocity.z).magnitude;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->____controller_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_8, NULL);
		float L_10 = L_9.___x_2;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->____controller_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_10, (0.0f), L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_6), NULL);
		V_1 = L_15;
		// float speedOffset = 0.1f;
		V_2 = (0.100000001f);
		// float inputMagnitude = _input.analogMovement ? _input.move.magnitude : 1f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_16 = __this->____input_42;
		bool L_17 = L_16->___analogMovement_8;
		if (L_17)
		{
			goto IL_0087;
		}
	}
	{
		G_B8_0 = (1.0f);
		goto IL_0097;
	}

IL_0087:
	{
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_18 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&L_18->___move_4);
		float L_20;
		L_20 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_19, NULL);
		G_B8_0 = L_20;
	}

IL_0097:
	{
		V_3 = G_B8_0;
		// if (currentHorizontalSpeed < targetSpeed - speedOffset ||
		//     currentHorizontalSpeed > targetSpeed + speedOffset)
		float L_21 = V_1;
		float L_22 = V_0;
		float L_23 = V_2;
		if ((((float)L_21) < ((float)((float)il2cpp_codegen_subtract(L_22, L_23)))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_24 = V_1;
		float L_25 = V_0;
		float L_26 = V_2;
		if ((!(((float)L_24) > ((float)((float)il2cpp_codegen_add(L_25, L_26))))))
		{
			goto IL_00de;
		}
	}

IL_00a4:
	{
		// _speed = Mathf.Lerp(currentHorizontalSpeed, targetSpeed * inputMagnitude,
		//     Time.deltaTime * SpeedChangeRate);
		float L_27 = V_1;
		float L_28 = V_0;
		float L_29 = V_3;
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_31 = __this->___SpeedChangeRate_7;
		float L_32;
		L_32 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_27, ((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_30, L_31)), NULL);
		__this->____speed_26 = L_32;
		// _speed = Mathf.Round(_speed * 1000f) / 1000f;
		float L_33 = __this->____speed_26;
		float L_34;
		L_34 = bankers_roundf(((float)il2cpp_codegen_multiply(L_33, (1000.0f))));
		__this->____speed_26 = ((float)(L_34/(1000.0f)));
		goto IL_00e5;
	}

IL_00de:
	{
		// _speed = targetSpeed;
		float L_35 = V_0;
		__this->____speed_26 = L_35;
	}

IL_00e5:
	{
		// _animationBlend = Mathf.Lerp(_animationBlend, targetSpeed, Time.deltaTime * SpeedChangeRate);
		float L_36 = __this->____animationBlend_27;
		float L_37 = V_0;
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_39 = __this->___SpeedChangeRate_7;
		float L_40;
		L_40 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_36, L_37, ((float)il2cpp_codegen_multiply(L_38, L_39)), NULL);
		__this->____animationBlend_27 = L_40;
		// if (_animationBlend < 0.01f) _animationBlend = 0f;
		float L_41 = __this->____animationBlend_27;
		if ((!(((float)L_41) < ((float)(0.00999999978f)))))
		{
			goto IL_011b;
		}
	}
	{
		// if (_animationBlend < 0.01f) _animationBlend = 0f;
		__this->____animationBlend_27 = (0.0f);
	}

IL_011b:
	{
		// Vector3 inputDirection = new Vector3(_input.move.x, 0.0f, _input.move.y).normalized;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_42 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&L_42->___move_4);
		float L_44 = L_43->___x_0;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_45 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&L_45->___move_4);
		float L_47 = L_46->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_44, (0.0f), L_47, /*hidden argument*/NULL);
		V_6 = L_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_4 = L_49;
		// if (_input.move != Vector2.zero)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_50 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = L_50->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_53;
		L_53 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_51, L_52, NULL);
		if (!L_53)
		{
			goto IL_01e1;
		}
	}
	{
		// _targetRotation = Mathf.Atan2(inputDirection.x, inputDirection.z) * Mathf.Rad2Deg +
		//                   _mainCamera.transform.eulerAngles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_4;
		float L_55 = L_54.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_4;
		float L_57 = L_56.___z_4;
		float L_58;
		L_58 = atan2f(L_55, L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->____mainCamera_43;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_60, NULL);
		float L_62 = L_61.___y_3;
		__this->____targetRotation_28 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_58, (57.2957802f))), L_62));
		// float rotation = Mathf.SmoothDampAngle(transform.eulerAngles.y, _targetRotation, ref _rotationVelocity,
		//     RotationSmoothTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_63, NULL);
		float L_65 = L_64.___y_3;
		float L_66 = __this->____targetRotation_28;
		float* L_67 = (&__this->____rotationVelocity_29);
		float L_68 = __this->___RotationSmoothTime_6;
		float L_69;
		L_69 = Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline(L_65, L_66, L_67, L_68, NULL);
		V_7 = L_69;
		// transform.rotation = Quaternion.Euler(0.0f, rotation, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_71 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_72;
		L_72 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_71, (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_70, L_72, NULL);
	}

IL_01e1:
	{
		// Vector3 targetDirection = Quaternion.Euler(0.0f, _targetRotation, 0.0f) * Vector3.forward;
		float L_73 = __this->____targetRotation_28;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74;
		L_74 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_73, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_74, L_75, NULL);
		V_5 = L_76;
		// _controller.Move(targetDirection.normalized * (_speed * Time.deltaTime) +
		//                  new Vector3(0.0f, _verticalVelocity, 0.0f) * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_77 = __this->____controller_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_79 = __this->____speed_26;
		float L_80;
		L_80 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_78, ((float)il2cpp_codegen_multiply(L_79, L_80)), NULL);
		float L_82 = __this->____verticalVelocity_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_83), (0.0f), L_82, (0.0f), /*hidden argument*/NULL);
		float L_84;
		L_84 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_83, L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_81, L_85, NULL);
		int32_t L_87;
		L_87 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_77, L_86, NULL);
		// if (_hasAnimator)
		bool L_88 = __this->____hasAnimator_45;
		if (!L_88)
		{
			goto IL_027b;
		}
	}
	{
		// _animator.SetFloat(_animIDSpeed, _animationBlend);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_89 = __this->____animator_40;
		int32_t L_90 = __this->____animIDSpeed_34;
		float L_91 = __this->____animationBlend_27;
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_89, L_90, L_91, NULL);
		// _animator.SetFloat(_animIDMotionSpeed, inputMagnitude);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_92 = __this->____animator_40;
		int32_t L_93 = __this->____animIDMotionSpeed_38;
		float L_94 = V_3;
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_92, L_93, L_94, NULL);
	}

IL_027b:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// if (Grounded)
		bool L_0 = __this->___Grounded_15;
		if (!L_0)
		{
			goto IL_00ce;
		}
	}
	{
		// _fallTimeoutDelta = FallTimeout;
		float L_1 = __this->___FallTimeout_14;
		__this->____fallTimeoutDelta_33 = L_1;
		// if (_hasAnimator)
		bool L_2 = __this->____hasAnimator_45;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// _animator.SetBool(_animIDJump, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____animator_40;
		int32_t L_4 = __this->____animIDJump_36;
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_3, L_4, (bool)0, NULL);
		// _animator.SetBool(_animIDFreeFall, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->____animator_40;
		int32_t L_6 = __this->____animIDFreeFall_37;
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_5, L_6, (bool)0, NULL);
	}

IL_0043:
	{
		// if (_verticalVelocity < 0.0f)
		float L_7 = __this->____verticalVelocity_30;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// _verticalVelocity = -2f;
		__this->____verticalVelocity_30 = (-2.0f);
	}

IL_005b:
	{
		// if (_input.jump && _jumpTimeoutDelta <= 0.0f)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_8 = __this->____input_42;
		bool L_9 = L_8->___jump_6;
		if (!L_9)
		{
			goto IL_00ad;
		}
	}
	{
		float L_10 = __this->____jumpTimeoutDelta_32;
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		// _verticalVelocity = Mathf.Sqrt(JumpHeight * -2f * Gravity);
		float L_11 = __this->___JumpHeight_11;
		float L_12 = __this->___Gravity_12;
		float L_13;
		L_13 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, (-2.0f))), L_12)));
		__this->____verticalVelocity_30 = L_13;
		// if (_hasAnimator)
		bool L_14 = __this->____hasAnimator_45;
		if (!L_14)
		{
			goto IL_00ad;
		}
	}
	{
		// _animator.SetBool(_animIDJump, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->____animator_40;
		int32_t L_16 = __this->____animIDJump_36;
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_15, L_16, (bool)1, NULL);
	}

IL_00ad:
	{
		// if (_jumpTimeoutDelta >= 0.0f)
		float L_17 = __this->____jumpTimeoutDelta_32;
		if ((!(((float)L_17) >= ((float)(0.0f)))))
		{
			goto IL_0121;
		}
	}
	{
		// _jumpTimeoutDelta -= Time.deltaTime;
		float L_18 = __this->____jumpTimeoutDelta_32;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____jumpTimeoutDelta_32 = ((float)il2cpp_codegen_subtract(L_18, L_19));
		goto IL_0121;
	}

IL_00ce:
	{
		// _jumpTimeoutDelta = JumpTimeout;
		float L_20 = __this->___JumpTimeout_13;
		__this->____jumpTimeoutDelta_32 = L_20;
		// if (_fallTimeoutDelta >= 0.0f)
		float L_21 = __this->____fallTimeoutDelta_33;
		if ((!(((float)L_21) >= ((float)(0.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		// _fallTimeoutDelta -= Time.deltaTime;
		float L_22 = __this->____fallTimeoutDelta_33;
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____fallTimeoutDelta_33 = ((float)il2cpp_codegen_subtract(L_22, L_23));
		goto IL_0115;
	}

IL_00fb:
	{
		// if (_hasAnimator)
		bool L_24 = __this->____hasAnimator_45;
		if (!L_24)
		{
			goto IL_0115;
		}
	}
	{
		// _animator.SetBool(_animIDFreeFall, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->____animator_40;
		int32_t L_26 = __this->____animIDFreeFall_37;
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_25, L_26, (bool)1, NULL);
	}

IL_0115:
	{
		// _input.jump = false;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_27 = __this->____input_42;
		L_27->___jump_6 = (bool)0;
	}

IL_0121:
	{
		// if (_verticalVelocity < _terminalVelocity)
		float L_28 = __this->____verticalVelocity_30;
		float L_29 = __this->____terminalVelocity_31;
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0148;
		}
	}
	{
		// _verticalVelocity += Gravity * Time.deltaTime;
		float L_30 = __this->____verticalVelocity_30;
		float L_31 = __this->___Gravity_12;
		float L_32;
		L_32 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____verticalVelocity_30 = ((float)il2cpp_codegen_add(L_30, ((float)il2cpp_codegen_multiply(L_31, L_32))));
	}

IL_0148:
	{
		// }
		return;
	}
}
// System.Single StarterAssets.ThirdPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonController_ClampAngle_m8C3245A45B5FB84338F87BEAECEEE36E3C53B2B6 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method) 
{
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_0 = ___lfAngle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_1 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_2 = ___lfAngle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_3 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(lfAngle, lfMin, lfMax);
		float L_4 = ___lfAngle0;
		float L_5 = ___lfMin1;
		float L_6 = ___lfMax2;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void StarterAssets.ThirdPersonController::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnDrawGizmosSelected_mCD3D7F711815BC95C166CB8E67F3C5D085C38BA5 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Color transparentGreen = new Color(0.0f, 1.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.0f), (1.0f), (0.0f), (0.349999994f), NULL);
		// Color transparentRed = new Color(1.0f, 0.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_1), (1.0f), (0.0f), (0.0f), (0.349999994f), NULL);
		// if (Grounded) Gizmos.color = transparentGreen;
		bool L_0 = __this->___Grounded_15;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		// if (Grounded) Gizmos.color = transparentGreen;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_1, NULL);
		goto IL_004c;
	}

IL_0046:
	{
		// else Gizmos.color = transparentRed;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_1;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_2, NULL);
	}

IL_004c:
	{
		// Gizmos.DrawSphere(
		//     new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z),
		//     GroundedRadius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		float L_9 = __this->___GroundedOffset_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_5, ((float)il2cpp_codegen_subtract(L_8, L_9)), L_12, /*hidden argument*/NULL);
		float L_14 = __this->___GroundedRadius_17;
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::OnFootstep(UnityEngine.AnimationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnFootstep_mFE54F581AB0F72FC34208BCB6ABF77311BCC3D02 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* ___animationEvent0, const RuntimeMethod* method) 
{
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (animationEvent.animatorClipInfo.weight > 0.5f)
		AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* L_0 = ___animationEvent0;
		AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 L_1;
		L_1 = AnimationEvent_get_animatorClipInfo_m0D763FA1A2E3CD81AC08F1F24977859AE25938F3(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(0.5f)))))
		{
			goto IL_0056;
		}
	}
	{
		// if (FootstepAudioClips.Length > 0)
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_3 = __this->___FootstepAudioClips_9;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0056;
		}
	}
	{
		// var index = Random.Range(0, FootstepAudioClips.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_4 = __this->___FootstepAudioClips_9;
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		V_1 = L_5;
		// AudioSource.PlayClipAtPoint(FootstepAudioClips[index], transform.TransformPoint(_controller.center), FootstepAudioVolume);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_6 = __this->___FootstepAudioClips_9;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->____controller_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_10, L_12, NULL);
		float L_14 = __this->___FootstepAudioVolume_10;
		AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD(L_9, L_13, L_14, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::OnLand(UnityEngine.AnimationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnLand_mAF1A04288C4B0ED39ACA52599F18D059F78D41C8 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* ___animationEvent0, const RuntimeMethod* method) 
{
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (animationEvent.animatorClipInfo.weight > 0.5f)
		AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* L_0 = ___animationEvent0;
		AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 L_1;
		L_1 = AnimationEvent_get_animatorClipInfo_m0D763FA1A2E3CD81AC08F1F24977859AE25938F3(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(0.5f)))))
		{
			goto IL_003c;
		}
	}
	{
		// AudioSource.PlayClipAtPoint(LandingAudioClip, transform.TransformPoint(_controller.center), FootstepAudioVolume);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = __this->___LandingAudioClip_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_5 = __this->____controller_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_6, NULL);
		float L_8 = __this->___FootstepAudioVolume_10;
		AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD(L_3, L_7, L_8, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController__ctor_mA2ECE265C51A281DA13F2344E30363399DD64321 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed = 2.0f;
		__this->___MoveSpeed_4 = (2.0f);
		// public float SprintSpeed = 5.335f;
		__this->___SprintSpeed_5 = (5.33500004f);
		// public float RotationSmoothTime = 0.12f;
		__this->___RotationSmoothTime_6 = (0.119999997f);
		// public float SpeedChangeRate = 10.0f;
		__this->___SpeedChangeRate_7 = (10.0f);
		// [Range(0, 1)] public float FootstepAudioVolume = 0.5f;
		__this->___FootstepAudioVolume_10 = (0.5f);
		// public float JumpHeight = 1.2f;
		__this->___JumpHeight_11 = (1.20000005f);
		// public float Gravity = -15.0f;
		__this->___Gravity_12 = (-15.0f);
		// public float JumpTimeout = 0.50f;
		__this->___JumpTimeout_13 = (0.5f);
		// public float FallTimeout = 0.15f;
		__this->___FallTimeout_14 = (0.150000006f);
		// public bool Grounded = true;
		__this->___Grounded_15 = (bool)1;
		// public float GroundedOffset = -0.14f;
		__this->___GroundedOffset_16 = (-0.140000001f);
		// public float GroundedRadius = 0.28f;
		__this->___GroundedRadius_17 = (0.280000001f);
		// public float TopClamp = 70.0f;
		__this->___TopClamp_20 = (70.0f);
		// public float BottomClamp = -30.0f;
		__this->___BottomClamp_21 = (-30.0f);
		// private float _terminalVelocity = 53.0f;
		__this->____terminalVelocity_31 = (53.0f);
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
// System.Void LowPolyWater.LowPolyWater::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowPolyWater_Awake_m9CEA90E96A89A759F393E3A137B7FA4B089799B9 (LowPolyWater_t78C6ECF22372C5313BA1937B03DF2113AED7F728* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meshFilter = GetComponent<MeshFilter>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0;
		L_0 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		__this->___meshFilter_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void LowPolyWater.LowPolyWater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowPolyWater_Start_m84959C8452D29891A954FDA641CBC810F575F860 (LowPolyWater_t78C6ECF22372C5313BA1937B03DF2113AED7F728* __this, const RuntimeMethod* method) 
{
	{
		// CreateMeshLowPoly(meshFilter);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___meshFilter_8;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1;
		L_1 = LowPolyWater_CreateMeshLowPoly_mD334974E007EE6B8204B866ED70BF3D8B99F735C(__this, L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.MeshFilter LowPolyWater.LowPolyWater::CreateMeshLowPoly(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* LowPolyWater_CreateMeshLowPoly_mD334974E007EE6B8204B866ED70BF3D8B99F735C (LowPolyWater_t78C6ECF22372C5313BA1937B03DF2113AED7F728* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___mf0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// mesh = mf.sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = ___mf0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_0, NULL);
		__this->___mesh_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_9), (void*)L_1);
		// Vector3[] originalVertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___mesh_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3;
		L_3 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_2, NULL);
		V_0 = L_3;
		// int[] triangles = mesh.triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = __this->___mesh_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_4, NULL);
		V_1 = L_5;
		// Vector3[] vertices = new Vector3[triangles.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		V_2 = L_7;
		// for (int i = 0; i < triangles.Length; i++)
		V_3 = 0;
		goto IL_0049;
	}

IL_0031:
	{
		// vertices[i] = originalVertices[triangles[i]];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = V_2;
		int32_t L_9 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		int32_t L_12 = V_3;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		// triangles[i] = i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = V_3;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_19);
		// for (int i = 0; i < triangles.Length; i++)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < triangles.Length; i++)
		int32_t L_21 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23 = __this->___mesh_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_2;
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_23, L_24, NULL);
		// mesh.SetTriangles(triangles, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_25 = __this->___mesh_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_1;
		Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258(L_25, L_26, 0, NULL);
		// mesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27 = __this->___mesh_9;
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_27, NULL);
		// mesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_28 = __this->___mesh_9;
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_28, NULL);
		// this.vertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_29 = __this->___mesh_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30;
		L_30 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_29, NULL);
		__this->___vertices_10 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_10), (void*)L_30);
		// return mf;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_31 = ___mf0;
		return L_31;
	}
}
// System.Void LowPolyWater.LowPolyWater::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowPolyWater_Update_mA0B0C1966279CC287BEB91A684AC4DF1D8B8EF54 (LowPolyWater_t78C6ECF22372C5313BA1937B03DF2113AED7F728* __this, const RuntimeMethod* method) 
{
	{
		// GenerateWaves();
		LowPolyWater_GenerateWaves_m272208F2F0BD170DFCD36057697CE2777EF66972(__this, NULL);
		// }
		return;
	}
}
// System.Void LowPolyWater.LowPolyWater::GenerateWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowPolyWater_GenerateWaves_m272208F2F0BD170DFCD36057697CE2777EF66972 (LowPolyWater_t78C6ECF22372C5313BA1937B03DF2113AED7F728* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// for (int i = 0; i < vertices.Length; i++)
		V_0 = 0;
		goto IL_007e;
	}

IL_0004:
	{
		// Vector3 v = vertices[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___vertices_10;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// v.y = 0.0f;
		(&V_1)->___y_3 = (0.0f);
		// float distance = Vector3.Distance(v, waveOriginPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___waveOriginPosition_7;
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_4, L_5, NULL);
		V_2 = L_6;
		// distance = (distance % waveLength) / waveLength;
		float L_7 = V_2;
		float L_8 = __this->___waveLength_6;
		float L_9 = __this->___waveLength_6;
		V_2 = ((float)((fmodf(L_7, L_8))/L_9));
		// v.y = waveHeight * Mathf.Sin(Time.time * Mathf.PI * 2.0f * waveFrequency
		// + (Mathf.PI * 2.0f * distance));
		float L_10 = __this->___waveHeight_4;
		float L_11;
		L_11 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_12 = __this->___waveFrequency_5;
		float L_13 = V_2;
		float L_14;
		L_14 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, (3.14159274f))), (2.0f))), L_12)), ((float)il2cpp_codegen_multiply((6.28318548f), L_13)))));
		(&V_1)->___y_3 = ((float)il2cpp_codegen_multiply(L_10, L_14));
		// vertices[i] = v;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = __this->___vertices_10;
		int32_t L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_007e:
	{
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_19 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = __this->___vertices_10;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21 = __this->___mesh_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = __this->___vertices_10;
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_21, L_22, NULL);
		// mesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23 = __this->___mesh_9;
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_23, NULL);
		// mesh.MarkDynamic();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_24 = __this->___mesh_9;
		Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322(L_24, NULL);
		// meshFilter.mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_25 = __this->___meshFilter_8;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26 = __this->___mesh_9;
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_25, L_26, NULL);
		// }
		return;
	}
}
// System.Void LowPolyWater.LowPolyWater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowPolyWater__ctor_m6275136A91915331F9D7D023A66AE845B2D55611 (LowPolyWater_t78C6ECF22372C5313BA1937B03DF2113AED7F728* __this, const RuntimeMethod* method) 
{
	{
		// public float waveHeight = 0.5f;
		__this->___waveHeight_4 = (0.5f);
		// public float waveFrequency = 0.5f;
		__this->___waveFrequency_5 = (0.5f);
		// public float waveLength = 0.75f;
		__this->___waveLength_6 = (0.75f);
		// public Vector3 waveOriginPosition = new Vector3(0.0f, 0.0f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___waveOriginPosition_7 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___vector0;
		float L_8 = L_7.___x_0;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___vector0;
		float L_11 = L_10.___y_1;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		float L_13 = V_3;
		float L_14 = ___maxLength1;
		float L_15 = V_4;
		float L_16 = ___maxLength1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)), /*hidden argument*/NULL);
		V_5 = L_17;
		goto IL_0045;
	}

IL_0040:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___vector0;
		V_5 = L_18;
		goto IL_0045;
	}

IL_0045:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_5;
		return L_19;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) 
{
	{
		// move = newMoveDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newMoveDirection0;
		__this->___move_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) 
{
	{
		// look = newLookDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newLookDirection0;
		__this->___look_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) 
{
	{
		// jump = newJumpState;
		bool L_0 = ___newJumpState0;
		__this->___jump_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) 
{
	{
		// sprint = newSprintState;
		bool L_0 = ___newSprintState0;
		__this->___sprint_7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___current0;
		float L_2 = ___target1;
		float* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___current0;
		float L_1 = ___current0;
		float L_2 = ___target1;
		float L_3;
		L_3 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_1, L_2, NULL);
		___target1 = ((float)il2cpp_codegen_add(L_0, L_3));
		float L_4 = ___current0;
		float L_5 = ___target1;
		float* L_6 = ___currentVelocity2;
		float L_7 = ___smoothTime3;
		float L_8 = ___maxSpeed4;
		float L_9 = ___deltaTime5;
		float L_10;
		L_10 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_001c;
	}

IL_001c:
	{
		float L_11 = V_0;
		return L_11;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___current0, float ___target1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
