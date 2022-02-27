#include <hxcpp.h>

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_VideoSubState
#include <VideoSubState.h>
#endif
#ifndef INCLUDED_extension_webview_WebView
#include <extension/webview/WebView.h>
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
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
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
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3ade73763751d885_21_new,"VideoSubState","new",0x7b6266de,"VideoSubState.new","VideoSubState.hx",21,0xbbac9e52)
static const ::String _hx_array_data_e3fa5fec_1[] = {
	HX_("http://exitme(.*)",0d,b2,37,8e),
};
HX_LOCAL_STACK_FRAME(_hx_pos_3ade73763751d885_37_update,"VideoSubState","update",0x6201924b,"VideoSubState.update","VideoSubState.hx",37,0xbbac9e52)
HX_LOCAL_STACK_FRAME(_hx_pos_3ade73763751d885_45_onClose,"VideoSubState","onClose",0xa02f6397,"VideoSubState.onClose","VideoSubState.hx",45,0xbbac9e52)
HX_LOCAL_STACK_FRAME(_hx_pos_3ade73763751d885_52_onURLChanging,"VideoSubState","onURLChanging",0x98f8865b,"VideoSubState.onURLChanging","VideoSubState.hx",52,0xbbac9e52)
HX_LOCAL_STACK_FRAME(_hx_pos_3ade73763751d885_14_boot,"VideoSubState","boot",0x72d09bf4,"VideoSubState.boot","VideoSubState.hx",14,0xbbac9e52)

void VideoSubState_obj::__construct(::String source){
            	HX_GC_STACKFRAME(&_hx_pos_3ade73763751d885_21_new)
HXLINE(  22)		super::__construct();
HXLINE(  24)		this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("Toque para continuar",09,57,45,13),48,null());
HXLINE(  25)		this->text->screenCenter(null());
HXLINE(  26)		this->text->set_alpha(( (Float)(0) ));
HXLINE(  27)		this->add(this->text);
HXLINE(  31)		::extension::webview::WebView_obj::onClose = this->onClose_dyn();
HXLINE(  32)		::extension::webview::WebView_obj::onURLChanging = this->onURLChanging_dyn();
HXLINE(  34)		::extension::webview::WebView_obj::open(((::VideoSubState_obj::androidPath + source) + HX_(".html",99,44,85,c1)),false,null(),::Array_obj< ::String >::fromData( _hx_array_data_e3fa5fec_1,1),null(),null());
            	}

Dynamic VideoSubState_obj::__CreateEmpty() { return new VideoSubState_obj; }

void *VideoSubState_obj::_hx_vtable = 0;

Dynamic VideoSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoSubState_obj > _hx_result = new VideoSubState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VideoSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5de19564) {
			if (inClassId<=(int)0x5661ffbf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x5661ffbf;
			} else {
				return inClassId==(int)0x5de19564;
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

void VideoSubState_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_3ade73763751d885_37_update)
HXLINE(  38)		{
HXLINE(  38)			int _g = 0;
HXDLIN(  38)			::Array< ::Dynamic> _g1 = ::flixel::FlxG_obj::touches->list;
HXDLIN(  38)			while((_g < _g1->length)){
HXLINE(  38)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN(  38)				_g = (_g + 1);
HXLINE(  39)				if ((touch->input->current == -1)) {
HXLINE(  40)					this->onClose();
            				}
            			}
            		}
HXLINE(  42)		this->super::update(dt);
            	}


void VideoSubState_obj::onClose(){
            	HX_STACKFRAME(&_hx_pos_3ade73763751d885_45_onClose)
HXLINE(  46)		this->text->set_alpha(( (Float)(0) ));
HXLINE(  47)		::PlayState_obj::nacutscene = true;
HXLINE(  49)		this->close();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoSubState_obj,onClose,(void))

void VideoSubState_obj::onURLChanging(::String url){
            	HX_STACKFRAME(&_hx_pos_3ade73763751d885_52_onURLChanging)
HXLINE(  53)		this->text->set_alpha(( (Float)(1) ));
HXLINE(  54)		if ((url == HX_("http://exitme/",67,96,01,ce))) {
HXLINE(  54)			this->onClose();
            		}
HXLINE(  55)		::haxe::Log_obj::trace((HX_("WebView is about to open: ",f3,47,21,4a) + url),::hx::SourceInfo(HX_("source/VideoSubState.hx",46,d5,d5,7c),55,HX_("VideoSubState",ec,5f,fa,e3),HX_("onURLChanging",5d,a6,19,c0)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoSubState_obj,onURLChanging,(void))

::String VideoSubState_obj::androidPath;


::hx::ObjectPtr< VideoSubState_obj > VideoSubState_obj::__new(::String source) {
	::hx::ObjectPtr< VideoSubState_obj > __this = new VideoSubState_obj();
	__this->__construct(source);
	return __this;
}

::hx::ObjectPtr< VideoSubState_obj > VideoSubState_obj::__alloc(::hx::Ctx *_hx_ctx,::String source) {
	VideoSubState_obj *__this = (VideoSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoSubState_obj), true, "VideoSubState"));
	*(void **)__this = VideoSubState_obj::_hx_vtable;
	__this->__construct(source);
	return __this;
}

VideoSubState_obj::VideoSubState_obj()
{
}

void VideoSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoSubState);
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(text,"text");
	 ::MusicBeatSubstate_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VideoSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(text,"text");
	 ::MusicBeatSubstate_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VideoSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClose") ) { return ::hx::Val( onClose_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onURLChanging") ) { return ::hx::Val( onURLChanging_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
	}
	return super::__Field(inName,inCallProp);
}

bool VideoSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"androidPath") ) { outValue = ( androidPath ); return true; }
	}
	return false;
}

::hx::Val VideoSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VideoSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"androidPath") ) { androidPath=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void VideoSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("text",ad,cc,f9,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VideoSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoSubState_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(VideoSubState_obj,text),HX_("text",ad,cc,f9,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo VideoSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &VideoSubState_obj::androidPath,HX_("androidPath",74,70,8e,1f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String VideoSubState_obj_sMemberFields[] = {
	HX_("finishCallback",38,a1,bc,b4),
	HX_("text",ad,cc,f9,4c),
	HX_("update",09,86,05,87),
	HX_("onClose",19,b6,a0,de),
	HX_("onURLChanging",5d,a6,19,c0),
	::String(null()) };

static void VideoSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VideoSubState_obj::androidPath,"androidPath");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VideoSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VideoSubState_obj::androidPath,"androidPath");
};

#endif

::hx::Class VideoSubState_obj::__mClass;

static ::String VideoSubState_obj_sStaticFields[] = {
	HX_("androidPath",74,70,8e,1f),
	::String(null())
};

void VideoSubState_obj::__register()
{
	VideoSubState_obj _hx_dummy;
	VideoSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("VideoSubState",ec,5f,fa,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VideoSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &VideoSubState_obj::__SetStatic;
	__mClass->mMarkFunc = VideoSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(VideoSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VideoSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void VideoSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3ade73763751d885_14_boot)
HXDLIN(  14)		androidPath = HX_("file:///android_asset/",e0,bd,40,ae);
            	}
}

