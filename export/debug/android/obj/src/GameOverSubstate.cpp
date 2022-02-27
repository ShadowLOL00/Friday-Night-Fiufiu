#include <hxcpp.h>

#ifndef INCLUDED_Boyfriend
#include <Boyfriend.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_GameOverSubstate
#include <GameOverSubstate.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_ui_FlxActionMode
#include <ui/FlxActionMode.h>
#endif
#ifndef INCLUDED_ui_FlxDPadMode
#include <ui/FlxDPadMode.h>
#endif
#ifndef INCLUDED_ui_FlxVirtualPad
#include <ui/FlxVirtualPad.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b2ae8d30512793fc_14_new,"GameOverSubstate","new",0xba5265a9,"GameOverSubstate.new","GameOverSubstate.hx",14,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_74_update,"GameOverSubstate","update",0x4cd2a460,"GameOverSubstate.update","GameOverSubstate.hx",74,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_127_beatHit,"GameOverSubstate","beatHit",0xc1b25846,"GameOverSubstate.beatHit","GameOverSubstate.hx",127,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_136_coolStartDeath,"GameOverSubstate","coolStartDeath",0x265fa8f2,"GameOverSubstate.coolStartDeath","GameOverSubstate.hx",136,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_141_endBullshit,"GameOverSubstate","endBullshit",0xd9747d97,"GameOverSubstate.endBullshit","GameOverSubstate.hx",141,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_151_endBullshit,"GameOverSubstate","endBullshit",0xd9747d97,"GameOverSubstate.endBullshit","GameOverSubstate.hx",151,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_149_endBullshit,"GameOverSubstate","endBullshit",0xd9747d97,"GameOverSubstate.endBullshit","GameOverSubstate.hx",149,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_30_resetVariables,"GameOverSubstate","resetVariables",0xb1f9143f,"GameOverSubstate.resetVariables","GameOverSubstate.hx",30,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_25_boot,"GameOverSubstate","boot",0x45df8ec9,"GameOverSubstate.boot","GameOverSubstate.hx",25,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_26_boot,"GameOverSubstate","boot",0x45df8ec9,"GameOverSubstate.boot","GameOverSubstate.hx",26,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_27_boot,"GameOverSubstate","boot",0x45df8ec9,"GameOverSubstate.boot","GameOverSubstate.hx",27,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_28_boot,"GameOverSubstate","boot",0x45df8ec9,"GameOverSubstate.boot","GameOverSubstate.hx",28,0x01fbc1e7)

void GameOverSubstate_obj::__construct(Float x,Float y,Float camX,Float camY, ::PlayState state){
            	HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_14_new)
HXLINE( 132)		this->isEnding = false;
HXLINE(  21)		this->stageSuffix = HX_("",00,00,00,00);
HXLINE(  19)		this->updateCamera = false;
HXLINE(  39)		this->lePlayState = state;
HXLINE(  40)		state->setOnLuas(HX_("inGameOver",6b,97,d6,11),true);
HXLINE(  41)		super::__construct();
HXLINE(  43)		::Conductor_obj::songPosition = ( (Float)(0) );
HXLINE(  45)		this->bf =  ::Boyfriend_obj::__alloc( HX_CTX ,x,y,::GameOverSubstate_obj::characterName);
HXLINE(  46)		this->add(this->bf);
HXLINE(  48)		Float _hx_tmp = this->bf->getGraphicMidpoint(null())->x;
HXDLIN(  48)		this->camFollow =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,_hx_tmp,this->bf->getGraphicMidpoint(null())->y);
HXLINE(  50)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN(  50)		_hx_tmp1->play(::Paths_obj::sound(::GameOverSubstate_obj::deathSoundName,null()),null(),null(),null(),null(),null());
HXLINE(  51)		::Conductor_obj::changeBPM(( (Float)(100) ));
HXLINE(  54)		::flixel::FlxG_obj::camera->scroll->set(null(),null());
HXLINE(  55)		::flixel::FlxG_obj::camera->target = null();
HXLINE(  58)		this->addVirtualPad(::ui::FlxDPadMode_obj::NONE_dyn(),::ui::FlxActionMode_obj::A_B_dyn());
HXLINE(  59)		 ::flixel::FlxCamera camcontrol =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE(  60)		::flixel::FlxG_obj::cameras->add(camcontrol,null()).StaticCast<  ::flixel::FlxCamera >();
HXLINE(  61)		{
HXLINE(  61)			 ::flixel::FlxCamera camcontrol1 = camcontrol;
HXDLIN(  61)			camcontrol1->bgColor = (camcontrol1->bgColor & 16777215);
HXDLIN(  61)			 ::flixel::FlxCamera camcontrol2 = camcontrol;
HXDLIN(  61)			camcontrol2->bgColor = (camcontrol2->bgColor | 0);
            		}
HXLINE(  62)		this->_virtualpad->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,camcontrol));
HXLINE(  64)		this->bf->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE(  68)		this->camFollowPos =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  69)		this->camFollowPos->setPosition((::flixel::FlxG_obj::camera->scroll->x + (( (Float)(::flixel::FlxG_obj::camera->width) ) / ( (Float)(2) ))),(::flixel::FlxG_obj::camera->scroll->y + (( (Float)(::flixel::FlxG_obj::camera->height) ) / ( (Float)(2) ))));
HXLINE(  70)		this->add(this->camFollowPos);
            	}

Dynamic GameOverSubstate_obj::__CreateEmpty() { return new GameOverSubstate_obj; }

void *GameOverSubstate_obj::_hx_vtable = 0;

Dynamic GameOverSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameOverSubstate_obj > _hx_result = new GameOverSubstate_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool GameOverSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7c795c9f) {
		if (inClassId<=(int)0x62817b24) {
			if (inClassId<=(int)0x5661ffbf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x5661ffbf;
			} else {
				return inClassId==(int)0x62817b24;
			}
		} else {
			return inClassId==(int)0x7c795c9f;
		}
	} else {
		if (inClassId<=(int)0x7d3f71b3) {
			return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7d3f71b3;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void GameOverSubstate_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_74_update)
HXLINE(  75)		this->super::update(elapsed);
HXLINE(  77)		this->lePlayState->callOnLuas(HX_("onUpdate",88,7c,b2,66),::cpp::VirtualArray_obj::__new(1)->init(0,elapsed));
HXLINE(  78)		if (this->updateCamera) {
HXLINE(  79)			Float lerpVal = ::CoolUtil_obj::boundTo((elapsed * ((Float)0.6)),( (Float)(0) ),( (Float)(1) ));
HXLINE(  80)			Float a = this->camFollowPos->x;
HXDLIN(  80)			Float a1 = this->camFollowPos->y;
HXDLIN(  80)			this->camFollowPos->setPosition((a + (lerpVal * (this->camFollow->x - a))),(a1 + (lerpVal * (this->camFollow->y - a1))));
            		}
HXLINE(  83)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  85)			this->endBullshit();
            		}
HXLINE(  88)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  90)			{
HXLINE(  90)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  90)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE(  91)			::PlayState_obj::deathCounter = 0;
HXLINE(  92)			::PlayState_obj::seenCutscene = false;
HXLINE(  94)			if (::PlayState_obj::isStoryMode) {
HXLINE(  95)				::MusicBeatState_obj::switchState( ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            			}
            			else {
HXLINE(  97)				::MusicBeatState_obj::switchState( ::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            			}
HXLINE(  99)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  99)			::String library = null();
HXDLIN(  99)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
HXLINE( 100)			this->lePlayState->callOnLuas(HX_("onGameOverConfirm",db,ac,91,0d),::cpp::VirtualArray_obj::__new(1)->init(0,false));
            		}
HXLINE( 103)		if ((this->bf->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE( 105)			if ((this->bf->animation->_curAnim->curFrame == 12)) {
HXLINE( 107)				::flixel::FlxG_obj::camera->follow(this->camFollowPos,::flixel::FlxCameraFollowStyle_obj::LOCKON_dyn(),1);
HXLINE( 108)				this->updateCamera = true;
            			}
HXLINE( 111)			if (this->bf->animation->_curAnim->finished) {
HXLINE( 113)				this->coolStartDeath(null());
HXLINE( 114)				this->bf->startedDeath = true;
            			}
            		}
HXLINE( 118)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE( 120)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 122)		this->lePlayState->callOnLuas(HX_("onUpdatePost",08,11,55,db),::cpp::VirtualArray_obj::__new(1)->init(0,elapsed));
            	}


void GameOverSubstate_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_b2ae8d30512793fc_127_beatHit)
HXDLIN( 127)		this->super::beatHit();
            	}


void GameOverSubstate_obj::coolStartDeath( ::Dynamic __o_volume){
            		 ::Dynamic volume = __o_volume;
            		if (::hx::IsNull(__o_volume)) volume = 1;
            	HX_STACKFRAME(&_hx_pos_b2ae8d30512793fc_136_coolStartDeath)
HXDLIN( 136)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 136)		::String library = null();
HXDLIN( 136)		_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + ::GameOverSubstate_obj::loopSoundName) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),volume,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameOverSubstate_obj,coolStartDeath,(void))

void GameOverSubstate_obj::endBullshit(){
            	HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_141_endBullshit)
HXDLIN( 141)		if (!(this->isEnding)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_151_endBullshit)
HXLINE( 151)					::MusicBeatState_obj::resetState();
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_149_endBullshit)
HXLINE( 149)				::flixel::FlxG_obj::camera->fade(-16777216,2,false, ::Dynamic(new _hx_Closure_0()),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 143)			this->isEnding = true;
HXLINE( 144)			this->bf->playAnim(HX_("deathConfirm",2c,44,2b,12),true,null(),null());
HXLINE( 145)			{
HXLINE( 145)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 145)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 146)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 146)			::String library = null();
HXDLIN( 146)			_hx_tmp->play(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + ::GameOverSubstate_obj::endSoundName) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null(),null(),null());
HXLINE( 147)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.7), ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 154)			this->lePlayState->callOnLuas(HX_("onGameOverConfirm",db,ac,91,0d),::cpp::VirtualArray_obj::__new(1)->init(0,true));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameOverSubstate_obj,endBullshit,(void))

::String GameOverSubstate_obj::characterName;

::String GameOverSubstate_obj::deathSoundName;

::String GameOverSubstate_obj::loopSoundName;

::String GameOverSubstate_obj::endSoundName;

void GameOverSubstate_obj::resetVariables(){
            	HX_STACKFRAME(&_hx_pos_b2ae8d30512793fc_30_resetVariables)
HXLINE(  31)		::GameOverSubstate_obj::characterName = HX_("bf",c4,55,00,00);
HXLINE(  32)		::GameOverSubstate_obj::deathSoundName = HX_("fnf_loss_sfx",6a,36,72,11);
HXLINE(  33)		::GameOverSubstate_obj::loopSoundName = HX_("gameOver",66,92,de,b5);
HXLINE(  34)		::GameOverSubstate_obj::endSoundName = HX_("gameOverEnd",15,2d,a9,8d);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameOverSubstate_obj,resetVariables,(void))


::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__new(Float x,Float y,Float camX,Float camY, ::PlayState state) {
	::hx::ObjectPtr< GameOverSubstate_obj > __this = new GameOverSubstate_obj();
	__this->__construct(x,y,camX,camY,state);
	return __this;
}

::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float camX,Float camY, ::PlayState state) {
	GameOverSubstate_obj *__this = (GameOverSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameOverSubstate_obj), true, "GameOverSubstate"));
	*(void **)__this = GameOverSubstate_obj::_hx_vtable;
	__this->__construct(x,y,camX,camY,state);
	return __this;
}

GameOverSubstate_obj::GameOverSubstate_obj()
{
}

void GameOverSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverSubstate);
	HX_MARK_MEMBER_NAME(bf,"bf");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(camFollowPos,"camFollowPos");
	HX_MARK_MEMBER_NAME(updateCamera,"updateCamera");
	HX_MARK_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_MARK_MEMBER_NAME(lePlayState,"lePlayState");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	 ::MusicBeatSubstate_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bf,"bf");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(camFollowPos,"camFollowPos");
	HX_VISIT_MEMBER_NAME(updateCamera,"updateCamera");
	HX_VISIT_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_VISIT_MEMBER_NAME(lePlayState,"lePlayState");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	 ::MusicBeatSubstate_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameOverSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { return ::hx::Val( bf ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { return ::hx::Val( stageSuffix ); }
		if (HX_FIELD_EQ(inName,"lePlayState") ) { return ::hx::Val( lePlayState ); }
		if (HX_FIELD_EQ(inName,"endBullshit") ) { return ::hx::Val( endBullshit_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"camFollowPos") ) { return ::hx::Val( camFollowPos ); }
		if (HX_FIELD_EQ(inName,"updateCamera") ) { return ::hx::Val( updateCamera ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"coolStartDeath") ) { return ::hx::Val( coolStartDeath_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GameOverSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"endSoundName") ) { outValue = ( endSoundName ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"characterName") ) { outValue = ( characterName ); return true; }
		if (HX_FIELD_EQ(inName,"loopSoundName") ) { outValue = ( loopSoundName ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"deathSoundName") ) { outValue = ( deathSoundName ); return true; }
		if (HX_FIELD_EQ(inName,"resetVariables") ) { outValue = resetVariables_dyn(); return true; }
	}
	return false;
}

::hx::Val GameOverSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { bf=inValue.Cast<  ::Boyfriend >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { stageSuffix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lePlayState") ) { lePlayState=inValue.Cast<  ::PlayState >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"camFollowPos") ) { camFollowPos=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateCamera") ) { updateCamera=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GameOverSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"endSoundName") ) { endSoundName=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"characterName") ) { characterName=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"loopSoundName") ) { loopSoundName=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"deathSoundName") ) { deathSoundName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void GameOverSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bf",c4,55,00,00));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("camFollowPos",94,32,de,8d));
	outFields->push(HX_("updateCamera",8e,ed,4f,b7));
	outFields->push(HX_("stageSuffix",2f,64,9f,2f));
	outFields->push(HX_("lePlayState",c4,0d,f9,81));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameOverSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Boyfriend */ ,(int)offsetof(GameOverSubstate_obj,bf),HX_("bf",c4,55,00,00)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(GameOverSubstate_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(GameOverSubstate_obj,camFollowPos),HX_("camFollowPos",94,32,de,8d)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,updateCamera),HX_("updateCamera",8e,ed,4f,b7)},
	{::hx::fsString,(int)offsetof(GameOverSubstate_obj,stageSuffix),HX_("stageSuffix",2f,64,9f,2f)},
	{::hx::fsObject /*  ::PlayState */ ,(int)offsetof(GameOverSubstate_obj,lePlayState),HX_("lePlayState",c4,0d,f9,81)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GameOverSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GameOverSubstate_obj::characterName,HX_("characterName",94,02,ec,41)},
	{::hx::fsString,(void *) &GameOverSubstate_obj::deathSoundName,HX_("deathSoundName",e6,08,d8,f2)},
	{::hx::fsString,(void *) &GameOverSubstate_obj::loopSoundName,HX_("loopSoundName",b6,8b,da,e5)},
	{::hx::fsString,(void *) &GameOverSubstate_obj::endSoundName,HX_("endSoundName",5f,47,cf,62)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GameOverSubstate_obj_sMemberFields[] = {
	HX_("bf",c4,55,00,00),
	HX_("camFollow",e0,6e,47,22),
	HX_("camFollowPos",94,32,de,8d),
	HX_("updateCamera",8e,ed,4f,b7),
	HX_("stageSuffix",2f,64,9f,2f),
	HX_("lePlayState",c4,0d,f9,81),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("isEnding",71,3f,f2,52),
	HX_("coolStartDeath",9b,db,39,51),
	HX_("endBullshit",4e,f7,81,48),
	::String(null()) };

static void GameOverSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::characterName,"characterName");
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::deathSoundName,"deathSoundName");
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::loopSoundName,"loopSoundName");
	HX_MARK_MEMBER_NAME(GameOverSubstate_obj::endSoundName,"endSoundName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameOverSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::characterName,"characterName");
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::deathSoundName,"deathSoundName");
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::loopSoundName,"loopSoundName");
	HX_VISIT_MEMBER_NAME(GameOverSubstate_obj::endSoundName,"endSoundName");
};

#endif

::hx::Class GameOverSubstate_obj::__mClass;

static ::String GameOverSubstate_obj_sStaticFields[] = {
	HX_("characterName",94,02,ec,41),
	HX_("deathSoundName",e6,08,d8,f2),
	HX_("loopSoundName",b6,8b,da,e5),
	HX_("endSoundName",5f,47,cf,62),
	HX_("resetVariables",e8,46,d3,dc),
	::String(null())
};

void GameOverSubstate_obj::__register()
{
	GameOverSubstate_obj _hx_dummy;
	GameOverSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameOverSubstate",37,5d,9a,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameOverSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &GameOverSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = GameOverSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GameOverSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameOverSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameOverSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameOverSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameOverSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameOverSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameOverSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b2ae8d30512793fc_25_boot)
HXDLIN(  25)		characterName = HX_("bf",c4,55,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b2ae8d30512793fc_26_boot)
HXDLIN(  26)		deathSoundName = HX_("fnf_loss_sfx",6a,36,72,11);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b2ae8d30512793fc_27_boot)
HXDLIN(  27)		loopSoundName = HX_("gameOver",66,92,de,b5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b2ae8d30512793fc_28_boot)
HXDLIN(  28)		endSoundName = HX_("gameOverEnd",15,2d,a9,8d);
            	}
}

