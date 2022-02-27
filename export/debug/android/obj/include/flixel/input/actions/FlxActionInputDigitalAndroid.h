#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalAndroid
#define INCLUDED_flixel_input_actions_FlxActionInputDigitalAndroid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputDigital)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputDigitalAndroid)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputDigitalAndroid_obj : public  ::flixel::input::actions::FlxActionInputDigital_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputDigital_obj super;
		typedef FlxActionInputDigitalAndroid_obj OBJ_;
		FlxActionInputDigitalAndroid_obj();

	public:
		enum { _hx_ClassId = 0x30d0ba14 };

		void __construct(int androidKeyID,int Trigger);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputDigitalAndroid")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputDigitalAndroid"); }
		static ::hx::ObjectPtr< FlxActionInputDigitalAndroid_obj > __new(int androidKeyID,int Trigger);
		static ::hx::ObjectPtr< FlxActionInputDigitalAndroid_obj > __alloc(::hx::Ctx *_hx_ctx,int androidKeyID,int Trigger);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputDigitalAndroid_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputDigitalAndroid",19,27,1c,ee); }

		bool check( ::flixel::input::actions::FlxAction Action);

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputDigitalAndroid */ 
