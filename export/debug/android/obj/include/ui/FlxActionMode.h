#ifndef INCLUDED_ui_FlxActionMode
#define INCLUDED_ui_FlxActionMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(ui,FlxActionMode)
namespace ui{


class FlxActionMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxActionMode_obj OBJ_;

	public:
		FlxActionMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("ui.FlxActionMode",91,75,5b,a1); }
		::String __ToString() const { return HX_("FlxActionMode.",a3,dc,44,3d) + _hx_tag; }

		static ::ui::FlxActionMode A;
		static inline ::ui::FlxActionMode A_dyn() { return A; }
		static ::ui::FlxActionMode A_B;
		static inline ::ui::FlxActionMode A_B_dyn() { return A_B; }
		static ::ui::FlxActionMode A_B_C;
		static inline ::ui::FlxActionMode A_B_C_dyn() { return A_B_C; }
		static ::ui::FlxActionMode A_B_X_Y;
		static inline ::ui::FlxActionMode A_B_X_Y_dyn() { return A_B_X_Y; }
		static ::ui::FlxActionMode B;
		static inline ::ui::FlxActionMode B_dyn() { return B; }
		static ::ui::FlxActionMode D;
		static inline ::ui::FlxActionMode D_dyn() { return D; }
		static ::ui::FlxActionMode NONE;
		static inline ::ui::FlxActionMode NONE_dyn() { return NONE; }
};

} // end namespace ui

#endif /* INCLUDED_ui_FlxActionMode */ 
