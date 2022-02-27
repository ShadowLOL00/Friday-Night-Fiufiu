#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CustomFadeTransition
#include <CustomFadeTransition.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_ui_FlxActionMode
#include <ui/FlxActionMode.h>
#endif
#ifndef INCLUDED_ui_FlxDPadMode
#include <ui/FlxDPadMode.h>
#endif
#ifndef INCLUDED_ui_FlxVirtualPad
#include <ui/FlxVirtualPad.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_495f89d9d0902be3_21_new,"MusicBeatState","new",0xdae47368,"MusicBeatState.new","MusicBeatState.hx",21,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_31_get_controls,"MusicBeatState","get_controls",0xacecf677,"MusicBeatState.get_controls","MusicBeatState.hx",31,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_40_addVirtualPad,"MusicBeatState","addVirtualPad",0x1ede8a91,"MusicBeatState.addVirtualPad","MusicBeatState.hx",40,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_49_destroy,"MusicBeatState","destroy",0x72d8f402,"MusicBeatState.destroy","MusicBeatState.hx",49,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_59_create,"MusicBeatState","create",0x5e9058f4,"MusicBeatState.create","MusicBeatState.hx",59,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_71_update,"MusicBeatState","update",0x69867801,"MusicBeatState.update","MusicBeatState.hx",71,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_86_updateBeat,"MusicBeatState","updateBeat",0x79761a17,"MusicBeatState.updateBeat","MusicBeatState.hx",86,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_90_updateCurStep,"MusicBeatState","updateCurStep",0xd6ad7aeb,"MusicBeatState.updateCurStep","MusicBeatState.hx",90,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_140_stepHit,"MusicBeatState","stepHit",0xcf94756f,"MusicBeatState.stepHit","MusicBeatState.hx",140,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_145_beatHit,"MusicBeatState","beatHit",0xc257b185,"MusicBeatState.beatHit","MusicBeatState.hx",145,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_105_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",105,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_113_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",113,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_118_switchState,"MusicBeatState","switchState",0xaf81f285,"MusicBeatState.switchState","MusicBeatState.hx",118,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_129_resetState,"MusicBeatState","resetState",0xec54fbba,"MusicBeatState.resetState","MusicBeatState.hx",129,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_132_getState,"MusicBeatState","getState",0x1dfde593,"MusicBeatState.getState","MusicBeatState.hx",132,0xa1b2f108)

void MusicBeatState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_21_new)
HXLINE(  37)		this->trackedinputsNOTES = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  36)		this->trackedinputsUI = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  27)		this->curBeat = 0;
HXLINE(  26)		this->curStep = 0;
HXLINE(  24)		this->lastStep = ((Float)0);
HXLINE(  23)		this->lastBeat = ((Float)0);
HXLINE(  21)		super::__construct(TransIn,TransOut);
            	}

Dynamic MusicBeatState_obj::__CreateEmpty() { return new MusicBeatState_obj; }

void *MusicBeatState_obj::_hx_vtable = 0;

Dynamic MusicBeatState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatState_obj > _hx_result = new MusicBeatState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MusicBeatState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

 ::Controls MusicBeatState_obj::get_controls(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_31_get_controls)
HXDLIN(  31)		return ::PlayerSettings_obj::player1->controls;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,get_controls,return )

void MusicBeatState_obj::addVirtualPad( ::ui::FlxDPadMode DPad, ::ui::FlxActionMode Action){
            	HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_40_addVirtualPad)
HXLINE(  41)		this->_virtualpad =  ::ui::FlxVirtualPad_obj::__alloc( HX_CTX ,DPad,Action);
HXLINE(  42)		this->_virtualpad->set_alpha(((Float)0.75));
HXLINE(  43)		this->add(this->_virtualpad);
HXLINE(  44)		::PlayerSettings_obj::player1->controls->setVirtualPadUI(this->_virtualpad,DPad,Action);
HXLINE(  45)		this->trackedinputsUI = ::PlayerSettings_obj::player1->controls->trackedinputsUI;
HXLINE(  46)		::PlayerSettings_obj::player1->controls->trackedinputsUI = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MusicBeatState_obj,addVirtualPad,(void))

void MusicBeatState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_49_destroy)
HXLINE(  50)		::PlayerSettings_obj::player1->controls->removeFlxInput(this->trackedinputsUI);
HXLINE(  51)		::PlayerSettings_obj::player1->controls->removeFlxInput(this->trackedinputsNOTES);
HXLINE(  53)		this->super::destroy();
            	}


void MusicBeatState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_59_create)
HXLINE(  60)		bool skip = ::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut;
HXLINE(  61)		this->super::create();
HXLINE(  64)		if (!(skip)) {
HXLINE(  65)			this->openSubState( ::CustomFadeTransition_obj::__alloc( HX_CTX ,( (Float)(1) ),true));
            		}
HXLINE(  67)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = false;
            	}


void MusicBeatState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_71_update)
HXLINE(  73)		int oldStep = this->curStep;
HXLINE(  75)		this->updateCurStep();
HXLINE(  76)		this->updateBeat();
HXLINE(  78)		bool _hx_tmp;
HXDLIN(  78)		if ((oldStep != this->curStep)) {
HXLINE(  78)			_hx_tmp = (this->curStep > 0);
            		}
            		else {
HXLINE(  78)			_hx_tmp = false;
            		}
HXDLIN(  78)		if (_hx_tmp) {
HXLINE(  79)			this->stepHit();
            		}
HXLINE(  81)		this->super::update(elapsed);
            	}


void MusicBeatState_obj::updateBeat(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_86_updateBeat)
HXDLIN(  86)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateBeat,(void))

void MusicBeatState_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_90_updateCurStep)
HXLINE(  91)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("bpm",df,be,4a,00),( (Float)(0) ))
            			->setFixed(2,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  96)		{
HXLINE(  96)			int _g = 0;
HXDLIN(  96)			int _g1 = ::Conductor_obj::bpmChangeMap->length;
HXDLIN(  96)			while((_g < _g1)){
HXLINE(  96)				_g = (_g + 1);
HXDLIN(  96)				int i = (_g - 1);
HXLINE(  98)				if (::hx::IsGreaterEq( ::Conductor_obj::songPosition,::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE(  99)					lastChange = ::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE( 102)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor((((::Conductor_obj::songPosition - ( (Float)(::ClientPrefs_obj::noteOffset) )) - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ::Conductor_obj::stepCrochet)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateCurStep,(void))

void MusicBeatState_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_140_stepHit)
HXDLIN( 140)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE( 141)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,stepHit,(void))

void MusicBeatState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_145_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,beatHit,(void))

void MusicBeatState_obj::switchState( ::flixel::FlxState nextState){
            	HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_105_switchState)
HXLINE( 107)		 ::Dynamic curState = ::flixel::FlxG_obj::game->_state;
HXLINE( 108)		 ::MusicBeatState leState = ( ( ::MusicBeatState)(curState) );
HXLINE( 109)		if (!(::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn)) {
HXLINE( 110)			leState->openSubState( ::CustomFadeTransition_obj::__alloc( HX_CTX ,((Float)0.7),false));
HXLINE( 111)			if (::hx::IsInstanceEq( nextState,::flixel::FlxG_obj::game->_state )) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_113_switchState)
HXLINE( 113)					 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 113)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 113)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 112)				::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_0());
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::flixel::FlxState,nextState) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_495f89d9d0902be3_118_switchState)
HXLINE( 118)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 118)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 117)				::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_1(nextState));
            			}
HXLINE( 122)			return;
            		}
HXLINE( 124)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = false;
HXLINE( 125)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 125)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MusicBeatState_obj,switchState,(void))

void MusicBeatState_obj::resetState(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_129_resetState)
HXDLIN( 129)		::MusicBeatState_obj::switchState(::flixel::FlxG_obj::game->_state);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,resetState,(void))

 ::MusicBeatState MusicBeatState_obj::getState(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_132_getState)
HXLINE( 133)		 ::Dynamic curState = ::flixel::FlxG_obj::game->_state;
HXLINE( 134)		 ::MusicBeatState leState = ( ( ::MusicBeatState)(curState) );
HXLINE( 135)		return leState;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,getState,return )


::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MusicBeatState_obj > __this = new MusicBeatState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MusicBeatState_obj *__this = (MusicBeatState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatState_obj), true, "MusicBeatState"));
	*(void **)__this = MusicBeatState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MusicBeatState_obj::MusicBeatState_obj()
{
}

void MusicBeatState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MusicBeatState);
	HX_MARK_MEMBER_NAME(lastBeat,"lastBeat");
	HX_MARK_MEMBER_NAME(lastStep,"lastStep");
	HX_MARK_MEMBER_NAME(curStep,"curStep");
	HX_MARK_MEMBER_NAME(curBeat,"curBeat");
	HX_MARK_MEMBER_NAME(_virtualpad,"_virtualpad");
	HX_MARK_MEMBER_NAME(trackedinputsUI,"trackedinputsUI");
	HX_MARK_MEMBER_NAME(trackedinputsNOTES,"trackedinputsNOTES");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MusicBeatState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastBeat,"lastBeat");
	HX_VISIT_MEMBER_NAME(lastStep,"lastStep");
	HX_VISIT_MEMBER_NAME(curStep,"curStep");
	HX_VISIT_MEMBER_NAME(curBeat,"curBeat");
	HX_VISIT_MEMBER_NAME(_virtualpad,"_virtualpad");
	HX_VISIT_MEMBER_NAME(trackedinputsUI,"trackedinputsUI");
	HX_VISIT_MEMBER_NAME(trackedinputsNOTES,"trackedinputsNOTES");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MusicBeatState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { return ::hx::Val( lastBeat ); }
		if (HX_FIELD_EQ(inName,"lastStep") ) { return ::hx::Val( lastStep ); }
		if (HX_FIELD_EQ(inName,"controls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_controls() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateBeat") ) { return ::hx::Val( updateBeat_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_virtualpad") ) { return ::hx::Val( _virtualpad ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controls") ) { return ::hx::Val( get_controls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addVirtualPad") ) { return ::hx::Val( addVirtualPad_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trackedinputsUI") ) { return ::hx::Val( trackedinputsUI ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"trackedinputsNOTES") ) { return ::hx::Val( trackedinputsNOTES ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MusicBeatState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getState") ) { outValue = getState_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetState") ) { outValue = resetState_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switchState") ) { outValue = switchState_dyn(); return true; }
	}
	return false;
}

::hx::Val MusicBeatState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { lastBeat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastStep") ) { lastStep=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_virtualpad") ) { _virtualpad=inValue.Cast<  ::ui::FlxVirtualPad >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trackedinputsUI") ) { trackedinputsUI=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"trackedinputsNOTES") ) { trackedinputsNOTES=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MusicBeatState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastBeat",ec,fa,5c,d4));
	outFields->push(HX_("lastStep",c2,00,a5,df));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	outFields->push(HX_("controls",76,86,bc,37));
	outFields->push(HX_("_virtualpad",47,99,69,33));
	outFields->push(HX_("trackedinputsUI",67,05,98,f5));
	outFields->push(HX_("trackedinputsNOTES",ee,46,f7,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatState_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastBeat),HX_("lastBeat",ec,fa,5c,d4)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{::hx::fsObject /*  ::ui::FlxVirtualPad */ ,(int)offsetof(MusicBeatState_obj,_virtualpad),HX_("_virtualpad",47,99,69,33)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MusicBeatState_obj,trackedinputsUI),HX_("trackedinputsUI",67,05,98,f5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MusicBeatState_obj,trackedinputsNOTES),HX_("trackedinputsNOTES",ee,46,f7,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MusicBeatState_obj_sStaticStorageInfo = 0;
#endif

static ::String MusicBeatState_obj_sMemberFields[] = {
	HX_("lastBeat",ec,fa,5c,d4),
	HX_("lastStep",c2,00,a5,df),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("get_controls",7f,3a,d6,ec),
	HX_("_virtualpad",47,99,69,33),
	HX_("trackedinputsUI",67,05,98,f5),
	HX_("trackedinputsNOTES",ee,46,f7,27),
	HX_("addVirtualPad",89,cd,10,cb),
	HX_("destroy",fa,2c,86,24),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("updateBeat",1f,cc,c8,f9),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

::hx::Class MusicBeatState_obj::__mClass;

static ::String MusicBeatState_obj_sStaticFields[] = {
	HX_("switchState",7d,07,8b,77),
	HX_("resetState",c2,ad,a7,6c),
	HX_("getState",9b,85,e2,e3),
	::String(null())
};

void MusicBeatState_obj::__register()
{
	MusicBeatState_obj _hx_dummy;
	MusicBeatState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MusicBeatState",76,df,84,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MusicBeatState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

