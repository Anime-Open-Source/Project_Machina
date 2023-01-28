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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<SelectorButton>
struct List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE;
// SingletonGeneric`1<GameManager>
struct SingletonGeneric_1_t3481BDF66C6764DC9D9FD2CDF892771A62D7FF44;
// SingletonGeneric`1<System.Object>
struct SingletonGeneric_1_t127B064F8A1273425B2E07CC51B87AA91BB24811;
// SingletonGeneric`1<ProjectileManager>
struct SingletonGeneric_1_t940ED1E7173AC7599A36886F463CE935E30AF7BD;
// SingletonGeneric`1<WaveManager>
struct SingletonGeneric_1_t47251726B585D0E62DE5287BEDD53D20C06461F1;
// SingletonGeneric`1<WeaponManager>
struct SingletonGeneric_1_t8473DF67A1D74B5A05A11BF6CE526B290F68FFF7;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<DetectionType>
struct UnityEvent_1_tC8D791ABF54AEB5ED469D872C6DC3484B953507E;
// UnityEngine.Events.UnityEvent`1<IDamageable>
struct UnityEvent_1_tBD0229E621FEE1B9E09D34031C141A547EA8BABF;
// UnityEngine.Events.UnityEvent`1<System.Int32Enum>
struct UnityEvent_1_t090B79D1A655BCAB01BC91C7409AC476DC731B81;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>
struct UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// SelectorButton[]
struct SelectorButtonU5BU5D_tEE1B7C18FB4C5761ED3D647D01CE176CEE728F07;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D;
// Bow
struct Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB;
// BowString
struct BowString_t10E8322FC769EE983546761280797279041F8916;
// BowStringVisual
struct BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE;
// BowStringVisualizer
struct BowStringVisualizer_t7214C622E3DBF27B866F15B7F3706AFDFD129175;
// ButtonScript
struct ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026;
// Cannoneer
struct Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// CollisionTest
struct CollisionTest_t143C7A85D74190E3AB567E0D50654EFA5F174F86;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Crawler
struct Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE;
// CrossProductTest
struct CrossProductTest_t720FCD6322984A48ABD9D18AA4A7DB68CB12B052;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DotProductTest
struct DotProductTest_tA766D31E0B627826995AEF5DA1FA01696CB573F3;
// EnemyBase
struct EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D;
// EnemyMovement
struct EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C;
// EnemyStats
struct EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOverUI
struct GameOverUI_tED6E1D9D1616BF7C870AEDB25B882281D25F4914;
// Grab
struct Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F;
// GrabPointBase
struct GrabPointBase_t08D2B6DD5F5886C02415B6E6233EFBD0EED8B622;
// GroupManager
struct GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C;
// HandAnimationController
struct HandAnimationController_t9082D093A7D4DF09214BFC2AF0B55CD097DEFD0E;
// HandController
struct HandController_tD866B993094B1833037D30396BB39F6C15DDC10C;
// IDamageable
struct IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535;
// IGrabable
struct IGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// InteractionManager
struct InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OneHandSword
struct OneHandSword_t1B648D7D2A2C2C2B6519309DD3854E14A443F785;
// Orbit
struct Orbit_tFA5C44247464A58B320ACD88D37CA00A0E9FD11E;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerStats
struct PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8;
// Projectile
struct Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6;
// ProjectileManager
struct ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1;
// ProjectileSkillBase
struct ProjectileSkillBase_tA3171D17D7D3DC4008B793C3F16B8C0F30F9E746;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// RestTimer
struct RestTimer_tC360D0A71DACEAB7CAB42AFB0DD443B385B29D61;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// SelectorButton
struct SelectorButton_t30B0FFC2DD0EDDCE7132861AFF7EF49847638869;
// SelectorButtonManager
struct SelectorButtonManager_t9BB7D7FBC40883345244EE14785841CD2BB19B4C;
// SkillBase
struct SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1;
// SkillManager
struct SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56;
// System.String
struct String_t;
// SwordBladeBase
struct SwordBladeBase_t7A045890A2EAE3B82A8DC23218F9EE0E2792C742;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TestDamager
struct TestDamager_tD9DC1CF7CB50081B13321DCD99850B9DF596AB24;
// TestDirectionalRotation
struct TestDirectionalRotation_t59C526C0B594269EE9536CA8085654F38D3F4963;
// TestFindForward
struct TestFindForward_t00A7C140E2BA5E5E3C020F36D8E72539E89DE35A;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TwoHandedWeapon
struct TwoHandedWeapon_tA2EDE285CA7D9229E8D26353F34330CCA6663CE1;
// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3;
// UIScript
struct UIScript_tB9C77D8B2007D6D58BBFC194568BC8433D535689;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WaveManager
struct WaveManager_t432EF298E8C09678E15239E5EF95239F5B4AC141;
// WeaponBase
struct WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF;
// WeaponManager
struct WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120;
// WeaponSelector
struct WeaponSelector_tDA9BF78AB131D46309C640788C4E272AC4300B20;
// WeaponStats
struct WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18;
IL2CPP_EXTERN_C String_t* _stringLiteral0F1979AE2523D7ADE998C40FEB98D569438452DB;
IL2CPP_EXTERN_C String_t* _stringLiteral3FD23476E557515F160C9810100283B3A57C764E;
IL2CPP_EXTERN_C String_t* _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC;
IL2CPP_EXTERN_C String_t* _stringLiteral4F802FDE42AAF22B18B4DA9874FC2EE5B5B68812;
IL2CPP_EXTERN_C String_t* _stringLiteral5D7F8AFB023ED22C152C8C20BEE1FA58776FC907;
IL2CPP_EXTERN_C String_t* _stringLiteral6F1BF80555FCAA169173518D17D983657E114C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral71050D47FC4858C4B5576340442052FA5B4E4CDD;
IL2CPP_EXTERN_C String_t* _stringLiteral893270BD7F4CC46BD8EC1DE07C9B6E1D7FB2DA74;
IL2CPP_EXTERN_C String_t* _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C;
IL2CPP_EXTERN_C String_t* _stringLiteral8E4F39EF3084FF922002C13AFD0E988627D2CA29;
IL2CPP_EXTERN_C String_t* _stringLiteral92FB1C7F97FE275948C05F4511AA8A0A38BB82C8;
IL2CPP_EXTERN_C String_t* _stringLiteral9632C78C457E28EE22C7579550FBC82814064F9A;
IL2CPP_EXTERN_C String_t* _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A654EF5EC847AE5D461DEA668EDB7F5F2F0FE0;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralD6C130AD96A1948FEC028D6B0FF1B06F91382064;
IL2CPP_EXTERN_C String_t* _stringLiteralEDDF286B0DD11639FEDE19D9CA0845928915CBA1;
IL2CPP_EXTERN_C String_t* _stringLiteralF70B0CC6394B76E9E4D920E7CF3A58AC116685B2;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisInteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF_mCBF4B69E09D1EE6DA62431D1F32AEDA94A4E5C2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB_mFEFB0EBBD6B60D08C3636E7B77F808FA7389D2A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHandController_tD866B993094B1833037D30396BB39F6C15DDC10C_mC214D8EE673CAF951DBEC2FFBF0BE54E4B0B0057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C_m7387ECFCF879E7243ABDD8DA2C2B0F1A06AB52BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCrawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE_m7E920AE3EE638852A3AECC45506B3147E3A42512_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m2932B85664B494D72382DE422CD1D846B0323315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Grab_ColliderGrab_m3E7A158742BA3DA6B8371257223C96F57DB1B2CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Grab_RayGrab_mF42ECC7A41B150ED22EDA76A8B006A6EACDB5C30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5AA1A01BB9BC86EAAFD6B968098B2996FAFBDD05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisEnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A_m6AF9C2C8065E6534934557A542301765786E7EAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisPlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_mC47739B18919A6E04E8A98E3DF8C36DA19F1971A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonGeneric_1__ctor_m0F83E3052E995F3E468D67B745ECE6B2EEAAA0BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonGeneric_1__ctor_m5B37902AAEAE1BC8520DED5A6B60C40A989A10E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonGeneric_1__ctor_m904E6BDAA740A3F168D1ACEF87D0D3DEB4A9DAEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonGeneric_1__ctor_mF2AFDFFEEA5EC8B4C0AF6C71E95D4AB35758B5E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonGeneric_1_get_Instance_m7B4EE777E35935FB52501FD3DD1785001D4B946E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonGeneric_1_get_Instance_m9281B95951229EF9106DE338B14E3138AF008632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m65172BB3B5C67B576413A59C96F50EC55370ECFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA6F86D16F01075DD6D5DA7783449DEB8BCF305ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
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

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SelectorButton>
struct List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SelectorButtonU5BU5D_tEE1B7C18FB4C5761ED3D647D01CE176CEE728F07* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SelectorButtonU5BU5D_tEE1B7C18FB4C5761ED3D647D01CE176CEE728F07* ___s_emptyArray_5;
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

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<DetectionType>
struct UnityEvent_1_tC8D791ABF54AEB5ED469D872C6DC3484B953507E  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<IDamageable>
struct UnityEvent_1_tBD0229E621FEE1B9E09D34031C141A547EA8BABF  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>
struct UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
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

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
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

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_ControlsForEachActionInitialized
	bool ___m_ControlsForEachActionInitialized_7;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_BindingsForEachActionInitialized
	bool ___m_BindingsForEachActionInitialized_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_9;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_10;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_11;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_12;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_13;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
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

// EnemyStats
struct EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String EnemyStats::_Name
	String_t* ____Name_4;
	// System.Single EnemyStats::_Health
	float ____Health_5;
	// System.Single EnemyStats::_MaxHealth
	float ____MaxHealth_6;
	// System.Single EnemyStats::_Defense
	float ____Defense_7;
	// System.Single EnemyStats::_MovementSpeed
	float ____MovementSpeed_8;
	// System.Single EnemyStats::_AttackSpeed
	float ____AttackSpeed_9;
	// System.Single EnemyStats::_Damage
	float ____Damage_10;
	// System.Single EnemyStats::_Piercing
	float ____Piercing_11;
};

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_9;
};

// PlayerStats
struct PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String PlayerStats::_Name
	String_t* ____Name_4;
	// System.Single PlayerStats::_Health
	float ____Health_5;
	// System.Single PlayerStats::_MaxHealth
	float ____MaxHealth_6;
	// System.Single PlayerStats::_Defense
	float ____Defense_7;
	// System.Single PlayerStats::_AttackSpeed
	float ____AttackSpeed_8;
	// System.Single PlayerStats::_Damage
	float ____Damage_9;
	// System.Single PlayerStats::_Piercing
	float ____Piercing_10;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SkillBase
struct SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String SkillBase::_SkillName
	String_t* ____SkillName_4;
	// System.Single SkillBase::_SkillTime
	float ____SkillTime_5;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// WeaponStats
struct WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String WeaponStats::_Name
	String_t* ____Name_4;
	// System.Single WeaponStats::_Damage
	float ____Damage_5;
	// System.Single WeaponStats::_Piercing
	float ____Piercing_6;
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ProjectileSkillBase
struct ProjectileSkillBase_tA3171D17D7D3DC4008B793C3F16B8C0F30F9E746  : public SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1
{
	// UnityEngine.GameObject ProjectileSkillBase::_Projectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____Projectile_6;
};

// SingletonGeneric`1<GameManager>
struct SingletonGeneric_1_t3481BDF66C6764DC9D9FD2CDF892771A62D7FF44  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SingletonGeneric_1_t3481BDF66C6764DC9D9FD2CDF892771A62D7FF44_StaticFields
{
	// T SingletonGeneric`1::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
};

// SingletonGeneric`1<ProjectileManager>
struct SingletonGeneric_1_t940ED1E7173AC7599A36886F463CE935E30AF7BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SingletonGeneric_1_t940ED1E7173AC7599A36886F463CE935E30AF7BD_StaticFields
{
	// T SingletonGeneric`1::instance
	ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1* ___instance_4;
};

// SingletonGeneric`1<WaveManager>
struct SingletonGeneric_1_t47251726B585D0E62DE5287BEDD53D20C06461F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SingletonGeneric_1_t47251726B585D0E62DE5287BEDD53D20C06461F1_StaticFields
{
	// T SingletonGeneric`1::instance
	WaveManager_t432EF298E8C09678E15239E5EF95239F5B4AC141* ___instance_4;
};

// SingletonGeneric`1<WeaponManager>
struct SingletonGeneric_1_t8473DF67A1D74B5A05A11BF6CE526B290F68FFF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SingletonGeneric_1_t8473DF67A1D74B5A05A11BF6CE526B290F68FFF7_StaticFields
{
	// T SingletonGeneric`1::instance
	WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* ___instance_4;
};

// BowString
struct BowString_t10E8322FC769EE983546761280797279041F8916  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BowStringVisual BowString::_Visualizer
	BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* ____Visualizer_4;
	// System.Single BowString::_Multiplier
	float ____Multiplier_5;
	// InteractionManager BowString::_InteractionManager
	InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* ____InteractionManager_6;
	// DetectionType BowString::c_OriginalDetectionType
	int32_t ___c_OriginalDetectionType_7;
	// UnityEngine.Vector3 BowString::_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Velocity_8;
	// UnityEngine.Vector3 BowString::_PullStartPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____PullStartPos_9;
	// UnityEngine.Vector3 BowString::_LocalStartPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____LocalStartPos_10;
	// Bow BowString::_ParentBow
	Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* ____ParentBow_11;
	// System.Boolean BowString::_IsGrabbed
	bool ____IsGrabbed_12;
	// System.Single BowString::_SmoothTime
	float ____SmoothTime_13;
};

// BowStringVisual
struct BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform BowStringVisual::_CenterPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____CenterPoint_4;
	// UnityEngine.Transform BowStringVisual::_PullPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____PullPoint_5;
	// UnityEngine.Transform BowStringVisual::_UpperStringPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____UpperStringPoint_6;
	// UnityEngine.Transform BowStringVisual::_LowerStringPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____LowerStringPoint_7;
	// UnityEngine.LineRenderer BowStringVisual::_LineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ____LineRenderer_8;
	// System.Single BowStringVisual::_PullMultiplier
	float ____PullMultiplier_9;
	// System.Single BowStringVisual::_PowerMultiplier
	float ____PowerMultiplier_10;
	// System.Single BowStringVisual::_PullPower
	float ____PullPower_11;
	// System.Single BowStringVisual::_CenterY
	float ____CenterY_12;
	// UnityEngine.Vector3[] BowStringVisual::_StringPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____StringPositions_13;
	// UnityEngine.Vector3 BowStringVisual::_EndPullPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____EndPullPos_14;
};

// BowStringVisualizer
struct BowStringVisualizer_t7214C622E3DBF27B866F15B7F3706AFDFD129175  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BowStringVisualizer::m_distanceToFullCharge
	float ___m_distanceToFullCharge_4;
	// System.Single BowStringVisualizer::m_normalizedCharge
	float ___m_normalizedCharge_5;
	// UnityEngine.Transform BowStringVisualizer::m_stringPointInput
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_stringPointInput_6;
	// UnityEngine.Transform BowStringVisualizer::m_upperStringPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_upperStringPoint_7;
	// UnityEngine.Transform BowStringVisualizer::m_lowerStringPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_lowerStringPoint_8;
	// UnityEngine.LineRenderer BowStringVisualizer::m_trailRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___m_trailRenderer_9;
	// UnityEngine.Vector3[] BowStringVisualizer::_bowStringPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____bowStringPoints_10;
};

// ButtonScript
struct ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CollisionTest
struct CollisionTest_t143C7A85D74190E3AB567E0D50654EFA5F174F86  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CollisionTest::m_Colliding
	bool ___m_Colliding_4;
	// UnityEngine.Collider CollisionTest::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_5;
};

// CrossProductTest
struct CrossProductTest_t720FCD6322984A48ABD9D18AA4A7DB68CB12B052  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CrossProductTest::_Angle
	float ____Angle_4;
	// UnityEngine.Vector3 CrossProductTest::_Forward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Forward_5;
	// UnityEngine.Vector3 CrossProductTest::_Up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Up_6;
	// UnityEngine.Vector3 CrossProductTest::_Cross
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Cross_7;
};

// DotProductTest
struct DotProductTest_tA766D31E0B627826995AEF5DA1FA01696CB573F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform DotProductTest::_Other
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____Other_4;
	// System.Single DotProductTest::_Dot
	float ____Dot_5;
};

// EnemyBase
struct EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EnemyStats EnemyBase::_Stats
	EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* ____Stats_4;
	// UnityEngine.Animator EnemyBase::_Animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____Animator_5;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3> EnemyBase::_OnHitEvent
	UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* ____OnHitEvent_6;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3> EnemyBase::_OnDieEvent
	UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* ____OnDieEvent_7;
};

// EnemyMovement
struct EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameOverUI
struct GameOverUI_tED6E1D9D1616BF7C870AEDB25B882281D25F4914  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI GameOverUI::_ScoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____ScoreText_4;
	// System.Int32 GameOverUI::_FinnalScore
	int32_t ____FinnalScore_5;
};

// Grab
struct Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionAsset Grab::_VRJoystickAsset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ____VRJoystickAsset_4;
	// InteractionManager Grab::_InteractionManager
	InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* ____InteractionManager_5;
	// UnityEngine.Animator Grab::_Animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____Animator_6;
	// UnityEngine.GameObject Grab::_Palm
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____Palm_7;
	// UnityEngine.Collider Grab::_PalmCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____PalmCollider_8;
	// System.Boolean Grab::_IsHolding
	bool ____IsHolding_9;
	// System.Boolean Grab::_IsClicked
	bool ____IsClicked_10;
	// HandController Grab::_HandController
	HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* ____HandController_11;
	// UnityEngine.InputSystem.InputActionMap Grab::_VRJoysticMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ____VRJoysticMap_12;
	// UnityEngine.InputSystem.InputAction Grab::_TriggerAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ____TriggerAction_13;
	// DetectionType Grab::_CurrentDetectionType
	int32_t ____CurrentDetectionType_14;
	// InteractionMode Grab::_InteractionMode
	int32_t ____InteractionMode_15;
	// System.Single Grab::_Range
	float ____Range_16;
	// System.Boolean Grab::_ClickGrab
	bool ____ClickGrab_17;
	// UnityEngine.GameObject Grab::_GrabedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____GrabedObject_18;
	// IGrabable Grab::c_Target
	RuntimeObject* ___c_Target_19;
};

// GrabPointBase
struct GrabPointBase_t08D2B6DD5F5886C02415B6E6233EFBD0EED8B622  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider GrabPointBase::_DetectionCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____DetectionCollider_4;
	// UnityEngine.Transform GrabPointBase::_HandTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____HandTransform_5;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform> GrabPointBase::OnGrabEvent
	UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9* ___OnGrabEvent_6;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform> GrabPointBase::OnDetachedEvent
	UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9* ___OnDetachedEvent_7;
	// UnityEngine.Vector3 GrabPointBase::_LocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____LocalPosition_8;
	// UnityEngine.Vector3 GrabPointBase::_LocalRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____LocalRotation_9;
};

// GroupManager
struct GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GroupManager::_Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____Player_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GroupManager::_Prefab
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____Prefab_5;
	// System.Int32 GroupManager::_TotalUnitCount
	int32_t ____TotalUnitCount_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GroupManager::_SpawnPoint
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____SpawnPoint_7;
	// System.Int32 GroupManager::_MinWaveUnitCount
	int32_t ____MinWaveUnitCount_8;
	// System.Int32 GroupManager::_MaxWaveUnitCount
	int32_t ____MaxWaveUnitCount_9;
	// System.Boolean GroupManager::_RandomWaveUnitCount
	bool ____RandomWaveUnitCount_10;
	// System.Boolean GroupManager::_RandomSpawn
	bool ____RandomSpawn_11;
	// UnityEngine.Vector3 GroupManager::_SpawnArea
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____SpawnArea_12;
	// System.Single GroupManager::_GapDistance
	float ____GapDistance_13;
	// System.Single GroupManager::_StopDistance
	float ____StopDistance_14;
	// System.Single GroupManager::_RangedDistance
	float ____RangedDistance_15;
	// System.Int32 GroupManager::_WaveUnitCount
	int32_t ____WaveUnitCount_16;
	// UnityEngine.GameObject[] GroupManager::_AllPooledUnits
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____AllPooledUnits_17;
	// UnityEngine.GameObject[] GroupManager::_CurrentActiveUnits
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____CurrentActiveUnits_18;
	// UnityEngine.Vector3 GroupManager::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_19;
};

// HandAnimationController
struct HandAnimationController_t9082D093A7D4DF09214BFC2AF0B55CD097DEFD0E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator HandAnimationController::_HandAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____HandAnimator_4;
	// System.Single HandAnimationController::_GripStrength
	float ____GripStrength_5;
};

// HandController
struct HandController_tD866B993094B1833037D30396BB39F6C15DDC10C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HandOrientation HandController::m_handOrientation
	int32_t ___m_handOrientation_4;
	// UnityEngine.InputSystem.InputActionAsset HandController::m_inputAssetController
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_inputAssetController_5;
	// UnityEngine.InputSystem.InputActionMap HandController::_controllerInputMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ____controllerInputMap_6;
	// UnityEngine.InputSystem.InputAction HandController::_triggerActions
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ____triggerActions_7;
};

// InteractionManager
struct InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent`1<DetectionType> InteractionManager::OnDetectionTypeChange
	UnityEvent_1_tC8D791ABF54AEB5ED469D872C6DC3484B953507E* ___OnDetectionTypeChange_4;
	// System.Single InteractionManager::_SmoothTime
	float ____SmoothTime_5;
	// System.Single InteractionManager::_Range
	float ____Range_6;
	// System.Boolean InteractionManager::_ClickGrab
	bool ____ClickGrab_7;
	// DetectionType InteractionManager::_detectionType
	int32_t ____detectionType_8;
	// InteractionMode InteractionManager::_interactionMode
	int32_t ____interactionMode_9;
};

// Orbit
struct Orbit_tFA5C44247464A58B320ACD88D37CA00A0E9FD11E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Orbit::_Target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____Target_4;
	// System.Single Orbit::_Deg
	float ____Deg_5;
	// System.Single Orbit::_Rad
	float ____Rad_6;
	// System.Single Orbit::_SmoothTime
	float ____SmoothTime_7;
	// System.Single Orbit::_SinZ
	float ____SinZ_8;
	// System.Single Orbit::_CosX
	float ____CosX_9;
	// UnityEngine.Vector3 Orbit::_Offsets
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Offsets_10;
	// UnityEngine.Vector3 Orbit::_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Velocity_11;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerStats Player::_Stats
	PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* ____Stats_4;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3> Player::_OnHitEvent
	UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* ____OnHitEvent_5;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3> Player::_OnDieEvent
	UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* ____OnDieEvent_6;
};

// Projectile
struct Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Projectile::_Launch
	bool ____Launch_4;
	// System.Single Projectile::_InitVelocity
	float ____InitVelocity_5;
	// System.Single Projectile::_LaunchAngle
	float ____LaunchAngle_6;
	// System.Single Projectile::_GravityMultiplier
	float ____GravityMultiplier_7;
	// UnityEngine.Transform Projectile::_ProjectileStabilizer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____ProjectileStabilizer_8;
	// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3> Projectile::_OnHitEvent
	UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* ____OnHitEvent_9;
	// System.Boolean Projectile::_Hit
	bool ____Hit_10;
	// System.Single Projectile::_InitHeight
	float ____InitHeight_11;
	// System.Single Projectile::t
	float ___t_12;
};

// RestTimer
struct RestTimer_tC360D0A71DACEAB7CAB42AFB0DD443B385B29D61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent RestTimer::OnRestTimeEnds
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnRestTimeEnds_4;
	// System.Single RestTimer::_MaxRestTime
	float ____MaxRestTime_5;
	// System.Single RestTimer::_CurrentTime
	float ____CurrentTime_6;
};

// SelectorButton
struct SelectorButton_t30B0FFC2DD0EDDCE7132861AFF7EF49847638869  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SelectorButton::_Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____Prefab_4;
};

// SelectorButtonManager
struct SelectorButtonManager_t9BB7D7FBC40883345244EE14785841CD2BB19B4C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionReference SelectorButtonManager::_VRJoystickReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ____VRJoystickReference_4;
	// System.Collections.Generic.List`1<SelectorButton> SelectorButtonManager::_SelectorButtons
	List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* ____SelectorButtons_5;
	// System.Boolean SelectorButtonManager::_UseAnimation
	bool ____UseAnimation_6;
	// System.Single SelectorButtonManager::_MinRadius
	float ____MinRadius_7;
	// System.Single SelectorButtonManager::_Radius
	float ____Radius_8;
	// System.Single SelectorButtonManager::_MaxRadius
	float ____MaxRadius_9;
	// System.Single SelectorButtonManager::_Degrees
	float ____Degrees_10;
};

// SkillManager
struct SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SkillManager::_Activate
	bool ____Activate_4;
	// SkillBase SkillManager::_TestSkill
	SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* ____TestSkill_5;
	// SkillBase SkillManager::_CurrentSkill
	SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* ____CurrentSkill_6;
	// System.Single SkillManager::_CurrentSkillTime
	float ____CurrentSkillTime_7;
	// UnityEngine.GameObject SkillManager::_Sender
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____Sender_8;
};

// SwordBladeBase
struct SwordBladeBase_t7A045890A2EAE3B82A8DC23218F9EE0E2792C742  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SwordBladeBase::_ParentSwordObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____ParentSwordObject_4;
	// UnityEngine.Events.UnityEvent`1<IDamageable> SwordBladeBase::_OnHitEvent
	UnityEvent_1_tBD0229E621FEE1B9E09D34031C141A547EA8BABF* ____OnHitEvent_5;
	// UnityEngine.Renderer SwordBladeBase::_Material
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____Material_6;
	// UnityEngine.Collider SwordBladeBase::_Trigger
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____Trigger_7;
	// System.Boolean SwordBladeBase::_CanHit
	bool ____CanHit_8;
};

// TestDamager
struct TestDamager_tD9DC1CF7CB50081B13321DCD99850B9DF596AB24  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TestDamager::_Target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____Target_4;
	// System.Single TestDamager::_Damage
	float ____Damage_5;
	// System.Single TestDamager::_Piercing
	float ____Piercing_6;
	// System.Boolean TestDamager::_Attack
	bool ____Attack_7;
	// IDamageable TestDamager::_Damageable
	RuntimeObject* ____Damageable_8;
};

// TestDirectionalRotation
struct TestDirectionalRotation_t59C526C0B594269EE9536CA8085654F38D3F4963  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TestDirectionalRotation::_Target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____Target_4;
	// UnityEngine.GameObject TestDirectionalRotation::_RotatingBody
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____RotatingBody_5;
	// UnityEngine.Vector3 TestDirectionalRotation::_OffsetRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____OffsetRotation_6;
};

// TestFindForward
struct TestFindForward_t00A7C140E2BA5E5E3C020F36D8E72539E89DE35A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_OriginPose_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UIManager::_playerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____playerTransform_4;
	// System.Int32 UIManager::_FinnalScore
	int32_t ____FinnalScore_5;
};

// UIScript
struct UIScript_tB9C77D8B2007D6D58BBFC194568BC8433D535689  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UIScript::_WeaponSelector
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____WeaponSelector_4;
	// UnityEngine.Vector3 UIScript::_RotationOffsets
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____RotationOffsets_5;
	// System.Boolean UIScript::_Click
	bool ____Click_6;
};

// WeaponBase
struct WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// WeaponStats WeaponBase::_Stats
	WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* ____Stats_4;
	// UnityEngine.Transform WeaponBase::_PrimaryHandTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____PrimaryHandTransform_5;
	// UnityEngine.Transform WeaponBase::_SecondaryHandTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____SecondaryHandTransform_6;
	// WeaponBase/WeaponType WeaponBase::_WeaponType
	int32_t ____WeaponType_7;
	// System.Boolean WeaponBase::_ForwardCorrection
	bool ____ForwardCorrection_8;
	// UnityEngine.Transform WeaponBase::_PrimaryGrabPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____PrimaryGrabPoint_9;
	// UnityEngine.Transform WeaponBase::_SecondaryGrabPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____SecondaryGrabPoint_10;
	// UnityEngine.GameObject WeaponBase::_Model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____Model_11;
	// SkillBase WeaponBase::_Skill
	SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* ____Skill_12;
	// SkillManager WeaponBase::_SkillManager
	SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* ____SkillManager_13;
	// System.Boolean WeaponBase::_PrimaryGrabbed
	bool ____PrimaryGrabbed_14;
	// System.Boolean WeaponBase::_SecondaryGrabbed
	bool ____SecondaryGrabbed_15;
	// UnityEngine.Vector3 WeaponBase::p_ForwardCorrectionOffsets
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p_ForwardCorrectionOffsets_16;
};

// WeaponSelector
struct WeaponSelector_tDA9BF78AB131D46309C640788C4E272AC4300B20  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform WeaponSelector::_ParentHandTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____ParentHandTransform_4;
	// UnityEngine.Transform WeaponSelector::_WeaponSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____WeaponSpawnPoint_5;
	// UnityEngine.Canvas WeaponSelector::_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ____Canvas_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WeaponSelector::_WeaponsPrefabs
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____WeaponsPrefabs_7;
	// System.Collections.Generic.List`1<SelectorButton> WeaponSelector::_SelectorButton
	List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* ____SelectorButton_8;
	// System.Single WeaponSelector::_Radius
	float ____Radius_9;
	// UnityEngine.Vector3 WeaponSelector::_Offsets
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Offsets_10;
	// System.Single WeaponSelector::_Degrees
	float ____Degrees_11;
};

// Bow
struct Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB  : public WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF
{
	// UnityEngine.Transform Bow::_ProjectileSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____ProjectileSpawnPoint_17;
	// System.Single Bow::_MinimalPull
	float ____MinimalPull_18;
	// System.Single Bow::_Multiplier
	float ____Multiplier_19;
	// System.Single Bow::_SmoothTime
	float ____SmoothTime_20;
	// UnityEngine.GameObject Bow::_PojectileObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____PojectileObject_21;
	// Projectile Bow::_Projectile
	Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* ____Projectile_22;
};

// Cannoneer
struct Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C  : public EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D
{
	// UnityEngine.Transform Cannoneer::_ProjectileSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____ProjectileSpawnPoint_8;
	// System.Single Cannoneer::_LaunchPower
	float ____LaunchPower_9;
	// System.Single Cannoneer::_LaunchHeight
	float ____LaunchHeight_10;
	// System.Single Cannoneer::_LaunchAngel
	float ____LaunchAngel_11;
	// GroupManager Cannoneer::_GroupManager
	GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* ____GroupManager_12;
	// UnityEngine.Transform Cannoneer::_Target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____Target_13;
	// UnityEngine.AI.NavMeshAgent Cannoneer::_Agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ____Agent_14;
	// System.Single Cannoneer::_RangedDistance
	float ____RangedDistance_15;
	// System.Single Cannoneer::_RetreateDistance
	float ____RetreateDistance_16;
	// System.Boolean Cannoneer::_CanShoot
	bool ____CanShoot_17;
	// UnityEngine.GameObject Cannoneer::_ProjectileObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____ProjectileObject_18;
	// Projectile Cannoneer::_Projectile
	Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* ____Projectile_19;
};

// Crawler
struct Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE  : public EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D
{
	// GroupManager Crawler::_GroupManager
	GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* ____GroupManager_8;
	// UnityEngine.Vector3 Crawler::_PlayerDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____PlayerDirection_9;
	// UnityEngine.GameObject[] Crawler::_Units
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____Units_10;
	// UnityEngine.Vector3 Crawler::_Total
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Total_11;
	// UnityEngine.Vector3 Crawler::_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Center_12;
	// UnityEngine.Vector3 Crawler::_Offests
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Offests_13;
	// UnityEngine.AI.NavMeshAgent Crawler::_Agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ____Agent_14;
	// System.Single Crawler::_ColldownTime
	float ____ColldownTime_15;
	// System.Boolean Crawler::_CanAttack
	bool ____CanAttack_16;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public SingletonGeneric_1_t3481BDF66C6764DC9D9FD2CDF892771A62D7FF44
{
	// System.Boolean GameManager::_IsPaused
	bool ____IsPaused_5;
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

// OneHandSword
struct OneHandSword_t1B648D7D2A2C2C2B6519309DD3854E14A443F785  : public WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF
{
	// System.Single OneHandSword::_MinimalSwingSpeed
	float ____MinimalSwingSpeed_17;
	// System.Boolean OneHandSword::_IsCharged
	bool ____IsCharged_18;
	// UnityEngine.GameObject OneHandSword::_Blade
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____Blade_19;
	// UnityEngine.Collider OneHandSword::_BladeCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____BladeCollider_20;
	// UnityEngine.Vector3 OneHandSword::_Offsets
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Offsets_21;
	// UnityEngine.Vector3 OneHandSword::_PreviosPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____PreviosPos_22;
};

// ProjectileManager
struct ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1  : public SingletonGeneric_1_t940ED1E7173AC7599A36886F463CE935E30AF7BD
{
	// UnityEngine.GameObject ProjectileManager::_ProjectilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____ProjectilePrefab_5;
	// System.Int32 ProjectileManager::_TotalProjectile
	int32_t ____TotalProjectile_6;
	// UnityEngine.GameObject[] ProjectileManager::_PooledProjectile
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____PooledProjectile_7;
};

// TwoHandedWeapon
struct TwoHandedWeapon_tA2EDE285CA7D9229E8D26353F34330CCA6663CE1  : public WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF
{
	// System.Single TwoHandedWeapon::_MinimalSwingSpeed
	float ____MinimalSwingSpeed_17;
	// System.Boolean TwoHandedWeapon::_IsCharged
	bool ____IsCharged_18;
	// UnityEngine.GameObject TwoHandedWeapon::_Blade
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____Blade_19;
	// UnityEngine.Collider TwoHandedWeapon::_BladeCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____BladeCollider_20;
	// UnityEngine.Vector3 TwoHandedWeapon::_Offsets
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____Offsets_21;
	// UnityEngine.Vector3 TwoHandedWeapon::_PreviosPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____PreviosPos_22;
};

// WaveManager
struct WaveManager_t432EF298E8C09678E15239E5EF95239F5B4AC141  : public SingletonGeneric_1_t47251726B585D0E62DE5287BEDD53D20C06461F1
{
	// UnityEngine.Events.UnityEvent WaveManager::OnWaveStart
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnWaveStart_5;
	// UnityEngine.Events.UnityEvent WaveManager::OnWaveStop
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnWaveStop_6;
	// System.Int32 WaveManager::_MinWaveNumber
	int32_t ____MinWaveNumber_7;
	// System.Int32 WaveManager::_MaxWaveNumber
	int32_t ____MaxWaveNumber_8;
	// System.Boolean WaveManager::_IsStarted
	bool ____IsStarted_9;
	// System.Int32 WaveManager::_CurrentWaveNumber
	int32_t ____CurrentWaveNumber_10;
};

// WeaponManager
struct WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120  : public SingletonGeneric_1_t8473DF67A1D74B5A05A11BF6CE526B290F68FFF7
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WeaponManager::WeaponPrefabs
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___WeaponPrefabs_5;
	// UnityEngine.GameObject[] WeaponManager::_PooledWeapons
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____PooledWeapons_6;
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

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
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


// T SingletonGeneric`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingletonGeneric_1_get_Instance_mA049730D0AF8A8AE6A7A7FE9FA501A4604F07514_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_gshared (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg00, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mB03FAFB4EA9BB010481D103709FB149F26D2D1D0_gshared (UnityEvent_1_t090B79D1A655BCAB01BC91C7409AC476DC731B81* __this, int32_t ___arg00, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void SingletonGeneric`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonGeneric_1__ctor_m0A903AC18B4408CDB9FF337EA261DDC615AEF30A_gshared (SingletonGeneric_1_t127B064F8A1273425B2E07CC51B87AA91BB24811* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;

// System.Void Cannoneer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_Init_m74DBFF4DF67FD353CBD446A6F98DDD469A33B6AD (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) ;
// System.Void Cannoneer::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_Movement_m82C55087756299F272975DD11D9D627AEC980988 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) ;
// System.Void Cannoneer::ShootTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_ShootTarget_m33AE254FAF78445E0F1980CB42A64953889CE203 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target0, const RuntimeMethod* method) ;
// System.Void Cannoneer::LockAtTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_LockAtTarget_mB1938427266BE59B5CDA596A8F6196F76BD2BA4F (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target0, const RuntimeMethod* method) ;
// T SingletonGeneric`1<ProjectileManager>::get_Instance()
inline ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1* SingletonGeneric_1_get_Instance_m9281B95951229EF9106DE338B14E3138AF008632 (const RuntimeMethod* method)
{
	return ((  ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1* (*) (const RuntimeMethod*))SingletonGeneric_1_get_Instance_mA049730D0AF8A8AE6A7A7FE9FA501A4604F07514_gshared)(method);
}
// UnityEngine.GameObject ProjectileManager::GetProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ProjectileManager_GetProjectile_m4FD9047B4E918FA1C8AE5A7B8DA6F45D91F8A150 (ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Projectile>()
inline Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Projectile::AssignParameter(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_AssignParameter_m35F227340B743FA8568C5FDFD1208ADE5D602ED5 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, float ___InitVelocity0, float ___InitHeight1, float ___LaunchAngle2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) ;
// System.Boolean Cannoneer::IsInRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cannoneer_IsInRange_m76CA4E1C72F0A0B1E85C1F29718B5BDEC26E3F49 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject GroupManager::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GroupManager_get_Player_mE763EEFB2D713DE2F5FC3E0248F713C68B950749 (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) ;
// System.Single GroupManager::get_RangedDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GroupManager_get_RangedDistance_mABD46238F6E15E2D68E4ECA53F513A79E16A6C5B (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void EnemyBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBase__ctor_m4BB1E9B26E21E6D22B72B5FB5BEEBE63CB82D772 (EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] GroupManager::get_Units()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GroupManager_get_Units_m386E0380A5126ED1C92602A87B8D65A6A18061BF (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) ;
// System.Single GroupManager::get_StopDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GroupManager_get_StopDistance_mCB741FE5B48F4F28DECE78E52040D758107F207E (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<IDamageable>()
inline RuntimeObject* GameObject_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m2932B85664B494D72382DE422CD1D846B0323315 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// EnemyStats EnemyBase::get_Stats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* EnemyBase_get_Stats_m6AA964E7A420383E79EB0B4729761AF00A54E777 (EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D* __this, const RuntimeMethod* method) ;
// System.Single EnemyStats::get_Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyStats_get_Damage_mA93A670B126EC326090E7E4842AFB18813160DD6 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) ;
// System.Single EnemyStats::get_Piercing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyStats_get_Piercing_m9FA68311E63B96FD9B30881B6EB979DD21B5F219 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single EnemyStats::get_Defense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyStats_get_Defense_m64AA237103BF4A3CE78A9E68DDB38F794254BE17 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) ;
// System.Single EnemyStats::get_Health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyStats_get_Health_mDD9DD15C385F7F921A10457C319731806E7EA633 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) ;
// System.Void EnemyStats::set_Health(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStats_set_Health_m439453586B980333F3B9D473EF87C399F6F03C2D (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(T0)
inline void UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_gshared)(__this, ___arg00, method);
}
// System.Void EnemyBase::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBase_Die_mF671CB88338580CF013B7D26F01E8FA690B525D7 (EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<EnemyStats>(T)
inline EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* Object_Instantiate_TisEnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A_m6AF9C2C8065E6534934557A542301765786E7EAC (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* ___original0, const RuntimeMethod* method)
{
	return ((  EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* (*) (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_poseSource_m9170B150EF9457C39E316C1FE4C94691ECA92106 (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Void Grab::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_Init_mC836BB7CF3D187000BA324AC6D34A13077E3DD52 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::IsPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Grab::Detached(IGrabable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_Detached_m54BF094EF38F15CD449552F38865147A222C73BE (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, RuntimeObject* ___Target0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::WasReleasedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_WasReleasedThisFrame_mF694B7E4116DBBA186CC8828F7C36ADCC351F409 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<IGrabable>()
inline RuntimeObject* GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Grab::GrabItem(IGrabable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_GrabItem_mCC6926C2918A708262E48985705CDB40C12134E1 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, RuntimeObject* ___Target0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<InteractionManager>()
inline InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* Component_GetComponentInParent_TisInteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF_mCBF4B69E09D1EE6DA62431D1F32AEDA94A4E5C2E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Break()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Break_m7AE7554F3BA3BD5E49A0073434A9680534CE8EC7 (const RuntimeMethod* method) ;
// System.Single InteractionManager::get_Range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InteractionManager_get_Range_mA40C2A97A1218B688448B4F7C4D748FF44FD5D27 (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, const RuntimeMethod* method) ;
// System.Boolean InteractionManager::get_ClickGrab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionManager_get_ClickGrab_m70571BA8C3538FD76BBCB005342F45E3B22CC75E (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, const RuntimeMethod* method) ;
// System.Void Grab::ControllInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_ControllInit_m69053DB595F2C1BD7B71DC1418AA63B6F3966237 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) ;
// InteractionMode InteractionManager::get_interactionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionManager_get_interactionMode_m7C94A742ECA1C924671DD7B54DCA2C8AFFDDE33A (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<HandController>()
inline HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* Component_GetComponent_TisHandController_tD866B993094B1833037D30396BB39F6C15DDC10C_mC214D8EE673CAF951DBEC2FFBF0BE54E4B0B0057 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// HandOrientation HandController::get_handOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandController_get_handOrientation_m24C58C3EB0727085971C49B61860891A94899C24 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// DetectionType InteractionManager::get_detectionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionManager_get_detectionType_m9B943545FBACF730C608A59FF11A39CD42567012 (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, const RuntimeMethod* method) ;
// System.Void Grab::InitRayBaseGrab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_InitRayBaseGrab_m34975FFB8F45957F89EC283CB65D336C36BB66BC (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) ;
// System.Void Grab::InitColliderBaseGrab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_InitColliderBaseGrab_m5D24BAA3379F9E0D2BD625AFA75DFD7FAB0AD49F (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<DetectionType>::Invoke(T0)
inline void UnityEvent_1_Invoke_m65172BB3B5C67B576413A59C96F50EC55370ECFE (UnityEvent_1_tC8D791ABF54AEB5ED469D872C6DC3484B953507E* __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC8D791ABF54AEB5ED469D872C6DC3484B953507E*, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_mB03FAFB4EA9BB010481D103709FB149F26D2D1D0_gshared)(__this, ___arg00, method);
}
// T System.Collections.Generic.List`1<SelectorButton>::get_Item(System.Int32)
inline SelectorButton_t30B0FFC2DD0EDDCE7132861AFF7EF49847638869* List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F (List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SelectorButton_t30B0FFC2DD0EDDCE7132861AFF7EF49847638869* (*) (List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<SelectorButton>::get_Count()
inline int32_t List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_inline (List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void WeaponSelector::CalculateOffsetsAngle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSelector_CalculateOffsetsAngle_m02A368E866CBADDDD55A2964AEAB580CBE8A5CE2 (WeaponSelector_tDA9BF78AB131D46309C640788C4E272AC4300B20* __this, int32_t ___NumberOfButton0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// T SingletonGeneric`1<WeaponManager>::get_Instance()
inline WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* SingletonGeneric_1_get_Instance_m7B4EE777E35935FB52501FD3DD1785001D4B946E (const RuntimeMethod* method)
{
	return ((  WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* (*) (const RuntimeMethod*))SingletonGeneric_1_get_Instance_mA049730D0AF8A8AE6A7A7FE9FA501A4604F07514_gshared)(method);
}
// UnityEngine.GameObject WeaponManager::GetWeapons(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WeaponManager_GetWeapons_m10FFE2FFE66B0E58FEFA65B4800A5A049CFB4655 (WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WeaponsPrefabs0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SelectorButton>::.ctor()
inline void List_1__ctor_m5AA1A01BB9BC86EAAFD6B968098B2996FAFBDD05 (List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Single PlayerStats::get_Defense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_Defense_mD215AEAB88467FC0E5F773217CDD4FCED657C74F (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) ;
// System.Single PlayerStats::get_Health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_Health_mB052A3E9E26BC761534296DF15BCFF4D5E76082E (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) ;
// System.Void PlayerStats::set_Health(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats_set_Health_m172BA11D0570EBF6055F306666CC7ED118C6F14F (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Player::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Die_mC24698ED84E130E43101B213727A48AA59BB1971 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<PlayerStats>(T)
inline PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* Object_Instantiate_TisPlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_mC47739B18919A6E04E8A98E3DF8C36DA19F1971A (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* ___original0, const RuntimeMethod* method)
{
	return ((  PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* (*) (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void SkillBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillBase__ctor_mF35CED78596A71F408208794C64211D18ED06BAE (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void GroupManager::SpawnUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupManager_SpawnUnits_mF8E7062D3C18CA23C19DA431029DDD1240373017 (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<Crawler>()
inline Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* GameObject_GetComponent_TisCrawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE_m7E920AE3EE638852A3AECC45506B3147E3A42512 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Crawler::set_SetGroupManager(GroupManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crawler_set_SetGroupManager_m14E9406ED9FDCF4494105D79C27447F9EE366D55 (Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* __this, GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Cannoneer>()
inline Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* GameObject_GetComponent_TisCannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C_m7387ECFCF879E7243ABDD8DA2C2B0F1A06AB52BC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Cannoneer::set_SetGroupManager(GroupManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_set_SetGroupManager_mE16CF5049B9C64CE2AAE2E5D9E31F381906A6482 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void SingletonGeneric`1<GameManager>::.ctor()
inline void SingletonGeneric_1__ctor_m0F83E3052E995F3E468D67B745ECE6B2EEAAA0BC (SingletonGeneric_1_t3481BDF66C6764DC9D9FD2CDF892771A62D7FF44* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonGeneric_1_t3481BDF66C6764DC9D9FD2CDF892771A62D7FF44*, const RuntimeMethod*))SingletonGeneric_1__ctor_m0A903AC18B4408CDB9FF337EA261DDC615AEF30A_gshared)(__this, method);
}
// System.Void ProjectileManager::SpawnProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileManager_SpawnProjectile_mBE186E770189A769ACAC7EAD1E00DDFF71D89E5C (ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void SingletonGeneric`1<ProjectileManager>::.ctor()
inline void SingletonGeneric_1__ctor_mF2AFDFFEEA5EC8B4C0AF6C71E95D4AB35758B5E0 (SingletonGeneric_1_t940ED1E7173AC7599A36886F463CE935E30AF7BD* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonGeneric_1_t940ED1E7173AC7599A36886F463CE935E30AF7BD*, const RuntimeMethod*))SingletonGeneric_1__ctor_m0A903AC18B4408CDB9FF337EA261DDC615AEF30A_gshared)(__this, method);
}
// System.Void SelectorButtonManager::CalculateOffsets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectorButtonManager_CalculateOffsets_m00CEEDD041EF023B508ACD162B99705C5C271473 (SelectorButtonManager_t9BB7D7FBC40883345244EE14785841CD2BB19B4C* __this, const RuntimeMethod* method) ;
// System.Void SkillManager::ChangeSkill(SkillBase,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillManager_ChangeSkill_m5D4DAF042998E095F7D55B4A7611283FBAB5EAA8 (SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* __this, SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* ___NextSkill0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Sender1, const RuntimeMethod* method) ;
// System.Single SkillBase::get_SkillTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkillBase_get_SkillTime_m3A509008D763FC978830235B05EB9D71D3D3A07B (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, const RuntimeMethod* method) ;
// System.Void SkillManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillManager_Clear_m06496CF73178BA6398D84BA44C64612BFB885721 (SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* __this, const RuntimeMethod* method) ;
// System.Void SkillBase::Loop(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillBase_Loop_mC876E35686FD21A30A155A279C16026DD1EB89AB (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, float ___deltaTime0, const RuntimeMethod* method) ;
// System.Void SkillBase::Stop(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillBase_Stop_m9DCCE5284FDB95B6394F3C6888F04335D6402ECE (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___contex0, const RuntimeMethod* method) ;
// System.Void SkillBase::Init(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillBase_Init_m37E51A8D5F79F00C20576D022E7BF8240BCDAF9C (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___contex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void SingletonGeneric`1<WaveManager>::.ctor()
inline void SingletonGeneric_1__ctor_m5B37902AAEAE1BC8520DED5A6B60C40A989A10E4 (SingletonGeneric_1_t47251726B585D0E62DE5287BEDD53D20C06461F1* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonGeneric_1_t47251726B585D0E62DE5287BEDD53D20C06461F1*, const RuntimeMethod*))SingletonGeneric_1__ctor_m0A903AC18B4408CDB9FF337EA261DDC615AEF30A_gshared)(__this, method);
}
// System.Void WeaponManager::SpawnWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponManager_SpawnWeapon_m488A9474894A97D0F50F5FD4B78F5AC0E6AD5520 (WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* __this, const RuntimeMethod* method) ;
// System.Void WeaponManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponManager_Clear_mC0B2A2F859124318B2A88399EE80D43E7C7F9995 (WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* __this, const RuntimeMethod* method) ;
// System.Void SingletonGeneric`1<WeaponManager>::.ctor()
inline void SingletonGeneric_1__ctor_m904E6BDAA740A3F168D1ACEF87D0D3DEB4A9DAEB (SingletonGeneric_1_t8473DF67A1D74B5A05A11BF6CE526B290F68FFF7* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonGeneric_1_t8473DF67A1D74B5A05A11BF6CE526B290F68FFF7*, const RuntimeMethod*))SingletonGeneric_1__ctor_m0A903AC18B4408CDB9FF337EA261DDC615AEF30A_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_up(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Void WeaponBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase__ctor_m46595B1F5C67EE1D36785E1D3AA83C00ADD83FC1 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) ;
// System.Void InteractionManager::ChangeDetectionType(DetectionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_ChangeDetectionType_m6770C2B592509C09E291331CCB355FB843F5660B (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, int32_t ___type0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Bow>()
inline Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* Component_GetComponent_TisBow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB_mFEFB0EBBD6B60D08C3636E7B77F808FA7389D2A4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single Bow::get_SmoothTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bow_get_SmoothTime_m3B72D977C63A4CCF0E19BAEC547ED4DAF2AB8192 (Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform BowStringVisual::get_PullPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BowStringVisual_get_PullPoint_mE97ABC83CDA9D09FEB856DFEEE817E715C833974 (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform BowStringVisual::get_CenterPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BowStringVisual_get_CenterPoint_mD01ED0F72F11704DD125765D0C5A1C8BC0CE97F4 (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, const RuntimeMethod* method) ;
// System.Single BowStringVisual::get_PullPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BowStringVisual_get_PullPower_m42B90B0F91B5DED8AF9931E1D5C039DA75FCD2A0 (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, const RuntimeMethod* method) ;
// System.Void Bow::Shoot(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bow_Shoot_mD89B63327B94D5E6103194C27C8173487CC1126D (Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* __this, float ___LaunchPower0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>::Invoke(T0)
inline void UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9 (UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void GrabPointBase::ResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPointBase_ResetPosition_mE02BE093184CA034708C0A89A68AD7D5ECF3C2E7 (GrabPointBase_t08D2B6DD5F5886C02415B6E6233EFBD0EED8B622* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void GrabPointBase::Detached(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPointBase_Detached_m5EC14C9F1FC9E1D03DDF9282B5B2138726C1FEFE (GrabPointBase_t08D2B6DD5F5886C02415B6E6233EFBD0EED8B622* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Hand0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void WeaponBase::WeaponMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase_WeaponMovement_mA8FC5C374B159D7AC57422A9CF9E97A1C12CE70B (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) ;
// System.Boolean OneHandSword::CalculateSwingSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneHandSword_CalculateSwingSpeed_m0D59D7754C2380D17D37F3A72EC28F5DE25EED18 (OneHandSword_t1B648D7D2A2C2C2B6519309DD3854E14A443F785* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// WeaponStats WeaponBase::get_Stats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* WeaponBase_get_Stats_m81BB8D6CACDA4715B599E0FAF863C002A59F4FC1 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) ;
// System.Single WeaponStats::get_Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WeaponStats_get_Damage_mA2DC2F86ECB89F3B1592B9827EFFBB5B551EFF44 (WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* __this, const RuntimeMethod* method) ;
// System.Single WeaponStats::get_Piercing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WeaponStats_get_Piercing_m2DCEDDE241FBEEA658545C7C7151B0293ED11609 (WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<IDamageable>()
inline RuntimeObject* Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<IDamageable>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA6F86D16F01075DD6D5DA7783449DEB8BCF305ED (UnityEvent_1_tBD0229E621FEE1B9E09D34031C141A547EA8BABF* __this, RuntimeObject* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tBD0229E621FEE1B9E09D34031C141A547EA8BABF*, RuntimeObject*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Boolean WeaponBase::IsTwoHanded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeaponBase_IsTwoHanded_m0F7BBBD235F7F16D9C203B95F2DCE2698A398107 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) ;
// System.Boolean WeaponBase::IsBothHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeaponBase_IsBothHand_m8447F560ED5B8C771BF67F3A129B62335C768463 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// GroupManager Cannoneer::get_SetGroupManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* Cannoneer_get_SetGroupManager_m65CFAAA3C88E9729A99247037518E45B7A302E79 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) 
{
	GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* V_0 = NULL;
	{
		// public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_0 = __this->____GroupManager_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_1 = V_0;
		return L_1;
	}
}
// System.Void Cannoneer::set_SetGroupManager(GroupManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_set_SetGroupManager_mE16CF5049B9C64CE2AAE2E5D9E31F381906A6482 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* ___value0, const RuntimeMethod* method) 
{
	{
		// public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_0 = ___value0;
		__this->____GroupManager_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____GroupManager_12), (void*)L_0);
		// public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }
		return;
	}
}
// System.Void Cannoneer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_Start_mB04B0BDCB804CF84ABE902913461F454F501CC90 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) 
{
	{
		// Init();
		Cannoneer_Init_m74DBFF4DF67FD353CBD446A6F98DDD469A33B6AD(__this, NULL);
		// }
		return;
	}
}
// System.Void Cannoneer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_Update_m5ECC52FF224B9FCE09A4577262BBEC52779132DA (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// Movement();
		Cannoneer_Movement_m82C55087756299F272975DD11D9D627AEC980988(__this, NULL);
		// if (_CanShoot)
		bool L_0 = __this->____CanShoot_17;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// ShootTarget(_Target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____Target_13;
		Cannoneer_ShootTarget_m33AE254FAF78445E0F1980CB42A64953889CE203(__this, L_2, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Cannoneer::ShootTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_ShootTarget_m33AE254FAF78445E0F1980CB42A64953889CE203 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonGeneric_1_get_Instance_m9281B95951229EF9106DE338B14E3138AF008632_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LockAtTarget(Target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___Target0;
		Cannoneer_LockAtTarget_mB1938427266BE59B5CDA596A8F6196F76BD2BA4F(__this, L_0, NULL);
		// _ProjectileObject = ProjectileManager.Instance.GetProjectile();
		ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1* L_1;
		L_1 = SingletonGeneric_1_get_Instance_m9281B95951229EF9106DE338B14E3138AF008632(SingletonGeneric_1_get_Instance_m9281B95951229EF9106DE338B14E3138AF008632_RuntimeMethod_var);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = ProjectileManager_GetProjectile_m4FD9047B4E918FA1C8AE5A7B8DA6F45D91F8A150(L_1, NULL);
		__this->____ProjectileObject_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ProjectileObject_18), (void*)L_2);
		// _Projectile = _ProjectileObject.GetComponent<Projectile>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____ProjectileObject_18;
		NullCheck(L_3);
		Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* L_4;
		L_4 = GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183(L_3, GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183_RuntimeMethod_var);
		__this->____Projectile_19 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Projectile_19), (void*)L_4);
		// _ProjectileObject.transform.position = _ProjectileSpawnPoint.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____ProjectileObject_18;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____ProjectileSpawnPoint_8;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_8, NULL);
		// _ProjectileObject.transform.rotation = _ProjectileSpawnPoint.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->____ProjectileObject_18;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->____ProjectileSpawnPoint_8;
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_12, NULL);
		// _Projectile.AssignParameter(_LaunchPower, _LaunchHeight, _LaunchAngel);
		Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* L_13 = __this->____Projectile_19;
		float L_14 = __this->____LaunchPower_9;
		float L_15 = __this->____LaunchHeight_10;
		float L_16 = __this->____LaunchAngel_11;
		NullCheck(L_13);
		Projectile_AssignParameter_m35F227340B743FA8568C5FDFD1208ADE5D602ED5(L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void Cannoneer::LockAtTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_LockAtTarget_mB1938427266BE59B5CDA596A8F6196F76BD2BA4F (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (Target == transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___Target0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_003c;
	}

IL_0013:
	{
		// Vector3 c_TargetDirecetion = Target.position - transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___Target0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_7, NULL);
		V_0 = L_8;
		// transform.rotation = Quaternion.LookRotation(c_TargetDirecetion);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_10, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_11, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Cannoneer::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_Movement_m82C55087756299F272975DD11D9D627AEC980988 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// _Agent.SetDestination(_Target.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->____Agent_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____Target_13;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_0, L_2, NULL);
		// if (IsInRange())
		bool L_4;
		L_4 = Cannoneer_IsInRange_m76CA4E1C72F0A0B1E85C1F29718B5BDEC26E3F49(__this, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// _Agent.isStopped = true;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_6 = __this->____Agent_14;
		NullCheck(L_6);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_6, (bool)1, NULL);
		// _CanShoot = true;
		__this->____CanShoot_17 = (bool)1;
		// return;
		goto IL_0096;
	}

IL_0039:
	{
		// _CanShoot = false;
		__this->____CanShoot_17 = (bool)0;
		// if (Vector3.Distance(transform.position, _Target.position) <= _RetreateDistance)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->____Target_13;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_8, L_10, NULL);
		float L_12 = __this->____RetreateDistance_16;
		V_1 = (bool)((((int32_t)((!(((float)L_11) <= ((float)L_12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0096;
		}
	}
	{
		// _Agent.isStopped = false;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_14 = __this->____Agent_14;
		NullCheck(L_14);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_14, (bool)0, NULL);
		// _Agent.SetDestination(_GroupManager.transform.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_15 = __this->____Agent_14;
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_16 = __this->____GroupManager_12;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		NullCheck(L_15);
		bool L_19;
		L_19 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_15, L_18, NULL);
		// return;
		goto IL_0096;
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Boolean Cannoneer::IsInRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cannoneer_IsInRange_m76CA4E1C72F0A0B1E85C1F29718B5BDEC26E3F49 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Vector3.Distance(transform.position, _Target.position) <= _RangedDistance)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____Target_13;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_3, NULL);
		float L_5 = __this->____RangedDistance_15;
		V_0 = (bool)((((int32_t)((!(((float)L_4) <= ((float)L_5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0033;
	}

IL_002f:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void Cannoneer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_Init_m74DBFF4DF67FD353CBD446A6F98DDD469A33B6AD (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _Agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->____Agent_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Agent_14), (void*)L_0);
		// _Target = _GroupManager.Player.transform;
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_1 = __this->____GroupManager_12;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GroupManager_get_Player_mE763EEFB2D713DE2F5FC3E0248F713C68B950749(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		__this->____Target_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Target_13), (void*)L_3);
		// _RangedDistance = _GroupManager.RangedDistance;
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_4 = __this->____GroupManager_12;
		NullCheck(L_4);
		float L_5;
		L_5 = GroupManager_get_RangedDistance_mABD46238F6E15E2D68E4ECA53F513A79E16A6C5B(L_4, NULL);
		__this->____RangedDistance_15 = L_5;
		// _Agent.SetDestination(_Target.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_6 = __this->____Agent_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____Target_13;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_6, L_8, NULL);
		// _RetreateDistance = _RangedDistance / 2;
		float L_10 = __this->____RangedDistance_15;
		__this->____RetreateDistance_16 = ((float)(L_10/(2.0f)));
		// }
		return;
	}
}
// System.Void Cannoneer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_OnDisable_m48C8C823DFD40BC636A3601B25FEF55B5B5C5E95 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!_Agent)
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->____Agent_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_0022;
	}

IL_0015:
	{
		// _Agent.isStopped = true;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_3 = __this->____Agent_14;
		NullCheck(L_3);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_3, (bool)1, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Cannoneer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer_OnEnable_m9661A71B18F31494D644EFB83F128EF75747C76C (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!_Agent)
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->____Agent_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_0039;
	}

IL_0015:
	{
		// _Agent.isStopped = false;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_3 = __this->____Agent_14;
		NullCheck(L_3);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_3, (bool)0, NULL);
		// _Agent.SetDestination(_Target.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_4 = __this->____Agent_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->____Target_13;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_4, L_6, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Cannoneer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cannoneer__ctor_m4CE48E7CD3856192C8D7F2D69A32D5A4135422E1 (Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* __this, const RuntimeMethod* method) 
{
	{
		EnemyBase__ctor_m4BB1E9B26E21E6D22B72B5FB5BEEBE63CB82D772(__this, NULL);
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
// GroupManager Crawler::get_SetGroupManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* Crawler_get_SetGroupManager_m91C41F9358F48BBD9325CC3A0AEF43F0FA238484 (Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* __this, const RuntimeMethod* method) 
{
	GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* V_0 = NULL;
	{
		// public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_0 = __this->____GroupManager_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_1 = V_0;
		return L_1;
	}
}
// System.Void Crawler::set_SetGroupManager(GroupManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crawler_set_SetGroupManager_m14E9406ED9FDCF4494105D79C27447F9EE366D55 (Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* __this, GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* ___value0, const RuntimeMethod* method) 
{
	{
		// public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_0 = ___value0;
		__this->____GroupManager_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____GroupManager_8), (void*)L_0);
		// public GroupManager SetGroupManager { get { return _GroupManager; } set { _GroupManager = value; } }
		return;
	}
}
// System.Void Crawler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crawler_Start_m13F6281A9C62FE6EB85E0ED9C861AE5F20F33634 (Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _Units = _GroupManager.Units;
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_0 = __this->____GroupManager_8;
		NullCheck(L_0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GroupManager_get_Units_m386E0380A5126ED1C92602A87B8D65A6A18061BF(L_0, NULL);
		__this->____Units_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Units_10), (void*)L_1);
		// _Agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2;
		L_2 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->____Agent_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Agent_14), (void*)L_2);
		// _PlayerDirection = _GroupManager.Player.transform.position;
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_3 = __this->____GroupManager_8;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GroupManager_get_Player_mE763EEFB2D713DE2F5FC3E0248F713C68B950749(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->____PlayerDirection_9 = L_6;
		// _Agent.SetDestination(_PlayerDirection);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_7 = __this->____Agent_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->____PlayerDirection_9;
		NullCheck(L_7);
		bool L_9;
		L_9 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Crawler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crawler_Update_m3E4A7C7F1E3C5A8038135339ADAEF47B1133B2F6 (Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (Vector3.Distance(transform.position, _PlayerDirection) <= _GroupManager.StopDistance)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____PlayerDirection_9;
		float L_3;
		L_3 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_2, NULL);
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_4 = __this->____GroupManager_8;
		NullCheck(L_4);
		float L_5;
		L_5 = GroupManager_get_StopDistance_mCB741FE5B48F4F28DECE78E52040D758107F207E(L_4, NULL);
		V_0 = (bool)((((int32_t)((!(((float)L_3) <= ((float)L_5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0099;
		}
	}
	{
		// _Agent.isStopped = true;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_7 = __this->____Agent_14;
		NullCheck(L_7);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_7, (bool)1, NULL);
		// _ColldownTime += Time.deltaTime;
		float L_8 = __this->____ColldownTime_15;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____ColldownTime_15 = ((float)il2cpp_codegen_add(L_8, L_9));
		// if (_CanAttack)
		bool L_10 = __this->____CanAttack_16;
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		// AttackTarget(_GroupManager.Player);
		GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* L_12 = __this->____GroupManager_8;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = GroupManager_get_Player_mE763EEFB2D713DE2F5FC3E0248F713C68B950749(L_12, NULL);
		VirtualActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(5 /* System.Void EnemyBase::AttackTarget(UnityEngine.GameObject) */, __this, L_13);
		// _CanAttack = false;
		__this->____CanAttack_16 = (bool)0;
		// _ColldownTime = 0;
		__this->____ColldownTime_15 = (0.0f);
	}

IL_007b:
	{
		// if (_ColldownTime >= 3f)
		float L_14 = __this->____ColldownTime_15;
		V_2 = (bool)((((int32_t)((!(((float)L_14) >= ((float)(3.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0098;
		}
	}
	{
		// _CanAttack = true;
		__this->____CanAttack_16 = (bool)1;
	}

IL_0098:
	{
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void Crawler::FindOffsets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crawler_FindOffsets_m243959E9DBB3B16FABF17C9EA36CC47C37D9BE7B (Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// foreach (var unit in _Units)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____Units_10;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0033;
	}

IL_000d:
	{
		// foreach (var unit in _Units)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// _Total += unit.transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->____Total_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_8, NULL);
		__this->____Total_11 = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		// foreach (var unit in _Units)
		int32_t L_11 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// _Center = _Total / _Units.Length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->____Total_11;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->____Units_10;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_13, ((float)((int32_t)(((RuntimeArray*)L_14)->max_length))), NULL);
		__this->____Center_12 = L_15;
		// _Offests = _Center - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->____Center_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_18, NULL);
		__this->____Offests_13 = L_19;
		// _PlayerDirection += _Offests;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->____PlayerDirection_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->____Offests_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_21, NULL);
		__this->____PlayerDirection_9 = L_22;
		// }
		return;
	}
}
// System.Void Crawler::AttackTarget(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crawler_AttackTarget_m19AA696F64BA5D1DE852B93455A99D9DBB1A4BB4 (Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m2932B85664B494D72382DE422CD1D846B0323315_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Target.GetComponent<IDamageable>().DoDamage(Stats.Damage, Stats.Piercing);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___Target0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameObject_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m2932B85664B494D72382DE422CD1D846B0323315(L_0, GameObject_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m2932B85664B494D72382DE422CD1D846B0323315_RuntimeMethod_var);
		EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* L_2;
		L_2 = EnemyBase_get_Stats_m6AA964E7A420383E79EB0B4729761AF00A54E777(__this, NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = EnemyStats_get_Damage_mA93A670B126EC326090E7E4842AFB18813160DD6(L_2, NULL);
		EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* L_4;
		L_4 = EnemyBase_get_Stats_m6AA964E7A420383E79EB0B4729761AF00A54E777(__this, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = EnemyStats_get_Piercing_m9FA68311E63B96FD9B30881B6EB979DD21B5F219(L_4, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< float, float >::Invoke(0 /* System.Void IDamageable::DoDamage(System.Single,System.Single) */, IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_il2cpp_TypeInfo_var, L_1, L_3, L_5);
		// }
		return;
	}
}
// System.Void Crawler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crawler_OnDisable_m474E71DEAE668AC25168E75F1B1907D6767300C9 (Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!_Agent)
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->____Agent_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_0022;
	}

IL_0015:
	{
		// _Agent.isStopped = true;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_3 = __this->____Agent_14;
		NullCheck(L_3);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_3, (bool)1, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Crawler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crawler_OnEnable_m8A6D3BAF45F0E037505811C13C822A0E905D15ED (Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!_Agent)
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->____Agent_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_0034;
	}

IL_0015:
	{
		// _Agent.isStopped = false;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_3 = __this->____Agent_14;
		NullCheck(L_3);
		NavMeshAgent_set_isStopped_mF374E697F39845233B84D8C4873DEABC3AA490DF(L_3, (bool)0, NULL);
		// _Agent.SetDestination(_PlayerDirection);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_4 = __this->____Agent_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->____PlayerDirection_9;
		NullCheck(L_4);
		bool L_6;
		L_6 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_4, L_5, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Crawler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crawler__ctor_m5BCAF363FB52BEBE60424B04D303D58665CC0659 (Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* __this, const RuntimeMethod* method) 
{
	{
		// private bool _CanAttack = true;
		__this->____CanAttack_16 = (bool)1;
		EnemyBase__ctor_m4BB1E9B26E21E6D22B72B5FB5BEEBE63CB82D772(__this, NULL);
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
// System.Void EnemyMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement__ctor_mFA5BD794CC67E008E8043CBDB7CDFB437D26180B (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
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
// System.Void EnemyBase::DoDamage(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBase_DoDamage_m0BB2D5E568D070B2E42FDD7399205F21F76C14C5 (EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D* __this, float ___Damage0, float ___Piercing1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// float c_Defense = _Stats.Defense; ;
		EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* L_0 = __this->____Stats_4;
		NullCheck(L_0);
		float L_1;
		L_1 = EnemyStats_get_Defense_m64AA237103BF4A3CE78A9E68DDB38F794254BE17(L_0, NULL);
		V_0 = L_1;
		// float c_Damage = Damage;
		float L_2 = ___Damage0;
		V_1 = L_2;
		// float c_Piercing = Piercing;
		float L_3 = ___Piercing1;
		V_2 = L_3;
		// if (_Stats.Health > 0f)
		EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* L_4 = __this->____Stats_4;
		NullCheck(L_4);
		float L_5;
		L_5 = EnemyStats_get_Health_mDD9DD15C385F7F921A10457C319731806E7EA633(L_4, NULL);
		V_3 = (bool)((((float)L_5) > ((float)(0.0f)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_00a1;
		}
	}
	{
		// if (c_Piercing < 0f)
		float L_7 = V_2;
		V_4 = (bool)((((float)L_7) < ((float)(0.0f)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		// c_Piercing = 0f;
		V_2 = (0.0f);
	}

IL_003d:
	{
		// c_Defense -= Piercing;
		float L_9 = V_0;
		float L_10 = ___Piercing1;
		V_0 = ((float)il2cpp_codegen_subtract(L_9, L_10));
		// if (c_Defense <= 0f)
		float L_11 = V_0;
		V_5 = (bool)((((int32_t)((!(((float)L_11) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// c_Defense = 0f;
		V_0 = (0.0f);
	}

IL_0058:
	{
		// c_Damage -= c_Defense;
		float L_13 = V_1;
		float L_14 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// if (c_Damage <= 0)
		float L_15 = V_1;
		V_6 = (bool)((((int32_t)((!(((float)L_15) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0073;
		}
	}
	{
		// c_Damage = 0;
		V_1 = (0.0f);
	}

IL_0073:
	{
		// _Stats.Health -= c_Damage;
		EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* L_17 = __this->____Stats_4;
		EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* L_18 = L_17;
		NullCheck(L_18);
		float L_19;
		L_19 = EnemyStats_get_Health_mDD9DD15C385F7F921A10457C319731806E7EA633(L_18, NULL);
		float L_20 = V_1;
		NullCheck(L_18);
		EnemyStats_set_Health_m439453586B980333F3B9D473EF87C399F6F03C2D(L_18, ((float)il2cpp_codegen_subtract(L_19, L_20)), NULL);
		// _OnHitEvent.Invoke(transform.position);
		UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* L_21 = __this->____OnHitEvent_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		NullCheck(L_21);
		UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF(L_21, L_23, UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		goto IL_00a8;
	}

IL_00a1:
	{
		// Die();
		EnemyBase_Die_mF671CB88338580CF013B7D26F01E8FA690B525D7(__this, NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void EnemyBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBase_Awake_mE946A4CBFD70D3D14B1623A1D8A6C9B76CAC9842 (EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisEnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A_m6AF9C2C8065E6534934557A542301765786E7EAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _Stats = Instantiate(_Stats);
		EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* L_0 = __this->____Stats_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* L_1;
		L_1 = Object_Instantiate_TisEnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A_m6AF9C2C8065E6534934557A542301765786E7EAC(L_0, Object_Instantiate_TisEnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A_m6AF9C2C8065E6534934557A542301765786E7EAC_RuntimeMethod_var);
		__this->____Stats_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Stats_4), (void*)L_1);
		// }
		return;
	}
}
// EnemyStats EnemyBase::get_Stats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* EnemyBase_get_Stats_m6AA964E7A420383E79EB0B4729761AF00A54E777 (EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D* __this, const RuntimeMethod* method) 
{
	EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* V_0 = NULL;
	{
		// public EnemyStats Stats { get { return _Stats; } private set { } }
		EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* L_0 = __this->____Stats_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public EnemyStats Stats { get { return _Stats; } private set { } }
		EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* L_1 = V_0;
		return L_1;
	}
}
// System.Void EnemyBase::set_Stats(EnemyStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBase_set_Stats_m6FE67AE8654FD971AFF24ACCCCED0F1A69D5620A (EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D* __this, EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* ___value0, const RuntimeMethod* method) 
{
	{
		// public EnemyStats Stats { get { return _Stats; } private set { } }
		return;
	}
}
// System.Void EnemyBase::AttackTarget(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBase_AttackTarget_mFBE449065303BF040DDC6109AE921A650838C7D8 (EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Target0, const RuntimeMethod* method) 
{
	{
		// public virtual void AttackTarget(GameObject Target) { }
		return;
	}
}
// System.Void EnemyBase::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBase_Die_mF671CB88338580CF013B7D26F01E8FA690B525D7 (EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Dead");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		// _OnDieEvent.Invoke(transform.position);
		UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* L_0 = __this->____OnDieEvent_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF(L_0, L_2, UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EnemyBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBase__ctor_m4BB1E9B26E21E6D22B72B5FB5BEEBE63CB82D772 (EnemyBase_t46A1023DF0F7435FF4B79D1E0339B9FAA6F9E28D* __this, const RuntimeMethod* method) 
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
// System.String EnemyStats::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnemyStats_get_Name_m2C44CB1D8665BB02FB20292CD54BE5D22112AC04 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string Name { get { return _Name; } private set { } }
		String_t* L_0 = __this->____Name_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string Name { get { return _Name; } private set { } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void EnemyStats::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStats_set_Name_m9AE6C7D043B316D664B6C1743026697D2FB5059A (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get { return _Name; } private set { } }
		return;
	}
}
// System.Single EnemyStats::get_Health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyStats_get_Health_mDD9DD15C385F7F921A10457C319731806E7EA633 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Health { get { return _Health; } set { _Health = value; } }
		float L_0 = __this->____Health_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Health { get { return _Health; } set { _Health = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void EnemyStats::set_Health(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStats_set_Health_m439453586B980333F3B9D473EF87C399F6F03C2D (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Health { get { return _Health; } set { _Health = value; } }
		float L_0 = ___value0;
		__this->____Health_5 = L_0;
		// public float Health { get { return _Health; } set { _Health = value; } }
		return;
	}
}
// System.Single EnemyStats::get_MaxHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyStats_get_MaxHealth_m591601FA32FDF49CF3AD9BC188DDCD5C78DAF83E (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float MaxHealth { get { return _MaxHealth; } private set { } }
		float L_0 = __this->____MaxHealth_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MaxHealth { get { return _MaxHealth; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void EnemyStats::set_MaxHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStats_set_MaxHealth_mED81894BB1EA6ADE9B483D4B885A4CE5EB441EA5 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxHealth { get { return _MaxHealth; } private set { } }
		return;
	}
}
// System.Single EnemyStats::get_Defense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyStats_get_Defense_m64AA237103BF4A3CE78A9E68DDB38F794254BE17 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Defense { get { return _Defense;} private set { } }
		float L_0 = __this->____Defense_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Defense { get { return _Defense;} private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void EnemyStats::set_Defense(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStats_set_Defense_m92DDC46AC62390010A0047065D5DCC9C20AE6907 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Defense { get { return _Defense;} private set { } }
		return;
	}
}
// System.Single EnemyStats::get_MovementSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyStats_get_MovementSpeed_m71A96A6A460DE367943B332BC95F3B60B3EC9743 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float MovementSpeed { get { return _MovementSpeed; } private set { } }
		float L_0 = __this->____MovementSpeed_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MovementSpeed { get { return _MovementSpeed; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void EnemyStats::set_MovementSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStats_set_MovementSpeed_m97C942169871D9A7B3249C8F844C50F4222FAF31 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MovementSpeed { get { return _MovementSpeed; } private set { } }
		return;
	}
}
// System.Single EnemyStats::get_AttackSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyStats_get_AttackSpeed_m408C5675004A3DFDA4FBD9A50BD63BED58419500 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float AttackSpeed { get { return _AttackSpeed; } private set { } }
		float L_0 = __this->____AttackSpeed_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float AttackSpeed { get { return _AttackSpeed; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void EnemyStats::set_AttackSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStats_set_AttackSpeed_mDED0E4DB37F1DA24FABB49D1BC912FC22AB4404E (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float AttackSpeed { get { return _AttackSpeed; } private set { } }
		return;
	}
}
// System.Single EnemyStats::get_Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyStats_get_Damage_mA93A670B126EC326090E7E4842AFB18813160DD6 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Damage { get { return _Damage; } private set { } }
		float L_0 = __this->____Damage_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Damage { get { return _Damage; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void EnemyStats::set_Damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStats_set_Damage_mB3E5202E705B341DED168B94FB181A9462D479A4 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Damage { get { return _Damage; } private set { } }
		return;
	}
}
// System.Single EnemyStats::get_Piercing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyStats_get_Piercing_m9FA68311E63B96FD9B30881B6EB979DD21B5F219 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Piercing { get { return _Piercing; } private set { } }
		float L_0 = __this->____Piercing_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Piercing { get { return _Piercing; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void EnemyStats::set_Piercing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStats_set_Piercing_m0A3328618C684ED6CF759BE981ABD2400EF468F7 (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Piercing { get { return _Piercing; } private set { } }
		return;
	}
}
// System.Void EnemyStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyStats__ctor_m85B14BDE8F9F028F0C3207CEFA344713B3EC051F (EnemyStats_tF5A28C3D0C6E8370730B22C1ECD44058CB4B295A* __this, const RuntimeMethod* method) 
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
// HandOrientation HandController::get_handOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandController_get_handOrientation_m24C58C3EB0727085971C49B61860891A94899C24 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public HandOrientation handOrientation { get { return m_handOrientation; } private set { } }
		int32_t L_0 = __this->___m_handOrientation_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public HandOrientation handOrientation { get { return m_handOrientation; } private set { } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void HandController::set_handOrientation(HandOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_set_handOrientation_m0FD9CC85B1D2FDD89B6A938664A862218876B1C1 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public HandOrientation handOrientation { get { return m_handOrientation; } private set { } }
		return;
	}
}
// System.Void HandController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_Start_m83BA4ED4B162A79177B32DCFCAC05906D4AD8A94 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71050D47FC4858C4B5576340442052FA5B4E4CDD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!InitControllerInput(out _controllerInputMap))
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09** L_0 = (&__this->____controllerInputMap_6);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09** >::Invoke(4 /* System.Boolean HandController::InitControllerInput(UnityEngine.InputSystem.InputActionMap&) */, __this, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Debug.LogError("Failed to initializing Hand Controller.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral71050D47FC4858C4B5576340442052FA5B4E4CDD, NULL);
		goto IL_0023;
	}

IL_0021:
	{
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void HandController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_OnEnable_m9069430FDE2FDA0D4AB65C6028CAA24B74121F91 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	{
		// private void OnEnable() => m_inputAssetController.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___m_inputAssetController_5;
		NullCheck(L_0);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		return;
	}
}
// System.Void HandController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_OnDisable_m3E411FEA10205DFECC75B1BC7E5F4072E58191A0 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	{
		// private void OnDisable() => m_inputAssetController.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___m_inputAssetController_5;
		NullCheck(L_0);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		return;
	}
}
// System.Void HandController::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_OnValidate_m720C1CABCB389FA1C811B5438F9049BE2E728F38 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F1BF80555FCAA169173518D17D983657E114C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92FB1C7F97FE275948C05F4511AA8A0A38BB82C8);
		s_Il2CppMethodInitialized = true;
	}
	TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		// TrackedPoseDriver _tracked = GetComponent<TrackedPoseDriver>();
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_0;
		L_0 = Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293(__this, Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293_RuntimeMethod_var);
		V_0 = L_0;
		// if (_tracked)
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		// switch (m_handOrientation)
		int32_t L_4 = __this->___m_handOrientation_4;
		V_3 = L_4;
		int32_t L_5 = V_3;
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0021;
	}

IL_0021:
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_0067;
	}

IL_0027:
	{
		// if (_tracked.poseSource != TrackedPoseDriver.TrackedPose.LeftPose)
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = TrackedPoseDriver_get_poseSource_m9170B150EF9457C39E316C1FE4C94691ECA92106(L_8, NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		// Debug.LogError("Source Pose must be Left Hand Controlled", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral6F1BF80555FCAA169173518D17D983657E114C6A, __this, NULL);
	}

IL_0045:
	{
		// break;
		goto IL_0067;
	}

IL_0047:
	{
		// if (_tracked.poseSource != TrackedPoseDriver.TrackedPose.RightPose)
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = TrackedPoseDriver_get_poseSource_m9170B150EF9457C39E316C1FE4C94691ECA92106(L_11, NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_12) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		// Debug.LogError("Source Pose must be Right Hand Controlled", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral92FB1C7F97FE275948C05F4511AA8A0A38BB82C8, __this, NULL);
	}

IL_0065:
	{
		// break;
		goto IL_0067;
	}

IL_0067:
	{
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Boolean HandController::InitControllerInput(UnityEngine.InputSystem.InputActionMap&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandController_InitControllerInput_m34B5317A5D7FC4C14F0B6361B153DB747D3726FA (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09** ___actionMap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F1979AE2523D7ADE998C40FEB98D569438452DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A654EF5EC847AE5D461DEA668EDB7F5F2F0FE0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// switch (m_handOrientation)
		int32_t L_0 = __this->___m_handOrientation_4;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_0048;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_001e:
	{
		// actionMap = m_inputAssetController.FindActionMap("LeftController");
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09** L_3 = ___actionMap0;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_4 = __this->___m_inputAssetController_5;
		NullCheck(L_4);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_5;
		L_5 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_4, _stringLiteralB4A654EF5EC847AE5D461DEA668EDB7F5F2F0FE0, (bool)0, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		// break;
		goto IL_0056;
	}

IL_0033:
	{
		// actionMap = m_inputAssetController.FindActionMap("RightController");
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09** L_6 = ___actionMap0;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_7 = __this->___m_inputAssetController_5;
		NullCheck(L_7);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_8;
		L_8 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_7, _stringLiteral0F1979AE2523D7ADE998C40FEB98D569438452DB, (bool)0, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		// break;
		goto IL_0056;
	}

IL_0048:
	{
		// actionMap = null;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09** L_9 = ___actionMap0;
		*((RuntimeObject**)L_9) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)NULL);
		// return true;
		V_2 = (bool)1;
		goto IL_0067;
	}

IL_004f:
	{
		// actionMap = null;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09** L_10 = ___actionMap0;
		*((RuntimeObject**)L_10) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_10, (void*)(RuntimeObject*)NULL);
		// return true;
		V_2 = (bool)1;
		goto IL_0067;
	}

IL_0056:
	{
		// if (actionMap == null)
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09** L_11 = ___actionMap0;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_12 = *((InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09**)L_11);
		V_3 = (bool)((((RuntimeObject*)(InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0067;
	}

IL_0063:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void HandController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController__ctor_mC7FBA1DBB0123D91F5AA40872B63ABCFD650884F (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private HandOrientation m_handOrientation = HandOrientation.Undefined;
		__this->___m_handOrientation_4 = 2;
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
// System.Void Grab::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_Start_mC63BABA79345C008E7A0A1CCFEFC4C424940B27D (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) 
{
	{
		// Init();
		Grab_Init_mC836BB7CF3D187000BA324AC6D34A13077E3DD52(__this, NULL);
		// }
		return;
	}
}
// System.Void Grab::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_Update_mB1BD1B454B07E29A8E22D212CEB2A72CA882F505 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FD23476E557515F160C9810100283B3A57C764E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B11_0 = 0;
	{
		// if (_TriggerAction.IsPressed())
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->____TriggerAction_13;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// _Animator.SetFloat("Blend", -1f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____Animator_6;
		NullCheck(L_3);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_3, _stringLiteral3FD23476E557515F160C9810100283B3A57C764E, (-1.0f), NULL);
		goto IL_004d;
	}

IL_0028:
	{
		// _Animator.SetFloat("Blend", 1f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->____Animator_6;
		NullCheck(L_4);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_4, _stringLiteral3FD23476E557515F160C9810100283B3A57C764E, (1.0f), NULL);
		// _PalmCollider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = __this->____PalmCollider_8;
		NullCheck(L_5);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_5, (bool)0, NULL);
	}

IL_004d:
	{
		// if (_GrabedObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____GrabedObject_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0094;
		}
	}
	{
		// _Animator.SetFloat("Blend", -1f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->____Animator_6;
		NullCheck(L_9);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_9, _stringLiteral3FD23476E557515F160C9810100283B3A57C764E, (-1.0f), NULL);
		// if (!_GrabedObject.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->____GrabedObject_18;
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_10, NULL);
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0093;
		}
	}
	{
		// Detached(c_Target);
		RuntimeObject* L_13 = __this->___c_Target_19;
		Grab_Detached_m54BF094EF38F15CD449552F38865147A222C73BE(__this, L_13, NULL);
	}

IL_0093:
	{
	}

IL_0094:
	{
		// if (_InteractionMode == InteractionMode.Hold)
		int32_t L_14 = __this->____InteractionMode_15;
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)2))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00cc;
		}
	}
	{
		// if (_TriggerAction.WasReleasedThisFrame() && _IsHolding)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16 = __this->____TriggerAction_13;
		NullCheck(L_16);
		bool L_17;
		L_17 = InputAction_WasReleasedThisFrame_mF694B7E4116DBBA186CC8828F7C36ADCC351F409(L_16, NULL);
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_18 = __this->____IsHolding_9;
		G_B11_0 = ((int32_t)(L_18));
		goto IL_00b8;
	}

IL_00b7:
	{
		G_B11_0 = 0;
	}

IL_00b8:
	{
		V_4 = (bool)G_B11_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00cb;
		}
	}
	{
		// Detached(c_Target);
		RuntimeObject* L_20 = __this->___c_Target_19;
		Grab_Detached_m54BF094EF38F15CD449552F38865147A222C73BE(__this, L_20, NULL);
	}

IL_00cb:
	{
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void Grab::RayGrab(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_RayGrab_mF42ECC7A41B150ED22EDA76A8B006A6EACDB5C30 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F802FDE42AAF22B18B4DA9874FC2EE5B5B68812);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// if (!_IsHolding)
		bool L_0 = __this->____IsHolding_9;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d8;
		}
	}
	{
		// c_Target = null;
		__this->___c_Target_19 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c_Target_19), (void*)(RuntimeObject*)NULL);
		// if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out RaycastHit hit, Mathf.Infinity))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_4, L_5, NULL);
		bool L_7;
		L_7 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_3, L_6, (&V_1), (std::numeric_limits<float>::infinity()), NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00d7;
		}
	}
	{
		// if (hit.collider.enabled && hit.collider.CompareTag("grab"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9;
		L_9 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_9, NULL);
		if (!L_10)
		{
			goto IL_0069;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11;
		L_11 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_11, _stringLiteral4F802FDE42AAF22B18B4DA9874FC2EE5B5B68812, NULL);
		G_B5_0 = ((int32_t)(L_12));
		goto IL_006a;
	}

IL_0069:
	{
		G_B5_0 = 0;
	}

IL_006a:
	{
		V_3 = (bool)G_B5_0;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_00d6;
		}
	}
	{
		// _GrabedObject = hit.collider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_14;
		L_14 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		__this->____GrabedObject_18 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____GrabedObject_18), (void*)L_15);
		// if (_GrabedObject.GetComponent<IGrabable>() != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->____GrabedObject_18;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7(L_16, GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7_RuntimeMethod_var);
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a8;
		}
	}
	{
		// c_Target = _GrabedObject.GetComponent<IGrabable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->____GrabedObject_18;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7(L_19, GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7_RuntimeMethod_var);
		__this->___c_Target_19 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c_Target_19), (void*)L_20);
		goto IL_00b5;
	}

IL_00a8:
	{
		// _GrabedObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->____GrabedObject_18;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
	}

IL_00b5:
	{
		// Debug.Log("Click");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC, NULL);
		// _IsClicked = true;
		__this->____IsClicked_10 = (bool)1;
		// GrabItem(c_Target);
		RuntimeObject* L_22 = __this->___c_Target_19;
		Grab_GrabItem_mCC6926C2918A708262E48985705CDB40C12134E1(__this, L_22, NULL);
		// return;
		goto IL_010d;
	}

IL_00d6:
	{
	}

IL_00d7:
	{
	}

IL_00d8:
	{
		// if (_InteractionMode == InteractionMode.Click)
		int32_t L_23 = __this->____InteractionMode_15;
		V_5 = (bool)((((int32_t)L_23) == ((int32_t)1))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_010d;
		}
	}
	{
		// if (_IsHolding && _IsClicked)
		bool L_25 = __this->____IsHolding_9;
		if (!L_25)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_26 = __this->____IsClicked_10;
		G_B16_0 = ((int32_t)(L_26));
		goto IL_00f9;
	}

IL_00f8:
	{
		G_B16_0 = 0;
	}

IL_00f9:
	{
		V_6 = (bool)G_B16_0;
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_010c;
		}
	}
	{
		// Detached(c_Target);
		RuntimeObject* L_28 = __this->___c_Target_19;
		Grab_Detached_m54BF094EF38F15CD449552F38865147A222C73BE(__this, L_28, NULL);
	}

IL_010c:
	{
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Grab::ColliderGrab(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_ColliderGrab_m3E7A158742BA3DA6B8371257223C96F57DB1B2CE (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	{
		// if (!_IsHolding)
		bool L_0 = __this->____IsHolding_9;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// _PalmCollider.enabled = true;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = __this->____PalmCollider_8;
		NullCheck(L_2);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_2, (bool)1, NULL);
	}

IL_001d:
	{
		// if (_InteractionMode == InteractionMode.Click)
		int32_t L_3 = __this->____InteractionMode_15;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// if (_IsHolding && _IsClicked)
		bool L_5 = __this->____IsHolding_9;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		bool L_6 = __this->____IsClicked_10;
		G_B6_0 = ((int32_t)(L_6));
		goto IL_003c;
	}

IL_003b:
	{
		G_B6_0 = 0;
	}

IL_003c:
	{
		V_2 = (bool)G_B6_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// Detached(c_Target);
		RuntimeObject* L_8 = __this->___c_Target_19;
		Grab_Detached_m54BF094EF38F15CD449552F38865147A222C73BE(__this, L_8, NULL);
	}

IL_004d:
	{
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Grab::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_OnTriggerEnter_mA83D1302793006E094DE10634E564A8CE995A9A9 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F802FDE42AAF22B18B4DA9874FC2EE5B5B68812);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (other.enabled && other.CompareTag("grab"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_2, _stringLiteral4F802FDE42AAF22B18B4DA9874FC2EE5B5B68812, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0088;
		}
	}
	{
		// _GrabedObject = other.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		__this->____GrabedObject_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____GrabedObject_18), (void*)L_6);
		// if (_GrabedObject.GetComponent<IGrabable>() != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->____GrabedObject_18;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7(L_7, GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7_RuntimeMethod_var);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// c_Target = _GrabedObject.GetComponent<IGrabable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->____GrabedObject_18;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7(L_10, GameObject_GetComponent_TisIGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_m11B5C01AD899FC6D7AEA3F611F5D5F71B87B23E7_RuntimeMethod_var);
		__this->___c_Target_19 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c_Target_19), (void*)L_11);
		goto IL_005a;
	}

IL_004d:
	{
		// _GrabedObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____GrabedObject_18;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
	}

IL_005a:
	{
		// Debug.Log("Click");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC, NULL);
		// _IsClicked = true;
		__this->____IsClicked_10 = (bool)1;
		// _PalmCollider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13 = __this->____PalmCollider_8;
		NullCheck(L_13);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_13, (bool)0, NULL);
		// GrabItem(c_Target);
		RuntimeObject* L_14 = __this->___c_Target_19;
		Grab_GrabItem_mCC6926C2918A708262E48985705CDB40C12134E1(__this, L_14, NULL);
		// return;
		goto IL_0088;
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void Grab::GrabItem(IGrabable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_GrabItem_mCC6926C2918A708262E48985705CDB40C12134E1 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, RuntimeObject* ___Target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDF286B0DD11639FEDE19D9CA0845928915CBA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("Attached to : {0}", this.name));
		String_t* L_0;
		L_0 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralEDDF286B0DD11639FEDE19D9CA0845928915CBA1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// _IsHolding = true;
		__this->____IsHolding_9 = (bool)1;
		// Target.Grabed(_Palm);
		RuntimeObject* L_2 = ___Target0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____Palm_7;
		NullCheck(L_2);
		InterfaceActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* System.Void IGrabable::Grabed(UnityEngine.GameObject) */, IGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void Grab::Detached(IGrabable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_Detached_m54BF094EF38F15CD449552F38865147A222C73BE (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, RuntimeObject* ___Target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D7F8AFB023ED22C152C8C20BEE1FA58776FC907);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("Detached from : {0}", this.name));
		String_t* L_0;
		L_0 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5D7F8AFB023ED22C152C8C20BEE1FA58776FC907, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// _IsHolding = false;
		__this->____IsHolding_9 = (bool)0;
		// _IsClicked = false;
		__this->____IsClicked_10 = (bool)0;
		// _GrabedObject = null;
		__this->____GrabedObject_18 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____GrabedObject_18), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// Target.Detached(_Palm);
		RuntimeObject* L_2 = ___Target0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____Palm_7;
		NullCheck(L_2);
		InterfaceActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(1 /* System.Void IGrabable::Detached(UnityEngine.GameObject) */, IGrabable_t466B32C62B7ADF98AEBB771D1A95BBC66419FB1C_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void Grab::InitRayBaseGrab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_InitRayBaseGrab_m34975FFB8F45957F89EC283CB65D336C36BB66BC (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grab_ColliderGrab_m3E7A158742BA3DA6B8371257223C96F57DB1B2CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grab_RayGrab_mF42ECC7A41B150ED22EDA76A8B006A6EACDB5C30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _TriggerAction.performed -= ColliderGrab;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->____TriggerAction_13;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_1 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_1, __this, (intptr_t)((void*)Grab_ColliderGrab_m3E7A158742BA3DA6B8371257223C96F57DB1B2CE_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_0, L_1, NULL);
		// _TriggerAction.performed -= RayGrab;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = __this->____TriggerAction_13;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)Grab_RayGrab_mF42ECC7A41B150ED22EDA76A8B006A6EACDB5C30_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_2, L_3, NULL);
		// _TriggerAction.performed += RayGrab;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = __this->____TriggerAction_13;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_5 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_5, __this, (intptr_t)((void*)Grab_RayGrab_mF42ECC7A41B150ED22EDA76A8B006A6EACDB5C30_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_4, L_5, NULL);
		// _CurrentDetectionType = DetectionType.RayCast;
		__this->____CurrentDetectionType_14 = 1;
		// }
		return;
	}
}
// System.Void Grab::InitColliderBaseGrab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_InitColliderBaseGrab_m5D24BAA3379F9E0D2BD625AFA75DFD7FAB0AD49F (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grab_ColliderGrab_m3E7A158742BA3DA6B8371257223C96F57DB1B2CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grab_RayGrab_mF42ECC7A41B150ED22EDA76A8B006A6EACDB5C30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _TriggerAction.performed -= ColliderGrab;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->____TriggerAction_13;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_1 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_1, __this, (intptr_t)((void*)Grab_ColliderGrab_m3E7A158742BA3DA6B8371257223C96F57DB1B2CE_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_0, L_1, NULL);
		// _TriggerAction.performed -= RayGrab;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = __this->____TriggerAction_13;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)Grab_RayGrab_mF42ECC7A41B150ED22EDA76A8B006A6EACDB5C30_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_2, L_3, NULL);
		// _TriggerAction.performed += ColliderGrab;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = __this->____TriggerAction_13;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_5 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_5, __this, (intptr_t)((void*)Grab_ColliderGrab_m3E7A158742BA3DA6B8371257223C96F57DB1B2CE_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_4, L_5, NULL);
		// _CurrentDetectionType = DetectionType.Collider;
		__this->____CurrentDetectionType_14 = 2;
		// }
		return;
	}
}
// System.Void Grab::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_Init_mC836BB7CF3D187000BA324AC6D34A13077E3DD52 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisInteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF_mCBF4B69E09D1EE6DA62431D1F32AEDA94A4E5C2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF70B0CC6394B76E9E4D920E7CF3A58AC116685B2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!_InteractionManager)
		InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* L_0 = __this->____InteractionManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		// _InteractionManager = GetComponentInParent<InteractionManager>();
		InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* L_3;
		L_3 = Component_GetComponentInParent_TisInteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF_mCBF4B69E09D1EE6DA62431D1F32AEDA94A4E5C2E(__this, Component_GetComponentInParent_TisInteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF_mCBF4B69E09D1EE6DA62431D1F32AEDA94A4E5C2E_RuntimeMethod_var);
		__this->____InteractionManager_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____InteractionManager_5), (void*)L_3);
		// if (!_InteractionManager)
		InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* L_4 = __this->____InteractionManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		// Debug.LogError(string.Format("Cannot find InteractionManager in {0}", transform.parent.name));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF70B0CC6394B76E9E4D920E7CF3A58AC116685B2, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_10, NULL);
		// Debug.Break();
		Debug_Break_m7AE7554F3BA3BD5E49A0073434A9680534CE8EC7(NULL);
		// return;
		goto IL_00aa;
	}

IL_005b:
	{
	}

IL_005c:
	{
		// _PalmCollider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11 = __this->____PalmCollider_8;
		NullCheck(L_11);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_11, (bool)0, NULL);
		// _Range = _InteractionManager.Range;
		InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* L_12 = __this->____InteractionManager_5;
		NullCheck(L_12);
		float L_13;
		L_13 = InteractionManager_get_Range_mA40C2A97A1218B688448B4F7C4D748FF44FD5D27(L_12, NULL);
		__this->____Range_16 = L_13;
		// _ClickGrab = _InteractionManager.ClickGrab;
		InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* L_14 = __this->____InteractionManager_5;
		NullCheck(L_14);
		bool L_15;
		L_15 = InteractionManager_get_ClickGrab_m70571BA8C3538FD76BBCB005342F45E3B22CC75E(L_14, NULL);
		__this->____ClickGrab_17 = L_15;
		// _IsClicked = false;
		__this->____IsClicked_10 = (bool)0;
		// ControllInit();
		Grab_ControllInit_m69053DB595F2C1BD7B71DC1418AA63B6F3966237(__this, NULL);
		// _InteractionMode = _InteractionManager.interactionMode;
		InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* L_16 = __this->____InteractionManager_5;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InteractionManager_get_interactionMode_m7C94A742ECA1C924671DD7B54DCA2C8AFFDDE33A(L_16, NULL);
		__this->____InteractionMode_15 = L_17;
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void Grab::ControllInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_ControllInit_m69053DB595F2C1BD7B71DC1418AA63B6F3966237 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHandController_tD866B993094B1833037D30396BB39F6C15DDC10C_mC214D8EE673CAF951DBEC2FFBF0BE54E4B0B0057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F1979AE2523D7ADE998C40FEB98D569438452DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A654EF5EC847AE5D461DEA668EDB7F5F2F0FE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (!_VRJoystickAsset)
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->____VRJoystickAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_00e5;
	}

IL_0018:
	{
		// _HandController = GetComponent<HandController>();
		HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* L_3;
		L_3 = Component_GetComponent_TisHandController_tD866B993094B1833037D30396BB39F6C15DDC10C_mC214D8EE673CAF951DBEC2FFBF0BE54E4B0B0057(__this, Component_GetComponent_TisHandController_tD866B993094B1833037D30396BB39F6C15DDC10C_mC214D8EE673CAF951DBEC2FFBF0BE54E4B0B0057_RuntimeMethod_var);
		__this->____HandController_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____HandController_11), (void*)L_3);
		// switch (_HandController.handOrientation)
		HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* L_4 = __this->____HandController_11;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = HandController_get_handOrientation_m24C58C3EB0727085971C49B61860891A94899C24(L_4, NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		V_1 = L_6;
		int32_t L_7 = V_1;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0078;
			}
		}
	}
	{
		goto IL_0081;
	}

IL_0046:
	{
		// _VRJoysticMap = _VRJoystickAsset.FindActionMap("LeftController");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_8 = __this->____VRJoystickAsset_4;
		NullCheck(L_8);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_9;
		L_9 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_8, _stringLiteralB4A654EF5EC847AE5D461DEA668EDB7F5F2F0FE0, (bool)0, NULL);
		__this->____VRJoysticMap_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____VRJoysticMap_12), (void*)L_9);
		// break;
		goto IL_0083;
	}

IL_005f:
	{
		// _VRJoysticMap = _VRJoystickAsset.FindActionMap("RightController");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_10 = __this->____VRJoystickAsset_4;
		NullCheck(L_10);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_11;
		L_11 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_10, _stringLiteral0F1979AE2523D7ADE998C40FEB98D569438452DB, (bool)0, NULL);
		__this->____VRJoysticMap_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____VRJoysticMap_12), (void*)L_11);
		// break;
		goto IL_0083;
	}

IL_0078:
	{
		// _VRJoysticMap = null;
		__this->____VRJoysticMap_12 = (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____VRJoysticMap_12), (void*)(InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09*)NULL);
		// break;
		goto IL_0083;
	}

IL_0081:
	{
		// break;
		goto IL_0083;
	}

IL_0083:
	{
		// if (_VRJoysticMap != null)
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_12 = __this->____VRJoysticMap_12;
		V_3 = (bool)((!(((RuntimeObject*)(InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_00e5;
		}
	}
	{
		// _TriggerAction = _VRJoysticMap.FindAction("Trigger");
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_14 = __this->____VRJoysticMap_12;
		NullCheck(L_14);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15;
		L_15 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_14, _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, (bool)0, NULL);
		__this->____TriggerAction_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____TriggerAction_13), (void*)L_15);
		// switch (_InteractionManager.detectionType)
		InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* L_16 = __this->____InteractionManager_5;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InteractionManager_get_detectionType_m9B943545FBACF730C608A59FF11A39CD42567012(L_16, NULL);
		V_5 = L_17;
		int32_t L_18 = V_5;
		V_4 = L_18;
		int32_t L_19 = V_4;
		switch (L_19)
		{
			case 0:
			{
				goto IL_00ce;
			}
			case 1:
			{
				goto IL_00d0;
			}
			case 2:
			{
				goto IL_00d9;
			}
		}
	}
	{
		goto IL_00e2;
	}

IL_00ce:
	{
		// break;
		goto IL_00e4;
	}

IL_00d0:
	{
		// InitRayBaseGrab();
		Grab_InitRayBaseGrab_m34975FFB8F45957F89EC283CB65D336C36BB66BC(__this, NULL);
		// break;
		goto IL_00e4;
	}

IL_00d9:
	{
		// InitColliderBaseGrab();
		Grab_InitColliderBaseGrab_m5D24BAA3379F9E0D2BD625AFA75DFD7FAB0AD49F(__this, NULL);
		// break;
		goto IL_00e4;
	}

IL_00e2:
	{
		// break;
		goto IL_00e4;
	}

IL_00e4:
	{
	}

IL_00e5:
	{
		// }
		return;
	}
}
// System.Void Grab::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_OnEnable_m50865BDDC40C721B599D60C718A8932A6CEB2426 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) 
{
	{
		// _VRJoystickAsset.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->____VRJoystickAsset_4;
		NullCheck(L_0);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// }
		return;
	}
}
// System.Void Grab::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_OnDisable_m014D442AB906353C525B7B634AD1FDE1E5844CF0 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) 
{
	{
		// _VRJoystickAsset.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->____VRJoystickAsset_4;
		NullCheck(L_0);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// }
		return;
	}
}
// System.Void Grab::ChangeDetectionType(DetectionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_ChangeDetectionType_m9AC5018F6E7169B80D1546F51ABF2159E42F9E51 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E4F39EF3084FF922002C13AFD0E988627D2CA29);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Debug.Log("Change");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8E4F39EF3084FF922002C13AFD0E988627D2CA29, NULL);
		// switch (type)
		int32_t L_0 = ___type0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
		}
	}
	{
		goto IL_0038;
	}

IL_0024:
	{
		// break;
		goto IL_003a;
	}

IL_0026:
	{
		// InitRayBaseGrab();
		Grab_InitRayBaseGrab_m34975FFB8F45957F89EC283CB65D336C36BB66BC(__this, NULL);
		// break;
		goto IL_003a;
	}

IL_002f:
	{
		// InitColliderBaseGrab();
		Grab_InitColliderBaseGrab_m5D24BAA3379F9E0D2BD625AFA75DFD7FAB0AD49F(__this, NULL);
		// break;
		goto IL_003a;
	}

IL_0038:
	{
		// break;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Grab::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab_OnDrawGizmos_m9CFC612002014A3131F3B651362A2EA74D886D95 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawLine(transform.position, transform.position + transform.forward * 5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, (5.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_7, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_2, L_8, NULL);
		// }
		return;
	}
}
// System.Void Grab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grab__ctor_m6F67FD6CBEEE30EB32AAC6D0D714932B561A0039 (Grab_t079B57A3096D70D1FEF4D2BF08C9F426BB4F4B3F* __this, const RuntimeMethod* method) 
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
// DetectionType InteractionManager::get_detectionType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionManager_get_detectionType_m9B943545FBACF730C608A59FF11A39CD42567012 (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public DetectionType detectionType { get { return _detectionType; } private set { } }
		int32_t L_0 = __this->____detectionType_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public DetectionType detectionType { get { return _detectionType; } private set { } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void InteractionManager::set_detectionType(DetectionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_set_detectionType_mA8A9B19B1FF298A8E85FC2227D7EE3410C7A50B1 (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public DetectionType detectionType { get { return _detectionType; } private set { } }
		return;
	}
}
// InteractionMode InteractionManager::get_interactionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionManager_get_interactionMode_m7C94A742ECA1C924671DD7B54DCA2C8AFFDDE33A (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public InteractionMode interactionMode { get { return _interactionMode; } private set { } }
		int32_t L_0 = __this->____interactionMode_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public InteractionMode interactionMode { get { return _interactionMode; } private set { } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void InteractionManager::set_interactionMode(InteractionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_set_interactionMode_m2CC63C7DFA231332769365F73E09AD81C1426EDE (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public InteractionMode interactionMode { get { return _interactionMode; } private set { } }
		return;
	}
}
// System.Single InteractionManager::get_SmoothTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InteractionManager_get_SmoothTime_m4F858BC8CD5D5E0628C05042A8770973306926EC (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float SmoothTime { get { return _SmoothTime; } private set { } }
		float L_0 = __this->____SmoothTime_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float SmoothTime { get { return _SmoothTime; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void InteractionManager::set_SmoothTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_set_SmoothTime_mC394C2F89C10C756DF6531585F1E5B9BCF3E8854 (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get { return _SmoothTime; } private set { } }
		return;
	}
}
// System.Single InteractionManager::get_Range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InteractionManager_get_Range_mA40C2A97A1218B688448B4F7C4D748FF44FD5D27 (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Range { get { return _Range; } private set { } }
		float L_0 = __this->____Range_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Range { get { return _Range; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void InteractionManager::set_Range(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_set_Range_m698BA0558489BD35F68D0A5BBA7ADC05CE05CB75 (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Range { get { return _Range; } private set { } }
		return;
	}
}
// System.Boolean InteractionManager::get_ClickGrab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionManager_get_ClickGrab_m70571BA8C3538FD76BBCB005342F45E3B22CC75E (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool ClickGrab { get { return _ClickGrab; } private set { } }
		bool L_0 = __this->____ClickGrab_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool ClickGrab { get { return _ClickGrab; } private set { } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void InteractionManager::set_ClickGrab(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_set_ClickGrab_m983726D7E94BFAF2FEFC1230C006B3532C1630AE (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ClickGrab { get { return _ClickGrab; } private set { } }
		return;
	}
}
// System.Void InteractionManager::ChangeDetectionType(DetectionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_ChangeDetectionType_m6770C2B592509C09E291331CCB355FB843F5660B (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m65172BB3B5C67B576413A59C96F50EC55370ECFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnDetectionTypeChange.Invoke(type);
		UnityEvent_1_tC8D791ABF54AEB5ED469D872C6DC3484B953507E* L_0 = __this->___OnDetectionTypeChange_4;
		int32_t L_1 = ___type0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m65172BB3B5C67B576413A59C96F50EC55370ECFE(L_0, L_1, UnityEvent_1_Invoke_m65172BB3B5C67B576413A59C96F50EC55370ECFE_RuntimeMethod_var);
		// _detectionType = type;
		int32_t L_2 = ___type0;
		__this->____detectionType_8 = L_2;
		// }
		return;
	}
}
// System.Void InteractionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager__ctor_m82FEC99B565D720A3A64B245741DF3856A0CA19C (InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private DetectionType _detectionType = DetectionType.None;
		__this->____detectionType_8 = 0;
		// [SerializeField] private InteractionMode _interactionMode = InteractionMode.None;
		__this->____interactionMode_9 = 0;
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
// System.Void SelectorButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectorButton__ctor_m906E3269D7623472CB33846C7ABB3EC5CDA854BB (SelectorButton_t30B0FFC2DD0EDDCE7132861AFF7EF49847638869* __this, const RuntimeMethod* method) 
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
// System.Void UIScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScript_Update_m9E5954782DABAB74935FA68FD5796271DDEAE0FB (UIScript_tB9C77D8B2007D6D58BBFC194568BC8433D535689* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = _WeaponSelector.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____WeaponSelector_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void UIScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScript__ctor_mD37A3FCAEFFD206BFAC4B122A94390822AD942DC (UIScript_tB9C77D8B2007D6D58BBFC194568BC8433D535689* __this, const RuntimeMethod* method) 
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
// System.Void WeaponSelector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSelector_Start_m144A1BD023AF55CC3C38BD79F2005A1E8E7E8213 (WeaponSelector_tDA9BF78AB131D46309C640788C4E272AC4300B20* __this, const RuntimeMethod* method) 
{
	{
		// _Offsets = transform.position - _ParentHandTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____ParentHandTransform_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		__this->____Offsets_10 = L_4;
		// }
		return;
	}
}
// System.Void WeaponSelector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSelector_Update_m8845CB9E01AE48705392626BB64EF620739ED20C (WeaponSelector_tDA9BF78AB131D46309C640788C4E272AC4300B20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// _Canvas.transform.position = transform.position;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->____Canvas_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// for (int i = 0; i < _SelectorButton.Count; i++)
		V_0 = 0;
		goto IL_0043;
	}

IL_0021:
	{
		// _SelectorButton[i].transform.position = Vector3.zero;
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_4 = __this->____SelectorButton_8;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		SelectorButton_t30B0FFC2DD0EDDCE7132861AFF7EF49847638869* L_6;
		L_6 = List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F(L_4, L_5, List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_8, NULL);
		// for (int i = 0; i < _SelectorButton.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0043:
	{
		// for (int i = 0; i < _SelectorButton.Count; i++)
		int32_t L_10 = V_0;
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_11 = __this->____SelectorButton_8;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_inline(L_11, List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_0021;
		}
	}
	{
		// CalculateOffsetsAngle(_SelectorButton.Count);
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_14 = __this->____SelectorButton_8;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_inline(L_14, List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_RuntimeMethod_var);
		WeaponSelector_CalculateOffsetsAngle_m02A368E866CBADDDD55A2964AEAB580CBE8A5CE2(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Void WeaponSelector::CalculateOffsetsAngle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSelector_CalculateOffsetsAngle_m02A368E866CBADDDD55A2964AEAB580CBE8A5CE2 (WeaponSelector_tDA9BF78AB131D46309C640788C4E272AC4300B20* __this, int32_t ___NumberOfButton0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	{
		// for (int i = 0; i < NumberOfButton; i++)
		V_0 = 0;
		goto IL_00ca;
	}

IL_0008:
	{
		// float c_Const = 360f;
		V_1 = (360.0f);
		// float SinX = Mathf.Sin(_Degrees * Mathf.Deg2Rad) * _Radius;
		float L_0 = __this->____Degrees_11;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_multiply(L_0, (0.0174532924f))));
		float L_2 = __this->____Radius_9;
		V_2 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// float CosZ = Mathf.Cos(_Degrees * Mathf.Deg2Rad) * _Radius;
		float L_3 = __this->____Degrees_11;
		float L_4;
		L_4 = cosf(((float)il2cpp_codegen_multiply(L_3, (0.0174532924f))));
		float L_5 = __this->____Radius_9;
		V_3 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// Vector3 _ButtomOffsets = new Vector3(0f, SinX, CosZ);
		float L_6 = V_2;
		float L_7 = V_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), (0.0f), L_6, L_7, NULL);
		// Vector3 c_GlobalTranslate = transform.TransformPoint(_ButtomOffsets);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_8, L_9, NULL);
		V_5 = L_10;
		// _SelectorButton[i].transform.position = c_GlobalTranslate;
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_11 = __this->____SelectorButton_8;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		SelectorButton_t30B0FFC2DD0EDDCE7132861AFF7EF49847638869* L_13;
		L_13 = List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F(L_11, L_12, List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F_RuntimeMethod_var);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_5;
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
		// Vector3 c_Look = c_GlobalTranslate - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_18, NULL);
		V_6 = L_19;
		// _SelectorButton[i].transform.rotation = Quaternion.LookRotation(transform.right, c_Look);
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_20 = __this->____SelectorButton_8;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		SelectorButton_t30B0FFC2DD0EDDCE7132861AFF7EF49847638869* L_22;
		L_22 = List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F(L_20, L_21, List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F_RuntimeMethod_var);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_25, L_26, NULL);
		NullCheck(L_23);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_23, L_27, NULL);
		// _Degrees += c_Const / NumberOfButton;
		float L_28 = __this->____Degrees_11;
		float L_29 = V_1;
		int32_t L_30 = ___NumberOfButton0;
		__this->____Degrees_11 = ((float)il2cpp_codegen_add(L_28, ((float)(L_29/((float)L_30)))));
		// for (int i = 0; i < NumberOfButton; i++)
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00ca:
	{
		// for (int i = 0; i < NumberOfButton; i++)
		int32_t L_32 = V_0;
		int32_t L_33 = ___NumberOfButton0;
		V_7 = (bool)((((int32_t)L_32) < ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_7;
		if (L_34)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WeaponSelector::SelectWeapon(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSelector_SelectWeapon_m74D0506ED0F462D449F8CEF7F1ED9D3D197C00CB (WeaponSelector_tDA9BF78AB131D46309C640788C4E272AC4300B20* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WeaponName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonGeneric_1_get_Instance_m7B4EE777E35935FB52501FD3DD1785001D4B946E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// c_Weapons = WeaponManager.Instance.GetWeapons(WeaponName);
		WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* L_0;
		L_0 = SingletonGeneric_1_get_Instance_m7B4EE777E35935FB52501FD3DD1785001D4B946E(SingletonGeneric_1_get_Instance_m7B4EE777E35935FB52501FD3DD1785001D4B946E_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___WeaponName0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = WeaponManager_GetWeapons_m10FFE2FFE66B0E58FEFA65B4800A5A049CFB4655(L_0, L_1, NULL);
		V_0 = L_2;
		// c_Weapons.transform.position = _WeaponSpawnPoint.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->____WeaponSpawnPoint_5;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_6, NULL);
		// c_Weapons.transform.rotation = _WeaponSpawnPoint.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->____WeaponSpawnPoint_5;
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void WeaponSelector::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSelector_OnValidate_m92644C98487F31543E4FD42895827A565E06DFA5 (WeaponSelector_tDA9BF78AB131D46309C640788C4E272AC4300B20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// _Canvas.transform.position = transform.position;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->____Canvas_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// for (int i = 0; i < _SelectorButton.Count; i++)
		V_0 = 0;
		goto IL_0043;
	}

IL_0021:
	{
		// _SelectorButton[i].transform.position = Vector3.zero;
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_4 = __this->____SelectorButton_8;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		SelectorButton_t30B0FFC2DD0EDDCE7132861AFF7EF49847638869* L_6;
		L_6 = List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F(L_4, L_5, List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_8, NULL);
		// for (int i = 0; i < _SelectorButton.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0043:
	{
		// for (int i = 0; i < _SelectorButton.Count; i++)
		int32_t L_10 = V_0;
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_11 = __this->____SelectorButton_8;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_inline(L_11, List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_0021;
		}
	}
	{
		// CalculateOffsetsAngle(_SelectorButton.Count);
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_14 = __this->____SelectorButton_8;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_inline(L_14, List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_RuntimeMethod_var);
		WeaponSelector_CalculateOffsetsAngle_m02A368E866CBADDDD55A2964AEAB580CBE8A5CE2(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Void WeaponSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSelector__ctor_mBAF5D1C107FB9FB63FA508E9742AF80FF75B16AC (WeaponSelector_tDA9BF78AB131D46309C640788C4E272AC4300B20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5AA1A01BB9BC86EAAFD6B968098B2996FAFBDD05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<GameObject> _WeaponsPrefabs = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____WeaponsPrefabs_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____WeaponsPrefabs_7), (void*)L_0);
		// [SerializeField] private List<SelectorButton> _SelectorButton = new List<SelectorButton>();
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_1 = (List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE*)il2cpp_codegen_object_new(List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m5AA1A01BB9BC86EAAFD6B968098B2996FAFBDD05(L_1, List_1__ctor_m5AA1A01BB9BC86EAAFD6B968098B2996FAFBDD05_RuntimeMethod_var);
		__this->____SelectorButton_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____SelectorButton_8), (void*)L_1);
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
// System.Void HandAnimationController::CalculateStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandAnimationController_CalculateStrength_m99B9ADAA00C7D2713EEBC2FC95F9B93EA2079BDC (HandAnimationController_t9082D093A7D4DF09214BFC2AF0B55CD097DEFD0E* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		// float c_TargetStrength = 0f;
		V_0 = (0.0f);
		// if (_GripStrength >= c_TargetStrength)
		float L_0 = __this->____GripStrength_5;
		float L_1 = V_0;
		V_1 = (bool)((((int32_t)((!(((float)L_0) >= ((float)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void HandAnimationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandAnimationController__ctor_mDA32445BA5B926083763D7D480849EF31F485F7F (HandAnimationController_t9082D093A7D4DF09214BFC2AF0B55CD097DEFD0E* __this, const RuntimeMethod* method) 
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
// System.Void Player::DoDamage(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DoDamage_mB88E9EF04BF72C83BB2F6DFD8410A56A92FAD1A0 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___Damage0, float ___Piercing1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// float c_Defense = _Stats.Defense; ;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_0 = __this->____Stats_4;
		NullCheck(L_0);
		float L_1;
		L_1 = PlayerStats_get_Defense_mD215AEAB88467FC0E5F773217CDD4FCED657C74F(L_0, NULL);
		V_0 = L_1;
		// float c_Damage = Damage;
		float L_2 = ___Damage0;
		V_1 = L_2;
		// float c_Piercing = Piercing;
		float L_3 = ___Piercing1;
		V_2 = L_3;
		// if (_Stats.Health > 0f)
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_4 = __this->____Stats_4;
		NullCheck(L_4);
		float L_5;
		L_5 = PlayerStats_get_Health_mB052A3E9E26BC761534296DF15BCFF4D5E76082E(L_4, NULL);
		V_3 = (bool)((((float)L_5) > ((float)(0.0f)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_00a1;
		}
	}
	{
		// if (c_Piercing < 0f)
		float L_7 = V_2;
		V_4 = (bool)((((float)L_7) < ((float)(0.0f)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		// c_Piercing = 0f;
		V_2 = (0.0f);
	}

IL_003d:
	{
		// c_Defense -= Piercing;
		float L_9 = V_0;
		float L_10 = ___Piercing1;
		V_0 = ((float)il2cpp_codegen_subtract(L_9, L_10));
		// if (c_Defense <= 0f)
		float L_11 = V_0;
		V_5 = (bool)((((int32_t)((!(((float)L_11) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// c_Defense = 0f;
		V_0 = (0.0f);
	}

IL_0058:
	{
		// c_Damage -= c_Defense;
		float L_13 = V_1;
		float L_14 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// if (c_Damage <= 0)
		float L_15 = V_1;
		V_6 = (bool)((((int32_t)((!(((float)L_15) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0073;
		}
	}
	{
		// c_Damage = 0;
		V_1 = (0.0f);
	}

IL_0073:
	{
		// _Stats.Health -= c_Damage;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_17 = __this->____Stats_4;
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_18 = L_17;
		NullCheck(L_18);
		float L_19;
		L_19 = PlayerStats_get_Health_mB052A3E9E26BC761534296DF15BCFF4D5E76082E(L_18, NULL);
		float L_20 = V_1;
		NullCheck(L_18);
		PlayerStats_set_Health_m172BA11D0570EBF6055F306666CC7ED118C6F14F(L_18, ((float)il2cpp_codegen_subtract(L_19, L_20)), NULL);
		// _OnHitEvent.Invoke(transform.position);
		UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* L_21 = __this->____OnHitEvent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		NullCheck(L_21);
		UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF(L_21, L_23, UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		goto IL_00a8;
	}

IL_00a1:
	{
		// Die();
		Player_Die_mC24698ED84E130E43101B213727A48AA59BB1971(__this, NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void Player::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Die_mC24698ED84E130E43101B213727A48AA59BB1971 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _OnDieEvent.Invoke(transform.position);
		UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* L_0 = __this->____OnDieEvent_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF(L_0, L_2, UnityEvent_1_Invoke_mB89ED0EFF1CDB8BF69BA4B4E0E158A9F7A704FAF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m512A28E1559EB8AEEB2E1DB873F9F99FCC96BA67 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisPlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_mC47739B18919A6E04E8A98E3DF8C36DA19F1971A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _Stats = Instantiate(_Stats);
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_0 = __this->____Stats_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* L_1;
		L_1 = Object_Instantiate_TisPlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_mC47739B18919A6E04E8A98E3DF8C36DA19F1971A(L_0, Object_Instantiate_TisPlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8_mC47739B18919A6E04E8A98E3DF8C36DA19F1971A_RuntimeMethod_var);
		__this->____Stats_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Stats_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
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
// System.String PlayerStats::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerStats_get_Name_m8CB3CEBF2598B58A2FAED1A9836A7A123016E2ED (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string Name { get { return _Name; } private set { } }
		String_t* L_0 = __this->____Name_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string Name { get { return _Name; } private set { } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerStats::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats_set_Name_m527B46045924D5B8C27D9FE733DB2F2BFD237FF9 (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get { return _Name; } private set { } }
		return;
	}
}
// System.Single PlayerStats::get_Health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_Health_mB052A3E9E26BC761534296DF15BCFF4D5E76082E (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Health { get { return _Health; } set { _Health = value; } }
		float L_0 = __this->____Health_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Health { get { return _Health; } set { _Health = value; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerStats::set_Health(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats_set_Health_m172BA11D0570EBF6055F306666CC7ED118C6F14F (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Health { get { return _Health; } set { _Health = value; } }
		float L_0 = ___value0;
		__this->____Health_5 = L_0;
		// public float Health { get { return _Health; } set { _Health = value; } }
		return;
	}
}
// System.Single PlayerStats::get_MaxHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_MaxHealth_mB90C7C352E9FE247D6BBF93749696AB8BD608FC8 (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float MaxHealth { get { return _MaxHealth; } private set { } }
		float L_0 = __this->____MaxHealth_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MaxHealth { get { return _MaxHealth; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerStats::set_MaxHealth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats_set_MaxHealth_m3F45DAA45EE489C832527DD542C5433E809B6DF4 (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxHealth { get { return _MaxHealth; } private set { } }
		return;
	}
}
// System.Single PlayerStats::get_Defense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_Defense_mD215AEAB88467FC0E5F773217CDD4FCED657C74F (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Defense { get { return _Defense; } private set { } }
		float L_0 = __this->____Defense_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Defense { get { return _Defense; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerStats::set_Defense(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats_set_Defense_m119278F1F7EA986EAA174B1A6ED8525DEDD4B439 (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Defense { get { return _Defense; } private set { } }
		return;
	}
}
// System.Single PlayerStats::get_AttackSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_AttackSpeed_m0575A2641D9854F027D9D703247A3814AF1F5E28 (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float AttackSpeed { get { return _AttackSpeed; } private set { } }
		float L_0 = __this->____AttackSpeed_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float AttackSpeed { get { return _AttackSpeed; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerStats::set_AttackSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats_set_AttackSpeed_m8537ADBCBA56A42AD940B389FAA534B5A80B1F3D (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float AttackSpeed { get { return _AttackSpeed; } private set { } }
		return;
	}
}
// System.Single PlayerStats::get_Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_Damage_mB1539BEE37C2ED0906A354B8986F24003D14B82C (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Damage { get { return _Damage; } private set { } }
		float L_0 = __this->____Damage_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Damage { get { return _Damage; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerStats::set_Damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats_set_Damage_m2CE059E1611FAF78173ECCF035C27C8BF9CFBA86 (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Damage { get { return _Damage; } private set { } }
		return;
	}
}
// System.Single PlayerStats::get_Piercing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_Piercing_mE5F6E9E0032A9DF9454AC25DC50A8D2938B0F6D8 (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Piercing { get { return _Piercing; } private set { } }
		float L_0 = __this->____Piercing_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Piercing { get { return _Piercing; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerStats::set_Piercing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats_set_Piercing_m9A8904D85BDBEB9AA602E68B1AB43B1C3A106D68 (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Piercing { get { return _Piercing; } private set { } }
		return;
	}
}
// System.Void PlayerStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_mACDFFF1D0051299DFCDC4AA2E9D29232D892B2EE (PlayerStats_t342810FB47D12358A0FB28B541C79C5D04819BE8* __this, const RuntimeMethod* method) 
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
// System.Void ProjectileSkillBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileSkillBase__ctor_mF778388A88E3776FC5F6B572F425BFD76F4BB138 (ProjectileSkillBase_tA3171D17D7D3DC4008B793C3F16B8C0F30F9E746* __this, const RuntimeMethod* method) 
{
	{
		SkillBase__ctor_mF35CED78596A71F408208794C64211D18ED06BAE(__this, NULL);
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
// System.Void SkillBase::Init(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillBase_Init_m37E51A8D5F79F00C20576D022E7BF8240BCDAF9C (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___contex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral893270BD7F4CC46BD8EC1DE07C9B6E1D7FB2DA74);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("Skill Start {0}", contex.name));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___contex0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral893270BD7F4CC46BD8EC1DE07C9B6E1D7FB2DA74, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void SkillBase::Loop(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillBase_Loop_mC876E35686FD21A30A155A279C16026DD1EB89AB (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9632C78C457E28EE22C7579550FBC82814064F9A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("Skill Looping"));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_1;
		L_1 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral9632C78C457E28EE22C7579550FBC82814064F9A, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void SkillBase::Stop(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillBase_Stop_m9DCCE5284FDB95B6394F3C6888F04335D6402ECE (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___contex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6C130AD96A1948FEC028D6B0FF1B06F91382064);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("Skill Stop {0}", contex.name));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___contex0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6C130AD96A1948FEC028D6B0FF1B06F91382064, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.String SkillBase::get_SkillName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkillBase_get_SkillName_mE751A78A6FD9A6F3EDA6BB00C774E4A46F040FA7 (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string SkillName { get { return _SkillName; } private set {} }
		String_t* L_0 = __this->____SkillName_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string SkillName { get { return _SkillName; } private set {} }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void SkillBase::set_SkillName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillBase_set_SkillName_m003F9C16BA19881DF8F49465553E21F600F2964F (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SkillName { get { return _SkillName; } private set {} }
		return;
	}
}
// System.Single SkillBase::get_SkillTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkillBase_get_SkillTime_m3A509008D763FC978830235B05EB9D71D3D3A07B (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float SkillTime { get { return _SkillTime; } private set {} }
		float L_0 = __this->____SkillTime_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float SkillTime { get { return _SkillTime; } private set {} }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void SkillBase::set_SkillTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillBase_set_SkillTime_m9990F219407EB6FFBC84F13538F24D925AD2356D (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SkillTime { get { return _SkillTime; } private set {} }
		return;
	}
}
// System.Void SkillBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillBase__ctor_mF35CED78596A71F408208794C64211D18ED06BAE (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* __this, const RuntimeMethod* method) 
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
// UnityEngine.GameObject GroupManager::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GroupManager_get_Player_mE763EEFB2D713DE2F5FC3E0248F713C68B950749 (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// public GameObject Player { get { return _Player; } }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____Player_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public GameObject Player { get { return _Player; } }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.GameObject[] GroupManager::get_Units()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GroupManager_get_Units_m386E0380A5126ED1C92602A87B8D65A6A18061BF (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	{
		// public GameObject[] Units { get { return _CurrentActiveUnits; } }
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____CurrentActiveUnits_18;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public GameObject[] Units { get { return _CurrentActiveUnits; } }
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		return L_1;
	}
}
// System.Single GroupManager::get_GapDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GroupManager_get_GapDistance_mFCE7CB4D403FA49203E46C69CA36BBA615AD9D54 (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float GapDistance { get { return _GapDistance; } private set { } }
		float L_0 = __this->____GapDistance_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float GapDistance { get { return _GapDistance; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void GroupManager::set_GapDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupManager_set_GapDistance_mCDCEF1CCB95236C968BBBE39F5E6B31093B684AC (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float GapDistance { get { return _GapDistance; } private set { } }
		return;
	}
}
// System.Single GroupManager::get_StopDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GroupManager_get_StopDistance_mCB741FE5B48F4F28DECE78E52040D758107F207E (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float StopDistance { get { return _StopDistance; } private set { } }
		float L_0 = __this->____StopDistance_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float StopDistance { get { return _StopDistance; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void GroupManager::set_StopDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupManager_set_StopDistance_mB2DBFBE7E777817A4D98DCB6836988D7244E279A (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float StopDistance { get { return _StopDistance; } private set { } }
		return;
	}
}
// System.Single GroupManager::get_RangedDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GroupManager_get_RangedDistance_mABD46238F6E15E2D68E4ECA53F513A79E16A6C5B (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float RangedDistance { get { return _RangedDistance; } private set { } }
		float L_0 = __this->____RangedDistance_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float RangedDistance { get { return _RangedDistance; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void GroupManager::set_RangedDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupManager_set_RangedDistance_mCB71DB37F6DF240D675F1C813C261EB576ECCBD6 (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float RangedDistance { get { return _RangedDistance; } private set { } }
		return;
	}
}
// System.Void GroupManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupManager_Awake_m055F13601274ED0EC3B4058DC4D1C8CB63056A6A (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	{
		// SpawnUnits();
		GroupManager_SpawnUnits_mF8E7062D3C18CA23C19DA431029DDD1240373017(__this, NULL);
		// }
		return;
	}
}
// System.Void GroupManager::SpawnUnits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupManager_SpawnUnits_mF8E7062D3C18CA23C19DA431029DDD1240373017 (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C_m7387ECFCF879E7243ABDD8DA2C2B0F1A06AB52BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCrawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE_m7E920AE3EE638852A3AECC45506B3147E3A42512_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// _AllPooledUnits = new GameObject[_TotalUnitCount];
		int32_t L_0 = __this->____TotalUnitCount_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____AllPooledUnits_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____AllPooledUnits_17), (void*)L_1);
		// for (int i = 0; i < _TotalUnitCount; i++)
		V_0 = 0;
		goto IL_0154;
	}

IL_0019:
	{
		// if (_RandomSpawn)
		bool L_2 = __this->____RandomSpawn_11;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00a9;
		}
	}
	{
		// pos = _SpawnPoint[Random.Range(0, _SpawnPoint.Count)].transform.position + new Vector3(Random.Range(-_SpawnArea.x, _SpawnArea.x), transform.position.y, Random.Range(-_SpawnArea.z, _SpawnArea.z));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->____SpawnPoint_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->____SpawnPoint_7;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_6, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->____SpawnArea_12);
		float L_12 = L_11->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->____SpawnArea_12);
		float L_14 = L_13->___x_2;
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_12)), L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->____SpawnArea_12);
		float L_20 = L_19->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->____SpawnArea_12);
		float L_22 = L_21->___z_4;
		float L_23;
		L_23 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_20)), L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_15, L_18, L_23, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_24, NULL);
		__this->___pos_19 = L_25;
		goto IL_00c7;
	}

IL_00a9:
	{
		// pos = _SpawnPoint[0].transform.position;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = __this->____SpawnPoint_7;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_26, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		__this->___pos_19 = L_29;
	}

IL_00c7:
	{
		// _AllPooledUnits[i] = Instantiate(_Prefab[Random.Range(0, _Prefab.Count)], pos, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_30 = __this->____AllPooledUnits_17;
		int32_t L_31 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_32 = __this->____Prefab_5;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_33 = __this->____Prefab_5;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_33, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_35;
		L_35 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_34, NULL);
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_32, L_35, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->___pos_19;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_36, L_37, L_38, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_39);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_39);
		// if (_AllPooledUnits[i].GetComponent<Crawler>() != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_40 = __this->____AllPooledUnits_17;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* L_44;
		L_44 = GameObject_GetComponent_TisCrawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE_m7E920AE3EE638852A3AECC45506B3147E3A42512(L_43, GameObject_GetComponent_TisCrawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE_m7E920AE3EE638852A3AECC45506B3147E3A42512_RuntimeMethod_var);
		bool L_45;
		L_45 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_44, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_45;
		bool L_46 = V_2;
		if (!L_46)
		{
			goto IL_012a;
		}
	}
	{
		// _AllPooledUnits[i].GetComponent<Crawler>().SetGroupManager = this;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_47 = __this->____AllPooledUnits_17;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		Crawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE* L_51;
		L_51 = GameObject_GetComponent_TisCrawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE_m7E920AE3EE638852A3AECC45506B3147E3A42512(L_50, GameObject_GetComponent_TisCrawler_tDBB8AF342FA9DC3157D64248250DD5F148DC26AE_m7E920AE3EE638852A3AECC45506B3147E3A42512_RuntimeMethod_var);
		NullCheck(L_51);
		Crawler_set_SetGroupManager_m14E9406ED9FDCF4494105D79C27447F9EE366D55(L_51, __this, NULL);
		goto IL_0140;
	}

IL_012a:
	{
		// _AllPooledUnits[i].GetComponent<Cannoneer>().SetGroupManager = this;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_52 = __this->____AllPooledUnits_17;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		Cannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C* L_56;
		L_56 = GameObject_GetComponent_TisCannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C_m7387ECFCF879E7243ABDD8DA2C2B0F1A06AB52BC(L_55, GameObject_GetComponent_TisCannoneer_tC5239393CA23D3E0956B03CCE78393F8D969054C_m7387ECFCF879E7243ABDD8DA2C2B0F1A06AB52BC_RuntimeMethod_var);
		NullCheck(L_56);
		Cannoneer_set_SetGroupManager_mE16CF5049B9C64CE2AAE2E5D9E31F381906A6482(L_56, __this, NULL);
	}

IL_0140:
	{
		// _AllPooledUnits[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_57 = __this->____AllPooledUnits_17;
		int32_t L_58 = V_0;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)0, NULL);
		// for (int i = 0; i < _TotalUnitCount; i++)
		int32_t L_61 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0154:
	{
		// for (int i = 0; i < _TotalUnitCount; i++)
		int32_t L_62 = V_0;
		int32_t L_63 = __this->____TotalUnitCount_6;
		V_3 = (bool)((((int32_t)L_62) < ((int32_t)L_63))? 1 : 0);
		bool L_64 = V_3;
		if (L_64)
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GroupManager::SpawnEnemys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupManager_SpawnEnemys_m7960C388ED93D1A51500ABE0D7E3C4C3DD6A3CC8 (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_RandomWaveUnitCount)
		bool L_0 = __this->____RandomWaveUnitCount_10;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// _WaveUnitCount = Random.Range(_MinWaveUnitCount, _MaxWaveUnitCount);
		int32_t L_2 = __this->____MinWaveUnitCount_8;
		int32_t L_3 = __this->____MaxWaveUnitCount_9;
		int32_t L_4;
		L_4 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(L_2, L_3, NULL);
		__this->____WaveUnitCount_16 = L_4;
		goto IL_0030;
	}

IL_0024:
	{
		// _WaveUnitCount = _MaxWaveUnitCount;
		int32_t L_5 = __this->____MaxWaveUnitCount_9;
		__this->____WaveUnitCount_16 = L_5;
	}

IL_0030:
	{
		// _CurrentActiveUnits = new GameObject[_WaveUnitCount];
		int32_t L_6 = __this->____WaveUnitCount_16;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->____CurrentActiveUnits_18 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____CurrentActiveUnits_18), (void*)L_7);
		// }
		return;
	}
}
// System.Void GroupManager::ClearEnemys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupManager_ClearEnemys_m4A1C5FC277A8B11678D71342F78EC54378E03EE8 (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (_CurrentActiveUnits.Length < 0)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____CurrentActiveUnits_18;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// for (int i = 0; i < _CurrentActiveUnits.Length; i++)
		V_1 = 0;
		goto IL_002e;
	}

IL_0015:
	{
		// Destroy(_CurrentActiveUnits[i].gameObject);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->____CurrentActiveUnits_18;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// for (int i = 0; i < _CurrentActiveUnits.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002e:
	{
		// for (int i = 0; i < _CurrentActiveUnits.Length; i++)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->____CurrentActiveUnits_18;
		NullCheck(L_9);
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0015;
		}
	}
	{
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void GroupManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupManager_Update_mB46368D316369283BBD1BCFAA2266C14C9D1A0EF (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GroupManager::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupManager_OnValidate_m24C1E9B76E77C3A6FE767BF136A1C7A8B5160595 (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_MaxWaveUnitCount <= _MinWaveUnitCount)
		int32_t L_0 = __this->____MaxWaveUnitCount_9;
		int32_t L_1 = __this->____MinWaveUnitCount_8;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// _MaxWaveUnitCount = _MinWaveUnitCount + 1;
		int32_t L_3 = __this->____MinWaveUnitCount_8;
		__this->____MaxWaveUnitCount_9 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void GroupManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupManager__ctor_m8564B02DC9410518CBE7A015BACF80E3586D9628 (GroupManager_tA0FFECC1ED06807EF63769C9DB3B83A684EEB99C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<GameObject> _Prefab = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____Prefab_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Prefab_5), (void*)L_0);
		// [SerializeField] private List<GameObject> _SpawnPoint = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____SpawnPoint_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____SpawnPoint_7), (void*)L_1);
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
// System.Void GameManager::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PauseGame_m71EF0E0188E18168F8B12288BA3363109B0C5D5A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_IsPaused)
		bool L_0 = __this->____IsPaused_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// _IsPaused = false;
		__this->____IsPaused_5 = (bool)0;
		goto IL_0035;
	}

IL_0021:
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// _IsPaused = true;
		__this->____IsPaused_5 = (bool)1;
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonGeneric_1__ctor_m0F83E3052E995F3E468D67B745ECE6B2EEAAA0BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingletonGeneric_1__ctor_m0F83E3052E995F3E468D67B745ECE6B2EEAAA0BC(__this, SingletonGeneric_1__ctor_m0F83E3052E995F3E468D67B745ECE6B2EEAAA0BC_RuntimeMethod_var);
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
// System.Void ProjectileManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileManager_Start_m909C31755B3C951F8C6E40B3379A5364C6D795A7 (ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1* __this, const RuntimeMethod* method) 
{
	{
		// SpawnProjectile();
		ProjectileManager_SpawnProjectile_mBE186E770189A769ACAC7EAD1E00DDFF71D89E5C(__this, NULL);
		// }
		return;
	}
}
// System.Void ProjectileManager::SpawnProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileManager_SpawnProjectile_mBE186E770189A769ACAC7EAD1E00DDFF71D89E5C (ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// _PooledProjectile = new GameObject[_TotalProjectile];
		int32_t L_0 = __this->____TotalProjectile_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____PooledProjectile_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____PooledProjectile_7), (void*)L_1);
		// for (int i = 0; i < _TotalProjectile; i++)
		V_1 = 0;
		goto IL_0049;
	}

IL_0016:
	{
		// c_Projectile = Instantiate(_ProjectilePrefab, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____ProjectilePrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_6;
		// c_Projectile.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// _PooledProjectile[i] = c_Projectile;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->____PooledProjectile_7;
		int32_t L_9 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_10);
		// for (int i = 0; i < _TotalProjectile; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < _TotalProjectile; i++)
		int32_t L_12 = V_1;
		int32_t L_13 = __this->____TotalProjectile_6;
		V_2 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ProjectileManager::GetProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ProjectileManager_GetProjectile_m4FD9047B4E918FA1C8AE5A7B8DA6F45D91F8A150 (ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	bool V_3 = false;
	{
		// for (int i = 0; i < _PooledProjectile.Length; i++)
		V_0 = 0;
		goto IL_003a;
	}

IL_0005:
	{
		// if (!_PooledProjectile[i].activeInHierarchy)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____PooledProjectile_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// _PooledProjectile[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->____PooledProjectile_7;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// return _PooledProjectile[i];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->____PooledProjectile_7;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		goto IL_004d;
	}

IL_0035:
	{
		// for (int i = 0; i < _PooledProjectile.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < _PooledProjectile.Length; i++)
		int32_t L_15 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->____PooledProjectile_7;
		NullCheck(L_16);
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_2;
		return L_18;
	}
}
// System.Void ProjectileManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileManager__ctor_m2B8999CE8D15414F06348715DD3F241865177953 (ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonGeneric_1__ctor_mF2AFDFFEEA5EC8B4C0AF6C71E95D4AB35758B5E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingletonGeneric_1__ctor_mF2AFDFFEEA5EC8B4C0AF6C71E95D4AB35758B5E0(__this, SingletonGeneric_1__ctor_mF2AFDFFEEA5EC8B4C0AF6C71E95D4AB35758B5E0_RuntimeMethod_var);
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
// System.Void SelectorButtonManager::CalculateOffsets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectorButtonManager_CalculateOffsets_m00CEEDD041EF023B508ACD162B99705C5C271473 (SelectorButtonManager_t9BB7D7FBC40883345244EE14785841CD2BB19B4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	{
		// for (int i = 0; i < _SelectorButtons.Count; i++)
		V_0 = 0;
		goto IL_00d4;
	}

IL_0008:
	{
		// float c_Const = 360f;
		V_1 = (360.0f);
		// float SinX = Mathf.Sin(_Degrees * Mathf.Deg2Rad) * _Radius;
		float L_0 = __this->____Degrees_10;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_multiply(L_0, (0.0174532924f))));
		float L_2 = __this->____Radius_8;
		V_2 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// float CosZ = Mathf.Cos(_Degrees * Mathf.Deg2Rad) * _Radius;
		float L_3 = __this->____Degrees_10;
		float L_4;
		L_4 = cosf(((float)il2cpp_codegen_multiply(L_3, (0.0174532924f))));
		float L_5 = __this->____Radius_8;
		V_3 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// Vector3 _ButtomOffsets = new Vector3(SinX, CosZ, 0f);
		float L_6 = V_2;
		float L_7 = V_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), L_6, L_7, (0.0f), NULL);
		// Vector3 c_GlobalTranslate = transform.TransformPoint(_ButtomOffsets);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_8, L_9, NULL);
		V_5 = L_10;
		// _SelectorButtons[i].transform.position = c_GlobalTranslate;
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_11 = __this->____SelectorButtons_5;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		SelectorButton_t30B0FFC2DD0EDDCE7132861AFF7EF49847638869* L_13;
		L_13 = List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F(L_11, L_12, List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F_RuntimeMethod_var);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_5;
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
		// Vector3 c_Look = transform.position - c_GlobalTranslate;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_17, L_18, NULL);
		V_6 = L_19;
		// _SelectorButtons[i].transform.rotation = Quaternion.LookRotation(c_Look, transform.forward);
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_20 = __this->____SelectorButtons_5;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		SelectorButton_t30B0FFC2DD0EDDCE7132861AFF7EF49847638869* L_22;
		L_22 = List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F(L_20, L_21, List_1_get_Item_mB18A69A71AD005E7B4D4C31EA3759FA314A9685F_RuntimeMethod_var);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_25, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_24, L_26, NULL);
		NullCheck(L_23);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_23, L_27, NULL);
		// _Degrees += c_Const / _SelectorButtons.Count;
		float L_28 = __this->____Degrees_10;
		float L_29 = V_1;
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_30 = __this->____SelectorButtons_5;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_inline(L_30, List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_RuntimeMethod_var);
		__this->____Degrees_10 = ((float)il2cpp_codegen_add(L_28, ((float)(L_29/((float)L_31)))));
		// for (int i = 0; i < _SelectorButtons.Count; i++)
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00d4:
	{
		// for (int i = 0; i < _SelectorButtons.Count; i++)
		int32_t L_33 = V_0;
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_34 = __this->____SelectorButtons_5;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_inline(L_34, List_1_get_Count_mBAF04315D79FC22A7984F179847BA6E0CC92FD07_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_33) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_7;
		if (L_36)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SelectorButtonManager::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectorButtonManager_OnValidate_m48B526AAC0672FA59D198A06EBABFD5473C24BF8 (SelectorButtonManager_t9BB7D7FBC40883345244EE14785841CD2BB19B4C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_Radius < _MinRadius)
		float L_0 = __this->____Radius_8;
		float L_1 = __this->____MinRadius_7;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// _Radius = _MinRadius;
		float L_3 = __this->____MinRadius_7;
		__this->____Radius_8 = L_3;
	}

IL_001f:
	{
		// if (_Radius > _MaxRadius)
		float L_4 = __this->____Radius_8;
		float L_5 = __this->____MaxRadius_9;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// _Radius = _MaxRadius;
		float L_7 = __this->____MaxRadius_9;
		__this->____Radius_8 = L_7;
	}

IL_003d:
	{
		// CalculateOffsets();
		SelectorButtonManager_CalculateOffsets_m00CEEDD041EF023B508ACD162B99705C5C271473(__this, NULL);
		// }
		return;
	}
}
// System.Void SelectorButtonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectorButtonManager__ctor_mC0DC50E24B4310B5E803A1225B8E42CEC6726AEF (SelectorButtonManager_t9BB7D7FBC40883345244EE14785841CD2BB19B4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5AA1A01BB9BC86EAAFD6B968098B2996FAFBDD05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<SelectorButton> _SelectorButtons = new List<SelectorButton>();
		List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE* L_0 = (List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE*)il2cpp_codegen_object_new(List_1_tF5DFCEA93F7367A533D2D507F2EB7D9E63C8D0AE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5AA1A01BB9BC86EAAFD6B968098B2996FAFBDD05(L_0, List_1__ctor_m5AA1A01BB9BC86EAAFD6B968098B2996FAFBDD05_RuntimeMethod_var);
		__this->____SelectorButtons_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____SelectorButtons_5), (void*)L_0);
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
// System.Void SkillManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillManager_Update_m4C382FA6E5B92328BC767A616B70C3BDFA5F6480 (SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (_Activate)
		bool L_0 = __this->____Activate_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// ChangeSkill(_TestSkill, gameObject);
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_2 = __this->____TestSkill_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		SkillManager_ChangeSkill_m5D4DAF042998E095F7D55B4A7611283FBAB5EAA8(__this, L_2, L_3, NULL);
	}

IL_0020:
	{
		// if (_CurrentSkill != null)
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_4 = __this->____CurrentSkill_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0079;
		}
	}
	{
		// if (_CurrentSkillTime >= _CurrentSkill.SkillTime)
		float L_7 = __this->____CurrentSkillTime_7;
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_8 = __this->____CurrentSkill_6;
		NullCheck(L_8);
		float L_9;
		L_9 = SkillBase_get_SkillTime_m3A509008D763FC978830235B05EB9D71D3D3A07B(L_8, NULL);
		V_2 = (bool)((((int32_t)((!(((float)L_7) >= ((float)L_9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		// Clear();
		SkillManager_Clear_m06496CF73178BA6398D84BA44C64612BFB885721(__this, NULL);
		// return;
		goto IL_0079;
	}

IL_0055:
	{
		// _CurrentSkillTime += Time.deltaTime;
		float L_11 = __this->____CurrentSkillTime_7;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____CurrentSkillTime_7 = ((float)il2cpp_codegen_add(L_11, L_12));
		// _CurrentSkill.Loop(Time.deltaTime);
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_13 = __this->____CurrentSkill_6;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_13);
		SkillBase_Loop_mC876E35686FD21A30A155A279C16026DD1EB89AB(L_13, L_14, NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void SkillManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillManager_Clear_m06496CF73178BA6398D84BA44C64612BFB885721 (SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* __this, const RuntimeMethod* method) 
{
	{
		// _CurrentSkill.Stop(_Sender);
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_0 = __this->____CurrentSkill_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____Sender_8;
		NullCheck(L_0);
		SkillBase_Stop_m9DCCE5284FDB95B6394F3C6888F04335D6402ECE(L_0, L_1, NULL);
		// _CurrentSkill = null;
		__this->____CurrentSkill_6 = (SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____CurrentSkill_6), (void*)(SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1*)NULL);
		// _Sender = null;
		__this->____Sender_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Sender_8), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// _CurrentSkillTime = 0f;
		__this->____CurrentSkillTime_7 = (0.0f);
		// }
		return;
	}
}
// System.Void SkillManager::ChangeSkill(SkillBase,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillManager_ChangeSkill_m5D4DAF042998E095F7D55B4A7611283FBAB5EAA8 (SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* __this, SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* ___NextSkill0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Sender1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (NextSkill == null)
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_0 = ___NextSkill0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_0046;
	}

IL_000e:
	{
		// if (_CurrentSkill != null)
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_3 = __this->____CurrentSkill_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// _CurrentSkill.Stop(Sender);
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_6 = __this->____CurrentSkill_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___Sender1;
		NullCheck(L_6);
		SkillBase_Stop_m9DCCE5284FDB95B6394F3C6888F04335D6402ECE(L_6, L_7, NULL);
	}

IL_002b:
	{
		// _Sender = Sender;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___Sender1;
		__this->____Sender_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Sender_8), (void*)L_8);
		// _CurrentSkill = NextSkill;
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_9 = ___NextSkill0;
		__this->____CurrentSkill_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____CurrentSkill_6), (void*)L_9);
		// _CurrentSkill.Init(Sender);
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_10 = __this->____CurrentSkill_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___Sender1;
		NullCheck(L_10);
		SkillBase_Init_m37E51A8D5F79F00C20576D022E7BF8240BCDAF9C(L_10, L_11, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void SkillManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillManager__ctor_m68A181CB25B10431763A2F7477A6AD052CE51633 (SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* __this, const RuntimeMethod* method) 
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
// System.Int32 UIManager::get_FinnalScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIManager_get_FinnalScore_mE72D75CE72B47D5D00C81DAE9CF0014494D3DC69 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int FinnalScore { get { return _FinnalScore; } set { _FinnalScore = value; } }
		int32_t L_0 = __this->____FinnalScore_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int FinnalScore { get { return _FinnalScore; } set { _FinnalScore = value; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UIManager::set_FinnalScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_FinnalScore_mC05FA73AC6BF18D64D4DAB0649F8F4AE041625B7 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int FinnalScore { get { return _FinnalScore; } set { _FinnalScore = value; } }
		int32_t L_0 = ___value0;
		__this->____FinnalScore_5 = L_0;
		// public int FinnalScore { get { return _FinnalScore; } set { _FinnalScore = value; } }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mC9DC2B8984E76F424E73C1860AD4BD3DEBF6573F (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
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
// System.Void RestTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestTimer_Update_mD636073AF9D8FDD4CED6107F06F415650304610E (RestTimer_tC360D0A71DACEAB7CAB42AFB0DD443B385B29D61* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_CurrentTime < _MaxRestTime)
		float L_0 = __this->____CurrentTime_6;
		float L_1 = __this->____MaxRestTime_5;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// _CurrentTime += Time.deltaTime;
		float L_3 = __this->____CurrentTime_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____CurrentTime_6 = ((float)il2cpp_codegen_add(L_3, L_4));
	}

IL_0025:
	{
		// if (_CurrentTime >= _MaxRestTime)
		float L_5 = __this->____CurrentTime_6;
		float L_6 = __this->____MaxRestTime_5;
		V_1 = (bool)((((int32_t)((!(((float)L_5) >= ((float)L_6)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// OnRestTimeEnds.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = __this->___OnRestTimeEnds_4;
		NullCheck(L_8);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_8, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void RestTimer::ResetTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestTimer_ResetTimer_m0E31B0ECCA7D31183FD2C86854305962E1EA99C2 (RestTimer_tC360D0A71DACEAB7CAB42AFB0DD443B385B29D61* __this, const RuntimeMethod* method) 
{
	{
		// _CurrentTime = 0f;
		__this->____CurrentTime_6 = (0.0f);
		// }
		return;
	}
}
// System.Void RestTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RestTimer__ctor_mD4B4583C5BBDBB53CE40C2AB8398339432A65840 (RestTimer_tC360D0A71DACEAB7CAB42AFB0DD443B385B29D61* __this, const RuntimeMethod* method) 
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
// System.Int32 WaveManager::get_CurrentWaveNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveManager_get_CurrentWaveNumber_m898E49885FF977D5C7FC8CD9567B137ACF3268E4 (WaveManager_t432EF298E8C09678E15239E5EF95239F5B4AC141* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int CurrentWaveNumber { get { return _MinWaveNumber; } private set { } }
		int32_t L_0 = __this->____MinWaveNumber_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int CurrentWaveNumber { get { return _MinWaveNumber; } private set { } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void WaveManager::set_CurrentWaveNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_set_CurrentWaveNumber_m0E4854C5241FA62D2D16E2C2D2C1DC7340CFCF3F (WaveManager_t432EF298E8C09678E15239E5EF95239F5B4AC141* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int CurrentWaveNumber { get { return _MinWaveNumber; } private set { } }
		return;
	}
}
// System.Void WaveManager::WaveStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_WaveStart_mB41EFD3CFCBA2CE5CB74EE176C83507C653C916D (WaveManager_t432EF298E8C09678E15239E5EF95239F5B4AC141* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_IsStarted)
		bool L_0 = __this->____IsStarted_9;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		goto IL_0035;
	}

IL_000d:
	{
		// if(_CurrentWaveNumber <= _MaxWaveNumber)
		int32_t L_2 = __this->____CurrentWaveNumber_10;
		int32_t L_3 = __this->____MaxWaveNumber_8;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// OnWaveStart.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = __this->___OnWaveStart_5;
		NullCheck(L_5);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_5, NULL);
	}

IL_002e:
	{
		// _IsStarted = true;
		__this->____IsStarted_9 = (bool)1;
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void WaveManager::WaveEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_WaveEnd_m172BA618D7288CD8C4AAE4484526939A6B543F54 (WaveManager_t432EF298E8C09678E15239E5EF95239F5B4AC141* __this, const RuntimeMethod* method) 
{
	{
		// OnWaveStop.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnWaveStop_6;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// _IsStarted = false;
		__this->____IsStarted_9 = (bool)0;
		// }
		return;
	}
}
// System.Void WaveManager::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager_OnValidate_mB59B3DA2C5C6E34E2A89896F99998DC728FBF3EC (WaveManager_t432EF298E8C09678E15239E5EF95239F5B4AC141* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_MaxWaveNumber <= _MinWaveNumber)
		int32_t L_0 = __this->____MaxWaveNumber_8;
		int32_t L_1 = __this->____MinWaveNumber_7;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// _MaxWaveNumber = _MinWaveNumber + 1;
		int32_t L_3 = __this->____MinWaveNumber_7;
		__this->____MaxWaveNumber_8 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void WaveManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveManager__ctor_mC7F2AE5A0D1E145BCC19FFD4282EA48B2F3B3768 (WaveManager_t432EF298E8C09678E15239E5EF95239F5B4AC141* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonGeneric_1__ctor_m5B37902AAEAE1BC8520DED5A6B60C40A989A10E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingletonGeneric_1__ctor_m5B37902AAEAE1BC8520DED5A6B60C40A989A10E4(__this, SingletonGeneric_1__ctor_m5B37902AAEAE1BC8520DED5A6B60C40A989A10E4_RuntimeMethod_var);
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
// System.Void WeaponManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponManager_Start_mDF41459E0993074AED3D741FC736E22F3844825F (WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* __this, const RuntimeMethod* method) 
{
	{
		// SpawnWeapon();
		WeaponManager_SpawnWeapon_m488A9474894A97D0F50F5FD4B78F5AC0E6AD5520(__this, NULL);
		// }
		return;
	}
}
// System.Void WeaponManager::SpawnWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponManager_SpawnWeapon_m488A9474894A97D0F50F5FD4B78F5AC0E6AD5520 (WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// int c_ArrayLength = WeaponPrefabs.Count;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___WeaponPrefabs_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = L_1;
		// _PooledWeapons = new GameObject[c_ArrayLength];
		int32_t L_2 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____PooledWeapons_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____PooledWeapons_6), (void*)L_3);
		// for (int i = 0; i < WeaponPrefabs.Count; i++)
		V_2 = 0;
		goto IL_005c;
	}

IL_001d:
	{
		// c_Weapon = Instantiate(WeaponPrefabs[i], transform.position, transform.rotation);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___WeaponPrefabs_5;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_6, L_8, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_11;
		// c_Weapon.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_1;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// _PooledWeapons[i] = c_Weapon;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->____PooledWeapons_6;
		int32_t L_14 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_15);
		// for (int i = 0; i < WeaponPrefabs.Count; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005c:
	{
		// for (int i = 0; i < WeaponPrefabs.Count; i++)
		int32_t L_17 = V_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = __this->___WeaponPrefabs_5;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_18, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WeaponManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponManager_Clear_mC0B2A2F859124318B2A88399EE80D43E7C7F9995 (WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < _PooledWeapons.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// _PooledWeapons[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____PooledWeapons_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < _PooledWeapons.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < _PooledWeapons.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->____PooledWeapons_6;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject WeaponManager::GetWeapons(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WeaponManager_GetWeapons_m10FFE2FFE66B0E58FEFA65B4800A5A049CFB4655 (WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WeaponsPrefabs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// Clear();
		WeaponManager_Clear_mC0B2A2F859124318B2A88399EE80D43E7C7F9995(__this, NULL);
		// for (int i = 0; i < _PooledWeapons.Length; i++)
		V_0 = 0;
		goto IL_0055;
	}

IL_000c:
	{
		// if (!_PooledWeapons[i].activeInHierarchy && WeaponPrefabs[i] == WeaponsPrefabs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____PooledWeapons_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___WeaponPrefabs_5;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___WeaponsPrefabs0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		V_1 = (bool)G_B4_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// _PooledWeapons[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->____PooledWeapons_6;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// return _PooledWeapons[i];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->____PooledWeapons_6;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = L_18;
		goto IL_0068;
	}

IL_0050:
	{
		// for (int i = 0; i < _PooledWeapons.Length; i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < _PooledWeapons.Length; i++)
		int32_t L_20 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->____PooledWeapons_6;
		NullCheck(L_21);
		V_3 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_000c;
		}
	}
	{
		// return null;
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_0068;
	}

IL_0068:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_2;
		return L_23;
	}
}
// System.Void WeaponManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponManager__ctor_m0E04A728A5EA0AE5BD0C04797B5236616308801D (WeaponManager_tBAA6913FFAA18897ABB5E65B60E87560FE4CF120* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonGeneric_1__ctor_m904E6BDAA740A3F168D1ACEF87D0D3DEB4A9DAEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<GameObject> WeaponPrefabs = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___WeaponPrefabs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WeaponPrefabs_5), (void*)L_0);
		SingletonGeneric_1__ctor_m904E6BDAA740A3F168D1ACEF87D0D3DEB4A9DAEB(__this, SingletonGeneric_1__ctor_m904E6BDAA740A3F168D1ACEF87D0D3DEB4A9DAEB_RuntimeMethod_var);
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
// System.Void CollisionTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTest_Update_m66C3BAA31FF6EBD16681FA79843AFE424D6A52CA (CollisionTest_t143C7A85D74190E3AB567E0D50654EFA5F174F86* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (m_Colliding)
		bool L_0 = __this->___m_Colliding_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_Collider.enabled = true;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = __this->___m_Collider_5;
		NullCheck(L_2);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_2, (bool)1, NULL);
		goto IL_0027;
	}

IL_001a:
	{
		// m_Collider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = __this->___m_Collider_5;
		NullCheck(L_3);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_3, (bool)0, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void CollisionTest::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTest_OnTriggerEnter_m67D82F674B55A8067492698E52EDBE73A9023FEA (CollisionTest_t143C7A85D74190E3AB567E0D50654EFA5F174F86* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(other.name);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void CollisionTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTest__ctor_mC203B7140A056C940E2335DE386EB415B5413AFD (CollisionTest_t143C7A85D74190E3AB567E0D50654EFA5F174F86* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] bool m_Colliding = false;
		__this->___m_Colliding_4 = (bool)0;
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
// System.Void CrossProductTest::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossProductTest_OnDrawGizmos_m184285DC88A81F6E6B84BD82E942F135D4FCD956 (CrossProductTest_t720FCD6322984A48ABD9D18AA4A7DB68CB12B052* __this, const RuntimeMethod* method) 
{
	{
		// _Forward = transform.forward + transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_3, NULL);
		__this->____Forward_5 = L_4;
		// _Up = transform.up + transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_8, NULL);
		__this->____Up_6 = L_9;
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_10, NULL);
		// Gizmos.DrawLine(transform.position, _Forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->____Forward_5;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_12, L_13, NULL);
		// Gizmos.color = Color.blue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_14, NULL);
		// Gizmos.DrawLine(transform.position, _Up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->____Up_6;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_16, L_17, NULL);
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_18, NULL);
		// Gizmos.DrawLine((Vector3.Cross(_Forward, _Up) + transform.position), transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->____Forward_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->____Up_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_19, L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_24, L_26, NULL);
		// }
		return;
	}
}
// System.Void CrossProductTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossProductTest_Update_m38A7A251BE50C80811E1494545034DC7B0058DA8 (CrossProductTest_t720FCD6322984A48ABD9D18AA4A7DB68CB12B052* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _Forward = transform.forward + transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_3, NULL);
		__this->____Forward_5 = L_4;
		// _Up = transform.up + transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_8, NULL);
		__this->____Up_6 = L_9;
		// _Cross = Vector3.Cross(_Forward, _Up) + transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->____Forward_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->____Up_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_10, L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_14, NULL);
		__this->____Cross_7 = L_15;
		// transform.Rotate(_Cross);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->____Cross_7;
		NullCheck(L_16);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_16, L_17, NULL);
		// Debug.Log(_Cross);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->____Cross_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18;
		RuntimeObject* L_20 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_19);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		// }
		return;
	}
}
// System.Void CrossProductTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossProductTest__ctor_m745957EBEE0DB6698D0BC74A6DB653BFFDE5FCDC (CrossProductTest_t720FCD6322984A48ABD9D18AA4A7DB68CB12B052* __this, const RuntimeMethod* method) 
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
// System.Void DotProductTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotProductTest_Update_mCF44A525DA3D1085A16A9845EEFE4710CBD7A212 (DotProductTest_tA766D31E0B627826995AEF5DA1FA01696CB573F3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 Forward = transform.TransformDirection(-Vector3.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_1, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_0, L_2, NULL);
		V_0 = L_3;
		// Vector3 Other = _Other.transform.position - transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____Other_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// _Dot = Vector3.Dot(Forward, Other);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		float L_12;
		L_12 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_10, L_11, NULL);
		__this->____Dot_5 = L_12;
		// }
		return;
	}
}
// System.Void DotProductTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotProductTest__ctor_m3B7DEE8A151539B47701FD9D2057110779641811 (DotProductTest_tA766D31E0B627826995AEF5DA1FA01696CB573F3* __this, const RuntimeMethod* method) 
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
// System.Void Orbit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbit_Update_m08E209C0A52E9EA24A47B07D623FFC589DCA64C8 (Orbit_tFA5C44247464A58B320ACD88D37CA00A0E9FD11E* __this, const RuntimeMethod* method) 
{
	{
		// _SinZ = Mathf.Sin(Mathf.Deg2Rad * _Deg) * _Rad;
		float L_0 = __this->____Deg_5;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_multiply((0.0174532924f), L_0)));
		float L_2 = __this->____Rad_6;
		__this->____SinZ_8 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// _CosX = Mathf.Cos(Mathf.Deg2Rad * _Deg) * _Rad;
		float L_3 = __this->____Deg_5;
		float L_4;
		L_4 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_3)));
		float L_5 = __this->____Rad_6;
		__this->____CosX_9 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// _Offsets = new Vector3(_Target.position.x + _CosX, _Target.position.y, _Target.position.z + _SinZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____Target_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9 = __this->____CosX_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->____Target_4;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->____Target_4;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___z_4;
		float L_16 = __this->____SinZ_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)il2cpp_codegen_add(L_8, L_9)), L_12, ((float)il2cpp_codegen_add(L_15, L_16)), /*hidden argument*/NULL);
		__this->____Offsets_10 = L_17;
		// gameObject.transform.position = Vector3.SmoothDamp(transform.position, _Offsets, ref _Velocity, _SmoothTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->____Offsets_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->____Velocity_11);
		float L_24 = __this->____SmoothTime_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_21, L_22, L_23, L_24, NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_25, NULL);
		// transform.LookAt(_Target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->____Target_4;
		NullCheck(L_26);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Void Orbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbit__ctor_mB9C36D43297D4CB0E1959C2F08AC002C06772FED (Orbit_tFA5C44247464A58B320ACD88D37CA00A0E9FD11E* __this, const RuntimeMethod* method) 
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
// System.Void TestDamager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDamager_Start_mD93C0C32B596E7A01266C40C2737B4A531EDFA1D (TestDamager_tD9DC1CF7CB50081B13321DCD99850B9DF596AB24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m2932B85664B494D72382DE422CD1D846B0323315_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _Damageable = _Target.GetComponent<IDamageable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____Target_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameObject_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m2932B85664B494D72382DE422CD1D846B0323315(L_0, GameObject_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m2932B85664B494D72382DE422CD1D846B0323315_RuntimeMethod_var);
		__this->____Damageable_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Damageable_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void TestDamager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDamager_Update_m4454E7AD639D6237B2CAA9F405CB4269CDF600EF (TestDamager_tD9DC1CF7CB50081B13321DCD99850B9DF596AB24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_Attack)
		bool L_0 = __this->____Attack_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// _Damageable.DoDamage(_Damage, _Piercing);
		RuntimeObject* L_2 = __this->____Damageable_8;
		float L_3 = __this->____Damage_5;
		float L_4 = __this->____Piercing_6;
		NullCheck(L_2);
		InterfaceActionInvoker2< float, float >::Invoke(0 /* System.Void IDamageable::DoDamage(System.Single,System.Single) */, IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// _Attack = false;
		__this->____Attack_7 = (bool)0;
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void TestDamager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDamager__ctor_m697F67B8819D977158DE3F33C0256B3A551C9026 (TestDamager_tD9DC1CF7CB50081B13321DCD99850B9DF596AB24* __this, const RuntimeMethod* method) 
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
// System.Void TestDirectionalRotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDirectionalRotation_Start_m2EF405D955940FA72FB52918A2823522C898FFAD (TestDirectionalRotation_t59C526C0B594269EE9536CA8085654F38D3F4963* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _OffsetRotation = transform.rotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		__this->____OffsetRotation_6 = L_2;
		// }
		return;
	}
}
// System.Void TestDirectionalRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDirectionalRotation_Update_mA2F6037C3488D610B051BEA02E7267150450D84E (TestDirectionalRotation_t59C526C0B594269EE9536CA8085654F38D3F4963* __this, const RuntimeMethod* method) 
{
	{
		// transform.up = (_Target.transform.position - _RotatingBody.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____Target_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____RotatingBody_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_6, NULL);
		NullCheck(L_0);
		Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554(L_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void TestDirectionalRotation::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDirectionalRotation_OnDrawGizmos_m1AC4292EF12E0120CA7EDB8AE93175E9AFC37442 (TestDirectionalRotation_t59C526C0B594269EE9536CA8085654F38D3F4963* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = Color.blue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawLine(transform.position, transform.position + transform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_6, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_2, L_7, NULL);
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_8, NULL);
		// Gizmos.DrawLine(transform.position, transform.position + transform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_14, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_10, L_15, NULL);
		// }
		return;
	}
}
// System.Void TestDirectionalRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDirectionalRotation__ctor_mBAA0ED2A8A41B836C30451D2EF104BB3D61EEE7E (TestDirectionalRotation_t59C526C0B594269EE9536CA8085654F38D3F4963* __this, const RuntimeMethod* method) 
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
// System.Void TestFindForward::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestFindForward_OnDrawGizmos_m4C799187AB20599C11EC299C97829F02FBE551FA (TestFindForward_t00A7C140E2BA5E5E3C020F36D8E72539E89DE35A* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = Color.blue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawLine(transform.position, transform.position + transform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_6, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_2, L_7, NULL);
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_8, NULL);
		// Gizmos.DrawLine(transform.position, transform.position + transform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_14, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_10, L_15, NULL);
		// }
		return;
	}
}
// System.Void TestFindForward::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestFindForward__ctor_m32259945B100C0F8B33B84C32CAC77AD5B372A37 (TestFindForward_t00A7C140E2BA5E5E3C020F36D8E72539E89DE35A* __this, const RuntimeMethod* method) 
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
// System.Void GameOverUI::ChangeScoreText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverUI_ChangeScoreText_mC3752738D08CB36FAE8052C7CA6FE81601E02082 (GameOverUI_tED6E1D9D1616BF7C870AEDB25B882281D25F4914* __this, const RuntimeMethod* method) 
{
	{
		// _ScoreText.text = _FinnalScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->____ScoreText_4;
		int32_t* L_1 = (&__this->____FinnalScore_5);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void GameOverUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverUI__ctor_m4B0946014D6506CDF3EEB50FE0E45A95F320766F (GameOverUI_tED6E1D9D1616BF7C870AEDB25B882281D25F4914* __this, const RuntimeMethod* method) 
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
// System.Single Bow::get_SmoothTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bow_get_SmoothTime_m3B72D977C63A4CCF0E19BAEC547ED4DAF2AB8192 (Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float SmoothTime { get { return _SmoothTime; } private set {} }
		float L_0 = __this->____SmoothTime_20;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float SmoothTime { get { return _SmoothTime; } private set {} }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Bow::set_SmoothTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bow_set_SmoothTime_mC59C895EDEBCC1ACB4A554AC808E73E61BC49F06 (Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float SmoothTime { get { return _SmoothTime; } private set {} }
		return;
	}
}
// System.Single Bow::get_MinimalPull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bow_get_MinimalPull_m7146F3DC5E28132C9434DC63F89BE8F01A3B3259 (Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float MinimalPull { get { return _MinimalPull; } private set { } }
		float L_0 = __this->____MinimalPull_18;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MinimalPull { get { return _MinimalPull; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Bow::set_MinimalPull(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bow_set_MinimalPull_m8F2D20F684220C47EC0780582041B828F84F67E4 (Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinimalPull { get { return _MinimalPull; } private set { } }
		return;
	}
}
// System.Void Bow::Shoot(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bow_Shoot_mD89B63327B94D5E6103194C27C8173487CC1126D (Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* __this, float ___LaunchPower0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonGeneric_1_get_Instance_m9281B95951229EF9106DE338B14E3138AF008632_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// Vector3 c_Forward = transform.forward + transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// Vector3 c_GroundForward = new Vector3(c_Forward.x, transform.position.y, c_Forward.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_6, L_9, L_11, NULL);
		// float c_LaunchAngle = Vector3.Angle(c_Forward, c_GroundForward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		float L_14;
		L_14 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_12, L_13, NULL);
		V_2 = L_14;
		// _PojectileObject = ProjectileManager.Instance.GetProjectile();
		ProjectileManager_t10CA9D1E9EED6A5EC5FC6F46A4847CCA4C6DA8F1* L_15;
		L_15 = SingletonGeneric_1_get_Instance_m9281B95951229EF9106DE338B14E3138AF008632(SingletonGeneric_1_get_Instance_m9281B95951229EF9106DE338B14E3138AF008632_RuntimeMethod_var);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = ProjectileManager_GetProjectile_m4FD9047B4E918FA1C8AE5A7B8DA6F45D91F8A150(L_15, NULL);
		__this->____PojectileObject_21 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____PojectileObject_21), (void*)L_16);
		// _PojectileObject.transform.position = _ProjectileSpawnPoint.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->____PojectileObject_21;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->____ProjectileSpawnPoint_17;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_20, NULL);
		// _PojectileObject.transform.rotation = _ProjectileSpawnPoint.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->____PojectileObject_21;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->____ProjectileSpawnPoint_17;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_24, NULL);
		// _Projectile = _PojectileObject.GetComponent<Projectile>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->____PojectileObject_21;
		NullCheck(L_25);
		Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* L_26;
		L_26 = GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183(L_25, GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183_RuntimeMethod_var);
		__this->____Projectile_22 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Projectile_22), (void*)L_26);
		// _Projectile.AssignParameter(LaunchPower * _Multiplier, transform.position.y, c_LaunchAngle);
		Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* L_27 = __this->____Projectile_22;
		float L_28 = ___LaunchPower0;
		float L_29 = __this->____Multiplier_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___y_3;
		float L_33 = V_2;
		NullCheck(L_27);
		Projectile_AssignParameter_m35F227340B743FA8568C5FDFD1208ADE5D602ED5(L_27, ((float)il2cpp_codegen_multiply(L_28, L_29)), L_32, L_33, NULL);
		// }
		return;
	}
}
// System.Void Bow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bow__ctor_mE67D9183F71AD9E49F813C4002BFDCF85FD239EF (Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* __this, const RuntimeMethod* method) 
{
	{
		WeaponBase__ctor_m46595B1F5C67EE1D36785E1D3AA83C00ADD83FC1(__this, NULL);
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
// System.Void BowString::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowString_OnDisable_m20F0EEB712CE157DBBE1D05FB622B18297ADE9D0 (BowString_t10E8322FC769EE983546761280797279041F8916* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// transform.position = _PullStartPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->____PullStartPos_9;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// _PullStartPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->____PullStartPos_9 = L_2;
		// _LocalStartPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->____LocalStartPos_10 = L_3;
		// if (_InteractionManager.detectionType == c_OriginalDetectionType)
		InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* L_4 = __this->____InteractionManager_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InteractionManager_get_detectionType_m9B943545FBACF730C608A59FF11A39CD42567012(L_4, NULL);
		int32_t L_6 = __this->___c_OriginalDetectionType_7;
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// return;
		goto IL_0054;
	}

IL_0042:
	{
		// _InteractionManager.ChangeDetectionType(c_OriginalDetectionType);
		InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* L_8 = __this->____InteractionManager_6;
		int32_t L_9 = __this->___c_OriginalDetectionType_7;
		NullCheck(L_8);
		InteractionManager_ChangeDetectionType_m6770C2B592509C09E291331CCB355FB843F5660B(L_8, L_9, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void BowString::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowString_OnEnable_mA0B70AD0EDB2DF0ECBA4A8A84297577EAA317A1A (BowString_t10E8322FC769EE983546761280797279041F8916* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// _LocalStartPos = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->____LocalStartPos_10 = L_1;
		// c_OriginalDetectionType = _InteractionManager.detectionType;
		InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* L_2 = __this->____InteractionManager_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InteractionManager_get_detectionType_m9B943545FBACF730C608A59FF11A39CD42567012(L_2, NULL);
		__this->___c_OriginalDetectionType_7 = L_3;
		// if (c_OriginalDetectionType == DetectionType.Collider)
		int32_t L_4 = __this->___c_OriginalDetectionType_7;
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// return;
		goto IL_003f;
	}

IL_0032:
	{
		// _InteractionManager.ChangeDetectionType(DetectionType.Collider);
		InteractionManager_tAF88AED2FC4743FC3467C525DE02134B4635DFCF* L_6 = __this->____InteractionManager_6;
		NullCheck(L_6);
		InteractionManager_ChangeDetectionType_m6770C2B592509C09E291331CCB355FB843F5660B(L_6, 2, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void BowString::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowString_Start_m511E427B818E91655609B7B337734E7DF17778AF (BowString_t10E8322FC769EE983546761280797279041F8916* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB_mFEFB0EBBD6B60D08C3636E7B77F808FA7389D2A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _ParentBow = transform.parent.GetComponent<Bow>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* L_2;
		L_2 = Component_GetComponent_TisBow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB_mFEFB0EBBD6B60D08C3636E7B77F808FA7389D2A4(L_1, Component_GetComponent_TisBow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB_mFEFB0EBBD6B60D08C3636E7B77F808FA7389D2A4_RuntimeMethod_var);
		__this->____ParentBow_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ParentBow_11), (void*)L_2);
		// }
		return;
	}
}
// System.Void BowString::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowString_Update_mA272AD419C45DF669224B9071FDEFDCBA48DCC3D (BowString_t10E8322FC769EE983546761280797279041F8916* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// _SmoothTime = _ParentBow.SmoothTime;
		Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* L_0 = __this->____ParentBow_11;
		NullCheck(L_0);
		float L_1;
		L_1 = Bow_get_SmoothTime_m3B72D977C63A4CCF0E19BAEC547ED4DAF2AB8192(L_0, NULL);
		__this->____SmoothTime_13 = L_1;
		// if (_LocalStartPos == transform.localPosition)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____LocalStartPos_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		bool L_5;
		L_5 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_2, L_4, NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// _PullStartPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		__this->____PullStartPos_9 = L_8;
	}

IL_003d:
	{
		// if (!_IsGrabbed && Vector3.Distance(transform.position, _PullStartPos) >= 0f)
		bool L_9 = __this->____IsGrabbed_12;
		if (L_9)
		{
			goto IL_0067;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->____PullStartPos_9;
		float L_13;
		L_13 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_11, L_12, NULL);
		G_B5_0 = ((((int32_t)((!(((float)L_13) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0068;
	}

IL_0067:
	{
		G_B5_0 = 0;
	}

IL_0068:
	{
		V_1 = (bool)G_B5_0;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_009a;
		}
	}
	{
		// transform.localPosition = Vector3.SmoothDamp(transform.localPosition, _LocalStartPos, ref _Velocity, _SmoothTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->____LocalStartPos_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->____Velocity_8);
		float L_20 = __this->____SmoothTime_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_17, L_18, L_19, L_20, NULL);
		NullCheck(L_15);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_15, L_21, NULL);
	}

IL_009a:
	{
		// _Visualizer.PullPoint.position = transform.position;
		BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* L_22 = __this->____Visualizer_4;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = BowStringVisual_get_PullPoint_mE97ABC83CDA9D09FEB856DFEEE817E715C833974(L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		NullCheck(L_23);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_25, NULL);
		// }
		return;
	}
}
// System.Void BowString::OnGrabbed(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowString_OnGrabbed_m3129CB86135EB7E5CB6FD654D588F6CAF8DC43A3 (BowString_t10E8322FC769EE983546761280797279041F8916* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___GrabTransform0, const RuntimeMethod* method) 
{
	{
		// _IsGrabbed = true;
		__this->____IsGrabbed_12 = (bool)1;
		// }
		return;
	}
}
// System.Void BowString::OnDetached(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowString_OnDetached_m7E13EC073420921877EC59828866D441CC8670D5 (BowString_t10E8322FC769EE983546761280797279041F8916* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___GrabTransform0, const RuntimeMethod* method) 
{
	{
		// _Visualizer.PullPoint.position = _Visualizer.CenterPoint.position;
		BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* L_0 = __this->____Visualizer_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = BowStringVisual_get_PullPoint_mE97ABC83CDA9D09FEB856DFEEE817E715C833974(L_0, NULL);
		BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* L_2 = __this->____Visualizer_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = BowStringVisual_get_CenterPoint_mD01ED0F72F11704DD125765D0C5A1C8BC0CE97F4(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// _IsGrabbed = false;
		__this->____IsGrabbed_12 = (bool)0;
		// _ParentBow.Shoot(_Visualizer.PullPower);
		Bow_t55F8377E29992BEA74165C2B6686FFAD5A9684AB* L_5 = __this->____ParentBow_11;
		BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* L_6 = __this->____Visualizer_4;
		NullCheck(L_6);
		float L_7;
		L_7 = BowStringVisual_get_PullPower_m42B90B0F91B5DED8AF9931E1D5C039DA75FCD2A0(L_6, NULL);
		NullCheck(L_5);
		Bow_Shoot_mD89B63327B94D5E6103194C27C8173487CC1126D(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void BowString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowString__ctor_m7DDCCC56DFA82F3880FC4DD9A703D9A494F67DBD (BowString_t10E8322FC769EE983546761280797279041F8916* __this, const RuntimeMethod* method) 
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
// UnityEngine.Transform BowStringVisual::get_CenterPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BowStringVisual_get_CenterPoint_mD01ED0F72F11704DD125765D0C5A1C8BC0CE97F4 (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// public Transform CenterPoint { get { return _CenterPoint; } private set { } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____CenterPoint_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Transform CenterPoint { get { return _CenterPoint; } private set { } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		return L_1;
	}
}
// System.Void BowStringVisual::set_CenterPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowStringVisual_set_CenterPoint_m5937676F4738D04245CB1034FA2E1CAC0DED3398 (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform CenterPoint { get { return _CenterPoint; } private set { } }
		return;
	}
}
// UnityEngine.Transform BowStringVisual::get_PullPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* BowStringVisual_get_PullPoint_mE97ABC83CDA9D09FEB856DFEEE817E715C833974 (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// public Transform PullPoint{ get { return _PullPoint; } private set { } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____PullPoint_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Transform PullPoint{ get { return _PullPoint; } private set { } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		return L_1;
	}
}
// System.Void BowStringVisual::set_PullPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowStringVisual_set_PullPoint_mE02B70C6133F1AE4A8860E3386EA3044C355B160 (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform PullPoint{ get { return _PullPoint; } private set { } }
		return;
	}
}
// System.Single BowStringVisual::get_PullPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BowStringVisual_get_PullPower_m42B90B0F91B5DED8AF9931E1D5C039DA75FCD2A0 (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float PullPower { get { return _PullPower; } private set { } }
		float L_0 = __this->____PullPower_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float PullPower { get { return _PullPower; } private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void BowStringVisual::set_PullPower(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowStringVisual_set_PullPower_mF0F4F393C46D54358DB64097297382ED3B831CCF (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float PullPower { get { return _PullPower; } private set { } }
		return;
	}
}
// System.Void BowStringVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowStringVisual_Start_mF19B9E1D769DFA1BFA8EA61BB7497EDA89B4B6BC (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, const RuntimeMethod* method) 
{
	{
		// _EndPullPos = new Vector3(0f, 0f, _CenterPoint.localPosition.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____CenterPoint_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		float L_2 = L_1.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (0.0f), L_2, /*hidden argument*/NULL);
		__this->____EndPullPos_14 = L_3;
		// }
		return;
	}
}
// System.Void BowStringVisual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowStringVisual_Update_m6A1198D35659141B4251C6B5B1E6839ABDCDA278 (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// _StringPositions[0] = _UpperStringPoint.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->____StringPositions_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____UpperStringPoint_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_2);
		// _StringPositions[2] = _LowerStringPoint.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->____StringPositions_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____LowerStringPoint_7;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_5);
		// if (_PullPoint)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____PullPoint_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_00dc;
		}
	}
	{
		// Vector3 c_GlobalStartPos = _CenterPoint.TransformPoint(Vector3.zero);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->____CenterPoint_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_9, L_10, NULL);
		V_1 = L_11;
		// Vector3 c_GlobalEndPos = _CenterPoint.TransformPoint(new Vector3(0f, 0f, _PullPoint.localPosition.z));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->____CenterPoint_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->____PullPoint_5;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (0.0f), (0.0f), L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_12, L_16, NULL);
		V_2 = L_17;
		// _PullPower = _EndPullPos.z - _PullPoint.localPosition.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->____EndPullPos_14);
		float L_19 = L_18->___z_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->____PullPoint_5;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		float L_22 = L_21.___z_4;
		__this->____PullPower_11 = ((float)il2cpp_codegen_subtract(L_19, L_22));
		// _PullPower = Mathf.Clamp(_PullPower, 0f, 1f);
		float L_23 = __this->____PullPower_11;
		float L_24;
		L_24 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_23, (0.0f), (1.0f), NULL);
		__this->____PullPower_11 = L_24;
		// _StringPositions[1] = Vector3.Lerp(c_GlobalStartPos, c_GlobalEndPos, _PullPower * _PullMultiplier);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = __this->____StringPositions_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		float L_28 = __this->____PullPower_11;
		float L_29 = __this->____PullMultiplier_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_26, L_27, ((float)il2cpp_codegen_multiply(L_28, L_29)), NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_30);
	}

IL_00dc:
	{
		// if (_LineRenderer)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_31 = __this->____LineRenderer_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_31, NULL);
		V_3 = L_32;
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_00ff;
		}
	}
	{
		// _LineRenderer.SetPositions(_StringPositions);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_34 = __this->____LineRenderer_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35 = __this->____StringPositions_13;
		NullCheck(L_34);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_34, L_35, NULL);
	}

IL_00ff:
	{
		// }
		return;
	}
}
// System.Void BowStringVisual::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowStringVisual_OnValidate_m3715634C96191A3DBA5E890566B6B0E1A6542C54 (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_LineRenderer)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->____LineRenderer_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// _LineRenderer.SetPositions(_StringPositions);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->____LineRenderer_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = __this->____StringPositions_13;
		NullCheck(L_3);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_3, L_4, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void BowStringVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowStringVisual__ctor_m45716A72AD872FB03153632BF31AB6CB650346BE (BowStringVisual_tF11C999286819A8B6FBC8326E4C3BED76C00E3DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3[] _StringPositions = new Vector3[3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->____StringPositions_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____StringPositions_13), (void*)L_0);
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
// System.Single BowStringVisualizer::get_Normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BowStringVisualizer_get_Normalized_m686804E429EE918F856C55ECDEC77EF832EA2F12 (BowStringVisualizer_t7214C622E3DBF27B866F15B7F3706AFDFD129175* __this, const RuntimeMethod* method) 
{
	{
		// get => m_normalizedCharge;
		float L_0 = __this->___m_normalizedCharge_5;
		return L_0;
	}
}
// System.Void BowStringVisualizer::set_Normalized(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowStringVisualizer_set_Normalized_mE8544BDFD05F11950E34A42F5199B404F4FF3F0B (BowStringVisualizer_t7214C622E3DBF27B866F15B7F3706AFDFD129175* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_normalizedCharge = value; }
		float L_0 = ___value0;
		__this->___m_normalizedCharge_5 = L_0;
		// set { m_normalizedCharge = value; }
		return;
	}
}
// System.Void BowStringVisualizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowStringVisualizer_Update_m0874F66C327645F4137848196A96286FB7B4EB67 (BowStringVisualizer_t7214C622E3DBF27B866F15B7F3706AFDFD129175* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// _bowStringPoints[0] = m_upperStringPoint.transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->____bowStringPoints_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_upperStringPoint_7;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_3);
		// if (m_stringPointInput)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_stringPointInput_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0094;
		}
	}
	{
		// Vector3 _bowCenterString = Vector3.Lerp(_bowStringPoints[0], _bowStringPoints[2], 0.5f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = __this->____bowStringPoints_10;
		NullCheck(L_7);
		int32_t L_8 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = __this->____bowStringPoints_10;
		NullCheck(L_10);
		int32_t L_11 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_9, L_12, (0.5f), NULL);
		V_1 = L_13;
		// _bowStringPoints[1] = Vector3.Lerp(_bowCenterString, -(m_stringPointInput.forward * m_distanceToFullCharge) + transform.position, m_normalizedCharge);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = __this->____bowStringPoints_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___m_stringPointInput_6;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_16, NULL);
		float L_18 = __this->___m_distanceToFullCharge_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_22, NULL);
		float L_24 = __this->___m_normalizedCharge_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_15, L_23, L_24, NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
	}

IL_0094:
	{
		// _bowStringPoints[2] = m_lowerStringPoint.transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = __this->____bowStringPoints_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___m_lowerStringPoint_8;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_29);
		// if (m_trailRenderer)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_30 = __this->___m_trailRenderer_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_30, NULL);
		V_2 = L_31;
		bool L_32 = V_2;
		if (!L_32)
		{
			goto IL_00d1;
		}
	}
	{
		// m_trailRenderer.SetPositions(_bowStringPoints);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_33 = __this->___m_trailRenderer_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = __this->____bowStringPoints_10;
		NullCheck(L_33);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_33, L_34, NULL);
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Void BowStringVisualizer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowStringVisualizer_OnValidate_m9F201CE718A504F748190CA9EF74050F03DDF189 (BowStringVisualizer_t7214C622E3DBF27B866F15B7F3706AFDFD129175* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_trailRenderer == null)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___m_trailRenderer_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_0020;
	}

IL_0013:
	{
		// m_trailRenderer.positionCount = 3;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___m_trailRenderer_9;
		NullCheck(L_3);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_3, 3, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void BowStringVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BowStringVisualizer__ctor_m3DFCC6230929715826215E9F3426FF00D3116711 (BowStringVisualizer_t7214C622E3DBF27B866F15B7F3706AFDFD129175* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float m_distanceToFullCharge = 5f;
		__this->___m_distanceToFullCharge_4 = (5.0f);
		// [Range(0f, 1f)] [SerializeField] private float m_normalizedCharge = 0f;
		__this->___m_normalizedCharge_5 = (0.0f);
		// Vector3[] _bowStringPoints = new Vector3[3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->____bowStringPoints_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bowStringPoints_10), (void*)L_0);
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
// System.Void GrabPointBase::Detached(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPointBase_Detached_m5EC14C9F1FC9E1D03DDF9282B5B2138726C1FEFE (GrabPointBase_t08D2B6DD5F5886C02415B6E6233EFBD0EED8B622* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnDetachedEvent.Invoke(transform);
		UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9* L_0 = __this->___OnDetachedEvent_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9(L_0, L_1, UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9_RuntimeMethod_var);
		// _DetectionCollider.enabled = true;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = __this->____DetectionCollider_4;
		NullCheck(L_2);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_2, (bool)1, NULL);
		// _HandTransform = null;
		__this->____HandTransform_5 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____HandTransform_5), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// ResetPosition();
		GrabPointBase_ResetPosition_mE02BE093184CA034708C0A89A68AD7D5ECF3C2E7(__this, NULL);
		// }
		return;
	}
}
// System.Void GrabPointBase::Grabed(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPointBase_Grabed_mA55428BEB2AB6BFCAA5636D964D3E98A549659A2 (GrabPointBase_t08D2B6DD5F5886C02415B6E6233EFBD0EED8B622* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnGrabEvent.Invoke(transform);
		UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9* L_0 = __this->___OnGrabEvent_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9(L_0, L_1, UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9_RuntimeMethod_var);
		// _HandTransform = Hand.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___Hand0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		__this->____HandTransform_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____HandTransform_5), (void*)L_3);
		// _DetectionCollider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = __this->____DetectionCollider_4;
		NullCheck(L_4);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GrabPointBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPointBase_Start_mF5E8EDAED88C5810A236AFC79869FF8B9B9F9195 (GrabPointBase_t08D2B6DD5F5886C02415B6E6233EFBD0EED8B622* __this, const RuntimeMethod* method) 
{
	{
		// _LocalPosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->____LocalPosition_8 = L_1;
		// _LocalRotation = transform.localEulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_2, NULL);
		__this->____LocalRotation_9 = L_3;
		// }
		return;
	}
}
// System.Void GrabPointBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPointBase_Update_m5591AA90B2519584FA22D48127A58184DD6B8BB5 (GrabPointBase_t08D2B6DD5F5886C02415B6E6233EFBD0EED8B622* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_HandTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____HandTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// transform.position = _HandTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____HandTransform_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_5, NULL);
		// transform.rotation = _HandTransform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____HandTransform_5;
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_8, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void GrabPointBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPointBase_OnDisable_m2446973332C95410E8498647BFF320D9D135AFE6 (GrabPointBase_t08D2B6DD5F5886C02415B6E6233EFBD0EED8B622* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if(_DetectionCollider && _HandTransform != null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->____DetectionCollider_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____HandTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// Detached(_HandTransform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->____HandTransform_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		GrabPointBase_Detached_m5EC14C9F1FC9E1D03DDF9282B5B2138726C1FEFE(__this, L_6, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void GrabPointBase::ResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPointBase_ResetPosition_mE02BE093184CA034708C0A89A68AD7D5ECF3C2E7 (GrabPointBase_t08D2B6DD5F5886C02415B6E6233EFBD0EED8B622* __this, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = _LocalPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->____LocalPosition_8;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// transform.localEulerAngles = _LocalRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____LocalRotation_9;
		NullCheck(L_2);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void GrabPointBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPointBase__ctor_m986A9F7CC1022300C15947ABEF20F3CB23679C14 (GrabPointBase_t08D2B6DD5F5886C02415B6E6233EFBD0EED8B622* __this, const RuntimeMethod* method) 
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
// System.Void OneHandSword::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandSword_Start_m7BA90C3A3CA4809102ACA7842671B44D23D60C0A (OneHandSword_t1B648D7D2A2C2C2B6519309DD3854E14A443F785* __this, const RuntimeMethod* method) 
{
	{
		// p_ForwardCorrectionOffsets = _Offsets;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____Offsets_21;
		((WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF*)__this)->___p_ForwardCorrectionOffsets_16 = L_0;
		// }
		return;
	}
}
// System.Void OneHandSword::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandSword_Update_m8368A2EDFFE4B696DD0948D2A89ACD2CA5FD8E5B (OneHandSword_t1B648D7D2A2C2C2B6519309DD3854E14A443F785* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// WeaponMovement();
		WeaponBase_WeaponMovement_mA8FC5C374B159D7AC57422A9CF9E97A1C12CE70B(__this, NULL);
		// if (CalculateSwingSpeed())
		bool L_0;
		L_0 = OneHandSword_CalculateSwingSpeed_m0D59D7754C2380D17D37F3A72EC28F5DE25EED18(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// _BladeCollider.enabled = true;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = __this->____BladeCollider_20;
		NullCheck(L_2);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_2, (bool)1, NULL);
		goto IL_002e;
	}

IL_0021:
	{
		// _BladeCollider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = __this->____BladeCollider_20;
		NullCheck(L_3);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_3, (bool)0, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Boolean OneHandSword::CalculateSwingSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneHandSword_CalculateSwingSpeed_m0D59D7754C2380D17D37F3A72EC28F5DE25EED18 (OneHandSword_t1B648D7D2A2C2C2B6519309DD3854E14A443F785* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// SwingSpeed = ((transform.position - _PreviosPos).magnitude / Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____PreviosPos_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_1 = L_3;
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)(L_4/L_5));
		// _PreviosPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->____PreviosPos_22 = L_7;
		// Debug.Log(SwingSpeed);
		float L_8 = V_0;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// return SwingSpeed > _MinimalSwingSpeed;
		float L_11 = V_0;
		float L_12 = __this->____MinimalSwingSpeed_17;
		V_2 = (bool)((((float)L_11) > ((float)L_12))? 1 : 0);
		goto IL_004f;
	}

IL_004f:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Void OneHandSword::HitEnemy(IDamageable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandSword_HitEnemy_m87D44943087E69F96B5B961408C665F6A94242B6 (OneHandSword_t1B648D7D2A2C2C2B6519309DD3854E14A443F785* __this, RuntimeObject* ___Target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Target.DoDamage(Stats.Damage, Stats.Piercing);
		RuntimeObject* L_0 = ___Target0;
		WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* L_1;
		L_1 = WeaponBase_get_Stats_m81BB8D6CACDA4715B599E0FAF863C002A59F4FC1(__this, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = WeaponStats_get_Damage_mA2DC2F86ECB89F3B1592B9827EFFBB5B551EFF44(L_1, NULL);
		WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* L_3;
		L_3 = WeaponBase_get_Stats_m81BB8D6CACDA4715B599E0FAF863C002A59F4FC1(__this, NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = WeaponStats_get_Piercing_m2DCEDDE241FBEEA658545C7C7151B0293ED11609(L_3, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< float, float >::Invoke(0 /* System.Void IDamageable::DoDamage(System.Single,System.Single) */, IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_il2cpp_TypeInfo_var, L_0, L_2, L_4);
		// Debug.Log("Hit");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C, NULL);
		// }
		return;
	}
}
// System.Void OneHandSword::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandSword__ctor_m730247ABF57BAD125E14BCA5F414DF6CF0C15117 (OneHandSword_t1B648D7D2A2C2C2B6519309DD3854E14A443F785* __this, const RuntimeMethod* method) 
{
	{
		WeaponBase__ctor_m46595B1F5C67EE1D36785E1D3AA83C00ADD83FC1(__this, NULL);
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
// System.Void Projectile::AssignParameter(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_AssignParameter_m35F227340B743FA8568C5FDFD1208ADE5D602ED5 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, float ___InitVelocity0, float ___InitHeight1, float ___LaunchAngle2, const RuntimeMethod* method) 
{
	{
		// _InitVelocity = InitVelocity;
		float L_0 = ___InitVelocity0;
		__this->____InitVelocity_5 = L_0;
		// _InitHeight = InitHeight;
		float L_1 = ___InitHeight1;
		__this->____InitHeight_11 = L_1;
		// _LaunchAngle = LaunchAngle;
		float L_2 = ___LaunchAngle2;
		__this->____LaunchAngle_6 = L_2;
		// }
		return;
	}
}
// System.Void Projectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Start_mDA0F36DCD80DFB09774528622CEC598CA5B718F5 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _ProjectileStabilizer.rotation = Quaternion.Euler(transform.rotation.eulerAngles + Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____ProjectileStabilizer_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_5, NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_6, NULL);
		// _InitHeight = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		__this->____InitHeight_11 = L_9;
		// }
		return;
	}
}
// System.Void Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m6E056CDE2DC25EDBA5DA3F4D9B9B9A69EC656737 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B3_0 = 0;
	{
		// t += Time.deltaTime;
		float L_0 = __this->___t_12;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___t_12 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (!_Hit && transform.position.y >= 0f)
		bool L_2 = __this->____Hit_10;
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		G_B3_0 = ((((int32_t)((!(((float)L_5) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_00fe;
		}
	}
	{
		// float Vx = _InitVelocity * Mathf.Cos(_LaunchAngle * Mathf.Deg2Rad);
		float L_7 = __this->____InitVelocity_5;
		float L_8 = __this->____LaunchAngle_6;
		float L_9;
		L_9 = cosf(((float)il2cpp_codegen_multiply(L_8, (0.0174532924f))));
		V_1 = ((float)il2cpp_codegen_multiply(L_7, L_9));
		// float Vy = _InitVelocity * Mathf.Sin(_LaunchAngle * Mathf.Deg2Rad);
		float L_10 = __this->____InitVelocity_5;
		float L_11 = __this->____LaunchAngle_6;
		float L_12;
		L_12 = sinf(((float)il2cpp_codegen_multiply(L_11, (0.0174532924f))));
		V_2 = ((float)il2cpp_codegen_multiply(L_10, L_12));
		// float X = Vx * t;
		float L_13 = V_1;
		float L_14 = __this->___t_12;
		V_3 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		// float Y = Vy * t - (0.5f * -Physics.gravity.y * Mathf.Pow(t, 2f));
		float L_15 = V_2;
		float L_16 = __this->___t_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_18 = L_17.___y_3;
		float L_19 = __this->___t_12;
		float L_20;
		L_20 = powf(L_19, (2.0f));
		V_4 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_15, L_16)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.5f), ((-L_18)))), L_20))));
		// Vector3 c_LocalPosition = new Vector3(0, Y, X);
		float L_21 = V_4;
		float L_22 = V_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), (0.0f), L_21, L_22, NULL);
		// Vector3 c_GlobalPosition = _ProjectileStabilizer.TransformPoint(c_LocalPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->____ProjectileStabilizer_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_5;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_23, L_24, NULL);
		V_6 = L_25;
		// Vector3 c_Velocity = c_GlobalPosition - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_28, NULL);
		V_7 = L_29;
		// transform.rotation = Quaternion.LookRotation(c_Velocity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_31, NULL);
		NullCheck(L_30);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_30, L_32, NULL);
		// transform.position = c_GlobalPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_6;
		NullCheck(L_33);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_33, L_34, NULL);
		goto IL_010d;
	}

IL_00fe:
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Projectile::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnTriggerEnter_m2A2C38AF62C6E28ADE0098CD9BB3390C8712C20D (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// _Hit = true;
		__this->____Hit_10 = (bool)1;
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m9CB69FCF9C97712F4578D9686861E9694A270A58 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) 
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
// System.String WeaponStats::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WeaponStats_get_Name_m1A80B427E5F41A45167BA03B2B3C221478FD2901 (WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string Name { get { return _Name; } private set { } }
		String_t* L_0 = __this->____Name_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string Name { get { return _Name; } private set { } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void WeaponStats::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponStats_set_Name_m475C0345958FF346D6F018B086AE4D9F9FF238D7 (WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get { return _Name; } private set { } }
		return;
	}
}
// System.Single WeaponStats::get_Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WeaponStats_get_Damage_mA2DC2F86ECB89F3B1592B9827EFFBB5B551EFF44 (WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Damage { get { return _Damage;} private set { } }
		float L_0 = __this->____Damage_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Damage { get { return _Damage;} private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void WeaponStats::set_Damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponStats_set_Damage_mDB642AC0D74CF14A3BEC39E6666B7230C5AEB3AA (WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Damage { get { return _Damage;} private set { } }
		return;
	}
}
// System.Single WeaponStats::get_Piercing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WeaponStats_get_Piercing_m2DCEDDE241FBEEA658545C7C7151B0293ED11609 (WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Piercing { get { return _Piercing;} private set { } }
		float L_0 = __this->____Piercing_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Piercing { get { return _Piercing;} private set { } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void WeaponStats::set_Piercing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponStats_set_Piercing_mFC814A88BBCB82194B82DBF2154C0AAE05E42570 (WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Piercing { get { return _Piercing;} private set { } }
		return;
	}
}
// System.Void WeaponStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponStats__ctor_mDDA8F8EDF528DF491F99112D1201225C613CBDA2 (WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* __this, const RuntimeMethod* method) 
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
// System.Boolean SwordBladeBase::get_CanHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SwordBladeBase_get_CanHit_m0AD28FEDD640A927AA562AB3C8D2847DD4F5A080 (SwordBladeBase_t7A045890A2EAE3B82A8DC23218F9EE0E2792C742* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool CanHit { get { return _CanHit; } private set { } }
		bool L_0 = __this->____CanHit_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool CanHit { get { return _CanHit; } private set { } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SwordBladeBase::set_CanHit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwordBladeBase_set_CanHit_mFEE1B6565B3B0D5ECBA090401A02753310AA61D6 (SwordBladeBase_t7A045890A2EAE3B82A8DC23218F9EE0E2792C742* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CanHit { get { return _CanHit; } private set { } }
		return;
	}
}
// System.Void SwordBladeBase::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwordBladeBase_OnTriggerEnter_m981686965A0D01FC5706A65576B6859E78C5D470 (SwordBladeBase_t7A045890A2EAE3B82A8DC23218F9EE0E2792C742* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA6F86D16F01075DD6D5DA7783449DEB8BCF305ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (!_CanHit)
		bool L_0 = __this->____CanHit_8;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_00be;
	}

IL_0013:
	{
		// if (other.transform.parent != null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_007e;
		}
	}
	{
		// if (other.transform.parent.GetComponent<IDamageable>() != null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___other0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4(L_9, Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4_RuntimeMethod_var);
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		// _OnHitEvent.Invoke(other.transform.parent.GetComponent<IDamageable>());
		UnityEvent_1_tBD0229E621FEE1B9E09D34031C141A547EA8BABF* L_12 = __this->____OnHitEvent_5;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13 = ___other0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_14, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4(L_15, Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4_RuntimeMethod_var);
		NullCheck(L_12);
		UnityEvent_1_Invoke_mA6F86D16F01075DD6D5DA7783449DEB8BCF305ED(L_12, L_16, UnityEvent_1_Invoke_mA6F86D16F01075DD6D5DA7783449DEB8BCF305ED_RuntimeMethod_var);
		// _Material.material.color = Color.green;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_17 = __this->____Material_6;
		NullCheck(L_17);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18;
		L_18 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_17, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_18);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_18, L_19, NULL);
		// _CanHit = false;
		__this->____CanHit_8 = (bool)0;
	}

IL_007b:
	{
		goto IL_00be;
	}

IL_007e:
	{
		// if (other.GetComponent<IDamageable>() != null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_20 = ___other0;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4(L_20, Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4_RuntimeMethod_var);
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_00bd;
		}
	}
	{
		// _OnHitEvent.Invoke(other.GetComponent<IDamageable>());
		UnityEvent_1_tBD0229E621FEE1B9E09D34031C141A547EA8BABF* L_23 = __this->____OnHitEvent_5;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_24 = ___other0;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4(L_24, Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4_RuntimeMethod_var);
		NullCheck(L_23);
		UnityEvent_1_Invoke_mA6F86D16F01075DD6D5DA7783449DEB8BCF305ED(L_23, L_25, UnityEvent_1_Invoke_mA6F86D16F01075DD6D5DA7783449DEB8BCF305ED_RuntimeMethod_var);
		// _Material.material.color = Color.green;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_26 = __this->____Material_6;
		NullCheck(L_26);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27;
		L_27 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_26, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_27);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_27, L_28, NULL);
		// _CanHit = false;
		__this->____CanHit_8 = (bool)0;
	}

IL_00bd:
	{
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void SwordBladeBase::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwordBladeBase_OnTriggerExit_m03E234769C82033588A130D7CA2FD8F6529744EA (SwordBladeBase_t7A045890A2EAE3B82A8DC23218F9EE0E2792C742* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Out");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44, NULL);
		// _Material.material.color = Color.red;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____Material_6;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_1, L_2, NULL);
		// _CanHit = true;
		__this->____CanHit_8 = (bool)1;
		// }
		return;
	}
}
// System.Void SwordBladeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwordBladeBase__ctor_m057830621205F3EEF94D2D2972C0419F7166CF49 (SwordBladeBase_t7A045890A2EAE3B82A8DC23218F9EE0E2792C742* __this, const RuntimeMethod* method) 
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
// System.Void TwoHandedWeapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandedWeapon__ctor_mF6DF4B41863092AA135F93AC9840B7EEC900F78D (TwoHandedWeapon_tA2EDE285CA7D9229E8D26353F34330CCA6663CE1* __this, const RuntimeMethod* method) 
{
	{
		WeaponBase__ctor_m46595B1F5C67EE1D36785E1D3AA83C00ADD83FC1(__this, NULL);
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
// WeaponStats WeaponBase::get_Stats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* WeaponBase_get_Stats_m81BB8D6CACDA4715B599E0FAF863C002A59F4FC1 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) 
{
	WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* V_0 = NULL;
	{
		// public WeaponStats Stats { get { return _Stats; }private set { } }
		WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* L_0 = __this->____Stats_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public WeaponStats Stats { get { return _Stats; }private set { } }
		WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* L_1 = V_0;
		return L_1;
	}
}
// System.Void WeaponBase::set_Stats(WeaponStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase_set_Stats_m8B040496724E50411C024FD02BD898B268BF1437 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, WeaponStats_tDA046FC9E848B087FD95340FAEFFEAD46DA9493E* ___value0, const RuntimeMethod* method) 
{
	{
		// public WeaponStats Stats { get { return _Stats; }private set { } }
		return;
	}
}
// UnityEngine.Transform WeaponBase::get_PrimaryGrabPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* WeaponBase_get_PrimaryGrabPoint_mF49FADF1B1359159FA0F4D8EC98389CC06969BDD (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// public Transform PrimaryGrabPoint { get { return _PrimaryGrabPoint; } private set { } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____PrimaryGrabPoint_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Transform PrimaryGrabPoint { get { return _PrimaryGrabPoint; } private set { } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		return L_1;
	}
}
// System.Void WeaponBase::set_PrimaryGrabPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase_set_PrimaryGrabPoint_m1711667C75C8A24302F03492AE5C328FC5B0B00C (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform PrimaryGrabPoint { get { return _PrimaryGrabPoint; } private set { } }
		return;
	}
}
// UnityEngine.Transform WeaponBase::get_SecondaryGrabPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* WeaponBase_get_SecondaryGrabPoint_m64AB1A561D7F759ECDF52DBBD5629DB55C1E528C (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// public Transform SecondaryGrabPoint { get { return _SecondaryGrabPoint; } private set { } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____SecondaryGrabPoint_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public Transform SecondaryGrabPoint { get { return _SecondaryGrabPoint; } private set { } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		return L_1;
	}
}
// System.Void WeaponBase::set_SecondaryGrabPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase_set_SecondaryGrabPoint_m39F871CCF2DFD608CF55122CAFC1689581A3E2CE (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform SecondaryGrabPoint { get { return _SecondaryGrabPoint; } private set { } }
		return;
	}
}
// SkillBase WeaponBase::get_Skill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* WeaponBase_get_Skill_mC80F8ED36908DE1A8F38E4A7D956BB0DF61D8A3E (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) 
{
	SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* V_0 = NULL;
	{
		// public SkillBase Skill { get { return _Skill; } private set { } }
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_0 = __this->____Skill_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public SkillBase Skill { get { return _Skill; } private set { } }
		SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* L_1 = V_0;
		return L_1;
	}
}
// System.Void WeaponBase::set_Skill(SkillBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase_set_Skill_mB9995985FB3573A48ED11DF955EA2473783D3139 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, SkillBase_t7DC05063A49BC08C045925ED4C5B31F77569F3F1* ___value0, const RuntimeMethod* method) 
{
	{
		// public SkillBase Skill { get { return _Skill; } private set { } }
		return;
	}
}
// SkillManager WeaponBase::get_SkillManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* WeaponBase_get_SkillManager_m73A7186203B78899643A7D0EB883A0FD4B958C20 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) 
{
	SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* V_0 = NULL;
	{
		// public SkillManager SkillManager { get { return _SkillManager; } private set { } }
		SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* L_0 = __this->____SkillManager_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public SkillManager SkillManager { get { return _SkillManager; } private set { } }
		SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* L_1 = V_0;
		return L_1;
	}
}
// System.Void WeaponBase::set_SkillManager(SkillManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase_set_SkillManager_m078EEA36FECC83E9E6B46C872EDB248456619901 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, SkillManager_t169D5CD29B9246147AE40F0B80B2E5128CD90B56* ___value0, const RuntimeMethod* method) 
{
	{
		// public SkillManager SkillManager { get { return _SkillManager; } private set { } }
		return;
	}
}
// System.Void WeaponBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase_Update_mD4AEF58FABD0E6CCA3DC6CE842758AF207080CBF (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) 
{
	{
		// WeaponMovement();
		WeaponBase_WeaponMovement_mA8FC5C374B159D7AC57422A9CF9E97A1C12CE70B(__this, NULL);
		// }
		return;
	}
}
// System.Void WeaponBase::WeaponMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase_WeaponMovement_mA8FC5C374B159D7AC57422A9CF9E97A1C12CE70B (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!_PrimaryGrabbed)
		bool L_0 = __this->____PrimaryGrabbed_14;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_00bf;
	}

IL_0013:
	{
		// transform.position = _PrimaryGrabPoint.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____PrimaryGrabPoint_9;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_4, NULL);
		// if (_ForwardCorrection)
		bool L_5 = __this->____ForwardCorrection_8;
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0066;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(_PrimaryGrabPoint.rotation.eulerAngles + p_ForwardCorrectionOffsets);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->____PrimaryGrabPoint_9;
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		V_2 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___p_ForwardCorrectionOffsets_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_12, NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_13, NULL);
		// return;
		goto IL_00bf;
	}

IL_0066:
	{
		// if (!IsTwoHanded() || !IsBothHand())
		bool L_14;
		L_14 = WeaponBase_IsTwoHanded_m0F7BBBD235F7F16D9C203B95F2DCE2698A398107(__this, NULL);
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		bool L_15;
		L_15 = WeaponBase_IsBothHand_m8447F560ED5B8C771BF67F3A129B62335C768463(__this, NULL);
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_007a;
	}

IL_0079:
	{
		G_B7_0 = 1;
	}

IL_007a:
	{
		V_3 = (bool)G_B7_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0098;
		}
	}
	{
		// transform.rotation = _PrimaryGrabPoint.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->____PrimaryGrabPoint_9;
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		NullCheck(L_17);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_17, L_19, NULL);
		// return;
		goto IL_00bf;
	}

IL_0098:
	{
		// transform.up = (_PrimaryGrabPoint.position - _SecondaryGrabPoint.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->____PrimaryGrabPoint_9;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->____SecondaryGrabPoint_10;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_22, L_24, NULL);
		NullCheck(L_20);
		Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554(L_20, L_25, NULL);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void WeaponBase::OnGrabbed(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase_OnGrabbed_mD01F66E1E27DD09EB92D6D4EB44E086CA5AF7CD0 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___GrabTransform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!IsBothHand())
		bool L_0;
		L_0 = WeaponBase_IsBothHand_m8447F560ED5B8C771BF67F3A129B62335C768463(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// _PrimaryGrabbed = true;
		__this->____PrimaryGrabbed_14 = (bool)1;
		// return;
		goto IL_004b;
	}

IL_0018:
	{
		// if (GrabTransform != _PrimaryGrabPoint)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___GrabTransform0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____PrimaryGrabPoint_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// _SecondaryGrabbed = true;
		__this->____SecondaryGrabbed_15 = (bool)1;
		// return;
		goto IL_004b;
	}

IL_0032:
	{
		// _PrimaryGrabbed = true;
		__this->____PrimaryGrabbed_14 = (bool)1;
		// _SecondaryGrabPoint.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____SecondaryGrabPoint_10;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void WeaponBase::OnDetached(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase_OnDetached_m187BFBE6F5A1F91F332420A9937DF9400CAF9754 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___GrabTransform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!IsBothHand())
		bool L_0;
		L_0 = WeaponBase_IsBothHand_m8447F560ED5B8C771BF67F3A129B62335C768463(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// _PrimaryGrabbed = false;
		__this->____PrimaryGrabbed_14 = (bool)0;
		// return;
		goto IL_004b;
	}

IL_0018:
	{
		// if (GrabTransform != _PrimaryGrabPoint)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___GrabTransform0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____PrimaryGrabPoint_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// _SecondaryGrabbed = false;
		__this->____SecondaryGrabbed_15 = (bool)0;
		// return;
		goto IL_004b;
	}

IL_0032:
	{
		// _PrimaryGrabbed = false;
		__this->____PrimaryGrabbed_14 = (bool)0;
		// _SecondaryGrabPoint.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____SecondaryGrabPoint_10;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Boolean WeaponBase::IsBothHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeaponBase_IsBothHand_m8447F560ED5B8C771BF67F3A129B62335C768463 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	{
		// switch (_WeaponType)
		int32_t L_0 = __this->____WeaponType_7;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_004a;
			}
			case 4:
			{
				goto IL_0068;
			}
			case 5:
			{
				goto IL_0086;
			}
		}
	}
	{
		goto IL_0088;
	}

IL_002a:
	{
		// break;
		goto IL_008a;
	}

IL_002c:
	{
		// break;
		goto IL_008a;
	}

IL_002e:
	{
		// if (_PrimaryGrabbed && _SecondaryGrabbed)
		bool L_3 = __this->____PrimaryGrabbed_14;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = __this->____SecondaryGrabbed_15;
		G_B7_0 = ((int32_t)(L_4));
		goto IL_003f;
	}

IL_003e:
	{
		G_B7_0 = 0;
	}

IL_003f:
	{
		V_2 = (bool)G_B7_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_008e;
	}

IL_0048:
	{
		// break;
		goto IL_008a;
	}

IL_004a:
	{
		// if (_PrimaryGrabbed && _SecondaryGrabbed)
		bool L_6 = __this->____PrimaryGrabbed_14;
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		bool L_7 = __this->____SecondaryGrabbed_15;
		G_B13_0 = ((int32_t)(L_7));
		goto IL_005b;
	}

IL_005a:
	{
		G_B13_0 = 0;
	}

IL_005b:
	{
		V_4 = (bool)G_B13_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_008e;
	}

IL_0066:
	{
		// break;
		goto IL_008a;
	}

IL_0068:
	{
		// if (_PrimaryGrabbed && _SecondaryGrabbed)
		bool L_9 = __this->____PrimaryGrabbed_14;
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		bool L_10 = __this->____SecondaryGrabbed_15;
		G_B19_0 = ((int32_t)(L_10));
		goto IL_0079;
	}

IL_0078:
	{
		G_B19_0 = 0;
	}

IL_0079:
	{
		V_5 = (bool)G_B19_0;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0084;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_008e;
	}

IL_0084:
	{
		// break;
		goto IL_008a;
	}

IL_0086:
	{
		// break;
		goto IL_008a;
	}

IL_0088:
	{
		// break;
		goto IL_008a;
	}

IL_008a:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_008e;
	}

IL_008e:
	{
		// }
		bool L_12 = V_3;
		return L_12;
	}
}
// System.Boolean WeaponBase::IsTwoHanded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeaponBase_IsTwoHanded_m0F7BBBD235F7F16D9C203B95F2DCE2698A398107 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (_WeaponType)
		int32_t L_0 = __this->____WeaponType_7;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0034;
			}
			case 4:
			{
				goto IL_0038;
			}
			case 5:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_003e;
	}

IL_002a:
	{
		// break;
		goto IL_0040;
	}

IL_002c:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0044;
	}

IL_0030:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0044;
	}

IL_0034:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0044;
	}

IL_0038:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0044;
	}

IL_003c:
	{
		// break;
		goto IL_0040;
	}

IL_003e:
	{
		// break;
		goto IL_0040;
	}

IL_0040:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		bool L_3 = V_2;
		return L_3;
	}
}
// System.Void WeaponBase::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase_OnDrawGizmos_m87A784FDB388ADDB7563AE8F21DEC37980B41ACF (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.DrawLine(transform.position, transform.position + transform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_5, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_1, L_6, NULL);
		// Gizmos.DrawLine(transform.position, transform.position + transform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_12, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_8, L_13, NULL);
		// }
		return;
	}
}
// System.Void WeaponBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBase__ctor_m46595B1F5C67EE1D36785E1D3AA83C00ADD83FC1 (WeaponBase_t50BF41D6C5B102C647BBC2222B762DCD2D8C4AEF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
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
