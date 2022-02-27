#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_FlashingState
#include <FlashingState.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OutdatedState
#include <OutdatedState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeys
#include <flixel/input/android/FlxAndroidKeys.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a55214e0452daa02_33_new,"TitleState","new",0x3b23deeb,"TitleState.new","TitleState.hx",33,0xd132a6e5)
static const int _hx_array_data_8ca18d79_1[] = {
	(int)66,(int)66,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_59_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",59,0xd132a6e5)
static const int _hx_array_data_8ca18d79_3[] = {
	(int)1073742094,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_147_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",147,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_160_startIntro,"TitleState","startIntro",0x6a094b7f,"TitleState.startIntro","TitleState.hx",160,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_265_getIntroTextShit,"TitleState","getIntroTextShit",0x5dcf15b8,"TitleState.getIntroTextShit","TitleState.hx",265,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_282_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",282,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_332_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",332,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_372_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",372,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_403_createCoolText,"TitleState","createCoolText",0x83610287,"TitleState.createCoolText","TitleState.hx",403,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_415_addMoreText,"TitleState","addMoreText",0xcf420fae,"TitleState.addMoreText","TitleState.hx",415,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_426_deleteCoolText,"TitleState","deleteCoolText",0x8afda2b6,"TitleState.deleteCoolText","TitleState.hx",426,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_436_beatHit,"TitleState","beatHit",0xfba69a88,"TitleState.beatHit","TitleState.hx",436,0xd132a6e5)
static const ::String _hx_array_data_8ca18d79_19[] = {
	HX_("Mod por",15,f9,1f,8d),
};
static const ::String _hx_array_data_8ca18d79_20[] = {
	HX_("Segue a gente no twitter",2d,e0,3b,9d),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_517_skipIntro,"TitleState","skipIntro",0xc9924038,"TitleState.skipIntro","TitleState.hx",517,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_35_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",35,0xd132a6e5)
static const int _hx_array_data_8ca18d79_23[] = {
	(int)48,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_36_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",36,0xd132a6e5)
static const int _hx_array_data_8ca18d79_25[] = {
	(int)109,(int)189,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_37_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",37,0xd132a6e5)
static const int _hx_array_data_8ca18d79_27[] = {
	(int)107,(int)187,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_39_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",39,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_56_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",56,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_434_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",434,0xd132a6e5)

void TitleState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_33_new)
HXLINE( 513)		this->skippedIntro = false;
HXLINE( 433)		this->sickBeats = 0;
HXLINE( 279)		this->transitioning = false;
HXLINE( 157)		this->swagShader = null();
HXLINE( 155)		this->danceLeft = false;
HXLINE(  55)		this->mustUpdate = false;
HXLINE(  53)		this->lastKeysPressed = ::Array_obj< int >::__new(0);
HXLINE(  52)		this->easterEggKeyCombination = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_1,2);
HXLINE(  51)		this->easterEggEnabled = true;
HXLINE(  47)		this->curWacky = ::Array_obj< ::String >::__new(0);
HXLINE(  33)		super::__construct(TransIn,TransOut);
            	}

Dynamic TitleState_obj::__CreateEmpty() { return new TitleState_obj; }

void *TitleState_obj::_hx_vtable = 0;

Dynamic TitleState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleState_obj > _hx_result = new TitleState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TitleState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x22c6bd01) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x22c6bd01;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void TitleState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_59_create)
HXDLIN(  59)		 ::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  62)		::flixel::FlxG_obj::android->preventDefaultKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_3,1);
HXLINE( 104)		::flixel::FlxG_obj::game->focusLostFramerate = 60;
HXLINE( 105)		::flixel::FlxG_obj::sound->muteKeys = ::TitleState_obj::muteKeys;
HXLINE( 106)		::flixel::FlxG_obj::sound->volumeDownKeys = ::TitleState_obj::volumeDownKeys;
HXLINE( 107)		::flixel::FlxG_obj::sound->volumeUpKeys = ::TitleState_obj::volumeUpKeys;
HXLINE( 109)		::PlayerSettings_obj::init();
HXLINE( 111)		 ::flixel::math::FlxRandom _hx_tmp = ::flixel::FlxG_obj::random;
HXDLIN( 111)		this->curWacky = _hx_tmp->getObject_Array_String(this->getIntroTextShit(),null(),null(),null());
HXLINE( 115)		this->swagShader =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 116)		this->super::create();
HXLINE( 118)		::flixel::FlxG_obj::save->bind(HX_("funkin",31,b2,4f,6f),HX_("ninjamuffin99",f7,4c,e5,00));
HXLINE( 119)		::ClientPrefs_obj::loadPrefs();
HXLINE( 121)		::Highscore_obj::load();
HXLINE( 123)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic) )) {
HXLINE( 125)			::StoryMenuState_obj::weekCompleted = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic)) );
            		}
HXLINE( 128)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 134)		bool _hx_tmp1;
HXDLIN( 134)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic) )) {
HXLINE( 134)			_hx_tmp1 = !(::FlashingState_obj::leftState);
            		}
            		else {
HXLINE( 134)			_hx_tmp1 = false;
            		}
HXDLIN( 134)		if (_hx_tmp1) {
HXLINE( 135)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = true;
HXLINE( 136)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
HXLINE( 137)			::MusicBeatState_obj::switchState( ::FlashingState_obj::__alloc( HX_CTX ,null(),null()));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::TitleState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_147_create)
HXLINE( 147)				_gthis->startIntro();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 145)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
            	}


void TitleState_obj::startIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_160_startIntro)
HXLINE( 161)		if (!(::TitleState_obj::initialized)) {
HXLINE( 184)			if (::hx::IsNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 185)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 185)				::String library = null();
HXDLIN( 185)				_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE( 187)				{
HXLINE( 187)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 187)					 ::Dynamic onComplete = null();
HXDLIN( 187)					if (::hx::IsNull( _this->_channel )) {
HXLINE( 187)						_this->play(null(),null(),null());
            					}
HXDLIN( 187)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 187)						_this->fadeTween->cancel();
            					}
HXDLIN( 187)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
            			}
            		}
HXLINE( 191)		::Conductor_obj::changeBPM(( (Float)(102) ));
HXLINE( 192)		this->persistentUpdate = true;
HXLINE( 194)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 194)		::String library = null();
HXDLIN( 194)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleBG",5d,e5,5d,e5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE( 195)		bg1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 196)		bg1->setGraphicSize(::Std_obj::_hx_int((bg1->get_width() * ((Float)0.8))),null());
HXLINE( 197)		bg1->updateHitbox();
HXLINE( 198)		this->add(bg1);
HXLINE( 200)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,-150,null());
HXLINE( 201)		 ::flixel::FlxSprite _hx_tmp = this->logoBl;
HXDLIN( 201)		::String library1 = null();
HXDLIN( 201)		 ::Dynamic _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN( 201)		_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE( 202)		this->logoBl->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 203)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,null(),null(),null());
HXLINE( 204)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 205)		this->logoBl->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 206)		this->logoBl->updateHitbox();
HXLINE( 209)		this->swagShader =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 211)		this->add(this->logoBl);
HXLINE( 214)		this->titleText =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,100,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.8)),null());
HXLINE( 215)		 ::flixel::FlxSprite _hx_tmp2 = this->titleText;
HXDLIN( 215)		::String library2 = null();
HXDLIN( 215)		 ::Dynamic _hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN( 215)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2)));
HXLINE( 216)		this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Press Enter to Begin",e9,79,2c,83),24,null(),null(),null());
HXLINE( 217)		this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("ENTER PRESSED",5a,47,9f,63),24,null(),null(),null());
HXLINE( 218)		this->titleText->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 219)		this->titleText->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 220)		this->titleText->updateHitbox();
HXLINE( 222)		this->add(this->titleText);
HXLINE( 224)		 ::flixel::FlxSprite logo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 224)		::String library3 = null();
HXDLIN( 224)		 ::flixel::FlxSprite logo1 = logo->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logo",6b,9f,b7,47)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE( 225)		logo1->screenCenter(null());
HXLINE( 226)		logo1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 232)		this->credGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 233)		this->add(this->credGroup);
HXLINE( 234)		this->textGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 236)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 237)		this->credGroup->add(this->blackScreen).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 239)		this->credTextShit =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("",00,00,00,00),true,null(),null(),null());
HXLINE( 240)		this->credTextShit->screenCenter(null());
HXLINE( 244)		this->credTextShit->set_visible(false);
HXLINE( 246)		 ::flixel::FlxSprite _hx_tmp4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.4)),null());
HXDLIN( 246)		::String library4 = null();
HXDLIN( 246)		this->logoSpr = _hx_tmp4->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("credits/discord",77,65,98,74)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library4),null(),null(),null(),null(),null());
HXLINE( 247)		this->add(this->logoSpr);
HXLINE( 248)		this->logoSpr->set_visible(false);
HXLINE( 249)		 ::flixel::FlxSprite _hx_tmp5 = this->logoSpr;
HXDLIN( 249)		_hx_tmp5->setGraphicSize(::Std_obj::_hx_int((this->logoSpr->get_width() * ((Float)1.1))),null());
HXLINE( 250)		this->logoSpr->updateHitbox();
HXLINE( 251)		this->logoSpr->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 252)		this->logoSpr->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 254)		::flixel::tweens::FlxTween_obj::tween(this->credTextShit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->credTextShit->y + 20))),((Float)2.9), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            			->setFixed(1,HX_("type",ba,f2,08,4d),4)));
HXLINE( 256)		if (::TitleState_obj::initialized) {
HXLINE( 257)			this->skipIntro();
            		}
            		else {
HXLINE( 259)			::TitleState_obj::initialized = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,startIntro,(void))

::Array< ::Dynamic> TitleState_obj::getIntroTextShit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_265_getIntroTextShit)
HXLINE( 266)		::String library = null();
HXDLIN( 266)		::String fullText = ::openfl::utils::Assets_obj::getText(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + HX_("introText",39,69,67,a6)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 268)		::Array< ::String > firstArray = fullText.split(HX_("\n",0a,00,00,00));
HXLINE( 269)		::Array< ::Dynamic> swagGoodArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 271)		{
HXLINE( 271)			int _g = 0;
HXDLIN( 271)			while((_g < firstArray->length)){
HXLINE( 271)				::String i = firstArray->__get(_g);
HXDLIN( 271)				_g = (_g + 1);
HXLINE( 273)				swagGoodArray->push(i.split(HX_("--",60,27,00,00)));
            			}
            		}
HXLINE( 276)		return swagGoodArray;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,getIntroTextShit,return )

void TitleState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_282_update)
HXDLIN( 282)		 ::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 283)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 284)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 287)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 287)		if (_this->keyManager->checkStatus(70,_this->status)) {
HXLINE( 289)			::flixel::FlxG_obj::set_fullscreen(!(::flixel::FlxG_obj::get_fullscreen()));
            		}
HXLINE( 292)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 292)		bool pressedEnter = _this1->keyManager->checkStatus(13,_this1->status);
HXLINE( 295)		{
HXLINE( 295)			int _g = 0;
HXDLIN( 295)			::Array< ::Dynamic> _g1 = ::flixel::FlxG_obj::touches->list;
HXDLIN( 295)			while((_g < _g1->length)){
HXLINE( 295)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN( 295)				_g = (_g + 1);
HXLINE( 297)				if ((touch->input->current == 2)) {
HXLINE( 299)					pressedEnter = true;
            				}
            			}
            		}
HXLINE( 304)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 306)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 308)			 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 308)			int id = 7;
HXDLIN( 308)			 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 308)			int Status = _this->status;
HXDLIN( 308)			bool _hx_tmp;
HXDLIN( 308)			switch((int)(id)){
            				case (int)-2: {
HXLINE( 308)					_hx_tmp = _this1->anyButton(Status);
            				}
            				break;
            				case (int)-1: {
HXLINE( 308)					_hx_tmp = !(_this1->anyButton(Status));
            				}
            				break;
            				default:{
HXLINE( 308)					int RawID = _this1->mapping->getRawID(id);
HXDLIN( 308)					 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 308)					if (::hx::IsNotNull( button )) {
HXLINE( 308)						_hx_tmp = button->hasState(Status);
            					}
            					else {
HXLINE( 308)						_hx_tmp = false;
            					}
            				}
            			}
HXDLIN( 308)			if (_hx_tmp) {
HXLINE( 309)				pressedEnter = true;
            			}
            		}
HXLINE( 319)		bool _hx_tmp;
HXDLIN( 319)		if (!(this->transitioning)) {
HXLINE( 319)			_hx_tmp = this->skippedIntro;
            		}
            		else {
HXLINE( 319)			_hx_tmp = false;
            		}
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 321)			if (pressedEnter) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::TitleState,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_332_update)
HXLINE( 333)					if (_gthis->mustUpdate) {
HXLINE( 334)						::MusicBeatState_obj::switchState( ::OutdatedState_obj::__alloc( HX_CTX ,null(),null()));
            					}
            					else {
HXLINE( 336)						::MusicBeatState_obj::switchState( ::FlashingState_obj::__alloc( HX_CTX ,null(),null()));
            					}
HXLINE( 338)					::TitleState_obj::closedState = true;
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 323)				if (::hx::IsNotNull( this->titleText )) {
HXLINE( 323)					this->titleText->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            				}
HXLINE( 325)				::flixel::FlxG_obj::camera->flash(-1,1,null(),null());
HXLINE( 326)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 326)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 328)				this->transitioning = true;
HXLINE( 331)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            			}
            			else {
HXLINE( 342)				if (this->easterEggEnabled) {
HXLINE( 344)					int finalKey = ::flixel::FlxG_obj::keys->firstJustPressed();
HXLINE( 345)					if ((finalKey != -1)) {
HXLINE( 346)						this->lastKeysPressed->push(finalKey);
HXLINE( 347)						if ((this->lastKeysPressed->length > this->easterEggKeyCombination->length)) {
HXLINE( 349)							this->lastKeysPressed->shift();
            						}
HXLINE( 352)						if ((this->lastKeysPressed->length == this->easterEggKeyCombination->length)) {
HXLINE( 354)							bool isDifferent = false;
HXLINE( 355)							{
HXLINE( 355)								int _g = 0;
HXDLIN( 355)								int _g1 = this->lastKeysPressed->length;
HXDLIN( 355)								while((_g < _g1)){
HXLINE( 355)									_g = (_g + 1);
HXDLIN( 355)									int i = (_g - 1);
HXLINE( 356)									if ((this->lastKeysPressed->__get(i) != this->easterEggKeyCombination->__get(i))) {
HXLINE( 357)										isDifferent = true;
HXLINE( 358)										goto _hx_goto_9;
            									}
            								}
            								_hx_goto_9:;
            							}
HXLINE( 362)							if (!(isDifferent)) {
            								HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            								void _hx_run( ::flixel::tweens::FlxTween twn){
            									HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_372_update)
HXLINE( 373)									::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = true;
HXLINE( 374)									::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
HXLINE( 375)									::MusicBeatState_obj::switchState( ::TitleState_obj::__alloc( HX_CTX ,null(),null()));
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 363)								::haxe::Log_obj::trace(HX_("Easter egg triggered!",bb,18,31,19),::hx::SourceInfo(HX_("source/TitleState.hx",71,4f,0c,46),363,HX_("TitleState",79,8d,a1,8c),HX_("update",09,86,05,87)));
HXLINE( 364)								::flixel::FlxG_obj::save->data->__SetField(HX_("psykaEasterEgg",6f,48,b6,57),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("psykaEasterEgg",6f,48,b6,57),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 365)								 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 365)								_hx_tmp->play(::Paths_obj::sound(HX_("secretSound",3f,98,75,aa),null()),null(),null(),null(),null(),null());
HXLINE( 367)								 ::flixel::FlxSprite black =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 368)								black->set_alpha(( (Float)(0) ));
HXLINE( 369)								this->add(black);
HXLINE( 371)								::flixel::tweens::FlxTween_obj::tween(black, ::Dynamic(::hx::Anon_obj::Create(1)
            									->setFixed(0,HX_("alpha",5e,a7,96,21),1)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            									->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1()))));
HXLINE( 378)								this->lastKeysPressed = ::Array_obj< int >::__new(0);
HXLINE( 379)								::TitleState_obj::closedState = true;
HXLINE( 380)								this->transitioning = true;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 387)		bool _hx_tmp1;
HXDLIN( 387)		if (pressedEnter) {
HXLINE( 387)			_hx_tmp1 = !(this->skippedIntro);
            		}
            		else {
HXLINE( 387)			_hx_tmp1 = false;
            		}
HXDLIN( 387)		if (_hx_tmp1) {
HXLINE( 389)			this->skipIntro();
            		}
HXLINE( 392)		if (::hx::IsNotNull( this->swagShader )) {
HXLINE( 394)			if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 394)				 ::ColorSwap fh = this->swagShader;
HXDLIN( 394)				fh->set_hue((fh->hue - (elapsed * ((Float)0.1))));
            			}
HXLINE( 395)			if (::PlayerSettings_obj::player1->controls->_ui_right->check()) {
HXLINE( 395)				 ::ColorSwap fh = this->swagShader;
HXDLIN( 395)				fh->set_hue((fh->hue + (elapsed * ((Float)0.1))));
            			}
            		}
HXLINE( 398)		this->super::update(elapsed);
            	}


void TitleState_obj::createCoolText(::Array< ::String > textArray, ::Dynamic __o_offset){
            		 ::Dynamic offset = __o_offset;
            		if (::hx::IsNull(__o_offset)) offset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_403_createCoolText)
HXDLIN( 403)		int _g = 0;
HXDLIN( 403)		int _g1 = textArray->length;
HXDLIN( 403)		while((_g < _g1)){
HXDLIN( 403)			_g = (_g + 1);
HXDLIN( 403)			int i = (_g - 1);
HXLINE( 405)			 ::Alphabet money =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),textArray->__get(i),true,false,null(),null());
HXLINE( 406)			money->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 407)			money->set_y((money->y + (((i * 60) + 200) + offset)));
HXLINE( 408)			this->credGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 409)			this->textGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TitleState_obj,createCoolText,(void))

void TitleState_obj::addMoreText(::String text, ::Dynamic __o_offset){
            		 ::Dynamic offset = __o_offset;
            		if (::hx::IsNull(__o_offset)) offset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_415_addMoreText)
HXDLIN( 415)		if (::hx::IsNotNull( this->textGroup )) {
HXLINE( 416)			 ::Alphabet coolText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),text,true,false,null(),null());
HXLINE( 417)			coolText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 418)			coolText->set_y((coolText->y + (((this->textGroup->length * 60) + 200) + offset)));
HXLINE( 419)			this->credGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 420)			this->textGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TitleState_obj,addMoreText,(void))

void TitleState_obj::deleteCoolText(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_426_deleteCoolText)
HXDLIN( 426)		while((this->textGroup->members->get_length() > 0)){
HXLINE( 428)			this->credGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 429)			this->textGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,deleteCoolText,(void))

void TitleState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_436_beatHit)
HXLINE( 437)		this->super::beatHit();
HXLINE( 439)		if (::hx::IsNotNull( this->logoBl )) {
HXLINE( 440)			this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
            		}
HXLINE( 442)		if (::hx::IsNotNull( this->gfDance )) {
HXLINE( 443)			this->danceLeft = !(this->danceLeft);
HXLINE( 445)			if (this->danceLeft) {
HXLINE( 446)				this->gfDance->animation->play(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            			}
            			else {
HXLINE( 448)				this->gfDance->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            			}
            		}
HXLINE( 451)		if (!(::TitleState_obj::closedState)) {
HXLINE( 452)			switch((int)(this->curBeat)){
            				case (int)1: {
HXLINE( 455)					this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_19,1),-75);
            				}
            				break;
            				case (int)3: {
HXLINE( 458)					this->addMoreText(HX_("Lone",9a,d1,90,32),-75);
HXLINE( 459)					this->addMoreText(HX_("BeastlyChip",78,89,34,94),-75);
HXLINE( 460)					this->addMoreText(HX_("Roaded64",5d,ab,b5,f9),-75);
HXLINE( 461)					this->addMoreText(HX_("Nxtvithor",94,d4,18,dd),-75);
HXLINE( 462)					this->addMoreText(HX_("SenshiZ",22,91,e7,7f),-75);
HXLINE( 463)					this->addMoreText(HX_("Suok",5e,de,35,37),-75);
HXLINE( 464)					this->addMoreText(HX_("BeastlyMaxx",00,69,cb,9a),-75);
HXLINE( 465)					this->addMoreText(HX_("NaferNightmare",df,f9,3e,88),-75);
HXLINE( 466)					this->addMoreText(HX_("Hiro Mizuki",57,49,b3,9b),-75);
            				}
            				break;
            				case (int)4: {
HXLINE( 470)					this->deleteCoolText();
            				}
            				break;
            				case (int)5: {
HXLINE( 475)					this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_20,1),-60);
            				}
            				break;
            				case (int)7: {
HXLINE( 477)					this->addMoreText(HX_("Entra no server do Discord",3b,80,f3,db),-60);
HXLINE( 478)					this->logoSpr->set_visible(true);
            				}
            				break;
            				case (int)8: {
HXLINE( 481)					this->deleteCoolText();
HXLINE( 482)					this->logoSpr->set_visible(false);
            				}
            				break;
            				case (int)9: {
HXLINE( 488)					this->createCoolText(::Array_obj< ::String >::__new(1)->init(0,this->curWacky->__get(0)),null());
            				}
            				break;
            				case (int)11: {
HXLINE( 491)					this->addMoreText(this->curWacky->__get(1),null());
            				}
            				break;
            				case (int)12: {
HXLINE( 494)					this->deleteCoolText();
            				}
            				break;
            				case (int)13: {
HXLINE( 499)					this->addMoreText(HX_("Friday",ff,00,5d,e6),null());
            				}
            				break;
            				case (int)14: {
HXLINE( 502)					this->addMoreText(HX_("Night",b8,29,f7,2e),null());
            				}
            				break;
            				case (int)15: {
HXLINE( 505)					this->addMoreText(HX_("Fiufiu",60,e3,b1,bf),null());
            				}
            				break;
            				case (int)16: {
HXLINE( 508)					this->skipIntro();
            				}
            				break;
            			}
            		}
            	}


void TitleState_obj::skipIntro(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_517_skipIntro)
HXDLIN( 517)		if (!(this->skippedIntro)) {
HXLINE( 519)			this->remove(this->logoSpr,null());
HXLINE( 521)			::flixel::FlxG_obj::camera->flash(-1,4,null(),null());
HXLINE( 522)			this->remove(this->credGroup,null());
HXLINE( 523)			this->skippedIntro = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,skipIntro,(void))

::Array< int > TitleState_obj::muteKeys;

::Array< int > TitleState_obj::volumeDownKeys;

::Array< int > TitleState_obj::volumeUpKeys;

bool TitleState_obj::initialized;

::String TitleState_obj::updateVersion;

bool TitleState_obj::closedState;


::hx::ObjectPtr< TitleState_obj > TitleState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< TitleState_obj > __this = new TitleState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< TitleState_obj > TitleState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	TitleState_obj *__this = (TitleState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleState_obj), true, "TitleState"));
	*(void **)__this = TitleState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

TitleState_obj::TitleState_obj()
{
}

void TitleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleState);
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(credGroup,"credGroup");
	HX_MARK_MEMBER_NAME(credTextShit,"credTextShit");
	HX_MARK_MEMBER_NAME(textGroup,"textGroup");
	HX_MARK_MEMBER_NAME(logoSpr,"logoSpr");
	HX_MARK_MEMBER_NAME(curWacky,"curWacky");
	HX_MARK_MEMBER_NAME(wackyImage,"wackyImage");
	HX_MARK_MEMBER_NAME(easterEggEnabled,"easterEggEnabled");
	HX_MARK_MEMBER_NAME(easterEggKeyCombination,"easterEggKeyCombination");
	HX_MARK_MEMBER_NAME(lastKeysPressed,"lastKeysPressed");
	HX_MARK_MEMBER_NAME(mustUpdate,"mustUpdate");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(gfDance,"gfDance");
	HX_MARK_MEMBER_NAME(danceLeft,"danceLeft");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(swagShader,"swagShader");
	HX_MARK_MEMBER_NAME(transitioning,"transitioning");
	HX_MARK_MEMBER_NAME(sickBeats,"sickBeats");
	HX_MARK_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(credGroup,"credGroup");
	HX_VISIT_MEMBER_NAME(credTextShit,"credTextShit");
	HX_VISIT_MEMBER_NAME(textGroup,"textGroup");
	HX_VISIT_MEMBER_NAME(logoSpr,"logoSpr");
	HX_VISIT_MEMBER_NAME(curWacky,"curWacky");
	HX_VISIT_MEMBER_NAME(wackyImage,"wackyImage");
	HX_VISIT_MEMBER_NAME(easterEggEnabled,"easterEggEnabled");
	HX_VISIT_MEMBER_NAME(easterEggKeyCombination,"easterEggKeyCombination");
	HX_VISIT_MEMBER_NAME(lastKeysPressed,"lastKeysPressed");
	HX_VISIT_MEMBER_NAME(mustUpdate,"mustUpdate");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(gfDance,"gfDance");
	HX_VISIT_MEMBER_NAME(danceLeft,"danceLeft");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(swagShader,"swagShader");
	HX_VISIT_MEMBER_NAME(transitioning,"transitioning");
	HX_VISIT_MEMBER_NAME(sickBeats,"sickBeats");
	HX_VISIT_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"logoSpr") ) { return ::hx::Val( logoSpr ); }
		if (HX_FIELD_EQ(inName,"gfDance") ) { return ::hx::Val( gfDance ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { return ::hx::Val( curWacky ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { return ::hx::Val( credGroup ); }
		if (HX_FIELD_EQ(inName,"textGroup") ) { return ::hx::Val( textGroup ); }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { return ::hx::Val( danceLeft ); }
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"sickBeats") ) { return ::hx::Val( sickBeats ); }
		if (HX_FIELD_EQ(inName,"skipIntro") ) { return ::hx::Val( skipIntro_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { return ::hx::Val( wackyImage ); }
		if (HX_FIELD_EQ(inName,"mustUpdate") ) { return ::hx::Val( mustUpdate ); }
		if (HX_FIELD_EQ(inName,"swagShader") ) { return ::hx::Val( swagShader ); }
		if (HX_FIELD_EQ(inName,"startIntro") ) { return ::hx::Val( startIntro_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		if (HX_FIELD_EQ(inName,"addMoreText") ) { return ::hx::Val( addMoreText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { return ::hx::Val( credTextShit ); }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { return ::hx::Val( skippedIntro ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { return ::hx::Val( transitioning ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createCoolText") ) { return ::hx::Val( createCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteCoolText") ) { return ::hx::Val( deleteCoolText_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastKeysPressed") ) { return ::hx::Val( lastKeysPressed ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"easterEggEnabled") ) { return ::hx::Val( easterEggEnabled ); }
		if (HX_FIELD_EQ(inName,"getIntroTextShit") ) { return ::hx::Val( getIntroTextShit_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"easterEggKeyCombination") ) { return ::hx::Val( easterEggKeyCombination ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { outValue = ( muteKeys ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		if (HX_FIELD_EQ(inName,"closedState") ) { outValue = ( closedState ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { outValue = ( volumeUpKeys ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateVersion") ) { outValue = ( updateVersion ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { outValue = ( volumeDownKeys ); return true; }
	}
	return false;
}

::hx::Val TitleState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"logoSpr") ) { logoSpr=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gfDance") ) { gfDance=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { curWacky=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { credGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textGroup") ) { textGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { danceLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sickBeats") ) { sickBeats=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { wackyImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mustUpdate") ) { mustUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagShader") ) { swagShader=inValue.Cast<  ::ColorSwap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { credTextShit=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { skippedIntro=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { transitioning=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastKeysPressed") ) { lastKeysPressed=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"easterEggEnabled") ) { easterEggEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"easterEggKeyCombination") ) { easterEggKeyCombination=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"closedState") ) { closedState=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateVersion") ) { updateVersion=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void TitleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("credGroup",91,7f,9c,9c));
	outFields->push(HX_("credTextShit",fb,55,c1,3c));
	outFields->push(HX_("textGroup",52,43,e2,32));
	outFields->push(HX_("logoSpr",8a,f2,8e,84));
	outFields->push(HX_("curWacky",67,31,c6,0c));
	outFields->push(HX_("wackyImage",d4,7e,d6,81));
	outFields->push(HX_("easterEggEnabled",86,bb,00,6e));
	outFields->push(HX_("easterEggKeyCombination",0b,7a,83,5d));
	outFields->push(HX_("lastKeysPressed",58,a0,90,c9));
	outFields->push(HX_("mustUpdate",f2,14,07,8d));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("gfDance",94,88,3a,eb));
	outFields->push(HX_("danceLeft",da,cc,f9,df));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("swagShader",4f,e1,a0,28));
	outFields->push(HX_("transitioning",6d,6a,93,94));
	outFields->push(HX_("sickBeats",9f,58,9e,58));
	outFields->push(HX_("skippedIntro",9c,44,26,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,credGroup),HX_("credGroup",91,7f,9c,9c)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(TitleState_obj,credTextShit),HX_("credTextShit",fb,55,c1,3c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,textGroup),HX_("textGroup",52,43,e2,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,logoSpr),HX_("logoSpr",8a,f2,8e,84)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleState_obj,curWacky),HX_("curWacky",67,31,c6,0c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,wackyImage),HX_("wackyImage",d4,7e,d6,81)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,easterEggEnabled),HX_("easterEggEnabled",86,bb,00,6e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(TitleState_obj,easterEggKeyCombination),HX_("easterEggKeyCombination",0b,7a,83,5d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(TitleState_obj,lastKeysPressed),HX_("lastKeysPressed",58,a0,90,c9)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,mustUpdate),HX_("mustUpdate",f2,14,07,8d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,gfDance),HX_("gfDance",94,88,3a,eb)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,danceLeft),HX_("danceLeft",da,cc,f9,df)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsObject /*  ::ColorSwap */ ,(int)offsetof(TitleState_obj,swagShader),HX_("swagShader",4f,e1,a0,28)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,transitioning),HX_("transitioning",6d,6a,93,94)},
	{::hx::fsInt,(int)offsetof(TitleState_obj,sickBeats),HX_("sickBeats",9f,58,9e,58)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,skippedIntro),HX_("skippedIntro",9c,44,26,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::muteKeys,HX_("muteKeys",6d,5d,88,16)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::volumeDownKeys,HX_("volumeDownKeys",70,2f,58,0b)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::volumeUpKeys,HX_("volumeUpKeys",69,bb,f5,23)},
	{::hx::fsBool,(void *) &TitleState_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{::hx::fsString,(void *) &TitleState_obj::updateVersion,HX_("updateVersion",0f,4c,60,48)},
	{::hx::fsBool,(void *) &TitleState_obj::closedState,HX_("closedState",c5,ac,a4,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleState_obj_sMemberFields[] = {
	HX_("blackScreen",8b,de,f4,5d),
	HX_("credGroup",91,7f,9c,9c),
	HX_("credTextShit",fb,55,c1,3c),
	HX_("textGroup",52,43,e2,32),
	HX_("logoSpr",8a,f2,8e,84),
	HX_("curWacky",67,31,c6,0c),
	HX_("wackyImage",d4,7e,d6,81),
	HX_("easterEggEnabled",86,bb,00,6e),
	HX_("easterEggKeyCombination",0b,7a,83,5d),
	HX_("lastKeysPressed",58,a0,90,c9),
	HX_("mustUpdate",f2,14,07,8d),
	HX_("create",fc,66,0f,7c),
	HX_("logoBl",15,ca,6e,5c),
	HX_("gfDance",94,88,3a,eb),
	HX_("danceLeft",da,cc,f9,df),
	HX_("titleText",65,ba,a4,70),
	HX_("swagShader",4f,e1,a0,28),
	HX_("startIntro",aa,a2,37,da),
	HX_("getIntroTextShit",23,9f,f3,eb),
	HX_("transitioning",6d,6a,93,94),
	HX_("update",09,86,05,87),
	HX_("createCoolText",32,cb,41,41),
	HX_("addMoreText",23,fe,9f,87),
	HX_("deleteCoolText",61,6b,de,48),
	HX_("sickBeats",9f,58,9e,58),
	HX_("beatHit",7d,ea,04,74),
	HX_("skippedIntro",9c,44,26,49),
	HX_("skipIntro",6d,37,1c,d2),
	::String(null()) };

static void TitleState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleState_obj::muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(TitleState_obj::updateVersion,"updateVersion");
	HX_MARK_MEMBER_NAME(TitleState_obj::closedState,"closedState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleState_obj::muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(TitleState_obj::updateVersion,"updateVersion");
	HX_VISIT_MEMBER_NAME(TitleState_obj::closedState,"closedState");
};

#endif

::hx::Class TitleState_obj::__mClass;

static ::String TitleState_obj_sStaticFields[] = {
	HX_("muteKeys",6d,5d,88,16),
	HX_("volumeDownKeys",70,2f,58,0b),
	HX_("volumeUpKeys",69,bb,f5,23),
	HX_("initialized",14,f5,0f,37),
	HX_("updateVersion",0f,4c,60,48),
	HX_("closedState",c5,ac,a4,98),
	::String(null())
};

void TitleState_obj::__register()
{
	TitleState_obj _hx_dummy;
	TitleState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TitleState",79,8d,a1,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleState_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleState_obj::__SetStatic;
	__mClass->mMarkFunc = TitleState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TitleState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_35_boot)
HXDLIN(  35)		muteKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_23,1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_36_boot)
HXDLIN(  36)		volumeDownKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_25,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_37_boot)
HXDLIN(  37)		volumeUpKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_27,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_39_boot)
HXDLIN(  39)		initialized = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_56_boot)
HXDLIN(  56)		updateVersion = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_434_boot)
HXDLIN( 434)		closedState = false;
            	}
}

