#include <hxcpp.h>

#ifndef INCLUDED_ui_FlxDPadMode
#include <ui/FlxDPadMode.h>
#endif
namespace ui{

::ui::FlxDPadMode FlxDPadMode_obj::FULL;

::ui::FlxDPadMode FlxDPadMode_obj::LEFT_RIGHT;

::ui::FlxDPadMode FlxDPadMode_obj::NONE;

::ui::FlxDPadMode FlxDPadMode_obj::RIGHT_FULL;

::ui::FlxDPadMode FlxDPadMode_obj::UP_DOWN;

::ui::FlxDPadMode FlxDPadMode_obj::UP_LEFT_RIGHT;

bool FlxDPadMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FULL",8f,b1,85,2e)) { outValue = FlxDPadMode_obj::FULL; return true; }
	if (inName==HX_("LEFT_RIGHT",44,9a,3c,9d)) { outValue = FlxDPadMode_obj::LEFT_RIGHT; return true; }
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = FlxDPadMode_obj::NONE; return true; }
	if (inName==HX_("RIGHT_FULL",32,80,49,c5)) { outValue = FlxDPadMode_obj::RIGHT_FULL; return true; }
	if (inName==HX_("UP_DOWN",06,28,6d,ab)) { outValue = FlxDPadMode_obj::UP_DOWN; return true; }
	if (inName==HX_("UP_LEFT_RIGHT",e8,54,82,24)) { outValue = FlxDPadMode_obj::UP_LEFT_RIGHT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxDPadMode_obj)

int FlxDPadMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FULL",8f,b1,85,2e)) return 5;
	if (inName==HX_("LEFT_RIGHT",44,9a,3c,9d)) return 2;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("RIGHT_FULL",32,80,49,c5)) return 4;
	if (inName==HX_("UP_DOWN",06,28,6d,ab)) return 1;
	if (inName==HX_("UP_LEFT_RIGHT",e8,54,82,24)) return 3;
	return super::__FindIndex(inName);
}

int FlxDPadMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FULL",8f,b1,85,2e)) return 0;
	if (inName==HX_("LEFT_RIGHT",44,9a,3c,9d)) return 0;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("RIGHT_FULL",32,80,49,c5)) return 0;
	if (inName==HX_("UP_DOWN",06,28,6d,ab)) return 0;
	if (inName==HX_("UP_LEFT_RIGHT",e8,54,82,24)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxDPadMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FULL",8f,b1,85,2e)) return FULL;
	if (inName==HX_("LEFT_RIGHT",44,9a,3c,9d)) return LEFT_RIGHT;
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	if (inName==HX_("RIGHT_FULL",32,80,49,c5)) return RIGHT_FULL;
	if (inName==HX_("UP_DOWN",06,28,6d,ab)) return UP_DOWN;
	if (inName==HX_("UP_LEFT_RIGHT",e8,54,82,24)) return UP_LEFT_RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String FlxDPadMode_obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("UP_DOWN",06,28,6d,ab),
	HX_("LEFT_RIGHT",44,9a,3c,9d),
	HX_("UP_LEFT_RIGHT",e8,54,82,24),
	HX_("RIGHT_FULL",32,80,49,c5),
	HX_("FULL",8f,b1,85,2e),
	::String(null())
};

::hx::Class FlxDPadMode_obj::__mClass;

Dynamic __Create_FlxDPadMode_obj() { return new FlxDPadMode_obj; }

void FlxDPadMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("ui.FlxDPadMode",aa,d3,fa,62), ::hx::TCanCast< FlxDPadMode_obj >,FlxDPadMode_obj_sStaticFields,0,
	&__Create_FlxDPadMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxDPadMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxDPadMode_obj::__GetStatic;
}

void FlxDPadMode_obj::__boot()
{
FULL = ::hx::CreateConstEnum< FlxDPadMode_obj >(HX_("FULL",8f,b1,85,2e),5);
LEFT_RIGHT = ::hx::CreateConstEnum< FlxDPadMode_obj >(HX_("LEFT_RIGHT",44,9a,3c,9d),2);
NONE = ::hx::CreateConstEnum< FlxDPadMode_obj >(HX_("NONE",b8,da,ca,33),0);
RIGHT_FULL = ::hx::CreateConstEnum< FlxDPadMode_obj >(HX_("RIGHT_FULL",32,80,49,c5),4);
UP_DOWN = ::hx::CreateConstEnum< FlxDPadMode_obj >(HX_("UP_DOWN",06,28,6d,ab),1);
UP_LEFT_RIGHT = ::hx::CreateConstEnum< FlxDPadMode_obj >(HX_("UP_LEFT_RIGHT",e8,54,82,24),3);
}


} // end namespace ui
