#ifndef INCLUDED_VideoSubState
#define INCLUDED_VideoSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS0(VideoSubState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES VideoSubState_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef VideoSubState_obj OBJ_;
		VideoSubState_obj();

	public:
		enum { _hx_ClassId = 0x5de19564 };

		void __construct(::String source);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="VideoSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"VideoSubState"); }
		static ::hx::ObjectPtr< VideoSubState_obj > __new(::String source);
		static ::hx::ObjectPtr< VideoSubState_obj > __alloc(::hx::Ctx *_hx_ctx,::String source);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VideoSubState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VideoSubState",ec,5f,fa,e3); }

		static void __boot();
		static ::String androidPath;
		 ::Dynamic finishCallback;
		Dynamic finishCallback_dyn() { return finishCallback;}
		 ::flixel::text::FlxText text;
		void update(Float dt);

		void onClose();
		::Dynamic onClose_dyn();

		void onURLChanging(::String url);
		::Dynamic onURLChanging_dyn();

};


#endif /* INCLUDED_VideoSubState */ 
