#ifndef INCLUDED_extension_webview_WebView
#define INCLUDED_extension_webview_WebView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(extension,webview,WebView)

namespace extension{
namespace webview{


class HXCPP_CLASS_ATTRIBUTES WebView_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WebView_obj OBJ_;
		WebView_obj();

	public:
		enum { _hx_ClassId = 0x789c695f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="extension.webview.WebView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"extension.webview.WebView"); }

		inline static ::hx::ObjectPtr< WebView_obj > __new() {
			::hx::ObjectPtr< WebView_obj > __this = new WebView_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< WebView_obj > __alloc(::hx::Ctx *_hx_ctx) {
			WebView_obj *__this = (WebView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebView_obj), false, "extension.webview.WebView"));
			*(void **)__this = WebView_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebView_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebView",f9,04,44,2a); }

		static void __boot();
		static bool initialized;
		static  ::Dynamic APIInit;
		static  ::Dynamic APISetCallback;
		static  ::Dynamic APINavigate;
		static  ::Dynamic APIDestroy;
		static  ::Dynamic APILoadHtml;
		static  ::Dynamic _open;
		static Dynamic _open_dyn() { return _open;}
		static  ::Dynamic _openHtml;
		static Dynamic _openHtml_dyn() { return _openHtml;}
		static  ::Dynamic onClose;
		static Dynamic onClose_dyn() { return onClose;}
		static  ::Dynamic onURLChanging;
		static Dynamic onURLChanging_dyn() { return onURLChanging;}
		static void open(::String url,::hx::Null< bool >  floating,::Array< ::String > urlWhitelist,::Array< ::String > urlBlacklist, ::Dynamic useWideViewPort, ::Dynamic mediaPlaybackRequiresUserGesture);
		static ::Dynamic open_dyn();

		static void openHtml(::String html,::hx::Null< bool >  floating, ::Dynamic useWideViewPort, ::Dynamic mediaPlaybackRequiresUserGesture);
		static ::Dynamic openHtml_dyn();

		static void init();
		static ::Dynamic init_dyn();

		static void APICall(::String method,::cpp::VirtualArray args);
		static ::Dynamic APICall_dyn();

};

} // end namespace extension
} // end namespace webview

#endif /* INCLUDED_extension_webview_WebView */ 
