#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_extension_webview_AndroidCallbackHelper
#include <extension/webview/AndroidCallbackHelper.h>
#endif
#ifndef INCLUDED_extension_webview_WebView
#include <extension/webview/WebView.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_lime_system_JNI
#include <lime/system/JNI.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_42_open,"extension.webview.WebView","open",0xc5b9d943,"extension.webview.WebView.open","extension/webview/WebView.hx",42,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_74_openHtml,"extension.webview.WebView","openHtml",0x4de2f84e,"extension.webview.WebView.openHtml","extension/webview/WebView.hx",74,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_105_init,"extension.webview.WebView","init",0xc1c11089,"extension.webview.WebView.init","extension/webview/WebView.hx",105,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_127_APICall,"extension.webview.WebView","APICall",0xefdbbe5f,"extension.webview.WebView.APICall","extension/webview/WebView.hx",127,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_9_boot,"extension.webview.WebView","boot",0xbd2159ab,"extension.webview.WebView.boot","extension/webview/WebView.hx",9,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_11_boot,"extension.webview.WebView","boot",0xbd2159ab,"extension.webview.WebView.boot","extension/webview/WebView.hx",11,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_12_boot,"extension.webview.WebView","boot",0xbd2159ab,"extension.webview.WebView.boot","extension/webview/WebView.hx",12,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_13_boot,"extension.webview.WebView","boot",0xbd2159ab,"extension.webview.WebView.boot","extension/webview/WebView.hx",13,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_14_boot,"extension.webview.WebView","boot",0xbd2159ab,"extension.webview.WebView.boot","extension/webview/WebView.hx",14,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_15_boot,"extension.webview.WebView","boot",0xbd2159ab,"extension.webview.WebView.boot","extension/webview/WebView.hx",15,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_22_boot,"extension.webview.WebView","boot",0xbd2159ab,"extension.webview.WebView.boot","extension/webview/WebView.hx",22,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_23_boot,"extension.webview.WebView","boot",0xbd2159ab,"extension.webview.WebView.boot","extension/webview/WebView.hx",23,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_29_boot,"extension.webview.WebView","boot",0xbd2159ab,"extension.webview.WebView.boot","extension/webview/WebView.hx",29,0xa4872fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8df44788ddcec561_30_boot,"extension.webview.WebView","boot",0xbd2159ab,"extension.webview.WebView.boot","extension/webview/WebView.hx",30,0xa4872fcb)
namespace extension{
namespace webview{

void WebView_obj::__construct() { }

Dynamic WebView_obj::__CreateEmpty() { return new WebView_obj; }

void *WebView_obj::_hx_vtable = 0;

Dynamic WebView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WebView_obj > _hx_result = new WebView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WebView_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x789c695f;
}

bool WebView_obj::initialized;

 ::Dynamic WebView_obj::APIInit;

 ::Dynamic WebView_obj::APISetCallback;

 ::Dynamic WebView_obj::APINavigate;

 ::Dynamic WebView_obj::APIDestroy;

 ::Dynamic WebView_obj::APILoadHtml;

 ::Dynamic WebView_obj::_open;

 ::Dynamic WebView_obj::_openHtml;

 ::Dynamic WebView_obj::onClose;

 ::Dynamic WebView_obj::onURLChanging;

void WebView_obj::open(::String url,::hx::Null< bool >  __o_floating,::Array< ::String > urlWhitelist,::Array< ::String > urlBlacklist, ::Dynamic __o_useWideViewPort, ::Dynamic __o_mediaPlaybackRequiresUserGesture){
            		bool floating = __o_floating.Default(false);
            		 ::Dynamic useWideViewPort = __o_useWideViewPort;
            		if (::hx::IsNull(__o_useWideViewPort)) useWideViewPort = false;
            		 ::Dynamic mediaPlaybackRequiresUserGesture = __o_mediaPlaybackRequiresUserGesture;
            		if (::hx::IsNull(__o_mediaPlaybackRequiresUserGesture)) mediaPlaybackRequiresUserGesture = false;
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_42_open)
HXLINE(  43)		::extension::webview::WebView_obj::init();
HXLINE(  44)		if (::hx::IsNotNull( urlWhitelist )) {
HXLINE(  44)			urlWhitelist->push(url);
            		}
HXLINE(  47)		if (::hx::IsNull( urlWhitelist )) {
HXLINE(  48)			urlWhitelist = ::Array_obj< ::String >::__new(0);
            		}
HXLINE(  50)		if (::hx::IsNull( urlBlacklist )) {
HXLINE(  51)			urlBlacklist = ::Array_obj< ::String >::__new(0);
            		}
HXLINE(  53)		 ::Dynamic obj =  ::Dynamic(::hx::Anon_obj::Create(6)
            			->setFixed(0,HX_("mediaPlaybackRequiresUserGesture",d1,50,b4,c2),mediaPlaybackRequiresUserGesture)
            			->setFixed(1,HX_("floating",c6,b0,9f,dd),floating)
            			->setFixed(2,HX_("useWideViewPort",a0,ae,9b,fa),useWideViewPort)
            			->setFixed(3,HX_("url",6f,2b,59,00),url)
            			->setFixed(4,HX_("urlBlacklist",2e,8c,02,4d),urlBlacklist)
            			->setFixed(5,HX_("urlWhitelist",18,be,5b,5a),urlWhitelist));
HXLINE(  61)		 ::Dynamic replacer = null();
HXDLIN(  61)		::String space = null();
HXDLIN(  61)		::String _hx_tmp = ::haxe::format::JsonPrinter_obj::print(obj,replacer,space);
HXDLIN(  61)		::extension::webview::WebView_obj::_open(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(WebView_obj,open,(void))

void WebView_obj::openHtml(::String html,::hx::Null< bool >  __o_floating, ::Dynamic __o_useWideViewPort, ::Dynamic __o_mediaPlaybackRequiresUserGesture){
            		bool floating = __o_floating.Default(false);
            		 ::Dynamic useWideViewPort = __o_useWideViewPort;
            		if (::hx::IsNull(__o_useWideViewPort)) useWideViewPort = false;
            		 ::Dynamic mediaPlaybackRequiresUserGesture = __o_mediaPlaybackRequiresUserGesture;
            		if (::hx::IsNull(__o_mediaPlaybackRequiresUserGesture)) mediaPlaybackRequiresUserGesture = false;
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_74_openHtml)
HXLINE(  75)		::extension::webview::WebView_obj::init();
HXLINE(  77)		 ::Dynamic obj =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("mediaPlaybackRequiresUserGesture",d1,50,b4,c2),mediaPlaybackRequiresUserGesture)
            			->setFixed(1,HX_("floating",c6,b0,9f,dd),floating)
            			->setFixed(2,HX_("useWideViewPort",a0,ae,9b,fa),useWideViewPort)
            			->setFixed(3,HX_("html",6b,95,16,45),html));
HXLINE(  83)		 ::Dynamic replacer = null();
HXDLIN(  83)		::String space = null();
HXDLIN(  83)		::String _hx_tmp = ::haxe::format::JsonPrinter_obj::print(obj,replacer,space);
HXDLIN(  83)		::extension::webview::WebView_obj::_openHtml(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WebView_obj,openHtml,(void))

void WebView_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_8df44788ddcec561_105_init)
HXLINE( 106)		if ((::extension::webview::WebView_obj::initialized == true)) {
HXLINE( 106)			return;
            		}
HXLINE( 107)		::extension::webview::WebView_obj::initialized = true;
HXLINE( 108)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 110)			::extension::webview::WebView_obj::_open = ::lime::_hx_system::JNI_obj::createStaticMethod(HX_("extensions/webview/WebViewExtension",f7,8a,98,46),HX_("open",ca,03,b4,49),HX_("(Ljava/lang/String;)V",7f,b4,bc,c7),null(),null());
HXLINE( 111)			::extension::webview::WebView_obj::_openHtml = ::lime::_hx_system::JNI_obj::createStaticMethod(HX_("extensions/webview/WebViewExtension",f7,8a,98,46),HX_("openHtml",55,72,52,e6),HX_("(Ljava/lang/String;)V",7f,b4,bc,c7),null(),null());
HXLINE( 112)			 ::Dynamic _callbackFunc = ::lime::_hx_system::JNI_obj::createStaticMethod(HX_("extensions/webview/WebViewExtension",f7,8a,98,46),HX_("setCallback",87,63,67,af),HX_("(Lorg/haxe/lime/HaxeObject;)V",43,55,bc,75),null(),null());
HXLINE( 113)			_callbackFunc( ::extension::webview::AndroidCallbackHelper_obj::__alloc( HX_CTX ));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 122)				{
HXLINE( 122)					null();
            				}
HXDLIN( 122)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 123)				{
HXLINE( 123)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 123)					::String _hx_tmp1 = (HX_("INIT Exception: ",85,db,96,24) + ::Std_obj::string(e));
HXDLIN( 123)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("extension/webview/WebView.hx",cb,2f,87,a4),123,HX_("extension.webview.WebView",95,7d,b0,11),HX_("init",10,3b,bb,45)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WebView_obj,init,(void))

void WebView_obj::APICall(::String method,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_127_APICall)
HXLINE( 128)		::extension::webview::WebView_obj::init();
HXLINE( 129)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 131)			if ((method == HX_("init",10,3b,bb,45))) {
HXLINE( 132)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 133)					::extension::webview::WebView_obj::APIInit(::hx::IsEq( args->__get(1),true ));
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 134)						{
HXLINE( 134)							null();
            						}
HXLINE( 135)						::extension::webview::WebView_obj::APIInit(::hx::IsEq( args->__get(1),true ));
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
HXLINE( 138)			if ((method == HX_("callback",c5,99,06,7f))) {
HXLINE( 138)				::extension::webview::WebView_obj::APISetCallback(args->__get(0));
            			}
HXLINE( 139)			if ((method == HX_("navigate",31,7f,dd,3c))) {
HXLINE( 139)				::extension::webview::WebView_obj::APINavigate(args->__get(0));
            			}
HXLINE( 140)			if ((method == HX_("destroy",fa,2c,86,24))) {
HXLINE( 140)				::extension::webview::WebView_obj::APIDestroy();
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 147)				{
HXLINE( 147)					null();
            				}
HXDLIN( 147)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 148)				{
HXLINE( 148)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 148)					::String _hx_tmp1 = ((((HX_("APICall Exception [",42,80,f4,0e) + method) + HX_(", ",74,26,00,00)) + ::Std_obj::string(args)) + HX_("]: ",43,c4,46,00));
HXDLIN( 148)					::String _hx_tmp2 = (_hx_tmp1 + ::Std_obj::string(e));
HXDLIN( 148)					_hx_tmp(_hx_tmp2,::hx::SourceInfo(HX_("extension/webview/WebView.hx",cb,2f,87,a4),148,HX_("extension.webview.WebView",95,7d,b0,11),HX_("APICall",38,a2,53,c0)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(WebView_obj,APICall,(void))


WebView_obj::WebView_obj()
{
}

bool WebView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { outValue = open_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_open") ) { outValue = ( _open ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"APIInit") ) { outValue = ( APIInit ); return true; }
		if (HX_FIELD_EQ(inName,"onClose") ) { outValue = ( onClose ); return true; }
		if (HX_FIELD_EQ(inName,"APICall") ) { outValue = APICall_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"openHtml") ) { outValue = openHtml_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_openHtml") ) { outValue = ( _openHtml ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"APIDestroy") ) { outValue = ( APIDestroy ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		if (HX_FIELD_EQ(inName,"APINavigate") ) { outValue = ( APINavigate ); return true; }
		if (HX_FIELD_EQ(inName,"APILoadHtml") ) { outValue = ( APILoadHtml ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onURLChanging") ) { outValue = ( onURLChanging ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"APISetCallback") ) { outValue = ( APISetCallback ); return true; }
	}
	return false;
}

bool WebView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_open") ) { _open=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"APIInit") ) { APIInit=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"onClose") ) { onClose=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_openHtml") ) { _openHtml=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"APIDestroy") ) { APIDestroy=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"APINavigate") ) { APINavigate=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"APILoadHtml") ) { APILoadHtml=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onURLChanging") ) { onURLChanging=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"APISetCallback") ) { APISetCallback=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WebView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo WebView_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &WebView_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebView_obj::APIInit,HX_("APIInit",aa,c4,54,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebView_obj::APISetCallback,HX_("APISetCallback",2d,a1,59,8d)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebView_obj::APINavigate,HX_("APINavigate",cb,dd,24,0d)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebView_obj::APIDestroy,HX_("APIDestroy",a0,1f,93,ff)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebView_obj::APILoadHtml,HX_("APILoadHtml",4b,c5,fd,85)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebView_obj::_open,HX_("_open",a9,1f,c5,fc)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebView_obj::_openHtml,HX_("_openHtml",b4,69,e8,2d)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebView_obj::onClose,HX_("onClose",19,b6,a0,de)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WebView_obj::onURLChanging,HX_("onURLChanging",5d,a6,19,c0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void WebView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WebView_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(WebView_obj::APIInit,"APIInit");
	HX_MARK_MEMBER_NAME(WebView_obj::APISetCallback,"APISetCallback");
	HX_MARK_MEMBER_NAME(WebView_obj::APINavigate,"APINavigate");
	HX_MARK_MEMBER_NAME(WebView_obj::APIDestroy,"APIDestroy");
	HX_MARK_MEMBER_NAME(WebView_obj::APILoadHtml,"APILoadHtml");
	HX_MARK_MEMBER_NAME(WebView_obj::_open,"_open");
	HX_MARK_MEMBER_NAME(WebView_obj::_openHtml,"_openHtml");
	HX_MARK_MEMBER_NAME(WebView_obj::onClose,"onClose");
	HX_MARK_MEMBER_NAME(WebView_obj::onURLChanging,"onURLChanging");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WebView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WebView_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(WebView_obj::APIInit,"APIInit");
	HX_VISIT_MEMBER_NAME(WebView_obj::APISetCallback,"APISetCallback");
	HX_VISIT_MEMBER_NAME(WebView_obj::APINavigate,"APINavigate");
	HX_VISIT_MEMBER_NAME(WebView_obj::APIDestroy,"APIDestroy");
	HX_VISIT_MEMBER_NAME(WebView_obj::APILoadHtml,"APILoadHtml");
	HX_VISIT_MEMBER_NAME(WebView_obj::_open,"_open");
	HX_VISIT_MEMBER_NAME(WebView_obj::_openHtml,"_openHtml");
	HX_VISIT_MEMBER_NAME(WebView_obj::onClose,"onClose");
	HX_VISIT_MEMBER_NAME(WebView_obj::onURLChanging,"onURLChanging");
};

#endif

::hx::Class WebView_obj::__mClass;

static ::String WebView_obj_sStaticFields[] = {
	HX_("initialized",14,f5,0f,37),
	HX_("APIInit",aa,c4,54,c4),
	HX_("APISetCallback",2d,a1,59,8d),
	HX_("APINavigate",cb,dd,24,0d),
	HX_("APIDestroy",a0,1f,93,ff),
	HX_("APILoadHtml",4b,c5,fd,85),
	HX_("_open",a9,1f,c5,fc),
	HX_("_openHtml",b4,69,e8,2d),
	HX_("onClose",19,b6,a0,de),
	HX_("onURLChanging",5d,a6,19,c0),
	HX_("open",ca,03,b4,49),
	HX_("openHtml",55,72,52,e6),
	HX_("init",10,3b,bb,45),
	HX_("APICall",38,a2,53,c0),
	::String(null())
};

void WebView_obj::__register()
{
	WebView_obj _hx_dummy;
	WebView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("extension.webview.WebView",95,7d,b0,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WebView_obj::__GetStatic;
	__mClass->mSetStaticField = &WebView_obj::__SetStatic;
	__mClass->mMarkFunc = WebView_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WebView_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< WebView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WebView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WebView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WebView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WebView_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_9_boot)
HXDLIN(   9)		initialized = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_11_boot)
HXDLIN(  11)		APIInit = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_12_boot)
HXDLIN(  12)		APISetCallback = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_13_boot)
HXDLIN(  13)		APINavigate = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_14_boot)
HXDLIN(  14)		APIDestroy = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_15_boot)
HXDLIN(  15)		APILoadHtml = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_22_boot)
HXDLIN(  22)		_open = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_23_boot)
HXDLIN(  23)		_openHtml = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_29_boot)
HXDLIN(  29)		onClose = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_8df44788ddcec561_30_boot)
HXDLIN(  30)		onURLChanging = null();
            	}
}

} // end namespace extension
} // end namespace webview
