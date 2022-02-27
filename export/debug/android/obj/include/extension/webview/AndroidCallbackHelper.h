#ifndef INCLUDED_extension_webview_AndroidCallbackHelper
#define INCLUDED_extension_webview_AndroidCallbackHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(extension,webview,AndroidCallbackHelper)

namespace extension{
namespace webview{


class HXCPP_CLASS_ATTRIBUTES AndroidCallbackHelper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AndroidCallbackHelper_obj OBJ_;
		AndroidCallbackHelper_obj();

	public:
		enum { _hx_ClassId = 0x2ff56d84 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="extension.webview.AndroidCallbackHelper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"extension.webview.AndroidCallbackHelper"); }
		static ::hx::ObjectPtr< AndroidCallbackHelper_obj > __new();
		static ::hx::ObjectPtr< AndroidCallbackHelper_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AndroidCallbackHelper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AndroidCallbackHelper",82,a0,df,30); }

		void onClose();
		::Dynamic onClose_dyn();

		void onURLChanging(::String url);
		::Dynamic onURLChanging_dyn();

};

} // end namespace extension
} // end namespace webview

#endif /* INCLUDED_extension_webview_AndroidCallbackHelper */ 
