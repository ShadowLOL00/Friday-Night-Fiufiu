#include <hxcpp.h>

#ifndef INCLUDED_extension_webview_AndroidCallbackHelper
#include <extension/webview/AndroidCallbackHelper.h>
#endif
#ifndef INCLUDED_extension_webview_WebView
#include <extension/webview/WebView.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a8d3396220ca755_5_new,"extension.webview.AndroidCallbackHelper","new",0x09e57a10,"extension.webview.AndroidCallbackHelper.new","extension/webview/AndroidCallbackHelper.hx",5,0xefda5662)
HX_LOCAL_STACK_FRAME(_hx_pos_5a8d3396220ca755_10_onClose,"extension.webview.AndroidCallbackHelper","onClose",0x9340f7c9,"extension.webview.AndroidCallbackHelper.onClose","extension/webview/AndroidCallbackHelper.hx",10,0xefda5662)
HX_LOCAL_STACK_FRAME(_hx_pos_5a8d3396220ca755_16_onURLChanging,"extension.webview.AndroidCallbackHelper","onURLChanging",0x36a24c0d,"extension.webview.AndroidCallbackHelper.onURLChanging","extension/webview/AndroidCallbackHelper.hx",16,0xefda5662)
namespace extension{
namespace webview{

void AndroidCallbackHelper_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5a8d3396220ca755_5_new)
            	}

Dynamic AndroidCallbackHelper_obj::__CreateEmpty() { return new AndroidCallbackHelper_obj; }

void *AndroidCallbackHelper_obj::_hx_vtable = 0;

Dynamic AndroidCallbackHelper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AndroidCallbackHelper_obj > _hx_result = new AndroidCallbackHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AndroidCallbackHelper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ff56d84;
}

void AndroidCallbackHelper_obj::onClose(){
            	HX_STACKFRAME(&_hx_pos_5a8d3396220ca755_10_onClose)
HXDLIN(  10)		if (::hx::IsNotNull( ::extension::webview::WebView_obj::onClose )) {
HXLINE(  11)			::extension::webview::WebView_obj::onClose();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AndroidCallbackHelper_obj,onClose,(void))

void AndroidCallbackHelper_obj::onURLChanging(::String url){
            	HX_STACKFRAME(&_hx_pos_5a8d3396220ca755_16_onURLChanging)
HXDLIN(  16)		if (::hx::IsNotNull( ::extension::webview::WebView_obj::onURLChanging )) {
HXLINE(  17)			::extension::webview::WebView_obj::onURLChanging(url);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AndroidCallbackHelper_obj,onURLChanging,(void))


::hx::ObjectPtr< AndroidCallbackHelper_obj > AndroidCallbackHelper_obj::__new() {
	::hx::ObjectPtr< AndroidCallbackHelper_obj > __this = new AndroidCallbackHelper_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AndroidCallbackHelper_obj > AndroidCallbackHelper_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AndroidCallbackHelper_obj *__this = (AndroidCallbackHelper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AndroidCallbackHelper_obj), false, "extension.webview.AndroidCallbackHelper"));
	*(void **)__this = AndroidCallbackHelper_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AndroidCallbackHelper_obj::AndroidCallbackHelper_obj()
{
}

::hx::Val AndroidCallbackHelper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onClose") ) { return ::hx::Val( onClose_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onURLChanging") ) { return ::hx::Val( onURLChanging_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AndroidCallbackHelper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AndroidCallbackHelper_obj_sStaticStorageInfo = 0;
#endif

static ::String AndroidCallbackHelper_obj_sMemberFields[] = {
	HX_("onClose",19,b6,a0,de),
	HX_("onURLChanging",5d,a6,19,c0),
	::String(null()) };

::hx::Class AndroidCallbackHelper_obj::__mClass;

void AndroidCallbackHelper_obj::__register()
{
	AndroidCallbackHelper_obj _hx_dummy;
	AndroidCallbackHelper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("extension.webview.AndroidCallbackHelper",1e,72,83,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AndroidCallbackHelper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AndroidCallbackHelper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AndroidCallbackHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AndroidCallbackHelper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace extension
} // end namespace webview
