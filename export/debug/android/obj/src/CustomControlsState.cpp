#include <hxcpp.h>

#ifndef INCLUDED_Config
#include <Config.h>
#endif
#ifndef INCLUDED_CustomControlsState
#include <CustomControlsState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeyList
#include <flixel/input/android/FlxAndroidKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeys
#include <flixel/input/android/FlxAndroidKeys.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_ui_FlxActionMode
#include <ui/FlxActionMode.h>
#endif
#ifndef INCLUDED_ui_FlxDPadMode
#include <ui/FlxDPadMode.h>
#endif
#ifndef INCLUDED_ui_FlxVirtualPad
#include <ui/FlxVirtualPad.h>
#endif
#ifndef INCLUDED_ui_Hitbox
#include <ui/Hitbox.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_47f2710a91f16304_104_new,"CustomControlsState","new",0x679d371c,"CustomControlsState.new","CustomControlsState.hx",104,0xd7231fd4)
HX_DEFINE_STACK_FRAME(_hx_pos_47f2710a91f16304_111_new,"CustomControlsState","new",0x679d371c,"CustomControlsState.new","CustomControlsState.hx",111,0xd7231fd4)
HX_DEFINE_STACK_FRAME(_hx_pos_47f2710a91f16304_115_new,"CustomControlsState","new",0x679d371c,"CustomControlsState.new","CustomControlsState.hx",115,0xd7231fd4)
HX_DEFINE_STACK_FRAME(_hx_pos_47f2710a91f16304_21_new,"CustomControlsState","new",0x679d371c,"CustomControlsState.new","CustomControlsState.hx",21,0xd7231fd4)
static const ::String _hx_array_data_eabcb92a_4[] = {
	HX_("right control",19,f7,2c,d4),HX_("left control",44,96,61,07),HX_("keyboard",a7,bc,29,68),HX_("custom",b1,87,92,3f),HX_("hitbox",98,ed,27,57),
};
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_148_update,"CustomControlsState","update",0xfb63fccd,"CustomControlsState.update","CustomControlsState.hx",148,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_178_changeSelection,"CustomControlsState","changeSelection",0xe4dc2978,"CustomControlsState.changeSelection","CustomControlsState.hx",178,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_235_arrowanimate,"CustomControlsState","arrowanimate",0x3f33fdbc,"CustomControlsState.arrowanimate","CustomControlsState.hx",235,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_256_trackbutton,"CustomControlsState","trackbutton",0xbeae6d79,"CustomControlsState.trackbutton","CustomControlsState.hx",256,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_299_movebutton,"CustomControlsState","movebutton",0x13d59087,"CustomControlsState.movebutton","CustomControlsState.hx",299,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_306_setbuttontexts,"CustomControlsState","setbuttontexts",0x553b1a56,"CustomControlsState.setbuttontexts","CustomControlsState.hx",306,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_313_SpamCheck,"CustomControlsState","SpamCheck",0x34e070db,"CustomControlsState.SpamCheck","CustomControlsState.hx",313,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_334_save,"CustomControlsState","save",0x453e0901,"CustomControlsState.save","CustomControlsState.hx",334,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_343_savecustom,"CustomControlsState","savecustom",0x7212c772,"CustomControlsState.savecustom","CustomControlsState.hx",343,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_353_loadcustom,"CustomControlsState","loadcustom",0xde846b1b,"CustomControlsState.loadcustom","CustomControlsState.hx",353,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_358_resizebuttons,"CustomControlsState","resizebuttons",0xa3b78889,"CustomControlsState.resizebuttons","CustomControlsState.hx",358,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_365_savetoclipboard,"CustomControlsState","savetoclipboard",0x6b05fd9a,"CustomControlsState.savetoclipboard","CustomControlsState.hx",365,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_391_loadfromclipboard,"CustomControlsState","loadfromclipboard",0x0f318102,"CustomControlsState.loadfromclipboard","CustomControlsState.hx",391,0xd7231fd4)
HX_LOCAL_STACK_FRAME(_hx_pos_47f2710a91f16304_416_destroy,"CustomControlsState","destroy",0x82cfa1b6,"CustomControlsState.destroy","CustomControlsState.hx",416,0xd7231fd4)

void CustomControlsState_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::CustomControlsState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_47f2710a91f16304_104_new)
HXLINE( 105)			_gthis->save();
HXLINE( 106)			{
HXLINE( 106)				 ::flixel::FlxState nextState =  ::OptionsState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 106)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 106)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::CustomControlsState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_47f2710a91f16304_111_new)
HXLINE( 111)			_gthis->savetoclipboard(_gthis->_pad);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::CustomControlsState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_47f2710a91f16304_115_new)
HXLINE( 115)			_gthis->loadfromclipboard(_gthis->_pad);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_47f2710a91f16304_21_new)
HXLINE(  45)		this->buttonistouched = false;
HXLINE(  43)		this->curSelected = 0;
HXLINE(  41)		this->controlitems = ::Array_obj< ::String >::fromData( _hx_array_data_eabcb92a_4,5);
HXLINE(  52)		 ::CustomControlsState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  53)		super::__construct();
HXLINE(  56)		this->config =  ::Config_obj::__alloc( HX_CTX );
HXLINE(  59)		this->curSelected = this->config->getcontrolmode();
HXLINE(  63)		this->_pad =  ::ui::FlxVirtualPad_obj::__alloc( HX_CTX ,::ui::FlxDPadMode_obj::RIGHT_FULL_dyn(),::ui::FlxActionMode_obj::NONE_dyn());
HXLINE(  64)		this->_pad->set_alpha(( (Float)(0) ));
HXLINE(  69)		this->inputvari =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,125,50,0,this->controlitems->__get(0),48,null());
HXLINE(  72)		::String library = null();
HXDLIN(  72)		 ::Dynamic ui_tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  72)		 ::flixel::graphics::frames::FlxAtlasFrames ui_tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(ui_tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  74)		this->leftArrow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->inputvari->x - ( (Float)(60) )),(this->inputvari->y - ( (Float)(10) )),null());
HXLINE(  75)		this->leftArrow->set_frames(ui_tex1);
HXLINE(  76)		this->leftArrow->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow left",be,05,f8,94),null(),null(),null(),null());
HXLINE(  77)		this->leftArrow->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("arrow push left",f6,7a,62,0c),null(),null(),null(),null());
HXLINE(  78)		this->leftArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  80)		Float _hx_tmp = this->inputvari->x;
HXDLIN(  80)		Float _hx_tmp1 = ((_hx_tmp + this->inputvari->get_width()) + 10);
HXDLIN(  80)		this->rightArrow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,_hx_tmp1,this->leftArrow->y,null());
HXLINE(  81)		this->rightArrow->set_frames(ui_tex1);
HXLINE(  82)		this->rightArrow->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("arrow right",45,0e,1a,3b),null(),null(),null(),null());
HXLINE(  83)		this->rightArrow->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("arrow push right",0d,2a,d6,40),24,false,null(),null());
HXLINE(  84)		this->rightArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  88)		this->up_text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,200,200,0,(((HX_("Button up x:",d9,b0,a9,ae) + this->_pad->buttonUp->x) + HX_(" y:",c1,b1,18,00)) + this->_pad->buttonUp->y),24,null());
HXLINE(  89)		this->down_text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,200,250,0,(((HX_("Button down x:",b2,1d,ff,d8) + this->_pad->buttonDown->x) + HX_(" y:",c1,b1,18,00)) + this->_pad->buttonDown->y),24,null());
HXLINE(  90)		this->left_text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,200,300,0,(((HX_("Button left x:",2d,a3,40,60) + this->_pad->buttonLeft->x) + HX_(" y:",c1,b1,18,00)) + this->_pad->buttonLeft->y),24,null());
HXLINE(  91)		this->right_text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,200,350,0,(((HX_("Button right x:",54,6e,a2,8a) + this->_pad->buttonRight->x) + HX_(" y:",c1,b1,18,00)) + this->_pad->buttonRight->y),24,null());
HXLINE(  95)		this->_hb =  ::ui::Hitbox_obj::__alloc( HX_CTX ,null());
HXLINE(  96)		this->_hb->set_visible(false);
HXLINE( 100)		this->exitbutton =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::width - 650),25,HX_("exit",1e,f7,1d,43),null(),null(),null(),null());
HXLINE( 101)		this->exitbutton->resize(( (Float)(125) ),( (Float)(50) ));
HXLINE( 102)		this->exitbutton->setLabelFormat(HX_("VCR OSD Mono",be,44,e4,b8),24,-16777216,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 104)		Float savebutton = this->exitbutton->x;
HXDLIN( 104)		 ::flixel::addons::ui::FlxUIButton savebutton1 =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,((savebutton + this->exitbutton->get_width()) + 25),25,HX_("exit and save",68,ca,f8,f0), ::Dynamic(new _hx_Closure_0(_gthis)),null(),null(),null());
HXLINE( 108)		savebutton1->resize(( (Float)(250) ),( (Float)(50) ));
HXLINE( 109)		savebutton1->setLabelFormat(HX_("VCR OSD Mono",be,44,e4,b8),24,-16777216,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 111)		this->exportbutton =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::width - 150),25,HX_("export",74,91,7d,c4), ::Dynamic(new _hx_Closure_1(_gthis)),null(),null(),null());
HXLINE( 112)		this->exportbutton->resize(( (Float)(125) ),( (Float)(50) ));
HXLINE( 113)		this->exportbutton->setLabelFormat(HX_("VCR OSD Mono",be,44,e4,b8),24,-16777216,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 115)		this->importbutton =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,this->exportbutton->x,100,HX_("import",65,a1,82,08), ::Dynamic(new _hx_Closure_2(_gthis)),null(),null(),null());
HXLINE( 116)		this->importbutton->resize(( (Float)(125) ),( (Float)(50) ));
HXLINE( 117)		this->importbutton->setLabelFormat(HX_("VCR OSD Mono",be,44,e4,b8),24,-16777216,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 120)		this->add(this->exitbutton);
HXLINE( 121)		this->add(savebutton1);
HXLINE( 122)		this->add(this->exportbutton);
HXLINE( 123)		this->add(this->importbutton);
HXLINE( 126)		this->add(this->_pad);
HXLINE( 129)		this->add(this->_hb);
HXLINE( 133)		this->add(this->inputvari);
HXLINE( 134)		this->add(this->leftArrow);
HXLINE( 135)		this->add(this->rightArrow);
HXLINE( 138)		this->add(this->up_text);
HXLINE( 139)		this->add(this->down_text);
HXLINE( 140)		this->add(this->left_text);
HXLINE( 141)		this->add(this->right_text);
HXLINE( 144)		this->changeSelection(null(),null());
            	}

Dynamic CustomControlsState_obj::__CreateEmpty() { return new CustomControlsState_obj; }

void *CustomControlsState_obj::_hx_vtable = 0;

Dynamic CustomControlsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomControlsState_obj > _hx_result = new CustomControlsState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CustomControlsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5e5f3e6a) {
			if (inClassId<=(int)0x5661ffbf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x5661ffbf;
			} else {
				return inClassId==(int)0x5e5f3e6a;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void CustomControlsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_47f2710a91f16304_148_update)
HXLINE( 149)		this->super::update(elapsed);
HXLINE( 150)		this->SpamCheck();
HXLINE( 153)		 ::flixel::input::android::FlxAndroidKeyList _this = ( ( ::flixel::input::android::FlxAndroidKeyList)(::flixel::FlxG_obj::android->justReleased) );
HXDLIN( 153)		bool androidback = _this->keyManager->checkStatus((int)1073742094,_this->status);
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		if ((this->exitbutton->input->current != -1)) {
HXLINE( 157)			_hx_tmp = androidback;
            		}
            		else {
HXLINE( 157)			_hx_tmp = true;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 158)			 ::flixel::FlxState nextState =  ::OptionsState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 158)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 158)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 161)		{
HXLINE( 161)			int _g = 0;
HXDLIN( 161)			::Array< ::Dynamic> _g1 = ::flixel::FlxG_obj::touches->list;
HXDLIN( 161)			while((_g < _g1->length)){
HXLINE( 161)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN( 161)				_g = (_g + 1);
HXLINE( 163)				this->arrowanimate(touch);
HXLINE( 166)				bool _hx_tmp;
HXDLIN( 166)				if (touch->overlaps(this->leftArrow,null())) {
HXLINE( 166)					_hx_tmp = (touch->input->current == 2);
            				}
            				else {
HXLINE( 166)					_hx_tmp = false;
            				}
HXDLIN( 166)				if (_hx_tmp) {
HXLINE( 167)					this->changeSelection(-1,null());
            				}
            				else {
HXLINE( 168)					bool _hx_tmp;
HXDLIN( 168)					if (touch->overlaps(this->rightArrow,null())) {
HXLINE( 168)						_hx_tmp = (touch->input->current == 2);
            					}
            					else {
HXLINE( 168)						_hx_tmp = false;
            					}
HXDLIN( 168)					if (_hx_tmp) {
HXLINE( 169)						this->changeSelection(1,null());
            					}
            				}
HXLINE( 173)				this->trackbutton(touch);
            			}
            		}
            	}


void CustomControlsState_obj::changeSelection(::hx::Null< int >  __o_change, ::Dynamic forceChange){
            		int change = __o_change.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_47f2710a91f16304_178_changeSelection)
HXLINE( 179)		 ::CustomControlsState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 179)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 181)		if ((this->curSelected < 0)) {
HXLINE( 182)			this->curSelected = (this->controlitems->length - 1);
            		}
HXLINE( 183)		if ((this->curSelected >= this->controlitems->length)) {
HXLINE( 184)			this->curSelected = 0;
            		}
HXLINE( 185)		::haxe::Log_obj::trace(this->curSelected,::hx::SourceInfo(HX_("source/CustomControlsState.hx",c8,05,8e,86),185,HX_("CustomControlsState",2a,b9,bc,ea),HX_("changeSelection",bc,98,b5,48)));
HXLINE( 187)		if (::hx::IsNotNull( forceChange )) {
HXLINE( 189)			this->curSelected = ( (int)(forceChange) );
            		}
HXLINE( 192)		this->inputvari->set_text(this->controlitems->__get(this->curSelected));
HXLINE( 194)		if (::hx::IsNotNull( forceChange )) {
HXLINE( 196)			if ((this->curSelected == 2)) {
HXLINE( 197)				this->_pad->set_visible(true);
            			}
HXLINE( 200)			return;
            		}
HXLINE( 203)		this->_hb->set_visible(false);
HXLINE( 205)		switch((int)(this->curSelected)){
            			case (int)0: {
HXLINE( 207)				this->remove(this->_pad,null());
HXLINE( 208)				this->_pad = null();
HXLINE( 209)				this->_pad =  ::ui::FlxVirtualPad_obj::__alloc( HX_CTX ,::ui::FlxDPadMode_obj::RIGHT_FULL_dyn(),::ui::FlxActionMode_obj::NONE_dyn());
HXLINE( 210)				this->_pad->set_alpha(((Float)0.75));
HXLINE( 211)				this->add(this->_pad);
            			}
            			break;
            			case (int)1: {
HXLINE( 213)				this->remove(this->_pad,null());
HXLINE( 214)				this->_pad = null();
HXLINE( 215)				this->_pad =  ::ui::FlxVirtualPad_obj::__alloc( HX_CTX ,::ui::FlxDPadMode_obj::FULL_dyn(),::ui::FlxActionMode_obj::NONE_dyn());
HXLINE( 216)				this->_pad->set_alpha(((Float)0.75));
HXLINE( 217)				this->add(this->_pad);
            			}
            			break;
            			case (int)2: {
HXLINE( 219)				::haxe::Log_obj::trace(2,::hx::SourceInfo(HX_("source/CustomControlsState.hx",c8,05,8e,86),219,HX_("CustomControlsState",2a,b9,bc,ea),HX_("changeSelection",bc,98,b5,48)));
HXLINE( 220)				this->_pad->set_alpha(( (Float)(0) ));
            			}
            			break;
            			case (int)3: {
HXLINE( 222)				::haxe::Log_obj::trace(3,::hx::SourceInfo(HX_("source/CustomControlsState.hx",c8,05,8e,86),222,HX_("CustomControlsState",2a,b9,bc,ea),HX_("changeSelection",bc,98,b5,48)));
HXLINE( 223)				this->add(this->_pad);
HXLINE( 224)				this->_pad->set_alpha(((Float)0.75));
HXLINE( 225)				this->loadcustom();
            			}
            			break;
            			case (int)4: {
HXLINE( 227)				this->remove(this->_pad,null());
HXLINE( 228)				this->_pad->set_alpha(( (Float)(0) ));
HXLINE( 229)				this->_hb->set_visible(true);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CustomControlsState_obj,changeSelection,(void))

void CustomControlsState_obj::arrowanimate( ::flixel::input::touch::FlxTouch touch){
            	HX_STACKFRAME(&_hx_pos_47f2710a91f16304_235_arrowanimate)
HXLINE( 236)		bool _hx_tmp;
HXDLIN( 236)		if (touch->overlaps(this->leftArrow,null())) {
HXLINE( 236)			 ::flixel::input::FlxInput _this = touch->input;
HXDLIN( 236)			if ((_this->current != 1)) {
HXLINE( 236)				_hx_tmp = (_this->current == 2);
            			}
            			else {
HXLINE( 236)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 236)			_hx_tmp = false;
            		}
HXDLIN( 236)		if (_hx_tmp) {
HXLINE( 237)			this->leftArrow->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            		}
HXLINE( 240)		bool _hx_tmp1;
HXDLIN( 240)		if (touch->overlaps(this->leftArrow,null())) {
HXLINE( 240)			 ::flixel::input::FlxInput _this = touch->input;
HXDLIN( 240)			if ((_this->current != 0)) {
HXLINE( 240)				_hx_tmp1 = (_this->current == -1);
            			}
            			else {
HXLINE( 240)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 240)			_hx_tmp1 = false;
            		}
HXDLIN( 240)		if (_hx_tmp1) {
HXLINE( 241)			this->leftArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
HXLINE( 244)		bool _hx_tmp2;
HXDLIN( 244)		if (touch->overlaps(this->rightArrow,null())) {
HXLINE( 244)			 ::flixel::input::FlxInput _this = touch->input;
HXDLIN( 244)			if ((_this->current != 1)) {
HXLINE( 244)				_hx_tmp2 = (_this->current == 2);
            			}
            			else {
HXLINE( 244)				_hx_tmp2 = true;
            			}
            		}
            		else {
HXLINE( 244)			_hx_tmp2 = false;
            		}
HXDLIN( 244)		if (_hx_tmp2) {
HXLINE( 245)			this->rightArrow->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            		}
HXLINE( 248)		bool _hx_tmp3;
HXDLIN( 248)		if (touch->overlaps(this->rightArrow,null())) {
HXLINE( 248)			 ::flixel::input::FlxInput _this = touch->input;
HXDLIN( 248)			if ((_this->current != 0)) {
HXLINE( 248)				_hx_tmp3 = (_this->current == -1);
            			}
            			else {
HXLINE( 248)				_hx_tmp3 = true;
            			}
            		}
            		else {
HXLINE( 248)			_hx_tmp3 = false;
            		}
HXDLIN( 248)		if (_hx_tmp3) {
HXLINE( 249)			this->rightArrow->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CustomControlsState_obj,arrowanimate,(void))

void CustomControlsState_obj::trackbutton( ::flixel::input::touch::FlxTouch touch){
            	HX_STACKFRAME(&_hx_pos_47f2710a91f16304_256_trackbutton)
HXDLIN( 256)		if (this->buttonistouched) {
HXLINE( 258)			bool _hx_tmp;
HXDLIN( 258)			if ((this->bindbutton->input->current == -1)) {
HXLINE( 258)				_hx_tmp = (touch->input->current == -1);
            			}
            			else {
HXLINE( 258)				_hx_tmp = false;
            			}
HXDLIN( 258)			if (_hx_tmp) {
HXLINE( 260)				this->bindbutton = null();
HXLINE( 261)				this->buttonistouched = false;
            			}
            			else {
HXLINE( 264)				this->movebutton(touch,this->bindbutton);
HXLINE( 265)				this->setbuttontexts();
            			}
            		}
            		else {
HXLINE( 269)			if ((this->_pad->buttonUp->input->current == 2)) {
HXLINE( 270)				if ((this->curSelected != 3)) {
HXLINE( 271)					this->changeSelection(0,3);
            				}
HXLINE( 273)				this->movebutton(touch,this->_pad->buttonUp);
            			}
HXLINE( 276)			if ((this->_pad->buttonDown->input->current == 2)) {
HXLINE( 277)				if ((this->curSelected != 3)) {
HXLINE( 278)					this->changeSelection(0,3);
            				}
HXLINE( 280)				this->movebutton(touch,this->_pad->buttonDown);
            			}
HXLINE( 283)			if ((this->_pad->buttonRight->input->current == 2)) {
HXLINE( 284)				if ((this->curSelected != 3)) {
HXLINE( 285)					this->changeSelection(0,3);
            				}
HXLINE( 287)				this->movebutton(touch,this->_pad->buttonRight);
            			}
HXLINE( 290)			if ((this->_pad->buttonLeft->input->current == 2)) {
HXLINE( 291)				if ((this->curSelected != 3)) {
HXLINE( 292)					this->changeSelection(0,3);
            				}
HXLINE( 294)				this->movebutton(touch,this->_pad->buttonLeft);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CustomControlsState_obj,trackbutton,(void))

void CustomControlsState_obj::movebutton( ::flixel::input::touch::FlxTouch touch, ::flixel::ui::FlxButton button){
            	HX_STACKFRAME(&_hx_pos_47f2710a91f16304_299_movebutton)
HXLINE( 300)		int touch1 = touch->x;
HXDLIN( 300)		button->set_x((( (Float)(touch1) ) - (this->_pad->buttonUp->get_width() / ( (Float)(2) ))));
HXLINE( 301)		int touch2 = touch->y;
HXDLIN( 301)		button->set_y((( (Float)(touch2) ) - (this->_pad->buttonUp->get_height() / ( (Float)(2) ))));
HXLINE( 302)		this->bindbutton = button;
HXLINE( 303)		this->buttonistouched = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CustomControlsState_obj,movebutton,(void))

void CustomControlsState_obj::setbuttontexts(){
            	HX_STACKFRAME(&_hx_pos_47f2710a91f16304_306_setbuttontexts)
HXLINE( 307)		this->up_text->set_text((((HX_("Button up x:",d9,b0,a9,ae) + this->_pad->buttonUp->x) + HX_(" y:",c1,b1,18,00)) + this->_pad->buttonUp->y));
HXLINE( 308)		this->down_text->set_text((((HX_("Button down x:",b2,1d,ff,d8) + this->_pad->buttonDown->x) + HX_(" y:",c1,b1,18,00)) + this->_pad->buttonDown->y));
HXLINE( 309)		this->left_text->set_text((((HX_("Button left x:",2d,a3,40,60) + this->_pad->buttonLeft->x) + HX_(" y:",c1,b1,18,00)) + this->_pad->buttonLeft->y));
HXLINE( 310)		this->right_text->set_text((((HX_("Button right x:",54,6e,a2,8a) + this->_pad->buttonRight->x) + HX_(" y:",c1,b1,18,00)) + this->_pad->buttonRight->y));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CustomControlsState_obj,setbuttontexts,(void))

void CustomControlsState_obj::SpamCheck(){
            	HX_GC_STACKFRAME(&_hx_pos_47f2710a91f16304_313_SpamCheck)
HXLINE( 314)		bool _hx_tmp;
HXDLIN( 314)		if ((this->_pad->buttonUp->x == this->_pad->buttonDown->x)) {
HXLINE( 314)			_hx_tmp = (this->_pad->buttonUp->y == this->_pad->buttonDown->y);
            		}
            		else {
HXLINE( 314)			_hx_tmp = false;
            		}
HXDLIN( 314)		if (_hx_tmp) {
HXLINE( 315)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 315)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 315)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 317)		bool _hx_tmp1;
HXDLIN( 317)		if ((this->_pad->buttonLeft->x == this->_pad->buttonRight->x)) {
HXLINE( 317)			_hx_tmp1 = (this->_pad->buttonLeft->y == this->_pad->buttonRight->y);
            		}
            		else {
HXLINE( 317)			_hx_tmp1 = false;
            		}
HXDLIN( 317)		if (_hx_tmp1) {
HXLINE( 318)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 318)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 318)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 320)		bool _hx_tmp2;
HXDLIN( 320)		if ((this->_pad->buttonUp->x == this->_pad->buttonLeft->x)) {
HXLINE( 320)			_hx_tmp2 = (this->_pad->buttonUp->y == this->_pad->buttonLeft->y);
            		}
            		else {
HXLINE( 320)			_hx_tmp2 = false;
            		}
HXDLIN( 320)		if (_hx_tmp2) {
HXLINE( 321)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 321)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 321)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 323)		bool _hx_tmp3;
HXDLIN( 323)		if ((this->_pad->buttonLeft->x == this->_pad->buttonDown->x)) {
HXLINE( 323)			_hx_tmp3 = (this->_pad->buttonLeft->y == this->_pad->buttonDown->y);
            		}
            		else {
HXLINE( 323)			_hx_tmp3 = false;
            		}
HXDLIN( 323)		if (_hx_tmp3) {
HXLINE( 324)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 324)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 324)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 326)		bool _hx_tmp4;
HXDLIN( 326)		if ((this->_pad->buttonUp->x == this->_pad->buttonRight->x)) {
HXLINE( 326)			_hx_tmp4 = (this->_pad->buttonUp->y == this->_pad->buttonRight->y);
            		}
            		else {
HXLINE( 326)			_hx_tmp4 = false;
            		}
HXDLIN( 326)		if (_hx_tmp4) {
HXLINE( 327)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 327)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 327)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 329)		bool _hx_tmp5;
HXDLIN( 329)		if ((this->_pad->buttonDown->x == this->_pad->buttonRight->x)) {
HXLINE( 329)			_hx_tmp5 = (this->_pad->buttonDown->y == this->_pad->buttonRight->y);
            		}
            		else {
HXLINE( 329)			_hx_tmp5 = false;
            		}
HXDLIN( 329)		if (_hx_tmp5) {
HXLINE( 330)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 330)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 330)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CustomControlsState_obj,SpamCheck,(void))

void CustomControlsState_obj::save(){
            	HX_STACKFRAME(&_hx_pos_47f2710a91f16304_334_save)
HXLINE( 336)		this->config->setcontrolmode(this->curSelected);
HXLINE( 338)		if ((this->curSelected == 3)) {
HXLINE( 339)			this->savecustom();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CustomControlsState_obj,save,(void))

void CustomControlsState_obj::savecustom(){
            	HX_STACKFRAME(&_hx_pos_47f2710a91f16304_343_savecustom)
HXLINE( 344)		::haxe::Log_obj::trace(HX_("saved",87,4a,8c,77),::hx::SourceInfo(HX_("source/CustomControlsState.hx",c8,05,8e,86),344,HX_("CustomControlsState",2a,b9,bc,ea),HX_("savecustom",ae,9e,b7,53)));
HXLINE( 348)		this->config->savecustom(this->_pad);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CustomControlsState_obj,savecustom,(void))

void CustomControlsState_obj::loadcustom(){
            	HX_STACKFRAME(&_hx_pos_47f2710a91f16304_353_loadcustom)
HXDLIN( 353)		this->_pad = this->config->loadcustom(this->_pad);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CustomControlsState_obj,loadcustom,(void))

void CustomControlsState_obj::resizebuttons( ::ui::FlxVirtualPad vpad, ::Dynamic __o__hx_int){
            		 ::Dynamic _hx_int = __o__hx_int;
            		if (::hx::IsNull(__o__hx_int)) _hx_int = 200;
            	HX_GC_STACKFRAME(&_hx_pos_47f2710a91f16304_358_resizebuttons)
HXDLIN( 358)		 ::Dynamic filter = null();
HXDLIN( 358)		 ::flixel::group::FlxTypedGroupIterator button =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,vpad->group->members,filter);
HXDLIN( 358)		while(button->hasNext()){
HXDLIN( 358)			 ::flixel::FlxSprite button1 = button->next().StaticCast<  ::flixel::FlxSprite >();
HXLINE( 360)			button1->setGraphicSize(260,null());
HXLINE( 361)			button1->updateHitbox();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CustomControlsState_obj,resizebuttons,(void))

void CustomControlsState_obj::savetoclipboard( ::ui::FlxVirtualPad pad){
            	HX_GC_STACKFRAME(&_hx_pos_47f2710a91f16304_365_savetoclipboard)
HXLINE( 366)		::haxe::Log_obj::trace(HX_("saved to clipboard",2a,ac,d8,32),::hx::SourceInfo(HX_("source/CustomControlsState.hx",c8,05,8e,86),366,HX_("CustomControlsState",2a,b9,bc,ea),HX_("savetoclipboard",de,6c,df,ce)));
HXLINE( 368)		 ::Dynamic json =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("buttonsarray",b8,4f,c3,93),::Array_obj< ::Dynamic>::__new(0)));
HXLINE( 372)		int tempCount = 0;
HXLINE( 373)		::Array< ::Dynamic> buttonsarray = ::Array_obj< ::Dynamic>::__new();
HXLINE( 375)		{
HXLINE( 375)			 ::Dynamic filter = null();
HXDLIN( 375)			 ::flixel::group::FlxTypedGroupIterator buttons =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,pad->group->members,filter);
HXDLIN( 375)			while(buttons->hasNext()){
HXLINE( 375)				 ::flixel::FlxSprite buttons1 = buttons->next().StaticCast<  ::flixel::FlxSprite >();
HXLINE( 377)				Float X = buttons1->x;
HXDLIN( 377)				Float Y = buttons1->y;
HXDLIN( 377)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 377)				point->_inPool = false;
HXDLIN( 377)				buttonsarray[tempCount] = point;
HXLINE( 379)				tempCount = (tempCount + 1);
            			}
            		}
HXLINE( 382)		json->__SetField(HX_("buttonsarray",b8,4f,c3,93),buttonsarray,::hx::paccDynamic);
HXLINE( 384)		::haxe::Log_obj::trace(json,::hx::SourceInfo(HX_("source/CustomControlsState.hx",c8,05,8e,86),384,HX_("CustomControlsState",2a,b9,bc,ea),HX_("savetoclipboard",de,6c,df,ce)));
HXLINE( 386)		 ::Dynamic replacer = null();
HXDLIN( 386)		::String space = null();
HXDLIN( 386)		::String data = ::haxe::format::JsonPrinter_obj::print(json,replacer,space);
HXLINE( 388)		::openfl::_hx_system::System_obj::setClipboard(::StringTools_obj::trim(data));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CustomControlsState_obj,savetoclipboard,(void))

void CustomControlsState_obj::loadfromclipboard( ::ui::FlxVirtualPad pad){
            	HX_GC_STACKFRAME(&_hx_pos_47f2710a91f16304_391_loadfromclipboard)
HXLINE( 394)		if ((this->curSelected != 3)) {
HXLINE( 395)			this->changeSelection(0,3);
            		}
HXLINE( 397)		::String cbtext = ::lime::_hx_system::Clipboard_obj::get_text();
HXLINE( 399)		if (!(::StringTools_obj::endsWith(cbtext,HX_("}",7d,00,00,00)))) {
HXLINE( 399)			return;
            		}
HXLINE( 401)		 ::Dynamic json =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,cbtext)->doParse();
HXLINE( 403)		int tempCount = 0;
HXLINE( 405)		{
HXLINE( 405)			 ::Dynamic filter = null();
HXDLIN( 405)			 ::flixel::group::FlxTypedGroupIterator buttons =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,pad->group->members,filter);
HXDLIN( 405)			while(buttons->hasNext()){
HXLINE( 405)				 ::flixel::FlxSprite buttons1 = buttons->next().StaticCast<  ::flixel::FlxSprite >();
HXLINE( 407)				buttons1->set_x(( (Float)( ::Dynamic(json->__Field(HX_("buttonsarray",b8,4f,c3,93),::hx::paccDynamic))->__GetItem(tempCount)->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE( 408)				buttons1->set_y(( (Float)( ::Dynamic(json->__Field(HX_("buttonsarray",b8,4f,c3,93),::hx::paccDynamic))->__GetItem(tempCount)->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
HXLINE( 409)				tempCount = (tempCount + 1);
            			}
            		}
HXLINE( 411)		this->setbuttontexts();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CustomControlsState_obj,loadfromclipboard,(void))

void CustomControlsState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_47f2710a91f16304_416_destroy)
HXDLIN( 416)		this->super::destroy();
            	}



::hx::ObjectPtr< CustomControlsState_obj > CustomControlsState_obj::__new() {
	::hx::ObjectPtr< CustomControlsState_obj > __this = new CustomControlsState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CustomControlsState_obj > CustomControlsState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CustomControlsState_obj *__this = (CustomControlsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomControlsState_obj), true, "CustomControlsState"));
	*(void **)__this = CustomControlsState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CustomControlsState_obj::CustomControlsState_obj()
{
}

void CustomControlsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CustomControlsState);
	HX_MARK_MEMBER_NAME(_pad,"_pad");
	HX_MARK_MEMBER_NAME(_hb,"_hb");
	HX_MARK_MEMBER_NAME(exitbutton,"exitbutton");
	HX_MARK_MEMBER_NAME(exportbutton,"exportbutton");
	HX_MARK_MEMBER_NAME(importbutton,"importbutton");
	HX_MARK_MEMBER_NAME(up_text,"up_text");
	HX_MARK_MEMBER_NAME(down_text,"down_text");
	HX_MARK_MEMBER_NAME(left_text,"left_text");
	HX_MARK_MEMBER_NAME(right_text,"right_text");
	HX_MARK_MEMBER_NAME(inputvari,"inputvari");
	HX_MARK_MEMBER_NAME(leftArrow,"leftArrow");
	HX_MARK_MEMBER_NAME(rightArrow,"rightArrow");
	HX_MARK_MEMBER_NAME(controlitems,"controlitems");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(buttonistouched,"buttonistouched");
	HX_MARK_MEMBER_NAME(bindbutton,"bindbutton");
	HX_MARK_MEMBER_NAME(config,"config");
	 ::MusicBeatSubstate_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CustomControlsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pad,"_pad");
	HX_VISIT_MEMBER_NAME(_hb,"_hb");
	HX_VISIT_MEMBER_NAME(exitbutton,"exitbutton");
	HX_VISIT_MEMBER_NAME(exportbutton,"exportbutton");
	HX_VISIT_MEMBER_NAME(importbutton,"importbutton");
	HX_VISIT_MEMBER_NAME(up_text,"up_text");
	HX_VISIT_MEMBER_NAME(down_text,"down_text");
	HX_VISIT_MEMBER_NAME(left_text,"left_text");
	HX_VISIT_MEMBER_NAME(right_text,"right_text");
	HX_VISIT_MEMBER_NAME(inputvari,"inputvari");
	HX_VISIT_MEMBER_NAME(leftArrow,"leftArrow");
	HX_VISIT_MEMBER_NAME(rightArrow,"rightArrow");
	HX_VISIT_MEMBER_NAME(controlitems,"controlitems");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(buttonistouched,"buttonistouched");
	HX_VISIT_MEMBER_NAME(bindbutton,"bindbutton");
	HX_VISIT_MEMBER_NAME(config,"config");
	 ::MusicBeatSubstate_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CustomControlsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_hb") ) { return ::hx::Val( _hb ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pad") ) { return ::hx::Val( _pad ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return ::hx::Val( config ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"up_text") ) { return ::hx::Val( up_text ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"down_text") ) { return ::hx::Val( down_text ); }
		if (HX_FIELD_EQ(inName,"left_text") ) { return ::hx::Val( left_text ); }
		if (HX_FIELD_EQ(inName,"inputvari") ) { return ::hx::Val( inputvari ); }
		if (HX_FIELD_EQ(inName,"leftArrow") ) { return ::hx::Val( leftArrow ); }
		if (HX_FIELD_EQ(inName,"SpamCheck") ) { return ::hx::Val( SpamCheck_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exitbutton") ) { return ::hx::Val( exitbutton ); }
		if (HX_FIELD_EQ(inName,"right_text") ) { return ::hx::Val( right_text ); }
		if (HX_FIELD_EQ(inName,"rightArrow") ) { return ::hx::Val( rightArrow ); }
		if (HX_FIELD_EQ(inName,"bindbutton") ) { return ::hx::Val( bindbutton ); }
		if (HX_FIELD_EQ(inName,"movebutton") ) { return ::hx::Val( movebutton_dyn() ); }
		if (HX_FIELD_EQ(inName,"savecustom") ) { return ::hx::Val( savecustom_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadcustom") ) { return ::hx::Val( loadcustom_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"trackbutton") ) { return ::hx::Val( trackbutton_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"exportbutton") ) { return ::hx::Val( exportbutton ); }
		if (HX_FIELD_EQ(inName,"importbutton") ) { return ::hx::Val( importbutton ); }
		if (HX_FIELD_EQ(inName,"controlitems") ) { return ::hx::Val( controlitems ); }
		if (HX_FIELD_EQ(inName,"arrowanimate") ) { return ::hx::Val( arrowanimate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resizebuttons") ) { return ::hx::Val( resizebuttons_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setbuttontexts") ) { return ::hx::Val( setbuttontexts_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buttonistouched") ) { return ::hx::Val( buttonistouched ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"savetoclipboard") ) { return ::hx::Val( savetoclipboard_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadfromclipboard") ) { return ::hx::Val( loadfromclipboard_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CustomControlsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_hb") ) { _hb=inValue.Cast<  ::ui::Hitbox >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pad") ) { _pad=inValue.Cast<  ::ui::FlxVirtualPad >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast<  ::Config >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"up_text") ) { up_text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"down_text") ) { down_text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"left_text") ) { left_text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputvari") ) { inputvari=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftArrow") ) { leftArrow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exitbutton") ) { exitbutton=inValue.Cast<  ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right_text") ) { right_text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightArrow") ) { rightArrow=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bindbutton") ) { bindbutton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"exportbutton") ) { exportbutton=inValue.Cast<  ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"importbutton") ) { importbutton=inValue.Cast<  ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controlitems") ) { controlitems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buttonistouched") ) { buttonistouched=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CustomControlsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_pad",54,96,20,3f));
	outFields->push(HX_("_hb",19,71,48,00));
	outFields->push(HX_("exitbutton",90,83,d5,e5));
	outFields->push(HX_("exportbutton",66,82,1a,1a));
	outFields->push(HX_("importbutton",17,9d,89,97));
	outFields->push(HX_("up_text",51,98,52,c9));
	outFields->push(HX_("down_text",ea,4c,f3,82));
	outFields->push(HX_("left_text",25,67,bd,81));
	outFields->push(HX_("right_text",30,5f,a2,6f));
	outFields->push(HX_("inputvari",ac,bc,9a,2a));
	outFields->push(HX_("leftArrow",42,68,6f,3a));
	outFields->push(HX_("rightArrow",4d,60,54,28));
	outFields->push(HX_("controlitems",83,ef,b7,f3));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("buttonistouched",02,43,96,f7));
	outFields->push(HX_("bindbutton",6f,c3,75,cd));
	outFields->push(HX_("config",c2,56,d2,c7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CustomControlsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::ui::FlxVirtualPad */ ,(int)offsetof(CustomControlsState_obj,_pad),HX_("_pad",54,96,20,3f)},
	{::hx::fsObject /*  ::ui::Hitbox */ ,(int)offsetof(CustomControlsState_obj,_hb),HX_("_hb",19,71,48,00)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIButton */ ,(int)offsetof(CustomControlsState_obj,exitbutton),HX_("exitbutton",90,83,d5,e5)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIButton */ ,(int)offsetof(CustomControlsState_obj,exportbutton),HX_("exportbutton",66,82,1a,1a)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIButton */ ,(int)offsetof(CustomControlsState_obj,importbutton),HX_("importbutton",17,9d,89,97)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CustomControlsState_obj,up_text),HX_("up_text",51,98,52,c9)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CustomControlsState_obj,down_text),HX_("down_text",ea,4c,f3,82)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CustomControlsState_obj,left_text),HX_("left_text",25,67,bd,81)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CustomControlsState_obj,right_text),HX_("right_text",30,5f,a2,6f)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CustomControlsState_obj,inputvari),HX_("inputvari",ac,bc,9a,2a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CustomControlsState_obj,leftArrow),HX_("leftArrow",42,68,6f,3a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CustomControlsState_obj,rightArrow),HX_("rightArrow",4d,60,54,28)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(CustomControlsState_obj,controlitems),HX_("controlitems",83,ef,b7,f3)},
	{::hx::fsInt,(int)offsetof(CustomControlsState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(int)offsetof(CustomControlsState_obj,buttonistouched),HX_("buttonistouched",02,43,96,f7)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(CustomControlsState_obj,bindbutton),HX_("bindbutton",6f,c3,75,cd)},
	{::hx::fsObject /*  ::Config */ ,(int)offsetof(CustomControlsState_obj,config),HX_("config",c2,56,d2,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CustomControlsState_obj_sStaticStorageInfo = 0;
#endif

static ::String CustomControlsState_obj_sMemberFields[] = {
	HX_("_pad",54,96,20,3f),
	HX_("_hb",19,71,48,00),
	HX_("exitbutton",90,83,d5,e5),
	HX_("exportbutton",66,82,1a,1a),
	HX_("importbutton",17,9d,89,97),
	HX_("up_text",51,98,52,c9),
	HX_("down_text",ea,4c,f3,82),
	HX_("left_text",25,67,bd,81),
	HX_("right_text",30,5f,a2,6f),
	HX_("inputvari",ac,bc,9a,2a),
	HX_("leftArrow",42,68,6f,3a),
	HX_("rightArrow",4d,60,54,28),
	HX_("controlitems",83,ef,b7,f3),
	HX_("curSelected",fb,eb,ab,32),
	HX_("buttonistouched",02,43,96,f7),
	HX_("bindbutton",6f,c3,75,cd),
	HX_("config",c2,56,d2,c7),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("arrowanimate",f8,1b,2a,75),
	HX_("trackbutton",bd,ea,45,4d),
	HX_("movebutton",c3,67,7a,f5),
	HX_("setbuttontexts",92,3f,a2,8b),
	HX_("SpamCheck",1f,55,c3,99),
	HX_("save",3d,8b,4d,4c),
	HX_("savecustom",ae,9e,b7,53),
	HX_("loadcustom",57,42,29,c0),
	HX_("resizebuttons",cd,de,1b,a5),
	HX_("savetoclipboard",de,6c,df,ce),
	HX_("loadfromclipboard",46,49,b8,2f),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class CustomControlsState_obj::__mClass;

void CustomControlsState_obj::__register()
{
	CustomControlsState_obj _hx_dummy;
	CustomControlsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CustomControlsState",2a,b9,bc,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CustomControlsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CustomControlsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomControlsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomControlsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

