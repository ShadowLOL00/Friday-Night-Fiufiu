#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_ui_FlxActionMode
#include <ui/FlxActionMode.h>
#endif
#ifndef INCLUDED_ui_FlxDPadMode
#include <ui/FlxDPadMode.h>
#endif
#ifndef INCLUDED_ui_FlxVirtualPad
#include <ui/FlxVirtualPad.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81b525467515cd1c_13_new,"MusicBeatSubstate","new",0x9b0dd73e,"MusicBeatSubstate.new","MusicBeatSubstate.hx",13,0x55a559f2)
HX_LOCAL_STACK_FRAME(_hx_pos_81b525467515cd1c_28_get_controls,"MusicBeatSubstate","get_controls",0xaa3f67e1,"MusicBeatSubstate.get_controls","MusicBeatSubstate.hx",28,0x55a559f2)
HX_LOCAL_STACK_FRAME(_hx_pos_81b525467515cd1c_37_addVirtualPad,"MusicBeatSubstate","addVirtualPad",0xc9af55e7,"MusicBeatSubstate.addVirtualPad","MusicBeatSubstate.hx",37,0x55a559f2)
HX_LOCAL_STACK_FRAME(_hx_pos_81b525467515cd1c_46_destroy,"MusicBeatSubstate","destroy",0xdeaffad8,"MusicBeatSubstate.destroy","MusicBeatSubstate.hx",46,0x55a559f2)
HX_LOCAL_STACK_FRAME(_hx_pos_81b525467515cd1c_57_update,"MusicBeatSubstate","update",0x66909deb,"MusicBeatSubstate.update","MusicBeatSubstate.hx",57,0x55a559f2)
HX_LOCAL_STACK_FRAME(_hx_pos_81b525467515cd1c_72_updateCurStep,"MusicBeatSubstate","updateCurStep",0x817e4641,"MusicBeatSubstate.updateCurStep","MusicBeatSubstate.hx",72,0x55a559f2)
HX_LOCAL_STACK_FRAME(_hx_pos_81b525467515cd1c_89_stepHit,"MusicBeatSubstate","stepHit",0x3b6b7c45,"MusicBeatSubstate.stepHit","MusicBeatSubstate.hx",89,0x55a559f2)
HX_LOCAL_STACK_FRAME(_hx_pos_81b525467515cd1c_94_beatHit,"MusicBeatSubstate","beatHit",0x2e2eb85b,"MusicBeatSubstate.beatHit","MusicBeatSubstate.hx",94,0x55a559f2)

void MusicBeatSubstate_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_81b525467515cd1c_13_new)
HXLINE(  34)		this->trackedinputsNOTES = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  33)		this->trackedinputsUI = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  24)		this->curBeat = 0;
HXLINE(  23)		this->curStep = 0;
HXLINE(  21)		this->lastStep = ((Float)0);
HXLINE(  20)		this->lastBeat = ((Float)0);
HXLINE(  17)		super::__construct(null());
            	}

Dynamic MusicBeatSubstate_obj::__CreateEmpty() { return new MusicBeatSubstate_obj; }

void *MusicBeatSubstate_obj::_hx_vtable = 0;

Dynamic MusicBeatSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatSubstate_obj > _hx_result = new MusicBeatSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MusicBeatSubstate_obj::_hx_isInstanceOf(int inClassId) {
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
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7fce3ab0;
	}
}

 ::Controls MusicBeatSubstate_obj::get_controls(){
            	HX_STACKFRAME(&_hx_pos_81b525467515cd1c_28_get_controls)
HXDLIN(  28)		return ::PlayerSettings_obj::player1->controls;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,get_controls,return )

void MusicBeatSubstate_obj::addVirtualPad( ::ui::FlxDPadMode DPad, ::ui::FlxActionMode Action){
            	HX_GC_STACKFRAME(&_hx_pos_81b525467515cd1c_37_addVirtualPad)
HXLINE(  38)		this->_virtualpad =  ::ui::FlxVirtualPad_obj::__alloc( HX_CTX ,DPad,Action);
HXLINE(  39)		this->_virtualpad->set_alpha(((Float)0.75));
HXLINE(  40)		this->add(this->_virtualpad);
HXLINE(  41)		::PlayerSettings_obj::player1->controls->setVirtualPadUI(this->_virtualpad,DPad,Action);
HXLINE(  42)		this->trackedinputsUI = ::PlayerSettings_obj::player1->controls->trackedinputsUI;
HXLINE(  43)		::PlayerSettings_obj::player1->controls->trackedinputsUI = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MusicBeatSubstate_obj,addVirtualPad,(void))

void MusicBeatSubstate_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_81b525467515cd1c_46_destroy)
HXLINE(  47)		::PlayerSettings_obj::player1->controls->removeFlxInput(this->trackedinputsUI);
HXLINE(  48)		::PlayerSettings_obj::player1->controls->removeFlxInput(this->trackedinputsNOTES);
HXLINE(  50)		this->super::destroy();
            	}


void MusicBeatSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_81b525467515cd1c_57_update)
HXLINE(  59)		int oldStep = this->curStep;
HXLINE(  61)		this->updateCurStep();
HXLINE(  62)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
HXLINE(  64)		bool _hx_tmp;
HXDLIN(  64)		if ((oldStep != this->curStep)) {
HXLINE(  64)			_hx_tmp = (this->curStep > 0);
            		}
            		else {
HXLINE(  64)			_hx_tmp = false;
            		}
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  65)			this->stepHit();
            		}
HXLINE(  68)		this->super::update(elapsed);
            	}


void MusicBeatSubstate_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_81b525467515cd1c_72_updateCurStep)
HXLINE(  73)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("bpm",df,be,4a,00),( (Float)(0) ))
            			->setFixed(2,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  78)		{
HXLINE(  78)			int _g = 0;
HXDLIN(  78)			int _g1 = ::Conductor_obj::bpmChangeMap->length;
HXDLIN(  78)			while((_g < _g1)){
HXLINE(  78)				_g = (_g + 1);
HXDLIN(  78)				int i = (_g - 1);
HXLINE(  80)				if (::hx::IsGreater( ::Conductor_obj::songPosition,::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE(  81)					lastChange = ::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE(  84)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor(((::Conductor_obj::songPosition - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ::Conductor_obj::stepCrochet)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,updateCurStep,(void))

void MusicBeatSubstate_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_81b525467515cd1c_89_stepHit)
HXDLIN(  89)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE(  90)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,stepHit,(void))

void MusicBeatSubstate_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_81b525467515cd1c_94_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,beatHit,(void))


::hx::ObjectPtr< MusicBeatSubstate_obj > MusicBeatSubstate_obj::__new() {
	::hx::ObjectPtr< MusicBeatSubstate_obj > __this = new MusicBeatSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MusicBeatSubstate_obj > MusicBeatSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MusicBeatSubstate_obj *__this = (MusicBeatSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatSubstate_obj), true, "MusicBeatSubstate"));
	*(void **)__this = MusicBeatSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MusicBeatSubstate_obj::MusicBeatSubstate_obj()
{
}

void MusicBeatSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MusicBeatSubstate);
	HX_MARK_MEMBER_NAME(lastBeat,"lastBeat");
	HX_MARK_MEMBER_NAME(lastStep,"lastStep");
	HX_MARK_MEMBER_NAME(curStep,"curStep");
	HX_MARK_MEMBER_NAME(curBeat,"curBeat");
	HX_MARK_MEMBER_NAME(_virtualpad,"_virtualpad");
	HX_MARK_MEMBER_NAME(trackedinputsUI,"trackedinputsUI");
	HX_MARK_MEMBER_NAME(trackedinputsNOTES,"trackedinputsNOTES");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MusicBeatSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastBeat,"lastBeat");
	HX_VISIT_MEMBER_NAME(lastStep,"lastStep");
	HX_VISIT_MEMBER_NAME(curStep,"curStep");
	HX_VISIT_MEMBER_NAME(curBeat,"curBeat");
	HX_VISIT_MEMBER_NAME(_virtualpad,"_virtualpad");
	HX_VISIT_MEMBER_NAME(trackedinputsUI,"trackedinputsUI");
	HX_VISIT_MEMBER_NAME(trackedinputsNOTES,"trackedinputsNOTES");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MusicBeatSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
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

::hx::Val MusicBeatSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void MusicBeatSubstate_obj::__GetFields(Array< ::String> &outFields)
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
static ::hx::StorageInfo MusicBeatSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MusicBeatSubstate_obj,lastBeat),HX_("lastBeat",ec,fa,5c,d4)},
	{::hx::fsFloat,(int)offsetof(MusicBeatSubstate_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(MusicBeatSubstate_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatSubstate_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{::hx::fsObject /*  ::ui::FlxVirtualPad */ ,(int)offsetof(MusicBeatSubstate_obj,_virtualpad),HX_("_virtualpad",47,99,69,33)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MusicBeatSubstate_obj,trackedinputsUI),HX_("trackedinputsUI",67,05,98,f5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MusicBeatSubstate_obj,trackedinputsNOTES),HX_("trackedinputsNOTES",ee,46,f7,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MusicBeatSubstate_obj_sStaticStorageInfo = 0;
#endif

static ::String MusicBeatSubstate_obj_sMemberFields[] = {
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
	HX_("update",09,86,05,87),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

::hx::Class MusicBeatSubstate_obj::__mClass;

void MusicBeatSubstate_obj::__register()
{
	MusicBeatSubstate_obj _hx_dummy;
	MusicBeatSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MusicBeatSubstate",4c,20,4e,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatSubstate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

