#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_ControlsSubstate
#include <ControlsSubstate.h>
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
#ifndef INCLUDED_NotesSubstate
#include <NotesSubstate.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_PreferencesSubstate
#include <PreferencesSubstate.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_03f5e745aacd5817_32_new,"OptionsState","new",0x73d32065,"OptionsState.new","OptionsState.hx",32,0x342db2ab)
static const ::String _hx_array_data_0f8009f3_1[] = {
	HX_("Notes",21,4c,f8,32),HX_("Keyboard Controls",0f,19,74,fc),HX_("Mobile Controls",f4,21,dc,8e),HX_("Preferences",98,4e,23,57),
};
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_39_create,"OptionsState","create",0xe6502817,"OptionsState.create","OptionsState.hx",39,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_71_closeSubState,"OptionsState","closeSubState",0x724d808e,"OptionsState.closeSubState","OptionsState.hx",71,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_78_update,"OptionsState","update",0xf1464724,"OptionsState.update","OptionsState.hx",78,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_114_changeSelection,"OptionsState","changeSelection",0x02af5c41,"OptionsState.changeSelection","OptionsState.hx",114,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_36_boot,"OptionsState","boot",0xdd02388d,"OptionsState.boot","OptionsState.hx",36,0x342db2ab)

void OptionsState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_32_new)
HXLINE(  34)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_0f8009f3_1,4);
HXLINE(  32)		super::__construct(TransIn,TransOut);
            	}

Dynamic OptionsState_obj::__CreateEmpty() { return new OptionsState_obj; }

void *OptionsState_obj::_hx_vtable = 0;

Dynamic OptionsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsState_obj > _hx_result = new OptionsState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2aabc417) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2aabc417;
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

void OptionsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_39_create)
HXLINE(  44)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  44)		::String library = null();
HXDLIN(  44)		::OptionsState_obj::menuBG = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  45)		::OptionsState_obj::menuBG->set_color(-1412611);
HXLINE(  46)		 ::flixel::FlxSprite _hx_tmp1 = ::OptionsState_obj::menuBG;
HXDLIN(  46)		_hx_tmp1->setGraphicSize(::Std_obj::_hx_int((::OptionsState_obj::menuBG->get_width() * ((Float)1.1))),null());
HXLINE(  47)		::OptionsState_obj::menuBG->updateHitbox();
HXLINE(  48)		::OptionsState_obj::menuBG->screenCenter(null());
HXLINE(  49)		::OptionsState_obj::menuBG->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  50)		this->add(::OptionsState_obj::menuBG);
HXLINE(  52)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  53)		this->add(this->grpOptions);
HXLINE(  55)		{
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			int _g1 = this->options->length;
HXDLIN(  55)			while((_g < _g1)){
HXLINE(  55)				_g = (_g + 1);
HXDLIN(  55)				int i = (_g - 1);
HXLINE(  57)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),this->options->__get(i),true,false,null(),null());
HXLINE(  58)				optionText->screenCenter(null());
HXLINE(  59)				optionText->set_y((optionText->y + ((( (Float)(100) ) * (( (Float)(i) ) - (( (Float)(this->options->length) ) / ( (Float)(2) )))) + 50)));
HXLINE(  60)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  62)		this->changeSelection(null());
HXLINE(  65)		this->addVirtualPad(::ui::FlxDPadMode_obj::UP_DOWN_dyn(),::ui::FlxActionMode_obj::A_B_dyn());
HXLINE(  68)		this->super::create();
            	}


void OptionsState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_71_closeSubState)
HXLINE(  72)		this->super::closeSubState();
HXLINE(  73)		::ClientPrefs_obj::saveSettings();
HXLINE(  74)		this->changeSelection(null());
HXLINE(  75)		this->_virtualpad->set_alpha(((Float)0.75));
            	}


void OptionsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_78_update)
HXLINE(  79)		this->super::update(elapsed);
HXLINE(  81)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE(  82)			this->changeSelection(-1);
            		}
HXLINE(  84)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE(  85)			this->changeSelection(1);
            		}
HXLINE(  88)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  89)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  89)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE(  90)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(  93)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  94)			{
HXLINE(  94)				int _g = 0;
HXDLIN(  94)				::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN(  94)				while((_g < _g1->length)){
HXLINE(  94)					 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN(  94)					_g = (_g + 1);
HXLINE(  95)					item->set_alpha(( (Float)(0) ));
            				}
            			}
HXLINE(  98)			this->_virtualpad->set_alpha(( (Float)(0) ));
HXLINE( 100)			::String _hx_switch_0 = this->options->__get(::OptionsState_obj::curSelected);
            			if (  (_hx_switch_0==HX_("Keyboard Controls",0f,19,74,fc)) ){
HXLINE( 104)				this->openSubState( ::ControlsSubstate_obj::__alloc( HX_CTX ));
HXDLIN( 104)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Mobile Controls",f4,21,dc,8e)) ){
HXLINE( 106)				::MusicBeatState_obj::switchState( ::CustomControlsState_obj::__alloc( HX_CTX ));
HXDLIN( 106)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Notes",21,4c,f8,32)) ){
HXLINE( 102)				this->openSubState( ::NotesSubstate_obj::__alloc( HX_CTX ));
HXDLIN( 102)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Preferences",98,4e,23,57)) ){
HXLINE( 109)				this->openSubState( ::PreferencesSubstate_obj::__alloc( HX_CTX ));
HXDLIN( 109)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
            		}
            	}


void OptionsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_114_changeSelection)
HXLINE( 115)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::OptionsState >();
HXDLIN( 115)		::OptionsState_obj::curSelected = (::OptionsState_obj::curSelected + change);
HXLINE( 116)		if ((::OptionsState_obj::curSelected < 0)) {
HXLINE( 117)			::OptionsState_obj::curSelected = (this->options->length - 1);
            		}
HXLINE( 118)		if ((::OptionsState_obj::curSelected >= this->options->length)) {
HXLINE( 119)			::OptionsState_obj::curSelected = 0;
            		}
HXLINE( 121)		int bullShit = 0;
HXLINE( 123)		{
HXLINE( 123)			int _g = 0;
HXDLIN( 123)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 123)			while((_g < _g1->length)){
HXLINE( 123)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 123)				_g = (_g + 1);
HXLINE( 124)				item->targetY = ( (Float)((bullShit - ::OptionsState_obj::curSelected)) );
HXLINE( 125)				bullShit = (bullShit + 1);
HXLINE( 127)				item->set_alpha(((Float)0.6));
HXLINE( 128)				if ((item->targetY == 0)) {
HXLINE( 129)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,changeSelection,(void))

int OptionsState_obj::curSelected;

 ::flixel::FlxSprite OptionsState_obj::menuBG;


::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OptionsState_obj > __this = new OptionsState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OptionsState_obj *__this = (OptionsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsState_obj), true, "OptionsState"));
	*(void **)__this = OptionsState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionsState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { outValue = ( menuBG ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val OptionsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionsState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { menuBG=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsState_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionsState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &OptionsState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &OptionsState_obj::menuBG,HX_("menuBG",24,65,6d,05)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionsState_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpOptions",f9,45,d8,00),
	HX_("create",fc,66,0f,7c),
	HX_("closeSubState",49,18,32,04),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void OptionsState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionsState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
};

#endif

::hx::Class OptionsState_obj::__mClass;

static ::String OptionsState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuBG",24,65,6d,05),
	::String(null())
};

void OptionsState_obj::__register()
{
	OptionsState_obj _hx_dummy;
	OptionsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionsState",f3,09,80,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionsState_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionsState_obj::__SetStatic;
	__mClass->mMarkFunc = OptionsState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionsState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionsState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OptionsState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_36_boot)
HXDLIN(  36)		curSelected = 0;
            	}
}

