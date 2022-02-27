#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalAndroid
#include <flixel/input/actions/FlxActionInputDigitalAndroid.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeys
#include <flixel/input/android/FlxAndroidKeys.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_56e145d86afe0f71_324_new,"flixel.input.actions.FlxActionInputDigitalAndroid","new",0x941e80d2,"flixel.input.actions.FlxActionInputDigitalAndroid.new","flixel/input/actions/FlxActionInputDigital.hx",324,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_56e145d86afe0f71_329_check,"flixel.input.actions.FlxActionInputDigitalAndroid","check",0x65e3c9ba,"flixel.input.actions.FlxActionInputDigitalAndroid.check","flixel/input/actions/FlxActionInputDigital.hx",329,0x47a4ecd2)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputDigitalAndroid_obj::__construct(int androidKeyID,int Trigger){
            	HX_STACKFRAME(&_hx_pos_56e145d86afe0f71_324_new)
HXDLIN( 324)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::ANDROID_dyn(),androidKeyID,Trigger,null());
            	}

Dynamic FlxActionInputDigitalAndroid_obj::__CreateEmpty() { return new FlxActionInputDigitalAndroid_obj; }

void *FlxActionInputDigitalAndroid_obj::_hx_vtable = 0;

Dynamic FlxActionInputDigitalAndroid_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputDigitalAndroid_obj > _hx_result = new FlxActionInputDigitalAndroid_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxActionInputDigitalAndroid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20308a99) {
		if (inClassId<=(int)0x1600da07) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1600da07;
		} else {
			return inClassId==(int)0x20308a99;
		}
	} else {
		return inClassId==(int)0x30d0ba14;
	}
}

bool FlxActionInputDigitalAndroid_obj::check( ::flixel::input::actions::FlxAction Action){
            	HX_STACKFRAME(&_hx_pos_56e145d86afe0f71_329_check)
HXDLIN( 329)		switch((int)(this->trigger)){
            			case (int)-1: {
HXLINE( 334)				return ::flixel::FlxG_obj::android->checkStatus(this->inputID,-1);
            			}
            			break;
            			case (int)0: {
HXLINE( 332)				if (!(::flixel::FlxG_obj::android->checkStatus(this->inputID,0))) {
HXLINE( 332)					return ::flixel::FlxG_obj::android->checkStatus(this->inputID,-1);
            				}
            				else {
HXLINE( 332)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 331)				if (!(::flixel::FlxG_obj::android->checkStatus(this->inputID,1))) {
HXLINE( 331)					return ::flixel::FlxG_obj::android->checkStatus(this->inputID,2);
            				}
            				else {
HXLINE( 331)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 333)				return ::flixel::FlxG_obj::android->checkStatus(this->inputID,2);
            			}
            			break;
            			default:{
HXLINE( 336)				return false;
            			}
            		}
HXLINE( 329)		return false;
            	}



::hx::ObjectPtr< FlxActionInputDigitalAndroid_obj > FlxActionInputDigitalAndroid_obj::__new(int androidKeyID,int Trigger) {
	::hx::ObjectPtr< FlxActionInputDigitalAndroid_obj > __this = new FlxActionInputDigitalAndroid_obj();
	__this->__construct(androidKeyID,Trigger);
	return __this;
}

::hx::ObjectPtr< FlxActionInputDigitalAndroid_obj > FlxActionInputDigitalAndroid_obj::__alloc(::hx::Ctx *_hx_ctx,int androidKeyID,int Trigger) {
	FlxActionInputDigitalAndroid_obj *__this = (FlxActionInputDigitalAndroid_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputDigitalAndroid_obj), true, "flixel.input.actions.FlxActionInputDigitalAndroid"));
	*(void **)__this = FlxActionInputDigitalAndroid_obj::_hx_vtable;
	__this->__construct(androidKeyID,Trigger);
	return __this;
}

FlxActionInputDigitalAndroid_obj::FlxActionInputDigitalAndroid_obj()
{
}

::hx::Val FlxActionInputDigitalAndroid_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxActionInputDigitalAndroid_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxActionInputDigitalAndroid_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputDigitalAndroid_obj_sMemberFields[] = {
	HX_("check",c8,98,b6,45),
	::String(null()) };

::hx::Class FlxActionInputDigitalAndroid_obj::__mClass;

void FlxActionInputDigitalAndroid_obj::__register()
{
	FlxActionInputDigitalAndroid_obj _hx_dummy;
	FlxActionInputDigitalAndroid_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputDigitalAndroid",e0,6f,bd,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputDigitalAndroid_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputDigitalAndroid_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputDigitalAndroid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputDigitalAndroid_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
