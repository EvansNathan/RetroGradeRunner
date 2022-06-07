#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<UnityEngine.MeshRenderer>
struct List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// AnimateBG
struct AnimateBG_t7D28D421CCC8165F9D79988F0F0B2A0D273A3DD7;
// AnimateCarts
struct AnimateCarts_tF4D090BD357EA0B3A8CE0D9DED648859F552C8FA;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// BlockDropper
struct BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3;
// BlockGenerator
struct BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF;
// BlockMovement
struct BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// Buttons
struct Buttons_t56DF91E0BC6E1237717461D2564AFA4C911F1F24;
// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8;
// CannonEnemy
struct CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Cart
struct Cart_t4DCC493717102D6D81CA7483B7D045489560C478;
// CartTitle
struct CartTitle_tE8149E02CDDA473AB770FCDF8420E06528AF5FA3;
// Cartridge
struct Cartridge_tB98B8D15AF4F7DC0BE75CF7969DE9EDC5AAE41A4;
// CheckPoint
struct CheckPoint_t6251F27E314260C898127FBE3ABD3E1C75DF62E6;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913;
// CoinScript
struct CoinScript_t24045994219ED374086B1AB4C9E33A6846E3FDC1;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Flag
struct Flag_tE44A4F9BED0C00A7FCA97BEAB2D31A9823BA9E5B;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameState
struct GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MusicManager
struct MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D;
// NextBlock
struct NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OnlyVisibleInEditor
struct OnlyVisibleInEditor_tEFBF6A12B7CF1000EE84DC24F674660FF28AFFF2;
// Parallax
struct Parallax_t98398A197751A44EE1A4B082AB50A668D671803C;
// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791;
// Persistence
struct Persistence_tE974BC5B9001311BC8D0342175BEC7C19272365C;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D;
// Projectiles
struct Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIMgr
struct UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// animateCart
struct animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C;
// blueanimation
struct blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E;
// titleanimateup
struct titleanimateup_tFA792ACB564B47B0B99F5797BD7C6CE27B58BA0E;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PlayerMovement/<walkSound>d__26
struct U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F;

IL2CPP_EXTERN_C RuntimeClass* BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral12B926A087EEBD03A0161A5A13D999AD9CF8AA48;
IL2CPP_EXTERN_C String_t* _stringLiteral21325B9DA8EC6BBD2E72530D8AA7C39082628D3B;
IL2CPP_EXTERN_C String_t* _stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B;
IL2CPP_EXTERN_C String_t* _stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral44303132766F332C2908B2D726FA64E93BD3A2C2;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795;
IL2CPP_EXTERN_C String_t* _stringLiteral6CD3DC9FEC81CCCBAE63099636E2C5FD07B10E5B;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC;
IL2CPP_EXTERN_C String_t* _stringLiteral9ADD7BEBEC01D195CDCE985A1242600479A25B65;
IL2CPP_EXTERN_C String_t* _stringLiteralA69586E2F8DD8B6019A1FACA4597D98920E154CB;
IL2CPP_EXTERN_C String_t* _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36;
IL2CPP_EXTERN_C String_t* _stringLiteralA8FF7C8BB0A611E97790C867C9FCE2086115E06B;
IL2CPP_EXTERN_C String_t* _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D;
IL2CPP_EXTERN_C String_t* _stringLiteralB79FF74147B098AF09D21FD6E3DFC0DE0D916E77;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC6B06CB7CFCB80131EEF3641393079B1A4AFBC07;
IL2CPP_EXTERN_C String_t* _stringLiteralC6E8B73FD8D61BC747E6E7555278BD8EB05376BA;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDE09CC9692AF907FEBF23C900BE6757E82AB291A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m02F38505F2D5D9CA7C5AD4571B76E4FC2BA53614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m684FF88B6F63B826B47748A806A25A387576758E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCart_t4DCC493717102D6D81CA7483B7D045489560C478_m2CB7117826AE5C92E249D1116F5991A7973B636F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22_m7040C6F55BE19D0C22A8901C81092389F31BC62C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisanimateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C_m5604500A61C08CCD8D3942DB8CB0B467442E85FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBACE2CB1A0816F15964A916E9051C544E711037E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mDDF01F8F9E564442E0105C00DCE2488DF9B1718B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m0C79E0AE5D4405AEAFE9B400881F0D3B5F4FFAAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mE8E4144715BD5BDB77169E4CF013D79D66F36861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwalkSoundU3Ed__26_System_Collections_IEnumerator_Reset_m11258980194B8DF4CC3E79986458208C8D3417D7_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____items_1)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.MeshRenderer>
struct List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D, ____items_1)); }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* get__items_1() const { return ____items_1; }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D_StaticFields, ____emptyArray_5)); }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshRendererU5BU5D_t535468079DEF88AD38546DC5D04E9102C401D228* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____array_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__array_0() const { return ____array_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// PlayerMovement/<walkSound>d__26
struct U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F  : public RuntimeObject
{
public:
	// System.Int32 PlayerMovement/<walkSound>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerMovement/<walkSound>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerMovement PlayerMovement/<walkSound>d__26::<>4__this
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F, ___U3CU3E4__this_2)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
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

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B 
{
public:
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Array_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_Array_0() const { return ___m_Array_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// TMPro.ColorMode
struct ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// TMPro.Extents
struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RigidbodyConstraints2D
struct RigidbodyConstraints2D_t9B0EF89A1549D1EB17CADD272F004676C01F5437 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints2D_t9B0EF89A1549D1EB17CADD272F004676C01F5437, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RigidbodyType2D
struct RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
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

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
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
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_27)); }
	inline float get_fontScaleMultiplier_27() const { return ___fontScaleMultiplier_27; }
	inline float* get_address_of_fontScaleMultiplier_27() { return &___fontScaleMultiplier_27; }
	inline void set_fontScaleMultiplier_27(float value)
	{
		___fontScaleMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_28)); }
	inline float get_currentFontSize_28() const { return ___currentFontSize_28; }
	inline float* get_address_of_currentFontSize_28() { return &___currentFontSize_28; }
	inline void set_currentFontSize_28(float value)
	{
		___currentFontSize_28 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_29)); }
	inline float get_baselineOffset_29() const { return ___baselineOffset_29; }
	inline float* get_address_of_baselineOffset_29() { return &___baselineOffset_29; }
	inline void set_baselineOffset_29(float value)
	{
		___baselineOffset_29 = value;
	}

	inline static int32_t get_offset_of_lineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_30)); }
	inline float get_lineOffset_30() const { return ___lineOffset_30; }
	inline float* get_address_of_lineOffset_30() { return &___lineOffset_30; }
	inline void set_lineOffset_30(float value)
	{
		___lineOffset_30 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_31)); }
	inline bool get_isDrivenLineSpacing_31() const { return ___isDrivenLineSpacing_31; }
	inline bool* get_address_of_isDrivenLineSpacing_31() { return &___isDrivenLineSpacing_31; }
	inline void set_isDrivenLineSpacing_31(bool value)
	{
		___isDrivenLineSpacing_31 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_32)); }
	inline float get_glyphHorizontalAdvanceAdjustment_32() const { return ___glyphHorizontalAdvanceAdjustment_32; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_32() { return &___glyphHorizontalAdvanceAdjustment_32; }
	inline void set_glyphHorizontalAdvanceAdjustment_32(float value)
	{
		___glyphHorizontalAdvanceAdjustment_32 = value;
	}

	inline static int32_t get_offset_of_cSpace_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_33)); }
	inline float get_cSpace_33() const { return ___cSpace_33; }
	inline float* get_address_of_cSpace_33() { return &___cSpace_33; }
	inline void set_cSpace_33(float value)
	{
		___cSpace_33 = value;
	}

	inline static int32_t get_offset_of_mSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_34)); }
	inline float get_mSpace_34() const { return ___mSpace_34; }
	inline float* get_address_of_mSpace_34() { return &___mSpace_34; }
	inline void set_mSpace_34(float value)
	{
		___mSpace_34 = value;
	}

	inline static int32_t get_offset_of_textInfo_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_35)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_35() const { return ___textInfo_35; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_35() { return &___textInfo_35; }
	inline void set_textInfo_35(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_35), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_36)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_36() const { return ___lineInfo_36; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_36() { return &___lineInfo_36; }
	inline void set_lineInfo_36(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_36 = value;
	}

	inline static int32_t get_offset_of_vertexColor_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_37() const { return ___vertexColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_37() { return &___vertexColor_37; }
	inline void set_vertexColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_37 = value;
	}

	inline static int32_t get_offset_of_underlineColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_38() const { return ___underlineColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_38() { return &___underlineColor_38; }
	inline void set_underlineColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_38 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_39() const { return ___strikethroughColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_39() { return &___strikethroughColor_39; }
	inline void set_strikethroughColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_39 = value;
	}

	inline static int32_t get_offset_of_highlightColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_40() const { return ___highlightColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_40() { return &___highlightColor_40; }
	inline void set_highlightColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_40 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_41)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_41() const { return ___basicStyleStack_41; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_41() { return &___basicStyleStack_41; }
	inline void set_basicStyleStack_41(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_41 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_42)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_42() const { return ___italicAngleStack_42; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_42() { return &___italicAngleStack_42; }
	inline void set_italicAngleStack_42(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_42))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_43)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_43() const { return ___colorStack_43; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_43() { return &___colorStack_43; }
	inline void set_colorStack_43(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_44() const { return ___underlineColorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_44() { return &___underlineColorStack_44; }
	inline void set_underlineColorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_45() const { return ___strikethroughColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_45() { return &___strikethroughColorStack_45; }
	inline void set_strikethroughColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_46() const { return ___highlightColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_46() { return &___highlightColorStack_46; }
	inline void set_highlightColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_47)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_47() const { return ___highlightStateStack_47; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_47() { return &___highlightStateStack_47; }
	inline void set_highlightStateStack_47(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_48)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_48() const { return ___colorGradientStack_48; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_48() { return &___colorGradientStack_48; }
	inline void set_colorGradientStack_48(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_49)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_49() const { return ___sizeStack_49; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_49() { return &___sizeStack_49; }
	inline void set_sizeStack_49(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_49))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_50() const { return ___indentStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_50() { return &___indentStack_50; }
	inline void set_indentStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_51)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_51() const { return ___fontWeightStack_51; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_51() { return &___fontWeightStack_51; }
	inline void set_fontWeightStack_51(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_52)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_52() const { return ___styleStack_52; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_52() { return &___styleStack_52; }
	inline void set_styleStack_52(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_53)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_53() const { return ___baselineStack_53; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_53() { return &___baselineStack_53; }
	inline void set_baselineStack_53(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_54)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_54() const { return ___actionStack_54; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_54() { return &___actionStack_54; }
	inline void set_actionStack_54(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_55)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_55() const { return ___materialReferenceStack_55; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_55() { return &___materialReferenceStack_55; }
	inline void set_materialReferenceStack_55(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_56)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_56() const { return ___lineJustificationStack_56; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_56() { return &___lineJustificationStack_56; }
	inline void set_lineJustificationStack_56(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_57)); }
	inline int32_t get_spriteAnimationID_57() const { return ___spriteAnimationID_57; }
	inline int32_t* get_address_of_spriteAnimationID_57() { return &___spriteAnimationID_57; }
	inline void set_spriteAnimationID_57(int32_t value)
	{
		___spriteAnimationID_57 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_58)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_58() const { return ___currentFontAsset_58; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_58() { return &___currentFontAsset_58; }
	inline void set_currentFontAsset_58(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_58), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_59)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_59() const { return ___currentSpriteAsset_59; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_59() { return &___currentSpriteAsset_59; }
	inline void set_currentSpriteAsset_59(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_60)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_60() const { return ___currentMaterial_60; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_60() { return &___currentMaterial_60; }
	inline void set_currentMaterial_60(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_61)); }
	inline int32_t get_currentMaterialIndex_61() const { return ___currentMaterialIndex_61; }
	inline int32_t* get_address_of_currentMaterialIndex_61() { return &___currentMaterialIndex_61; }
	inline void set_currentMaterialIndex_61(int32_t value)
	{
		___currentMaterialIndex_61 = value;
	}

	inline static int32_t get_offset_of_meshExtents_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_62)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_62() const { return ___meshExtents_62; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_62() { return &___meshExtents_62; }
	inline void set_meshExtents_62(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_62 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_63)); }
	inline bool get_tagNoParsing_63() const { return ___tagNoParsing_63; }
	inline bool* get_address_of_tagNoParsing_63() { return &___tagNoParsing_63; }
	inline void set_tagNoParsing_63(bool value)
	{
		___tagNoParsing_63 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_64)); }
	inline bool get_isNonBreakingSpace_64() const { return ___isNonBreakingSpace_64; }
	inline bool* get_address_of_isNonBreakingSpace_64() { return &___isNonBreakingSpace_64; }
	inline void set_isNonBreakingSpace_64(bool value)
	{
		___isNonBreakingSpace_64 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// AnimateBG
struct AnimateBG_t7D28D421CCC8165F9D79988F0F0B2A0D273A3DD7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// AnimateCarts
struct AnimateCarts_tF4D090BD357EA0B3A8CE0D9DED648859F552C8FA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AnimateCarts::TitleCarts
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___TitleCarts_4;
	// UnityEngine.GameObject AnimateCarts::particles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___particles_5;
	// System.Boolean AnimateCarts::isdone
	bool ___isdone_6;
	// System.Int32 AnimateCarts::i
	int32_t ___i_7;

public:
	inline static int32_t get_offset_of_TitleCarts_4() { return static_cast<int32_t>(offsetof(AnimateCarts_tF4D090BD357EA0B3A8CE0D9DED648859F552C8FA, ___TitleCarts_4)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_TitleCarts_4() const { return ___TitleCarts_4; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_TitleCarts_4() { return &___TitleCarts_4; }
	inline void set_TitleCarts_4(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___TitleCarts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TitleCarts_4), (void*)value);
	}

	inline static int32_t get_offset_of_particles_5() { return static_cast<int32_t>(offsetof(AnimateCarts_tF4D090BD357EA0B3A8CE0D9DED648859F552C8FA, ___particles_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_particles_5() const { return ___particles_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_particles_5() { return &___particles_5; }
	inline void set_particles_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___particles_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___particles_5), (void*)value);
	}

	inline static int32_t get_offset_of_isdone_6() { return static_cast<int32_t>(offsetof(AnimateCarts_tF4D090BD357EA0B3A8CE0D9DED648859F552C8FA, ___isdone_6)); }
	inline bool get_isdone_6() const { return ___isdone_6; }
	inline bool* get_address_of_isdone_6() { return &___isdone_6; }
	inline void set_isdone_6(bool value)
	{
		___isdone_6 = value;
	}

	inline static int32_t get_offset_of_i_7() { return static_cast<int32_t>(offsetof(AnimateCarts_tF4D090BD357EA0B3A8CE0D9DED648859F552C8FA, ___i_7)); }
	inline int32_t get_i_7() const { return ___i_7; }
	inline int32_t* get_address_of_i_7() { return &___i_7; }
	inline void set_i_7(int32_t value)
	{
		___i_7 = value;
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BlockDropper
struct BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BlockDropper::dropPoint
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___dropPoint_5;
	// UnityEngine.GameObject BlockDropper::followTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___followTarget_6;

public:
	inline static int32_t get_offset_of_dropPoint_5() { return static_cast<int32_t>(offsetof(BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3, ___dropPoint_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_dropPoint_5() const { return ___dropPoint_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_dropPoint_5() { return &___dropPoint_5; }
	inline void set_dropPoint_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___dropPoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dropPoint_5), (void*)value);
	}

	inline static int32_t get_offset_of_followTarget_6() { return static_cast<int32_t>(offsetof(BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3, ___followTarget_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_followTarget_6() const { return ___followTarget_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_followTarget_6() { return &___followTarget_6; }
	inline void set_followTarget_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___followTarget_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___followTarget_6), (void*)value);
	}
};

struct BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_StaticFields
{
public:
	// BlockDropper BlockDropper::inst
	BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * ___inst_4;

public:
	inline static int32_t get_offset_of_inst_4() { return static_cast<int32_t>(offsetof(BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_StaticFields, ___inst_4)); }
	inline BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * get_inst_4() const { return ___inst_4; }
	inline BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 ** get_address_of_inst_4() { return &___inst_4; }
	inline void set_inst_4(BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * value)
	{
		___inst_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_4), (void*)value);
	}
};


// BlockGenerator
struct BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Queue`1<System.Int32> BlockGenerator::blockQueue
	Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * ___blockQueue_5;
	// System.Int32 BlockGenerator::desiredQueueSize
	int32_t ___desiredQueueSize_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> BlockGenerator::blockArray
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___blockArray_7;

public:
	inline static int32_t get_offset_of_blockQueue_5() { return static_cast<int32_t>(offsetof(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF, ___blockQueue_5)); }
	inline Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * get_blockQueue_5() const { return ___blockQueue_5; }
	inline Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F ** get_address_of_blockQueue_5() { return &___blockQueue_5; }
	inline void set_blockQueue_5(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * value)
	{
		___blockQueue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockQueue_5), (void*)value);
	}

	inline static int32_t get_offset_of_desiredQueueSize_6() { return static_cast<int32_t>(offsetof(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF, ___desiredQueueSize_6)); }
	inline int32_t get_desiredQueueSize_6() const { return ___desiredQueueSize_6; }
	inline int32_t* get_address_of_desiredQueueSize_6() { return &___desiredQueueSize_6; }
	inline void set_desiredQueueSize_6(int32_t value)
	{
		___desiredQueueSize_6 = value;
	}

	inline static int32_t get_offset_of_blockArray_7() { return static_cast<int32_t>(offsetof(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF, ___blockArray_7)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_blockArray_7() const { return ___blockArray_7; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_blockArray_7() { return &___blockArray_7; }
	inline void set_blockArray_7(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___blockArray_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockArray_7), (void*)value);
	}
};

struct BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields
{
public:
	// BlockGenerator BlockGenerator::Instance
	BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields, ___Instance_4)); }
	inline BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * get_Instance_4() const { return ___Instance_4; }
	inline BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// BlockMovement
struct BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single BlockMovement::dropMultiplier
	float ___dropMultiplier_7;
	// System.Boolean BlockMovement::isDone
	bool ___isDone_8;
	// System.Single BlockMovement::moveSpeed
	float ___moveSpeed_9;
	// System.Single BlockMovement::flipTime
	float ___flipTime_10;
	// System.Single BlockMovement::fallSpeed
	float ___fallSpeed_11;
	// System.Single BlockMovement::flipTimeCounter
	float ___flipTimeCounter_12;
	// System.Single BlockMovement::horizontal
	float ___horizontal_13;
	// System.String BlockMovement::buttonPressed
	String_t* ___buttonPressed_14;
	// UnityEngine.Vector2 BlockMovement::velocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___velocity_15;
	// System.Boolean BlockMovement::isGrounded
	bool ___isGrounded_16;
	// UnityEngine.Rigidbody2D BlockMovement::rb2d
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb2d_17;
	// UnityEngine.LayerMask BlockMovement::groundLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___groundLayer_18;
	// UnityEngine.LayerMask BlockMovement::tetrisLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___tetrisLayer_19;
	// UnityEngine.PolygonCollider2D BlockMovement::polygonCollider2D
	PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * ___polygonCollider2D_20;

public:
	inline static int32_t get_offset_of_dropMultiplier_7() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___dropMultiplier_7)); }
	inline float get_dropMultiplier_7() const { return ___dropMultiplier_7; }
	inline float* get_address_of_dropMultiplier_7() { return &___dropMultiplier_7; }
	inline void set_dropMultiplier_7(float value)
	{
		___dropMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_isDone_8() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___isDone_8)); }
	inline bool get_isDone_8() const { return ___isDone_8; }
	inline bool* get_address_of_isDone_8() { return &___isDone_8; }
	inline void set_isDone_8(bool value)
	{
		___isDone_8 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_9() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___moveSpeed_9)); }
	inline float get_moveSpeed_9() const { return ___moveSpeed_9; }
	inline float* get_address_of_moveSpeed_9() { return &___moveSpeed_9; }
	inline void set_moveSpeed_9(float value)
	{
		___moveSpeed_9 = value;
	}

	inline static int32_t get_offset_of_flipTime_10() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___flipTime_10)); }
	inline float get_flipTime_10() const { return ___flipTime_10; }
	inline float* get_address_of_flipTime_10() { return &___flipTime_10; }
	inline void set_flipTime_10(float value)
	{
		___flipTime_10 = value;
	}

	inline static int32_t get_offset_of_fallSpeed_11() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___fallSpeed_11)); }
	inline float get_fallSpeed_11() const { return ___fallSpeed_11; }
	inline float* get_address_of_fallSpeed_11() { return &___fallSpeed_11; }
	inline void set_fallSpeed_11(float value)
	{
		___fallSpeed_11 = value;
	}

	inline static int32_t get_offset_of_flipTimeCounter_12() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___flipTimeCounter_12)); }
	inline float get_flipTimeCounter_12() const { return ___flipTimeCounter_12; }
	inline float* get_address_of_flipTimeCounter_12() { return &___flipTimeCounter_12; }
	inline void set_flipTimeCounter_12(float value)
	{
		___flipTimeCounter_12 = value;
	}

	inline static int32_t get_offset_of_horizontal_13() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___horizontal_13)); }
	inline float get_horizontal_13() const { return ___horizontal_13; }
	inline float* get_address_of_horizontal_13() { return &___horizontal_13; }
	inline void set_horizontal_13(float value)
	{
		___horizontal_13 = value;
	}

	inline static int32_t get_offset_of_buttonPressed_14() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___buttonPressed_14)); }
	inline String_t* get_buttonPressed_14() const { return ___buttonPressed_14; }
	inline String_t** get_address_of_buttonPressed_14() { return &___buttonPressed_14; }
	inline void set_buttonPressed_14(String_t* value)
	{
		___buttonPressed_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonPressed_14), (void*)value);
	}

	inline static int32_t get_offset_of_velocity_15() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___velocity_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_velocity_15() const { return ___velocity_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_velocity_15() { return &___velocity_15; }
	inline void set_velocity_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___velocity_15 = value;
	}

	inline static int32_t get_offset_of_isGrounded_16() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___isGrounded_16)); }
	inline bool get_isGrounded_16() const { return ___isGrounded_16; }
	inline bool* get_address_of_isGrounded_16() { return &___isGrounded_16; }
	inline void set_isGrounded_16(bool value)
	{
		___isGrounded_16 = value;
	}

	inline static int32_t get_offset_of_rb2d_17() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___rb2d_17)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb2d_17() const { return ___rb2d_17; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb2d_17() { return &___rb2d_17; }
	inline void set_rb2d_17(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb2d_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2d_17), (void*)value);
	}

	inline static int32_t get_offset_of_groundLayer_18() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___groundLayer_18)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_groundLayer_18() const { return ___groundLayer_18; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_groundLayer_18() { return &___groundLayer_18; }
	inline void set_groundLayer_18(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___groundLayer_18 = value;
	}

	inline static int32_t get_offset_of_tetrisLayer_19() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___tetrisLayer_19)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_tetrisLayer_19() const { return ___tetrisLayer_19; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_tetrisLayer_19() { return &___tetrisLayer_19; }
	inline void set_tetrisLayer_19(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___tetrisLayer_19 = value;
	}

	inline static int32_t get_offset_of_polygonCollider2D_20() { return static_cast<int32_t>(offsetof(BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A, ___polygonCollider2D_20)); }
	inline PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * get_polygonCollider2D_20() const { return ___polygonCollider2D_20; }
	inline PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D ** get_address_of_polygonCollider2D_20() { return &___polygonCollider2D_20; }
	inline void set_polygonCollider2D_20(PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * value)
	{
		___polygonCollider2D_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygonCollider2D_20), (void*)value);
	}
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// Buttons
struct Buttons_t56DF91E0BC6E1237717461D2564AFA4C911F1F24  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform CameraFollow::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_4;
	// System.Single CameraFollow::smooth
	float ___smooth_5;
	// System.Single CameraFollow::leadDistance
	float ___leadDistance_6;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___target_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_4() const { return ___target_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_smooth_5() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___smooth_5)); }
	inline float get_smooth_5() const { return ___smooth_5; }
	inline float* get_address_of_smooth_5() { return &___smooth_5; }
	inline void set_smooth_5(float value)
	{
		___smooth_5 = value;
	}

	inline static int32_t get_offset_of_leadDistance_6() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___leadDistance_6)); }
	inline float get_leadDistance_6() const { return ___leadDistance_6; }
	inline float* get_address_of_leadDistance_6() { return &___leadDistance_6; }
	inline void set_leadDistance_6(float value)
	{
		___leadDistance_6 = value;
	}
};


// CannonEnemy
struct CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CannonEnemy::direction
	float ___direction_4;
	// System.Boolean CannonEnemy::facingLeft
	bool ___facingLeft_5;
	// System.Single CannonEnemy::flipCount
	float ___flipCount_6;
	// UnityEngine.GameObject CannonEnemy::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_7;
	// UnityEngine.GameObject CannonEnemy::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_8;
	// UnityEngine.BoxCollider2D CannonEnemy::cannon
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___cannon_9;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8, ___direction_4)); }
	inline float get_direction_4() const { return ___direction_4; }
	inline float* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(float value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_facingLeft_5() { return static_cast<int32_t>(offsetof(CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8, ___facingLeft_5)); }
	inline bool get_facingLeft_5() const { return ___facingLeft_5; }
	inline bool* get_address_of_facingLeft_5() { return &___facingLeft_5; }
	inline void set_facingLeft_5(bool value)
	{
		___facingLeft_5 = value;
	}

	inline static int32_t get_offset_of_flipCount_6() { return static_cast<int32_t>(offsetof(CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8, ___flipCount_6)); }
	inline float get_flipCount_6() const { return ___flipCount_6; }
	inline float* get_address_of_flipCount_6() { return &___flipCount_6; }
	inline void set_flipCount_6(float value)
	{
		___flipCount_6 = value;
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8, ___player_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_7() const { return ___player_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_7), (void*)value);
	}

	inline static int32_t get_offset_of_projectile_8() { return static_cast<int32_t>(offsetof(CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8, ___projectile_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_8() const { return ___projectile_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_8() { return &___projectile_8; }
	inline void set_projectile_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_8), (void*)value);
	}

	inline static int32_t get_offset_of_cannon_9() { return static_cast<int32_t>(offsetof(CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8, ___cannon_9)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_cannon_9() const { return ___cannon_9; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_cannon_9() { return &___cannon_9; }
	inline void set_cannon_9(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___cannon_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cannon_9), (void*)value);
	}
};


// Cart
struct Cart_t4DCC493717102D6D81CA7483B7D045489560C478  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Cart::isCollected
	bool ___isCollected_4;
	// System.Boolean Cart::isDone
	bool ___isDone_5;
	// System.Boolean Cart::isCartSpin
	bool ___isCartSpin_6;
	// System.Single Cart::timer
	float ___timer_7;
	// UnityEngine.Material Cart::collectedMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___collectedMat_8;
	// UnityEngine.UI.RawImage Cart::sprite
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___sprite_9;

public:
	inline static int32_t get_offset_of_isCollected_4() { return static_cast<int32_t>(offsetof(Cart_t4DCC493717102D6D81CA7483B7D045489560C478, ___isCollected_4)); }
	inline bool get_isCollected_4() const { return ___isCollected_4; }
	inline bool* get_address_of_isCollected_4() { return &___isCollected_4; }
	inline void set_isCollected_4(bool value)
	{
		___isCollected_4 = value;
	}

	inline static int32_t get_offset_of_isDone_5() { return static_cast<int32_t>(offsetof(Cart_t4DCC493717102D6D81CA7483B7D045489560C478, ___isDone_5)); }
	inline bool get_isDone_5() const { return ___isDone_5; }
	inline bool* get_address_of_isDone_5() { return &___isDone_5; }
	inline void set_isDone_5(bool value)
	{
		___isDone_5 = value;
	}

	inline static int32_t get_offset_of_isCartSpin_6() { return static_cast<int32_t>(offsetof(Cart_t4DCC493717102D6D81CA7483B7D045489560C478, ___isCartSpin_6)); }
	inline bool get_isCartSpin_6() const { return ___isCartSpin_6; }
	inline bool* get_address_of_isCartSpin_6() { return &___isCartSpin_6; }
	inline void set_isCartSpin_6(bool value)
	{
		___isCartSpin_6 = value;
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(Cart_t4DCC493717102D6D81CA7483B7D045489560C478, ___timer_7)); }
	inline float get_timer_7() const { return ___timer_7; }
	inline float* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(float value)
	{
		___timer_7 = value;
	}

	inline static int32_t get_offset_of_collectedMat_8() { return static_cast<int32_t>(offsetof(Cart_t4DCC493717102D6D81CA7483B7D045489560C478, ___collectedMat_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_collectedMat_8() const { return ___collectedMat_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_collectedMat_8() { return &___collectedMat_8; }
	inline void set_collectedMat_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___collectedMat_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectedMat_8), (void*)value);
	}

	inline static int32_t get_offset_of_sprite_9() { return static_cast<int32_t>(offsetof(Cart_t4DCC493717102D6D81CA7483B7D045489560C478, ___sprite_9)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_sprite_9() const { return ___sprite_9; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_sprite_9() { return &___sprite_9; }
	inline void set_sprite_9(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___sprite_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_9), (void*)value);
	}
};


// CartTitle
struct CartTitle_tE8149E02CDDA473AB770FCDF8420E06528AF5FA3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean CartTitle::isCollected
	bool ___isCollected_4;
	// System.Boolean CartTitle::isDone
	bool ___isDone_5;
	// System.Boolean CartTitle::isCartSpin
	bool ___isCartSpin_6;
	// System.Single CartTitle::timer
	float ___timer_7;
	// UnityEngine.Material CartTitle::collectedMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___collectedMat_8;
	// UnityEngine.UI.RawImage CartTitle::sprite
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___sprite_9;

public:
	inline static int32_t get_offset_of_isCollected_4() { return static_cast<int32_t>(offsetof(CartTitle_tE8149E02CDDA473AB770FCDF8420E06528AF5FA3, ___isCollected_4)); }
	inline bool get_isCollected_4() const { return ___isCollected_4; }
	inline bool* get_address_of_isCollected_4() { return &___isCollected_4; }
	inline void set_isCollected_4(bool value)
	{
		___isCollected_4 = value;
	}

	inline static int32_t get_offset_of_isDone_5() { return static_cast<int32_t>(offsetof(CartTitle_tE8149E02CDDA473AB770FCDF8420E06528AF5FA3, ___isDone_5)); }
	inline bool get_isDone_5() const { return ___isDone_5; }
	inline bool* get_address_of_isDone_5() { return &___isDone_5; }
	inline void set_isDone_5(bool value)
	{
		___isDone_5 = value;
	}

	inline static int32_t get_offset_of_isCartSpin_6() { return static_cast<int32_t>(offsetof(CartTitle_tE8149E02CDDA473AB770FCDF8420E06528AF5FA3, ___isCartSpin_6)); }
	inline bool get_isCartSpin_6() const { return ___isCartSpin_6; }
	inline bool* get_address_of_isCartSpin_6() { return &___isCartSpin_6; }
	inline void set_isCartSpin_6(bool value)
	{
		___isCartSpin_6 = value;
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(CartTitle_tE8149E02CDDA473AB770FCDF8420E06528AF5FA3, ___timer_7)); }
	inline float get_timer_7() const { return ___timer_7; }
	inline float* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(float value)
	{
		___timer_7 = value;
	}

	inline static int32_t get_offset_of_collectedMat_8() { return static_cast<int32_t>(offsetof(CartTitle_tE8149E02CDDA473AB770FCDF8420E06528AF5FA3, ___collectedMat_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_collectedMat_8() const { return ___collectedMat_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_collectedMat_8() { return &___collectedMat_8; }
	inline void set_collectedMat_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___collectedMat_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectedMat_8), (void*)value);
	}

	inline static int32_t get_offset_of_sprite_9() { return static_cast<int32_t>(offsetof(CartTitle_tE8149E02CDDA473AB770FCDF8420E06528AF5FA3, ___sprite_9)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_sprite_9() const { return ___sprite_9; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_sprite_9() { return &___sprite_9; }
	inline void set_sprite_9(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___sprite_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_9), (void*)value);
	}
};


// Cartridge
struct Cartridge_tB98B8D15AF4F7DC0BE75CF7969DE9EDC5AAE41A4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Cartridge::spinSpeed
	float ___spinSpeed_4;
	// System.Int32 Cartridge::index
	int32_t ___index_5;
	// UnityEngine.AudioSource Cartridge::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_6;
	// UnityEngine.GameObject Cartridge::particles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___particles_7;

public:
	inline static int32_t get_offset_of_spinSpeed_4() { return static_cast<int32_t>(offsetof(Cartridge_tB98B8D15AF4F7DC0BE75CF7969DE9EDC5AAE41A4, ___spinSpeed_4)); }
	inline float get_spinSpeed_4() const { return ___spinSpeed_4; }
	inline float* get_address_of_spinSpeed_4() { return &___spinSpeed_4; }
	inline void set_spinSpeed_4(float value)
	{
		___spinSpeed_4 = value;
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(Cartridge_tB98B8D15AF4F7DC0BE75CF7969DE9EDC5AAE41A4, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(Cartridge_tB98B8D15AF4F7DC0BE75CF7969DE9EDC5AAE41A4, ___audioSource_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_6), (void*)value);
	}

	inline static int32_t get_offset_of_particles_7() { return static_cast<int32_t>(offsetof(Cartridge_tB98B8D15AF4F7DC0BE75CF7969DE9EDC5AAE41A4, ___particles_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_particles_7() const { return ___particles_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_particles_7() { return &___particles_7; }
	inline void set_particles_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___particles_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___particles_7), (void*)value);
	}
};


// CheckPoint
struct CheckPoint_t6251F27E314260C898127FBE3ABD3E1C75DF62E6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.CircleCollider2D
struct CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// CoinScript
struct CoinScript_t24045994219ED374086B1AB4C9E33A6846E3FDC1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource CoinScript::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_4;
	// UnityEngine.GameObject CoinScript::audioPlayer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___audioPlayer_5;

public:
	inline static int32_t get_offset_of_audioSource_4() { return static_cast<int32_t>(offsetof(CoinScript_t24045994219ED374086B1AB4C9E33A6846E3FDC1, ___audioSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_4() const { return ___audioSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_4() { return &___audioSource_4; }
	inline void set_audioSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_audioPlayer_5() { return static_cast<int32_t>(offsetof(CoinScript_t24045994219ED374086B1AB4C9E33A6846E3FDC1, ___audioPlayer_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_audioPlayer_5() const { return ___audioPlayer_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_audioPlayer_5() { return &___audioPlayer_5; }
	inline void set_audioPlayer_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___audioPlayer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioPlayer_5), (void*)value);
	}
};


// Flag
struct Flag_tE44A4F9BED0C00A7FCA97BEAB2D31A9823BA9E5B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer Flag::sr
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sr_4;
	// System.Boolean Flag::isActive
	bool ___isActive_5;
	// UnityEngine.Sprite Flag::activeSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___activeSprite_6;
	// UnityEngine.AudioSource Flag::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_7;

public:
	inline static int32_t get_offset_of_sr_4() { return static_cast<int32_t>(offsetof(Flag_tE44A4F9BED0C00A7FCA97BEAB2D31A9823BA9E5B, ___sr_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sr_4() const { return ___sr_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sr_4() { return &___sr_4; }
	inline void set_sr_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sr_4), (void*)value);
	}

	inline static int32_t get_offset_of_isActive_5() { return static_cast<int32_t>(offsetof(Flag_tE44A4F9BED0C00A7FCA97BEAB2D31A9823BA9E5B, ___isActive_5)); }
	inline bool get_isActive_5() const { return ___isActive_5; }
	inline bool* get_address_of_isActive_5() { return &___isActive_5; }
	inline void set_isActive_5(bool value)
	{
		___isActive_5 = value;
	}

	inline static int32_t get_offset_of_activeSprite_6() { return static_cast<int32_t>(offsetof(Flag_tE44A4F9BED0C00A7FCA97BEAB2D31A9823BA9E5B, ___activeSprite_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_activeSprite_6() const { return ___activeSprite_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_activeSprite_6() { return &___activeSprite_6; }
	inline void set_activeSprite_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___activeSprite_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeSprite_6), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_7() { return static_cast<int32_t>(offsetof(Flag_tE44A4F9BED0C00A7FCA97BEAB2D31A9823BA9E5B, ___audioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_7() const { return ___audioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_7() { return &___audioSource_7; }
	inline void set_audioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_7), (void*)value);
	}
};


// GameState
struct GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameState::playerRef
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerRef_5;
	// UnityEngine.GameObject GameState::respawnPoint
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___respawnPoint_6;
	// System.Collections.Generic.List`1<System.Boolean> GameState::collectibles
	List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___collectibles_7;
	// System.Int32 GameState::PlayerHealth
	int32_t ___PlayerHealth_8;

public:
	inline static int32_t get_offset_of_playerRef_5() { return static_cast<int32_t>(offsetof(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE, ___playerRef_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerRef_5() const { return ___playerRef_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerRef_5() { return &___playerRef_5; }
	inline void set_playerRef_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerRef_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerRef_5), (void*)value);
	}

	inline static int32_t get_offset_of_respawnPoint_6() { return static_cast<int32_t>(offsetof(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE, ___respawnPoint_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_respawnPoint_6() const { return ___respawnPoint_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_respawnPoint_6() { return &___respawnPoint_6; }
	inline void set_respawnPoint_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___respawnPoint_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___respawnPoint_6), (void*)value);
	}

	inline static int32_t get_offset_of_collectibles_7() { return static_cast<int32_t>(offsetof(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE, ___collectibles_7)); }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * get_collectibles_7() const { return ___collectibles_7; }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 ** get_address_of_collectibles_7() { return &___collectibles_7; }
	inline void set_collectibles_7(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * value)
	{
		___collectibles_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectibles_7), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerHealth_8() { return static_cast<int32_t>(offsetof(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE, ___PlayerHealth_8)); }
	inline int32_t get_PlayerHealth_8() const { return ___PlayerHealth_8; }
	inline int32_t* get_address_of_PlayerHealth_8() { return &___PlayerHealth_8; }
	inline void set_PlayerHealth_8(int32_t value)
	{
		___PlayerHealth_8 = value;
	}
};

struct GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_StaticFields
{
public:
	// GameState GameState::Instance
	GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_StaticFields, ___Instance_4)); }
	inline GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * get_Instance_4() const { return ___Instance_4; }
	inline GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip MainMenu::transitionClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___transitionClip_4;

public:
	inline static int32_t get_offset_of_transitionClip_4() { return static_cast<int32_t>(offsetof(MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C, ___transitionClip_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_transitionClip_4() const { return ___transitionClip_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_transitionClip_4() { return &___transitionClip_4; }
	inline void set_transitionClip_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___transitionClip_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transitionClip_4), (void*)value);
	}
};


// MusicManager
struct MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource MusicManager::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;

public:
	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}
};

struct MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_StaticFields
{
public:
	// MusicManager MusicManager::Instance
	MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_StaticFields, ___Instance_4)); }
	inline MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * get_Instance_4() const { return ___Instance_4; }
	inline MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// NextBlock
struct NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 NextBlock::blockIndex
	int32_t ___blockIndex_4;
	// UnityEngine.Sprite NextBlock::renderSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___renderSprite_5;
	// System.String NextBlock::current
	String_t* ___current_6;
	// UnityEngine.UI.Image NextBlock::one
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___one_7;
	// UnityEngine.UI.Image NextBlock::two
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___two_8;
	// UnityEngine.UI.Image NextBlock::three
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___three_9;

public:
	inline static int32_t get_offset_of_blockIndex_4() { return static_cast<int32_t>(offsetof(NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF, ___blockIndex_4)); }
	inline int32_t get_blockIndex_4() const { return ___blockIndex_4; }
	inline int32_t* get_address_of_blockIndex_4() { return &___blockIndex_4; }
	inline void set_blockIndex_4(int32_t value)
	{
		___blockIndex_4 = value;
	}

	inline static int32_t get_offset_of_renderSprite_5() { return static_cast<int32_t>(offsetof(NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF, ___renderSprite_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_renderSprite_5() const { return ___renderSprite_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_renderSprite_5() { return &___renderSprite_5; }
	inline void set_renderSprite_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___renderSprite_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderSprite_5), (void*)value);
	}

	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_one_7() { return static_cast<int32_t>(offsetof(NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF, ___one_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_one_7() const { return ___one_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_one_7() { return &___one_7; }
	inline void set_one_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___one_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___one_7), (void*)value);
	}

	inline static int32_t get_offset_of_two_8() { return static_cast<int32_t>(offsetof(NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF, ___two_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_two_8() const { return ___two_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_two_8() { return &___two_8; }
	inline void set_two_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___two_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___two_8), (void*)value);
	}

	inline static int32_t get_offset_of_three_9() { return static_cast<int32_t>(offsetof(NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF, ___three_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_three_9() const { return ___three_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_three_9() { return &___three_9; }
	inline void set_three_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___three_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___three_9), (void*)value);
	}
};

struct NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF_StaticFields
{
public:
	// NextBlock NextBlock::Instance
	NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF * ___Instance_10;

public:
	inline static int32_t get_offset_of_Instance_10() { return static_cast<int32_t>(offsetof(NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF_StaticFields, ___Instance_10)); }
	inline NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF * get_Instance_10() const { return ___Instance_10; }
	inline NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF ** get_address_of_Instance_10() { return &___Instance_10; }
	inline void set_Instance_10(NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF * value)
	{
		___Instance_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_10), (void*)value);
	}
};


// OnlyVisibleInEditor
struct OnlyVisibleInEditor_tEFBF6A12B7CF1000EE84DC24F674660FF28AFFF2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Parallax
struct Parallax_t98398A197751A44EE1A4B082AB50A668D671803C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Parallax::length
	float ___length_4;
	// System.Single Parallax::startPos
	float ___startPos_5;
	// UnityEngine.GameObject Parallax::camera
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___camera_6;
	// System.Single Parallax::parallaxEffect
	float ___parallaxEffect_7;

public:
	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___length_4)); }
	inline float get_length_4() const { return ___length_4; }
	inline float* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(float value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_startPos_5() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___startPos_5)); }
	inline float get_startPos_5() const { return ___startPos_5; }
	inline float* get_address_of_startPos_5() { return &___startPos_5; }
	inline void set_startPos_5(float value)
	{
		___startPos_5 = value;
	}

	inline static int32_t get_offset_of_camera_6() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___camera_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_camera_6() const { return ___camera_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_camera_6() { return &___camera_6; }
	inline void set_camera_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___camera_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_6), (void*)value);
	}

	inline static int32_t get_offset_of_parallaxEffect_7() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___parallaxEffect_7)); }
	inline float get_parallaxEffect_7() const { return ___parallaxEffect_7; }
	inline float* get_address_of_parallaxEffect_7() { return &___parallaxEffect_7; }
	inline void set_parallaxEffect_7(float value)
	{
		___parallaxEffect_7 = value;
	}
};


// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PauseMenu::pauseMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseMenu_4;
	// UnityEngine.GameObject[] PauseMenu::destroyBlocks
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___destroyBlocks_5;
	// UnityEngine.AudioClip PauseMenu::transitionClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___transitionClip_6;
	// System.Boolean PauseMenu::isPaused
	bool ___isPaused_7;

public:
	inline static int32_t get_offset_of_pauseMenu_4() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___pauseMenu_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseMenu_4() const { return ___pauseMenu_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseMenu_4() { return &___pauseMenu_4; }
	inline void set_pauseMenu_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenu_4), (void*)value);
	}

	inline static int32_t get_offset_of_destroyBlocks_5() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___destroyBlocks_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_destroyBlocks_5() const { return ___destroyBlocks_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_destroyBlocks_5() { return &___destroyBlocks_5; }
	inline void set_destroyBlocks_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___destroyBlocks_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyBlocks_5), (void*)value);
	}

	inline static int32_t get_offset_of_transitionClip_6() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___transitionClip_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_transitionClip_6() const { return ___transitionClip_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_transitionClip_6() { return &___transitionClip_6; }
	inline void set_transitionClip_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___transitionClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transitionClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_isPaused_7() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___isPaused_7)); }
	inline bool get_isPaused_7() const { return ___isPaused_7; }
	inline bool* get_address_of_isPaused_7() { return &___isPaused_7; }
	inline void set_isPaused_7(bool value)
	{
		___isPaused_7 = value;
	}
};


// Persistence
struct Persistence_tE974BC5B9001311BC8D0342175BEC7C19272365C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator PlayerMovement::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_4;
	// UnityEngine.Sprite[] PlayerMovement::spriteArray
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___spriteArray_5;
	// UnityEngine.SpriteRenderer PlayerMovement::sprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sprite_6;
	// System.Single PlayerMovement::moveSpeed
	float ___moveSpeed_9;
	// System.Single PlayerMovement::jumpPower
	float ___jumpPower_10;
	// System.Single PlayerMovement::soundDelay
	float ___soundDelay_11;
	// System.Single PlayerMovement::horizontal
	float ___horizontal_12;
	// System.Single PlayerMovement::coyoteTime
	float ___coyoteTime_13;
	// System.Single PlayerMovement::coyoteTimeCounter
	float ___coyoteTimeCounter_14;
	// System.Single PlayerMovement::jumpBufferTime
	float ___jumpBufferTime_15;
	// System.Single PlayerMovement::jumpBufferCounter
	float ___jumpBufferCounter_16;
	// System.Boolean PlayerMovement::facingRight
	bool ___facingRight_17;
	// System.Boolean PlayerMovement::soundPlaying
	bool ___soundPlaying_18;
	// UnityEngine.GameObject PlayerMovement::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_19;
	// UnityEngine.Rigidbody2D PlayerMovement::rb2d
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb2d_20;
	// UnityEngine.LayerMask PlayerMovement::groundLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___groundLayer_21;
	// UnityEngine.LayerMask PlayerMovement::tetrisLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___tetrisLayer_22;
	// UnityEngine.CircleCollider2D PlayerMovement::boxCollider2D
	CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * ___boxCollider2D_23;
	// UnityEngine.AudioSource PlayerMovement::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_24;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___animator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_4() const { return ___animator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}

	inline static int32_t get_offset_of_spriteArray_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___spriteArray_5)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_spriteArray_5() const { return ___spriteArray_5; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_spriteArray_5() { return &___spriteArray_5; }
	inline void set_spriteArray_5(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___spriteArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteArray_5), (void*)value);
	}

	inline static int32_t get_offset_of_sprite_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___sprite_6)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sprite_6() const { return ___sprite_6; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sprite_6() { return &___sprite_6; }
	inline void set_sprite_6(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sprite_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_6), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___moveSpeed_9)); }
	inline float get_moveSpeed_9() const { return ___moveSpeed_9; }
	inline float* get_address_of_moveSpeed_9() { return &___moveSpeed_9; }
	inline void set_moveSpeed_9(float value)
	{
		___moveSpeed_9 = value;
	}

	inline static int32_t get_offset_of_jumpPower_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___jumpPower_10)); }
	inline float get_jumpPower_10() const { return ___jumpPower_10; }
	inline float* get_address_of_jumpPower_10() { return &___jumpPower_10; }
	inline void set_jumpPower_10(float value)
	{
		___jumpPower_10 = value;
	}

	inline static int32_t get_offset_of_soundDelay_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___soundDelay_11)); }
	inline float get_soundDelay_11() const { return ___soundDelay_11; }
	inline float* get_address_of_soundDelay_11() { return &___soundDelay_11; }
	inline void set_soundDelay_11(float value)
	{
		___soundDelay_11 = value;
	}

	inline static int32_t get_offset_of_horizontal_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___horizontal_12)); }
	inline float get_horizontal_12() const { return ___horizontal_12; }
	inline float* get_address_of_horizontal_12() { return &___horizontal_12; }
	inline void set_horizontal_12(float value)
	{
		___horizontal_12 = value;
	}

	inline static int32_t get_offset_of_coyoteTime_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___coyoteTime_13)); }
	inline float get_coyoteTime_13() const { return ___coyoteTime_13; }
	inline float* get_address_of_coyoteTime_13() { return &___coyoteTime_13; }
	inline void set_coyoteTime_13(float value)
	{
		___coyoteTime_13 = value;
	}

	inline static int32_t get_offset_of_coyoteTimeCounter_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___coyoteTimeCounter_14)); }
	inline float get_coyoteTimeCounter_14() const { return ___coyoteTimeCounter_14; }
	inline float* get_address_of_coyoteTimeCounter_14() { return &___coyoteTimeCounter_14; }
	inline void set_coyoteTimeCounter_14(float value)
	{
		___coyoteTimeCounter_14 = value;
	}

	inline static int32_t get_offset_of_jumpBufferTime_15() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___jumpBufferTime_15)); }
	inline float get_jumpBufferTime_15() const { return ___jumpBufferTime_15; }
	inline float* get_address_of_jumpBufferTime_15() { return &___jumpBufferTime_15; }
	inline void set_jumpBufferTime_15(float value)
	{
		___jumpBufferTime_15 = value;
	}

	inline static int32_t get_offset_of_jumpBufferCounter_16() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___jumpBufferCounter_16)); }
	inline float get_jumpBufferCounter_16() const { return ___jumpBufferCounter_16; }
	inline float* get_address_of_jumpBufferCounter_16() { return &___jumpBufferCounter_16; }
	inline void set_jumpBufferCounter_16(float value)
	{
		___jumpBufferCounter_16 = value;
	}

	inline static int32_t get_offset_of_facingRight_17() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___facingRight_17)); }
	inline bool get_facingRight_17() const { return ___facingRight_17; }
	inline bool* get_address_of_facingRight_17() { return &___facingRight_17; }
	inline void set_facingRight_17(bool value)
	{
		___facingRight_17 = value;
	}

	inline static int32_t get_offset_of_soundPlaying_18() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___soundPlaying_18)); }
	inline bool get_soundPlaying_18() const { return ___soundPlaying_18; }
	inline bool* get_address_of_soundPlaying_18() { return &___soundPlaying_18; }
	inline void set_soundPlaying_18(bool value)
	{
		___soundPlaying_18 = value;
	}

	inline static int32_t get_offset_of_player_19() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___player_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_19() const { return ___player_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_19() { return &___player_19; }
	inline void set_player_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_19), (void*)value);
	}

	inline static int32_t get_offset_of_rb2d_20() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___rb2d_20)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb2d_20() const { return ___rb2d_20; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb2d_20() { return &___rb2d_20; }
	inline void set_rb2d_20(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb2d_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2d_20), (void*)value);
	}

	inline static int32_t get_offset_of_groundLayer_21() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___groundLayer_21)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_groundLayer_21() const { return ___groundLayer_21; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_groundLayer_21() { return &___groundLayer_21; }
	inline void set_groundLayer_21(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___groundLayer_21 = value;
	}

	inline static int32_t get_offset_of_tetrisLayer_22() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___tetrisLayer_22)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_tetrisLayer_22() const { return ___tetrisLayer_22; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_tetrisLayer_22() { return &___tetrisLayer_22; }
	inline void set_tetrisLayer_22(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___tetrisLayer_22 = value;
	}

	inline static int32_t get_offset_of_boxCollider2D_23() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___boxCollider2D_23)); }
	inline CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * get_boxCollider2D_23() const { return ___boxCollider2D_23; }
	inline CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 ** get_address_of_boxCollider2D_23() { return &___boxCollider2D_23; }
	inline void set_boxCollider2D_23(CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * value)
	{
		___boxCollider2D_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider2D_23), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_24() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___audioSource_24)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_24() const { return ___audioSource_24; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_24() { return &___audioSource_24; }
	inline void set_audioSource_24(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_24), (void*)value);
	}
};


// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// Projectiles
struct Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Projectiles::speed
	float ___speed_4;
	// System.Single Projectiles::lifeTime
	float ___lifeTime_5;
	// UnityEngine.Rigidbody2D Projectiles::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_6;
	// UnityEngine.Collider2D Projectiles::myCollider2D
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___myCollider2D_7;
	// UnityEngine.GameObject Projectiles::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_8;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_lifeTime_5() { return static_cast<int32_t>(offsetof(Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22, ___lifeTime_5)); }
	inline float get_lifeTime_5() const { return ___lifeTime_5; }
	inline float* get_address_of_lifeTime_5() { return &___lifeTime_5; }
	inline void set_lifeTime_5(float value)
	{
		___lifeTime_5 = value;
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22, ___rb_6)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_6() const { return ___rb_6; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}

	inline static int32_t get_offset_of_myCollider2D_7() { return static_cast<int32_t>(offsetof(Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22, ___myCollider2D_7)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_myCollider2D_7() const { return ___myCollider2D_7; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_myCollider2D_7() { return &___myCollider2D_7; }
	inline void set_myCollider2D_7(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___myCollider2D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myCollider2D_7), (void*)value);
	}

	inline static int32_t get_offset_of_projectile_8() { return static_cast<int32_t>(offsetof(Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22, ___projectile_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_8() const { return ___projectile_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_8() { return &___projectile_8; }
	inline void set_projectile_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIMgr
struct UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UIMgr::timeObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___timeObj_4;
	// System.Single UIMgr::gameTime
	float ___gameTime_5;
	// UnityEngine.UI.Text UIMgr::timeDisplay
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timeDisplay_6;
	// UnityEngine.GameObject UIMgr::creditObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___creditObj_7;
	// System.Single UIMgr::creditCount
	float ___creditCount_8;
	// TMPro.TextMeshProUGUI UIMgr::creditDisplay
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ___creditDisplay_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIMgr::UICartElement
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___UICartElement_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIMgr::UIBlockElement
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___UIBlockElement_11;
	// System.Collections.Generic.List`1<UnityEngine.MeshRenderer> UIMgr::LifeList
	List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D * ___LifeList_12;
	// UnityEngine.Vector3 UIMgr::test
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___test_14;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UIMgr::incList
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___incList_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UIMgr::healthPips
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___healthPips_16;

public:
	inline static int32_t get_offset_of_timeObj_4() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___timeObj_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_timeObj_4() const { return ___timeObj_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_timeObj_4() { return &___timeObj_4; }
	inline void set_timeObj_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___timeObj_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeObj_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameTime_5() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___gameTime_5)); }
	inline float get_gameTime_5() const { return ___gameTime_5; }
	inline float* get_address_of_gameTime_5() { return &___gameTime_5; }
	inline void set_gameTime_5(float value)
	{
		___gameTime_5 = value;
	}

	inline static int32_t get_offset_of_timeDisplay_6() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___timeDisplay_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timeDisplay_6() const { return ___timeDisplay_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timeDisplay_6() { return &___timeDisplay_6; }
	inline void set_timeDisplay_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timeDisplay_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeDisplay_6), (void*)value);
	}

	inline static int32_t get_offset_of_creditObj_7() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___creditObj_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_creditObj_7() const { return ___creditObj_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_creditObj_7() { return &___creditObj_7; }
	inline void set_creditObj_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___creditObj_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___creditObj_7), (void*)value);
	}

	inline static int32_t get_offset_of_creditCount_8() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___creditCount_8)); }
	inline float get_creditCount_8() const { return ___creditCount_8; }
	inline float* get_address_of_creditCount_8() { return &___creditCount_8; }
	inline void set_creditCount_8(float value)
	{
		___creditCount_8 = value;
	}

	inline static int32_t get_offset_of_creditDisplay_9() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___creditDisplay_9)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get_creditDisplay_9() const { return ___creditDisplay_9; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of_creditDisplay_9() { return &___creditDisplay_9; }
	inline void set_creditDisplay_9(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		___creditDisplay_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___creditDisplay_9), (void*)value);
	}

	inline static int32_t get_offset_of_UICartElement_10() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___UICartElement_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_UICartElement_10() const { return ___UICartElement_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_UICartElement_10() { return &___UICartElement_10; }
	inline void set_UICartElement_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___UICartElement_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UICartElement_10), (void*)value);
	}

	inline static int32_t get_offset_of_UIBlockElement_11() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___UIBlockElement_11)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_UIBlockElement_11() const { return ___UIBlockElement_11; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_UIBlockElement_11() { return &___UIBlockElement_11; }
	inline void set_UIBlockElement_11(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___UIBlockElement_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UIBlockElement_11), (void*)value);
	}

	inline static int32_t get_offset_of_LifeList_12() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___LifeList_12)); }
	inline List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D * get_LifeList_12() const { return ___LifeList_12; }
	inline List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D ** get_address_of_LifeList_12() { return &___LifeList_12; }
	inline void set_LifeList_12(List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D * value)
	{
		___LifeList_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LifeList_12), (void*)value);
	}

	inline static int32_t get_offset_of_test_14() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___test_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_test_14() const { return ___test_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_test_14() { return &___test_14; }
	inline void set_test_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___test_14 = value;
	}

	inline static int32_t get_offset_of_incList_15() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___incList_15)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_incList_15() const { return ___incList_15; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_incList_15() { return &___incList_15; }
	inline void set_incList_15(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___incList_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___incList_15), (void*)value);
	}

	inline static int32_t get_offset_of_healthPips_16() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F, ___healthPips_16)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_healthPips_16() const { return ___healthPips_16; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_healthPips_16() { return &___healthPips_16; }
	inline void set_healthPips_16(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___healthPips_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthPips_16), (void*)value);
	}
};

struct UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_StaticFields
{
public:
	// UIMgr UIMgr::inst
	UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * ___inst_13;

public:
	inline static int32_t get_offset_of_inst_13() { return static_cast<int32_t>(offsetof(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_StaticFields, ___inst_13)); }
	inline UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * get_inst_13() const { return ___inst_13; }
	inline UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F ** get_address_of_inst_13() { return &___inst_13; }
	inline void set_inst_13(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * value)
	{
		___inst_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_13), (void*)value);
	}
};


// animateCart
struct animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean animateCart::isDone
	bool ___isDone_4;
	// System.Boolean animateCart::isCartSpin
	bool ___isCartSpin_5;
	// System.Single animateCart::timer
	float ___timer_6;
	// UnityEngine.UI.RawImage animateCart::sprite
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___sprite_7;

public:
	inline static int32_t get_offset_of_isDone_4() { return static_cast<int32_t>(offsetof(animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C, ___isDone_4)); }
	inline bool get_isDone_4() const { return ___isDone_4; }
	inline bool* get_address_of_isDone_4() { return &___isDone_4; }
	inline void set_isDone_4(bool value)
	{
		___isDone_4 = value;
	}

	inline static int32_t get_offset_of_isCartSpin_5() { return static_cast<int32_t>(offsetof(animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C, ___isCartSpin_5)); }
	inline bool get_isCartSpin_5() const { return ___isCartSpin_5; }
	inline bool* get_address_of_isCartSpin_5() { return &___isCartSpin_5; }
	inline void set_isCartSpin_5(bool value)
	{
		___isCartSpin_5 = value;
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_sprite_7() { return static_cast<int32_t>(offsetof(animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C, ___sprite_7)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_sprite_7() const { return ___sprite_7; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_sprite_7() { return &___sprite_7; }
	inline void set_sprite_7(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___sprite_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_7), (void*)value);
	}
};


// blueanimation
struct blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single blueanimation::timer
	float ___timer_4;
	// UnityEngine.Vector3 blueanimation::startingPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startingPos_5;
	// UnityEngine.SpriteRenderer blueanimation::Srender
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___Srender_6;
	// UnityEngine.Color blueanimation::randColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___randColor_7;
	// UnityEngine.BoxCollider2D blueanimation::bc
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___bc_8;
	// UnityEngine.AudioClip blueanimation::transitionClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___transitionClip_9;
	// System.Single blueanimation::H
	float ___H_10;
	// System.Single blueanimation::S
	float ___S_11;
	// System.Single blueanimation::V
	float ___V_12;

public:
	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_startingPos_5() { return static_cast<int32_t>(offsetof(blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E, ___startingPos_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startingPos_5() const { return ___startingPos_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startingPos_5() { return &___startingPos_5; }
	inline void set_startingPos_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startingPos_5 = value;
	}

	inline static int32_t get_offset_of_Srender_6() { return static_cast<int32_t>(offsetof(blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E, ___Srender_6)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_Srender_6() const { return ___Srender_6; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_Srender_6() { return &___Srender_6; }
	inline void set_Srender_6(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___Srender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Srender_6), (void*)value);
	}

	inline static int32_t get_offset_of_randColor_7() { return static_cast<int32_t>(offsetof(blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E, ___randColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_randColor_7() const { return ___randColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_randColor_7() { return &___randColor_7; }
	inline void set_randColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___randColor_7 = value;
	}

	inline static int32_t get_offset_of_bc_8() { return static_cast<int32_t>(offsetof(blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E, ___bc_8)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_bc_8() const { return ___bc_8; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_bc_8() { return &___bc_8; }
	inline void set_bc_8(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___bc_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bc_8), (void*)value);
	}

	inline static int32_t get_offset_of_transitionClip_9() { return static_cast<int32_t>(offsetof(blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E, ___transitionClip_9)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_transitionClip_9() const { return ___transitionClip_9; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_transitionClip_9() { return &___transitionClip_9; }
	inline void set_transitionClip_9(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___transitionClip_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transitionClip_9), (void*)value);
	}

	inline static int32_t get_offset_of_H_10() { return static_cast<int32_t>(offsetof(blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E, ___H_10)); }
	inline float get_H_10() const { return ___H_10; }
	inline float* get_address_of_H_10() { return &___H_10; }
	inline void set_H_10(float value)
	{
		___H_10 = value;
	}

	inline static int32_t get_offset_of_S_11() { return static_cast<int32_t>(offsetof(blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E, ___S_11)); }
	inline float get_S_11() const { return ___S_11; }
	inline float* get_address_of_S_11() { return &___S_11; }
	inline void set_S_11(float value)
	{
		___S_11 = value;
	}

	inline static int32_t get_offset_of_V_12() { return static_cast<int32_t>(offsetof(blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E, ___V_12)); }
	inline float get_V_12() const { return ___V_12; }
	inline float* get_address_of_V_12() { return &___V_12; }
	inline void set_V_12(float value)
	{
		___V_12 = value;
	}
};


// titleanimateup
struct titleanimateup_tFA792ACB564B47B0B99F5797BD7C6CE27B58BA0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject titleanimateup::text
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___text_4;
	// UnityEngine.GameObject titleanimateup::text2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___text2_5;
	// UnityEngine.GameObject titleanimateup::text3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___text3_6;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(titleanimateup_tFA792ACB564B47B0B99F5797BD7C6CE27B58BA0E, ___text_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_text_4() const { return ___text_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}

	inline static int32_t get_offset_of_text2_5() { return static_cast<int32_t>(offsetof(titleanimateup_tFA792ACB564B47B0B99F5797BD7C6CE27B58BA0E, ___text2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_text2_5() const { return ___text2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_text2_5() { return &___text2_5; }
	inline void set_text2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___text2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text2_5), (void*)value);
	}

	inline static int32_t get_offset_of_text3_6() { return static_cast<int32_t>(offsetof(titleanimateup_tFA792ACB564B47B0B99F5797BD7C6CE27B58BA0E, ___text3_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_text3_6() const { return ___text3_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_text3_6() { return &___text3_6; }
	inline void set_text3_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___text3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text3_6), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};


// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_79;
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
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_90;
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
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_97;
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
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_118;
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
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_146;
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
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_166;
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
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_173;
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
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_199;
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
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_258;

public:
	inline static int32_t get_offset_of_m_text_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_36)); }
	inline String_t* get_m_text_36() const { return ___m_text_36; }
	inline String_t** get_address_of_m_text_36() { return &___m_text_36; }
	inline void set_m_text_36(String_t* value)
	{
		___m_text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsTextBackingStringDirty_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextBackingStringDirty_37)); }
	inline bool get_m_IsTextBackingStringDirty_37() const { return ___m_IsTextBackingStringDirty_37; }
	inline bool* get_address_of_m_IsTextBackingStringDirty_37() { return &___m_IsTextBackingStringDirty_37; }
	inline void set_m_IsTextBackingStringDirty_37(bool value)
	{
		___m_IsTextBackingStringDirty_37 = value;
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_38)); }
	inline RuntimeObject* get_m_TextPreprocessor_38() const { return ___m_TextPreprocessor_38; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_38() { return &___m_TextPreprocessor_38; }
	inline void set_m_TextPreprocessor_38(RuntimeObject* value)
	{
		___m_TextPreprocessor_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_39)); }
	inline bool get_m_isRightToLeft_39() const { return ___m_isRightToLeft_39; }
	inline bool* get_address_of_m_isRightToLeft_39() { return &___m_isRightToLeft_39; }
	inline void set_m_isRightToLeft_39(bool value)
	{
		___m_isRightToLeft_39 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_40)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_40() const { return ___m_fontAsset_40; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_40() { return &___m_fontAsset_40; }
	inline void set_m_fontAsset_40(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_41)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_41() const { return ___m_currentFontAsset_41; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_41() { return &___m_currentFontAsset_41; }
	inline void set_m_currentFontAsset_41(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_42)); }
	inline bool get_m_isSDFShader_42() const { return ___m_isSDFShader_42; }
	inline bool* get_address_of_m_isSDFShader_42() { return &___m_isSDFShader_42; }
	inline void set_m_isSDFShader_42(bool value)
	{
		___m_isSDFShader_42 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_43() const { return ___m_sharedMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_43() { return &___m_sharedMaterial_43; }
	inline void set_m_sharedMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_44() const { return ___m_currentMaterial_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_44() { return &___m_currentMaterial_44; }
	inline void set_m_currentMaterial_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_48)); }
	inline int32_t get_m_currentMaterialIndex_48() const { return ___m_currentMaterialIndex_48; }
	inline int32_t* get_address_of_m_currentMaterialIndex_48() { return &___m_currentMaterialIndex_48; }
	inline void set_m_currentMaterialIndex_48(int32_t value)
	{
		___m_currentMaterialIndex_48 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_49)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_49() const { return ___m_fontSharedMaterials_49; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_49() { return &___m_fontSharedMaterials_49; }
	inline void set_m_fontSharedMaterials_49(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_50)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_50() const { return ___m_fontMaterial_50; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_50() { return &___m_fontMaterial_50; }
	inline void set_m_fontMaterial_50(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_51)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_51() const { return ___m_fontMaterials_51; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_51() { return &___m_fontMaterials_51; }
	inline void set_m_fontMaterials_51(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_52)); }
	inline bool get_m_isMaterialDirty_52() const { return ___m_isMaterialDirty_52; }
	inline bool* get_address_of_m_isMaterialDirty_52() { return &___m_isMaterialDirty_52; }
	inline void set_m_isMaterialDirty_52(bool value)
	{
		___m_isMaterialDirty_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_53)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_53() const { return ___m_fontColor32_53; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_53() { return &___m_fontColor32_53; }
	inline void set_m_fontColor32_53(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_53 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_54)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_54() const { return ___m_fontColor_54; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_54() { return &___m_fontColor_54; }
	inline void set_m_fontColor_54(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_54 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_56() const { return ___m_underlineColor_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_56() { return &___m_underlineColor_56; }
	inline void set_m_underlineColor_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_56 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_57)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_57() const { return ___m_strikethroughColor_57; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_57() { return &___m_strikethroughColor_57; }
	inline void set_m_strikethroughColor_57(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_57 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_58)); }
	inline bool get_m_enableVertexGradient_58() const { return ___m_enableVertexGradient_58; }
	inline bool* get_address_of_m_enableVertexGradient_58() { return &___m_enableVertexGradient_58; }
	inline void set_m_enableVertexGradient_58(bool value)
	{
		___m_enableVertexGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_59)); }
	inline int32_t get_m_colorMode_59() const { return ___m_colorMode_59; }
	inline int32_t* get_address_of_m_colorMode_59() { return &___m_colorMode_59; }
	inline void set_m_colorMode_59(int32_t value)
	{
		___m_colorMode_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_60)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_60() const { return ___m_fontColorGradient_60; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_60() { return &___m_fontColorGradient_60; }
	inline void set_m_fontColorGradient_60(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_60 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_61)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_61() const { return ___m_fontColorGradientPreset_61; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_61() { return &___m_fontColorGradientPreset_61; }
	inline void set_m_fontColorGradientPreset_61(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_62)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_62() const { return ___m_spriteAsset_62; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_62() { return &___m_spriteAsset_62; }
	inline void set_m_spriteAsset_62(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_63)); }
	inline bool get_m_tintAllSprites_63() const { return ___m_tintAllSprites_63; }
	inline bool* get_address_of_m_tintAllSprites_63() { return &___m_tintAllSprites_63; }
	inline void set_m_tintAllSprites_63(bool value)
	{
		___m_tintAllSprites_63 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_64)); }
	inline bool get_m_tintSprite_64() const { return ___m_tintSprite_64; }
	inline bool* get_address_of_m_tintSprite_64() { return &___m_tintSprite_64; }
	inline void set_m_tintSprite_64(bool value)
	{
		___m_tintSprite_64 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_65)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_65() const { return ___m_spriteColor_65; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_65() { return &___m_spriteColor_65; }
	inline void set_m_spriteColor_65(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_65 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_66)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_66() const { return ___m_StyleSheet_66; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_66() { return &___m_StyleSheet_66; }
	inline void set_m_StyleSheet_66(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_67)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_67() const { return ___m_TextStyle_67; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_67() { return &___m_TextStyle_67; }
	inline void set_m_TextStyle_67(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_68)); }
	inline int32_t get_m_TextStyleHashCode_68() const { return ___m_TextStyleHashCode_68; }
	inline int32_t* get_address_of_m_TextStyleHashCode_68() { return &___m_TextStyleHashCode_68; }
	inline void set_m_TextStyleHashCode_68(int32_t value)
	{
		___m_TextStyleHashCode_68 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_69)); }
	inline bool get_m_overrideHtmlColors_69() const { return ___m_overrideHtmlColors_69; }
	inline bool* get_address_of_m_overrideHtmlColors_69() { return &___m_overrideHtmlColors_69; }
	inline void set_m_overrideHtmlColors_69(bool value)
	{
		___m_overrideHtmlColors_69 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_70)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_70() const { return ___m_faceColor_70; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_70() { return &___m_faceColor_70; }
	inline void set_m_faceColor_70(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_71)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_71() const { return ___m_outlineColor_71; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_71() { return &___m_outlineColor_71; }
	inline void set_m_outlineColor_71(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_71 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_72)); }
	inline float get_m_outlineWidth_72() const { return ___m_outlineWidth_72; }
	inline float* get_address_of_m_outlineWidth_72() { return &___m_outlineWidth_72; }
	inline void set_m_outlineWidth_72(float value)
	{
		___m_outlineWidth_72 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_73)); }
	inline float get_m_fontSize_73() const { return ___m_fontSize_73; }
	inline float* get_address_of_m_fontSize_73() { return &___m_fontSize_73; }
	inline void set_m_fontSize_73(float value)
	{
		___m_fontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_74)); }
	inline float get_m_currentFontSize_74() const { return ___m_currentFontSize_74; }
	inline float* get_address_of_m_currentFontSize_74() { return &___m_currentFontSize_74; }
	inline void set_m_currentFontSize_74(float value)
	{
		___m_currentFontSize_74 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_75)); }
	inline float get_m_fontSizeBase_75() const { return ___m_fontSizeBase_75; }
	inline float* get_address_of_m_fontSizeBase_75() { return &___m_fontSizeBase_75; }
	inline void set_m_fontSizeBase_75(float value)
	{
		___m_fontSizeBase_75 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_76)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_76() const { return ___m_sizeStack_76; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_76() { return &___m_sizeStack_76; }
	inline void set_m_sizeStack_76(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_76 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_76))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_77)); }
	inline int32_t get_m_fontWeight_77() const { return ___m_fontWeight_77; }
	inline int32_t* get_address_of_m_fontWeight_77() { return &___m_fontWeight_77; }
	inline void set_m_fontWeight_77(int32_t value)
	{
		___m_fontWeight_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_78)); }
	inline int32_t get_m_FontWeightInternal_78() const { return ___m_FontWeightInternal_78; }
	inline int32_t* get_address_of_m_FontWeightInternal_78() { return &___m_FontWeightInternal_78; }
	inline void set_m_FontWeightInternal_78(int32_t value)
	{
		___m_FontWeightInternal_78 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_79)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_79() const { return ___m_FontWeightStack_79; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_79() { return &___m_FontWeightStack_79; }
	inline void set_m_FontWeightStack_79(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_79 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_79))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_80)); }
	inline bool get_m_enableAutoSizing_80() const { return ___m_enableAutoSizing_80; }
	inline bool* get_address_of_m_enableAutoSizing_80() { return &___m_enableAutoSizing_80; }
	inline void set_m_enableAutoSizing_80(bool value)
	{
		___m_enableAutoSizing_80 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_81)); }
	inline float get_m_maxFontSize_81() const { return ___m_maxFontSize_81; }
	inline float* get_address_of_m_maxFontSize_81() { return &___m_maxFontSize_81; }
	inline void set_m_maxFontSize_81(float value)
	{
		___m_maxFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_82)); }
	inline float get_m_minFontSize_82() const { return ___m_minFontSize_82; }
	inline float* get_address_of_m_minFontSize_82() { return &___m_minFontSize_82; }
	inline void set_m_minFontSize_82(float value)
	{
		___m_minFontSize_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_83)); }
	inline int32_t get_m_AutoSizeIterationCount_83() const { return ___m_AutoSizeIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_83() { return &___m_AutoSizeIterationCount_83; }
	inline void set_m_AutoSizeIterationCount_83(int32_t value)
	{
		___m_AutoSizeIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_84)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_84() const { return ___m_AutoSizeMaxIterationCount_84; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_84() { return &___m_AutoSizeMaxIterationCount_84; }
	inline void set_m_AutoSizeMaxIterationCount_84(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_84 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_85)); }
	inline bool get_m_IsAutoSizePointSizeSet_85() const { return ___m_IsAutoSizePointSizeSet_85; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_85() { return &___m_IsAutoSizePointSizeSet_85; }
	inline void set_m_IsAutoSizePointSizeSet_85(bool value)
	{
		___m_IsAutoSizePointSizeSet_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_86)); }
	inline float get_m_fontSizeMin_86() const { return ___m_fontSizeMin_86; }
	inline float* get_address_of_m_fontSizeMin_86() { return &___m_fontSizeMin_86; }
	inline void set_m_fontSizeMin_86(float value)
	{
		___m_fontSizeMin_86 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_87)); }
	inline float get_m_fontSizeMax_87() const { return ___m_fontSizeMax_87; }
	inline float* get_address_of_m_fontSizeMax_87() { return &___m_fontSizeMax_87; }
	inline void set_m_fontSizeMax_87(float value)
	{
		___m_fontSizeMax_87 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_88)); }
	inline int32_t get_m_fontStyle_88() const { return ___m_fontStyle_88; }
	inline int32_t* get_address_of_m_fontStyle_88() { return &___m_fontStyle_88; }
	inline void set_m_fontStyle_88(int32_t value)
	{
		___m_fontStyle_88 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_89)); }
	inline int32_t get_m_FontStyleInternal_89() const { return ___m_FontStyleInternal_89; }
	inline int32_t* get_address_of_m_FontStyleInternal_89() { return &___m_FontStyleInternal_89; }
	inline void set_m_FontStyleInternal_89(int32_t value)
	{
		___m_FontStyleInternal_89 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_90)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_90() const { return ___m_fontStyleStack_90; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_90() { return &___m_fontStyleStack_90; }
	inline void set_m_fontStyleStack_90(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_90 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_91)); }
	inline bool get_m_isUsingBold_91() const { return ___m_isUsingBold_91; }
	inline bool* get_address_of_m_isUsingBold_91() { return &___m_isUsingBold_91; }
	inline void set_m_isUsingBold_91(bool value)
	{
		___m_isUsingBold_91 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_92)); }
	inline int32_t get_m_HorizontalAlignment_92() const { return ___m_HorizontalAlignment_92; }
	inline int32_t* get_address_of_m_HorizontalAlignment_92() { return &___m_HorizontalAlignment_92; }
	inline void set_m_HorizontalAlignment_92(int32_t value)
	{
		___m_HorizontalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_93)); }
	inline int32_t get_m_VerticalAlignment_93() const { return ___m_VerticalAlignment_93; }
	inline int32_t* get_address_of_m_VerticalAlignment_93() { return &___m_VerticalAlignment_93; }
	inline void set_m_VerticalAlignment_93(int32_t value)
	{
		___m_VerticalAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_94)); }
	inline int32_t get_m_textAlignment_94() const { return ___m_textAlignment_94; }
	inline int32_t* get_address_of_m_textAlignment_94() { return &___m_textAlignment_94; }
	inline void set_m_textAlignment_94(int32_t value)
	{
		___m_textAlignment_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_95)); }
	inline int32_t get_m_lineJustification_95() const { return ___m_lineJustification_95; }
	inline int32_t* get_address_of_m_lineJustification_95() { return &___m_lineJustification_95; }
	inline void set_m_lineJustification_95(int32_t value)
	{
		___m_lineJustification_95 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_96)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_96() const { return ___m_lineJustificationStack_96; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_96() { return &___m_lineJustificationStack_96; }
	inline void set_m_lineJustificationStack_96(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_96 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_96))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_97)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_97() const { return ___m_textContainerLocalCorners_97; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_97() { return &___m_textContainerLocalCorners_97; }
	inline void set_m_textContainerLocalCorners_97(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_97 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_97), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_98)); }
	inline float get_m_characterSpacing_98() const { return ___m_characterSpacing_98; }
	inline float* get_address_of_m_characterSpacing_98() { return &___m_characterSpacing_98; }
	inline void set_m_characterSpacing_98(float value)
	{
		___m_characterSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_99)); }
	inline float get_m_cSpacing_99() const { return ___m_cSpacing_99; }
	inline float* get_address_of_m_cSpacing_99() { return &___m_cSpacing_99; }
	inline void set_m_cSpacing_99(float value)
	{
		___m_cSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_100)); }
	inline float get_m_monoSpacing_100() const { return ___m_monoSpacing_100; }
	inline float* get_address_of_m_monoSpacing_100() { return &___m_monoSpacing_100; }
	inline void set_m_monoSpacing_100(float value)
	{
		___m_monoSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_101)); }
	inline float get_m_wordSpacing_101() const { return ___m_wordSpacing_101; }
	inline float* get_address_of_m_wordSpacing_101() { return &___m_wordSpacing_101; }
	inline void set_m_wordSpacing_101(float value)
	{
		___m_wordSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_102)); }
	inline float get_m_lineSpacing_102() const { return ___m_lineSpacing_102; }
	inline float* get_address_of_m_lineSpacing_102() { return &___m_lineSpacing_102; }
	inline void set_m_lineSpacing_102(float value)
	{
		___m_lineSpacing_102 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_103)); }
	inline float get_m_lineSpacingDelta_103() const { return ___m_lineSpacingDelta_103; }
	inline float* get_address_of_m_lineSpacingDelta_103() { return &___m_lineSpacingDelta_103; }
	inline void set_m_lineSpacingDelta_103(float value)
	{
		___m_lineSpacingDelta_103 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_104)); }
	inline float get_m_lineHeight_104() const { return ___m_lineHeight_104; }
	inline float* get_address_of_m_lineHeight_104() { return &___m_lineHeight_104; }
	inline void set_m_lineHeight_104(float value)
	{
		___m_lineHeight_104 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_105)); }
	inline bool get_m_IsDrivenLineSpacing_105() const { return ___m_IsDrivenLineSpacing_105; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_105() { return &___m_IsDrivenLineSpacing_105; }
	inline void set_m_IsDrivenLineSpacing_105(bool value)
	{
		___m_IsDrivenLineSpacing_105 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_106)); }
	inline float get_m_lineSpacingMax_106() const { return ___m_lineSpacingMax_106; }
	inline float* get_address_of_m_lineSpacingMax_106() { return &___m_lineSpacingMax_106; }
	inline void set_m_lineSpacingMax_106(float value)
	{
		___m_lineSpacingMax_106 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_107)); }
	inline float get_m_paragraphSpacing_107() const { return ___m_paragraphSpacing_107; }
	inline float* get_address_of_m_paragraphSpacing_107() { return &___m_paragraphSpacing_107; }
	inline void set_m_paragraphSpacing_107(float value)
	{
		___m_paragraphSpacing_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_108)); }
	inline float get_m_charWidthMaxAdj_108() const { return ___m_charWidthMaxAdj_108; }
	inline float* get_address_of_m_charWidthMaxAdj_108() { return &___m_charWidthMaxAdj_108; }
	inline void set_m_charWidthMaxAdj_108(float value)
	{
		___m_charWidthMaxAdj_108 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_109)); }
	inline float get_m_charWidthAdjDelta_109() const { return ___m_charWidthAdjDelta_109; }
	inline float* get_address_of_m_charWidthAdjDelta_109() { return &___m_charWidthAdjDelta_109; }
	inline void set_m_charWidthAdjDelta_109(float value)
	{
		___m_charWidthAdjDelta_109 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_110)); }
	inline bool get_m_enableWordWrapping_110() const { return ___m_enableWordWrapping_110; }
	inline bool* get_address_of_m_enableWordWrapping_110() { return &___m_enableWordWrapping_110; }
	inline void set_m_enableWordWrapping_110(bool value)
	{
		___m_enableWordWrapping_110 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_111)); }
	inline bool get_m_isCharacterWrappingEnabled_111() const { return ___m_isCharacterWrappingEnabled_111; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_111() { return &___m_isCharacterWrappingEnabled_111; }
	inline void set_m_isCharacterWrappingEnabled_111(bool value)
	{
		___m_isCharacterWrappingEnabled_111 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_112)); }
	inline bool get_m_isNonBreakingSpace_112() const { return ___m_isNonBreakingSpace_112; }
	inline bool* get_address_of_m_isNonBreakingSpace_112() { return &___m_isNonBreakingSpace_112; }
	inline void set_m_isNonBreakingSpace_112(bool value)
	{
		___m_isNonBreakingSpace_112 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_113)); }
	inline bool get_m_isIgnoringAlignment_113() const { return ___m_isIgnoringAlignment_113; }
	inline bool* get_address_of_m_isIgnoringAlignment_113() { return &___m_isIgnoringAlignment_113; }
	inline void set_m_isIgnoringAlignment_113(bool value)
	{
		___m_isIgnoringAlignment_113 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_114)); }
	inline float get_m_wordWrappingRatios_114() const { return ___m_wordWrappingRatios_114; }
	inline float* get_address_of_m_wordWrappingRatios_114() { return &___m_wordWrappingRatios_114; }
	inline void set_m_wordWrappingRatios_114(float value)
	{
		___m_wordWrappingRatios_114 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_115)); }
	inline int32_t get_m_overflowMode_115() const { return ___m_overflowMode_115; }
	inline int32_t* get_address_of_m_overflowMode_115() { return &___m_overflowMode_115; }
	inline void set_m_overflowMode_115(int32_t value)
	{
		___m_overflowMode_115 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_116)); }
	inline int32_t get_m_firstOverflowCharacterIndex_116() const { return ___m_firstOverflowCharacterIndex_116; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_116() { return &___m_firstOverflowCharacterIndex_116; }
	inline void set_m_firstOverflowCharacterIndex_116(int32_t value)
	{
		___m_firstOverflowCharacterIndex_116 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_117)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_117() const { return ___m_linkedTextComponent_117; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_117() { return &___m_linkedTextComponent_117; }
	inline void set_m_linkedTextComponent_117(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_118)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_118() const { return ___parentLinkedComponent_118; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_118() { return &___parentLinkedComponent_118; }
	inline void set_parentLinkedComponent_118(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_118), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_119)); }
	inline bool get_m_isTextTruncated_119() const { return ___m_isTextTruncated_119; }
	inline bool* get_address_of_m_isTextTruncated_119() { return &___m_isTextTruncated_119; }
	inline void set_m_isTextTruncated_119(bool value)
	{
		___m_isTextTruncated_119 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_120)); }
	inline bool get_m_enableKerning_120() const { return ___m_enableKerning_120; }
	inline bool* get_address_of_m_enableKerning_120() { return &___m_enableKerning_120; }
	inline void set_m_enableKerning_120(bool value)
	{
		___m_enableKerning_120 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_121)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_121() const { return ___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_121() { return &___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_121(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_121 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_122)); }
	inline bool get_m_enableExtraPadding_122() const { return ___m_enableExtraPadding_122; }
	inline bool* get_address_of_m_enableExtraPadding_122() { return &___m_enableExtraPadding_122; }
	inline void set_m_enableExtraPadding_122(bool value)
	{
		___m_enableExtraPadding_122 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_123)); }
	inline bool get_checkPaddingRequired_123() const { return ___checkPaddingRequired_123; }
	inline bool* get_address_of_checkPaddingRequired_123() { return &___checkPaddingRequired_123; }
	inline void set_checkPaddingRequired_123(bool value)
	{
		___checkPaddingRequired_123 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_124)); }
	inline bool get_m_isRichText_124() const { return ___m_isRichText_124; }
	inline bool* get_address_of_m_isRichText_124() { return &___m_isRichText_124; }
	inline void set_m_isRichText_124(bool value)
	{
		___m_isRichText_124 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_125)); }
	inline bool get_m_parseCtrlCharacters_125() const { return ___m_parseCtrlCharacters_125; }
	inline bool* get_address_of_m_parseCtrlCharacters_125() { return &___m_parseCtrlCharacters_125; }
	inline void set_m_parseCtrlCharacters_125(bool value)
	{
		___m_parseCtrlCharacters_125 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_126)); }
	inline bool get_m_isOverlay_126() const { return ___m_isOverlay_126; }
	inline bool* get_address_of_m_isOverlay_126() { return &___m_isOverlay_126; }
	inline void set_m_isOverlay_126(bool value)
	{
		___m_isOverlay_126 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_127)); }
	inline bool get_m_isOrthographic_127() const { return ___m_isOrthographic_127; }
	inline bool* get_address_of_m_isOrthographic_127() { return &___m_isOrthographic_127; }
	inline void set_m_isOrthographic_127(bool value)
	{
		___m_isOrthographic_127 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_128)); }
	inline bool get_m_isCullingEnabled_128() const { return ___m_isCullingEnabled_128; }
	inline bool* get_address_of_m_isCullingEnabled_128() { return &___m_isCullingEnabled_128; }
	inline void set_m_isCullingEnabled_128(bool value)
	{
		___m_isCullingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_129)); }
	inline bool get_m_isMaskingEnabled_129() const { return ___m_isMaskingEnabled_129; }
	inline bool* get_address_of_m_isMaskingEnabled_129() { return &___m_isMaskingEnabled_129; }
	inline void set_m_isMaskingEnabled_129(bool value)
	{
		___m_isMaskingEnabled_129 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_130)); }
	inline bool get_isMaskUpdateRequired_130() const { return ___isMaskUpdateRequired_130; }
	inline bool* get_address_of_isMaskUpdateRequired_130() { return &___isMaskUpdateRequired_130; }
	inline void set_isMaskUpdateRequired_130(bool value)
	{
		___isMaskUpdateRequired_130 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_131)); }
	inline bool get_m_ignoreCulling_131() const { return ___m_ignoreCulling_131; }
	inline bool* get_address_of_m_ignoreCulling_131() { return &___m_ignoreCulling_131; }
	inline void set_m_ignoreCulling_131(bool value)
	{
		___m_ignoreCulling_131 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_132)); }
	inline int32_t get_m_horizontalMapping_132() const { return ___m_horizontalMapping_132; }
	inline int32_t* get_address_of_m_horizontalMapping_132() { return &___m_horizontalMapping_132; }
	inline void set_m_horizontalMapping_132(int32_t value)
	{
		___m_horizontalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_133)); }
	inline int32_t get_m_verticalMapping_133() const { return ___m_verticalMapping_133; }
	inline int32_t* get_address_of_m_verticalMapping_133() { return &___m_verticalMapping_133; }
	inline void set_m_verticalMapping_133(int32_t value)
	{
		___m_verticalMapping_133 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_134)); }
	inline float get_m_uvLineOffset_134() const { return ___m_uvLineOffset_134; }
	inline float* get_address_of_m_uvLineOffset_134() { return &___m_uvLineOffset_134; }
	inline void set_m_uvLineOffset_134(float value)
	{
		___m_uvLineOffset_134 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_135)); }
	inline int32_t get_m_renderMode_135() const { return ___m_renderMode_135; }
	inline int32_t* get_address_of_m_renderMode_135() { return &___m_renderMode_135; }
	inline void set_m_renderMode_135(int32_t value)
	{
		___m_renderMode_135 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_136)); }
	inline int32_t get_m_geometrySortingOrder_136() const { return ___m_geometrySortingOrder_136; }
	inline int32_t* get_address_of_m_geometrySortingOrder_136() { return &___m_geometrySortingOrder_136; }
	inline void set_m_geometrySortingOrder_136(int32_t value)
	{
		___m_geometrySortingOrder_136 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_137)); }
	inline bool get_m_IsTextObjectScaleStatic_137() const { return ___m_IsTextObjectScaleStatic_137; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_137() { return &___m_IsTextObjectScaleStatic_137; }
	inline void set_m_IsTextObjectScaleStatic_137(bool value)
	{
		___m_IsTextObjectScaleStatic_137 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_138)); }
	inline bool get_m_VertexBufferAutoSizeReduction_138() const { return ___m_VertexBufferAutoSizeReduction_138; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_138() { return &___m_VertexBufferAutoSizeReduction_138; }
	inline void set_m_VertexBufferAutoSizeReduction_138(bool value)
	{
		___m_VertexBufferAutoSizeReduction_138 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_139)); }
	inline int32_t get_m_firstVisibleCharacter_139() const { return ___m_firstVisibleCharacter_139; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_139() { return &___m_firstVisibleCharacter_139; }
	inline void set_m_firstVisibleCharacter_139(int32_t value)
	{
		___m_firstVisibleCharacter_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_140)); }
	inline int32_t get_m_maxVisibleCharacters_140() const { return ___m_maxVisibleCharacters_140; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_140() { return &___m_maxVisibleCharacters_140; }
	inline void set_m_maxVisibleCharacters_140(int32_t value)
	{
		___m_maxVisibleCharacters_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_141)); }
	inline int32_t get_m_maxVisibleWords_141() const { return ___m_maxVisibleWords_141; }
	inline int32_t* get_address_of_m_maxVisibleWords_141() { return &___m_maxVisibleWords_141; }
	inline void set_m_maxVisibleWords_141(int32_t value)
	{
		___m_maxVisibleWords_141 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_142)); }
	inline int32_t get_m_maxVisibleLines_142() const { return ___m_maxVisibleLines_142; }
	inline int32_t* get_address_of_m_maxVisibleLines_142() { return &___m_maxVisibleLines_142; }
	inline void set_m_maxVisibleLines_142(int32_t value)
	{
		___m_maxVisibleLines_142 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_143)); }
	inline bool get_m_useMaxVisibleDescender_143() const { return ___m_useMaxVisibleDescender_143; }
	inline bool* get_address_of_m_useMaxVisibleDescender_143() { return &___m_useMaxVisibleDescender_143; }
	inline void set_m_useMaxVisibleDescender_143(bool value)
	{
		___m_useMaxVisibleDescender_143 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_144)); }
	inline int32_t get_m_pageToDisplay_144() const { return ___m_pageToDisplay_144; }
	inline int32_t* get_address_of_m_pageToDisplay_144() { return &___m_pageToDisplay_144; }
	inline void set_m_pageToDisplay_144(int32_t value)
	{
		___m_pageToDisplay_144 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_145)); }
	inline bool get_m_isNewPage_145() const { return ___m_isNewPage_145; }
	inline bool* get_address_of_m_isNewPage_145() { return &___m_isNewPage_145; }
	inline void set_m_isNewPage_145(bool value)
	{
		___m_isNewPage_145 = value;
	}

	inline static int32_t get_offset_of_m_margin_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_146)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_146() const { return ___m_margin_146; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_146() { return &___m_margin_146; }
	inline void set_m_margin_146(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_146 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_147)); }
	inline float get_m_marginLeft_147() const { return ___m_marginLeft_147; }
	inline float* get_address_of_m_marginLeft_147() { return &___m_marginLeft_147; }
	inline void set_m_marginLeft_147(float value)
	{
		___m_marginLeft_147 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_148)); }
	inline float get_m_marginRight_148() const { return ___m_marginRight_148; }
	inline float* get_address_of_m_marginRight_148() { return &___m_marginRight_148; }
	inline void set_m_marginRight_148(float value)
	{
		___m_marginRight_148 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_149)); }
	inline float get_m_marginWidth_149() const { return ___m_marginWidth_149; }
	inline float* get_address_of_m_marginWidth_149() { return &___m_marginWidth_149; }
	inline void set_m_marginWidth_149(float value)
	{
		___m_marginWidth_149 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_150)); }
	inline float get_m_marginHeight_150() const { return ___m_marginHeight_150; }
	inline float* get_address_of_m_marginHeight_150() { return &___m_marginHeight_150; }
	inline void set_m_marginHeight_150(float value)
	{
		___m_marginHeight_150 = value;
	}

	inline static int32_t get_offset_of_m_width_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_151)); }
	inline float get_m_width_151() const { return ___m_width_151; }
	inline float* get_address_of_m_width_151() { return &___m_width_151; }
	inline void set_m_width_151(float value)
	{
		___m_width_151 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_152)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_152() const { return ___m_textInfo_152; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_152() { return &___m_textInfo_152; }
	inline void set_m_textInfo_152(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_152 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_152), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_153)); }
	inline bool get_m_havePropertiesChanged_153() const { return ___m_havePropertiesChanged_153; }
	inline bool* get_address_of_m_havePropertiesChanged_153() { return &___m_havePropertiesChanged_153; }
	inline void set_m_havePropertiesChanged_153(bool value)
	{
		___m_havePropertiesChanged_153 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_154)); }
	inline bool get_m_isUsingLegacyAnimationComponent_154() const { return ___m_isUsingLegacyAnimationComponent_154; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_154() { return &___m_isUsingLegacyAnimationComponent_154; }
	inline void set_m_isUsingLegacyAnimationComponent_154(bool value)
	{
		___m_isUsingLegacyAnimationComponent_154 = value;
	}

	inline static int32_t get_offset_of_m_transform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_155)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_155() const { return ___m_transform_155; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_155() { return &___m_transform_155; }
	inline void set_m_transform_155(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_156)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_156() const { return ___m_rectTransform_156; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_156() { return &___m_rectTransform_156; }
	inline void set_m_rectTransform_156(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_156), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_157)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_157() const { return ___m_PreviousRectTransformSize_157; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_157() { return &___m_PreviousRectTransformSize_157; }
	inline void set_m_PreviousRectTransformSize_157(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_157 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_158)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_158() const { return ___m_PreviousPivotPosition_158; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_158() { return &___m_PreviousPivotPosition_158; }
	inline void set_m_PreviousPivotPosition_158(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_158 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_159)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_159() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return &___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_159(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_159 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_160)); }
	inline bool get_m_autoSizeTextContainer_160() const { return ___m_autoSizeTextContainer_160; }
	inline bool* get_address_of_m_autoSizeTextContainer_160() { return &___m_autoSizeTextContainer_160; }
	inline void set_m_autoSizeTextContainer_160(bool value)
	{
		___m_autoSizeTextContainer_160 = value;
	}

	inline static int32_t get_offset_of_m_mesh_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_161)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_161() const { return ___m_mesh_161; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_161() { return &___m_mesh_161; }
	inline void set_m_mesh_161(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_161 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_161), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_162)); }
	inline bool get_m_isVolumetricText_162() const { return ___m_isVolumetricText_162; }
	inline bool* get_address_of_m_isVolumetricText_162() { return &___m_isVolumetricText_162; }
	inline void set_m_isVolumetricText_162(bool value)
	{
		___m_isVolumetricText_162 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_165)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_165() const { return ___OnPreRenderText_165; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_165() { return &___OnPreRenderText_165; }
	inline void set_OnPreRenderText_165(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_166)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_166() const { return ___m_spriteAnimator_166; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_166() { return &___m_spriteAnimator_166; }
	inline void set_m_spriteAnimator_166(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_166 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_166), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_167)); }
	inline float get_m_flexibleHeight_167() const { return ___m_flexibleHeight_167; }
	inline float* get_address_of_m_flexibleHeight_167() { return &___m_flexibleHeight_167; }
	inline void set_m_flexibleHeight_167(float value)
	{
		___m_flexibleHeight_167 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_168)); }
	inline float get_m_flexibleWidth_168() const { return ___m_flexibleWidth_168; }
	inline float* get_address_of_m_flexibleWidth_168() { return &___m_flexibleWidth_168; }
	inline void set_m_flexibleWidth_168(float value)
	{
		___m_flexibleWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_169)); }
	inline float get_m_minWidth_169() const { return ___m_minWidth_169; }
	inline float* get_address_of_m_minWidth_169() { return &___m_minWidth_169; }
	inline void set_m_minWidth_169(float value)
	{
		___m_minWidth_169 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_170)); }
	inline float get_m_minHeight_170() const { return ___m_minHeight_170; }
	inline float* get_address_of_m_minHeight_170() { return &___m_minHeight_170; }
	inline void set_m_minHeight_170(float value)
	{
		___m_minHeight_170 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_171)); }
	inline float get_m_maxWidth_171() const { return ___m_maxWidth_171; }
	inline float* get_address_of_m_maxWidth_171() { return &___m_maxWidth_171; }
	inline void set_m_maxWidth_171(float value)
	{
		___m_maxWidth_171 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_172)); }
	inline float get_m_maxHeight_172() const { return ___m_maxHeight_172; }
	inline float* get_address_of_m_maxHeight_172() { return &___m_maxHeight_172; }
	inline void set_m_maxHeight_172(float value)
	{
		___m_maxHeight_172 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_173)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_173() const { return ___m_LayoutElement_173; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_173() { return &___m_LayoutElement_173; }
	inline void set_m_LayoutElement_173(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_173 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_173), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_174)); }
	inline float get_m_preferredWidth_174() const { return ___m_preferredWidth_174; }
	inline float* get_address_of_m_preferredWidth_174() { return &___m_preferredWidth_174; }
	inline void set_m_preferredWidth_174(float value)
	{
		___m_preferredWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_175)); }
	inline float get_m_renderedWidth_175() const { return ___m_renderedWidth_175; }
	inline float* get_address_of_m_renderedWidth_175() { return &___m_renderedWidth_175; }
	inline void set_m_renderedWidth_175(float value)
	{
		___m_renderedWidth_175 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_176)); }
	inline bool get_m_isPreferredWidthDirty_176() const { return ___m_isPreferredWidthDirty_176; }
	inline bool* get_address_of_m_isPreferredWidthDirty_176() { return &___m_isPreferredWidthDirty_176; }
	inline void set_m_isPreferredWidthDirty_176(bool value)
	{
		___m_isPreferredWidthDirty_176 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_177)); }
	inline float get_m_preferredHeight_177() const { return ___m_preferredHeight_177; }
	inline float* get_address_of_m_preferredHeight_177() { return &___m_preferredHeight_177; }
	inline void set_m_preferredHeight_177(float value)
	{
		___m_preferredHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_178)); }
	inline float get_m_renderedHeight_178() const { return ___m_renderedHeight_178; }
	inline float* get_address_of_m_renderedHeight_178() { return &___m_renderedHeight_178; }
	inline void set_m_renderedHeight_178(float value)
	{
		___m_renderedHeight_178 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_179)); }
	inline bool get_m_isPreferredHeightDirty_179() const { return ___m_isPreferredHeightDirty_179; }
	inline bool* get_address_of_m_isPreferredHeightDirty_179() { return &___m_isPreferredHeightDirty_179; }
	inline void set_m_isPreferredHeightDirty_179(bool value)
	{
		___m_isPreferredHeightDirty_179 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_180)); }
	inline bool get_m_isCalculatingPreferredValues_180() const { return ___m_isCalculatingPreferredValues_180; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_180() { return &___m_isCalculatingPreferredValues_180; }
	inline void set_m_isCalculatingPreferredValues_180(bool value)
	{
		___m_isCalculatingPreferredValues_180 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_181)); }
	inline int32_t get_m_layoutPriority_181() const { return ___m_layoutPriority_181; }
	inline int32_t* get_address_of_m_layoutPriority_181() { return &___m_layoutPriority_181; }
	inline void set_m_layoutPriority_181(int32_t value)
	{
		___m_layoutPriority_181 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_182)); }
	inline bool get_m_isLayoutDirty_182() const { return ___m_isLayoutDirty_182; }
	inline bool* get_address_of_m_isLayoutDirty_182() { return &___m_isLayoutDirty_182; }
	inline void set_m_isLayoutDirty_182(bool value)
	{
		___m_isLayoutDirty_182 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_183)); }
	inline bool get_m_isAwake_183() const { return ___m_isAwake_183; }
	inline bool* get_address_of_m_isAwake_183() { return &___m_isAwake_183; }
	inline void set_m_isAwake_183(bool value)
	{
		___m_isAwake_183 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_184)); }
	inline bool get_m_isWaitingOnResourceLoad_184() const { return ___m_isWaitingOnResourceLoad_184; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_184() { return &___m_isWaitingOnResourceLoad_184; }
	inline void set_m_isWaitingOnResourceLoad_184(bool value)
	{
		___m_isWaitingOnResourceLoad_184 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_185)); }
	inline int32_t get_m_inputSource_185() const { return ___m_inputSource_185; }
	inline int32_t* get_address_of_m_inputSource_185() { return &___m_inputSource_185; }
	inline void set_m_inputSource_185(int32_t value)
	{
		___m_inputSource_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_186)); }
	inline float get_m_fontScaleMultiplier_186() const { return ___m_fontScaleMultiplier_186; }
	inline float* get_address_of_m_fontScaleMultiplier_186() { return &___m_fontScaleMultiplier_186; }
	inline void set_m_fontScaleMultiplier_186(float value)
	{
		___m_fontScaleMultiplier_186 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_190)); }
	inline float get_tag_LineIndent_190() const { return ___tag_LineIndent_190; }
	inline float* get_address_of_tag_LineIndent_190() { return &___tag_LineIndent_190; }
	inline void set_tag_LineIndent_190(float value)
	{
		___tag_LineIndent_190 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_191)); }
	inline float get_tag_Indent_191() const { return ___tag_Indent_191; }
	inline float* get_address_of_tag_Indent_191() { return &___tag_Indent_191; }
	inline void set_tag_Indent_191(float value)
	{
		___tag_Indent_191 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_192)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_192() const { return ___m_indentStack_192; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_192() { return &___m_indentStack_192; }
	inline void set_m_indentStack_192(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_192 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_192))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_193)); }
	inline bool get_tag_NoParsing_193() const { return ___tag_NoParsing_193; }
	inline bool* get_address_of_tag_NoParsing_193() { return &___tag_NoParsing_193; }
	inline void set_tag_NoParsing_193(bool value)
	{
		___tag_NoParsing_193 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_194)); }
	inline bool get_m_isParsingText_194() const { return ___m_isParsingText_194; }
	inline bool* get_address_of_m_isParsingText_194() { return &___m_isParsingText_194; }
	inline void set_m_isParsingText_194(bool value)
	{
		___m_isParsingText_194 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_195)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_195() const { return ___m_FXMatrix_195; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_195() { return &___m_FXMatrix_195; }
	inline void set_m_FXMatrix_195(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_195 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_196)); }
	inline bool get_m_isFXMatrixSet_196() const { return ___m_isFXMatrixSet_196; }
	inline bool* get_address_of_m_isFXMatrixSet_196() { return &___m_isFXMatrixSet_196; }
	inline void set_m_isFXMatrixSet_196(bool value)
	{
		___m_isFXMatrixSet_196 = value;
	}

	inline static int32_t get_offset_of_m_TextProcessingArray_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextProcessingArray_197)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_TextProcessingArray_197() const { return ___m_TextProcessingArray_197; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_TextProcessingArray_197() { return &___m_TextProcessingArray_197; }
	inline void set_m_TextProcessingArray_197(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_TextProcessingArray_197 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextProcessingArray_197), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalTextProcessingArraySize_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalTextProcessingArraySize_198)); }
	inline int32_t get_m_InternalTextProcessingArraySize_198() const { return ___m_InternalTextProcessingArraySize_198; }
	inline int32_t* get_address_of_m_InternalTextProcessingArraySize_198() { return &___m_InternalTextProcessingArraySize_198; }
	inline void set_m_InternalTextProcessingArraySize_198(int32_t value)
	{
		___m_InternalTextProcessingArraySize_198 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_199)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_199() const { return ___m_internalCharacterInfo_199; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_199() { return &___m_internalCharacterInfo_199; }
	inline void set_m_internalCharacterInfo_199(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_199 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_199), (void*)value);
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_200)); }
	inline int32_t get_m_totalCharacterCount_200() const { return ___m_totalCharacterCount_200; }
	inline int32_t* get_address_of_m_totalCharacterCount_200() { return &___m_totalCharacterCount_200; }
	inline void set_m_totalCharacterCount_200(int32_t value)
	{
		___m_totalCharacterCount_200 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_207)); }
	inline int32_t get_m_characterCount_207() const { return ___m_characterCount_207; }
	inline int32_t* get_address_of_m_characterCount_207() { return &___m_characterCount_207; }
	inline void set_m_characterCount_207(int32_t value)
	{
		___m_characterCount_207 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_208)); }
	inline int32_t get_m_firstCharacterOfLine_208() const { return ___m_firstCharacterOfLine_208; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_208() { return &___m_firstCharacterOfLine_208; }
	inline void set_m_firstCharacterOfLine_208(int32_t value)
	{
		___m_firstCharacterOfLine_208 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_209)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_209() const { return ___m_firstVisibleCharacterOfLine_209; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_209() { return &___m_firstVisibleCharacterOfLine_209; }
	inline void set_m_firstVisibleCharacterOfLine_209(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_209 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_210)); }
	inline int32_t get_m_lastCharacterOfLine_210() const { return ___m_lastCharacterOfLine_210; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_210() { return &___m_lastCharacterOfLine_210; }
	inline void set_m_lastCharacterOfLine_210(int32_t value)
	{
		___m_lastCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_211)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_211() const { return ___m_lastVisibleCharacterOfLine_211; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_211() { return &___m_lastVisibleCharacterOfLine_211; }
	inline void set_m_lastVisibleCharacterOfLine_211(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_212)); }
	inline int32_t get_m_lineNumber_212() const { return ___m_lineNumber_212; }
	inline int32_t* get_address_of_m_lineNumber_212() { return &___m_lineNumber_212; }
	inline void set_m_lineNumber_212(int32_t value)
	{
		___m_lineNumber_212 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_213)); }
	inline int32_t get_m_lineVisibleCharacterCount_213() const { return ___m_lineVisibleCharacterCount_213; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_213() { return &___m_lineVisibleCharacterCount_213; }
	inline void set_m_lineVisibleCharacterCount_213(int32_t value)
	{
		___m_lineVisibleCharacterCount_213 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_214)); }
	inline int32_t get_m_pageNumber_214() const { return ___m_pageNumber_214; }
	inline int32_t* get_address_of_m_pageNumber_214() { return &___m_pageNumber_214; }
	inline void set_m_pageNumber_214(int32_t value)
	{
		___m_pageNumber_214 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_215)); }
	inline float get_m_PageAscender_215() const { return ___m_PageAscender_215; }
	inline float* get_address_of_m_PageAscender_215() { return &___m_PageAscender_215; }
	inline void set_m_PageAscender_215(float value)
	{
		___m_PageAscender_215 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_216)); }
	inline float get_m_maxTextAscender_216() const { return ___m_maxTextAscender_216; }
	inline float* get_address_of_m_maxTextAscender_216() { return &___m_maxTextAscender_216; }
	inline void set_m_maxTextAscender_216(float value)
	{
		___m_maxTextAscender_216 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_217)); }
	inline float get_m_maxCapHeight_217() const { return ___m_maxCapHeight_217; }
	inline float* get_address_of_m_maxCapHeight_217() { return &___m_maxCapHeight_217; }
	inline void set_m_maxCapHeight_217(float value)
	{
		___m_maxCapHeight_217 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_218)); }
	inline float get_m_ElementAscender_218() const { return ___m_ElementAscender_218; }
	inline float* get_address_of_m_ElementAscender_218() { return &___m_ElementAscender_218; }
	inline void set_m_ElementAscender_218(float value)
	{
		___m_ElementAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_219)); }
	inline float get_m_ElementDescender_219() const { return ___m_ElementDescender_219; }
	inline float* get_address_of_m_ElementDescender_219() { return &___m_ElementDescender_219; }
	inline void set_m_ElementDescender_219(float value)
	{
		___m_ElementDescender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_220)); }
	inline float get_m_maxLineAscender_220() const { return ___m_maxLineAscender_220; }
	inline float* get_address_of_m_maxLineAscender_220() { return &___m_maxLineAscender_220; }
	inline void set_m_maxLineAscender_220(float value)
	{
		___m_maxLineAscender_220 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_221)); }
	inline float get_m_maxLineDescender_221() const { return ___m_maxLineDescender_221; }
	inline float* get_address_of_m_maxLineDescender_221() { return &___m_maxLineDescender_221; }
	inline void set_m_maxLineDescender_221(float value)
	{
		___m_maxLineDescender_221 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_222)); }
	inline float get_m_startOfLineAscender_222() const { return ___m_startOfLineAscender_222; }
	inline float* get_address_of_m_startOfLineAscender_222() { return &___m_startOfLineAscender_222; }
	inline void set_m_startOfLineAscender_222(float value)
	{
		___m_startOfLineAscender_222 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_223)); }
	inline float get_m_startOfLineDescender_223() const { return ___m_startOfLineDescender_223; }
	inline float* get_address_of_m_startOfLineDescender_223() { return &___m_startOfLineDescender_223; }
	inline void set_m_startOfLineDescender_223(float value)
	{
		___m_startOfLineDescender_223 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_224)); }
	inline float get_m_lineOffset_224() const { return ___m_lineOffset_224; }
	inline float* get_address_of_m_lineOffset_224() { return &___m_lineOffset_224; }
	inline void set_m_lineOffset_224(float value)
	{
		___m_lineOffset_224 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_225)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_225() const { return ___m_meshExtents_225; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_225() { return &___m_meshExtents_225; }
	inline void set_m_meshExtents_225(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_225 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_226)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_226() const { return ___m_htmlColor_226; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_226() { return &___m_htmlColor_226; }
	inline void set_m_htmlColor_226(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_226 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_227)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_227() const { return ___m_colorStack_227; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_227() { return &___m_colorStack_227; }
	inline void set_m_colorStack_227(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_227 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_227))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_228)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_228() const { return ___m_underlineColorStack_228; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_228() { return &___m_underlineColorStack_228; }
	inline void set_m_underlineColorStack_228(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_228 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_228))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_229)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_229() const { return ___m_strikethroughColorStack_229; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_229() { return &___m_strikethroughColorStack_229; }
	inline void set_m_strikethroughColorStack_229(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_230)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_230() const { return ___m_HighlightStateStack_230; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_230() { return &___m_HighlightStateStack_230; }
	inline void set_m_HighlightStateStack_230(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_231)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_231() const { return ___m_colorGradientPreset_231; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_231() { return &___m_colorGradientPreset_231; }
	inline void set_m_colorGradientPreset_231(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_231 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_231), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_232)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_232() const { return ___m_colorGradientStack_232; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_232() { return &___m_colorGradientStack_232; }
	inline void set_m_colorGradientStack_232(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_233)); }
	inline bool get_m_colorGradientPresetIsTinted_233() const { return ___m_colorGradientPresetIsTinted_233; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_233() { return &___m_colorGradientPresetIsTinted_233; }
	inline void set_m_colorGradientPresetIsTinted_233(bool value)
	{
		___m_colorGradientPresetIsTinted_233 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_234)); }
	inline float get_m_tabSpacing_234() const { return ___m_tabSpacing_234; }
	inline float* get_address_of_m_tabSpacing_234() { return &___m_tabSpacing_234; }
	inline void set_m_tabSpacing_234(float value)
	{
		___m_tabSpacing_234 = value;
	}

	inline static int32_t get_offset_of_m_spacing_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_235)); }
	inline float get_m_spacing_235() const { return ___m_spacing_235; }
	inline float* get_address_of_m_spacing_235() { return &___m_spacing_235; }
	inline void set_m_spacing_235(float value)
	{
		___m_spacing_235 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_236)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_236() const { return ___m_TextStyleStacks_236; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_236() { return &___m_TextStyleStacks_236; }
	inline void set_m_TextStyleStacks_236(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_236 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_236), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_237)); }
	inline int32_t get_m_TextStyleStackDepth_237() const { return ___m_TextStyleStackDepth_237; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_237() { return &___m_TextStyleStackDepth_237; }
	inline void set_m_TextStyleStackDepth_237(int32_t value)
	{
		___m_TextStyleStackDepth_237 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_238)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_238() const { return ___m_ItalicAngleStack_238; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_238() { return &___m_ItalicAngleStack_238; }
	inline void set_m_ItalicAngleStack_238(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_238 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_238))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_239)); }
	inline int32_t get_m_ItalicAngle_239() const { return ___m_ItalicAngle_239; }
	inline int32_t* get_address_of_m_ItalicAngle_239() { return &___m_ItalicAngle_239; }
	inline void set_m_ItalicAngle_239(int32_t value)
	{
		___m_ItalicAngle_239 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_240)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_240() const { return ___m_actionStack_240; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_240() { return &___m_actionStack_240; }
	inline void set_m_actionStack_240(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_240 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_240))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_241)); }
	inline float get_m_padding_241() const { return ___m_padding_241; }
	inline float* get_address_of_m_padding_241() { return &___m_padding_241; }
	inline void set_m_padding_241(float value)
	{
		___m_padding_241 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_242)); }
	inline float get_m_baselineOffset_242() const { return ___m_baselineOffset_242; }
	inline float* get_address_of_m_baselineOffset_242() { return &___m_baselineOffset_242; }
	inline void set_m_baselineOffset_242(float value)
	{
		___m_baselineOffset_242 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_243)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_243() const { return ___m_baselineOffsetStack_243; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_243() { return &___m_baselineOffsetStack_243; }
	inline void set_m_baselineOffsetStack_243(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_243 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_243))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_244)); }
	inline float get_m_xAdvance_244() const { return ___m_xAdvance_244; }
	inline float* get_address_of_m_xAdvance_244() { return &___m_xAdvance_244; }
	inline void set_m_xAdvance_244(float value)
	{
		___m_xAdvance_244 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_245)); }
	inline int32_t get_m_textElementType_245() const { return ___m_textElementType_245; }
	inline int32_t* get_address_of_m_textElementType_245() { return &___m_textElementType_245; }
	inline void set_m_textElementType_245(int32_t value)
	{
		___m_textElementType_245 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_246)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_246() const { return ___m_cached_TextElement_246; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_246() { return &___m_cached_TextElement_246; }
	inline void set_m_cached_TextElement_246(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_246 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_246), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_247)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_247() const { return ___m_Ellipsis_247; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_247() { return &___m_Ellipsis_247; }
	inline void set_m_Ellipsis_247(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_247 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_248)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_248() const { return ___m_Underline_248; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_248() { return &___m_Underline_248; }
	inline void set_m_Underline_248(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_248 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_249)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_249() const { return ___m_defaultSpriteAsset_249; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_249() { return &___m_defaultSpriteAsset_249; }
	inline void set_m_defaultSpriteAsset_249(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_250)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_250() const { return ___m_currentSpriteAsset_250; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_250() { return &___m_currentSpriteAsset_250; }
	inline void set_m_currentSpriteAsset_250(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_250 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_250), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_251)); }
	inline int32_t get_m_spriteCount_251() const { return ___m_spriteCount_251; }
	inline int32_t* get_address_of_m_spriteCount_251() { return &___m_spriteCount_251; }
	inline void set_m_spriteCount_251(int32_t value)
	{
		___m_spriteCount_251 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_252)); }
	inline int32_t get_m_spriteIndex_252() const { return ___m_spriteIndex_252; }
	inline int32_t* get_address_of_m_spriteIndex_252() { return &___m_spriteIndex_252; }
	inline void set_m_spriteIndex_252(int32_t value)
	{
		___m_spriteIndex_252 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_253)); }
	inline int32_t get_m_spriteAnimationID_253() const { return ___m_spriteAnimationID_253; }
	inline int32_t* get_address_of_m_spriteAnimationID_253() { return &___m_spriteAnimationID_253; }
	inline void set_m_spriteAnimationID_253(int32_t value)
	{
		___m_spriteAnimationID_253 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_256)); }
	inline bool get_m_ignoreActiveState_256() const { return ___m_ignoreActiveState_256; }
	inline bool* get_address_of_m_ignoreActiveState_256() { return &___m_ignoreActiveState_256; }
	inline void set_m_ignoreActiveState_256(bool value)
	{
		___m_ignoreActiveState_256 = value;
	}

	inline static int32_t get_offset_of_m_TextBackingArray_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextBackingArray_257)); }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  get_m_TextBackingArray_257() const { return ___m_TextBackingArray_257; }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B * get_address_of_m_TextBackingArray_257() { return &___m_TextBackingArray_257; }
	inline void set_m_TextBackingArray_257(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  value)
	{
		___m_TextBackingArray_257 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextBackingArray_257))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_k_Power_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_258)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_258() const { return ___k_Power_258; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_258() { return &___k_Power_258; }
	inline void set_k_Power_258(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_258 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_258), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;

public:
	inline static int32_t get_offset_of_m_materialReferences_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferences_45)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_45() const { return ___m_materialReferences_45; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_45() { return &___m_materialReferences_45; }
	inline void set_m_materialReferences_45(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceIndexLookup_46)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_46() const { return ___m_materialReferenceIndexLookup_46; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_46() { return &___m_materialReferenceIndexLookup_46; }
	inline void set_m_materialReferenceIndexLookup_46(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceStack_47)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_47() const { return ___m_materialReferenceStack_47; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_47() { return &___m_materialReferenceStack_47; }
	inline void set_m_materialReferenceStack_47(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_47))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_colorWhite_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_55() const { return ___s_colorWhite_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_55() { return &___s_colorWhite_55; }
	inline void set_s_colorWhite_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_55 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_163)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_163() const { return ___OnFontAssetRequest_163; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_163() { return &___OnFontAssetRequest_163; }
	inline void set_OnFontAssetRequest_163(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_164)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_164() const { return ___OnSpriteAssetRequest_164; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_164() { return &___OnSpriteAssetRequest_164; }
	inline void set_OnSpriteAssetRequest_164(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_htmlTag_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_htmlTag_187)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_187() const { return ___m_htmlTag_187; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_187() { return &___m_htmlTag_187; }
	inline void set_m_htmlTag_187(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_xmlAttribute_188)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_188() const { return ___m_xmlAttribute_188; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_188() { return &___m_xmlAttribute_188; }
	inline void set_m_xmlAttribute_188(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_attributeParameterValues_189)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_189() const { return ___m_attributeParameterValues_189; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_189() { return &___m_attributeParameterValues_189; }
	inline void set_m_attributeParameterValues_189(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedWordWrapState_201)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_201() const { return ___m_SavedWordWrapState_201; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_201() { return &___m_SavedWordWrapState_201; }
	inline void set_m_SavedWordWrapState_201(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_201 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLineState_202)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_202() const { return ___m_SavedLineState_202; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_202() { return &___m_SavedLineState_202; }
	inline void set_m_SavedLineState_202(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedEllipsisState_203)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_203() const { return ___m_SavedEllipsisState_203; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_203() { return &___m_SavedEllipsisState_203; }
	inline void set_m_SavedEllipsisState_203(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLastValidState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_204() const { return ___m_SavedLastValidState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_204() { return &___m_SavedLastValidState_204; }
	inline void set_m_SavedLastValidState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedSoftLineBreakState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_205() const { return ___m_SavedSoftLineBreakState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_205() { return &___m_SavedSoftLineBreakState_205; }
	inline void set_m_SavedSoftLineBreakState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_EllipsisInsertionCandidateStack_206)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_206() const { return ___m_EllipsisInsertionCandidateStack_206; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_206() { return &___m_EllipsisInsertionCandidateStack_206; }
	inline void set_m_EllipsisInsertionCandidateStack_206(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_206))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_k_ParseTextMarker_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_ParseTextMarker_254)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseTextMarker_254() const { return ___k_ParseTextMarker_254; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseTextMarker_254() { return &___k_ParseTextMarker_254; }
	inline void set_k_ParseTextMarker_254(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseTextMarker_254 = value;
	}

	inline static int32_t get_offset_of_k_InsertNewLineMarker_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_InsertNewLineMarker_255)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_InsertNewLineMarker_255() const { return ___k_InsertNewLineMarker_255; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_InsertNewLineMarker_255() { return &___k_InsertNewLineMarker_255; }
	inline void set_k_InsertNewLineMarker_255(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_InsertNewLineMarker_255 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_259)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_259() const { return ___k_LargePositiveVector2_259; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_259() { return &___k_LargePositiveVector2_259; }
	inline void set_k_LargePositiveVector2_259(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_260() const { return ___k_LargeNegativeVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_260() { return &___k_LargeNegativeVector2_260; }
	inline void set_k_LargeNegativeVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_261)); }
	inline float get_k_LargePositiveFloat_261() const { return ___k_LargePositiveFloat_261; }
	inline float* get_address_of_k_LargePositiveFloat_261() { return &___k_LargePositiveFloat_261; }
	inline void set_k_LargePositiveFloat_261(float value)
	{
		___k_LargePositiveFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_262)); }
	inline float get_k_LargeNegativeFloat_262() const { return ___k_LargeNegativeFloat_262; }
	inline float* get_address_of_k_LargeNegativeFloat_262() { return &___k_LargeNegativeFloat_262; }
	inline void set_k_LargeNegativeFloat_262(float value)
	{
		___k_LargeNegativeFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_263)); }
	inline int32_t get_k_LargePositiveInt_263() const { return ___k_LargePositiveInt_263; }
	inline int32_t* get_address_of_k_LargePositiveInt_263() { return &___k_LargePositiveInt_263; }
	inline void set_k_LargePositiveInt_263(int32_t value)
	{
		___k_LargePositiveInt_263 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_264)); }
	inline int32_t get_k_LargeNegativeInt_264() const { return ___k_LargeNegativeInt_264; }
	inline int32_t* get_address_of_k_LargeNegativeInt_264() { return &___k_LargeNegativeInt_264; }
	inline void set_k_LargeNegativeInt_264(int32_t value)
	{
		___k_LargeNegativeInt_264 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};


// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1  : public TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_265;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* ___m_subTextObjects_266;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_267;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_RectTransformCorners_268;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_canvasRenderer_269;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_canvas_270;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_272;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_273;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_baseMaterial_274;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_275;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_maskOffset_276;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_EnvMapMatrix_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_299;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DelayedGraphicRebuild_300;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DelayedMaterialRebuild_301;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_ClipRect_302;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_303;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_304;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_265() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_hasFontAssetChanged_265)); }
	inline bool get_m_hasFontAssetChanged_265() const { return ___m_hasFontAssetChanged_265; }
	inline bool* get_address_of_m_hasFontAssetChanged_265() { return &___m_hasFontAssetChanged_265; }
	inline void set_m_hasFontAssetChanged_265(bool value)
	{
		___m_hasFontAssetChanged_265 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_266() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_subTextObjects_266)); }
	inline TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* get_m_subTextObjects_266() const { return ___m_subTextObjects_266; }
	inline TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552** get_address_of_m_subTextObjects_266() { return &___m_subTextObjects_266; }
	inline void set_m_subTextObjects_266(TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* value)
	{
		___m_subTextObjects_266 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_266), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_267() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_previousLossyScaleY_267)); }
	inline float get_m_previousLossyScaleY_267() const { return ___m_previousLossyScaleY_267; }
	inline float* get_address_of_m_previousLossyScaleY_267() { return &___m_previousLossyScaleY_267; }
	inline void set_m_previousLossyScaleY_267(float value)
	{
		___m_previousLossyScaleY_267 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_268() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_RectTransformCorners_268)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_RectTransformCorners_268() const { return ___m_RectTransformCorners_268; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_RectTransformCorners_268() { return &___m_RectTransformCorners_268; }
	inline void set_m_RectTransformCorners_268(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_RectTransformCorners_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_269() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_canvasRenderer_269)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_canvasRenderer_269() const { return ___m_canvasRenderer_269; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_canvasRenderer_269() { return &___m_canvasRenderer_269; }
	inline void set_m_canvasRenderer_269(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_canvasRenderer_269 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvasRenderer_269), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvas_270() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_canvas_270)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_canvas_270() const { return ___m_canvas_270; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_canvas_270() { return &___m_canvas_270; }
	inline void set_m_canvas_270(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_canvas_270 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvas_270), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasScaleFactor_271() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_CanvasScaleFactor_271)); }
	inline float get_m_CanvasScaleFactor_271() const { return ___m_CanvasScaleFactor_271; }
	inline float* get_address_of_m_CanvasScaleFactor_271() { return &___m_CanvasScaleFactor_271; }
	inline void set_m_CanvasScaleFactor_271(float value)
	{
		___m_CanvasScaleFactor_271 = value;
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_272() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isFirstAllocation_272)); }
	inline bool get_m_isFirstAllocation_272() const { return ___m_isFirstAllocation_272; }
	inline bool* get_address_of_m_isFirstAllocation_272() { return &___m_isFirstAllocation_272; }
	inline void set_m_isFirstAllocation_272(bool value)
	{
		___m_isFirstAllocation_272 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_273() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_max_characters_273)); }
	inline int32_t get_m_max_characters_273() const { return ___m_max_characters_273; }
	inline int32_t* get_address_of_m_max_characters_273() { return &___m_max_characters_273; }
	inline void set_m_max_characters_273(int32_t value)
	{
		___m_max_characters_273 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_274() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_baseMaterial_274)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_baseMaterial_274() const { return ___m_baseMaterial_274; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_baseMaterial_274() { return &___m_baseMaterial_274; }
	inline void set_m_baseMaterial_274(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_baseMaterial_274 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_baseMaterial_274), (void*)value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_275() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isScrollRegionSet_275)); }
	inline bool get_m_isScrollRegionSet_275() const { return ___m_isScrollRegionSet_275; }
	inline bool* get_address_of_m_isScrollRegionSet_275() { return &___m_isScrollRegionSet_275; }
	inline void set_m_isScrollRegionSet_275(bool value)
	{
		___m_isScrollRegionSet_275 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_276() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_maskOffset_276)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_maskOffset_276() const { return ___m_maskOffset_276; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_maskOffset_276() { return &___m_maskOffset_276; }
	inline void set_m_maskOffset_276(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_maskOffset_276 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_277() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_EnvMapMatrix_277)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_EnvMapMatrix_277() const { return ___m_EnvMapMatrix_277; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_EnvMapMatrix_277() { return &___m_EnvMapMatrix_277; }
	inline void set_m_EnvMapMatrix_277(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_EnvMapMatrix_277 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_278() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isRegisteredForEvents_278)); }
	inline bool get_m_isRegisteredForEvents_278() const { return ___m_isRegisteredForEvents_278; }
	inline bool* get_address_of_m_isRegisteredForEvents_278() { return &___m_isRegisteredForEvents_278; }
	inline void set_m_isRegisteredForEvents_278(bool value)
	{
		___m_isRegisteredForEvents_278 = value;
	}

	inline static int32_t get_offset_of_m_isRebuildingLayout_299() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isRebuildingLayout_299)); }
	inline bool get_m_isRebuildingLayout_299() const { return ___m_isRebuildingLayout_299; }
	inline bool* get_address_of_m_isRebuildingLayout_299() { return &___m_isRebuildingLayout_299; }
	inline void set_m_isRebuildingLayout_299(bool value)
	{
		___m_isRebuildingLayout_299 = value;
	}

	inline static int32_t get_offset_of_m_DelayedGraphicRebuild_300() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_DelayedGraphicRebuild_300)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DelayedGraphicRebuild_300() const { return ___m_DelayedGraphicRebuild_300; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DelayedGraphicRebuild_300() { return &___m_DelayedGraphicRebuild_300; }
	inline void set_m_DelayedGraphicRebuild_300(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DelayedGraphicRebuild_300 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedGraphicRebuild_300), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelayedMaterialRebuild_301() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_DelayedMaterialRebuild_301)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DelayedMaterialRebuild_301() const { return ___m_DelayedMaterialRebuild_301; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DelayedMaterialRebuild_301() { return &___m_DelayedMaterialRebuild_301; }
	inline void set_m_DelayedMaterialRebuild_301(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DelayedMaterialRebuild_301 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedMaterialRebuild_301), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClipRect_302() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_ClipRect_302)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_ClipRect_302() const { return ___m_ClipRect_302; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_ClipRect_302() { return &___m_ClipRect_302; }
	inline void set_m_ClipRect_302(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_ClipRect_302 = value;
	}

	inline static int32_t get_offset_of_m_ValidRect_303() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_ValidRect_303)); }
	inline bool get_m_ValidRect_303() const { return ___m_ValidRect_303; }
	inline bool* get_address_of_m_ValidRect_303() { return &___m_ValidRect_303; }
	inline void set_m_ValidRect_303(bool value)
	{
		___m_ValidRect_303 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_304() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___OnPreRenderText_304)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_304() const { return ___OnPreRenderText_304; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_304() { return &___OnPreRenderText_304; }
	inline void set_OnPreRenderText_304(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_304 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_304), (void*)value);
	}
};

struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextMarker_279;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SetArraySizesMarker_280;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIMarker_281;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseMarkupTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_CharacterLookupMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleGPOSFeaturesMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_CalculateVerticesPositionMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ComputeTextMetricsMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleVisibleCharacterMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleWhiteSpacesMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleHorizontalLineBreakingMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleVerticalLineBreakingMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SaveGlyphVertexDataMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ComputeCharacterAdvanceMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleCarriageReturnMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_HandleLineTerminationMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SavePageInfoMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_SaveProcessingStatesMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIIMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_GenerateTextPhaseIIIMarker_298;

public:
	inline static int32_t get_offset_of_k_GenerateTextMarker_279() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_GenerateTextMarker_279)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextMarker_279() const { return ___k_GenerateTextMarker_279; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextMarker_279() { return &___k_GenerateTextMarker_279; }
	inline void set_k_GenerateTextMarker_279(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextMarker_279 = value;
	}

	inline static int32_t get_offset_of_k_SetArraySizesMarker_280() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_SetArraySizesMarker_280)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SetArraySizesMarker_280() const { return ___k_SetArraySizesMarker_280; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SetArraySizesMarker_280() { return &___k_SetArraySizesMarker_280; }
	inline void set_k_SetArraySizesMarker_280(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SetArraySizesMarker_280 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIMarker_281() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_GenerateTextPhaseIMarker_281)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIMarker_281() const { return ___k_GenerateTextPhaseIMarker_281; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIMarker_281() { return &___k_GenerateTextPhaseIMarker_281; }
	inline void set_k_GenerateTextPhaseIMarker_281(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIMarker_281 = value;
	}

	inline static int32_t get_offset_of_k_ParseMarkupTextMarker_282() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_ParseMarkupTextMarker_282)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseMarkupTextMarker_282() const { return ___k_ParseMarkupTextMarker_282; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseMarkupTextMarker_282() { return &___k_ParseMarkupTextMarker_282; }
	inline void set_k_ParseMarkupTextMarker_282(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseMarkupTextMarker_282 = value;
	}

	inline static int32_t get_offset_of_k_CharacterLookupMarker_283() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_CharacterLookupMarker_283)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_CharacterLookupMarker_283() const { return ___k_CharacterLookupMarker_283; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_CharacterLookupMarker_283() { return &___k_CharacterLookupMarker_283; }
	inline void set_k_CharacterLookupMarker_283(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_CharacterLookupMarker_283 = value;
	}

	inline static int32_t get_offset_of_k_HandleGPOSFeaturesMarker_284() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleGPOSFeaturesMarker_284)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleGPOSFeaturesMarker_284() const { return ___k_HandleGPOSFeaturesMarker_284; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleGPOSFeaturesMarker_284() { return &___k_HandleGPOSFeaturesMarker_284; }
	inline void set_k_HandleGPOSFeaturesMarker_284(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleGPOSFeaturesMarker_284 = value;
	}

	inline static int32_t get_offset_of_k_CalculateVerticesPositionMarker_285() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_CalculateVerticesPositionMarker_285)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_CalculateVerticesPositionMarker_285() const { return ___k_CalculateVerticesPositionMarker_285; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_CalculateVerticesPositionMarker_285() { return &___k_CalculateVerticesPositionMarker_285; }
	inline void set_k_CalculateVerticesPositionMarker_285(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_CalculateVerticesPositionMarker_285 = value;
	}

	inline static int32_t get_offset_of_k_ComputeTextMetricsMarker_286() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_ComputeTextMetricsMarker_286)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ComputeTextMetricsMarker_286() const { return ___k_ComputeTextMetricsMarker_286; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ComputeTextMetricsMarker_286() { return &___k_ComputeTextMetricsMarker_286; }
	inline void set_k_ComputeTextMetricsMarker_286(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ComputeTextMetricsMarker_286 = value;
	}

	inline static int32_t get_offset_of_k_HandleVisibleCharacterMarker_287() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleVisibleCharacterMarker_287)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleVisibleCharacterMarker_287() const { return ___k_HandleVisibleCharacterMarker_287; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleVisibleCharacterMarker_287() { return &___k_HandleVisibleCharacterMarker_287; }
	inline void set_k_HandleVisibleCharacterMarker_287(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleVisibleCharacterMarker_287 = value;
	}

	inline static int32_t get_offset_of_k_HandleWhiteSpacesMarker_288() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleWhiteSpacesMarker_288)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleWhiteSpacesMarker_288() const { return ___k_HandleWhiteSpacesMarker_288; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleWhiteSpacesMarker_288() { return &___k_HandleWhiteSpacesMarker_288; }
	inline void set_k_HandleWhiteSpacesMarker_288(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleWhiteSpacesMarker_288 = value;
	}

	inline static int32_t get_offset_of_k_HandleHorizontalLineBreakingMarker_289() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleHorizontalLineBreakingMarker_289)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleHorizontalLineBreakingMarker_289() const { return ___k_HandleHorizontalLineBreakingMarker_289; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleHorizontalLineBreakingMarker_289() { return &___k_HandleHorizontalLineBreakingMarker_289; }
	inline void set_k_HandleHorizontalLineBreakingMarker_289(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleHorizontalLineBreakingMarker_289 = value;
	}

	inline static int32_t get_offset_of_k_HandleVerticalLineBreakingMarker_290() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleVerticalLineBreakingMarker_290)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleVerticalLineBreakingMarker_290() const { return ___k_HandleVerticalLineBreakingMarker_290; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleVerticalLineBreakingMarker_290() { return &___k_HandleVerticalLineBreakingMarker_290; }
	inline void set_k_HandleVerticalLineBreakingMarker_290(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleVerticalLineBreakingMarker_290 = value;
	}

	inline static int32_t get_offset_of_k_SaveGlyphVertexDataMarker_291() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_SaveGlyphVertexDataMarker_291)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SaveGlyphVertexDataMarker_291() const { return ___k_SaveGlyphVertexDataMarker_291; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SaveGlyphVertexDataMarker_291() { return &___k_SaveGlyphVertexDataMarker_291; }
	inline void set_k_SaveGlyphVertexDataMarker_291(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SaveGlyphVertexDataMarker_291 = value;
	}

	inline static int32_t get_offset_of_k_ComputeCharacterAdvanceMarker_292() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_ComputeCharacterAdvanceMarker_292)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ComputeCharacterAdvanceMarker_292() const { return ___k_ComputeCharacterAdvanceMarker_292; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ComputeCharacterAdvanceMarker_292() { return &___k_ComputeCharacterAdvanceMarker_292; }
	inline void set_k_ComputeCharacterAdvanceMarker_292(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ComputeCharacterAdvanceMarker_292 = value;
	}

	inline static int32_t get_offset_of_k_HandleCarriageReturnMarker_293() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleCarriageReturnMarker_293)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleCarriageReturnMarker_293() const { return ___k_HandleCarriageReturnMarker_293; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleCarriageReturnMarker_293() { return &___k_HandleCarriageReturnMarker_293; }
	inline void set_k_HandleCarriageReturnMarker_293(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleCarriageReturnMarker_293 = value;
	}

	inline static int32_t get_offset_of_k_HandleLineTerminationMarker_294() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_HandleLineTerminationMarker_294)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_HandleLineTerminationMarker_294() const { return ___k_HandleLineTerminationMarker_294; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_HandleLineTerminationMarker_294() { return &___k_HandleLineTerminationMarker_294; }
	inline void set_k_HandleLineTerminationMarker_294(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_HandleLineTerminationMarker_294 = value;
	}

	inline static int32_t get_offset_of_k_SavePageInfoMarker_295() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_SavePageInfoMarker_295)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SavePageInfoMarker_295() const { return ___k_SavePageInfoMarker_295; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SavePageInfoMarker_295() { return &___k_SavePageInfoMarker_295; }
	inline void set_k_SavePageInfoMarker_295(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SavePageInfoMarker_295 = value;
	}

	inline static int32_t get_offset_of_k_SaveProcessingStatesMarker_296() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_SaveProcessingStatesMarker_296)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_SaveProcessingStatesMarker_296() const { return ___k_SaveProcessingStatesMarker_296; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_SaveProcessingStatesMarker_296() { return &___k_SaveProcessingStatesMarker_296; }
	inline void set_k_SaveProcessingStatesMarker_296(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_SaveProcessingStatesMarker_296 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIMarker_297() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_GenerateTextPhaseIIMarker_297)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIIMarker_297() const { return ___k_GenerateTextPhaseIIMarker_297; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIIMarker_297() { return &___k_GenerateTextPhaseIIMarker_297; }
	inline void set_k_GenerateTextPhaseIIMarker_297(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIIMarker_297 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIIMarker_298() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_StaticFields, ___k_GenerateTextPhaseIIIMarker_298)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_GenerateTextPhaseIIIMarker_298() const { return ___k_GenerateTextPhaseIIIMarker_298; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_GenerateTextPhaseIIIMarker_298() { return &___k_GenerateTextPhaseIIIMarker_298; }
	inline void set_k_GenerateTextPhaseIIIMarker_298(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_GenerateTextPhaseIIIMarker_298 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D_gshared (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_gshared_inline (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_gshared (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, int32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_gshared (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Int32>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Peek_m0C79E0AE5D4405AEAFE9B400881F0D3B5F4FFAAC_gshared (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51_gshared (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mDDF01F8F9E564442E0105C00DCE2488DF9B1718B_gshared (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mE8E4144715BD5BDB77169E4CF013D79D66F36861_gshared (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void AnimateCarts::animate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateCarts_animate_m4FC004F537AA065B2A6AE05326F06F50C4E6FFBC (AnimateCarts_tF4D090BD357EA0B3A8CE0D9DED648859F552C8FA * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<animateCart>()
inline animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C * GameObject_GetComponent_TisanimateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C_m5604500A61C08CCD8D3942DB8CB0B467442E85FA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject BlockGenerator::GetNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * BlockGenerator_GetNext_mBECC8CC5120D8C9B3BEABD95F968A12930A28BE5 (BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void BlockGenerator::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockGenerator_Remove_m8DE758EC83783E3B7033C0A65B3F316334DB0DD5 (BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
inline void Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *, const RuntimeMethod*))Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D_gshared)(__this, method);
}
// System.Void BlockGenerator::GenerateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockGenerator_GenerateNew_mA46D7EB7E2A8BFB708E9469C900F61134E15B314 (BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
inline int32_t Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_inline (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *, const RuntimeMethod*))Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_gshared_inline)(__this, method);
}
// System.Void NextBlock::updateImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextBlock_updateImages_m7167A74C5C01BFFABD1A4F655AA1BE84848D42D7 (NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(!0)
inline void Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *, int32_t, const RuntimeMethod*))Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
inline int32_t Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2 (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *, const RuntimeMethod*))Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.Int32>::Peek()
inline int32_t Queue_1_Peek_m0C79E0AE5D4405AEAFE9B400881F0D3B5F4FFAAC (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *, const RuntimeMethod*))Queue_1_Peek_m0C79E0AE5D4405AEAFE9B400881F0D3B5F4FFAAC_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody2D::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_rotation_mD58E62EDB334FCDF7914A94C940F7903E8ADBBFF (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::SetRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_SetRotation_m7DFAEB6AD986501D13C1ECD19E127BB5A02BFC46 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___angle0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F (const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::BoxCast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_BoxCast_m6550719F8AEEECBEFA1F9BC82F9D8A71DDA14359 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size1, float ___angle2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction3, float ___distance4, int32_t ___layerMask5, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Collision2D_get_collider_mA7687EDB0D47A2F211BFE8DB89266B9AA05CFDDD (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void BlockDropper::DropBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockDropper_DropBlock_m17022D3B394AF171248AA2F3A93491A9CA6E665A (BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Projectiles>()
inline Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22 * GameObject_GetComponent_TisProjectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22_m7040C6F55BE19D0C22A8901C81092389F31BC62C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Projectiles::setSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Projectiles_setSpeed_mFFF4220289422626AFA7D6D4AE8C7D5A6CA0B8F3_inline (Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22 * __this, float ___newSpeed0, const RuntimeMethod* method);
// System.Void CannonEnemy::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonEnemy_Flip_mEF5C0C19F8A7B9865FA38BC8A888BBB418ADB2DA (CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51 (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, int32_t, bool, const RuntimeMethod*))List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51_gshared)(__this, ___index0, ___value1, method);
}
// System.Void UIMgr::updateCart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_updateCart_mA1F8E53751A17FE40CED366570221C31322EDB60 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, int32_t ___arraySpot0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mDDF01F8F9E564442E0105C00DCE2488DF9B1718B (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_mDDF01F8F9E564442E0105C00DCE2488DF9B1718B_gshared)(__this, ___value0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void MusicManager::ChangeClip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_ChangeClip_mFFE40205B4816B8D99A954A7CF04C1D3F141FD0A (MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void Queue_1__ctor_mE8E4144715BD5BDB77169E4CF013D79D66F36861 (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *, RuntimeObject*, const RuntimeMethod*))Queue_1__ctor_mE8E4144715BD5BDB77169E4CF013D79D66F36861_gshared)(__this, ___collection0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void PauseMenu::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_ResumeGame_m2111A791B33608A3F6C2B417A6708B792ADD9660 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PauseGame_mA9D16C1338F237508B03597E9A2E806AB61ECB6A (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::DestroyBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_DestroyBlocks_m363C30DD55CEB43902D524C9EADD126B73B4F6A1 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean PlayerMovement::Grounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_Grounded_m08DAD49C29E245F6D9BFFA553C3D203552BDF74C (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Boolean PlayerMovement::Tetris()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_Tetris_m1652F0432EBA2C18A05FE3361C7582D219294EBC (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerMovement::walkSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_walkSound_mC43A7720A01C1FD9EECA64160FA5237C59FDB9F4 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void PlayerMovement::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Flip_mC167047A7BCCE6865291E6D8F2B7D35EA57948C3 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void PlayerMovement/<walkSound>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwalkSoundU3Ed__26__ctor_m782E4078153CF5FD85CF539243E42D764F71C8FC (U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UIMgr::updateHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_updateHealth_m21BDBD0B2CF535E3DC9F1163DE390F4DF185FEF8 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, int32_t ___life0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponentInParent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m684FF88B6F63B826B47748A806A25A387576758E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Component_GetComponentInParent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m02F38505F2D5D9CA7C5AD4571B76E4FC2BA53614 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void UIMgr::updateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_updateTime_m926D219FCD3379FC9D2E5F39F9CC5DE533BF2948 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, const RuntimeMethod* method);
// System.Void UIMgr::testButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_testButton_mCDD691AF7AD645B0C87CF5D932651F5A39331BF2 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, const RuntimeMethod* method);
// System.Void UIMgr::updateCredits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_updateCredits_mA225C7CD3A312BE4213991E9DE50A60CDCDADED7 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Cart>()
inline Cart_t4DCC493717102D6D81CA7483B7D045489560C478 * GameObject_GetComponent_TisCart_t4DCC493717102D6D81CA7483B7D045489560C478_m2CB7117826AE5C92E249D1116F5991A7973B636F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Cart_t4DCC493717102D6D81CA7483B7D045489560C478 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.MeshRenderer>::get_Item(System.Int32)
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * List_1_get_Item_mBACE2CB1A0816F15964A916E9051C544E711037E_inline (List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UIMgr::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_Restart_m3943E06C46BDADF9E1CCE351B4E2760C585C7D56 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void AnimateBG::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateBG_Start_m83C67613119D5E8CF124A9776BF8D2F362AE7D33 (AnimateBG_t7D28D421CCC8165F9D79988F0F0B2A0D273A3DD7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AnimateBG::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateBG_Update_mE03BD7E8F0F6FB7D18240885139E7A738461B31E (AnimateBG_t7D28D421CCC8165F9D79988F0F0B2A0D273A3DD7 * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(new Vector3(1, 0, 0) * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimateBG::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateBG__ctor_mC6C449E3F18FEE043041FA47905DD12067A110AC (AnimateBG_t7D28D421CCC8165F9D79988F0F0B2A0D273A3DD7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AnimateCarts::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateCarts_Start_mC0378433D56F4B0925DBB78853B6656C734B2463 (AnimateCarts_tF4D090BD357EA0B3A8CE0D9DED648859F552C8FA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AnimateCarts::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateCarts_Update_m8B830614F9574CF5262C736C339F93F9F9417CA0 (AnimateCarts_tF4D090BD357EA0B3A8CE0D9DED648859F552C8FA * __this, const RuntimeMethod* method)
{
	{
		// if (i < 5 && isdone == false)
		int32_t L_0 = __this->get_i_7();
		if ((((int32_t)L_0) >= ((int32_t)5)))
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->get_isdone_6();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// animate();
		AnimateCarts_animate_m4FC004F537AA065B2A6AE05326F06F50C4E6FFBC(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void AnimateCarts::animate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateCarts_animate_m4FC004F537AA065B2A6AE05326F06F50C4E6FFBC (AnimateCarts_tF4D090BD357EA0B3A8CE0D9DED648859F552C8FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisanimateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C_m5604500A61C08CCD8D3942DB8CB0B467442E85FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TitleCarts[i].GetComponent<animateCart>().isCartSpin = true;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_TitleCarts_4();
		int32_t L_1 = __this->get_i_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C * L_3;
		L_3 = GameObject_GetComponent_TisanimateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C_m5604500A61C08CCD8D3942DB8CB0B467442E85FA(L_2, /*hidden argument*/GameObject_GetComponent_TisanimateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C_m5604500A61C08CCD8D3942DB8CB0B467442E85FA_RuntimeMethod_var);
		L_3->set_isCartSpin_5((bool)1);
		// if (i < 6)
		int32_t L_4 = __this->get_i_7();
		if ((((int32_t)L_4) >= ((int32_t)6)))
		{
			goto IL_0057;
		}
	}
	{
		// i++;
		int32_t L_5 = __this->get_i_7();
		__this->set_i_7(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// if (i == 5 && isdone == false)
		int32_t L_6 = __this->get_i_7();
		if ((!(((uint32_t)L_6) == ((uint32_t)5))))
		{
			goto IL_0057;
		}
	}
	{
		bool L_7 = __this->get_isdone_6();
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		// Instantiate(particles);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_particles_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// isdone = true;
		__this->set_isdone_6((bool)1);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void AnimateCarts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimateCarts__ctor_m7A80776B94ADC9628AC89A576011C8B07E48555F (AnimateCarts_tF4D090BD357EA0B3A8CE0D9DED648859F552C8FA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BlockDropper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockDropper_Start_mADCC75854A15FAB7C84FCB6BA54934B36FCC74E5 (BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6B06CB7CFCB80131EEF3641393079B1A4AFBC07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inst = this;
		((BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_StaticFields*)il2cpp_codegen_static_fields_for(BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var))->set_inst_4(__this);
		// Invoke("DropBlock", 5);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralC6B06CB7CFCB80131EEF3641393079B1A4AFBC07, (5.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BlockDropper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockDropper_Update_m6CDED952798271E6E25011E138D2048ACE4776CD (BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BlockDropper.inst.transform.position = new Vector3(
		//     followTarget.transform.position.x,
		//     followTarget.transform.position.y + 10,
		//     BlockDropper.inst.transform.position.z);
		BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * L_0 = ((BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_StaticFields*)il2cpp_codegen_static_fields_for(BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var))->get_inst_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_followTarget_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_followTarget_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * L_10 = ((BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_StaticFields*)il2cpp_codegen_static_fields_for(BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var))->get_inst_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), L_5, ((float)il2cpp_codegen_add((float)L_9, (float)(10.0f))), L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BlockDropper::DropBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockDropper_DropBlock_m17022D3B394AF171248AA2F3A93491A9CA6E665A (BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(BlockGenerator.Instance.GetNext(), dropPoint.GetComponent<Transform>().localPosition, Quaternion.identity);
		BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * L_0 = ((BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields*)il2cpp_codegen_static_fields_for(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var))->get_Instance_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = BlockGenerator_GetNext_mBECC8CC5120D8C9B3BEABD95F968A12930A28BE5(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_dropPoint_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_2, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_1, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// BlockGenerator.Instance.Remove();
		BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * L_7 = ((BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields*)il2cpp_codegen_static_fields_for(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var))->get_Instance_4();
		BlockGenerator_Remove_m8DE758EC83783E3B7033C0A65B3F316334DB0DD5(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BlockDropper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockDropper__ctor_m6698AE135CB35132F88C7DA174743DEE73764843 (BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BlockGenerator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockGenerator_Awake_mEDB3CDE8F2E478550EB15E93B5D832C78923346F (BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null)
		BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * L_0 = ((BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields*)il2cpp_codegen_static_fields_for(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// Instance = this;
		((BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields*)il2cpp_codegen_static_fields_for(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// blockQueue = new Queue<int>();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_2 = (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *)il2cpp_codegen_object_new(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F_il2cpp_TypeInfo_var);
		Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D(L_2, /*hidden argument*/Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D_RuntimeMethod_var);
		__this->set_blockQueue_5(L_2);
		// GenerateNew();
		BlockGenerator_GenerateNew_mA46D7EB7E2A8BFB708E9469C900F61134E15B314(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BlockGenerator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockGenerator_Update_m05D1B015E48F532AAB424A42C5EBF63A31A46581 (BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (blockQueue.Count < desiredQueueSize)
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_0 = __this->get_blockQueue_5();
		int32_t L_1;
		L_1 = Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_inline(L_0, /*hidden argument*/Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_RuntimeMethod_var);
		int32_t L_2 = __this->get_desiredQueueSize_6();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		// GenerateNew();
		BlockGenerator_GenerateNew_mA46D7EB7E2A8BFB708E9469C900F61134E15B314(__this, /*hidden argument*/NULL);
		// } else if (blockQueue.Count == desiredQueueSize)
		return;
	}

IL_001a:
	{
		// } else if (blockQueue.Count == desiredQueueSize)
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_3 = __this->get_blockQueue_5();
		int32_t L_4;
		L_4 = Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_inline(L_3, /*hidden argument*/Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_RuntimeMethod_var);
		int32_t L_5 = __this->get_desiredQueueSize_6();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0037;
		}
	}
	{
		// NextBlock.Instance.updateImages();
		NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF * L_6 = ((NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF_StaticFields*)il2cpp_codegen_static_fields_for(NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF_il2cpp_TypeInfo_var))->get_Instance_10();
		NextBlock_updateImages_m7167A74C5C01BFFABD1A4F655AA1BE84848D42D7(L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void BlockGenerator::GenerateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockGenerator_GenerateNew_mA46D7EB7E2A8BFB708E9469C900F61134E15B314 (BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int temp = Random.Range(0, 6);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 6, /*hidden argument*/NULL);
		V_0 = L_0;
		// blockQueue.Enqueue(temp);
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_1 = __this->get_blockQueue_5();
		int32_t L_2 = V_0;
		Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC(L_1, L_2, /*hidden argument*/Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BlockGenerator::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockGenerator_Remove_m8DE758EC83783E3B7033C0A65B3F316334DB0DD5 (BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int temp = blockQueue.Dequeue();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_0 = __this->get_blockQueue_5();
		int32_t L_1;
		L_1 = Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2(L_0, /*hidden argument*/Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.GameObject BlockGenerator::GetNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * BlockGenerator_GetNext_mBECC8CC5120D8C9B3BEABD95F968A12930A28BE5 (BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m0C79E0AE5D4405AEAFE9B400881F0D3B5F4FFAAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return blockArray[blockQueue.Peek()];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_blockArray_7();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_1 = __this->get_blockQueue_5();
		int32_t L_2;
		L_2 = Queue_1_Peek_m0C79E0AE5D4405AEAFE9B400881F0D3B5F4FFAAC(L_1, /*hidden argument*/Queue_1_Peek_m0C79E0AE5D4405AEAFE9B400881F0D3B5F4FFAAC_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, L_2, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void BlockGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockGenerator__ctor_mA7D61CBBD2CE18C3986FB7E1CDE6BA7B049AA85A (BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BlockMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockMovement_Update_m9E929446B98F3EC3A17DCBBFE4E2864909A3FD4E (BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CD3DC9FEC81CCCBAE63099636E2C5FD07B10E5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB79FF74147B098AF09D21FD6E3DFC0DE0D916E77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isDone)
		bool L_0 = __this->get_isDone_8();
		if (L_0)
		{
			goto IL_00a8;
		}
	}
	{
		// if (flipTimeCounter >= 0)
		float L_1 = __this->get_flipTimeCounter_12();
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_002a;
		}
	}
	{
		// flipTimeCounter -= Time.deltaTime;
		float L_2 = __this->get_flipTimeCounter_12();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_flipTimeCounter_12(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
	}

IL_002a:
	{
		// if (Input.GetButton(HORIZONTAL))
		bool L_4;
		L_4 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteralB79FF74147B098AF09D21FD6E3DFC0DE0D916E77, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// buttonPressed = HORIZONTAL;
		__this->set_buttonPressed_14(_stringLiteralB79FF74147B098AF09D21FD6E3DFC0DE0D916E77);
	}

IL_0041:
	{
		// if (Input.GetButtonUp(DOWN))
		bool L_5;
		L_5 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		// fallSpeed = fallSpeed * dropMultiplier;
		float L_6 = __this->get_fallSpeed_11();
		float L_7 = __this->get_dropMultiplier_7();
		__this->set_fallSpeed_11(((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)));
	}

IL_0060:
	{
		// if (Input.GetButton(FLIP) && flipTimeCounter <= 0)
		bool L_8;
		L_8 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteral6CD3DC9FEC81CCCBAE63099636E2C5FD07B10E5B, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00a8;
		}
	}
	{
		float L_9 = __this->get_flipTimeCounter_12();
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_00a8;
		}
	}
	{
		// rb2d.SetRotation(rb2d.rotation + 90);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10 = __this->get_rb2d_17();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = __this->get_rb2d_17();
		float L_12;
		L_12 = Rigidbody2D_get_rotation_mD58E62EDB334FCDF7914A94C940F7903E8ADBBFF(L_11, /*hidden argument*/NULL);
		Rigidbody2D_SetRotation_m7DFAEB6AD986501D13C1ECD19E127BB5A02BFC46(L_10, ((float)il2cpp_codegen_add((float)L_12, (float)(90.0f))), /*hidden argument*/NULL);
		// flipTimeCounter = flipTime;
		float L_13 = __this->get_flipTime_10();
		__this->set_flipTimeCounter_12(L_13);
		// buttonPressed = null;
		__this->set_buttonPressed_14((String_t*)NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void BlockMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockMovement_FixedUpdate_m8A603BC22BD3FFDF515F2CAF7E7E5EB39DB80EE0 (BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44303132766F332C2908B2D726FA64E93BD3A2C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB79FF74147B098AF09D21FD6E3DFC0DE0D916E77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isGrounded)
		bool L_0 = __this->get_isGrounded_16();
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		// if (buttonPressed == HORIZONTAL)
		String_t* L_1 = __this->get_buttonPressed_14();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralB79FF74147B098AF09D21FD6E3DFC0DE0D916E77, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// horizontal = Input.GetAxis(HORIZONTAL) * moveSpeed;
		float L_3;
		L_3 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralB79FF74147B098AF09D21FD6E3DFC0DE0D916E77, /*hidden argument*/NULL);
		float L_4 = __this->get_moveSpeed_9();
		__this->set_horizontal_13(((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)));
	}

IL_0031:
	{
		// rb2d.velocity = new Vector2(horizontal, -fallSpeed);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5 = __this->get_rb2d_17();
		float L_6 = __this->get_horizontal_13();
		float L_7 = __this->get_fallSpeed_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), L_6, ((-L_7)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_5, L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004f:
	{
		// rb2d.constraints = RigidbodyConstraints2D.FreezePositionX | RigidbodyConstraints2D.FreezePositionY;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9 = __this->get_rb2d_17();
		Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263(L_9, 3, /*hidden argument*/NULL);
		// rb2d.bodyType = RigidbodyType2D.Static;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10 = __this->get_rb2d_17();
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_10, 2, /*hidden argument*/NULL);
		// this.gameObject.layer = 6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_11, 6, /*hidden argument*/NULL);
		// isDone = true;
		__this->set_isDone_8((bool)1);
		// Invoke("swapBlock", 1f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral44303132766F332C2908B2D726FA64E93BD3A2C2, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BlockMovement::Grounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockMovement_Grounded_m0E29CE01F0B2B0EB969AAC89B61EFF80EB41EE49 (BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// RaycastHit2D raycastHit = Physics2D.BoxCast(polygonCollider2D.bounds.center, polygonCollider2D.bounds.size, 0f, Vector2.down, 0.01f, groundLayer);
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_0 = __this->get_polygonCollider2D_20();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_1;
		L_1 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_4 = __this->get_polygonCollider2D_20();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_5;
		L_5 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_9 = __this->get_groundLayer_18();
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_11;
		L_11 = Physics2D_BoxCast_m6550719F8AEEECBEFA1F9BC82F9D8A71DDA14359(L_3, L_7, (0.0f), L_8, (0.00999999978f), L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// isGrounded = raycastHit.collider != null;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12;
		L_12 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		__this->set_isGrounded_16(L_13);
		// }
		return;
	}
}
// System.Void BlockMovement::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockMovement_OnCollisionEnter2D_mE79FEFF69128F86F55FD0CF74890FAFCE4989128 (BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6E8B73FD8D61BC747E6E7555278BD8EB05376BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.collider.gameObject.layer == 6)
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1;
		L_1 = Collision2D_get_collider_mA7687EDB0D47A2F211BFE8DB89266B9AA05CFDDD(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)6))))
		{
			goto IL_001b;
		}
	}
	{
		// isGrounded = true;
		__this->set_isGrounded_16((bool)1);
		// }
		return;
	}

IL_001b:
	{
		// else if (collision.collider.gameObject.name == "KillZ")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_4 = ___collision0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5;
		L_5 = Collision2D_get_collider_mA7687EDB0D47A2F211BFE8DB89266B9AA05CFDDD(L_4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteralC6E8B73FD8D61BC747E6E7555278BD8EB05376BA, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// BlockDropper.inst.DropBlock();
		BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * L_9 = ((BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_StaticFields*)il2cpp_codegen_static_fields_for(BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var))->get_inst_4();
		BlockDropper_DropBlock_m17022D3B394AF171248AA2F3A93491A9CA6E665A(L_9, /*hidden argument*/NULL);
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void BlockMovement::swapBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockMovement_swapBlock_m30A2284AA43B065A99D2FB0DACF193B94C650880 (BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// BlockDropper.inst.DropBlock();
		BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * L_0 = ((BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_StaticFields*)il2cpp_codegen_static_fields_for(BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var))->get_inst_4();
		BlockDropper_DropBlock_m17022D3B394AF171248AA2F3A93491A9CA6E665A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BlockMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockMovement__ctor_m61F1D66042FDA85F450C672C3E6DEEAD6EE0A614 (BlockMovement_tB27BF73862F62AABC66106F6B4B783345B826A7A * __this, const RuntimeMethod* method)
{
	{
		// public float moveSpeed = 3f;
		__this->set_moveSpeed_9((3.0f));
		// public float flipTime = 0.5f;
		__this->set_flipTime_10((0.5f));
		// public float fallSpeed = 0.5f;
		__this->set_fallSpeed_11((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Buttons::specialThanks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_specialThanks_m75A1AE46B1641E6D37C88EA0B5A7AB1A5BB9965D (Buttons_t56DF91E0BC6E1237717461D2564AFA4C911F1F24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Buttons::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_MainMenu_m67FF648D74D3421AA456E2E52358DFF7CA3D4AE5 (Buttons_t56DF91E0BC6E1237717461D2564AFA4C911F1F24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)2)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Buttons::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_Back_m2B6C62BAF8A5CD3685E0CAA93060975532230058 (Buttons_t56DF91E0BC6E1237717461D2564AFA4C911F1F24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Buttons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons__ctor_m4D188C0EB81441540E1A731F9EAB6BF2F7CC55F6 (Buttons_t56DF91E0BC6E1237717461D2564AFA4C911F1F24 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_m9762CC5B7A2D28B7B8116BA8DE2342AFB654AB08 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tgtPos = new Vector3(target.position.x, target.position.y, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_2, L_5, L_8, /*hidden argument*/NULL);
		// transform.position = Vector3.Lerp(transform.position, tgtPos, Time.deltaTime * smooth);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_14 = __this->get_smooth_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_11, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m29F88CCFD2ED12A7BCC75A9BBA892CEF179C83DE (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CannonEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonEnemy_Start_mDD93BCF5DB579CF4641015AB672463D06DC2411D (CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_player_7(L_0);
		// }
		return;
	}
}
// System.Void CannonEnemy::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonEnemy_Fire_m2E97146697203ED20F3FFBC668329729FB4B9F24 (CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22_m7040C6F55BE19D0C22A8901C81092389F31BC62C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GameObject proj = GameObject.Instantiate(projectile, new Vector2(cannon.transform.position.x + (direction * cannon.bounds.size.x), cannon.transform.position.y), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_projectile_8();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1 = __this->get_cannon_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		float L_5 = __this->get_direction_4();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_6 = __this->get_cannon_9();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_7;
		L_7 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_10 = __this->get_cannon_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_14), ((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_9)))), L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_14, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_15, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Vector3 scaler = proj.transform.localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_17;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		// scaler.x *= -direction;
		float* L_21 = (&V_0)->get_address_of_x_2();
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		float L_24 = __this->get_direction_4();
		*((float*)L_22) = (float)((float)il2cpp_codegen_multiply((float)L_23, (float)((-L_24))));
		// proj.transform.localScale = scaler;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = L_18;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_26, L_27, /*hidden argument*/NULL);
		// Projectiles projSpeed = proj.GetComponent<Projectiles>();
		Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22 * L_28;
		L_28 = GameObject_GetComponent_TisProjectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22_m7040C6F55BE19D0C22A8901C81092389F31BC62C(L_25, /*hidden argument*/GameObject_GetComponent_TisProjectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22_m7040C6F55BE19D0C22A8901C81092389F31BC62C_RuntimeMethod_var);
		// projSpeed.setSpeed(projSpeed.speed * -direction);
		Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22 * L_29 = L_28;
		float L_30 = L_29->get_speed_4();
		float L_31 = __this->get_direction_4();
		Projectiles_setSpeed_mFFF4220289422626AFA7D6D4AE8C7D5A6CA0B8F3_inline(L_29, ((float)il2cpp_codegen_multiply((float)L_30, (float)((-L_31)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CannonEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonEnemy_Update_m50446A090A64F69DE70B60ED694F4F25E67B3FFB (CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8 * __this, const RuntimeMethod* method)
{
	{
		// if (flipCount > 0)
		float L_0 = __this->get_flipCount_6();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		// flipCount -= Time.deltaTime;
		float L_1 = __this->get_flipCount_6();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_flipCount_6(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void CannonEnemy::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonEnemy_FixedUpdate_mBEDBC5CD85DA8E10FB9F461B2BFC313604A1BAC5 (CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 playerPos = player.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (this.transform.position.x < playerPos.x && facingLeft && flipCount <= 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		float L_8 = L_7.get_x_0();
		if ((!(((float)L_6) < ((float)L_8))))
		{
			goto IL_004a;
		}
	}
	{
		bool L_9 = __this->get_facingLeft_5();
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		float L_10 = __this->get_flipCount_6();
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		// Flip();
		CannonEnemy_Flip_mEF5C0C19F8A7B9865FA38BC8A888BBB418ADB2DA(__this, /*hidden argument*/NULL);
		return;
	}

IL_004a:
	{
		// else if (this.transform.position.x > playerPos.x && !facingLeft && flipCount <= 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_0;
		float L_15 = L_14.get_x_0();
		if ((!(((float)L_13) > ((float)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		bool L_16 = __this->get_facingLeft_5();
		if (L_16)
		{
			goto IL_007d;
		}
	}
	{
		float L_17 = __this->get_flipCount_6();
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		// Flip();
		CannonEnemy_Flip_mEF5C0C19F8A7B9865FA38BC8A888BBB418ADB2DA(__this, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void CannonEnemy::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonEnemy_Flip_mEF5C0C19F8A7B9865FA38BC8A888BBB418ADB2DA (CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 scaler = this.transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// scaler.x *= -1;
		float* L_2 = (&V_0)->get_address_of_x_2();
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply((float)L_4, (float)(-1.0f)));
		// this.transform.localScale = scaler;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_6, /*hidden argument*/NULL);
		// facingLeft = !facingLeft;
		bool L_7 = __this->get_facingLeft_5();
		__this->set_facingLeft_5((bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0));
		// flipCount = 0.2f;
		__this->set_flipCount_6((0.200000003f));
		// direction = -direction;
		float L_8 = __this->get_direction_4();
		__this->set_direction_4(((-L_8)));
		// }
		return;
	}
}
// System.Void CannonEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CannonEnemy__ctor_mF2ADDBF808FE301565FD117ED1F9BBA50BE884D3 (CannonEnemy_tB436F0CEB061810C84183A19C20E9C4A22200ED8 * __this, const RuntimeMethod* method)
{
	{
		// public float direction = 1f;
		__this->set_direction_4((1.0f));
		// private bool facingLeft = true;
		__this->set_facingLeft_5((bool)1);
		// private float flipCount = .2f;
		__this->set_flipCount_6((0.200000003f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Cart::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cart_Start_mA2CAC64906783679B6C63D1902204DC72317A3D4 (Cart_t4DCC493717102D6D81CA7483B7D045489560C478 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Cart::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cart_Update_mC07F7626D642F0807656F197264196440B35614B (Cart_t4DCC493717102D6D81CA7483B7D045489560C478 * __this, const RuntimeMethod* method)
{
	{
		// if (isCollected == true && isDone == false)
		bool L_0 = __this->get_isCollected_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->get_isDone_5();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// isCartSpin = true;
		__this->set_isCartSpin_6((bool)1);
	}

IL_0017:
	{
		// if (isCartSpin == true)
		bool L_2 = __this->get_isCartSpin_6();
		if (!L_2)
		{
			goto IL_00b5;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_3 = __this->get_timer_7();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_7(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// transform.Rotate(new Vector3(0, 90, 0) * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_5, L_8, /*hidden argument*/NULL);
		// if (timer > 2) sprite.color = (Color.white);
		float L_9 = __this->get_timer_7();
		if ((!(((float)L_9) > ((float)(2.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		// if (timer > 2) sprite.color = (Color.white);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_10 = __this->get_sprite_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
	}

IL_007a:
	{
		// if (timer > 3.85)
		float L_12 = __this->get_timer_7();
		if ((!(((double)((double)((double)L_12))) > ((double)(3.8500000000000001)))))
		{
			goto IL_00b5;
		}
	}
	{
		// transform.localRotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_13, L_14, /*hidden argument*/NULL);
		// timer = 0;
		__this->set_timer_7((0.0f));
		// isCartSpin = false;
		__this->set_isCartSpin_6((bool)0);
		// isDone = true;
		__this->set_isDone_5((bool)1);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void Cart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cart__ctor_mB73E209C27C166C456AB7F9E4ECF1C9741732315 (Cart_t4DCC493717102D6D81CA7483B7D045489560C478 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CartTitle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CartTitle_Start_m5C18DDD5985CF8E13C8DD502C69890F94C8CB747 (CartTitle_tE8149E02CDDA473AB770FCDF8420E06528AF5FA3 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CartTitle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CartTitle_Update_mBF973799DA01EFBC8E6FA9735A6CA513E1AAAC02 (CartTitle_tE8149E02CDDA473AB770FCDF8420E06528AF5FA3 * __this, const RuntimeMethod* method)
{
	{
		// if (isCollected == true && isDone == false)
		bool L_0 = __this->get_isCollected_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->get_isDone_5();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// isCartSpin = true;
		__this->set_isCartSpin_6((bool)1);
	}

IL_0017:
	{
		// if (isCartSpin == true)
		bool L_2 = __this->get_isCartSpin_6();
		if (!L_2)
		{
			goto IL_00b5;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_3 = __this->get_timer_7();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_7(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// transform.Rotate(new Vector3(0, 120, 0) * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (120.0f), (0.0f), /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_5, L_8, /*hidden argument*/NULL);
		// if (timer > 2) sprite.color = (Color.white);
		float L_9 = __this->get_timer_7();
		if ((!(((float)L_9) > ((float)(2.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		// if (timer > 2) sprite.color = (Color.white);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_10 = __this->get_sprite_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
	}

IL_007a:
	{
		// if (timer > 3.85)
		float L_12 = __this->get_timer_7();
		if ((!(((double)((double)((double)L_12))) > ((double)(3.8500000000000001)))))
		{
			goto IL_00b5;
		}
	}
	{
		// transform.localRotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_13, L_14, /*hidden argument*/NULL);
		// timer = 0;
		__this->set_timer_7((0.0f));
		// isCartSpin = false;
		__this->set_isCartSpin_6((bool)0);
		// isDone = true;
		__this->set_isDone_5((bool)1);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void CartTitle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CartTitle__ctor_mDFA06AA65A22A099AFA0918A5245A0E14438F494 (CartTitle_tE8149E02CDDA473AB770FCDF8420E06528AF5FA3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Cartridge::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cartridge_Update_mE7D1C94DA1A3A8C7E694ECFD6620A885FA9F72A9 (Cartridge_tB98B8D15AF4F7DC0BE75CF7969DE9EDC5AAE41A4 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, spinSpeed * Time.deltaTime , 0 , Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_spinSpeed_4();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Transform_Rotate_mE77655C011C18F49CAD740CED7940EF1C7000357(L_0, (0.0f), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), (0.0f), 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Cartridge::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cartridge_OnTriggerEnter2D_mBAB0959530D5AF59006D495D5502AD4718B33A59 (Cartridge_tB98B8D15AF4F7DC0BE75CF7969DE9EDC5AAE41A4 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// Instantiate(particles, transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_particles_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// GameState.Instance.collectibles[index] = true;
		GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * L_6 = ((GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var))->get_Instance_4();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_7 = L_6->get_collectibles_7();
		int32_t L_8 = __this->get_index_5();
		List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51(L_7, L_8, (bool)1, /*hidden argument*/List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51_RuntimeMethod_var);
		// UIMgr.inst.updateCart(index);
		UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * L_9 = ((UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_StaticFields*)il2cpp_codegen_static_fields_for(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_il2cpp_TypeInfo_var))->get_inst_13();
		int32_t L_10 = __this->get_index_5();
		UIMgr_updateCart_mA1F8E53751A17FE40CED366570221C31322EDB60(L_9, L_10, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11 = __this->get_audioSource_6();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_11, /*hidden argument*/NULL);
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_12, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Cartridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cartridge__ctor_mFD5ECD629A3A4C0DB53F775B0EA2DFE63680DEB2 (Cartridge_tB98B8D15AF4F7DC0BE75CF7969DE9EDC5AAE41A4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CheckPoint::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckPoint_OnTriggerEnter2D_m58C9FAA7565F8EAE0C506A1FF6306A240DD7AE80 (CheckPoint_t6251F27E314260C898127FBE3ABD3E1C75DF62E6 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameState.Instance.respawnPoint = this.gameObject;
		GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * L_0 = ((GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var))->get_Instance_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		L_0->set_respawnPoint_6(L_1);
		// }
		return;
	}
}
// System.Void CheckPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckPoint__ctor_m567092658676E17DD5CC0FB6FE90689AAED74C47 (CheckPoint_t6251F27E314260C898127FBE3ABD3E1C75DF62E6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CoinScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinScript_Awake_mD5FC81112C9F4FD825E7990A084A5B008689C916 (CoinScript_t24045994219ED374086B1AB4C9E33A6846E3FDC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = audioPlayer.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_audioPlayer_5();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		__this->set_audioSource_4(L_1);
		// }
		return;
	}
}
// System.Void CoinScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinScript_OnTriggerEnter2D_m1440C7A41C6695B9D45E5A7D6811DCD6A8BB2CE3 (CoinScript_t24045994219ED374086B1AB4C9E33A6846E3FDC1 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(col.gameObject.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// UIMgr.inst.creditCount += 1;
		UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * L_3 = ((UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_StaticFields*)il2cpp_codegen_static_fields_for(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_il2cpp_TypeInfo_var))->get_inst_13();
		UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * L_4 = L_3;
		float L_5 = L_4->get_creditCount_8();
		L_4->set_creditCount_8(((float)il2cpp_codegen_add((float)L_5, (float)(1.0f))));
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = __this->get_audioSource_4();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_6, /*hidden argument*/NULL);
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void CoinScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinScript__ctor_mAA62D6B3B50A06C7C7BF72A79F6AEC2BC6B1ED16 (CoinScript_t24045994219ED374086B1AB4C9E33A6846E3FDC1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Flag::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flag_Awake_m5E287104DD65B8D9010BFEA1D574809A369E8ED4 (Flag_tE44A4F9BED0C00A7FCA97BEAB2D31A9823BA9E5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_sr_4(L_0);
		// }
		return;
	}
}
// System.Void Flag::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flag_OnTriggerEnter2D_m68DDD772495CA2FBF49639FD20EE1B0B8978910D (Flag_tE44A4F9BED0C00A7FCA97BEAB2D31A9823BA9E5B * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ADD7BEBEC01D195CDCE985A1242600479A25B65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isActive && col.gameObject.CompareTag("Player"))
		bool L_0 = __this->get_isActive_5();
		if (L_0)
		{
			goto IL_0057;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		// Debug.Log("CHECKPOINT");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9ADD7BEBEC01D195CDCE985A1242600479A25B65, /*hidden argument*/NULL);
		// sr.sprite = activeSprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get_sr_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = __this->get_activeSprite_6();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_4, L_5, /*hidden argument*/NULL);
		// GameState.Instance.respawnPoint = this.gameObject;
		GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * L_6 = ((GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var))->get_Instance_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		L_6->set_respawnPoint_6(L_7);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = __this->get_audioSource_7();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_8, /*hidden argument*/NULL);
		// isActive = true;
		__this->set_isActive_5((bool)1);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Flag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flag__ctor_m4549D597082D5B6737A37E11DCA56D1A86400EC9 (Flag_tE44A4F9BED0C00A7FCA97BEAB2D31A9823BA9E5B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameState::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_Awake_m24001AE27879F2493CD4FCB0B904DD3B9BA84AC8 (GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mDDF01F8F9E564442E0105C00DCE2488DF9B1718B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null)
		GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * L_0 = ((GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// Instance = this;
		((GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// collectibles.Capacity = 5;
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_2 = __this->get_collectibles_7();
		List_1_set_Capacity_mDDF01F8F9E564442E0105C00DCE2488DF9B1718B(L_2, 5, /*hidden argument*/List_1_set_Capacity_mDDF01F8F9E564442E0105C00DCE2488DF9B1718B_RuntimeMethod_var);
		// playerRef = GameObject.FindGameObjectWithTag("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_playerRef_5(L_3);
		// }
		return;
	}
}
// System.Void GameState::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_Update_mD9DCD8D3823270E25CC9EF43FF1EDD592E23E532 (GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonUp("Reset"))
		bool L_0;
		L_0 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// playerRef.transform.position = respawnPoint.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_playerRef_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_respawnPoint_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void GameState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState__ctor_mA14A91584839FF578B3B751214A2921375FD1578 (GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerHealth = 5;
		__this->set_PlayerHealth_8(5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MainMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Start_m3B552CE289B1D7E5343961C8461C484EA61DB621 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MusicManager.Instance.GetComponent<AudioSource>().Play();
		MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * L_0 = ((MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_StaticFields*)il2cpp_codegen_static_fields_for(MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var))->get_Instance_4();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_0, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Update_m2DE1F2570AFBF09401821F2F89779639CD0BBC76 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B926A087EEBD03A0161A5A13D999AD9CF8AA48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21325B9DA8EC6BBD2E72530D8AA7C39082628D3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyUp(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.Log("SPACE");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral21325B9DA8EC6BBD2E72530D8AA7C39082628D3B, /*hidden argument*/NULL);
		// MusicManager.Instance.ChangeClip(transitionClip);
		MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * L_1 = ((MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_StaticFields*)il2cpp_codegen_static_fields_for(MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var))->get_Instance_4();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_transitionClip_4();
		MusicManager_ChangeClip_mFFE40205B4816B8D99A954A7CF04C1D3F141FD0A(L_1, L_2, /*hidden argument*/NULL);
		// SceneManager.LoadScene("NateScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral12B926A087EEBD03A0161A5A13D999AD9CF8AA48, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
	}

IL_0037:
	{
		// if (Input.GetKeyUp(KeyCode.C))
		bool L_3;
		L_3 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)99), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		// Debug.Log("C");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Credits");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m4D77CEC8F91682A2D9492AE815F89B178BF9717D (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MusicManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Awake_m49041B4251A7CC5AD73CB9F26E9ED9BD3EEE78DF (MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null && Instance != this)
		MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * L_0 = ((MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_StaticFields*)il2cpp_codegen_static_fields_for(MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * L_2 = ((MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_StaticFields*)il2cpp_codegen_static_fields_for(MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var))->get_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// Instance = this;
		((MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_StaticFields*)il2cpp_codegen_static_fields_for(MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// DontDestroyOnLoad(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MusicManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Start_m1F72199B30EAA11A29F14D822F58533A045DEE6C (MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_5(L_0);
		// }
		return;
	}
}
// System.Void MusicManager::ChangeClip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_ChangeClip_mFFE40205B4816B8D99A954A7CF04C1D3F141FD0A (MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method)
{
	{
		// audioSource.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = ___clip0;
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MusicManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager__ctor_m94AF2B626CF1C068F5FA6D685B09D615BC0558F1 (MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NextBlock::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextBlock_Awake_mC46310F94197F073356744390AFBCC17734C8545 (NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF_StaticFields*)il2cpp_codegen_static_fields_for(NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF_il2cpp_TypeInfo_var))->set_Instance_10(__this);
		// }
		return;
	}
}
// System.Void NextBlock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextBlock_Update_m075C4C2A88E5C196ADA3A27D93899E4E90F8477E (NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NextBlock::updateImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextBlock_updateImages_m7167A74C5C01BFFABD1A4F655AA1BE84848D42D7 (NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mE8E4144715BD5BDB77169E4CF013D79D66F36861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Queue<int> inputBlocks = new Queue<int>(BlockGenerator.Instance.blockQueue);
		BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * L_0 = ((BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields*)il2cpp_codegen_static_fields_for(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var))->get_Instance_4();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_1 = L_0->get_blockQueue_5();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_2 = (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *)il2cpp_codegen_object_new(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F_il2cpp_TypeInfo_var);
		Queue_1__ctor_mE8E4144715BD5BDB77169E4CF013D79D66F36861(L_2, L_1, /*hidden argument*/Queue_1__ctor_mE8E4144715BD5BDB77169E4CF013D79D66F36861_RuntimeMethod_var);
		// var temp = inputBlocks.Dequeue();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_3 = L_2;
		int32_t L_4;
		L_4 = Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2(L_3, /*hidden argument*/Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_RuntimeMethod_var);
		V_0 = L_4;
		// one.sprite = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().sprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_one_7();
		BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * L_6 = ((BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields*)il2cpp_codegen_static_fields_for(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var))->get_Instance_4();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_7 = L_6->get_blockArray_7();
		int32_t L_8 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_9, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_11;
		L_11 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_10, /*hidden argument*/NULL);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_5, L_11, /*hidden argument*/NULL);
		// one.color = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = __this->get_one_7();
		BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * L_13 = ((BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields*)il2cpp_codegen_static_fields_for(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var))->get_Instance_4();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = L_13->get_blockArray_7();
		int32_t L_15 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_17;
		L_17 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_16, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_17, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_18);
		// temp = inputBlocks.Dequeue();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_19 = L_3;
		int32_t L_20;
		L_20 = Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2(L_19, /*hidden argument*/Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_RuntimeMethod_var);
		V_0 = L_20;
		// two.sprite = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().sprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_21 = __this->get_two_8();
		BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * L_22 = ((BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields*)il2cpp_codegen_static_fields_for(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var))->get_Instance_4();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_23 = L_22->get_blockArray_7();
		int32_t L_24 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_26;
		L_26 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_25, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_27;
		L_27 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_26, /*hidden argument*/NULL);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_21, L_27, /*hidden argument*/NULL);
		// two.color = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_two_8();
		BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * L_29 = ((BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields*)il2cpp_codegen_static_fields_for(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var))->get_Instance_4();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_30 = L_29->get_blockArray_7();
		int32_t L_31 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_33;
		L_33 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_32, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34;
		L_34 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_33, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_34);
		// temp = inputBlocks.Dequeue();
		int32_t L_35;
		L_35 = Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2(L_19, /*hidden argument*/Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_RuntimeMethod_var);
		V_0 = L_35;
		// three.sprite = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().sprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_36 = __this->get_three_9();
		BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * L_37 = ((BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields*)il2cpp_codegen_static_fields_for(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var))->get_Instance_4();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_38 = L_37->get_blockArray_7();
		int32_t L_39 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_41;
		L_41 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_40, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_42;
		L_42 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_41, /*hidden argument*/NULL);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_36, L_42, /*hidden argument*/NULL);
		// three.color = BlockGenerator.Instance.blockArray[temp].GetComponent<SpriteRenderer>().color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_43 = __this->get_three_9();
		BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF * L_44 = ((BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_StaticFields*)il2cpp_codegen_static_fields_for(BlockGenerator_tC9D7A696AA234FC6173FD87FAD4155483E9C4EBF_il2cpp_TypeInfo_var))->get_Instance_4();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_45 = L_44->get_blockArray_7();
		int32_t L_46 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_45, L_46, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_48;
		L_48 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_47, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49;
		L_49 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_48, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_43, L_49);
		// }
		return;
	}
}
// System.Void NextBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextBlock__ctor_m5ED1A967F455C0DA6C499BDCC6DC46043B0323AC (NextBlock_tC3367D377EBFB8D6F06E3F5F4CDCADDDB5528CBF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void OnlyVisibleInEditor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnlyVisibleInEditor_Awake_mE8D8AF8FA71FE687A56CA01ECD678280988A1A1B (OnlyVisibleInEditor_tEFBF6A12B7CF1000EE84DC24F674660FF28AFFF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(GetComponent<SpriteRenderer>());
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OnlyVisibleInEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnlyVisibleInEditor__ctor_m3C4C22FEDC1A453F61DB449456E3E917C16EBD97 (OnlyVisibleInEditor_tEFBF6A12B7CF1000EE84DC24F674660FF28AFFF2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Parallax::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax_Start_m7C7DC681755C4BBB7BF918CC67A2A5F2360F5DF2 (Parallax_t98398A197751A44EE1A4B082AB50A668D671803C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// startPos = transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_startPos_5(L_2);
		// length = GetComponent<SpriteRenderer>().bounds.size.x -12;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_4;
		L_4 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_0), /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		__this->set_length_4(((float)il2cpp_codegen_subtract((float)L_6, (float)(12.0f))));
		// }
		return;
	}
}
// System.Void Parallax::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax_Update_m208D10754A83F3949A0DE958EBB01C4B63BC337B (Parallax_t98398A197751A44EE1A4B082AB50A668D671803C * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float temp = (camera.transform.position.x * (1 - parallaxEffect));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_camera_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_parallaxEffect_7();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4))));
		// float dist = (camera.transform.position.x * parallaxEffect);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_camera_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		float L_9 = __this->get_parallaxEffect_7();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9));
		// transform.position = new Vector3(startPos + dist, transform.position.y, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_11 = __this->get_startPos_5();
		float L_12 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), ((float)il2cpp_codegen_add((float)L_11, (float)L_12)), L_15, L_18, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_19, /*hidden argument*/NULL);
		// if(temp > startPos + length) startPos += length;
		float L_20 = V_0;
		float L_21 = __this->get_startPos_5();
		float L_22 = __this->get_length_4();
		if ((!(((float)L_20) > ((float)((float)il2cpp_codegen_add((float)L_21, (float)L_22))))))
		{
			goto IL_009c;
		}
	}
	{
		// if(temp > startPos + length) startPos += length;
		float L_23 = __this->get_startPos_5();
		float L_24 = __this->get_length_4();
		__this->set_startPos_5(((float)il2cpp_codegen_add((float)L_23, (float)L_24)));
		return;
	}

IL_009c:
	{
		// else if(temp < startPos - length) startPos -= length;
		float L_25 = V_0;
		float L_26 = __this->get_startPos_5();
		float L_27 = __this->get_length_4();
		if ((!(((float)L_25) < ((float)((float)il2cpp_codegen_subtract((float)L_26, (float)L_27))))))
		{
			goto IL_00bf;
		}
	}
	{
		// else if(temp < startPos - length) startPos -= length;
		float L_28 = __this->get_startPos_5();
		float L_29 = __this->get_length_4();
		__this->set_startPos_5(((float)il2cpp_codegen_subtract((float)L_28, (float)L_29)));
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void Parallax::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax__ctor_m0690485E7F8E13945AF42671FF1C937CB60D4B36 (Parallax_t98398A197751A44EE1A4B082AB50A668D671803C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PauseMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Start_mB3762C9E5B204FDE0381A6409728D7DCAD7E6C37 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// pauseMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenu_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m191CABDC11442A2CC104FC8B3244D04826E7BD57 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// if(Input.GetKeyDown(KeyCode.P))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)112), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// if(isPaused)
		bool L_1 = __this->get_isPaused_7();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// ResumeGame();
		PauseMenu_ResumeGame_m2111A791B33608A3F6C2B417A6708B792ADD9660(__this, /*hidden argument*/NULL);
		// }
		goto IL_001f;
	}

IL_0019:
	{
		// PauseGame();
		PauseMenu_PauseGame_mA9D16C1338F237508B03597E9A2E806AB61ECB6A(__this, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// if(Input.GetKeyDown(KeyCode.R))
		bool L_2;
		L_2 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// isPaused = false;
		__this->set_isPaused_7((bool)0);
		// DestroyBlocks();
		PauseMenu_DestroyBlocks_m363C30DD55CEB43902D524C9EADD126B73B4F6A1(__this, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PauseGame_mA9D16C1338F237508B03597E9A2E806AB61ECB6A (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// pauseMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenu_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// isPaused = true;
		__this->set_isPaused_7((bool)1);
		// }
		return;
	}
}
// System.Void PauseMenu::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_ResumeGame_m2111A791B33608A3F6C2B417A6708B792ADD9660 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// pauseMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenu_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// isPaused = false;
		__this->set_isPaused_7((bool)0);
		// }
		return;
	}
}
// System.Void PauseMenu::GoToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_GoToMenu_mD757C915597DF5F70AB439C754489FA264379745 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MusicManager.Instance.ChangeClip(transitionClip);
		MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * L_0 = ((MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_StaticFields*)il2cpp_codegen_static_fields_for(MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var))->get_Instance_4();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_transitionClip_6();
		MusicManager_ChangeClip_mFFE40205B4816B8D99A954A7CF04C1D3F141FD0A(L_0, L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene("Title");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Restart_m18BB1805D8E72A6B8EDD190BD99D0C1AF76C805E (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// isPaused = false;
		__this->set_isPaused_7((bool)0);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::DestroyBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_DestroyBlocks_m363C30DD55CEB43902D524C9EADD126B73B4F6A1 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8FF7C8BB0A611E97790C867C9FCE2086115E06B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// destroyBlocks = GameObject.FindGameObjectsWithTag("Blocks");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralA8FF7C8BB0A611E97790C867C9FCE2086115E06B, /*hidden argument*/NULL);
		__this->set_destroyBlocks_5(L_0);
		// for(int i= 0; i < destroyBlocks.Length; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		// GameObject.Destroy(destroyBlocks[i]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_destroyBlocks_5();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// for(int i= 0; i < destroyBlocks.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0025:
	{
		// for(int i= 0; i < destroyBlocks.Length; i++)
		int32_t L_6 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_destroyBlocks_5();
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		// BlockDropper.inst.DropBlock();
		BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3 * L_8 = ((BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_StaticFields*)il2cpp_codegen_static_fields_for(BlockDropper_t48B6122B09BD99E28433969C60D127D6B5E33BD3_il2cpp_TypeInfo_var))->get_inst_4();
		BlockDropper_DropBlock_m17022D3B394AF171248AA2F3A93491A9CA6E665A(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_mA1A281F3359C234E5CF24FFEAC20C12C48D69018 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Persistence::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Persistence_Start_m5809AF2CD6C1C0D302F2BA8E0D8B6FB1B22F77D8 (Persistence_tE974BC5B9001311BC8D0342175BEC7C19272365C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Title");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Persistence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Persistence__ctor_m59C63413BEE29B35E2980B6B525EDD4452698872 (Persistence_tE974BC5B9001311BC8D0342175BEC7C19272365C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Awake_m441E25AABE54B8C5068808DB8025B67B9A7EA87E (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = player.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_19();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_animator_4(L_1);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_24(L_2);
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Grounded() || Tetris())
		bool L_0;
		L_0 = PlayerMovement_Grounded_m08DAD49C29E245F6D9BFFA553C3D203552BDF74C(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = PlayerMovement_Tetris_m1652F0432EBA2C18A05FE3361C7582D219294EBC(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}

IL_0010:
	{
		// coyoteTimeCounter = coyoteTime;
		float L_2 = __this->get_coyoteTime_13();
		__this->set_coyoteTimeCounter_14(L_2);
		goto IL_0030;
	}

IL_001e:
	{
		// coyoteTimeCounter -= Time.deltaTime;
		float L_3 = __this->get_coyoteTimeCounter_14();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_coyoteTimeCounter_14(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
	}

IL_0030:
	{
		// if (Input.GetButton(JUMP))
		bool L_5;
		L_5 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// jumpBufferCounter = jumpBufferTime;
		float L_6 = __this->get_jumpBufferTime_15();
		__this->set_jumpBufferCounter_16(L_6);
		goto IL_005c;
	}

IL_004a:
	{
		// jumpBufferCounter -= Time.deltaTime;
		float L_7 = __this->get_jumpBufferCounter_16();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_jumpBufferCounter_16(((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)));
	}

IL_005c:
	{
		// if (Input.GetButton(HORIZONTAL))
		bool L_9;
		L_9 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00d0;
		}
	}
	{
		// horizontal = Input.GetAxis(HORIZONTAL) * moveSpeed;
		float L_10;
		L_10 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_11 = __this->get_moveSpeed_9();
		__this->set_horizontal_12(((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)));
		// rb2d.velocity = new Vector2(horizontal, rb2d.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_12 = __this->get_rb2d_20();
		float L_13 = __this->get_horizontal_12();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14 = __this->get_rb2d_20();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_17), L_13, L_16, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_12, L_17, /*hidden argument*/NULL);
		// if (!soundPlaying && Grounded())
		bool L_18 = __this->get_soundPlaying_18();
		if (L_18)
		{
			goto IL_00c4;
		}
	}
	{
		bool L_19;
		L_19 = PlayerMovement_Grounded_m08DAD49C29E245F6D9BFFA553C3D203552BDF74C(__this, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c4;
		}
	}
	{
		// StartCoroutine(walkSound());
		RuntimeObject* L_20;
		L_20 = PlayerMovement_walkSound_mC43A7720A01C1FD9EECA64160FA5237C59FDB9F4(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_21;
		L_21 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_20, /*hidden argument*/NULL);
		// }
		goto IL_00d0;
	}

IL_00c4:
	{
		// StopCoroutine(walkSound());
		RuntimeObject* L_22;
		L_22 = PlayerMovement_walkSound_mC43A7720A01C1FD9EECA64160FA5237C59FDB9F4(__this, /*hidden argument*/NULL);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(__this, L_22, /*hidden argument*/NULL);
	}

IL_00d0:
	{
		// if (coyoteTimeCounter > 0f && jumpBufferCounter > 0f)
		float L_23 = __this->get_coyoteTimeCounter_14();
		if ((!(((float)L_23) > ((float)(0.0f)))))
		{
			goto IL_011b;
		}
	}
	{
		float L_24 = __this->get_jumpBufferCounter_16();
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_011b;
		}
	}
	{
		// rb2d.velocity = new Vector2(rb2d.velocity.x, jumpPower);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_25 = __this->get_rb2d_20();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_26 = __this->get_rb2d_20();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_0();
		float L_29 = __this->get_jumpPower_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_30), L_28, L_29, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_25, L_30, /*hidden argument*/NULL);
		// jumpBufferCounter = 0f;
		__this->set_jumpBufferCounter_16((0.0f));
	}

IL_011b:
	{
		// if (Input.GetButtonUp(JUMP) && rb2d.velocity.y > 0f)
		bool L_31;
		L_31 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_017f;
		}
	}
	{
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_32 = __this->get_rb2d_20();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_1();
		if ((!(((float)L_34) > ((float)(0.0f)))))
		{
			goto IL_017f;
		}
	}
	{
		// rb2d.velocity = new Vector2(rb2d.velocity.x, rb2d.velocity.y * .5f);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_35 = __this->get_rb2d_20();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_36 = __this->get_rb2d_20();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_x_0();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_39 = __this->get_rb2d_20();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		L_40 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_42), L_38, ((float)il2cpp_codegen_multiply((float)L_41, (float)(0.5f))), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_35, L_42, /*hidden argument*/NULL);
		// coyoteTimeCounter = 0f;
		__this->set_coyoteTimeCounter_14((0.0f));
	}

IL_017f:
	{
		// animator.SetFloat("speed", Mathf.Abs(rb2d.velocity.x));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_43 = __this->get_animator_4();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_44 = __this->get_rb2d_20();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		L_45 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_x_0();
		float L_47;
		L_47 = fabsf(L_46);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_43, _stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B, L_47, /*hidden argument*/NULL);
		// if(player.GetComponent<Rigidbody2D>().velocity.y > 1)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = __this->get_player_19();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_49;
		L_49 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_48, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_y_1();
		if ((!(((float)L_51) > ((float)(1.0f)))))
		{
			goto IL_01e1;
		}
	}
	{
		// sprite.sprite = spriteArray[2];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_52 = __this->get_sprite_6();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_53 = __this->get_spriteArray_5();
		int32_t L_54 = 2;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_55 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_52, L_55, /*hidden argument*/NULL);
		// animator.enabled = false;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_56 = __this->get_animator_4();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_56, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0259;
	}

IL_01e1:
	{
		// else if(player.GetComponent<Rigidbody2D>().velocity.y < -1)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = __this->get_player_19();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_58;
		L_58 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_57, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59;
		L_59 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_58, /*hidden argument*/NULL);
		float L_60 = L_59.get_y_1();
		if ((!(((float)L_60) < ((float)(-1.0f)))))
		{
			goto IL_021e;
		}
	}
	{
		// sprite.sprite = spriteArray[1];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_61 = __this->get_sprite_6();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_62 = __this->get_spriteArray_5();
		int32_t L_63 = 1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_64 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_61, L_64, /*hidden argument*/NULL);
		// animator.enabled = false;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_65 = __this->get_animator_4();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_65, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0259;
	}

IL_021e:
	{
		// else if(player.GetComponent<Rigidbody2D>().velocity.y ==0 )
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = __this->get_player_19();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_67;
		L_67 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_66, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_68;
		L_68 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_67, /*hidden argument*/NULL);
		float L_69 = L_68.get_y_1();
		if ((!(((float)L_69) == ((float)(0.0f)))))
		{
			goto IL_0259;
		}
	}
	{
		// sprite.sprite = spriteArray[0];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_70 = __this->get_sprite_6();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_71 = __this->get_spriteArray_5();
		int32_t L_72 = 0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_73 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_70, L_73, /*hidden argument*/NULL);
		// animator.enabled = true;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_74 = __this->get_animator_4();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_74, (bool)1, /*hidden argument*/NULL);
	}

IL_0259:
	{
		// if (rb2d.velocity.x > 0 && !facingRight)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_75 = __this->get_rb2d_20();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_76;
		L_76 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_75, /*hidden argument*/NULL);
		float L_77 = L_76.get_x_0();
		if ((!(((float)L_77) > ((float)(0.0f)))))
		{
			goto IL_027e;
		}
	}
	{
		bool L_78 = __this->get_facingRight_17();
		if (L_78)
		{
			goto IL_027e;
		}
	}
	{
		// Flip();
		PlayerMovement_Flip_mC167047A7BCCE6865291E6D8F2B7D35EA57948C3(__this, /*hidden argument*/NULL);
	}

IL_027e:
	{
		// if (rb2d.velocity.x < 0 && facingRight)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_79 = __this->get_rb2d_20();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_80;
		L_80 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_79, /*hidden argument*/NULL);
		float L_81 = L_80.get_x_0();
		if ((!(((float)L_81) < ((float)(0.0f)))))
		{
			goto IL_02a3;
		}
	}
	{
		bool L_82 = __this->get_facingRight_17();
		if (!L_82)
		{
			goto IL_02a3;
		}
	}
	{
		// Flip();
		PlayerMovement_Flip_mC167047A7BCCE6865291E6D8F2B7D35EA57948C3(__this, /*hidden argument*/NULL);
	}

IL_02a3:
	{
		// }
		return;
	}
}
// System.Boolean PlayerMovement::Grounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_Grounded_m08DAD49C29E245F6D9BFFA553C3D203552BDF74C (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// RaycastHit2D raycastHit = Physics2D.BoxCast(boxCollider2D.bounds.center, boxCollider2D.bounds.size, 0f, Vector2.down, 0.1f, groundLayer);
		CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * L_0 = __this->get_boxCollider2D_23();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_1;
		L_1 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * L_4 = __this->get_boxCollider2D_23();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_5;
		L_5 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_9 = __this->get_groundLayer_21();
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_11;
		L_11 = Physics2D_BoxCast_m6550719F8AEEECBEFA1F9BC82F9D8A71DDA14359(L_3, L_7, (0.0f), L_8, (0.100000001f), L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// return raycastHit.collider != null;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12;
		L_12 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Boolean PlayerMovement::Tetris()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_Tetris_m1652F0432EBA2C18A05FE3361C7582D219294EBC (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// RaycastHit2D raycastHit = Physics2D.BoxCast(boxCollider2D.bounds.center, boxCollider2D.bounds.size, 0f, Vector2.down, 0.01f, tetrisLayer);
		CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * L_0 = __this->get_boxCollider2D_23();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_1;
		L_1 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * L_4 = __this->get_boxCollider2D_23();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_5;
		L_5 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_9 = __this->get_tetrisLayer_22();
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_11;
		L_11 = Physics2D_BoxCast_m6550719F8AEEECBEFA1F9BC82F9D8A71DDA14359(L_3, L_7, (0.0f), L_8, (0.00999999978f), L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// return raycastHit.collider != null;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12;
		L_12 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void PlayerMovement::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Flip_mC167047A7BCCE6865291E6D8F2B7D35EA57948C3 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// facingRight = !facingRight;
		bool L_0 = __this->get_facingRight_17();
		__this->set_facingRight_17((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// Vector3 scaler = player.transform.localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_19();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// scaler.x *= -1;
		float* L_4 = (&V_0)->get_address_of_x_2();
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		*((float*)L_5) = (float)((float)il2cpp_codegen_multiply((float)L_6, (float)(-1.0f)));
		// player.transform.localScale = scaler;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_player_19();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerMovement::walkSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_walkSound_mC43A7720A01C1FD9EECA64160FA5237C59FDB9F4 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F * L_0 = (U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F *)il2cpp_codegen_object_new(U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F_il2cpp_TypeInfo_var);
		U3CwalkSoundU3Ed__26__ctor_m782E4078153CF5FD85CF539243E42D764F71C8FC(L_0, 0, /*hidden argument*/NULL);
		U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerMovement::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_OnCollisionEnter2D_mDC9D43936D485DEF8FE65C90E92042EDD2D1F2DD (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6E8B73FD8D61BC747E6E7555278BD8EB05376BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.collider.name.ToString() == "KillZ")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1;
		L_1 = Collision2D_get_collider_mA7687EDB0D47A2F211BFE8DB89266B9AA05CFDDD(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralC6E8B73FD8D61BC747E6E7555278BD8EB05376BA, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// GameState.Instance.PlayerHealth = 0;
		GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * L_5 = ((GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var))->get_Instance_4();
		L_5->set_PlayerHealth_8(0);
		// UIMgr.inst.updateHealth(GameState.Instance.PlayerHealth);
		UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * L_6 = ((UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_StaticFields*)il2cpp_codegen_static_fields_for(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_il2cpp_TypeInfo_var))->get_inst_13();
		GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * L_7 = ((GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var))->get_Instance_4();
		int32_t L_8 = L_7->get_PlayerHealth_8();
		UIMgr_updateHealth_m21BDBD0B2CF535E3DC9F1163DE390F4DF185FEF8(L_6, L_8, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// public float jumpPower = 8f;
		__this->set_jumpPower_10((8.0f));
		// public float coyoteTime = 0.15f;
		__this->set_coyoteTime_13((0.150000006f));
		// public float jumpBufferTime = 0.15f;
		__this->set_jumpBufferTime_15((0.150000006f));
		// private bool facingRight = true;
		__this->set_facingRight_17((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Projectiles::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectiles_Start_mBF38D19EA5CBADCB5B098496B7CCD8678656DE37 (Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m02F38505F2D5D9CA7C5AD4571B76E4FC2BA53614_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m684FF88B6F63B826B47748A806A25A387576758E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = this.GetComponentInParent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponentInParent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m684FF88B6F63B826B47748A806A25A387576758E(__this, /*hidden argument*/Component_GetComponentInParent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m684FF88B6F63B826B47748A806A25A387576758E_RuntimeMethod_var);
		__this->set_rb_6(L_0);
		// myCollider2D = this.GetComponentInParent<Collider2D>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1;
		L_1 = Component_GetComponentInParent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m02F38505F2D5D9CA7C5AD4571B76E4FC2BA53614(__this, /*hidden argument*/Component_GetComponentInParent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m02F38505F2D5D9CA7C5AD4571B76E4FC2BA53614_RuntimeMethod_var);
		__this->set_myCollider2D_7(L_1);
		// }
		return;
	}
}
// System.Void Projectiles::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectiles_Update_mD944B51EB0F29B3F431DD5D95B13664CF302DFBF (Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(lifeTime > 0)
		float L_0 = __this->get_lifeTime_5();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		// lifeTime -= Time.deltaTime;
		float L_1 = __this->get_lifeTime_5();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_lifeTime_5(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// rb.velocity = new Vector2(-speed, 0);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rb_6();
		float L_4 = __this->get_speed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), ((-L_4)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003c:
	{
		// Object.Destroy(projectile);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_projectile_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectiles::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectiles_OnCollisionEnter2D_mF54CBFBCF3E1B07C81CCD51B2C432DCEB1D7209F (Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69586E2F8DD8B6019A1FACA4597D98920E154CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8FF7C8BB0A611E97790C867C9FCE2086115E06B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.collider.tag == "Player")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1;
		L_1 = Collision2D_get_collider_mA7687EDB0D47A2F211BFE8DB89266B9AA05CFDDD(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// GameState.Instance.PlayerHealth -= 1;
		GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * L_4 = ((GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var))->get_Instance_4();
		GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * L_5 = L_4;
		int32_t L_6 = L_5->get_PlayerHealth_8();
		L_5->set_PlayerHealth_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		// UIMgr.inst.updateHealth(GameState.Instance.PlayerHealth);
		UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * L_7 = ((UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_StaticFields*)il2cpp_codegen_static_fields_for(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_il2cpp_TypeInfo_var))->get_inst_13();
		GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE * L_8 = ((GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_StaticFields*)il2cpp_codegen_static_fields_for(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE_il2cpp_TypeInfo_var))->get_Instance_4();
		int32_t L_9 = L_8->get_PlayerHealth_8();
		UIMgr_updateHealth_m21BDBD0B2CF535E3DC9F1163DE390F4DF185FEF8(L_7, L_9, /*hidden argument*/NULL);
		// Object.Destroy(projectile);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_projectile_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0049:
	{
		// else if (collision.collider.tag != "Untagged" || collision.collider.name.ToString() == "Tilemap" || collision.collider.tag.ToString() == "Blocks")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_11 = ___collision0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12;
		L_12 = Collision2D_get_collider_mA7687EDB0D47A2F211BFE8DB89266B9AA05CFDDD(L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_13, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0098;
		}
	}
	{
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_15 = ___collision0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16;
		L_16 = Collision2D_get_collider_mA7687EDB0D47A2F211BFE8DB89266B9AA05CFDDD(L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteralA69586E2F8DD8B6019A1FACA4597D98920E154CB, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0098;
		}
	}
	{
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_20 = ___collision0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_21;
		L_21 = Collision2D_get_collider_mA7687EDB0D47A2F211BFE8DB89266B9AA05CFDDD(L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		bool L_24;
		L_24 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_23, _stringLiteralA8FF7C8BB0A611E97790C867C9FCE2086115E06B, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00a3;
		}
	}

IL_0098:
	{
		// Object.Destroy(projectile);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_projectile_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_25, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void Projectiles::setSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectiles_setSpeed_mFFF4220289422626AFA7D6D4AE8C7D5A6CA0B8F3 (Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22 * __this, float ___newSpeed0, const RuntimeMethod* method)
{
	{
		// speed = newSpeed;
		float L_0 = ___newSpeed0;
		__this->set_speed_4(L_0);
		// }
		return;
	}
}
// System.Void Projectiles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectiles__ctor_m55F0188C3CDB35E49333DD37679885FA0E832130 (Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 10f;
		__this->set_speed_4((10.0f));
		// float lifeTime = 2f;
		__this->set_lifeTime_5((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIMgr::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_Start_m0F3057D72D11C49C127B2FE14C58F351245ADF7C (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inst = this;
		((UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_StaticFields*)il2cpp_codegen_static_fields_for(UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F_il2cpp_TypeInfo_var))->set_inst_13(__this);
		// timeDisplay = timeObj.GetComponent<UnityEngine.UI.Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_timeObj_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_timeDisplay_6(L_1);
		// creditDisplay.text = creditCount.ToString();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_2 = __this->get_creditDisplay_9();
		float* L_3 = __this->get_address_of_creditCount_8();
		String_t* L_4;
		L_4 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void UIMgr::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_Update_m38947566301711A3FB480A783512318474BCB21F (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, const RuntimeMethod* method)
{
	{
		// updateTime();
		UIMgr_updateTime_m926D219FCD3379FC9D2E5F39F9CC5DE533BF2948(__this, /*hidden argument*/NULL);
		// testButton();
		UIMgr_testButton_mCDD691AF7AD645B0C87CF5D932651F5A39331BF2(__this, /*hidden argument*/NULL);
		// updateCredits();
		UIMgr_updateCredits_mA225C7CD3A312BE4213991E9DE50A60CDCDADED7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIMgr::testButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_testButton_mCDD691AF7AD645B0C87CF5D932651F5A39331BF2 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyUp(KeyCode.T))
		bool L_0;
		L_0 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)116), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIMgr::updateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_updateTime_m926D219FCD3379FC9D2E5F39F9CC5DE533BF2948 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// gameTime += Time.deltaTime;
		float L_0 = __this->get_gameTime_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_gameTime_5(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// string timeOut = gameTime.ToString("0000");
		float* L_2 = __this->get_address_of_gameTime_5();
		String_t* L_3;
		L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_2, _stringLiteral8BF951CF903ECC622812D47B1157D1A3AFA9FBDC, /*hidden argument*/NULL);
		V_0 = L_3;
		// timeDisplay.text = timeOut;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_timeDisplay_6();
		String_t* L_5 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void UIMgr::updateCredits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_updateCredits_mA225C7CD3A312BE4213991E9DE50A60CDCDADED7 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, const RuntimeMethod* method)
{
	{
		// creditDisplay.text = creditCount.ToString();
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_0 = __this->get_creditDisplay_9();
		float* L_1 = __this->get_address_of_creditCount_8();
		String_t* L_2;
		L_2 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void UIMgr::updateCart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_updateCart_mA1F8E53751A17FE40CED366570221C31322EDB60 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, int32_t ___arraySpot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCart_t4DCC493717102D6D81CA7483B7D045489560C478_m2CB7117826AE5C92E249D1116F5991A7973B636F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UICartElement[arraySpot].GetComponent<Cart>().isCollected = true;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_UICartElement_10();
		int32_t L_1 = ___arraySpot0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Cart_t4DCC493717102D6D81CA7483B7D045489560C478 * L_3;
		L_3 = GameObject_GetComponent_TisCart_t4DCC493717102D6D81CA7483B7D045489560C478_m2CB7117826AE5C92E249D1116F5991A7973B636F(L_2, /*hidden argument*/GameObject_GetComponent_TisCart_t4DCC493717102D6D81CA7483B7D045489560C478_m2CB7117826AE5C92E249D1116F5991A7973B636F_RuntimeMethod_var);
		L_3->set_isCollected_4((bool)1);
		// }
		return;
	}
}
// System.Void UIMgr::updateHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_updateHealth_m21BDBD0B2CF535E3DC9F1163DE390F4DF185FEF8 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, int32_t ___life0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBACE2CB1A0816F15964A916E9051C544E711037E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (life != 0)
		int32_t L_0 = ___life0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// LifeList[life].enabled = false;
		List_1_tC57263F48ADF56B702DF7112B29D6B6A1ED7332D * L_1 = __this->get_LifeList_12();
		int32_t L_2 = ___life0;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_3;
		L_3 = List_1_get_Item_mBACE2CB1A0816F15964A916E9051C544E711037E_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_mBACE2CB1A0816F15964A916E9051C544E711037E_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_3, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		// Restart();
		UIMgr_Restart_m3943E06C46BDADF9E1CCE351B4E2760C585C7D56(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIMgr::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr_Restart_m3943E06C46BDADF9E1CCE351B4E2760C585C7D56 (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// UnityEngine.SceneManagement.SceneManager.LoadScene(UnityEngine.SceneManagement.SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIMgr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMgr__ctor_mBDBAE6CF585E138E2C01425A6C75D4617F95250C (UIMgr_tB644DDD647BAE08F656A0750954353048EE6646F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void animateCart::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void animateCart_Start_m0A79768DBF37BC08BAFC53B9E85029E961158E68 (animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void animateCart::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void animateCart_Update_m9572F3ED8E0414361A08189D6A7F6347EA3D073F (animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C * __this, const RuntimeMethod* method)
{
	{
		// if (isCartSpin == true)
		bool L_0 = __this->get_isCartSpin_5();
		if (!L_0)
		{
			goto IL_009e;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_1 = __this->get_timer_6();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_6(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		// transform.Rotate(new Vector3(0, 180, 0) * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_3, L_6, /*hidden argument*/NULL);
		// if (timer > 1.5) sprite.color = (Color.white);
		float L_7 = __this->get_timer_6();
		if ((!(((double)((double)((double)L_7))) > ((double)(1.5)))))
		{
			goto IL_0068;
		}
	}
	{
		// if (timer > 1.5) sprite.color = (Color.white);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_8 = __this->get_sprite_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
	}

IL_0068:
	{
		// if (timer > 2)
		float L_10 = __this->get_timer_6();
		if ((!(((float)L_10) > ((float)(2.0f)))))
		{
			goto IL_009e;
		}
	}
	{
		// transform.localRotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_11, L_12, /*hidden argument*/NULL);
		// timer = 0;
		__this->set_timer_6((0.0f));
		// isCartSpin = false;
		__this->set_isCartSpin_5((bool)0);
		// isDone = true;
		__this->set_isDone_4((bool)1);
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void animateCart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void animateCart__ctor_m0C1E9E4C8BA1DE2DC54344EEC3B5751605D53293 (animateCart_t31A796658B95BB09CBB935F50A8D14BC06EAB97C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void blueanimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void blueanimation_Start_mD86CF8AE67BD112C756659F1D829F802FC4011EA (blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Srender = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_Srender_6(L_0);
		// bc = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_bc_8(L_1);
		// }
		return;
	}
}
// System.Void blueanimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void blueanimation_Update_mF0EC736667FD2F1D9D8636924888B468F884C2A0 (blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(new Vector3(0, -120, 0) * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (-120.0f), (0.0f), /*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void blueanimation::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void blueanimation_OnTriggerEnter2D_mB60125BD72683899CE5459A68032FEDBC219174A (blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE09CC9692AF907FEBF23C900BE6757E82AB291A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.Log("END!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDE09CC9692AF907FEBF23C900BE6757E82AB291A, /*hidden argument*/NULL);
		// MusicManager.Instance.ChangeClip(transitionClip);
		MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D * L_3 = ((MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_StaticFields*)il2cpp_codegen_static_fields_for(MusicManager_tFC710AB7CA46AF229C4B937E8F9E0119AE59182D_il2cpp_TypeInfo_var))->get_Instance_4();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = __this->get_transitionClip_9();
		MusicManager_ChangeClip_mFFE40205B4816B8D99A954A7CF04C1D3F141FD0A(L_3, L_4, /*hidden argument*/NULL);
		// SceneManager.LoadScene("EndScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void blueanimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void blueanimation__ctor_mA56431DB2AEAE0B58A110D95D5B6EE0A80FB6165 (blueanimation_t4F12571717E92025BC2A16E43FB2D4B12EFC7A1E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void titleanimateup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titleanimateup_Start_mE585A86C203CD1941522D0918305F9D03594BEA6 (titleanimateup_tFA792ACB564B47B0B99F5797BD7C6CE27B58BA0E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void titleanimateup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titleanimateup_Update_mE675045DD45B99392D247D9E49996CD07DE8FA1C (titleanimateup_tFA792ACB564B47B0B99F5797BD7C6CE27B58BA0E * __this, const RuntimeMethod* method)
{
	{
		// if (text.transform.position.y < 700)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_text_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		if ((!(((float)L_3) < ((float)(700.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		// text.transform.Translate(new Vector3(0, 100, 0) * Time.deltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_text_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (100.0f), (0.0f), /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_5, L_8, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// if (text2.transform.position.y < 650)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_text2_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		if ((!(((float)L_12) < ((float)(650.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		// text2.transform.Translate(new Vector3(0, 100, 0) * Time.deltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_text2_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (0.0f), (100.0f), (0.0f), /*hidden argument*/NULL);
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_14, L_17, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// if (text3.transform.position.y < 350)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_text3_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_y_3();
		if ((!(((float)L_21) < ((float)(350.0f)))))
		{
			goto IL_00de;
		}
	}
	{
		// text3.transform.Translate(new Vector3(0, 100, 0) * Time.deltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_text3_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), (0.0f), (100.0f), (0.0f), /*hidden argument*/NULL);
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, L_25, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_23, L_26, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// }
		return;
	}
}
// System.Void titleanimateup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titleanimateup__ctor_mE1665DC1F8AABEF6573636D01CE5C2394FDFFFF6 (titleanimateup_tFA792ACB564B47B0B99F5797BD7C6CE27B58BA0E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement/<walkSound>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwalkSoundU3Ed__26__ctor_m782E4078153CF5FD85CF539243E42D764F71C8FC (U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerMovement/<walkSound>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwalkSoundU3Ed__26_System_IDisposable_Dispose_m2D1F269B3EC18D55CECE0FAEB35F92DEBDB237A4 (U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerMovement/<walkSound>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwalkSoundU3Ed__26_MoveNext_m27823A622F23F5DFD1541FFB42D70E0E159BF0B5 (U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_004a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// soundPlaying = true;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4 = V_1;
		L_4->set_soundPlaying_18((bool)1);
		// audioSource.Play();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_5 = V_1;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5->get_audioSource_24();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_6, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(soundDelay);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_7 = V_1;
		float L_8 = L_7->get_soundDelay_11();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, L_8, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// soundPlaying = false;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_10 = V_1;
		L_10->set_soundPlaying_18((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object PlayerMovement/<walkSound>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwalkSoundU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD22CA1CE7553258316E7C004B683AF26F0C901B2 (U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerMovement/<walkSound>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwalkSoundU3Ed__26_System_Collections_IEnumerator_Reset_m11258980194B8DF4CC3E79986458208C8D3417D7 (U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwalkSoundU3Ed__26_System_Collections_IEnumerator_Reset_m11258980194B8DF4CC3E79986458208C8D3417D7_RuntimeMethod_var)));
	}
}
// System.Object PlayerMovement/<walkSound>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwalkSoundU3Ed__26_System_Collections_IEnumerator_get_Current_mEE24178C6E66F7712BB249AA608C087B5F238B0E (U3CwalkSoundU3Ed__26_tD1B8B27792382F3795DCC8C09D06EAC92085EE3F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Projectiles_setSpeed_mFFF4220289422626AFA7D6D4AE8C7D5A6CA0B8F3_inline (Projectiles_t71874B6F9DCF1985B74DEFA2EC22F9C0833CAB22 * __this, float ___newSpeed0, const RuntimeMethod* method)
{
	{
		// speed = newSpeed;
		float L_0 = ___newSpeed0;
		__this->set_speed_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_gshared_inline (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
