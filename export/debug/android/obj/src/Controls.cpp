#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Control
#include <Control.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Device
#include <Device.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionAnalog
#include <flixel/input/actions/FlxActionAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalIFlxInput
#include <flixel/input/actions/FlxActionInputDigitalIFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionManager
#include <flixel/input/actions/FlxActionManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_ui_FlxActionMode
#include <ui/FlxActionMode.h>
#endif
#ifndef INCLUDED_ui_FlxDPadMode
#include <ui/FlxDPadMode.h>
#endif
#ifndef INCLUDED_ui_FlxVirtualPad
#include <ui/FlxVirtualPad.h>
#endif
#ifndef INCLUDED_ui_Hitbox
#include <ui/Hitbox.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_948b5caa279cd923_124_new,"Controls","new",0x4f8de688,"Controls.new","Controls.hx",124,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_167_get_UI_UP,"Controls","get_UI_UP",0x338ac325,"Controls.get_UI_UP","Controls.hx",167,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_172_get_UI_LEFT,"Controls","get_UI_LEFT",0x38228f51,"Controls.get_UI_LEFT","Controls.hx",172,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_177_get_UI_RIGHT,"Controls","get_UI_RIGHT",0x5d27e532,"Controls.get_UI_RIGHT","Controls.hx",177,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_182_get_UI_DOWN,"Controls","get_UI_DOWN",0x32e07fac,"Controls.get_UI_DOWN","Controls.hx",182,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_187_get_UI_UP_P,"Controls","get_UI_UP_P",0x3e1de976,"Controls.get_UI_UP_P","Controls.hx",187,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_192_get_UI_LEFT_P,"Controls","get_UI_LEFT_P",0x716218a2,"Controls.get_UI_LEFT_P","Controls.hx",192,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_197_get_UI_RIGHT_P,"Controls","get_UI_RIGHT_P",0xe2d168c3,"Controls.get_UI_RIGHT_P","Controls.hx",197,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_202_get_UI_DOWN_P,"Controls","get_UI_DOWN_P",0x0bc115bd,"Controls.get_UI_DOWN_P","Controls.hx",202,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_207_get_UI_UP_R,"Controls","get_UI_UP_R",0x3e1de978,"Controls.get_UI_UP_R","Controls.hx",207,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_212_get_UI_LEFT_R,"Controls","get_UI_LEFT_R",0x716218a4,"Controls.get_UI_LEFT_R","Controls.hx",212,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_217_get_UI_RIGHT_R,"Controls","get_UI_RIGHT_R",0xe2d168c5,"Controls.get_UI_RIGHT_R","Controls.hx",217,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_222_get_UI_DOWN_R,"Controls","get_UI_DOWN_R",0x0bc115bf,"Controls.get_UI_DOWN_R","Controls.hx",222,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_227_get_NOTE_UP,"Controls","get_NOTE_UP",0x213b6207,"Controls.get_NOTE_UP","Controls.hx",227,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_232_get_NOTE_LEFT,"Controls","get_NOTE_LEFT",0x6a622ab3,"Controls.get_NOTE_LEFT","Controls.hx",232,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_237_get_NOTE_RIGHT,"Controls","get_NOTE_RIGHT",0x22903f90,"Controls.get_NOTE_RIGHT","Controls.hx",237,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_242_get_NOTE_DOWN,"Controls","get_NOTE_DOWN",0x65201b0e,"Controls.get_NOTE_DOWN","Controls.hx",242,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_247_get_NOTE_UP_P,"Controls","get_NOTE_UP_P",0x705d84d8,"Controls.get_NOTE_UP_P","Controls.hx",247,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_252_get_NOTE_LEFT_P,"Controls","get_NOTE_LEFT_P",0x6748d084,"Controls.get_NOTE_LEFT_P","Controls.hx",252,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_257_get_NOTE_RIGHT_P,"Controls","get_NOTE_RIGHT_P",0x16cb96a1,"Controls.get_NOTE_RIGHT_P","Controls.hx",257,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_262_get_NOTE_DOWN_P,"Controls","get_NOTE_DOWN_P",0x01a7cd9f,"Controls.get_NOTE_DOWN_P","Controls.hx",262,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_267_get_NOTE_UP_R,"Controls","get_NOTE_UP_R",0x705d84da,"Controls.get_NOTE_UP_R","Controls.hx",267,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_272_get_NOTE_LEFT_R,"Controls","get_NOTE_LEFT_R",0x6748d086,"Controls.get_NOTE_LEFT_R","Controls.hx",272,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_277_get_NOTE_RIGHT_R,"Controls","get_NOTE_RIGHT_R",0x16cb96a3,"Controls.get_NOTE_RIGHT_R","Controls.hx",277,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_282_get_NOTE_DOWN_R,"Controls","get_NOTE_DOWN_R",0x01a7cda1,"Controls.get_NOTE_DOWN_R","Controls.hx",282,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_287_get_ACCEPT,"Controls","get_ACCEPT",0x5fc72da9,"Controls.get_ACCEPT","Controls.hx",287,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_292_get_BACK,"Controls","get_BACK",0xc248f688,"Controls.get_BACK","Controls.hx",292,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_297_get_PAUSE,"Controls","get_PAUSE",0x4d388f55,"Controls.get_PAUSE","Controls.hx",297,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_302_get_RESET,"Controls","get_RESET",0x76a9022e,"Controls.get_RESET","Controls.hx",302,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_390_addbuttonuNOTES,"Controls","addbuttonuNOTES",0xc5f780c7,"Controls.addbuttonuNOTES","Controls.hx",390,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_398_setHitBoxNOTES,"Controls","setHitBoxNOTES",0xf5bfa1ff,"Controls.setHitBoxNOTES","Controls.hx",398,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_406_setVirtualPadNOTES,"Controls","setVirtualPadNOTES",0x8e97dc6f,"Controls.setVirtualPadNOTES","Controls.hx",406,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_455_addbuttonuUI,"Controls","addbuttonuUI",0x191819ee,"Controls.addbuttonuUI","Controls.hx",455,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_463_setHitBoxUI,"Controls","setHitBoxUI",0xf4b785b6,"Controls.setHitBoxUI","Controls.hx",463,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_471_setVirtualPadUI,"Controls","setVirtualPadUI",0x92836546,"Controls.setVirtualPadUI","Controls.hx",471,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_521_removeFlxInput,"Controls","removeFlxInput",0x0bf71974,"Controls.removeFlxInput","Controls.hx",521,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_539_update,"Controls","update",0x9d2db8e1,"Controls.update","Controls.hx",539,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_544_checkByName,"Controls","checkByName",0xbe587cd2,"Controls.checkByName","Controls.hx",544,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_553_getDialogueName,"Controls","getDialogueName",0xe1263f61,"Controls.getDialogueName","Controls.hx",553,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_565_getDialogueNameFromToken,"Controls","getDialogueNameFromToken",0x6458998e,"Controls.getDialogueNameFromToken","Controls.hx",565,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_570_getActionFromControl,"Controls","getActionFromControl",0xa2e9ae5f,"Controls.getActionFromControl","Controls.hx",570,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_601_forEachBound,"Controls","forEachBound",0x9a98930c,"Controls.forEachBound","Controls.hx",601,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_647_replaceBinding,"Controls","replaceBinding",0x45096449,"Controls.replaceBinding","Controls.hx",647,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_668_copyFrom,"Controls","copyFrom",0xdf1da497,"Controls.copyFrom","Controls.hx",668,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_715_copyTo,"Controls","copyTo",0xdf5b4f68,"Controls.copyTo","Controls.hx",715,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_720_mergeKeyboardScheme,"Controls","mergeKeyboardScheme",0x61e2372c,"Controls.mergeKeyboardScheme","Controls.hx",720,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_735_bindKeys,"Controls","bindKeys",0xcb8dbf29,"Controls.bindKeys","Controls.hx",735,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_744_unbindKeys,"Controls","unbindKeys",0xec4b8c82,"Controls.unbindKeys","Controls.hx",744,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_769_setKeyboardScheme,"Controls","setKeyboardScheme",0x039bdb96,"Controls.setKeyboardScheme","Controls.hx",769,0x0ab041e8)
static const int _hx_array_data_116e4296_1092[] = {
	(int)87,
};
static const int _hx_array_data_116e4296_1093[] = {
	(int)83,
};
static const int _hx_array_data_116e4296_1094[] = {
	(int)65,
};
static const int _hx_array_data_116e4296_1095[] = {
	(int)68,
};
static const int _hx_array_data_116e4296_1096[] = {
	(int)87,
};
static const int _hx_array_data_116e4296_1097[] = {
	(int)83,
};
static const int _hx_array_data_116e4296_1098[] = {
	(int)65,
};
static const int _hx_array_data_116e4296_1099[] = {
	(int)68,
};
static const int _hx_array_data_116e4296_1100[] = {
	(int)71,(int)90,
};
static const int _hx_array_data_116e4296_1101[] = {
	(int)72,(int)88,
};
static const int _hx_array_data_116e4296_1102[] = {
	(int)49,
};
static const int _hx_array_data_116e4296_1103[] = {
	(int)82,
};
static const int _hx_array_data_116e4296_1104[] = {
	(int)38,
};
static const int _hx_array_data_116e4296_1105[] = {
	(int)40,
};
static const int _hx_array_data_116e4296_1106[] = {
	(int)37,
};
static const int _hx_array_data_116e4296_1107[] = {
	(int)39,
};
static const int _hx_array_data_116e4296_1108[] = {
	(int)38,
};
static const int _hx_array_data_116e4296_1109[] = {
	(int)40,
};
static const int _hx_array_data_116e4296_1110[] = {
	(int)37,
};
static const int _hx_array_data_116e4296_1111[] = {
	(int)39,
};
static const int _hx_array_data_116e4296_1112[] = {
	(int)79,
};
static const int _hx_array_data_116e4296_1113[] = {
	(int)80,
};
static const int _hx_array_data_116e4296_1114[] = {
	(int)13,
};
static const int _hx_array_data_116e4296_1115[] = {
	(int)8,
};
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_872_removeKeyboard,"Controls","removeKeyboard",0xd2dac3e3,"Controls.removeKeyboard","Controls.hx",872,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_885_addGamepad,"Controls","addGamepad",0xa2c68b58,"Controls.addGamepad","Controls.hx",885,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_898_addGamepadLiteral,"Controls","addGamepadLiteral",0x50b4e0f7,"Controls.addGamepadLiteral","Controls.hx",898,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_911_removeGamepad,"Controls","removeGamepad",0xfdf294e5,"Controls.removeGamepad","Controls.hx",911,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_929_addDefaultGamepad,"Controls","addDefaultGamepad",0xaa5e6409,"Controls.addDefaultGamepad","Controls.hx",929,0x0ab041e8)
static const int _hx_array_data_116e4296_1212[] = {
	(int)0,
};
static const int _hx_array_data_116e4296_1213[] = {
	(int)1,
};
static const int _hx_array_data_116e4296_1214[] = {
	(int)11,(int)34,
};
static const int _hx_array_data_116e4296_1215[] = {
	(int)12,(int)36,
};
static const int _hx_array_data_116e4296_1216[] = {
	(int)13,(int)37,
};
static const int _hx_array_data_116e4296_1217[] = {
	(int)14,(int)35,
};
static const int _hx_array_data_116e4296_1218[] = {
	(int)11,(int)34,
};
static const int _hx_array_data_116e4296_1219[] = {
	(int)12,(int)36,
};
static const int _hx_array_data_116e4296_1220[] = {
	(int)13,(int)37,
};
static const int _hx_array_data_116e4296_1221[] = {
	(int)14,(int)35,
};
static const int _hx_array_data_116e4296_1222[] = {
	(int)7,
};
static const int _hx_array_data_116e4296_1223[] = {
	(int)3,
};
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_970_bindButtons,"Controls","bindButtons",0x94dee42c,"Controls.bindButtons","Controls.hx",970,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_983_unbindButtons,"Controls","unbindButtons",0x83d33473,"Controls.unbindButtons","Controls.hx",983,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_1007_getInputsFor,"Controls","getInputsFor",0xa3571ac2,"Controls.getInputsFor","Controls.hx",1007,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_1031_removeDevice,"Controls","removeDevice",0x4c1b5cd2,"Controls.removeDevice","Controls.hx",1031,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_588_init,"Controls","init",0x495487e8,"Controls.init","Controls.hx",588,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_752_addKeys,"Controls","addKeys",0xd0486edd,"Controls.addKeys","Controls.hx",752,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_758_removeKeys,"Controls","removeKeys",0x75dc9b30,"Controls.removeKeys","Controls.hx",758,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_991_addButtons,"Controls","addButtons",0xe3b5fcf8,"Controls.addButtons","Controls.hx",991,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_996_removeButtons,"Controls","removeButtons",0x3ee20685,"Controls.removeButtons","Controls.hx",996,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_1042_isDevice,"Controls","isDevice",0xe09e10f8,"Controls.isDevice","Controls.hx",1042,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_1051_isGamepad,"Controls","isGamepad",0x5bcd81ff,"Controls.isGamepad","Controls.hx",1051,0x0ab041e8)

void Controls_obj::__construct(::String name, ::KeyboardScheme __o_scheme){
            		 ::KeyboardScheme scheme = __o_scheme;
            		if (::hx::IsNull(__o_scheme)) scheme = ::KeyboardScheme_obj::None_dyn();
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_124_new)
HXLINE( 387)		this->trackedinputsNOTES = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 386)		this->trackedinputsUI = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 162)		this->keyboardScheme = ::KeyboardScheme_obj::None_dyn();
HXLINE( 161)		this->gamepadsAdded = ::Array_obj< int >::__new(0);
HXLINE( 156)		this->byName =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 153)		this->_reset =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("reset",cf,49,c8,e6),null());
HXLINE( 152)		this->_pause =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("pause",f6,d6,57,bd),null());
HXLINE( 151)		this->_back =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("back",27,da,10,41),null());
HXLINE( 150)		this->_accept =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("accept",08,93,06,0b),null());
HXLINE( 149)		this->_note_downR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_down-release",49,ab,d6,d1),null());
HXLINE( 148)		this->_note_rightR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_right-release",c9,28,3c,f1),null());
HXLINE( 147)		this->_note_leftR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_left-release",ee,67,d8,03),null());
HXLINE( 146)		this->_note_upR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_up-release",02,05,01,5e),null());
HXLINE( 145)		this->_note_downP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_down-press",85,b4,95,9a),null());
HXLINE( 144)		this->_note_rightP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_right-press",05,d2,d8,4c),null());
HXLINE( 143)		this->_note_leftP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_left-press",ea,8d,a2,8c),null());
HXLINE( 142)		this->_note_upP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_up-press",fe,fd,7f,20),null());
HXLINE( 141)		this->_note_down =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_down",0f,ef,de,9f),null());
HXLINE( 140)		this->_note_right =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_right",8f,ec,ca,4e),null());
HXLINE( 139)		this->_note_left =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_left",b4,fe,20,a5),null());
HXLINE( 138)		this->_note_up =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("note_up",c8,67,5c,4d),null());
HXLINE( 137)		this->_ui_downR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_down-release",a7,87,e1,ce),null());
HXLINE( 136)		this->_ui_rightR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_right-release",ab,1e,b2,5d),null());
HXLINE( 135)		this->_ui_leftR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_left-release",4c,44,e3,00),null());
HXLINE( 134)		this->_ui_upR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_up-release",e0,6d,79,3d),null());
HXLINE( 133)		this->_ui_downP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_down-press",63,1d,0e,7a),null());
HXLINE( 132)		this->_ui_rightP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_right-press",67,2b,bc,f6),null());
HXLINE( 131)		this->_ui_leftP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_left-press",c8,f6,1a,6c),null());
HXLINE( 130)		this->_ui_upP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_up-press",5c,d3,d1,27),null());
HXLINE( 129)		this->_ui_down =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_down",6d,3d,47,f2),null());
HXLINE( 128)		this->_ui_right =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_right",71,30,a7,17),null());
HXLINE( 127)		this->_ui_left =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_left",12,4d,89,f7),null());
HXLINE( 126)		this->_ui_up =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("ui_up",a6,c2,91,a3),null());
HXLINE( 307)		super::__construct(name,null(),null());
HXLINE( 309)		this->add(this->_ui_up);
HXLINE( 310)		this->add(this->_ui_left);
HXLINE( 311)		this->add(this->_ui_right);
HXLINE( 312)		this->add(this->_ui_down);
HXLINE( 313)		this->add(this->_ui_upP);
HXLINE( 314)		this->add(this->_ui_leftP);
HXLINE( 315)		this->add(this->_ui_rightP);
HXLINE( 316)		this->add(this->_ui_downP);
HXLINE( 317)		this->add(this->_ui_upR);
HXLINE( 318)		this->add(this->_ui_leftR);
HXLINE( 319)		this->add(this->_ui_rightR);
HXLINE( 320)		this->add(this->_ui_downR);
HXLINE( 321)		this->add(this->_note_up);
HXLINE( 322)		this->add(this->_note_left);
HXLINE( 323)		this->add(this->_note_right);
HXLINE( 324)		this->add(this->_note_down);
HXLINE( 325)		this->add(this->_note_upP);
HXLINE( 326)		this->add(this->_note_leftP);
HXLINE( 327)		this->add(this->_note_rightP);
HXLINE( 328)		this->add(this->_note_downP);
HXLINE( 329)		this->add(this->_note_upR);
HXLINE( 330)		this->add(this->_note_leftR);
HXLINE( 331)		this->add(this->_note_rightR);
HXLINE( 332)		this->add(this->_note_downR);
HXLINE( 333)		this->add(this->_accept);
HXLINE( 334)		this->add(this->_back);
HXLINE( 335)		this->add(this->_pause);
HXLINE( 336)		this->add(this->_reset);
HXLINE( 338)		{
HXLINE( 338)			int _g = 0;
HXDLIN( 338)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 338)			while((_g < _g1->length)){
HXLINE( 338)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 338)				_g = (_g + 1);
HXLINE( 339)				this->byName->set(action->name,action);
            			}
            		}
HXLINE( 341)		this->setKeyboardScheme(scheme,false);
            	}

Dynamic Controls_obj::__CreateEmpty() { return new Controls_obj; }

void *Controls_obj::_hx_vtable = 0;

Dynamic Controls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Controls_obj > _hx_result = new Controls_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Controls_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x315ddd0d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x315ddd0d;
	} else {
		return inClassId==(int)0x6cff3556;
	}
}

bool Controls_obj::get_UI_UP(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_167_get_UI_UP)
HXDLIN( 167)		return this->_ui_up->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_UP,return )

bool Controls_obj::get_UI_LEFT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_172_get_UI_LEFT)
HXDLIN( 172)		return this->_ui_left->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_LEFT,return )

bool Controls_obj::get_UI_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_177_get_UI_RIGHT)
HXDLIN( 177)		return this->_ui_right->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_RIGHT,return )

bool Controls_obj::get_UI_DOWN(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_182_get_UI_DOWN)
HXDLIN( 182)		return this->_ui_down->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_DOWN,return )

bool Controls_obj::get_UI_UP_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_187_get_UI_UP_P)
HXDLIN( 187)		return this->_ui_upP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_UP_P,return )

bool Controls_obj::get_UI_LEFT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_192_get_UI_LEFT_P)
HXDLIN( 192)		return this->_ui_leftP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_LEFT_P,return )

bool Controls_obj::get_UI_RIGHT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_197_get_UI_RIGHT_P)
HXDLIN( 197)		return this->_ui_rightP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_RIGHT_P,return )

bool Controls_obj::get_UI_DOWN_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_202_get_UI_DOWN_P)
HXDLIN( 202)		return this->_ui_downP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_DOWN_P,return )

bool Controls_obj::get_UI_UP_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_207_get_UI_UP_R)
HXDLIN( 207)		return this->_ui_upR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_UP_R,return )

bool Controls_obj::get_UI_LEFT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_212_get_UI_LEFT_R)
HXDLIN( 212)		return this->_ui_leftR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_LEFT_R,return )

bool Controls_obj::get_UI_RIGHT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_217_get_UI_RIGHT_R)
HXDLIN( 217)		return this->_ui_rightR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_RIGHT_R,return )

bool Controls_obj::get_UI_DOWN_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_222_get_UI_DOWN_R)
HXDLIN( 222)		return this->_ui_downR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UI_DOWN_R,return )

bool Controls_obj::get_NOTE_UP(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_227_get_NOTE_UP)
HXDLIN( 227)		return this->_note_up->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP,return )

bool Controls_obj::get_NOTE_LEFT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_232_get_NOTE_LEFT)
HXDLIN( 232)		return this->_note_left->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT,return )

bool Controls_obj::get_NOTE_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_237_get_NOTE_RIGHT)
HXDLIN( 237)		return this->_note_right->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT,return )

bool Controls_obj::get_NOTE_DOWN(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_242_get_NOTE_DOWN)
HXDLIN( 242)		return this->_note_down->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN,return )

bool Controls_obj::get_NOTE_UP_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_247_get_NOTE_UP_P)
HXDLIN( 247)		return this->_note_upP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP_P,return )

bool Controls_obj::get_NOTE_LEFT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_252_get_NOTE_LEFT_P)
HXDLIN( 252)		return this->_note_leftP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT_P,return )

bool Controls_obj::get_NOTE_RIGHT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_257_get_NOTE_RIGHT_P)
HXDLIN( 257)		return this->_note_rightP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT_P,return )

bool Controls_obj::get_NOTE_DOWN_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_262_get_NOTE_DOWN_P)
HXDLIN( 262)		return this->_note_downP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN_P,return )

bool Controls_obj::get_NOTE_UP_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_267_get_NOTE_UP_R)
HXDLIN( 267)		return this->_note_upR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_UP_R,return )

bool Controls_obj::get_NOTE_LEFT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_272_get_NOTE_LEFT_R)
HXDLIN( 272)		return this->_note_leftR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_LEFT_R,return )

bool Controls_obj::get_NOTE_RIGHT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_277_get_NOTE_RIGHT_R)
HXDLIN( 277)		return this->_note_rightR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_RIGHT_R,return )

bool Controls_obj::get_NOTE_DOWN_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_282_get_NOTE_DOWN_R)
HXDLIN( 282)		return this->_note_downR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_NOTE_DOWN_R,return )

bool Controls_obj::get_ACCEPT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_287_get_ACCEPT)
HXDLIN( 287)		return this->_accept->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_ACCEPT,return )

bool Controls_obj::get_BACK(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_292_get_BACK)
HXDLIN( 292)		return this->_back->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_BACK,return )

bool Controls_obj::get_PAUSE(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_297_get_PAUSE)
HXDLIN( 297)		return this->_pause->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_PAUSE,return )

bool Controls_obj::get_RESET(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_302_get_RESET)
HXDLIN( 302)		return this->_reset->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RESET,return )

void Controls_obj::addbuttonuNOTES( ::flixel::input::actions::FlxActionDigital action, ::flixel::ui::FlxButton button,int state){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_390_addbuttonuNOTES)
HXLINE( 391)		 ::flixel::input::actions::FlxActionInputDigitalIFlxInput input =  ::flixel::input::actions::FlxActionInputDigitalIFlxInput_obj::__alloc( HX_CTX ,button,state);
HXLINE( 392)		this->trackedinputsNOTES->push(input);
HXLINE( 394)		action->add(input);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,addbuttonuNOTES,(void))

void Controls_obj::setHitBoxNOTES( ::ui::Hitbox hitbox){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_398_setHitBoxNOTES)
HXDLIN( 398)		 ::Controls _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 399)		switch((int)(::Control_obj::NOTE_UP_dyn()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_ui_up,hitbox->buttonUp,1);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_ui_upP,hitbox->buttonUp,2);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_ui_upR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_ui_left,hitbox->buttonUp,1);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_ui_leftP,hitbox->buttonUp,2);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_ui_leftR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_ui_right,hitbox->buttonUp,1);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_ui_rightP,hitbox->buttonUp,2);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_ui_rightR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_ui_down,hitbox->buttonUp,1);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_ui_downP,hitbox->buttonUp,2);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_ui_downR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_note_up,hitbox->buttonUp,1);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_note_upP,hitbox->buttonUp,2);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_note_upR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_note_left,hitbox->buttonUp,1);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_note_leftP,hitbox->buttonUp,2);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_note_leftR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)6: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_note_right,hitbox->buttonUp,1);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_note_rightP,hitbox->buttonUp,2);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_note_rightR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)7: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_note_down,hitbox->buttonUp,1);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_note_downP,hitbox->buttonUp,2);
HXDLIN( 399)				_gthis->addbuttonuNOTES(this->_note_downR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)8: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_reset,hitbox->buttonUp,2);
            			}
            			break;
            			case (int)9: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_accept,hitbox->buttonUp,2);
            			}
            			break;
            			case (int)10: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_back,hitbox->buttonUp,2);
            			}
            			break;
            			case (int)11: {
HXLINE( 399)				_gthis->addbuttonuNOTES(this->_pause,hitbox->buttonUp,2);
            			}
            			break;
            		}
HXLINE( 400)		switch((int)(::Control_obj::NOTE_DOWN_dyn()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_ui_up,hitbox->buttonDown,1);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_ui_upP,hitbox->buttonDown,2);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_ui_upR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_ui_left,hitbox->buttonDown,1);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_ui_leftP,hitbox->buttonDown,2);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_ui_leftR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_ui_right,hitbox->buttonDown,1);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_ui_rightP,hitbox->buttonDown,2);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_ui_rightR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_ui_down,hitbox->buttonDown,1);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_ui_downP,hitbox->buttonDown,2);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_ui_downR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_note_up,hitbox->buttonDown,1);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_note_upP,hitbox->buttonDown,2);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_note_upR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_note_left,hitbox->buttonDown,1);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_note_leftP,hitbox->buttonDown,2);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_note_leftR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)6: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_note_right,hitbox->buttonDown,1);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_note_rightP,hitbox->buttonDown,2);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_note_rightR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)7: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_note_down,hitbox->buttonDown,1);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_note_downP,hitbox->buttonDown,2);
HXDLIN( 400)				_gthis->addbuttonuNOTES(this->_note_downR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)8: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_reset,hitbox->buttonDown,2);
            			}
            			break;
            			case (int)9: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_accept,hitbox->buttonDown,2);
            			}
            			break;
            			case (int)10: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_back,hitbox->buttonDown,2);
            			}
            			break;
            			case (int)11: {
HXLINE( 400)				_gthis->addbuttonuNOTES(this->_pause,hitbox->buttonDown,2);
            			}
            			break;
            		}
HXLINE( 401)		switch((int)(::Control_obj::NOTE_LEFT_dyn()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_ui_up,hitbox->buttonLeft,1);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_ui_upP,hitbox->buttonLeft,2);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_ui_upR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_ui_left,hitbox->buttonLeft,1);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_ui_leftP,hitbox->buttonLeft,2);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_ui_leftR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_ui_right,hitbox->buttonLeft,1);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_ui_rightP,hitbox->buttonLeft,2);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_ui_rightR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_ui_down,hitbox->buttonLeft,1);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_ui_downP,hitbox->buttonLeft,2);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_ui_downR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_note_up,hitbox->buttonLeft,1);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_note_upP,hitbox->buttonLeft,2);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_note_upR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_note_left,hitbox->buttonLeft,1);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_note_leftP,hitbox->buttonLeft,2);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_note_leftR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)6: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_note_right,hitbox->buttonLeft,1);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_note_rightP,hitbox->buttonLeft,2);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_note_rightR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)7: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_note_down,hitbox->buttonLeft,1);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_note_downP,hitbox->buttonLeft,2);
HXDLIN( 401)				_gthis->addbuttonuNOTES(this->_note_downR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)8: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_reset,hitbox->buttonLeft,2);
            			}
            			break;
            			case (int)9: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_accept,hitbox->buttonLeft,2);
            			}
            			break;
            			case (int)10: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_back,hitbox->buttonLeft,2);
            			}
            			break;
            			case (int)11: {
HXLINE( 401)				_gthis->addbuttonuNOTES(this->_pause,hitbox->buttonLeft,2);
            			}
            			break;
            		}
HXLINE( 402)		switch((int)(::Control_obj::NOTE_RIGHT_dyn()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_ui_up,hitbox->buttonRight,1);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_ui_upP,hitbox->buttonRight,2);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_ui_upR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_ui_left,hitbox->buttonRight,1);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_ui_leftP,hitbox->buttonRight,2);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_ui_leftR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_ui_right,hitbox->buttonRight,1);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_ui_rightP,hitbox->buttonRight,2);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_ui_rightR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_ui_down,hitbox->buttonRight,1);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_ui_downP,hitbox->buttonRight,2);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_ui_downR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_note_up,hitbox->buttonRight,1);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_note_upP,hitbox->buttonRight,2);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_note_upR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_note_left,hitbox->buttonRight,1);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_note_leftP,hitbox->buttonRight,2);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_note_leftR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)6: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_note_right,hitbox->buttonRight,1);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_note_rightP,hitbox->buttonRight,2);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_note_rightR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)7: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_note_down,hitbox->buttonRight,1);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_note_downP,hitbox->buttonRight,2);
HXDLIN( 402)				_gthis->addbuttonuNOTES(this->_note_downR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)8: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_reset,hitbox->buttonRight,2);
            			}
            			break;
            			case (int)9: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_accept,hitbox->buttonRight,2);
            			}
            			break;
            			case (int)10: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_back,hitbox->buttonRight,2);
            			}
            			break;
            			case (int)11: {
HXLINE( 402)				_gthis->addbuttonuNOTES(this->_pause,hitbox->buttonRight,2);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,setHitBoxNOTES,(void))

void Controls_obj::setVirtualPadNOTES( ::ui::FlxVirtualPad virtualPad, ::ui::FlxDPadMode DPad, ::ui::FlxActionMode Action){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_406_setVirtualPadNOTES)
HXDLIN( 406)		 ::Controls _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 407)		if (::hx::IsNull( DPad )) {
HXLINE( 408)			DPad = ::ui::FlxDPadMode_obj::NONE_dyn();
            		}
HXLINE( 409)		if (::hx::IsNull( Action )) {
HXLINE( 410)			Action = ::ui::FlxActionMode_obj::NONE_dyn();
            		}
HXLINE( 412)		switch((int)(DPad->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE( 415)				switch((int)(::Control_obj::NOTE_UP_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonUp,1);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonUp,2);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonUp,1);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonUp,2);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonUp,1);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonUp,2);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonUp,1);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonUp,2);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonUp,1);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonUp,2);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonUp,1);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonUp,2);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonUp,1);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonUp,2);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonUp,1);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonUp,2);
HXDLIN( 415)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 415)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonUp,2);
            					}
            					break;
            				}
HXLINE( 416)				switch((int)(::Control_obj::NOTE_DOWN_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonDown,1);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonDown,2);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonDown,1);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonDown,2);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonDown,1);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonDown,2);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonDown,1);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonDown,2);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonDown,1);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonDown,2);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonDown,1);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonDown,2);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonDown,1);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonDown,2);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonDown,1);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonDown,2);
HXDLIN( 416)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 416)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonDown,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 418)				switch((int)(::Control_obj::NOTE_LEFT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonLeft,1);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonLeft,2);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonLeft,1);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonLeft,2);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonLeft,1);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonLeft,2);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonLeft,1);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonLeft,2);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonLeft,1);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonLeft,2);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonLeft,1);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonLeft,2);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonLeft,1);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonLeft,2);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonLeft,1);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonLeft,2);
HXDLIN( 418)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 418)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonLeft,2);
            					}
            					break;
            				}
HXLINE( 419)				switch((int)(::Control_obj::NOTE_RIGHT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonRight,1);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonRight,2);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonRight,1);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonRight,2);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonRight,1);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonRight,2);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonRight,1);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonRight,2);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonRight,1);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonRight,2);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonRight,1);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonRight,2);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonRight,1);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonRight,2);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonRight,1);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonRight,2);
HXDLIN( 419)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 419)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonRight,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 421)				switch((int)(::Control_obj::NOTE_UP_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonUp,1);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonUp,2);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonUp,1);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonUp,2);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonUp,1);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonUp,2);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonUp,1);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonUp,2);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonUp,1);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonUp,2);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonUp,1);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonUp,2);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonUp,1);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonUp,2);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonUp,1);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonUp,2);
HXDLIN( 421)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 421)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonUp,2);
            					}
            					break;
            				}
HXLINE( 422)				switch((int)(::Control_obj::NOTE_LEFT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonLeft,1);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonLeft,2);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonLeft,1);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonLeft,2);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonLeft,1);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonLeft,2);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonLeft,1);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonLeft,2);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonLeft,1);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonLeft,2);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonLeft,1);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonLeft,2);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonLeft,1);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonLeft,2);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonLeft,1);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonLeft,2);
HXDLIN( 422)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 422)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonLeft,2);
            					}
            					break;
            				}
HXLINE( 423)				switch((int)(::Control_obj::NOTE_RIGHT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonRight,1);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonRight,2);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonRight,1);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonRight,2);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonRight,1);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonRight,2);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonRight,1);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonRight,2);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonRight,1);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonRight,2);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonRight,1);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonRight,2);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonRight,1);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonRight,2);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonRight,1);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonRight,2);
HXDLIN( 423)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 423)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonRight,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)4: case (int)5: {
HXLINE( 425)				switch((int)(::Control_obj::NOTE_UP_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonUp,1);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonUp,2);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonUp,1);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonUp,2);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonUp,1);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonUp,2);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonUp,1);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonUp,2);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonUp,1);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonUp,2);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonUp,1);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonUp,2);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonUp,1);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonUp,2);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonUp,1);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonUp,2);
HXDLIN( 425)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 425)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonUp,2);
            					}
            					break;
            				}
HXLINE( 426)				switch((int)(::Control_obj::NOTE_DOWN_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonDown,1);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonDown,2);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonDown,1);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonDown,2);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonDown,1);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonDown,2);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonDown,1);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonDown,2);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonDown,1);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonDown,2);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonDown,1);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonDown,2);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonDown,1);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonDown,2);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonDown,1);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonDown,2);
HXDLIN( 426)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 426)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonDown,2);
            					}
            					break;
            				}
HXLINE( 427)				switch((int)(::Control_obj::NOTE_LEFT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonLeft,1);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonLeft,2);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonLeft,1);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonLeft,2);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonLeft,1);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonLeft,2);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonLeft,1);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonLeft,2);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonLeft,1);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonLeft,2);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonLeft,1);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonLeft,2);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonLeft,1);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonLeft,2);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonLeft,1);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonLeft,2);
HXDLIN( 427)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 427)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonLeft,2);
            					}
            					break;
            				}
HXLINE( 428)				switch((int)(::Control_obj::NOTE_RIGHT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonRight,1);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonRight,2);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonRight,1);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonRight,2);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonRight,1);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonRight,2);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonRight,1);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonRight,2);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonRight,1);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonRight,2);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonRight,1);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonRight,2);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonRight,1);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonRight,2);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonRight,1);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonRight,2);
HXDLIN( 428)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 428)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonRight,2);
            					}
            					break;
            				}
            			}
            			break;
            		}
HXLINE( 433)		switch((int)(Action->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE( 436)				switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonA,1);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonA,2);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonA,1);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonA,2);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonA,1);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonA,2);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonA,1);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonA,2);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonA,1);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonA,2);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonA,1);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonA,2);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonA,1);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonA,2);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonA,1);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonA,2);
HXDLIN( 436)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 436)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonA,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 438)				switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonB,1);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonB,2);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonB,1);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonB,2);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonB,1);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonB,2);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonB,1);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonB,2);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonB,1);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonB,2);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonB,1);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonB,2);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonB,1);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonB,2);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonB,1);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonB,2);
HXDLIN( 438)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 438)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonB,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 440)				switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonA,1);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonA,2);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonA,1);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonA,2);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonA,1);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonA,2);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonA,1);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonA,2);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonA,1);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonA,2);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonA,1);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonA,2);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonA,1);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonA,2);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonA,1);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonA,2);
HXDLIN( 440)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 440)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonA,2);
            					}
            					break;
            				}
HXLINE( 441)				switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonB,1);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonB,2);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonB,1);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonB,2);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonB,1);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonB,2);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonB,1);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonB,2);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonB,1);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonB,2);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonB,1);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonB,2);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonB,1);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonB,2);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonB,1);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonB,2);
HXDLIN( 441)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 441)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonB,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 443)				switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonA,1);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonA,2);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonA,1);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonA,2);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonA,1);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonA,2);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonA,1);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonA,2);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonA,1);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonA,2);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonA,1);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonA,2);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonA,1);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonA,2);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonA,1);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonA,2);
HXDLIN( 443)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 443)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonA,2);
            					}
            					break;
            				}
HXLINE( 444)				switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonB,1);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonB,2);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonB,1);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonB,2);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonB,1);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonB,2);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonB,1);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonB,2);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonB,1);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonB,2);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonB,1);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonB,2);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonB,1);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonB,2);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonB,1);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonB,2);
HXDLIN( 444)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 444)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonB,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 446)				switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonA,1);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonA,2);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonA,1);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonA,2);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonA,1);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonA,2);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonA,1);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonA,2);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonA,1);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonA,2);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonA,1);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonA,2);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonA,1);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonA,2);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonA,1);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonA,2);
HXDLIN( 446)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 446)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonA,2);
            					}
            					break;
            				}
HXLINE( 447)				switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_ui_up,virtualPad->buttonB,1);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_ui_upP,virtualPad->buttonB,2);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_ui_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_ui_left,virtualPad->buttonB,1);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_ui_leftP,virtualPad->buttonB,2);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_ui_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_ui_right,virtualPad->buttonB,1);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_ui_rightP,virtualPad->buttonB,2);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_ui_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_ui_down,virtualPad->buttonB,1);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_ui_downP,virtualPad->buttonB,2);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_ui_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_note_up,virtualPad->buttonB,1);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_note_upP,virtualPad->buttonB,2);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_note_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_note_left,virtualPad->buttonB,1);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_note_leftP,virtualPad->buttonB,2);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_note_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_note_right,virtualPad->buttonB,1);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_note_rightP,virtualPad->buttonB,2);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_note_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_note_down,virtualPad->buttonB,1);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_note_downP,virtualPad->buttonB,2);
HXDLIN( 447)						_gthis->addbuttonuNOTES(this->_note_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_reset,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_accept,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_back,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 447)						_gthis->addbuttonuNOTES(this->_pause,virtualPad->buttonB,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)6: {
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,setVirtualPadNOTES,(void))

void Controls_obj::addbuttonuUI( ::flixel::input::actions::FlxActionDigital action, ::flixel::ui::FlxButton button,int state){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_455_addbuttonuUI)
HXLINE( 456)		 ::flixel::input::actions::FlxActionInputDigitalIFlxInput input =  ::flixel::input::actions::FlxActionInputDigitalIFlxInput_obj::__alloc( HX_CTX ,button,state);
HXLINE( 457)		this->trackedinputsUI->push(input);
HXLINE( 459)		action->add(input);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,addbuttonuUI,(void))

void Controls_obj::setHitBoxUI( ::ui::Hitbox hitbox){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_463_setHitBoxUI)
HXDLIN( 463)		 ::Controls _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 464)		switch((int)(::Control_obj::UI_UP_dyn()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_ui_up,hitbox->buttonUp,1);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_ui_upP,hitbox->buttonUp,2);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_ui_upR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_ui_left,hitbox->buttonUp,1);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_ui_leftP,hitbox->buttonUp,2);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_ui_leftR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_ui_right,hitbox->buttonUp,1);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_ui_rightP,hitbox->buttonUp,2);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_ui_rightR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_ui_down,hitbox->buttonUp,1);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_ui_downP,hitbox->buttonUp,2);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_ui_downR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_note_up,hitbox->buttonUp,1);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_note_upP,hitbox->buttonUp,2);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_note_upR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_note_left,hitbox->buttonUp,1);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_note_leftP,hitbox->buttonUp,2);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_note_leftR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)6: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_note_right,hitbox->buttonUp,1);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_note_rightP,hitbox->buttonUp,2);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_note_rightR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)7: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_note_down,hitbox->buttonUp,1);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_note_downP,hitbox->buttonUp,2);
HXDLIN( 464)				_gthis->addbuttonuUI(this->_note_downR,hitbox->buttonUp,-1);
            			}
            			break;
            			case (int)8: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_reset,hitbox->buttonUp,2);
            			}
            			break;
            			case (int)9: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_accept,hitbox->buttonUp,2);
            			}
            			break;
            			case (int)10: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_back,hitbox->buttonUp,2);
            			}
            			break;
            			case (int)11: {
HXLINE( 464)				_gthis->addbuttonuUI(this->_pause,hitbox->buttonUp,2);
            			}
            			break;
            		}
HXLINE( 465)		switch((int)(::Control_obj::UI_DOWN_dyn()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_ui_up,hitbox->buttonDown,1);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_ui_upP,hitbox->buttonDown,2);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_ui_upR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_ui_left,hitbox->buttonDown,1);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_ui_leftP,hitbox->buttonDown,2);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_ui_leftR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_ui_right,hitbox->buttonDown,1);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_ui_rightP,hitbox->buttonDown,2);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_ui_rightR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_ui_down,hitbox->buttonDown,1);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_ui_downP,hitbox->buttonDown,2);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_ui_downR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_note_up,hitbox->buttonDown,1);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_note_upP,hitbox->buttonDown,2);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_note_upR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_note_left,hitbox->buttonDown,1);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_note_leftP,hitbox->buttonDown,2);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_note_leftR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)6: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_note_right,hitbox->buttonDown,1);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_note_rightP,hitbox->buttonDown,2);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_note_rightR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)7: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_note_down,hitbox->buttonDown,1);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_note_downP,hitbox->buttonDown,2);
HXDLIN( 465)				_gthis->addbuttonuUI(this->_note_downR,hitbox->buttonDown,-1);
            			}
            			break;
            			case (int)8: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_reset,hitbox->buttonDown,2);
            			}
            			break;
            			case (int)9: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_accept,hitbox->buttonDown,2);
            			}
            			break;
            			case (int)10: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_back,hitbox->buttonDown,2);
            			}
            			break;
            			case (int)11: {
HXLINE( 465)				_gthis->addbuttonuUI(this->_pause,hitbox->buttonDown,2);
            			}
            			break;
            		}
HXLINE( 466)		switch((int)(::Control_obj::UI_LEFT_dyn()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_ui_up,hitbox->buttonLeft,1);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_ui_upP,hitbox->buttonLeft,2);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_ui_upR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_ui_left,hitbox->buttonLeft,1);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_ui_leftP,hitbox->buttonLeft,2);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_ui_leftR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_ui_right,hitbox->buttonLeft,1);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_ui_rightP,hitbox->buttonLeft,2);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_ui_rightR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_ui_down,hitbox->buttonLeft,1);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_ui_downP,hitbox->buttonLeft,2);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_ui_downR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_note_up,hitbox->buttonLeft,1);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_note_upP,hitbox->buttonLeft,2);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_note_upR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_note_left,hitbox->buttonLeft,1);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_note_leftP,hitbox->buttonLeft,2);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_note_leftR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)6: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_note_right,hitbox->buttonLeft,1);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_note_rightP,hitbox->buttonLeft,2);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_note_rightR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)7: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_note_down,hitbox->buttonLeft,1);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_note_downP,hitbox->buttonLeft,2);
HXDLIN( 466)				_gthis->addbuttonuUI(this->_note_downR,hitbox->buttonLeft,-1);
            			}
            			break;
            			case (int)8: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_reset,hitbox->buttonLeft,2);
            			}
            			break;
            			case (int)9: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_accept,hitbox->buttonLeft,2);
            			}
            			break;
            			case (int)10: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_back,hitbox->buttonLeft,2);
            			}
            			break;
            			case (int)11: {
HXLINE( 466)				_gthis->addbuttonuUI(this->_pause,hitbox->buttonLeft,2);
            			}
            			break;
            		}
HXLINE( 467)		switch((int)(::Control_obj::UI_RIGHT_dyn()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_ui_up,hitbox->buttonRight,1);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_ui_upP,hitbox->buttonRight,2);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_ui_upR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_ui_left,hitbox->buttonRight,1);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_ui_leftP,hitbox->buttonRight,2);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_ui_leftR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_ui_right,hitbox->buttonRight,1);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_ui_rightP,hitbox->buttonRight,2);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_ui_rightR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_ui_down,hitbox->buttonRight,1);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_ui_downP,hitbox->buttonRight,2);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_ui_downR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_note_up,hitbox->buttonRight,1);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_note_upP,hitbox->buttonRight,2);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_note_upR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_note_left,hitbox->buttonRight,1);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_note_leftP,hitbox->buttonRight,2);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_note_leftR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)6: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_note_right,hitbox->buttonRight,1);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_note_rightP,hitbox->buttonRight,2);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_note_rightR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)7: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_note_down,hitbox->buttonRight,1);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_note_downP,hitbox->buttonRight,2);
HXDLIN( 467)				_gthis->addbuttonuUI(this->_note_downR,hitbox->buttonRight,-1);
            			}
            			break;
            			case (int)8: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_reset,hitbox->buttonRight,2);
            			}
            			break;
            			case (int)9: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_accept,hitbox->buttonRight,2);
            			}
            			break;
            			case (int)10: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_back,hitbox->buttonRight,2);
            			}
            			break;
            			case (int)11: {
HXLINE( 467)				_gthis->addbuttonuUI(this->_pause,hitbox->buttonRight,2);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,setHitBoxUI,(void))

void Controls_obj::setVirtualPadUI( ::ui::FlxVirtualPad virtualPad, ::ui::FlxDPadMode DPad, ::ui::FlxActionMode Action){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_471_setVirtualPadUI)
HXDLIN( 471)		 ::Controls _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 472)		if (::hx::IsNull( DPad )) {
HXLINE( 473)			DPad = ::ui::FlxDPadMode_obj::NONE_dyn();
            		}
HXLINE( 474)		if (::hx::IsNull( Action )) {
HXLINE( 475)			Action = ::ui::FlxActionMode_obj::NONE_dyn();
            		}
HXLINE( 477)		switch((int)(DPad->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE( 480)				switch((int)(::Control_obj::UI_UP_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonUp,1);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonUp,2);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonUp,1);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonUp,2);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonUp,1);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonUp,2);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonUp,1);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonUp,2);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonUp,1);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonUp,2);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonUp,1);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonUp,2);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonUp,1);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonUp,2);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonUp,1);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonUp,2);
HXDLIN( 480)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 480)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonUp,2);
            					}
            					break;
            				}
HXLINE( 481)				switch((int)(::Control_obj::UI_DOWN_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonDown,1);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonDown,2);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonDown,1);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonDown,2);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonDown,1);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonDown,2);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonDown,1);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonDown,2);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonDown,1);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonDown,2);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonDown,1);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonDown,2);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonDown,1);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonDown,2);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonDown,1);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonDown,2);
HXDLIN( 481)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 481)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonDown,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 483)				switch((int)(::Control_obj::UI_LEFT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonLeft,1);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonLeft,2);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonLeft,1);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonLeft,2);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonLeft,1);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonLeft,2);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonLeft,1);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonLeft,2);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonLeft,1);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonLeft,2);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonLeft,1);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonLeft,2);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonLeft,1);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonLeft,2);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonLeft,1);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonLeft,2);
HXDLIN( 483)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 483)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonLeft,2);
            					}
            					break;
            				}
HXLINE( 484)				switch((int)(::Control_obj::UI_RIGHT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonRight,1);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonRight,2);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonRight,1);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonRight,2);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonRight,1);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonRight,2);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonRight,1);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonRight,2);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonRight,1);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonRight,2);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonRight,1);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonRight,2);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonRight,1);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonRight,2);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonRight,1);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonRight,2);
HXDLIN( 484)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 484)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonRight,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 486)				switch((int)(::Control_obj::UI_UP_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonUp,1);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonUp,2);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonUp,1);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonUp,2);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonUp,1);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonUp,2);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonUp,1);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonUp,2);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonUp,1);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonUp,2);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonUp,1);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonUp,2);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonUp,1);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonUp,2);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonUp,1);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonUp,2);
HXDLIN( 486)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 486)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonUp,2);
            					}
            					break;
            				}
HXLINE( 487)				switch((int)(::Control_obj::UI_LEFT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonLeft,1);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonLeft,2);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonLeft,1);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonLeft,2);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonLeft,1);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonLeft,2);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonLeft,1);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonLeft,2);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonLeft,1);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonLeft,2);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonLeft,1);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonLeft,2);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonLeft,1);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonLeft,2);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonLeft,1);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonLeft,2);
HXDLIN( 487)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 487)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonLeft,2);
            					}
            					break;
            				}
HXLINE( 488)				switch((int)(::Control_obj::UI_RIGHT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonRight,1);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonRight,2);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonRight,1);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonRight,2);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonRight,1);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonRight,2);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonRight,1);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonRight,2);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonRight,1);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonRight,2);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonRight,1);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonRight,2);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonRight,1);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonRight,2);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonRight,1);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonRight,2);
HXDLIN( 488)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 488)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonRight,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)4: case (int)5: {
HXLINE( 490)				switch((int)(::Control_obj::UI_UP_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonUp,1);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonUp,2);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonUp,1);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonUp,2);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonUp,1);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonUp,2);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonUp,1);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonUp,2);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonUp,1);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonUp,2);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonUp,1);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonUp,2);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonUp,1);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonUp,2);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonUp,1);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonUp,2);
HXDLIN( 490)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonUp,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonUp,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 490)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonUp,2);
            					}
            					break;
            				}
HXLINE( 491)				switch((int)(::Control_obj::UI_DOWN_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonDown,1);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonDown,2);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonDown,1);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonDown,2);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonDown,1);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonDown,2);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonDown,1);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonDown,2);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonDown,1);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonDown,2);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonDown,1);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonDown,2);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonDown,1);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonDown,2);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonDown,1);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonDown,2);
HXDLIN( 491)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonDown,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonDown,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 491)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonDown,2);
            					}
            					break;
            				}
HXLINE( 492)				switch((int)(::Control_obj::UI_LEFT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonLeft,1);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonLeft,2);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonLeft,1);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonLeft,2);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonLeft,1);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonLeft,2);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonLeft,1);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonLeft,2);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonLeft,1);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonLeft,2);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonLeft,1);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonLeft,2);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonLeft,1);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonLeft,2);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonLeft,1);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonLeft,2);
HXDLIN( 492)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonLeft,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonLeft,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 492)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonLeft,2);
            					}
            					break;
            				}
HXLINE( 493)				switch((int)(::Control_obj::UI_RIGHT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonRight,1);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonRight,2);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonRight,1);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonRight,2);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonRight,1);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonRight,2);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonRight,1);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonRight,2);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonRight,1);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonRight,2);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonRight,1);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonRight,2);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonRight,1);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonRight,2);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonRight,1);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonRight,2);
HXDLIN( 493)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonRight,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonRight,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 493)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonRight,2);
            					}
            					break;
            				}
            			}
            			break;
            		}
HXLINE( 498)		switch((int)(Action->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE( 501)				switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonA,1);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonA,2);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonA,1);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonA,2);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonA,1);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonA,2);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonA,1);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonA,2);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonA,1);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonA,2);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonA,1);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonA,2);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonA,1);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonA,2);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonA,1);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonA,2);
HXDLIN( 501)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 501)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonA,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 503)				switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonB,1);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonB,2);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonB,1);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonB,2);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonB,1);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonB,2);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonB,1);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonB,2);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonB,1);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonB,2);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonB,1);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonB,2);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonB,1);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonB,2);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonB,1);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonB,2);
HXDLIN( 503)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 503)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonB,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 505)				switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonA,1);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonA,2);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonA,1);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonA,2);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonA,1);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonA,2);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonA,1);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonA,2);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonA,1);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonA,2);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonA,1);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonA,2);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonA,1);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonA,2);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonA,1);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonA,2);
HXDLIN( 505)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 505)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonA,2);
            					}
            					break;
            				}
HXLINE( 506)				switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonB,1);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonB,2);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonB,1);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonB,2);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonB,1);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonB,2);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonB,1);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonB,2);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonB,1);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonB,2);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonB,1);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonB,2);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonB,1);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonB,2);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonB,1);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonB,2);
HXDLIN( 506)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 506)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonB,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 508)				switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonA,1);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonA,2);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonA,1);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonA,2);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonA,1);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonA,2);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonA,1);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonA,2);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonA,1);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonA,2);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonA,1);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonA,2);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonA,1);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonA,2);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonA,1);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonA,2);
HXDLIN( 508)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 508)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonA,2);
            					}
            					break;
            				}
HXLINE( 509)				switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonB,1);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonB,2);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonB,1);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonB,2);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonB,1);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonB,2);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonB,1);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonB,2);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonB,1);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonB,2);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonB,1);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonB,2);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonB,1);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonB,2);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonB,1);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonB,2);
HXDLIN( 509)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 509)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonB,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 511)				switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonA,1);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonA,2);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonA,1);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonA,2);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonA,1);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonA,2);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonA,1);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonA,2);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonA,1);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonA,2);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonA,1);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonA,2);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonA,1);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonA,2);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonA,1);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonA,2);
HXDLIN( 511)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonA,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonA,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 511)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonA,2);
            					}
            					break;
            				}
HXLINE( 512)				switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_ui_up,virtualPad->buttonB,1);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_ui_upP,virtualPad->buttonB,2);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_ui_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)1: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_ui_left,virtualPad->buttonB,1);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_ui_leftP,virtualPad->buttonB,2);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_ui_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)2: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_ui_right,virtualPad->buttonB,1);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_ui_rightP,virtualPad->buttonB,2);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_ui_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)3: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_ui_down,virtualPad->buttonB,1);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_ui_downP,virtualPad->buttonB,2);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_ui_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)4: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_note_up,virtualPad->buttonB,1);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_note_upP,virtualPad->buttonB,2);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_note_upR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)5: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_note_left,virtualPad->buttonB,1);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_note_leftP,virtualPad->buttonB,2);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_note_leftR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)6: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_note_right,virtualPad->buttonB,1);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_note_rightP,virtualPad->buttonB,2);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_note_rightR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)7: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_note_down,virtualPad->buttonB,1);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_note_downP,virtualPad->buttonB,2);
HXDLIN( 512)						_gthis->addbuttonuUI(this->_note_downR,virtualPad->buttonB,-1);
            					}
            					break;
            					case (int)8: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_reset,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)9: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_accept,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)10: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_back,virtualPad->buttonB,2);
            					}
            					break;
            					case (int)11: {
HXLINE( 512)						_gthis->addbuttonuUI(this->_pause,virtualPad->buttonB,2);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)6: {
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,setVirtualPadUI,(void))

void Controls_obj::removeFlxInput(::Array< ::Dynamic> Tinputs){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_521_removeFlxInput)
HXDLIN( 521)		int _g = 0;
HXDLIN( 521)		::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 521)		while((_g < _g1->length)){
HXDLIN( 521)			 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 521)			_g = (_g + 1);
HXLINE( 523)			int i = action->inputs->length;
HXLINE( 525)			while(true){
HXLINE( 525)				i = (i - 1);
HXDLIN( 525)				if (!(((i + 1) > 0))) {
HXLINE( 525)					goto _hx_goto_37;
            				}
HXLINE( 527)				 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 529)				int x = Tinputs->length;
HXLINE( 530)				while(true){
HXLINE( 530)					x = (x - 1);
HXDLIN( 530)					if (!(((x + 1) > 0))) {
HXLINE( 530)						goto _hx_goto_38;
            					}
HXLINE( 531)					if (::hx::IsInstanceEq( Tinputs->__get(x).StaticCast<  ::flixel::input::actions::FlxActionInput >(),input )) {
HXLINE( 532)						action->remove(input,null());
            					}
            				}
            				_hx_goto_38:;
            			}
            			_hx_goto_37:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeFlxInput,(void))

void Controls_obj::update(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_539_update)
HXDLIN( 539)		this->super::update();
            	}


bool Controls_obj::checkByName(::String name){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_544_checkByName)
HXLINE( 546)		if (!(this->byName->exists(name))) {
HXLINE( 547)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid name: ",da,fb,f0,ea) + name)));
            		}
HXLINE( 549)		return ( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->check();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,checkByName,return )

::String Controls_obj::getDialogueName( ::flixel::input::actions::FlxActionDigital action){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_553_getDialogueName)
HXLINE( 554)		 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(0).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 555)		 ::flixel::input::actions::FlxInputDevice _g = input->device;
HXDLIN( 555)		switch((int)(_g->_hx_getIndex())){
            			case (int)3: {
HXLINE( 557)				return ((HX_("[",5b,00,00,00) + ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get(input->inputID)) + HX_("]",5d,00,00,00));
            			}
            			break;
            			case (int)4: {
HXLINE( 558)				return ((HX_("(",28,00,00,00) + ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get(input->inputID)) + HX_(")",29,00,00,00));
            			}
            			break;
            			default:{
HXLINE( 559)				 ::flixel::input::actions::FlxInputDevice device = _g;
HXDLIN( 559)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("unhandled device: ",f9,e1,62,a5) + ::Std_obj::string(device))));
            			}
            		}
HXLINE( 555)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueName,return )

::String Controls_obj::getDialogueNameFromToken(::String token){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_565_getDialogueNameFromToken)
HXDLIN( 565)		::cpp::VirtualArray params = null();
HXDLIN( 565)		return this->getDialogueName(this->getActionFromControl(::Type_obj::createEnum(::hx::ClassOf< ::Control >(),token.toUpperCase(),params)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueNameFromToken,return )

 ::flixel::input::actions::FlxActionDigital Controls_obj::getActionFromControl( ::Control control){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_570_getActionFromControl)
HXDLIN( 570)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 572)				return this->_ui_up;
            			}
            			break;
            			case (int)1: {
HXLINE( 574)				return this->_ui_left;
            			}
            			break;
            			case (int)2: {
HXLINE( 575)				return this->_ui_right;
            			}
            			break;
            			case (int)3: {
HXLINE( 573)				return this->_ui_down;
            			}
            			break;
            			case (int)4: {
HXLINE( 576)				return this->_note_up;
            			}
            			break;
            			case (int)5: {
HXLINE( 578)				return this->_note_left;
            			}
            			break;
            			case (int)6: {
HXLINE( 579)				return this->_note_right;
            			}
            			break;
            			case (int)7: {
HXLINE( 577)				return this->_note_down;
            			}
            			break;
            			case (int)8: {
HXLINE( 583)				return this->_reset;
            			}
            			break;
            			case (int)9: {
HXLINE( 580)				return this->_accept;
            			}
            			break;
            			case (int)10: {
HXLINE( 581)				return this->_back;
            			}
            			break;
            			case (int)11: {
HXLINE( 582)				return this->_pause;
            			}
            			break;
            		}
HXLINE( 570)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getActionFromControl,return )

void Controls_obj::forEachBound( ::Control control, ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_601_forEachBound)
HXDLIN( 601)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 604)				func(this->_ui_up,1);
HXLINE( 605)				func(this->_ui_upP,2);
HXLINE( 606)				func(this->_ui_upR,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 608)				func(this->_ui_left,1);
HXLINE( 609)				func(this->_ui_leftP,2);
HXLINE( 610)				func(this->_ui_leftR,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 612)				func(this->_ui_right,1);
HXLINE( 613)				func(this->_ui_rightP,2);
HXLINE( 614)				func(this->_ui_rightR,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 616)				func(this->_ui_down,1);
HXLINE( 617)				func(this->_ui_downP,2);
HXLINE( 618)				func(this->_ui_downR,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 620)				func(this->_note_up,1);
HXLINE( 621)				func(this->_note_upP,2);
HXLINE( 622)				func(this->_note_upR,-1);
            			}
            			break;
            			case (int)5: {
HXLINE( 624)				func(this->_note_left,1);
HXLINE( 625)				func(this->_note_leftP,2);
HXLINE( 626)				func(this->_note_leftR,-1);
            			}
            			break;
            			case (int)6: {
HXLINE( 628)				func(this->_note_right,1);
HXLINE( 629)				func(this->_note_rightP,2);
HXLINE( 630)				func(this->_note_rightR,-1);
            			}
            			break;
            			case (int)7: {
HXLINE( 632)				func(this->_note_down,1);
HXLINE( 633)				func(this->_note_downP,2);
HXLINE( 634)				func(this->_note_downR,-1);
            			}
            			break;
            			case (int)8: {
HXLINE( 642)				func(this->_reset,2);
            			}
            			break;
            			case (int)9: {
HXLINE( 636)				func(this->_accept,2);
            			}
            			break;
            			case (int)10: {
HXLINE( 638)				func(this->_back,2);
            			}
            			break;
            			case (int)11: {
HXLINE( 640)				func(this->_pause,2);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,forEachBound,(void))

void Controls_obj::replaceBinding( ::Control control, ::Device device, ::Dynamic toAdd, ::Dynamic toRemove){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_647_replaceBinding)
HXLINE( 648)		if (::hx::IsEq( toAdd,toRemove )) {
HXLINE( 649)			return;
            		}
HXLINE( 651)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 654)				if (::hx::IsNotNull( toRemove )) {
HXLINE( 655)					this->unbindKeys(control,::Array_obj< int >::__new(1)->init(0,toRemove));
            				}
HXLINE( 656)				if (::hx::IsNotNull( toAdd )) {
HXLINE( 657)					this->bindKeys(control,::Array_obj< int >::__new(1)->init(0,toAdd));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 659)				int id = device->_hx_getInt(0);
HXDLIN( 659)				{
HXLINE( 660)					if (::hx::IsNotNull( toRemove )) {
HXLINE( 661)						this->unbindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toRemove));
            					}
HXLINE( 662)					if (::hx::IsNotNull( toAdd )) {
HXLINE( 663)						this->bindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toAdd));
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,replaceBinding,(void))

void Controls_obj::copyFrom( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_668_copyFrom)
HXLINE( 670)		{
HXLINE( 670)			::Dynamic map = controls->byName;
HXDLIN( 670)			::Dynamic _g_map = map;
HXDLIN( 670)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 670)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 670)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 670)				 ::flixel::input::actions::FlxActionDigital _g1_value = ( ( ::flixel::input::actions::FlxActionDigital)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 670)				::String _g1_key = key;
HXDLIN( 670)				::String name = _g1_key;
HXDLIN( 670)				 ::flixel::input::actions::FlxActionDigital action = _g1_value;
HXLINE( 672)				{
HXLINE( 672)					int _g = 0;
HXDLIN( 672)					::Array< ::Dynamic> _g1 = action->inputs;
HXDLIN( 672)					while((_g < _g1->length)){
HXLINE( 672)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 672)						_g = (_g + 1);
HXLINE( 674)						bool _hx_tmp;
HXDLIN( 674)						if (::hx::IsNotNull( device )) {
HXLINE( 674)							_hx_tmp = ::Controls_obj::isDevice(input,device);
            						}
            						else {
HXLINE( 674)							_hx_tmp = true;
            						}
HXDLIN( 674)						if (_hx_tmp) {
HXLINE( 675)							( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->add(( ( ::flixel::input::actions::FlxActionInputDigital)(input) ));
            						}
            					}
            				}
            			}
            		}
HXLINE( 690)		if (::hx::IsNull( device )) {
HXLINE( 695)			{
HXLINE( 695)				int _g = 0;
HXDLIN( 695)				::Array< int > _g1 = controls->gamepadsAdded;
HXDLIN( 695)				while((_g < _g1->length)){
HXLINE( 695)					int gamepad = _g1->__get(_g);
HXDLIN( 695)					_g = (_g + 1);
HXLINE( 696)					if (!(this->gamepadsAdded->contains(gamepad))) {
HXLINE( 697)						this->gamepadsAdded->push(gamepad);
            					}
            				}
            			}
HXLINE( 704)			this->mergeKeyboardScheme(controls->keyboardScheme);
            		}
            		else {
HXLINE( 690)			switch((int)(device->_hx_getIndex())){
            				case (int)0: {
HXLINE( 709)					this->mergeKeyboardScheme(controls->keyboardScheme);
            				}
            				break;
            				case (int)1: {
HXLINE( 706)					int id = device->_hx_getInt(0);
HXLINE( 707)					this->gamepadsAdded->push(id);
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyFrom,(void))

void Controls_obj::copyTo( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_715_copyTo)
HXDLIN( 715)		controls->copyFrom(::hx::ObjectPtr<OBJ_>(this),device);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyTo,(void))

void Controls_obj::mergeKeyboardScheme( ::KeyboardScheme scheme){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_720_mergeKeyboardScheme)
HXDLIN( 720)		if (::hx::IsPointerNotEq( scheme,::KeyboardScheme_obj::None_dyn() )) {
HXLINE( 722)			if ((this->keyboardScheme->_hx_getIndex() == 2)) {
HXLINE( 725)				this->keyboardScheme = scheme;
            			}
            			else {
HXLINE( 727)				this->keyboardScheme = ::KeyboardScheme_obj::Custom_dyn();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,mergeKeyboardScheme,(void))

void Controls_obj::bindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_735_bindKeys)
HXDLIN( 735)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 735)					int state = 1;
HXDLIN( 735)					int _g = 0;
HXDLIN( 735)					while((_g < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g);
HXDLIN( 735)						_g = (_g + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 735)					int state1 = 2;
HXDLIN( 735)					int _g1 = 0;
HXDLIN( 735)					while((_g1 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g1);
HXDLIN( 735)						_g1 = (_g1 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 735)					int state2 = -1;
HXDLIN( 735)					int _g2 = 0;
HXDLIN( 735)					while((_g2 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g2);
HXDLIN( 735)						_g2 = (_g2 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 735)					int state = 1;
HXDLIN( 735)					int _g = 0;
HXDLIN( 735)					while((_g < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g);
HXDLIN( 735)						_g = (_g + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 735)					int state1 = 2;
HXDLIN( 735)					int _g1 = 0;
HXDLIN( 735)					while((_g1 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g1);
HXDLIN( 735)						_g1 = (_g1 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 735)					int state2 = -1;
HXDLIN( 735)					int _g2 = 0;
HXDLIN( 735)					while((_g2 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g2);
HXDLIN( 735)						_g2 = (_g2 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 735)					int state = 1;
HXDLIN( 735)					int _g = 0;
HXDLIN( 735)					while((_g < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g);
HXDLIN( 735)						_g = (_g + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 735)					int state1 = 2;
HXDLIN( 735)					int _g1 = 0;
HXDLIN( 735)					while((_g1 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g1);
HXDLIN( 735)						_g1 = (_g1 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 735)					int state2 = -1;
HXDLIN( 735)					int _g2 = 0;
HXDLIN( 735)					while((_g2 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g2);
HXDLIN( 735)						_g2 = (_g2 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 735)					int state = 1;
HXDLIN( 735)					int _g = 0;
HXDLIN( 735)					while((_g < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g);
HXDLIN( 735)						_g = (_g + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 735)					int state1 = 2;
HXDLIN( 735)					int _g1 = 0;
HXDLIN( 735)					while((_g1 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g1);
HXDLIN( 735)						_g1 = (_g1 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 735)					int state2 = -1;
HXDLIN( 735)					int _g2 = 0;
HXDLIN( 735)					while((_g2 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g2);
HXDLIN( 735)						_g2 = (_g2 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 735)					int state = 1;
HXDLIN( 735)					int _g = 0;
HXDLIN( 735)					while((_g < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g);
HXDLIN( 735)						_g = (_g + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 735)					int state1 = 2;
HXDLIN( 735)					int _g1 = 0;
HXDLIN( 735)					while((_g1 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g1);
HXDLIN( 735)						_g1 = (_g1 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 735)					int state2 = -1;
HXDLIN( 735)					int _g2 = 0;
HXDLIN( 735)					while((_g2 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g2);
HXDLIN( 735)						_g2 = (_g2 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 735)					int state = 1;
HXDLIN( 735)					int _g = 0;
HXDLIN( 735)					while((_g < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g);
HXDLIN( 735)						_g = (_g + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 735)					int state1 = 2;
HXDLIN( 735)					int _g1 = 0;
HXDLIN( 735)					while((_g1 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g1);
HXDLIN( 735)						_g1 = (_g1 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 735)					int state2 = -1;
HXDLIN( 735)					int _g2 = 0;
HXDLIN( 735)					while((_g2 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g2);
HXDLIN( 735)						_g2 = (_g2 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 735)					int state = 1;
HXDLIN( 735)					int _g = 0;
HXDLIN( 735)					while((_g < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g);
HXDLIN( 735)						_g = (_g + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 735)					int state1 = 2;
HXDLIN( 735)					int _g1 = 0;
HXDLIN( 735)					while((_g1 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g1);
HXDLIN( 735)						_g1 = (_g1 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 735)					int state2 = -1;
HXDLIN( 735)					int _g2 = 0;
HXDLIN( 735)					while((_g2 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g2);
HXDLIN( 735)						_g2 = (_g2 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 735)					int state = 1;
HXDLIN( 735)					int _g = 0;
HXDLIN( 735)					while((_g < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g);
HXDLIN( 735)						_g = (_g + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action->addKey(key,state);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 735)					int state1 = 2;
HXDLIN( 735)					int _g1 = 0;
HXDLIN( 735)					while((_g1 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g1);
HXDLIN( 735)						_g1 = (_g1 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action1->addKey(key,state1);
            						}
            					}
            				}
HXDLIN( 735)				{
HXDLIN( 735)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 735)					int state2 = -1;
HXDLIN( 735)					int _g2 = 0;
HXDLIN( 735)					while((_g2 < keys->length)){
HXDLIN( 735)						int key = keys->__get(_g2);
HXDLIN( 735)						_g2 = (_g2 + 1);
HXDLIN( 735)						if ((key != -1)) {
HXDLIN( 735)							action2->addKey(key,state2);
            						}
            					}
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN( 735)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 735)				int state = 2;
HXDLIN( 735)				int _g = 0;
HXDLIN( 735)				while((_g < keys->length)){
HXDLIN( 735)					int key = keys->__get(_g);
HXDLIN( 735)					_g = (_g + 1);
HXDLIN( 735)					if ((key != -1)) {
HXDLIN( 735)						action->addKey(key,state);
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXDLIN( 735)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 735)				int state = 2;
HXDLIN( 735)				int _g = 0;
HXDLIN( 735)				while((_g < keys->length)){
HXDLIN( 735)					int key = keys->__get(_g);
HXDLIN( 735)					_g = (_g + 1);
HXDLIN( 735)					if ((key != -1)) {
HXDLIN( 735)						action->addKey(key,state);
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXDLIN( 735)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 735)				int state = 2;
HXDLIN( 735)				int _g = 0;
HXDLIN( 735)				while((_g < keys->length)){
HXDLIN( 735)					int key = keys->__get(_g);
HXDLIN( 735)					_g = (_g + 1);
HXDLIN( 735)					if ((key != -1)) {
HXDLIN( 735)						action->addKey(key,state);
            					}
            				}
            			}
            			break;
            			case (int)11: {
HXDLIN( 735)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 735)				int state = 2;
HXDLIN( 735)				int _g = 0;
HXDLIN( 735)				while((_g < keys->length)){
HXDLIN( 735)					int key = keys->__get(_g);
HXDLIN( 735)					_g = (_g + 1);
HXDLIN( 735)					if ((key != -1)) {
HXDLIN( 735)						action->addKey(key,state);
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,bindKeys,(void))

void Controls_obj::unbindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_744_unbindKeys)
HXDLIN( 744)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_up,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_upP,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_upR,keys);
            			}
            			break;
            			case (int)1: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_left,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_leftP,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_leftR,keys);
            			}
            			break;
            			case (int)2: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_right,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_rightP,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_rightR,keys);
            			}
            			break;
            			case (int)3: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_down,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_downP,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_ui_downR,keys);
            			}
            			break;
            			case (int)4: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_up,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_upP,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_upR,keys);
            			}
            			break;
            			case (int)5: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_left,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_leftP,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_leftR,keys);
            			}
            			break;
            			case (int)6: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_right,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_rightP,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_rightR,keys);
            			}
            			break;
            			case (int)7: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_down,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_downP,keys);
HXDLIN( 744)				::Controls_obj::removeKeys(this->_note_downR,keys);
            			}
            			break;
            			case (int)8: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_reset,keys);
            			}
            			break;
            			case (int)9: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_accept,keys);
            			}
            			break;
            			case (int)10: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_back,keys);
            			}
            			break;
            			case (int)11: {
HXDLIN( 744)				::Controls_obj::removeKeys(this->_pause,keys);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,unbindKeys,(void))

void Controls_obj::setKeyboardScheme( ::KeyboardScheme scheme,::hx::Null< bool >  __o_reset){
            		bool reset = __o_reset.Default(true);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_769_setKeyboardScheme)
HXLINE( 770)		if (reset) {
HXLINE( 771)			this->removeKeyboard();
            		}
HXLINE( 773)		this->keyboardScheme = scheme;
HXLINE( 774)		 ::haxe::ds::StringMap keysMap = ::ClientPrefs_obj::keyBinds;
HXLINE( 777)		switch((int)(scheme->_hx_getIndex())){
            			case (int)0: {
HXLINE( 780)				{
HXLINE( 780)					::Array< int > keys = ( (::Array< int >)(keysMap->get(HX_("ui_up",a6,c2,91,a3))) );
HXDLIN( 780)					switch((int)(::Control_obj::UI_UP_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < keys->length)){
HXLINE( 780)									int key = keys->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < keys->length)){
HXLINE( 780)									int key = keys->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < keys->length)){
HXLINE( 780)									int key = keys->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < keys->length)){
HXLINE( 780)									int key = keys->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < keys->length)){
HXLINE( 780)									int key = keys->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < keys->length)){
HXLINE( 780)									int key = keys->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < keys->length)){
HXLINE( 780)									int key = keys->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 780)								int state = 1;
HXDLIN( 780)								int _g = 0;
HXDLIN( 780)								while((_g < keys->length)){
HXLINE( 780)									int key = keys->__get(_g);
HXDLIN( 780)									_g = (_g + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 780)								int state1 = 2;
HXDLIN( 780)								int _g1 = 0;
HXDLIN( 780)								while((_g1 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g1);
HXDLIN( 780)									_g1 = (_g1 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 780)							{
HXLINE( 780)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 780)								int state2 = -1;
HXDLIN( 780)								int _g2 = 0;
HXDLIN( 780)								while((_g2 < keys->length)){
HXLINE( 780)									int key = keys->__get(_g2);
HXDLIN( 780)									_g2 = (_g2 + 1);
HXDLIN( 780)									if ((key != -1)) {
HXLINE( 780)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 780)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 780)							int state = 2;
HXDLIN( 780)							int _g = 0;
HXDLIN( 780)							while((_g < keys->length)){
HXLINE( 780)								int key = keys->__get(_g);
HXDLIN( 780)								_g = (_g + 1);
HXDLIN( 780)								if ((key != -1)) {
HXLINE( 780)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 780)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 780)							int state = 2;
HXDLIN( 780)							int _g = 0;
HXDLIN( 780)							while((_g < keys->length)){
HXLINE( 780)								int key = keys->__get(_g);
HXDLIN( 780)								_g = (_g + 1);
HXDLIN( 780)								if ((key != -1)) {
HXLINE( 780)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 780)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 780)							int state = 2;
HXDLIN( 780)							int _g = 0;
HXDLIN( 780)							while((_g < keys->length)){
HXLINE( 780)								int key = keys->__get(_g);
HXDLIN( 780)								_g = (_g + 1);
HXDLIN( 780)								if ((key != -1)) {
HXLINE( 780)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 780)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 780)							int state = 2;
HXDLIN( 780)							int _g = 0;
HXDLIN( 780)							while((_g < keys->length)){
HXLINE( 780)								int key = keys->__get(_g);
HXDLIN( 780)								_g = (_g + 1);
HXDLIN( 780)								if ((key != -1)) {
HXLINE( 780)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 781)				{
HXLINE( 781)					::Array< int > keys1 = ( (::Array< int >)(keysMap->get(HX_("ui_down",6d,3d,47,f2))) );
HXDLIN( 781)					switch((int)(::Control_obj::UI_DOWN_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 781)								int state = 1;
HXDLIN( 781)								int _g = 0;
HXDLIN( 781)								while((_g < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g);
HXDLIN( 781)									_g = (_g + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 781)								int state1 = 2;
HXDLIN( 781)								int _g1 = 0;
HXDLIN( 781)								while((_g1 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g1);
HXDLIN( 781)									_g1 = (_g1 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 781)								int state2 = -1;
HXDLIN( 781)								int _g2 = 0;
HXDLIN( 781)								while((_g2 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g2);
HXDLIN( 781)									_g2 = (_g2 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 781)								int state = 1;
HXDLIN( 781)								int _g = 0;
HXDLIN( 781)								while((_g < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g);
HXDLIN( 781)									_g = (_g + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 781)								int state1 = 2;
HXDLIN( 781)								int _g1 = 0;
HXDLIN( 781)								while((_g1 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g1);
HXDLIN( 781)									_g1 = (_g1 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 781)								int state2 = -1;
HXDLIN( 781)								int _g2 = 0;
HXDLIN( 781)								while((_g2 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g2);
HXDLIN( 781)									_g2 = (_g2 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 781)								int state = 1;
HXDLIN( 781)								int _g = 0;
HXDLIN( 781)								while((_g < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g);
HXDLIN( 781)									_g = (_g + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 781)								int state1 = 2;
HXDLIN( 781)								int _g1 = 0;
HXDLIN( 781)								while((_g1 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g1);
HXDLIN( 781)									_g1 = (_g1 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 781)								int state2 = -1;
HXDLIN( 781)								int _g2 = 0;
HXDLIN( 781)								while((_g2 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g2);
HXDLIN( 781)									_g2 = (_g2 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 781)								int state = 1;
HXDLIN( 781)								int _g = 0;
HXDLIN( 781)								while((_g < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g);
HXDLIN( 781)									_g = (_g + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 781)								int state1 = 2;
HXDLIN( 781)								int _g1 = 0;
HXDLIN( 781)								while((_g1 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g1);
HXDLIN( 781)									_g1 = (_g1 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 781)								int state2 = -1;
HXDLIN( 781)								int _g2 = 0;
HXDLIN( 781)								while((_g2 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g2);
HXDLIN( 781)									_g2 = (_g2 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 781)								int state = 1;
HXDLIN( 781)								int _g = 0;
HXDLIN( 781)								while((_g < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g);
HXDLIN( 781)									_g = (_g + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 781)								int state1 = 2;
HXDLIN( 781)								int _g1 = 0;
HXDLIN( 781)								while((_g1 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g1);
HXDLIN( 781)									_g1 = (_g1 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 781)								int state2 = -1;
HXDLIN( 781)								int _g2 = 0;
HXDLIN( 781)								while((_g2 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g2);
HXDLIN( 781)									_g2 = (_g2 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 781)								int state = 1;
HXDLIN( 781)								int _g = 0;
HXDLIN( 781)								while((_g < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g);
HXDLIN( 781)									_g = (_g + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 781)								int state1 = 2;
HXDLIN( 781)								int _g1 = 0;
HXDLIN( 781)								while((_g1 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g1);
HXDLIN( 781)									_g1 = (_g1 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 781)								int state2 = -1;
HXDLIN( 781)								int _g2 = 0;
HXDLIN( 781)								while((_g2 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g2);
HXDLIN( 781)									_g2 = (_g2 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 781)								int state = 1;
HXDLIN( 781)								int _g = 0;
HXDLIN( 781)								while((_g < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g);
HXDLIN( 781)									_g = (_g + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 781)								int state1 = 2;
HXDLIN( 781)								int _g1 = 0;
HXDLIN( 781)								while((_g1 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g1);
HXDLIN( 781)									_g1 = (_g1 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 781)								int state2 = -1;
HXDLIN( 781)								int _g2 = 0;
HXDLIN( 781)								while((_g2 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g2);
HXDLIN( 781)									_g2 = (_g2 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 781)								int state = 1;
HXDLIN( 781)								int _g = 0;
HXDLIN( 781)								while((_g < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g);
HXDLIN( 781)									_g = (_g + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 781)								int state1 = 2;
HXDLIN( 781)								int _g1 = 0;
HXDLIN( 781)								while((_g1 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g1);
HXDLIN( 781)									_g1 = (_g1 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 781)							{
HXLINE( 781)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 781)								int state2 = -1;
HXDLIN( 781)								int _g2 = 0;
HXDLIN( 781)								while((_g2 < keys1->length)){
HXLINE( 781)									int key = keys1->__get(_g2);
HXDLIN( 781)									_g2 = (_g2 + 1);
HXDLIN( 781)									if ((key != -1)) {
HXLINE( 781)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 781)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 781)							int state = 2;
HXDLIN( 781)							int _g = 0;
HXDLIN( 781)							while((_g < keys1->length)){
HXLINE( 781)								int key = keys1->__get(_g);
HXDLIN( 781)								_g = (_g + 1);
HXDLIN( 781)								if ((key != -1)) {
HXLINE( 781)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 781)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 781)							int state = 2;
HXDLIN( 781)							int _g = 0;
HXDLIN( 781)							while((_g < keys1->length)){
HXLINE( 781)								int key = keys1->__get(_g);
HXDLIN( 781)								_g = (_g + 1);
HXDLIN( 781)								if ((key != -1)) {
HXLINE( 781)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 781)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 781)							int state = 2;
HXDLIN( 781)							int _g = 0;
HXDLIN( 781)							while((_g < keys1->length)){
HXLINE( 781)								int key = keys1->__get(_g);
HXDLIN( 781)								_g = (_g + 1);
HXDLIN( 781)								if ((key != -1)) {
HXLINE( 781)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 781)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 781)							int state = 2;
HXDLIN( 781)							int _g = 0;
HXDLIN( 781)							while((_g < keys1->length)){
HXLINE( 781)								int key = keys1->__get(_g);
HXDLIN( 781)								_g = (_g + 1);
HXDLIN( 781)								if ((key != -1)) {
HXLINE( 781)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 782)				{
HXLINE( 782)					::Array< int > keys2 = ( (::Array< int >)(keysMap->get(HX_("ui_left",12,4d,89,f7))) );
HXDLIN( 782)					switch((int)(::Control_obj::UI_LEFT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 782)								int state = 1;
HXDLIN( 782)								int _g = 0;
HXDLIN( 782)								while((_g < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g);
HXDLIN( 782)									_g = (_g + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 782)								int state1 = 2;
HXDLIN( 782)								int _g1 = 0;
HXDLIN( 782)								while((_g1 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g1);
HXDLIN( 782)									_g1 = (_g1 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 782)								int state2 = -1;
HXDLIN( 782)								int _g2 = 0;
HXDLIN( 782)								while((_g2 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g2);
HXDLIN( 782)									_g2 = (_g2 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 782)								int state = 1;
HXDLIN( 782)								int _g = 0;
HXDLIN( 782)								while((_g < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g);
HXDLIN( 782)									_g = (_g + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 782)								int state1 = 2;
HXDLIN( 782)								int _g1 = 0;
HXDLIN( 782)								while((_g1 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g1);
HXDLIN( 782)									_g1 = (_g1 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 782)								int state2 = -1;
HXDLIN( 782)								int _g2 = 0;
HXDLIN( 782)								while((_g2 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g2);
HXDLIN( 782)									_g2 = (_g2 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 782)								int state = 1;
HXDLIN( 782)								int _g = 0;
HXDLIN( 782)								while((_g < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g);
HXDLIN( 782)									_g = (_g + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 782)								int state1 = 2;
HXDLIN( 782)								int _g1 = 0;
HXDLIN( 782)								while((_g1 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g1);
HXDLIN( 782)									_g1 = (_g1 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 782)								int state2 = -1;
HXDLIN( 782)								int _g2 = 0;
HXDLIN( 782)								while((_g2 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g2);
HXDLIN( 782)									_g2 = (_g2 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 782)								int state = 1;
HXDLIN( 782)								int _g = 0;
HXDLIN( 782)								while((_g < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g);
HXDLIN( 782)									_g = (_g + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 782)								int state1 = 2;
HXDLIN( 782)								int _g1 = 0;
HXDLIN( 782)								while((_g1 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g1);
HXDLIN( 782)									_g1 = (_g1 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 782)								int state2 = -1;
HXDLIN( 782)								int _g2 = 0;
HXDLIN( 782)								while((_g2 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g2);
HXDLIN( 782)									_g2 = (_g2 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 782)								int state = 1;
HXDLIN( 782)								int _g = 0;
HXDLIN( 782)								while((_g < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g);
HXDLIN( 782)									_g = (_g + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 782)								int state1 = 2;
HXDLIN( 782)								int _g1 = 0;
HXDLIN( 782)								while((_g1 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g1);
HXDLIN( 782)									_g1 = (_g1 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 782)								int state2 = -1;
HXDLIN( 782)								int _g2 = 0;
HXDLIN( 782)								while((_g2 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g2);
HXDLIN( 782)									_g2 = (_g2 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 782)								int state = 1;
HXDLIN( 782)								int _g = 0;
HXDLIN( 782)								while((_g < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g);
HXDLIN( 782)									_g = (_g + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 782)								int state1 = 2;
HXDLIN( 782)								int _g1 = 0;
HXDLIN( 782)								while((_g1 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g1);
HXDLIN( 782)									_g1 = (_g1 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 782)								int state2 = -1;
HXDLIN( 782)								int _g2 = 0;
HXDLIN( 782)								while((_g2 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g2);
HXDLIN( 782)									_g2 = (_g2 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 782)								int state = 1;
HXDLIN( 782)								int _g = 0;
HXDLIN( 782)								while((_g < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g);
HXDLIN( 782)									_g = (_g + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 782)								int state1 = 2;
HXDLIN( 782)								int _g1 = 0;
HXDLIN( 782)								while((_g1 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g1);
HXDLIN( 782)									_g1 = (_g1 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 782)								int state2 = -1;
HXDLIN( 782)								int _g2 = 0;
HXDLIN( 782)								while((_g2 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g2);
HXDLIN( 782)									_g2 = (_g2 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 782)								int state = 1;
HXDLIN( 782)								int _g = 0;
HXDLIN( 782)								while((_g < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g);
HXDLIN( 782)									_g = (_g + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 782)								int state1 = 2;
HXDLIN( 782)								int _g1 = 0;
HXDLIN( 782)								while((_g1 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g1);
HXDLIN( 782)									_g1 = (_g1 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 782)							{
HXLINE( 782)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 782)								int state2 = -1;
HXDLIN( 782)								int _g2 = 0;
HXDLIN( 782)								while((_g2 < keys2->length)){
HXLINE( 782)									int key = keys2->__get(_g2);
HXDLIN( 782)									_g2 = (_g2 + 1);
HXDLIN( 782)									if ((key != -1)) {
HXLINE( 782)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 782)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 782)							int state = 2;
HXDLIN( 782)							int _g = 0;
HXDLIN( 782)							while((_g < keys2->length)){
HXLINE( 782)								int key = keys2->__get(_g);
HXDLIN( 782)								_g = (_g + 1);
HXDLIN( 782)								if ((key != -1)) {
HXLINE( 782)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 782)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 782)							int state = 2;
HXDLIN( 782)							int _g = 0;
HXDLIN( 782)							while((_g < keys2->length)){
HXLINE( 782)								int key = keys2->__get(_g);
HXDLIN( 782)								_g = (_g + 1);
HXDLIN( 782)								if ((key != -1)) {
HXLINE( 782)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 782)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 782)							int state = 2;
HXDLIN( 782)							int _g = 0;
HXDLIN( 782)							while((_g < keys2->length)){
HXLINE( 782)								int key = keys2->__get(_g);
HXDLIN( 782)								_g = (_g + 1);
HXDLIN( 782)								if ((key != -1)) {
HXLINE( 782)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 782)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 782)							int state = 2;
HXDLIN( 782)							int _g = 0;
HXDLIN( 782)							while((_g < keys2->length)){
HXLINE( 782)								int key = keys2->__get(_g);
HXDLIN( 782)								_g = (_g + 1);
HXDLIN( 782)								if ((key != -1)) {
HXLINE( 782)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 783)				{
HXLINE( 783)					::Array< int > keys3 = ( (::Array< int >)(keysMap->get(HX_("ui_right",71,30,a7,17))) );
HXDLIN( 783)					switch((int)(::Control_obj::UI_RIGHT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 783)								int state = 1;
HXDLIN( 783)								int _g = 0;
HXDLIN( 783)								while((_g < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g);
HXDLIN( 783)									_g = (_g + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 783)								int state1 = 2;
HXDLIN( 783)								int _g1 = 0;
HXDLIN( 783)								while((_g1 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g1);
HXDLIN( 783)									_g1 = (_g1 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 783)								int state2 = -1;
HXDLIN( 783)								int _g2 = 0;
HXDLIN( 783)								while((_g2 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g2);
HXDLIN( 783)									_g2 = (_g2 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 783)								int state = 1;
HXDLIN( 783)								int _g = 0;
HXDLIN( 783)								while((_g < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g);
HXDLIN( 783)									_g = (_g + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 783)								int state1 = 2;
HXDLIN( 783)								int _g1 = 0;
HXDLIN( 783)								while((_g1 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g1);
HXDLIN( 783)									_g1 = (_g1 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 783)								int state2 = -1;
HXDLIN( 783)								int _g2 = 0;
HXDLIN( 783)								while((_g2 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g2);
HXDLIN( 783)									_g2 = (_g2 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 783)								int state = 1;
HXDLIN( 783)								int _g = 0;
HXDLIN( 783)								while((_g < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g);
HXDLIN( 783)									_g = (_g + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 783)								int state1 = 2;
HXDLIN( 783)								int _g1 = 0;
HXDLIN( 783)								while((_g1 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g1);
HXDLIN( 783)									_g1 = (_g1 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 783)								int state2 = -1;
HXDLIN( 783)								int _g2 = 0;
HXDLIN( 783)								while((_g2 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g2);
HXDLIN( 783)									_g2 = (_g2 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 783)								int state = 1;
HXDLIN( 783)								int _g = 0;
HXDLIN( 783)								while((_g < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g);
HXDLIN( 783)									_g = (_g + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 783)								int state1 = 2;
HXDLIN( 783)								int _g1 = 0;
HXDLIN( 783)								while((_g1 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g1);
HXDLIN( 783)									_g1 = (_g1 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 783)								int state2 = -1;
HXDLIN( 783)								int _g2 = 0;
HXDLIN( 783)								while((_g2 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g2);
HXDLIN( 783)									_g2 = (_g2 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 783)								int state = 1;
HXDLIN( 783)								int _g = 0;
HXDLIN( 783)								while((_g < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g);
HXDLIN( 783)									_g = (_g + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 783)								int state1 = 2;
HXDLIN( 783)								int _g1 = 0;
HXDLIN( 783)								while((_g1 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g1);
HXDLIN( 783)									_g1 = (_g1 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 783)								int state2 = -1;
HXDLIN( 783)								int _g2 = 0;
HXDLIN( 783)								while((_g2 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g2);
HXDLIN( 783)									_g2 = (_g2 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 783)								int state = 1;
HXDLIN( 783)								int _g = 0;
HXDLIN( 783)								while((_g < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g);
HXDLIN( 783)									_g = (_g + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 783)								int state1 = 2;
HXDLIN( 783)								int _g1 = 0;
HXDLIN( 783)								while((_g1 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g1);
HXDLIN( 783)									_g1 = (_g1 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 783)								int state2 = -1;
HXDLIN( 783)								int _g2 = 0;
HXDLIN( 783)								while((_g2 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g2);
HXDLIN( 783)									_g2 = (_g2 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 783)								int state = 1;
HXDLIN( 783)								int _g = 0;
HXDLIN( 783)								while((_g < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g);
HXDLIN( 783)									_g = (_g + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 783)								int state1 = 2;
HXDLIN( 783)								int _g1 = 0;
HXDLIN( 783)								while((_g1 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g1);
HXDLIN( 783)									_g1 = (_g1 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 783)								int state2 = -1;
HXDLIN( 783)								int _g2 = 0;
HXDLIN( 783)								while((_g2 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g2);
HXDLIN( 783)									_g2 = (_g2 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 783)								int state = 1;
HXDLIN( 783)								int _g = 0;
HXDLIN( 783)								while((_g < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g);
HXDLIN( 783)									_g = (_g + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 783)								int state1 = 2;
HXDLIN( 783)								int _g1 = 0;
HXDLIN( 783)								while((_g1 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g1);
HXDLIN( 783)									_g1 = (_g1 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 783)							{
HXLINE( 783)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 783)								int state2 = -1;
HXDLIN( 783)								int _g2 = 0;
HXDLIN( 783)								while((_g2 < keys3->length)){
HXLINE( 783)									int key = keys3->__get(_g2);
HXDLIN( 783)									_g2 = (_g2 + 1);
HXDLIN( 783)									if ((key != -1)) {
HXLINE( 783)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 783)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 783)							int state = 2;
HXDLIN( 783)							int _g = 0;
HXDLIN( 783)							while((_g < keys3->length)){
HXLINE( 783)								int key = keys3->__get(_g);
HXDLIN( 783)								_g = (_g + 1);
HXDLIN( 783)								if ((key != -1)) {
HXLINE( 783)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 783)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 783)							int state = 2;
HXDLIN( 783)							int _g = 0;
HXDLIN( 783)							while((_g < keys3->length)){
HXLINE( 783)								int key = keys3->__get(_g);
HXDLIN( 783)								_g = (_g + 1);
HXDLIN( 783)								if ((key != -1)) {
HXLINE( 783)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 783)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 783)							int state = 2;
HXDLIN( 783)							int _g = 0;
HXDLIN( 783)							while((_g < keys3->length)){
HXLINE( 783)								int key = keys3->__get(_g);
HXDLIN( 783)								_g = (_g + 1);
HXDLIN( 783)								if ((key != -1)) {
HXLINE( 783)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 783)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 783)							int state = 2;
HXDLIN( 783)							int _g = 0;
HXDLIN( 783)							while((_g < keys3->length)){
HXLINE( 783)								int key = keys3->__get(_g);
HXDLIN( 783)								_g = (_g + 1);
HXDLIN( 783)								if ((key != -1)) {
HXLINE( 783)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 784)				{
HXLINE( 784)					::Array< int > keys4 = ( (::Array< int >)(keysMap->get(HX_("note_up",c8,67,5c,4d))) );
HXDLIN( 784)					switch((int)(::Control_obj::NOTE_UP_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 784)								int state = 1;
HXDLIN( 784)								int _g = 0;
HXDLIN( 784)								while((_g < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g);
HXDLIN( 784)									_g = (_g + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 784)								int state1 = 2;
HXDLIN( 784)								int _g1 = 0;
HXDLIN( 784)								while((_g1 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g1);
HXDLIN( 784)									_g1 = (_g1 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 784)								int state2 = -1;
HXDLIN( 784)								int _g2 = 0;
HXDLIN( 784)								while((_g2 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g2);
HXDLIN( 784)									_g2 = (_g2 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 784)								int state = 1;
HXDLIN( 784)								int _g = 0;
HXDLIN( 784)								while((_g < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g);
HXDLIN( 784)									_g = (_g + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 784)								int state1 = 2;
HXDLIN( 784)								int _g1 = 0;
HXDLIN( 784)								while((_g1 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g1);
HXDLIN( 784)									_g1 = (_g1 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 784)								int state2 = -1;
HXDLIN( 784)								int _g2 = 0;
HXDLIN( 784)								while((_g2 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g2);
HXDLIN( 784)									_g2 = (_g2 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 784)								int state = 1;
HXDLIN( 784)								int _g = 0;
HXDLIN( 784)								while((_g < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g);
HXDLIN( 784)									_g = (_g + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 784)								int state1 = 2;
HXDLIN( 784)								int _g1 = 0;
HXDLIN( 784)								while((_g1 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g1);
HXDLIN( 784)									_g1 = (_g1 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 784)								int state2 = -1;
HXDLIN( 784)								int _g2 = 0;
HXDLIN( 784)								while((_g2 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g2);
HXDLIN( 784)									_g2 = (_g2 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 784)								int state = 1;
HXDLIN( 784)								int _g = 0;
HXDLIN( 784)								while((_g < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g);
HXDLIN( 784)									_g = (_g + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 784)								int state1 = 2;
HXDLIN( 784)								int _g1 = 0;
HXDLIN( 784)								while((_g1 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g1);
HXDLIN( 784)									_g1 = (_g1 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 784)								int state2 = -1;
HXDLIN( 784)								int _g2 = 0;
HXDLIN( 784)								while((_g2 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g2);
HXDLIN( 784)									_g2 = (_g2 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 784)								int state = 1;
HXDLIN( 784)								int _g = 0;
HXDLIN( 784)								while((_g < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g);
HXDLIN( 784)									_g = (_g + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 784)								int state1 = 2;
HXDLIN( 784)								int _g1 = 0;
HXDLIN( 784)								while((_g1 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g1);
HXDLIN( 784)									_g1 = (_g1 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 784)								int state2 = -1;
HXDLIN( 784)								int _g2 = 0;
HXDLIN( 784)								while((_g2 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g2);
HXDLIN( 784)									_g2 = (_g2 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 784)								int state = 1;
HXDLIN( 784)								int _g = 0;
HXDLIN( 784)								while((_g < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g);
HXDLIN( 784)									_g = (_g + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 784)								int state1 = 2;
HXDLIN( 784)								int _g1 = 0;
HXDLIN( 784)								while((_g1 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g1);
HXDLIN( 784)									_g1 = (_g1 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 784)								int state2 = -1;
HXDLIN( 784)								int _g2 = 0;
HXDLIN( 784)								while((_g2 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g2);
HXDLIN( 784)									_g2 = (_g2 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 784)								int state = 1;
HXDLIN( 784)								int _g = 0;
HXDLIN( 784)								while((_g < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g);
HXDLIN( 784)									_g = (_g + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 784)								int state1 = 2;
HXDLIN( 784)								int _g1 = 0;
HXDLIN( 784)								while((_g1 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g1);
HXDLIN( 784)									_g1 = (_g1 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 784)								int state2 = -1;
HXDLIN( 784)								int _g2 = 0;
HXDLIN( 784)								while((_g2 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g2);
HXDLIN( 784)									_g2 = (_g2 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 784)								int state = 1;
HXDLIN( 784)								int _g = 0;
HXDLIN( 784)								while((_g < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g);
HXDLIN( 784)									_g = (_g + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 784)								int state1 = 2;
HXDLIN( 784)								int _g1 = 0;
HXDLIN( 784)								while((_g1 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g1);
HXDLIN( 784)									_g1 = (_g1 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 784)							{
HXLINE( 784)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 784)								int state2 = -1;
HXDLIN( 784)								int _g2 = 0;
HXDLIN( 784)								while((_g2 < keys4->length)){
HXLINE( 784)									int key = keys4->__get(_g2);
HXDLIN( 784)									_g2 = (_g2 + 1);
HXDLIN( 784)									if ((key != -1)) {
HXLINE( 784)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 784)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 784)							int state = 2;
HXDLIN( 784)							int _g = 0;
HXDLIN( 784)							while((_g < keys4->length)){
HXLINE( 784)								int key = keys4->__get(_g);
HXDLIN( 784)								_g = (_g + 1);
HXDLIN( 784)								if ((key != -1)) {
HXLINE( 784)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 784)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 784)							int state = 2;
HXDLIN( 784)							int _g = 0;
HXDLIN( 784)							while((_g < keys4->length)){
HXLINE( 784)								int key = keys4->__get(_g);
HXDLIN( 784)								_g = (_g + 1);
HXDLIN( 784)								if ((key != -1)) {
HXLINE( 784)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 784)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 784)							int state = 2;
HXDLIN( 784)							int _g = 0;
HXDLIN( 784)							while((_g < keys4->length)){
HXLINE( 784)								int key = keys4->__get(_g);
HXDLIN( 784)								_g = (_g + 1);
HXDLIN( 784)								if ((key != -1)) {
HXLINE( 784)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 784)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 784)							int state = 2;
HXDLIN( 784)							int _g = 0;
HXDLIN( 784)							while((_g < keys4->length)){
HXLINE( 784)								int key = keys4->__get(_g);
HXDLIN( 784)								_g = (_g + 1);
HXDLIN( 784)								if ((key != -1)) {
HXLINE( 784)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 785)				{
HXLINE( 785)					::Array< int > keys5 = ( (::Array< int >)(keysMap->get(HX_("note_down",0f,ef,de,9f))) );
HXDLIN( 785)					switch((int)(::Control_obj::NOTE_DOWN_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 785)								int state = 1;
HXDLIN( 785)								int _g = 0;
HXDLIN( 785)								while((_g < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g);
HXDLIN( 785)									_g = (_g + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 785)								int state1 = 2;
HXDLIN( 785)								int _g1 = 0;
HXDLIN( 785)								while((_g1 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g1);
HXDLIN( 785)									_g1 = (_g1 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 785)								int state2 = -1;
HXDLIN( 785)								int _g2 = 0;
HXDLIN( 785)								while((_g2 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g2);
HXDLIN( 785)									_g2 = (_g2 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 785)								int state = 1;
HXDLIN( 785)								int _g = 0;
HXDLIN( 785)								while((_g < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g);
HXDLIN( 785)									_g = (_g + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 785)								int state1 = 2;
HXDLIN( 785)								int _g1 = 0;
HXDLIN( 785)								while((_g1 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g1);
HXDLIN( 785)									_g1 = (_g1 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 785)								int state2 = -1;
HXDLIN( 785)								int _g2 = 0;
HXDLIN( 785)								while((_g2 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g2);
HXDLIN( 785)									_g2 = (_g2 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 785)								int state = 1;
HXDLIN( 785)								int _g = 0;
HXDLIN( 785)								while((_g < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g);
HXDLIN( 785)									_g = (_g + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 785)								int state1 = 2;
HXDLIN( 785)								int _g1 = 0;
HXDLIN( 785)								while((_g1 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g1);
HXDLIN( 785)									_g1 = (_g1 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 785)								int state2 = -1;
HXDLIN( 785)								int _g2 = 0;
HXDLIN( 785)								while((_g2 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g2);
HXDLIN( 785)									_g2 = (_g2 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 785)								int state = 1;
HXDLIN( 785)								int _g = 0;
HXDLIN( 785)								while((_g < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g);
HXDLIN( 785)									_g = (_g + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 785)								int state1 = 2;
HXDLIN( 785)								int _g1 = 0;
HXDLIN( 785)								while((_g1 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g1);
HXDLIN( 785)									_g1 = (_g1 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 785)								int state2 = -1;
HXDLIN( 785)								int _g2 = 0;
HXDLIN( 785)								while((_g2 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g2);
HXDLIN( 785)									_g2 = (_g2 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 785)								int state = 1;
HXDLIN( 785)								int _g = 0;
HXDLIN( 785)								while((_g < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g);
HXDLIN( 785)									_g = (_g + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 785)								int state1 = 2;
HXDLIN( 785)								int _g1 = 0;
HXDLIN( 785)								while((_g1 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g1);
HXDLIN( 785)									_g1 = (_g1 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 785)								int state2 = -1;
HXDLIN( 785)								int _g2 = 0;
HXDLIN( 785)								while((_g2 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g2);
HXDLIN( 785)									_g2 = (_g2 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 785)								int state = 1;
HXDLIN( 785)								int _g = 0;
HXDLIN( 785)								while((_g < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g);
HXDLIN( 785)									_g = (_g + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 785)								int state1 = 2;
HXDLIN( 785)								int _g1 = 0;
HXDLIN( 785)								while((_g1 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g1);
HXDLIN( 785)									_g1 = (_g1 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 785)								int state2 = -1;
HXDLIN( 785)								int _g2 = 0;
HXDLIN( 785)								while((_g2 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g2);
HXDLIN( 785)									_g2 = (_g2 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 785)								int state = 1;
HXDLIN( 785)								int _g = 0;
HXDLIN( 785)								while((_g < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g);
HXDLIN( 785)									_g = (_g + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 785)								int state1 = 2;
HXDLIN( 785)								int _g1 = 0;
HXDLIN( 785)								while((_g1 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g1);
HXDLIN( 785)									_g1 = (_g1 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 785)								int state2 = -1;
HXDLIN( 785)								int _g2 = 0;
HXDLIN( 785)								while((_g2 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g2);
HXDLIN( 785)									_g2 = (_g2 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 785)								int state = 1;
HXDLIN( 785)								int _g = 0;
HXDLIN( 785)								while((_g < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g);
HXDLIN( 785)									_g = (_g + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 785)								int state1 = 2;
HXDLIN( 785)								int _g1 = 0;
HXDLIN( 785)								while((_g1 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g1);
HXDLIN( 785)									_g1 = (_g1 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 785)							{
HXLINE( 785)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 785)								int state2 = -1;
HXDLIN( 785)								int _g2 = 0;
HXDLIN( 785)								while((_g2 < keys5->length)){
HXLINE( 785)									int key = keys5->__get(_g2);
HXDLIN( 785)									_g2 = (_g2 + 1);
HXDLIN( 785)									if ((key != -1)) {
HXLINE( 785)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 785)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 785)							int state = 2;
HXDLIN( 785)							int _g = 0;
HXDLIN( 785)							while((_g < keys5->length)){
HXLINE( 785)								int key = keys5->__get(_g);
HXDLIN( 785)								_g = (_g + 1);
HXDLIN( 785)								if ((key != -1)) {
HXLINE( 785)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 785)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 785)							int state = 2;
HXDLIN( 785)							int _g = 0;
HXDLIN( 785)							while((_g < keys5->length)){
HXLINE( 785)								int key = keys5->__get(_g);
HXDLIN( 785)								_g = (_g + 1);
HXDLIN( 785)								if ((key != -1)) {
HXLINE( 785)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 785)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 785)							int state = 2;
HXDLIN( 785)							int _g = 0;
HXDLIN( 785)							while((_g < keys5->length)){
HXLINE( 785)								int key = keys5->__get(_g);
HXDLIN( 785)								_g = (_g + 1);
HXDLIN( 785)								if ((key != -1)) {
HXLINE( 785)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 785)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 785)							int state = 2;
HXDLIN( 785)							int _g = 0;
HXDLIN( 785)							while((_g < keys5->length)){
HXLINE( 785)								int key = keys5->__get(_g);
HXDLIN( 785)								_g = (_g + 1);
HXDLIN( 785)								if ((key != -1)) {
HXLINE( 785)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 786)				{
HXLINE( 786)					::Array< int > keys6 = ( (::Array< int >)(keysMap->get(HX_("note_left",b4,fe,20,a5))) );
HXDLIN( 786)					switch((int)(::Control_obj::NOTE_LEFT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 786)								int state = 1;
HXDLIN( 786)								int _g = 0;
HXDLIN( 786)								while((_g < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g);
HXDLIN( 786)									_g = (_g + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 786)								int state1 = 2;
HXDLIN( 786)								int _g1 = 0;
HXDLIN( 786)								while((_g1 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g1);
HXDLIN( 786)									_g1 = (_g1 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 786)								int state2 = -1;
HXDLIN( 786)								int _g2 = 0;
HXDLIN( 786)								while((_g2 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g2);
HXDLIN( 786)									_g2 = (_g2 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 786)								int state = 1;
HXDLIN( 786)								int _g = 0;
HXDLIN( 786)								while((_g < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g);
HXDLIN( 786)									_g = (_g + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 786)								int state1 = 2;
HXDLIN( 786)								int _g1 = 0;
HXDLIN( 786)								while((_g1 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g1);
HXDLIN( 786)									_g1 = (_g1 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 786)								int state2 = -1;
HXDLIN( 786)								int _g2 = 0;
HXDLIN( 786)								while((_g2 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g2);
HXDLIN( 786)									_g2 = (_g2 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 786)								int state = 1;
HXDLIN( 786)								int _g = 0;
HXDLIN( 786)								while((_g < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g);
HXDLIN( 786)									_g = (_g + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 786)								int state1 = 2;
HXDLIN( 786)								int _g1 = 0;
HXDLIN( 786)								while((_g1 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g1);
HXDLIN( 786)									_g1 = (_g1 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 786)								int state2 = -1;
HXDLIN( 786)								int _g2 = 0;
HXDLIN( 786)								while((_g2 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g2);
HXDLIN( 786)									_g2 = (_g2 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 786)								int state = 1;
HXDLIN( 786)								int _g = 0;
HXDLIN( 786)								while((_g < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g);
HXDLIN( 786)									_g = (_g + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 786)								int state1 = 2;
HXDLIN( 786)								int _g1 = 0;
HXDLIN( 786)								while((_g1 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g1);
HXDLIN( 786)									_g1 = (_g1 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 786)								int state2 = -1;
HXDLIN( 786)								int _g2 = 0;
HXDLIN( 786)								while((_g2 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g2);
HXDLIN( 786)									_g2 = (_g2 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 786)								int state = 1;
HXDLIN( 786)								int _g = 0;
HXDLIN( 786)								while((_g < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g);
HXDLIN( 786)									_g = (_g + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 786)								int state1 = 2;
HXDLIN( 786)								int _g1 = 0;
HXDLIN( 786)								while((_g1 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g1);
HXDLIN( 786)									_g1 = (_g1 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 786)								int state2 = -1;
HXDLIN( 786)								int _g2 = 0;
HXDLIN( 786)								while((_g2 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g2);
HXDLIN( 786)									_g2 = (_g2 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 786)								int state = 1;
HXDLIN( 786)								int _g = 0;
HXDLIN( 786)								while((_g < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g);
HXDLIN( 786)									_g = (_g + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 786)								int state1 = 2;
HXDLIN( 786)								int _g1 = 0;
HXDLIN( 786)								while((_g1 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g1);
HXDLIN( 786)									_g1 = (_g1 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 786)								int state2 = -1;
HXDLIN( 786)								int _g2 = 0;
HXDLIN( 786)								while((_g2 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g2);
HXDLIN( 786)									_g2 = (_g2 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 786)								int state = 1;
HXDLIN( 786)								int _g = 0;
HXDLIN( 786)								while((_g < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g);
HXDLIN( 786)									_g = (_g + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 786)								int state1 = 2;
HXDLIN( 786)								int _g1 = 0;
HXDLIN( 786)								while((_g1 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g1);
HXDLIN( 786)									_g1 = (_g1 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 786)								int state2 = -1;
HXDLIN( 786)								int _g2 = 0;
HXDLIN( 786)								while((_g2 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g2);
HXDLIN( 786)									_g2 = (_g2 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 786)								int state = 1;
HXDLIN( 786)								int _g = 0;
HXDLIN( 786)								while((_g < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g);
HXDLIN( 786)									_g = (_g + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 786)								int state1 = 2;
HXDLIN( 786)								int _g1 = 0;
HXDLIN( 786)								while((_g1 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g1);
HXDLIN( 786)									_g1 = (_g1 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 786)							{
HXLINE( 786)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 786)								int state2 = -1;
HXDLIN( 786)								int _g2 = 0;
HXDLIN( 786)								while((_g2 < keys6->length)){
HXLINE( 786)									int key = keys6->__get(_g2);
HXDLIN( 786)									_g2 = (_g2 + 1);
HXDLIN( 786)									if ((key != -1)) {
HXLINE( 786)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 786)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 786)							int state = 2;
HXDLIN( 786)							int _g = 0;
HXDLIN( 786)							while((_g < keys6->length)){
HXLINE( 786)								int key = keys6->__get(_g);
HXDLIN( 786)								_g = (_g + 1);
HXDLIN( 786)								if ((key != -1)) {
HXLINE( 786)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 786)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 786)							int state = 2;
HXDLIN( 786)							int _g = 0;
HXDLIN( 786)							while((_g < keys6->length)){
HXLINE( 786)								int key = keys6->__get(_g);
HXDLIN( 786)								_g = (_g + 1);
HXDLIN( 786)								if ((key != -1)) {
HXLINE( 786)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 786)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 786)							int state = 2;
HXDLIN( 786)							int _g = 0;
HXDLIN( 786)							while((_g < keys6->length)){
HXLINE( 786)								int key = keys6->__get(_g);
HXDLIN( 786)								_g = (_g + 1);
HXDLIN( 786)								if ((key != -1)) {
HXLINE( 786)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 786)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 786)							int state = 2;
HXDLIN( 786)							int _g = 0;
HXDLIN( 786)							while((_g < keys6->length)){
HXLINE( 786)								int key = keys6->__get(_g);
HXDLIN( 786)								_g = (_g + 1);
HXDLIN( 786)								if ((key != -1)) {
HXLINE( 786)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 787)				{
HXLINE( 787)					::Array< int > keys7 = ( (::Array< int >)(keysMap->get(HX_("note_right",8f,ec,ca,4e))) );
HXDLIN( 787)					switch((int)(::Control_obj::NOTE_RIGHT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 787)								int state = 1;
HXDLIN( 787)								int _g = 0;
HXDLIN( 787)								while((_g < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g);
HXDLIN( 787)									_g = (_g + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 787)								int state1 = 2;
HXDLIN( 787)								int _g1 = 0;
HXDLIN( 787)								while((_g1 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g1);
HXDLIN( 787)									_g1 = (_g1 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 787)								int state2 = -1;
HXDLIN( 787)								int _g2 = 0;
HXDLIN( 787)								while((_g2 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g2);
HXDLIN( 787)									_g2 = (_g2 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 787)								int state = 1;
HXDLIN( 787)								int _g = 0;
HXDLIN( 787)								while((_g < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g);
HXDLIN( 787)									_g = (_g + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 787)								int state1 = 2;
HXDLIN( 787)								int _g1 = 0;
HXDLIN( 787)								while((_g1 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g1);
HXDLIN( 787)									_g1 = (_g1 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 787)								int state2 = -1;
HXDLIN( 787)								int _g2 = 0;
HXDLIN( 787)								while((_g2 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g2);
HXDLIN( 787)									_g2 = (_g2 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 787)								int state = 1;
HXDLIN( 787)								int _g = 0;
HXDLIN( 787)								while((_g < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g);
HXDLIN( 787)									_g = (_g + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 787)								int state1 = 2;
HXDLIN( 787)								int _g1 = 0;
HXDLIN( 787)								while((_g1 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g1);
HXDLIN( 787)									_g1 = (_g1 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 787)								int state2 = -1;
HXDLIN( 787)								int _g2 = 0;
HXDLIN( 787)								while((_g2 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g2);
HXDLIN( 787)									_g2 = (_g2 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 787)								int state = 1;
HXDLIN( 787)								int _g = 0;
HXDLIN( 787)								while((_g < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g);
HXDLIN( 787)									_g = (_g + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 787)								int state1 = 2;
HXDLIN( 787)								int _g1 = 0;
HXDLIN( 787)								while((_g1 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g1);
HXDLIN( 787)									_g1 = (_g1 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 787)								int state2 = -1;
HXDLIN( 787)								int _g2 = 0;
HXDLIN( 787)								while((_g2 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g2);
HXDLIN( 787)									_g2 = (_g2 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 787)								int state = 1;
HXDLIN( 787)								int _g = 0;
HXDLIN( 787)								while((_g < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g);
HXDLIN( 787)									_g = (_g + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 787)								int state1 = 2;
HXDLIN( 787)								int _g1 = 0;
HXDLIN( 787)								while((_g1 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g1);
HXDLIN( 787)									_g1 = (_g1 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 787)								int state2 = -1;
HXDLIN( 787)								int _g2 = 0;
HXDLIN( 787)								while((_g2 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g2);
HXDLIN( 787)									_g2 = (_g2 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 787)								int state = 1;
HXDLIN( 787)								int _g = 0;
HXDLIN( 787)								while((_g < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g);
HXDLIN( 787)									_g = (_g + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 787)								int state1 = 2;
HXDLIN( 787)								int _g1 = 0;
HXDLIN( 787)								while((_g1 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g1);
HXDLIN( 787)									_g1 = (_g1 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 787)								int state2 = -1;
HXDLIN( 787)								int _g2 = 0;
HXDLIN( 787)								while((_g2 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g2);
HXDLIN( 787)									_g2 = (_g2 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 787)								int state = 1;
HXDLIN( 787)								int _g = 0;
HXDLIN( 787)								while((_g < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g);
HXDLIN( 787)									_g = (_g + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 787)								int state1 = 2;
HXDLIN( 787)								int _g1 = 0;
HXDLIN( 787)								while((_g1 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g1);
HXDLIN( 787)									_g1 = (_g1 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 787)								int state2 = -1;
HXDLIN( 787)								int _g2 = 0;
HXDLIN( 787)								while((_g2 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g2);
HXDLIN( 787)									_g2 = (_g2 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 787)								int state = 1;
HXDLIN( 787)								int _g = 0;
HXDLIN( 787)								while((_g < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g);
HXDLIN( 787)									_g = (_g + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 787)								int state1 = 2;
HXDLIN( 787)								int _g1 = 0;
HXDLIN( 787)								while((_g1 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g1);
HXDLIN( 787)									_g1 = (_g1 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 787)							{
HXLINE( 787)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 787)								int state2 = -1;
HXDLIN( 787)								int _g2 = 0;
HXDLIN( 787)								while((_g2 < keys7->length)){
HXLINE( 787)									int key = keys7->__get(_g2);
HXDLIN( 787)									_g2 = (_g2 + 1);
HXDLIN( 787)									if ((key != -1)) {
HXLINE( 787)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 787)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 787)							int state = 2;
HXDLIN( 787)							int _g = 0;
HXDLIN( 787)							while((_g < keys7->length)){
HXLINE( 787)								int key = keys7->__get(_g);
HXDLIN( 787)								_g = (_g + 1);
HXDLIN( 787)								if ((key != -1)) {
HXLINE( 787)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 787)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 787)							int state = 2;
HXDLIN( 787)							int _g = 0;
HXDLIN( 787)							while((_g < keys7->length)){
HXLINE( 787)								int key = keys7->__get(_g);
HXDLIN( 787)								_g = (_g + 1);
HXDLIN( 787)								if ((key != -1)) {
HXLINE( 787)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 787)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 787)							int state = 2;
HXDLIN( 787)							int _g = 0;
HXDLIN( 787)							while((_g < keys7->length)){
HXLINE( 787)								int key = keys7->__get(_g);
HXDLIN( 787)								_g = (_g + 1);
HXDLIN( 787)								if ((key != -1)) {
HXLINE( 787)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 787)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 787)							int state = 2;
HXDLIN( 787)							int _g = 0;
HXDLIN( 787)							while((_g < keys7->length)){
HXLINE( 787)								int key = keys7->__get(_g);
HXDLIN( 787)								_g = (_g + 1);
HXDLIN( 787)								if ((key != -1)) {
HXLINE( 787)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 789)				{
HXLINE( 789)					::Array< int > keys8 = ( (::Array< int >)(keysMap->get(HX_("accept",08,93,06,0b))) );
HXDLIN( 789)					switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 789)								int state = 1;
HXDLIN( 789)								int _g = 0;
HXDLIN( 789)								while((_g < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g);
HXDLIN( 789)									_g = (_g + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 789)								int state1 = 2;
HXDLIN( 789)								int _g1 = 0;
HXDLIN( 789)								while((_g1 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g1);
HXDLIN( 789)									_g1 = (_g1 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 789)								int state2 = -1;
HXDLIN( 789)								int _g2 = 0;
HXDLIN( 789)								while((_g2 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g2);
HXDLIN( 789)									_g2 = (_g2 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 789)								int state = 1;
HXDLIN( 789)								int _g = 0;
HXDLIN( 789)								while((_g < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g);
HXDLIN( 789)									_g = (_g + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 789)								int state1 = 2;
HXDLIN( 789)								int _g1 = 0;
HXDLIN( 789)								while((_g1 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g1);
HXDLIN( 789)									_g1 = (_g1 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 789)								int state2 = -1;
HXDLIN( 789)								int _g2 = 0;
HXDLIN( 789)								while((_g2 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g2);
HXDLIN( 789)									_g2 = (_g2 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 789)								int state = 1;
HXDLIN( 789)								int _g = 0;
HXDLIN( 789)								while((_g < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g);
HXDLIN( 789)									_g = (_g + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 789)								int state1 = 2;
HXDLIN( 789)								int _g1 = 0;
HXDLIN( 789)								while((_g1 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g1);
HXDLIN( 789)									_g1 = (_g1 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 789)								int state2 = -1;
HXDLIN( 789)								int _g2 = 0;
HXDLIN( 789)								while((_g2 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g2);
HXDLIN( 789)									_g2 = (_g2 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 789)								int state = 1;
HXDLIN( 789)								int _g = 0;
HXDLIN( 789)								while((_g < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g);
HXDLIN( 789)									_g = (_g + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 789)								int state1 = 2;
HXDLIN( 789)								int _g1 = 0;
HXDLIN( 789)								while((_g1 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g1);
HXDLIN( 789)									_g1 = (_g1 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 789)								int state2 = -1;
HXDLIN( 789)								int _g2 = 0;
HXDLIN( 789)								while((_g2 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g2);
HXDLIN( 789)									_g2 = (_g2 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 789)								int state = 1;
HXDLIN( 789)								int _g = 0;
HXDLIN( 789)								while((_g < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g);
HXDLIN( 789)									_g = (_g + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 789)								int state1 = 2;
HXDLIN( 789)								int _g1 = 0;
HXDLIN( 789)								while((_g1 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g1);
HXDLIN( 789)									_g1 = (_g1 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 789)								int state2 = -1;
HXDLIN( 789)								int _g2 = 0;
HXDLIN( 789)								while((_g2 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g2);
HXDLIN( 789)									_g2 = (_g2 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 789)								int state = 1;
HXDLIN( 789)								int _g = 0;
HXDLIN( 789)								while((_g < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g);
HXDLIN( 789)									_g = (_g + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 789)								int state1 = 2;
HXDLIN( 789)								int _g1 = 0;
HXDLIN( 789)								while((_g1 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g1);
HXDLIN( 789)									_g1 = (_g1 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 789)								int state2 = -1;
HXDLIN( 789)								int _g2 = 0;
HXDLIN( 789)								while((_g2 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g2);
HXDLIN( 789)									_g2 = (_g2 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 789)								int state = 1;
HXDLIN( 789)								int _g = 0;
HXDLIN( 789)								while((_g < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g);
HXDLIN( 789)									_g = (_g + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 789)								int state1 = 2;
HXDLIN( 789)								int _g1 = 0;
HXDLIN( 789)								while((_g1 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g1);
HXDLIN( 789)									_g1 = (_g1 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 789)								int state2 = -1;
HXDLIN( 789)								int _g2 = 0;
HXDLIN( 789)								while((_g2 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g2);
HXDLIN( 789)									_g2 = (_g2 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 789)								int state = 1;
HXDLIN( 789)								int _g = 0;
HXDLIN( 789)								while((_g < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g);
HXDLIN( 789)									_g = (_g + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 789)								int state1 = 2;
HXDLIN( 789)								int _g1 = 0;
HXDLIN( 789)								while((_g1 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g1);
HXDLIN( 789)									_g1 = (_g1 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 789)							{
HXLINE( 789)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 789)								int state2 = -1;
HXDLIN( 789)								int _g2 = 0;
HXDLIN( 789)								while((_g2 < keys8->length)){
HXLINE( 789)									int key = keys8->__get(_g2);
HXDLIN( 789)									_g2 = (_g2 + 1);
HXDLIN( 789)									if ((key != -1)) {
HXLINE( 789)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 789)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 789)							int state = 2;
HXDLIN( 789)							int _g = 0;
HXDLIN( 789)							while((_g < keys8->length)){
HXLINE( 789)								int key = keys8->__get(_g);
HXDLIN( 789)								_g = (_g + 1);
HXDLIN( 789)								if ((key != -1)) {
HXLINE( 789)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 789)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 789)							int state = 2;
HXDLIN( 789)							int _g = 0;
HXDLIN( 789)							while((_g < keys8->length)){
HXLINE( 789)								int key = keys8->__get(_g);
HXDLIN( 789)								_g = (_g + 1);
HXDLIN( 789)								if ((key != -1)) {
HXLINE( 789)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 789)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 789)							int state = 2;
HXDLIN( 789)							int _g = 0;
HXDLIN( 789)							while((_g < keys8->length)){
HXLINE( 789)								int key = keys8->__get(_g);
HXDLIN( 789)								_g = (_g + 1);
HXDLIN( 789)								if ((key != -1)) {
HXLINE( 789)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 789)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 789)							int state = 2;
HXDLIN( 789)							int _g = 0;
HXDLIN( 789)							while((_g < keys8->length)){
HXLINE( 789)								int key = keys8->__get(_g);
HXDLIN( 789)								_g = (_g + 1);
HXDLIN( 789)								if ((key != -1)) {
HXLINE( 789)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 790)				{
HXLINE( 790)					::Array< int > keys9 = ( (::Array< int >)(keysMap->get(HX_("back",27,da,10,41))) );
HXDLIN( 790)					switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 790)								int state = 1;
HXDLIN( 790)								int _g = 0;
HXDLIN( 790)								while((_g < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g);
HXDLIN( 790)									_g = (_g + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 790)								int state1 = 2;
HXDLIN( 790)								int _g1 = 0;
HXDLIN( 790)								while((_g1 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g1);
HXDLIN( 790)									_g1 = (_g1 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 790)								int state2 = -1;
HXDLIN( 790)								int _g2 = 0;
HXDLIN( 790)								while((_g2 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g2);
HXDLIN( 790)									_g2 = (_g2 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 790)								int state = 1;
HXDLIN( 790)								int _g = 0;
HXDLIN( 790)								while((_g < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g);
HXDLIN( 790)									_g = (_g + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 790)								int state1 = 2;
HXDLIN( 790)								int _g1 = 0;
HXDLIN( 790)								while((_g1 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g1);
HXDLIN( 790)									_g1 = (_g1 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 790)								int state2 = -1;
HXDLIN( 790)								int _g2 = 0;
HXDLIN( 790)								while((_g2 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g2);
HXDLIN( 790)									_g2 = (_g2 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 790)								int state = 1;
HXDLIN( 790)								int _g = 0;
HXDLIN( 790)								while((_g < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g);
HXDLIN( 790)									_g = (_g + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 790)								int state1 = 2;
HXDLIN( 790)								int _g1 = 0;
HXDLIN( 790)								while((_g1 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g1);
HXDLIN( 790)									_g1 = (_g1 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 790)								int state2 = -1;
HXDLIN( 790)								int _g2 = 0;
HXDLIN( 790)								while((_g2 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g2);
HXDLIN( 790)									_g2 = (_g2 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 790)								int state = 1;
HXDLIN( 790)								int _g = 0;
HXDLIN( 790)								while((_g < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g);
HXDLIN( 790)									_g = (_g + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 790)								int state1 = 2;
HXDLIN( 790)								int _g1 = 0;
HXDLIN( 790)								while((_g1 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g1);
HXDLIN( 790)									_g1 = (_g1 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 790)								int state2 = -1;
HXDLIN( 790)								int _g2 = 0;
HXDLIN( 790)								while((_g2 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g2);
HXDLIN( 790)									_g2 = (_g2 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 790)								int state = 1;
HXDLIN( 790)								int _g = 0;
HXDLIN( 790)								while((_g < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g);
HXDLIN( 790)									_g = (_g + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 790)								int state1 = 2;
HXDLIN( 790)								int _g1 = 0;
HXDLIN( 790)								while((_g1 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g1);
HXDLIN( 790)									_g1 = (_g1 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 790)								int state2 = -1;
HXDLIN( 790)								int _g2 = 0;
HXDLIN( 790)								while((_g2 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g2);
HXDLIN( 790)									_g2 = (_g2 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 790)								int state = 1;
HXDLIN( 790)								int _g = 0;
HXDLIN( 790)								while((_g < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g);
HXDLIN( 790)									_g = (_g + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 790)								int state1 = 2;
HXDLIN( 790)								int _g1 = 0;
HXDLIN( 790)								while((_g1 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g1);
HXDLIN( 790)									_g1 = (_g1 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 790)								int state2 = -1;
HXDLIN( 790)								int _g2 = 0;
HXDLIN( 790)								while((_g2 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g2);
HXDLIN( 790)									_g2 = (_g2 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 790)								int state = 1;
HXDLIN( 790)								int _g = 0;
HXDLIN( 790)								while((_g < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g);
HXDLIN( 790)									_g = (_g + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 790)								int state1 = 2;
HXDLIN( 790)								int _g1 = 0;
HXDLIN( 790)								while((_g1 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g1);
HXDLIN( 790)									_g1 = (_g1 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 790)								int state2 = -1;
HXDLIN( 790)								int _g2 = 0;
HXDLIN( 790)								while((_g2 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g2);
HXDLIN( 790)									_g2 = (_g2 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 790)								int state = 1;
HXDLIN( 790)								int _g = 0;
HXDLIN( 790)								while((_g < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g);
HXDLIN( 790)									_g = (_g + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 790)								int state1 = 2;
HXDLIN( 790)								int _g1 = 0;
HXDLIN( 790)								while((_g1 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g1);
HXDLIN( 790)									_g1 = (_g1 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 790)							{
HXLINE( 790)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 790)								int state2 = -1;
HXDLIN( 790)								int _g2 = 0;
HXDLIN( 790)								while((_g2 < keys9->length)){
HXLINE( 790)									int key = keys9->__get(_g2);
HXDLIN( 790)									_g2 = (_g2 + 1);
HXDLIN( 790)									if ((key != -1)) {
HXLINE( 790)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 790)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 790)							int state = 2;
HXDLIN( 790)							int _g = 0;
HXDLIN( 790)							while((_g < keys9->length)){
HXLINE( 790)								int key = keys9->__get(_g);
HXDLIN( 790)								_g = (_g + 1);
HXDLIN( 790)								if ((key != -1)) {
HXLINE( 790)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 790)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 790)							int state = 2;
HXDLIN( 790)							int _g = 0;
HXDLIN( 790)							while((_g < keys9->length)){
HXLINE( 790)								int key = keys9->__get(_g);
HXDLIN( 790)								_g = (_g + 1);
HXDLIN( 790)								if ((key != -1)) {
HXLINE( 790)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 790)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 790)							int state = 2;
HXDLIN( 790)							int _g = 0;
HXDLIN( 790)							while((_g < keys9->length)){
HXLINE( 790)								int key = keys9->__get(_g);
HXDLIN( 790)								_g = (_g + 1);
HXDLIN( 790)								if ((key != -1)) {
HXLINE( 790)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 790)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 790)							int state = 2;
HXDLIN( 790)							int _g = 0;
HXDLIN( 790)							while((_g < keys9->length)){
HXLINE( 790)								int key = keys9->__get(_g);
HXDLIN( 790)								_g = (_g + 1);
HXDLIN( 790)								if ((key != -1)) {
HXLINE( 790)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 791)				{
HXLINE( 791)					::Array< int > keys10 = ( (::Array< int >)(keysMap->get(HX_("pause",f6,d6,57,bd))) );
HXDLIN( 791)					switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 791)								int state = 1;
HXDLIN( 791)								int _g = 0;
HXDLIN( 791)								while((_g < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g);
HXDLIN( 791)									_g = (_g + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 791)								int state1 = 2;
HXDLIN( 791)								int _g1 = 0;
HXDLIN( 791)								while((_g1 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g1);
HXDLIN( 791)									_g1 = (_g1 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 791)								int state2 = -1;
HXDLIN( 791)								int _g2 = 0;
HXDLIN( 791)								while((_g2 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g2);
HXDLIN( 791)									_g2 = (_g2 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 791)								int state = 1;
HXDLIN( 791)								int _g = 0;
HXDLIN( 791)								while((_g < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g);
HXDLIN( 791)									_g = (_g + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 791)								int state1 = 2;
HXDLIN( 791)								int _g1 = 0;
HXDLIN( 791)								while((_g1 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g1);
HXDLIN( 791)									_g1 = (_g1 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 791)								int state2 = -1;
HXDLIN( 791)								int _g2 = 0;
HXDLIN( 791)								while((_g2 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g2);
HXDLIN( 791)									_g2 = (_g2 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 791)								int state = 1;
HXDLIN( 791)								int _g = 0;
HXDLIN( 791)								while((_g < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g);
HXDLIN( 791)									_g = (_g + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 791)								int state1 = 2;
HXDLIN( 791)								int _g1 = 0;
HXDLIN( 791)								while((_g1 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g1);
HXDLIN( 791)									_g1 = (_g1 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 791)								int state2 = -1;
HXDLIN( 791)								int _g2 = 0;
HXDLIN( 791)								while((_g2 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g2);
HXDLIN( 791)									_g2 = (_g2 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 791)								int state = 1;
HXDLIN( 791)								int _g = 0;
HXDLIN( 791)								while((_g < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g);
HXDLIN( 791)									_g = (_g + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 791)								int state1 = 2;
HXDLIN( 791)								int _g1 = 0;
HXDLIN( 791)								while((_g1 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g1);
HXDLIN( 791)									_g1 = (_g1 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 791)								int state2 = -1;
HXDLIN( 791)								int _g2 = 0;
HXDLIN( 791)								while((_g2 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g2);
HXDLIN( 791)									_g2 = (_g2 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 791)								int state = 1;
HXDLIN( 791)								int _g = 0;
HXDLIN( 791)								while((_g < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g);
HXDLIN( 791)									_g = (_g + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 791)								int state1 = 2;
HXDLIN( 791)								int _g1 = 0;
HXDLIN( 791)								while((_g1 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g1);
HXDLIN( 791)									_g1 = (_g1 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 791)								int state2 = -1;
HXDLIN( 791)								int _g2 = 0;
HXDLIN( 791)								while((_g2 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g2);
HXDLIN( 791)									_g2 = (_g2 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 791)								int state = 1;
HXDLIN( 791)								int _g = 0;
HXDLIN( 791)								while((_g < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g);
HXDLIN( 791)									_g = (_g + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 791)								int state1 = 2;
HXDLIN( 791)								int _g1 = 0;
HXDLIN( 791)								while((_g1 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g1);
HXDLIN( 791)									_g1 = (_g1 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 791)								int state2 = -1;
HXDLIN( 791)								int _g2 = 0;
HXDLIN( 791)								while((_g2 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g2);
HXDLIN( 791)									_g2 = (_g2 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 791)								int state = 1;
HXDLIN( 791)								int _g = 0;
HXDLIN( 791)								while((_g < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g);
HXDLIN( 791)									_g = (_g + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 791)								int state1 = 2;
HXDLIN( 791)								int _g1 = 0;
HXDLIN( 791)								while((_g1 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g1);
HXDLIN( 791)									_g1 = (_g1 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 791)								int state2 = -1;
HXDLIN( 791)								int _g2 = 0;
HXDLIN( 791)								while((_g2 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g2);
HXDLIN( 791)									_g2 = (_g2 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 791)								int state = 1;
HXDLIN( 791)								int _g = 0;
HXDLIN( 791)								while((_g < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g);
HXDLIN( 791)									_g = (_g + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 791)								int state1 = 2;
HXDLIN( 791)								int _g1 = 0;
HXDLIN( 791)								while((_g1 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g1);
HXDLIN( 791)									_g1 = (_g1 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 791)							{
HXLINE( 791)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 791)								int state2 = -1;
HXDLIN( 791)								int _g2 = 0;
HXDLIN( 791)								while((_g2 < keys10->length)){
HXLINE( 791)									int key = keys10->__get(_g2);
HXDLIN( 791)									_g2 = (_g2 + 1);
HXDLIN( 791)									if ((key != -1)) {
HXLINE( 791)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 791)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 791)							int state = 2;
HXDLIN( 791)							int _g = 0;
HXDLIN( 791)							while((_g < keys10->length)){
HXLINE( 791)								int key = keys10->__get(_g);
HXDLIN( 791)								_g = (_g + 1);
HXDLIN( 791)								if ((key != -1)) {
HXLINE( 791)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 791)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 791)							int state = 2;
HXDLIN( 791)							int _g = 0;
HXDLIN( 791)							while((_g < keys10->length)){
HXLINE( 791)								int key = keys10->__get(_g);
HXDLIN( 791)								_g = (_g + 1);
HXDLIN( 791)								if ((key != -1)) {
HXLINE( 791)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 791)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 791)							int state = 2;
HXDLIN( 791)							int _g = 0;
HXDLIN( 791)							while((_g < keys10->length)){
HXLINE( 791)								int key = keys10->__get(_g);
HXDLIN( 791)								_g = (_g + 1);
HXDLIN( 791)								if ((key != -1)) {
HXLINE( 791)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 791)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 791)							int state = 2;
HXDLIN( 791)							int _g = 0;
HXDLIN( 791)							while((_g < keys10->length)){
HXLINE( 791)								int key = keys10->__get(_g);
HXDLIN( 791)								_g = (_g + 1);
HXDLIN( 791)								if ((key != -1)) {
HXLINE( 791)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
HXLINE( 792)				{
HXLINE( 792)					::Array< int > keys11 = ( (::Array< int >)(keysMap->get(HX_("reset",cf,49,c8,e6))) );
HXDLIN( 792)					switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 792)								int state = 1;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 792)								int state1 = 2;
HXDLIN( 792)								int _g1 = 0;
HXDLIN( 792)								while((_g1 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g1);
HXDLIN( 792)									_g1 = (_g1 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 792)								int state2 = -1;
HXDLIN( 792)								int _g2 = 0;
HXDLIN( 792)								while((_g2 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g2);
HXDLIN( 792)									_g2 = (_g2 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 792)								int state = 1;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 792)								int state1 = 2;
HXDLIN( 792)								int _g1 = 0;
HXDLIN( 792)								while((_g1 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g1);
HXDLIN( 792)									_g1 = (_g1 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 792)								int state2 = -1;
HXDLIN( 792)								int _g2 = 0;
HXDLIN( 792)								while((_g2 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g2);
HXDLIN( 792)									_g2 = (_g2 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 792)								int state = 1;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 792)								int state1 = 2;
HXDLIN( 792)								int _g1 = 0;
HXDLIN( 792)								while((_g1 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g1);
HXDLIN( 792)									_g1 = (_g1 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 792)								int state2 = -1;
HXDLIN( 792)								int _g2 = 0;
HXDLIN( 792)								while((_g2 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g2);
HXDLIN( 792)									_g2 = (_g2 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 792)								int state = 1;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 792)								int state1 = 2;
HXDLIN( 792)								int _g1 = 0;
HXDLIN( 792)								while((_g1 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g1);
HXDLIN( 792)									_g1 = (_g1 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 792)								int state2 = -1;
HXDLIN( 792)								int _g2 = 0;
HXDLIN( 792)								while((_g2 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g2);
HXDLIN( 792)									_g2 = (_g2 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 792)								int state = 1;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 792)								int state1 = 2;
HXDLIN( 792)								int _g1 = 0;
HXDLIN( 792)								while((_g1 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g1);
HXDLIN( 792)									_g1 = (_g1 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 792)								int state2 = -1;
HXDLIN( 792)								int _g2 = 0;
HXDLIN( 792)								while((_g2 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g2);
HXDLIN( 792)									_g2 = (_g2 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 792)								int state = 1;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 792)								int state1 = 2;
HXDLIN( 792)								int _g1 = 0;
HXDLIN( 792)								while((_g1 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g1);
HXDLIN( 792)									_g1 = (_g1 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 792)								int state2 = -1;
HXDLIN( 792)								int _g2 = 0;
HXDLIN( 792)								while((_g2 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g2);
HXDLIN( 792)									_g2 = (_g2 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 792)								int state = 1;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 792)								int state1 = 2;
HXDLIN( 792)								int _g1 = 0;
HXDLIN( 792)								while((_g1 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g1);
HXDLIN( 792)									_g1 = (_g1 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 792)								int state2 = -1;
HXDLIN( 792)								int _g2 = 0;
HXDLIN( 792)								while((_g2 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g2);
HXDLIN( 792)									_g2 = (_g2 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 792)								int state = 1;
HXDLIN( 792)								int _g = 0;
HXDLIN( 792)								while((_g < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g);
HXDLIN( 792)									_g = (_g + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action->addKey(key,state);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 792)								int state1 = 2;
HXDLIN( 792)								int _g1 = 0;
HXDLIN( 792)								while((_g1 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g1);
HXDLIN( 792)									_g1 = (_g1 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action1->addKey(key,state1);
            									}
            								}
            							}
HXDLIN( 792)							{
HXLINE( 792)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 792)								int state2 = -1;
HXDLIN( 792)								int _g2 = 0;
HXDLIN( 792)								while((_g2 < keys11->length)){
HXLINE( 792)									int key = keys11->__get(_g2);
HXDLIN( 792)									_g2 = (_g2 + 1);
HXDLIN( 792)									if ((key != -1)) {
HXLINE( 792)										action2->addKey(key,state2);
            									}
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 792)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 792)							int state = 2;
HXDLIN( 792)							int _g = 0;
HXDLIN( 792)							while((_g < keys11->length)){
HXLINE( 792)								int key = keys11->__get(_g);
HXDLIN( 792)								_g = (_g + 1);
HXDLIN( 792)								if ((key != -1)) {
HXLINE( 792)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 792)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 792)							int state = 2;
HXDLIN( 792)							int _g = 0;
HXDLIN( 792)							while((_g < keys11->length)){
HXLINE( 792)								int key = keys11->__get(_g);
HXDLIN( 792)								_g = (_g + 1);
HXDLIN( 792)								if ((key != -1)) {
HXLINE( 792)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 792)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 792)							int state = 2;
HXDLIN( 792)							int _g = 0;
HXDLIN( 792)							while((_g < keys11->length)){
HXLINE( 792)								int key = keys11->__get(_g);
HXDLIN( 792)								_g = (_g + 1);
HXDLIN( 792)								if ((key != -1)) {
HXLINE( 792)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 792)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 792)							int state = 2;
HXDLIN( 792)							int _g = 0;
HXDLIN( 792)							while((_g < keys11->length)){
HXLINE( 792)								int key = keys11->__get(_g);
HXDLIN( 792)								_g = (_g + 1);
HXDLIN( 792)								if ((key != -1)) {
HXLINE( 792)									action->addKey(key,state);
            								}
            							}
            						}
            						break;
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 806)				if (scheme->_hx_getBool(0)) {
HXLINE( 794)					{
HXLINE( 794)						::Array< int > keys = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1092,1);
HXDLIN( 794)						switch((int)(::Control_obj::UI_UP_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 794)									int state = 1;
HXDLIN( 794)									int _g = 0;
HXDLIN( 794)									while((_g < keys->length)){
HXLINE( 794)										int key = keys->__get(_g);
HXDLIN( 794)										_g = (_g + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 794)									int state1 = 2;
HXDLIN( 794)									int _g1 = 0;
HXDLIN( 794)									while((_g1 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g1);
HXDLIN( 794)										_g1 = (_g1 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 794)									int state2 = -1;
HXDLIN( 794)									int _g2 = 0;
HXDLIN( 794)									while((_g2 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g2);
HXDLIN( 794)										_g2 = (_g2 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 794)									int state = 1;
HXDLIN( 794)									int _g = 0;
HXDLIN( 794)									while((_g < keys->length)){
HXLINE( 794)										int key = keys->__get(_g);
HXDLIN( 794)										_g = (_g + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 794)									int state1 = 2;
HXDLIN( 794)									int _g1 = 0;
HXDLIN( 794)									while((_g1 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g1);
HXDLIN( 794)										_g1 = (_g1 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 794)									int state2 = -1;
HXDLIN( 794)									int _g2 = 0;
HXDLIN( 794)									while((_g2 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g2);
HXDLIN( 794)										_g2 = (_g2 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 794)									int state = 1;
HXDLIN( 794)									int _g = 0;
HXDLIN( 794)									while((_g < keys->length)){
HXLINE( 794)										int key = keys->__get(_g);
HXDLIN( 794)										_g = (_g + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 794)									int state1 = 2;
HXDLIN( 794)									int _g1 = 0;
HXDLIN( 794)									while((_g1 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g1);
HXDLIN( 794)										_g1 = (_g1 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 794)									int state2 = -1;
HXDLIN( 794)									int _g2 = 0;
HXDLIN( 794)									while((_g2 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g2);
HXDLIN( 794)										_g2 = (_g2 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 794)									int state = 1;
HXDLIN( 794)									int _g = 0;
HXDLIN( 794)									while((_g < keys->length)){
HXLINE( 794)										int key = keys->__get(_g);
HXDLIN( 794)										_g = (_g + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 794)									int state1 = 2;
HXDLIN( 794)									int _g1 = 0;
HXDLIN( 794)									while((_g1 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g1);
HXDLIN( 794)										_g1 = (_g1 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 794)									int state2 = -1;
HXDLIN( 794)									int _g2 = 0;
HXDLIN( 794)									while((_g2 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g2);
HXDLIN( 794)										_g2 = (_g2 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 794)									int state = 1;
HXDLIN( 794)									int _g = 0;
HXDLIN( 794)									while((_g < keys->length)){
HXLINE( 794)										int key = keys->__get(_g);
HXDLIN( 794)										_g = (_g + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 794)									int state1 = 2;
HXDLIN( 794)									int _g1 = 0;
HXDLIN( 794)									while((_g1 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g1);
HXDLIN( 794)										_g1 = (_g1 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 794)									int state2 = -1;
HXDLIN( 794)									int _g2 = 0;
HXDLIN( 794)									while((_g2 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g2);
HXDLIN( 794)										_g2 = (_g2 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 794)									int state = 1;
HXDLIN( 794)									int _g = 0;
HXDLIN( 794)									while((_g < keys->length)){
HXLINE( 794)										int key = keys->__get(_g);
HXDLIN( 794)										_g = (_g + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 794)									int state1 = 2;
HXDLIN( 794)									int _g1 = 0;
HXDLIN( 794)									while((_g1 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g1);
HXDLIN( 794)										_g1 = (_g1 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 794)									int state2 = -1;
HXDLIN( 794)									int _g2 = 0;
HXDLIN( 794)									while((_g2 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g2);
HXDLIN( 794)										_g2 = (_g2 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 794)									int state = 1;
HXDLIN( 794)									int _g = 0;
HXDLIN( 794)									while((_g < keys->length)){
HXLINE( 794)										int key = keys->__get(_g);
HXDLIN( 794)										_g = (_g + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 794)									int state1 = 2;
HXDLIN( 794)									int _g1 = 0;
HXDLIN( 794)									while((_g1 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g1);
HXDLIN( 794)										_g1 = (_g1 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 794)									int state2 = -1;
HXDLIN( 794)									int _g2 = 0;
HXDLIN( 794)									while((_g2 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g2);
HXDLIN( 794)										_g2 = (_g2 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 794)									int state = 1;
HXDLIN( 794)									int _g = 0;
HXDLIN( 794)									while((_g < keys->length)){
HXLINE( 794)										int key = keys->__get(_g);
HXDLIN( 794)										_g = (_g + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 794)									int state1 = 2;
HXDLIN( 794)									int _g1 = 0;
HXDLIN( 794)									while((_g1 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g1);
HXDLIN( 794)										_g1 = (_g1 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 794)								{
HXLINE( 794)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 794)									int state2 = -1;
HXDLIN( 794)									int _g2 = 0;
HXDLIN( 794)									while((_g2 < keys->length)){
HXLINE( 794)										int key = keys->__get(_g2);
HXDLIN( 794)										_g2 = (_g2 + 1);
HXDLIN( 794)										if ((key != -1)) {
HXLINE( 794)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 794)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 794)								int state = 2;
HXDLIN( 794)								int _g = 0;
HXDLIN( 794)								while((_g < keys->length)){
HXLINE( 794)									int key = keys->__get(_g);
HXDLIN( 794)									_g = (_g + 1);
HXDLIN( 794)									if ((key != -1)) {
HXLINE( 794)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 794)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 794)								int state = 2;
HXDLIN( 794)								int _g = 0;
HXDLIN( 794)								while((_g < keys->length)){
HXLINE( 794)									int key = keys->__get(_g);
HXDLIN( 794)									_g = (_g + 1);
HXDLIN( 794)									if ((key != -1)) {
HXLINE( 794)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 794)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 794)								int state = 2;
HXDLIN( 794)								int _g = 0;
HXDLIN( 794)								while((_g < keys->length)){
HXLINE( 794)									int key = keys->__get(_g);
HXDLIN( 794)									_g = (_g + 1);
HXDLIN( 794)									if ((key != -1)) {
HXLINE( 794)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 794)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 794)								int state = 2;
HXDLIN( 794)								int _g = 0;
HXDLIN( 794)								while((_g < keys->length)){
HXLINE( 794)									int key = keys->__get(_g);
HXDLIN( 794)									_g = (_g + 1);
HXDLIN( 794)									if ((key != -1)) {
HXLINE( 794)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 795)					{
HXLINE( 795)						::Array< int > keys1 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1093,1);
HXDLIN( 795)						switch((int)(::Control_obj::UI_DOWN_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 795)									int state = 1;
HXDLIN( 795)									int _g = 0;
HXDLIN( 795)									while((_g < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g);
HXDLIN( 795)										_g = (_g + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 795)									int state1 = 2;
HXDLIN( 795)									int _g1 = 0;
HXDLIN( 795)									while((_g1 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g1);
HXDLIN( 795)										_g1 = (_g1 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 795)									int state2 = -1;
HXDLIN( 795)									int _g2 = 0;
HXDLIN( 795)									while((_g2 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g2);
HXDLIN( 795)										_g2 = (_g2 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 795)									int state = 1;
HXDLIN( 795)									int _g = 0;
HXDLIN( 795)									while((_g < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g);
HXDLIN( 795)										_g = (_g + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 795)									int state1 = 2;
HXDLIN( 795)									int _g1 = 0;
HXDLIN( 795)									while((_g1 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g1);
HXDLIN( 795)										_g1 = (_g1 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 795)									int state2 = -1;
HXDLIN( 795)									int _g2 = 0;
HXDLIN( 795)									while((_g2 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g2);
HXDLIN( 795)										_g2 = (_g2 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 795)									int state = 1;
HXDLIN( 795)									int _g = 0;
HXDLIN( 795)									while((_g < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g);
HXDLIN( 795)										_g = (_g + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 795)									int state1 = 2;
HXDLIN( 795)									int _g1 = 0;
HXDLIN( 795)									while((_g1 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g1);
HXDLIN( 795)										_g1 = (_g1 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 795)									int state2 = -1;
HXDLIN( 795)									int _g2 = 0;
HXDLIN( 795)									while((_g2 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g2);
HXDLIN( 795)										_g2 = (_g2 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 795)									int state = 1;
HXDLIN( 795)									int _g = 0;
HXDLIN( 795)									while((_g < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g);
HXDLIN( 795)										_g = (_g + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 795)									int state1 = 2;
HXDLIN( 795)									int _g1 = 0;
HXDLIN( 795)									while((_g1 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g1);
HXDLIN( 795)										_g1 = (_g1 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 795)									int state2 = -1;
HXDLIN( 795)									int _g2 = 0;
HXDLIN( 795)									while((_g2 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g2);
HXDLIN( 795)										_g2 = (_g2 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 795)									int state = 1;
HXDLIN( 795)									int _g = 0;
HXDLIN( 795)									while((_g < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g);
HXDLIN( 795)										_g = (_g + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 795)									int state1 = 2;
HXDLIN( 795)									int _g1 = 0;
HXDLIN( 795)									while((_g1 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g1);
HXDLIN( 795)										_g1 = (_g1 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 795)									int state2 = -1;
HXDLIN( 795)									int _g2 = 0;
HXDLIN( 795)									while((_g2 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g2);
HXDLIN( 795)										_g2 = (_g2 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 795)									int state = 1;
HXDLIN( 795)									int _g = 0;
HXDLIN( 795)									while((_g < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g);
HXDLIN( 795)										_g = (_g + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 795)									int state1 = 2;
HXDLIN( 795)									int _g1 = 0;
HXDLIN( 795)									while((_g1 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g1);
HXDLIN( 795)										_g1 = (_g1 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 795)									int state2 = -1;
HXDLIN( 795)									int _g2 = 0;
HXDLIN( 795)									while((_g2 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g2);
HXDLIN( 795)										_g2 = (_g2 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 795)									int state = 1;
HXDLIN( 795)									int _g = 0;
HXDLIN( 795)									while((_g < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g);
HXDLIN( 795)										_g = (_g + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 795)									int state1 = 2;
HXDLIN( 795)									int _g1 = 0;
HXDLIN( 795)									while((_g1 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g1);
HXDLIN( 795)										_g1 = (_g1 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 795)									int state2 = -1;
HXDLIN( 795)									int _g2 = 0;
HXDLIN( 795)									while((_g2 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g2);
HXDLIN( 795)										_g2 = (_g2 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 795)									int state = 1;
HXDLIN( 795)									int _g = 0;
HXDLIN( 795)									while((_g < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g);
HXDLIN( 795)										_g = (_g + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 795)									int state1 = 2;
HXDLIN( 795)									int _g1 = 0;
HXDLIN( 795)									while((_g1 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g1);
HXDLIN( 795)										_g1 = (_g1 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 795)								{
HXLINE( 795)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 795)									int state2 = -1;
HXDLIN( 795)									int _g2 = 0;
HXDLIN( 795)									while((_g2 < keys1->length)){
HXLINE( 795)										int key = keys1->__get(_g2);
HXDLIN( 795)										_g2 = (_g2 + 1);
HXDLIN( 795)										if ((key != -1)) {
HXLINE( 795)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 795)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 795)								int state = 2;
HXDLIN( 795)								int _g = 0;
HXDLIN( 795)								while((_g < keys1->length)){
HXLINE( 795)									int key = keys1->__get(_g);
HXDLIN( 795)									_g = (_g + 1);
HXDLIN( 795)									if ((key != -1)) {
HXLINE( 795)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 795)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 795)								int state = 2;
HXDLIN( 795)								int _g = 0;
HXDLIN( 795)								while((_g < keys1->length)){
HXLINE( 795)									int key = keys1->__get(_g);
HXDLIN( 795)									_g = (_g + 1);
HXDLIN( 795)									if ((key != -1)) {
HXLINE( 795)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 795)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 795)								int state = 2;
HXDLIN( 795)								int _g = 0;
HXDLIN( 795)								while((_g < keys1->length)){
HXLINE( 795)									int key = keys1->__get(_g);
HXDLIN( 795)									_g = (_g + 1);
HXDLIN( 795)									if ((key != -1)) {
HXLINE( 795)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 795)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 795)								int state = 2;
HXDLIN( 795)								int _g = 0;
HXDLIN( 795)								while((_g < keys1->length)){
HXLINE( 795)									int key = keys1->__get(_g);
HXDLIN( 795)									_g = (_g + 1);
HXDLIN( 795)									if ((key != -1)) {
HXLINE( 795)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 796)					{
HXLINE( 796)						::Array< int > keys2 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1094,1);
HXDLIN( 796)						switch((int)(::Control_obj::UI_LEFT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 796)									int state = 1;
HXDLIN( 796)									int _g = 0;
HXDLIN( 796)									while((_g < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g);
HXDLIN( 796)										_g = (_g + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 796)									int state1 = 2;
HXDLIN( 796)									int _g1 = 0;
HXDLIN( 796)									while((_g1 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g1);
HXDLIN( 796)										_g1 = (_g1 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 796)									int state2 = -1;
HXDLIN( 796)									int _g2 = 0;
HXDLIN( 796)									while((_g2 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g2);
HXDLIN( 796)										_g2 = (_g2 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 796)									int state = 1;
HXDLIN( 796)									int _g = 0;
HXDLIN( 796)									while((_g < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g);
HXDLIN( 796)										_g = (_g + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 796)									int state1 = 2;
HXDLIN( 796)									int _g1 = 0;
HXDLIN( 796)									while((_g1 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g1);
HXDLIN( 796)										_g1 = (_g1 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 796)									int state2 = -1;
HXDLIN( 796)									int _g2 = 0;
HXDLIN( 796)									while((_g2 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g2);
HXDLIN( 796)										_g2 = (_g2 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 796)									int state = 1;
HXDLIN( 796)									int _g = 0;
HXDLIN( 796)									while((_g < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g);
HXDLIN( 796)										_g = (_g + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 796)									int state1 = 2;
HXDLIN( 796)									int _g1 = 0;
HXDLIN( 796)									while((_g1 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g1);
HXDLIN( 796)										_g1 = (_g1 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 796)									int state2 = -1;
HXDLIN( 796)									int _g2 = 0;
HXDLIN( 796)									while((_g2 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g2);
HXDLIN( 796)										_g2 = (_g2 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 796)									int state = 1;
HXDLIN( 796)									int _g = 0;
HXDLIN( 796)									while((_g < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g);
HXDLIN( 796)										_g = (_g + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 796)									int state1 = 2;
HXDLIN( 796)									int _g1 = 0;
HXDLIN( 796)									while((_g1 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g1);
HXDLIN( 796)										_g1 = (_g1 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 796)									int state2 = -1;
HXDLIN( 796)									int _g2 = 0;
HXDLIN( 796)									while((_g2 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g2);
HXDLIN( 796)										_g2 = (_g2 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 796)									int state = 1;
HXDLIN( 796)									int _g = 0;
HXDLIN( 796)									while((_g < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g);
HXDLIN( 796)										_g = (_g + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 796)									int state1 = 2;
HXDLIN( 796)									int _g1 = 0;
HXDLIN( 796)									while((_g1 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g1);
HXDLIN( 796)										_g1 = (_g1 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 796)									int state2 = -1;
HXDLIN( 796)									int _g2 = 0;
HXDLIN( 796)									while((_g2 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g2);
HXDLIN( 796)										_g2 = (_g2 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 796)									int state = 1;
HXDLIN( 796)									int _g = 0;
HXDLIN( 796)									while((_g < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g);
HXDLIN( 796)										_g = (_g + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 796)									int state1 = 2;
HXDLIN( 796)									int _g1 = 0;
HXDLIN( 796)									while((_g1 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g1);
HXDLIN( 796)										_g1 = (_g1 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 796)									int state2 = -1;
HXDLIN( 796)									int _g2 = 0;
HXDLIN( 796)									while((_g2 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g2);
HXDLIN( 796)										_g2 = (_g2 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 796)									int state = 1;
HXDLIN( 796)									int _g = 0;
HXDLIN( 796)									while((_g < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g);
HXDLIN( 796)										_g = (_g + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 796)									int state1 = 2;
HXDLIN( 796)									int _g1 = 0;
HXDLIN( 796)									while((_g1 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g1);
HXDLIN( 796)										_g1 = (_g1 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 796)									int state2 = -1;
HXDLIN( 796)									int _g2 = 0;
HXDLIN( 796)									while((_g2 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g2);
HXDLIN( 796)										_g2 = (_g2 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 796)									int state = 1;
HXDLIN( 796)									int _g = 0;
HXDLIN( 796)									while((_g < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g);
HXDLIN( 796)										_g = (_g + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 796)									int state1 = 2;
HXDLIN( 796)									int _g1 = 0;
HXDLIN( 796)									while((_g1 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g1);
HXDLIN( 796)										_g1 = (_g1 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 796)								{
HXLINE( 796)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 796)									int state2 = -1;
HXDLIN( 796)									int _g2 = 0;
HXDLIN( 796)									while((_g2 < keys2->length)){
HXLINE( 796)										int key = keys2->__get(_g2);
HXDLIN( 796)										_g2 = (_g2 + 1);
HXDLIN( 796)										if ((key != -1)) {
HXLINE( 796)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 796)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 796)								int state = 2;
HXDLIN( 796)								int _g = 0;
HXDLIN( 796)								while((_g < keys2->length)){
HXLINE( 796)									int key = keys2->__get(_g);
HXDLIN( 796)									_g = (_g + 1);
HXDLIN( 796)									if ((key != -1)) {
HXLINE( 796)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 796)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 796)								int state = 2;
HXDLIN( 796)								int _g = 0;
HXDLIN( 796)								while((_g < keys2->length)){
HXLINE( 796)									int key = keys2->__get(_g);
HXDLIN( 796)									_g = (_g + 1);
HXDLIN( 796)									if ((key != -1)) {
HXLINE( 796)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 796)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 796)								int state = 2;
HXDLIN( 796)								int _g = 0;
HXDLIN( 796)								while((_g < keys2->length)){
HXLINE( 796)									int key = keys2->__get(_g);
HXDLIN( 796)									_g = (_g + 1);
HXDLIN( 796)									if ((key != -1)) {
HXLINE( 796)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 796)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 796)								int state = 2;
HXDLIN( 796)								int _g = 0;
HXDLIN( 796)								while((_g < keys2->length)){
HXLINE( 796)									int key = keys2->__get(_g);
HXDLIN( 796)									_g = (_g + 1);
HXDLIN( 796)									if ((key != -1)) {
HXLINE( 796)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 797)					{
HXLINE( 797)						::Array< int > keys3 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1095,1);
HXDLIN( 797)						switch((int)(::Control_obj::UI_RIGHT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 797)									int state = 1;
HXDLIN( 797)									int _g = 0;
HXDLIN( 797)									while((_g < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g);
HXDLIN( 797)										_g = (_g + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 797)									int state1 = 2;
HXDLIN( 797)									int _g1 = 0;
HXDLIN( 797)									while((_g1 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g1);
HXDLIN( 797)										_g1 = (_g1 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 797)									int state2 = -1;
HXDLIN( 797)									int _g2 = 0;
HXDLIN( 797)									while((_g2 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g2);
HXDLIN( 797)										_g2 = (_g2 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 797)									int state = 1;
HXDLIN( 797)									int _g = 0;
HXDLIN( 797)									while((_g < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g);
HXDLIN( 797)										_g = (_g + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 797)									int state1 = 2;
HXDLIN( 797)									int _g1 = 0;
HXDLIN( 797)									while((_g1 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g1);
HXDLIN( 797)										_g1 = (_g1 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 797)									int state2 = -1;
HXDLIN( 797)									int _g2 = 0;
HXDLIN( 797)									while((_g2 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g2);
HXDLIN( 797)										_g2 = (_g2 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 797)									int state = 1;
HXDLIN( 797)									int _g = 0;
HXDLIN( 797)									while((_g < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g);
HXDLIN( 797)										_g = (_g + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 797)									int state1 = 2;
HXDLIN( 797)									int _g1 = 0;
HXDLIN( 797)									while((_g1 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g1);
HXDLIN( 797)										_g1 = (_g1 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 797)									int state2 = -1;
HXDLIN( 797)									int _g2 = 0;
HXDLIN( 797)									while((_g2 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g2);
HXDLIN( 797)										_g2 = (_g2 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 797)									int state = 1;
HXDLIN( 797)									int _g = 0;
HXDLIN( 797)									while((_g < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g);
HXDLIN( 797)										_g = (_g + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 797)									int state1 = 2;
HXDLIN( 797)									int _g1 = 0;
HXDLIN( 797)									while((_g1 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g1);
HXDLIN( 797)										_g1 = (_g1 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 797)									int state2 = -1;
HXDLIN( 797)									int _g2 = 0;
HXDLIN( 797)									while((_g2 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g2);
HXDLIN( 797)										_g2 = (_g2 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 797)									int state = 1;
HXDLIN( 797)									int _g = 0;
HXDLIN( 797)									while((_g < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g);
HXDLIN( 797)										_g = (_g + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 797)									int state1 = 2;
HXDLIN( 797)									int _g1 = 0;
HXDLIN( 797)									while((_g1 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g1);
HXDLIN( 797)										_g1 = (_g1 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 797)									int state2 = -1;
HXDLIN( 797)									int _g2 = 0;
HXDLIN( 797)									while((_g2 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g2);
HXDLIN( 797)										_g2 = (_g2 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 797)									int state = 1;
HXDLIN( 797)									int _g = 0;
HXDLIN( 797)									while((_g < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g);
HXDLIN( 797)										_g = (_g + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 797)									int state1 = 2;
HXDLIN( 797)									int _g1 = 0;
HXDLIN( 797)									while((_g1 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g1);
HXDLIN( 797)										_g1 = (_g1 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 797)									int state2 = -1;
HXDLIN( 797)									int _g2 = 0;
HXDLIN( 797)									while((_g2 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g2);
HXDLIN( 797)										_g2 = (_g2 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 797)									int state = 1;
HXDLIN( 797)									int _g = 0;
HXDLIN( 797)									while((_g < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g);
HXDLIN( 797)										_g = (_g + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 797)									int state1 = 2;
HXDLIN( 797)									int _g1 = 0;
HXDLIN( 797)									while((_g1 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g1);
HXDLIN( 797)										_g1 = (_g1 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 797)									int state2 = -1;
HXDLIN( 797)									int _g2 = 0;
HXDLIN( 797)									while((_g2 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g2);
HXDLIN( 797)										_g2 = (_g2 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 797)									int state = 1;
HXDLIN( 797)									int _g = 0;
HXDLIN( 797)									while((_g < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g);
HXDLIN( 797)										_g = (_g + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 797)									int state1 = 2;
HXDLIN( 797)									int _g1 = 0;
HXDLIN( 797)									while((_g1 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g1);
HXDLIN( 797)										_g1 = (_g1 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 797)								{
HXLINE( 797)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 797)									int state2 = -1;
HXDLIN( 797)									int _g2 = 0;
HXDLIN( 797)									while((_g2 < keys3->length)){
HXLINE( 797)										int key = keys3->__get(_g2);
HXDLIN( 797)										_g2 = (_g2 + 1);
HXDLIN( 797)										if ((key != -1)) {
HXLINE( 797)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 797)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 797)								int state = 2;
HXDLIN( 797)								int _g = 0;
HXDLIN( 797)								while((_g < keys3->length)){
HXLINE( 797)									int key = keys3->__get(_g);
HXDLIN( 797)									_g = (_g + 1);
HXDLIN( 797)									if ((key != -1)) {
HXLINE( 797)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 797)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 797)								int state = 2;
HXDLIN( 797)								int _g = 0;
HXDLIN( 797)								while((_g < keys3->length)){
HXLINE( 797)									int key = keys3->__get(_g);
HXDLIN( 797)									_g = (_g + 1);
HXDLIN( 797)									if ((key != -1)) {
HXLINE( 797)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 797)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 797)								int state = 2;
HXDLIN( 797)								int _g = 0;
HXDLIN( 797)								while((_g < keys3->length)){
HXLINE( 797)									int key = keys3->__get(_g);
HXDLIN( 797)									_g = (_g + 1);
HXDLIN( 797)									if ((key != -1)) {
HXLINE( 797)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 797)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 797)								int state = 2;
HXDLIN( 797)								int _g = 0;
HXDLIN( 797)								while((_g < keys3->length)){
HXLINE( 797)									int key = keys3->__get(_g);
HXDLIN( 797)									_g = (_g + 1);
HXDLIN( 797)									if ((key != -1)) {
HXLINE( 797)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 798)					{
HXLINE( 798)						::Array< int > keys4 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1096,1);
HXDLIN( 798)						switch((int)(::Control_obj::NOTE_UP_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 798)									int state = 1;
HXDLIN( 798)									int _g = 0;
HXDLIN( 798)									while((_g < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g);
HXDLIN( 798)										_g = (_g + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 798)									int state1 = 2;
HXDLIN( 798)									int _g1 = 0;
HXDLIN( 798)									while((_g1 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g1);
HXDLIN( 798)										_g1 = (_g1 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 798)									int state2 = -1;
HXDLIN( 798)									int _g2 = 0;
HXDLIN( 798)									while((_g2 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g2);
HXDLIN( 798)										_g2 = (_g2 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 798)									int state = 1;
HXDLIN( 798)									int _g = 0;
HXDLIN( 798)									while((_g < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g);
HXDLIN( 798)										_g = (_g + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 798)									int state1 = 2;
HXDLIN( 798)									int _g1 = 0;
HXDLIN( 798)									while((_g1 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g1);
HXDLIN( 798)										_g1 = (_g1 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 798)									int state2 = -1;
HXDLIN( 798)									int _g2 = 0;
HXDLIN( 798)									while((_g2 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g2);
HXDLIN( 798)										_g2 = (_g2 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 798)									int state = 1;
HXDLIN( 798)									int _g = 0;
HXDLIN( 798)									while((_g < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g);
HXDLIN( 798)										_g = (_g + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 798)									int state1 = 2;
HXDLIN( 798)									int _g1 = 0;
HXDLIN( 798)									while((_g1 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g1);
HXDLIN( 798)										_g1 = (_g1 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 798)									int state2 = -1;
HXDLIN( 798)									int _g2 = 0;
HXDLIN( 798)									while((_g2 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g2);
HXDLIN( 798)										_g2 = (_g2 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 798)									int state = 1;
HXDLIN( 798)									int _g = 0;
HXDLIN( 798)									while((_g < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g);
HXDLIN( 798)										_g = (_g + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 798)									int state1 = 2;
HXDLIN( 798)									int _g1 = 0;
HXDLIN( 798)									while((_g1 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g1);
HXDLIN( 798)										_g1 = (_g1 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 798)									int state2 = -1;
HXDLIN( 798)									int _g2 = 0;
HXDLIN( 798)									while((_g2 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g2);
HXDLIN( 798)										_g2 = (_g2 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 798)									int state = 1;
HXDLIN( 798)									int _g = 0;
HXDLIN( 798)									while((_g < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g);
HXDLIN( 798)										_g = (_g + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 798)									int state1 = 2;
HXDLIN( 798)									int _g1 = 0;
HXDLIN( 798)									while((_g1 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g1);
HXDLIN( 798)										_g1 = (_g1 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 798)									int state2 = -1;
HXDLIN( 798)									int _g2 = 0;
HXDLIN( 798)									while((_g2 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g2);
HXDLIN( 798)										_g2 = (_g2 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 798)									int state = 1;
HXDLIN( 798)									int _g = 0;
HXDLIN( 798)									while((_g < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g);
HXDLIN( 798)										_g = (_g + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 798)									int state1 = 2;
HXDLIN( 798)									int _g1 = 0;
HXDLIN( 798)									while((_g1 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g1);
HXDLIN( 798)										_g1 = (_g1 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 798)									int state2 = -1;
HXDLIN( 798)									int _g2 = 0;
HXDLIN( 798)									while((_g2 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g2);
HXDLIN( 798)										_g2 = (_g2 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 798)									int state = 1;
HXDLIN( 798)									int _g = 0;
HXDLIN( 798)									while((_g < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g);
HXDLIN( 798)										_g = (_g + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 798)									int state1 = 2;
HXDLIN( 798)									int _g1 = 0;
HXDLIN( 798)									while((_g1 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g1);
HXDLIN( 798)										_g1 = (_g1 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 798)									int state2 = -1;
HXDLIN( 798)									int _g2 = 0;
HXDLIN( 798)									while((_g2 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g2);
HXDLIN( 798)										_g2 = (_g2 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 798)									int state = 1;
HXDLIN( 798)									int _g = 0;
HXDLIN( 798)									while((_g < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g);
HXDLIN( 798)										_g = (_g + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 798)									int state1 = 2;
HXDLIN( 798)									int _g1 = 0;
HXDLIN( 798)									while((_g1 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g1);
HXDLIN( 798)										_g1 = (_g1 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 798)								{
HXLINE( 798)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 798)									int state2 = -1;
HXDLIN( 798)									int _g2 = 0;
HXDLIN( 798)									while((_g2 < keys4->length)){
HXLINE( 798)										int key = keys4->__get(_g2);
HXDLIN( 798)										_g2 = (_g2 + 1);
HXDLIN( 798)										if ((key != -1)) {
HXLINE( 798)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 798)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 798)								int state = 2;
HXDLIN( 798)								int _g = 0;
HXDLIN( 798)								while((_g < keys4->length)){
HXLINE( 798)									int key = keys4->__get(_g);
HXDLIN( 798)									_g = (_g + 1);
HXDLIN( 798)									if ((key != -1)) {
HXLINE( 798)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 798)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 798)								int state = 2;
HXDLIN( 798)								int _g = 0;
HXDLIN( 798)								while((_g < keys4->length)){
HXLINE( 798)									int key = keys4->__get(_g);
HXDLIN( 798)									_g = (_g + 1);
HXDLIN( 798)									if ((key != -1)) {
HXLINE( 798)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 798)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 798)								int state = 2;
HXDLIN( 798)								int _g = 0;
HXDLIN( 798)								while((_g < keys4->length)){
HXLINE( 798)									int key = keys4->__get(_g);
HXDLIN( 798)									_g = (_g + 1);
HXDLIN( 798)									if ((key != -1)) {
HXLINE( 798)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 798)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 798)								int state = 2;
HXDLIN( 798)								int _g = 0;
HXDLIN( 798)								while((_g < keys4->length)){
HXLINE( 798)									int key = keys4->__get(_g);
HXDLIN( 798)									_g = (_g + 1);
HXDLIN( 798)									if ((key != -1)) {
HXLINE( 798)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 799)					{
HXLINE( 799)						::Array< int > keys5 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1097,1);
HXDLIN( 799)						switch((int)(::Control_obj::NOTE_DOWN_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 799)									int state = 1;
HXDLIN( 799)									int _g = 0;
HXDLIN( 799)									while((_g < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g);
HXDLIN( 799)										_g = (_g + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 799)									int state1 = 2;
HXDLIN( 799)									int _g1 = 0;
HXDLIN( 799)									while((_g1 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g1);
HXDLIN( 799)										_g1 = (_g1 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 799)									int state2 = -1;
HXDLIN( 799)									int _g2 = 0;
HXDLIN( 799)									while((_g2 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g2);
HXDLIN( 799)										_g2 = (_g2 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 799)									int state = 1;
HXDLIN( 799)									int _g = 0;
HXDLIN( 799)									while((_g < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g);
HXDLIN( 799)										_g = (_g + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 799)									int state1 = 2;
HXDLIN( 799)									int _g1 = 0;
HXDLIN( 799)									while((_g1 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g1);
HXDLIN( 799)										_g1 = (_g1 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 799)									int state2 = -1;
HXDLIN( 799)									int _g2 = 0;
HXDLIN( 799)									while((_g2 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g2);
HXDLIN( 799)										_g2 = (_g2 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 799)									int state = 1;
HXDLIN( 799)									int _g = 0;
HXDLIN( 799)									while((_g < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g);
HXDLIN( 799)										_g = (_g + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 799)									int state1 = 2;
HXDLIN( 799)									int _g1 = 0;
HXDLIN( 799)									while((_g1 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g1);
HXDLIN( 799)										_g1 = (_g1 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 799)									int state2 = -1;
HXDLIN( 799)									int _g2 = 0;
HXDLIN( 799)									while((_g2 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g2);
HXDLIN( 799)										_g2 = (_g2 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 799)									int state = 1;
HXDLIN( 799)									int _g = 0;
HXDLIN( 799)									while((_g < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g);
HXDLIN( 799)										_g = (_g + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 799)									int state1 = 2;
HXDLIN( 799)									int _g1 = 0;
HXDLIN( 799)									while((_g1 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g1);
HXDLIN( 799)										_g1 = (_g1 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 799)									int state2 = -1;
HXDLIN( 799)									int _g2 = 0;
HXDLIN( 799)									while((_g2 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g2);
HXDLIN( 799)										_g2 = (_g2 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 799)									int state = 1;
HXDLIN( 799)									int _g = 0;
HXDLIN( 799)									while((_g < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g);
HXDLIN( 799)										_g = (_g + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 799)									int state1 = 2;
HXDLIN( 799)									int _g1 = 0;
HXDLIN( 799)									while((_g1 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g1);
HXDLIN( 799)										_g1 = (_g1 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 799)									int state2 = -1;
HXDLIN( 799)									int _g2 = 0;
HXDLIN( 799)									while((_g2 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g2);
HXDLIN( 799)										_g2 = (_g2 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 799)									int state = 1;
HXDLIN( 799)									int _g = 0;
HXDLIN( 799)									while((_g < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g);
HXDLIN( 799)										_g = (_g + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 799)									int state1 = 2;
HXDLIN( 799)									int _g1 = 0;
HXDLIN( 799)									while((_g1 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g1);
HXDLIN( 799)										_g1 = (_g1 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 799)									int state2 = -1;
HXDLIN( 799)									int _g2 = 0;
HXDLIN( 799)									while((_g2 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g2);
HXDLIN( 799)										_g2 = (_g2 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 799)									int state = 1;
HXDLIN( 799)									int _g = 0;
HXDLIN( 799)									while((_g < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g);
HXDLIN( 799)										_g = (_g + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 799)									int state1 = 2;
HXDLIN( 799)									int _g1 = 0;
HXDLIN( 799)									while((_g1 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g1);
HXDLIN( 799)										_g1 = (_g1 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 799)									int state2 = -1;
HXDLIN( 799)									int _g2 = 0;
HXDLIN( 799)									while((_g2 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g2);
HXDLIN( 799)										_g2 = (_g2 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 799)									int state = 1;
HXDLIN( 799)									int _g = 0;
HXDLIN( 799)									while((_g < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g);
HXDLIN( 799)										_g = (_g + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 799)									int state1 = 2;
HXDLIN( 799)									int _g1 = 0;
HXDLIN( 799)									while((_g1 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g1);
HXDLIN( 799)										_g1 = (_g1 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 799)								{
HXLINE( 799)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 799)									int state2 = -1;
HXDLIN( 799)									int _g2 = 0;
HXDLIN( 799)									while((_g2 < keys5->length)){
HXLINE( 799)										int key = keys5->__get(_g2);
HXDLIN( 799)										_g2 = (_g2 + 1);
HXDLIN( 799)										if ((key != -1)) {
HXLINE( 799)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 799)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 799)								int state = 2;
HXDLIN( 799)								int _g = 0;
HXDLIN( 799)								while((_g < keys5->length)){
HXLINE( 799)									int key = keys5->__get(_g);
HXDLIN( 799)									_g = (_g + 1);
HXDLIN( 799)									if ((key != -1)) {
HXLINE( 799)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 799)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 799)								int state = 2;
HXDLIN( 799)								int _g = 0;
HXDLIN( 799)								while((_g < keys5->length)){
HXLINE( 799)									int key = keys5->__get(_g);
HXDLIN( 799)									_g = (_g + 1);
HXDLIN( 799)									if ((key != -1)) {
HXLINE( 799)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 799)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 799)								int state = 2;
HXDLIN( 799)								int _g = 0;
HXDLIN( 799)								while((_g < keys5->length)){
HXLINE( 799)									int key = keys5->__get(_g);
HXDLIN( 799)									_g = (_g + 1);
HXDLIN( 799)									if ((key != -1)) {
HXLINE( 799)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 799)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 799)								int state = 2;
HXDLIN( 799)								int _g = 0;
HXDLIN( 799)								while((_g < keys5->length)){
HXLINE( 799)									int key = keys5->__get(_g);
HXDLIN( 799)									_g = (_g + 1);
HXDLIN( 799)									if ((key != -1)) {
HXLINE( 799)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 800)					{
HXLINE( 800)						::Array< int > keys6 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1098,1);
HXDLIN( 800)						switch((int)(::Control_obj::NOTE_LEFT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 800)									int state = 1;
HXDLIN( 800)									int _g = 0;
HXDLIN( 800)									while((_g < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g);
HXDLIN( 800)										_g = (_g + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 800)									int state1 = 2;
HXDLIN( 800)									int _g1 = 0;
HXDLIN( 800)									while((_g1 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g1);
HXDLIN( 800)										_g1 = (_g1 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 800)									int state2 = -1;
HXDLIN( 800)									int _g2 = 0;
HXDLIN( 800)									while((_g2 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g2);
HXDLIN( 800)										_g2 = (_g2 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 800)									int state = 1;
HXDLIN( 800)									int _g = 0;
HXDLIN( 800)									while((_g < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g);
HXDLIN( 800)										_g = (_g + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 800)									int state1 = 2;
HXDLIN( 800)									int _g1 = 0;
HXDLIN( 800)									while((_g1 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g1);
HXDLIN( 800)										_g1 = (_g1 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 800)									int state2 = -1;
HXDLIN( 800)									int _g2 = 0;
HXDLIN( 800)									while((_g2 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g2);
HXDLIN( 800)										_g2 = (_g2 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 800)									int state = 1;
HXDLIN( 800)									int _g = 0;
HXDLIN( 800)									while((_g < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g);
HXDLIN( 800)										_g = (_g + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 800)									int state1 = 2;
HXDLIN( 800)									int _g1 = 0;
HXDLIN( 800)									while((_g1 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g1);
HXDLIN( 800)										_g1 = (_g1 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 800)									int state2 = -1;
HXDLIN( 800)									int _g2 = 0;
HXDLIN( 800)									while((_g2 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g2);
HXDLIN( 800)										_g2 = (_g2 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 800)									int state = 1;
HXDLIN( 800)									int _g = 0;
HXDLIN( 800)									while((_g < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g);
HXDLIN( 800)										_g = (_g + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 800)									int state1 = 2;
HXDLIN( 800)									int _g1 = 0;
HXDLIN( 800)									while((_g1 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g1);
HXDLIN( 800)										_g1 = (_g1 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 800)									int state2 = -1;
HXDLIN( 800)									int _g2 = 0;
HXDLIN( 800)									while((_g2 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g2);
HXDLIN( 800)										_g2 = (_g2 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 800)									int state = 1;
HXDLIN( 800)									int _g = 0;
HXDLIN( 800)									while((_g < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g);
HXDLIN( 800)										_g = (_g + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 800)									int state1 = 2;
HXDLIN( 800)									int _g1 = 0;
HXDLIN( 800)									while((_g1 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g1);
HXDLIN( 800)										_g1 = (_g1 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 800)									int state2 = -1;
HXDLIN( 800)									int _g2 = 0;
HXDLIN( 800)									while((_g2 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g2);
HXDLIN( 800)										_g2 = (_g2 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 800)									int state = 1;
HXDLIN( 800)									int _g = 0;
HXDLIN( 800)									while((_g < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g);
HXDLIN( 800)										_g = (_g + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 800)									int state1 = 2;
HXDLIN( 800)									int _g1 = 0;
HXDLIN( 800)									while((_g1 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g1);
HXDLIN( 800)										_g1 = (_g1 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 800)									int state2 = -1;
HXDLIN( 800)									int _g2 = 0;
HXDLIN( 800)									while((_g2 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g2);
HXDLIN( 800)										_g2 = (_g2 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 800)									int state = 1;
HXDLIN( 800)									int _g = 0;
HXDLIN( 800)									while((_g < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g);
HXDLIN( 800)										_g = (_g + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 800)									int state1 = 2;
HXDLIN( 800)									int _g1 = 0;
HXDLIN( 800)									while((_g1 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g1);
HXDLIN( 800)										_g1 = (_g1 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 800)									int state2 = -1;
HXDLIN( 800)									int _g2 = 0;
HXDLIN( 800)									while((_g2 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g2);
HXDLIN( 800)										_g2 = (_g2 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 800)									int state = 1;
HXDLIN( 800)									int _g = 0;
HXDLIN( 800)									while((_g < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g);
HXDLIN( 800)										_g = (_g + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 800)									int state1 = 2;
HXDLIN( 800)									int _g1 = 0;
HXDLIN( 800)									while((_g1 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g1);
HXDLIN( 800)										_g1 = (_g1 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 800)								{
HXLINE( 800)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 800)									int state2 = -1;
HXDLIN( 800)									int _g2 = 0;
HXDLIN( 800)									while((_g2 < keys6->length)){
HXLINE( 800)										int key = keys6->__get(_g2);
HXDLIN( 800)										_g2 = (_g2 + 1);
HXDLIN( 800)										if ((key != -1)) {
HXLINE( 800)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 800)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 800)								int state = 2;
HXDLIN( 800)								int _g = 0;
HXDLIN( 800)								while((_g < keys6->length)){
HXLINE( 800)									int key = keys6->__get(_g);
HXDLIN( 800)									_g = (_g + 1);
HXDLIN( 800)									if ((key != -1)) {
HXLINE( 800)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 800)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 800)								int state = 2;
HXDLIN( 800)								int _g = 0;
HXDLIN( 800)								while((_g < keys6->length)){
HXLINE( 800)									int key = keys6->__get(_g);
HXDLIN( 800)									_g = (_g + 1);
HXDLIN( 800)									if ((key != -1)) {
HXLINE( 800)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 800)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 800)								int state = 2;
HXDLIN( 800)								int _g = 0;
HXDLIN( 800)								while((_g < keys6->length)){
HXLINE( 800)									int key = keys6->__get(_g);
HXDLIN( 800)									_g = (_g + 1);
HXDLIN( 800)									if ((key != -1)) {
HXLINE( 800)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 800)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 800)								int state = 2;
HXDLIN( 800)								int _g = 0;
HXDLIN( 800)								while((_g < keys6->length)){
HXLINE( 800)									int key = keys6->__get(_g);
HXDLIN( 800)									_g = (_g + 1);
HXDLIN( 800)									if ((key != -1)) {
HXLINE( 800)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 801)					{
HXLINE( 801)						::Array< int > keys7 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1099,1);
HXDLIN( 801)						switch((int)(::Control_obj::NOTE_RIGHT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 801)									int state = 1;
HXDLIN( 801)									int _g = 0;
HXDLIN( 801)									while((_g < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g);
HXDLIN( 801)										_g = (_g + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 801)									int state1 = 2;
HXDLIN( 801)									int _g1 = 0;
HXDLIN( 801)									while((_g1 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g1);
HXDLIN( 801)										_g1 = (_g1 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 801)									int state2 = -1;
HXDLIN( 801)									int _g2 = 0;
HXDLIN( 801)									while((_g2 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g2);
HXDLIN( 801)										_g2 = (_g2 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 801)									int state = 1;
HXDLIN( 801)									int _g = 0;
HXDLIN( 801)									while((_g < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g);
HXDLIN( 801)										_g = (_g + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 801)									int state1 = 2;
HXDLIN( 801)									int _g1 = 0;
HXDLIN( 801)									while((_g1 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g1);
HXDLIN( 801)										_g1 = (_g1 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 801)									int state2 = -1;
HXDLIN( 801)									int _g2 = 0;
HXDLIN( 801)									while((_g2 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g2);
HXDLIN( 801)										_g2 = (_g2 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 801)									int state = 1;
HXDLIN( 801)									int _g = 0;
HXDLIN( 801)									while((_g < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g);
HXDLIN( 801)										_g = (_g + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 801)									int state1 = 2;
HXDLIN( 801)									int _g1 = 0;
HXDLIN( 801)									while((_g1 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g1);
HXDLIN( 801)										_g1 = (_g1 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 801)									int state2 = -1;
HXDLIN( 801)									int _g2 = 0;
HXDLIN( 801)									while((_g2 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g2);
HXDLIN( 801)										_g2 = (_g2 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 801)									int state = 1;
HXDLIN( 801)									int _g = 0;
HXDLIN( 801)									while((_g < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g);
HXDLIN( 801)										_g = (_g + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 801)									int state1 = 2;
HXDLIN( 801)									int _g1 = 0;
HXDLIN( 801)									while((_g1 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g1);
HXDLIN( 801)										_g1 = (_g1 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 801)									int state2 = -1;
HXDLIN( 801)									int _g2 = 0;
HXDLIN( 801)									while((_g2 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g2);
HXDLIN( 801)										_g2 = (_g2 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 801)									int state = 1;
HXDLIN( 801)									int _g = 0;
HXDLIN( 801)									while((_g < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g);
HXDLIN( 801)										_g = (_g + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 801)									int state1 = 2;
HXDLIN( 801)									int _g1 = 0;
HXDLIN( 801)									while((_g1 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g1);
HXDLIN( 801)										_g1 = (_g1 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 801)									int state2 = -1;
HXDLIN( 801)									int _g2 = 0;
HXDLIN( 801)									while((_g2 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g2);
HXDLIN( 801)										_g2 = (_g2 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 801)									int state = 1;
HXDLIN( 801)									int _g = 0;
HXDLIN( 801)									while((_g < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g);
HXDLIN( 801)										_g = (_g + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 801)									int state1 = 2;
HXDLIN( 801)									int _g1 = 0;
HXDLIN( 801)									while((_g1 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g1);
HXDLIN( 801)										_g1 = (_g1 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 801)									int state2 = -1;
HXDLIN( 801)									int _g2 = 0;
HXDLIN( 801)									while((_g2 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g2);
HXDLIN( 801)										_g2 = (_g2 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 801)									int state = 1;
HXDLIN( 801)									int _g = 0;
HXDLIN( 801)									while((_g < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g);
HXDLIN( 801)										_g = (_g + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 801)									int state1 = 2;
HXDLIN( 801)									int _g1 = 0;
HXDLIN( 801)									while((_g1 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g1);
HXDLIN( 801)										_g1 = (_g1 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 801)									int state2 = -1;
HXDLIN( 801)									int _g2 = 0;
HXDLIN( 801)									while((_g2 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g2);
HXDLIN( 801)										_g2 = (_g2 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 801)									int state = 1;
HXDLIN( 801)									int _g = 0;
HXDLIN( 801)									while((_g < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g);
HXDLIN( 801)										_g = (_g + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 801)									int state1 = 2;
HXDLIN( 801)									int _g1 = 0;
HXDLIN( 801)									while((_g1 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g1);
HXDLIN( 801)										_g1 = (_g1 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 801)								{
HXLINE( 801)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 801)									int state2 = -1;
HXDLIN( 801)									int _g2 = 0;
HXDLIN( 801)									while((_g2 < keys7->length)){
HXLINE( 801)										int key = keys7->__get(_g2);
HXDLIN( 801)										_g2 = (_g2 + 1);
HXDLIN( 801)										if ((key != -1)) {
HXLINE( 801)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 801)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 801)								int state = 2;
HXDLIN( 801)								int _g = 0;
HXDLIN( 801)								while((_g < keys7->length)){
HXLINE( 801)									int key = keys7->__get(_g);
HXDLIN( 801)									_g = (_g + 1);
HXDLIN( 801)									if ((key != -1)) {
HXLINE( 801)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 801)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 801)								int state = 2;
HXDLIN( 801)								int _g = 0;
HXDLIN( 801)								while((_g < keys7->length)){
HXLINE( 801)									int key = keys7->__get(_g);
HXDLIN( 801)									_g = (_g + 1);
HXDLIN( 801)									if ((key != -1)) {
HXLINE( 801)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 801)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 801)								int state = 2;
HXDLIN( 801)								int _g = 0;
HXDLIN( 801)								while((_g < keys7->length)){
HXLINE( 801)									int key = keys7->__get(_g);
HXDLIN( 801)									_g = (_g + 1);
HXDLIN( 801)									if ((key != -1)) {
HXLINE( 801)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 801)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 801)								int state = 2;
HXDLIN( 801)								int _g = 0;
HXDLIN( 801)								while((_g < keys7->length)){
HXLINE( 801)									int key = keys7->__get(_g);
HXDLIN( 801)									_g = (_g + 1);
HXDLIN( 801)									if ((key != -1)) {
HXLINE( 801)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 802)					{
HXLINE( 802)						::Array< int > keys8 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1100,2);
HXDLIN( 802)						switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 802)									int state = 1;
HXDLIN( 802)									int _g = 0;
HXDLIN( 802)									while((_g < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g);
HXDLIN( 802)										_g = (_g + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 802)									int state1 = 2;
HXDLIN( 802)									int _g1 = 0;
HXDLIN( 802)									while((_g1 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g1);
HXDLIN( 802)										_g1 = (_g1 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 802)									int state2 = -1;
HXDLIN( 802)									int _g2 = 0;
HXDLIN( 802)									while((_g2 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g2);
HXDLIN( 802)										_g2 = (_g2 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 802)									int state = 1;
HXDLIN( 802)									int _g = 0;
HXDLIN( 802)									while((_g < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g);
HXDLIN( 802)										_g = (_g + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 802)									int state1 = 2;
HXDLIN( 802)									int _g1 = 0;
HXDLIN( 802)									while((_g1 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g1);
HXDLIN( 802)										_g1 = (_g1 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 802)									int state2 = -1;
HXDLIN( 802)									int _g2 = 0;
HXDLIN( 802)									while((_g2 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g2);
HXDLIN( 802)										_g2 = (_g2 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 802)									int state = 1;
HXDLIN( 802)									int _g = 0;
HXDLIN( 802)									while((_g < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g);
HXDLIN( 802)										_g = (_g + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 802)									int state1 = 2;
HXDLIN( 802)									int _g1 = 0;
HXDLIN( 802)									while((_g1 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g1);
HXDLIN( 802)										_g1 = (_g1 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 802)									int state2 = -1;
HXDLIN( 802)									int _g2 = 0;
HXDLIN( 802)									while((_g2 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g2);
HXDLIN( 802)										_g2 = (_g2 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 802)									int state = 1;
HXDLIN( 802)									int _g = 0;
HXDLIN( 802)									while((_g < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g);
HXDLIN( 802)										_g = (_g + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 802)									int state1 = 2;
HXDLIN( 802)									int _g1 = 0;
HXDLIN( 802)									while((_g1 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g1);
HXDLIN( 802)										_g1 = (_g1 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 802)									int state2 = -1;
HXDLIN( 802)									int _g2 = 0;
HXDLIN( 802)									while((_g2 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g2);
HXDLIN( 802)										_g2 = (_g2 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 802)									int state = 1;
HXDLIN( 802)									int _g = 0;
HXDLIN( 802)									while((_g < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g);
HXDLIN( 802)										_g = (_g + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 802)									int state1 = 2;
HXDLIN( 802)									int _g1 = 0;
HXDLIN( 802)									while((_g1 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g1);
HXDLIN( 802)										_g1 = (_g1 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 802)									int state2 = -1;
HXDLIN( 802)									int _g2 = 0;
HXDLIN( 802)									while((_g2 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g2);
HXDLIN( 802)										_g2 = (_g2 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 802)									int state = 1;
HXDLIN( 802)									int _g = 0;
HXDLIN( 802)									while((_g < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g);
HXDLIN( 802)										_g = (_g + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 802)									int state1 = 2;
HXDLIN( 802)									int _g1 = 0;
HXDLIN( 802)									while((_g1 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g1);
HXDLIN( 802)										_g1 = (_g1 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 802)									int state2 = -1;
HXDLIN( 802)									int _g2 = 0;
HXDLIN( 802)									while((_g2 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g2);
HXDLIN( 802)										_g2 = (_g2 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 802)									int state = 1;
HXDLIN( 802)									int _g = 0;
HXDLIN( 802)									while((_g < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g);
HXDLIN( 802)										_g = (_g + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 802)									int state1 = 2;
HXDLIN( 802)									int _g1 = 0;
HXDLIN( 802)									while((_g1 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g1);
HXDLIN( 802)										_g1 = (_g1 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 802)									int state2 = -1;
HXDLIN( 802)									int _g2 = 0;
HXDLIN( 802)									while((_g2 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g2);
HXDLIN( 802)										_g2 = (_g2 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 802)									int state = 1;
HXDLIN( 802)									int _g = 0;
HXDLIN( 802)									while((_g < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g);
HXDLIN( 802)										_g = (_g + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 802)									int state1 = 2;
HXDLIN( 802)									int _g1 = 0;
HXDLIN( 802)									while((_g1 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g1);
HXDLIN( 802)										_g1 = (_g1 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 802)								{
HXLINE( 802)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 802)									int state2 = -1;
HXDLIN( 802)									int _g2 = 0;
HXDLIN( 802)									while((_g2 < keys8->length)){
HXLINE( 802)										int key = keys8->__get(_g2);
HXDLIN( 802)										_g2 = (_g2 + 1);
HXDLIN( 802)										if ((key != -1)) {
HXLINE( 802)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 802)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 802)								int state = 2;
HXDLIN( 802)								int _g = 0;
HXDLIN( 802)								while((_g < keys8->length)){
HXLINE( 802)									int key = keys8->__get(_g);
HXDLIN( 802)									_g = (_g + 1);
HXDLIN( 802)									if ((key != -1)) {
HXLINE( 802)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 802)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 802)								int state = 2;
HXDLIN( 802)								int _g = 0;
HXDLIN( 802)								while((_g < keys8->length)){
HXLINE( 802)									int key = keys8->__get(_g);
HXDLIN( 802)									_g = (_g + 1);
HXDLIN( 802)									if ((key != -1)) {
HXLINE( 802)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 802)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 802)								int state = 2;
HXDLIN( 802)								int _g = 0;
HXDLIN( 802)								while((_g < keys8->length)){
HXLINE( 802)									int key = keys8->__get(_g);
HXDLIN( 802)									_g = (_g + 1);
HXDLIN( 802)									if ((key != -1)) {
HXLINE( 802)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 802)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 802)								int state = 2;
HXDLIN( 802)								int _g = 0;
HXDLIN( 802)								while((_g < keys8->length)){
HXLINE( 802)									int key = keys8->__get(_g);
HXDLIN( 802)									_g = (_g + 1);
HXDLIN( 802)									if ((key != -1)) {
HXLINE( 802)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 803)					{
HXLINE( 803)						::Array< int > keys9 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1101,2);
HXDLIN( 803)						switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 803)									int state = 1;
HXDLIN( 803)									int _g = 0;
HXDLIN( 803)									while((_g < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g);
HXDLIN( 803)										_g = (_g + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 803)									int state1 = 2;
HXDLIN( 803)									int _g1 = 0;
HXDLIN( 803)									while((_g1 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g1);
HXDLIN( 803)										_g1 = (_g1 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 803)									int state2 = -1;
HXDLIN( 803)									int _g2 = 0;
HXDLIN( 803)									while((_g2 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g2);
HXDLIN( 803)										_g2 = (_g2 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 803)									int state = 1;
HXDLIN( 803)									int _g = 0;
HXDLIN( 803)									while((_g < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g);
HXDLIN( 803)										_g = (_g + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 803)									int state1 = 2;
HXDLIN( 803)									int _g1 = 0;
HXDLIN( 803)									while((_g1 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g1);
HXDLIN( 803)										_g1 = (_g1 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 803)									int state2 = -1;
HXDLIN( 803)									int _g2 = 0;
HXDLIN( 803)									while((_g2 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g2);
HXDLIN( 803)										_g2 = (_g2 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 803)									int state = 1;
HXDLIN( 803)									int _g = 0;
HXDLIN( 803)									while((_g < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g);
HXDLIN( 803)										_g = (_g + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 803)									int state1 = 2;
HXDLIN( 803)									int _g1 = 0;
HXDLIN( 803)									while((_g1 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g1);
HXDLIN( 803)										_g1 = (_g1 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 803)									int state2 = -1;
HXDLIN( 803)									int _g2 = 0;
HXDLIN( 803)									while((_g2 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g2);
HXDLIN( 803)										_g2 = (_g2 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 803)									int state = 1;
HXDLIN( 803)									int _g = 0;
HXDLIN( 803)									while((_g < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g);
HXDLIN( 803)										_g = (_g + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 803)									int state1 = 2;
HXDLIN( 803)									int _g1 = 0;
HXDLIN( 803)									while((_g1 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g1);
HXDLIN( 803)										_g1 = (_g1 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 803)									int state2 = -1;
HXDLIN( 803)									int _g2 = 0;
HXDLIN( 803)									while((_g2 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g2);
HXDLIN( 803)										_g2 = (_g2 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 803)									int state = 1;
HXDLIN( 803)									int _g = 0;
HXDLIN( 803)									while((_g < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g);
HXDLIN( 803)										_g = (_g + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 803)									int state1 = 2;
HXDLIN( 803)									int _g1 = 0;
HXDLIN( 803)									while((_g1 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g1);
HXDLIN( 803)										_g1 = (_g1 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 803)									int state2 = -1;
HXDLIN( 803)									int _g2 = 0;
HXDLIN( 803)									while((_g2 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g2);
HXDLIN( 803)										_g2 = (_g2 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 803)									int state = 1;
HXDLIN( 803)									int _g = 0;
HXDLIN( 803)									while((_g < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g);
HXDLIN( 803)										_g = (_g + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 803)									int state1 = 2;
HXDLIN( 803)									int _g1 = 0;
HXDLIN( 803)									while((_g1 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g1);
HXDLIN( 803)										_g1 = (_g1 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 803)									int state2 = -1;
HXDLIN( 803)									int _g2 = 0;
HXDLIN( 803)									while((_g2 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g2);
HXDLIN( 803)										_g2 = (_g2 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 803)									int state = 1;
HXDLIN( 803)									int _g = 0;
HXDLIN( 803)									while((_g < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g);
HXDLIN( 803)										_g = (_g + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 803)									int state1 = 2;
HXDLIN( 803)									int _g1 = 0;
HXDLIN( 803)									while((_g1 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g1);
HXDLIN( 803)										_g1 = (_g1 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 803)									int state2 = -1;
HXDLIN( 803)									int _g2 = 0;
HXDLIN( 803)									while((_g2 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g2);
HXDLIN( 803)										_g2 = (_g2 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 803)									int state = 1;
HXDLIN( 803)									int _g = 0;
HXDLIN( 803)									while((_g < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g);
HXDLIN( 803)										_g = (_g + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 803)									int state1 = 2;
HXDLIN( 803)									int _g1 = 0;
HXDLIN( 803)									while((_g1 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g1);
HXDLIN( 803)										_g1 = (_g1 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 803)								{
HXLINE( 803)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 803)									int state2 = -1;
HXDLIN( 803)									int _g2 = 0;
HXDLIN( 803)									while((_g2 < keys9->length)){
HXLINE( 803)										int key = keys9->__get(_g2);
HXDLIN( 803)										_g2 = (_g2 + 1);
HXDLIN( 803)										if ((key != -1)) {
HXLINE( 803)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 803)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 803)								int state = 2;
HXDLIN( 803)								int _g = 0;
HXDLIN( 803)								while((_g < keys9->length)){
HXLINE( 803)									int key = keys9->__get(_g);
HXDLIN( 803)									_g = (_g + 1);
HXDLIN( 803)									if ((key != -1)) {
HXLINE( 803)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 803)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 803)								int state = 2;
HXDLIN( 803)								int _g = 0;
HXDLIN( 803)								while((_g < keys9->length)){
HXLINE( 803)									int key = keys9->__get(_g);
HXDLIN( 803)									_g = (_g + 1);
HXDLIN( 803)									if ((key != -1)) {
HXLINE( 803)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 803)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 803)								int state = 2;
HXDLIN( 803)								int _g = 0;
HXDLIN( 803)								while((_g < keys9->length)){
HXLINE( 803)									int key = keys9->__get(_g);
HXDLIN( 803)									_g = (_g + 1);
HXDLIN( 803)									if ((key != -1)) {
HXLINE( 803)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 803)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 803)								int state = 2;
HXDLIN( 803)								int _g = 0;
HXDLIN( 803)								while((_g < keys9->length)){
HXLINE( 803)									int key = keys9->__get(_g);
HXDLIN( 803)									_g = (_g + 1);
HXDLIN( 803)									if ((key != -1)) {
HXLINE( 803)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 804)					{
HXLINE( 804)						::Array< int > keys10 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1102,1);
HXDLIN( 804)						switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 804)									int state = 1;
HXDLIN( 804)									int _g = 0;
HXDLIN( 804)									while((_g < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g);
HXDLIN( 804)										_g = (_g + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 804)									int state1 = 2;
HXDLIN( 804)									int _g1 = 0;
HXDLIN( 804)									while((_g1 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g1);
HXDLIN( 804)										_g1 = (_g1 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 804)									int state2 = -1;
HXDLIN( 804)									int _g2 = 0;
HXDLIN( 804)									while((_g2 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g2);
HXDLIN( 804)										_g2 = (_g2 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 804)									int state = 1;
HXDLIN( 804)									int _g = 0;
HXDLIN( 804)									while((_g < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g);
HXDLIN( 804)										_g = (_g + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 804)									int state1 = 2;
HXDLIN( 804)									int _g1 = 0;
HXDLIN( 804)									while((_g1 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g1);
HXDLIN( 804)										_g1 = (_g1 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 804)									int state2 = -1;
HXDLIN( 804)									int _g2 = 0;
HXDLIN( 804)									while((_g2 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g2);
HXDLIN( 804)										_g2 = (_g2 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 804)									int state = 1;
HXDLIN( 804)									int _g = 0;
HXDLIN( 804)									while((_g < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g);
HXDLIN( 804)										_g = (_g + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 804)									int state1 = 2;
HXDLIN( 804)									int _g1 = 0;
HXDLIN( 804)									while((_g1 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g1);
HXDLIN( 804)										_g1 = (_g1 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 804)									int state2 = -1;
HXDLIN( 804)									int _g2 = 0;
HXDLIN( 804)									while((_g2 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g2);
HXDLIN( 804)										_g2 = (_g2 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 804)									int state = 1;
HXDLIN( 804)									int _g = 0;
HXDLIN( 804)									while((_g < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g);
HXDLIN( 804)										_g = (_g + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 804)									int state1 = 2;
HXDLIN( 804)									int _g1 = 0;
HXDLIN( 804)									while((_g1 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g1);
HXDLIN( 804)										_g1 = (_g1 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 804)									int state2 = -1;
HXDLIN( 804)									int _g2 = 0;
HXDLIN( 804)									while((_g2 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g2);
HXDLIN( 804)										_g2 = (_g2 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 804)									int state = 1;
HXDLIN( 804)									int _g = 0;
HXDLIN( 804)									while((_g < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g);
HXDLIN( 804)										_g = (_g + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 804)									int state1 = 2;
HXDLIN( 804)									int _g1 = 0;
HXDLIN( 804)									while((_g1 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g1);
HXDLIN( 804)										_g1 = (_g1 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 804)									int state2 = -1;
HXDLIN( 804)									int _g2 = 0;
HXDLIN( 804)									while((_g2 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g2);
HXDLIN( 804)										_g2 = (_g2 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 804)									int state = 1;
HXDLIN( 804)									int _g = 0;
HXDLIN( 804)									while((_g < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g);
HXDLIN( 804)										_g = (_g + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 804)									int state1 = 2;
HXDLIN( 804)									int _g1 = 0;
HXDLIN( 804)									while((_g1 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g1);
HXDLIN( 804)										_g1 = (_g1 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 804)									int state2 = -1;
HXDLIN( 804)									int _g2 = 0;
HXDLIN( 804)									while((_g2 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g2);
HXDLIN( 804)										_g2 = (_g2 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 804)									int state = 1;
HXDLIN( 804)									int _g = 0;
HXDLIN( 804)									while((_g < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g);
HXDLIN( 804)										_g = (_g + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 804)									int state1 = 2;
HXDLIN( 804)									int _g1 = 0;
HXDLIN( 804)									while((_g1 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g1);
HXDLIN( 804)										_g1 = (_g1 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 804)									int state2 = -1;
HXDLIN( 804)									int _g2 = 0;
HXDLIN( 804)									while((_g2 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g2);
HXDLIN( 804)										_g2 = (_g2 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 804)									int state = 1;
HXDLIN( 804)									int _g = 0;
HXDLIN( 804)									while((_g < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g);
HXDLIN( 804)										_g = (_g + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 804)									int state1 = 2;
HXDLIN( 804)									int _g1 = 0;
HXDLIN( 804)									while((_g1 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g1);
HXDLIN( 804)										_g1 = (_g1 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 804)								{
HXLINE( 804)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 804)									int state2 = -1;
HXDLIN( 804)									int _g2 = 0;
HXDLIN( 804)									while((_g2 < keys10->length)){
HXLINE( 804)										int key = keys10->__get(_g2);
HXDLIN( 804)										_g2 = (_g2 + 1);
HXDLIN( 804)										if ((key != -1)) {
HXLINE( 804)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 804)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 804)								int state = 2;
HXDLIN( 804)								int _g = 0;
HXDLIN( 804)								while((_g < keys10->length)){
HXLINE( 804)									int key = keys10->__get(_g);
HXDLIN( 804)									_g = (_g + 1);
HXDLIN( 804)									if ((key != -1)) {
HXLINE( 804)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 804)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 804)								int state = 2;
HXDLIN( 804)								int _g = 0;
HXDLIN( 804)								while((_g < keys10->length)){
HXLINE( 804)									int key = keys10->__get(_g);
HXDLIN( 804)									_g = (_g + 1);
HXDLIN( 804)									if ((key != -1)) {
HXLINE( 804)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 804)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 804)								int state = 2;
HXDLIN( 804)								int _g = 0;
HXDLIN( 804)								while((_g < keys10->length)){
HXLINE( 804)									int key = keys10->__get(_g);
HXDLIN( 804)									_g = (_g + 1);
HXDLIN( 804)									if ((key != -1)) {
HXLINE( 804)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 804)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 804)								int state = 2;
HXDLIN( 804)								int _g = 0;
HXDLIN( 804)								while((_g < keys10->length)){
HXLINE( 804)									int key = keys10->__get(_g);
HXDLIN( 804)									_g = (_g + 1);
HXDLIN( 804)									if ((key != -1)) {
HXLINE( 804)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 805)					{
HXLINE( 805)						::Array< int > keys11 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1103,1);
HXDLIN( 805)						switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 805)									int state = 1;
HXDLIN( 805)									int _g = 0;
HXDLIN( 805)									while((_g < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g);
HXDLIN( 805)										_g = (_g + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 805)									int state1 = 2;
HXDLIN( 805)									int _g1 = 0;
HXDLIN( 805)									while((_g1 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g1);
HXDLIN( 805)										_g1 = (_g1 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 805)									int state2 = -1;
HXDLIN( 805)									int _g2 = 0;
HXDLIN( 805)									while((_g2 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g2);
HXDLIN( 805)										_g2 = (_g2 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 805)									int state = 1;
HXDLIN( 805)									int _g = 0;
HXDLIN( 805)									while((_g < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g);
HXDLIN( 805)										_g = (_g + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 805)									int state1 = 2;
HXDLIN( 805)									int _g1 = 0;
HXDLIN( 805)									while((_g1 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g1);
HXDLIN( 805)										_g1 = (_g1 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 805)									int state2 = -1;
HXDLIN( 805)									int _g2 = 0;
HXDLIN( 805)									while((_g2 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g2);
HXDLIN( 805)										_g2 = (_g2 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 805)									int state = 1;
HXDLIN( 805)									int _g = 0;
HXDLIN( 805)									while((_g < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g);
HXDLIN( 805)										_g = (_g + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 805)									int state1 = 2;
HXDLIN( 805)									int _g1 = 0;
HXDLIN( 805)									while((_g1 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g1);
HXDLIN( 805)										_g1 = (_g1 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 805)									int state2 = -1;
HXDLIN( 805)									int _g2 = 0;
HXDLIN( 805)									while((_g2 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g2);
HXDLIN( 805)										_g2 = (_g2 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 805)									int state = 1;
HXDLIN( 805)									int _g = 0;
HXDLIN( 805)									while((_g < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g);
HXDLIN( 805)										_g = (_g + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 805)									int state1 = 2;
HXDLIN( 805)									int _g1 = 0;
HXDLIN( 805)									while((_g1 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g1);
HXDLIN( 805)										_g1 = (_g1 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 805)									int state2 = -1;
HXDLIN( 805)									int _g2 = 0;
HXDLIN( 805)									while((_g2 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g2);
HXDLIN( 805)										_g2 = (_g2 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 805)									int state = 1;
HXDLIN( 805)									int _g = 0;
HXDLIN( 805)									while((_g < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g);
HXDLIN( 805)										_g = (_g + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 805)									int state1 = 2;
HXDLIN( 805)									int _g1 = 0;
HXDLIN( 805)									while((_g1 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g1);
HXDLIN( 805)										_g1 = (_g1 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 805)									int state2 = -1;
HXDLIN( 805)									int _g2 = 0;
HXDLIN( 805)									while((_g2 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g2);
HXDLIN( 805)										_g2 = (_g2 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 805)									int state = 1;
HXDLIN( 805)									int _g = 0;
HXDLIN( 805)									while((_g < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g);
HXDLIN( 805)										_g = (_g + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 805)									int state1 = 2;
HXDLIN( 805)									int _g1 = 0;
HXDLIN( 805)									while((_g1 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g1);
HXDLIN( 805)										_g1 = (_g1 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 805)									int state2 = -1;
HXDLIN( 805)									int _g2 = 0;
HXDLIN( 805)									while((_g2 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g2);
HXDLIN( 805)										_g2 = (_g2 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 805)									int state = 1;
HXDLIN( 805)									int _g = 0;
HXDLIN( 805)									while((_g < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g);
HXDLIN( 805)										_g = (_g + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 805)									int state1 = 2;
HXDLIN( 805)									int _g1 = 0;
HXDLIN( 805)									while((_g1 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g1);
HXDLIN( 805)										_g1 = (_g1 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 805)									int state2 = -1;
HXDLIN( 805)									int _g2 = 0;
HXDLIN( 805)									while((_g2 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g2);
HXDLIN( 805)										_g2 = (_g2 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 805)									int state = 1;
HXDLIN( 805)									int _g = 0;
HXDLIN( 805)									while((_g < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g);
HXDLIN( 805)										_g = (_g + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 805)									int state1 = 2;
HXDLIN( 805)									int _g1 = 0;
HXDLIN( 805)									while((_g1 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g1);
HXDLIN( 805)										_g1 = (_g1 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 805)								{
HXLINE( 805)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 805)									int state2 = -1;
HXDLIN( 805)									int _g2 = 0;
HXDLIN( 805)									while((_g2 < keys11->length)){
HXLINE( 805)										int key = keys11->__get(_g2);
HXDLIN( 805)										_g2 = (_g2 + 1);
HXDLIN( 805)										if ((key != -1)) {
HXLINE( 805)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 805)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 805)								int state = 2;
HXDLIN( 805)								int _g = 0;
HXDLIN( 805)								while((_g < keys11->length)){
HXLINE( 805)									int key = keys11->__get(_g);
HXDLIN( 805)									_g = (_g + 1);
HXDLIN( 805)									if ((key != -1)) {
HXLINE( 805)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 805)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 805)								int state = 2;
HXDLIN( 805)								int _g = 0;
HXDLIN( 805)								while((_g < keys11->length)){
HXLINE( 805)									int key = keys11->__get(_g);
HXDLIN( 805)									_g = (_g + 1);
HXDLIN( 805)									if ((key != -1)) {
HXLINE( 805)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 805)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 805)								int state = 2;
HXDLIN( 805)								int _g = 0;
HXDLIN( 805)								while((_g < keys11->length)){
HXLINE( 805)									int key = keys11->__get(_g);
HXDLIN( 805)									_g = (_g + 1);
HXDLIN( 805)									if ((key != -1)) {
HXLINE( 805)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 805)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 805)								int state = 2;
HXDLIN( 805)								int _g = 0;
HXDLIN( 805)								while((_g < keys11->length)){
HXLINE( 805)									int key = keys11->__get(_g);
HXDLIN( 805)									_g = (_g + 1);
HXDLIN( 805)									if ((key != -1)) {
HXLINE( 805)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
            				}
            				else {
HXLINE( 807)					{
HXLINE( 807)						::Array< int > keys = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1104,1);
HXDLIN( 807)						switch((int)(::Control_obj::UI_UP_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 807)									int state = 1;
HXDLIN( 807)									int _g = 0;
HXDLIN( 807)									while((_g < keys->length)){
HXLINE( 807)										int key = keys->__get(_g);
HXDLIN( 807)										_g = (_g + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 807)									int state1 = 2;
HXDLIN( 807)									int _g1 = 0;
HXDLIN( 807)									while((_g1 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g1);
HXDLIN( 807)										_g1 = (_g1 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 807)									int state2 = -1;
HXDLIN( 807)									int _g2 = 0;
HXDLIN( 807)									while((_g2 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g2);
HXDLIN( 807)										_g2 = (_g2 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 807)									int state = 1;
HXDLIN( 807)									int _g = 0;
HXDLIN( 807)									while((_g < keys->length)){
HXLINE( 807)										int key = keys->__get(_g);
HXDLIN( 807)										_g = (_g + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 807)									int state1 = 2;
HXDLIN( 807)									int _g1 = 0;
HXDLIN( 807)									while((_g1 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g1);
HXDLIN( 807)										_g1 = (_g1 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 807)									int state2 = -1;
HXDLIN( 807)									int _g2 = 0;
HXDLIN( 807)									while((_g2 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g2);
HXDLIN( 807)										_g2 = (_g2 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 807)									int state = 1;
HXDLIN( 807)									int _g = 0;
HXDLIN( 807)									while((_g < keys->length)){
HXLINE( 807)										int key = keys->__get(_g);
HXDLIN( 807)										_g = (_g + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 807)									int state1 = 2;
HXDLIN( 807)									int _g1 = 0;
HXDLIN( 807)									while((_g1 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g1);
HXDLIN( 807)										_g1 = (_g1 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 807)									int state2 = -1;
HXDLIN( 807)									int _g2 = 0;
HXDLIN( 807)									while((_g2 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g2);
HXDLIN( 807)										_g2 = (_g2 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 807)									int state = 1;
HXDLIN( 807)									int _g = 0;
HXDLIN( 807)									while((_g < keys->length)){
HXLINE( 807)										int key = keys->__get(_g);
HXDLIN( 807)										_g = (_g + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 807)									int state1 = 2;
HXDLIN( 807)									int _g1 = 0;
HXDLIN( 807)									while((_g1 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g1);
HXDLIN( 807)										_g1 = (_g1 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 807)									int state2 = -1;
HXDLIN( 807)									int _g2 = 0;
HXDLIN( 807)									while((_g2 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g2);
HXDLIN( 807)										_g2 = (_g2 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 807)									int state = 1;
HXDLIN( 807)									int _g = 0;
HXDLIN( 807)									while((_g < keys->length)){
HXLINE( 807)										int key = keys->__get(_g);
HXDLIN( 807)										_g = (_g + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 807)									int state1 = 2;
HXDLIN( 807)									int _g1 = 0;
HXDLIN( 807)									while((_g1 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g1);
HXDLIN( 807)										_g1 = (_g1 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 807)									int state2 = -1;
HXDLIN( 807)									int _g2 = 0;
HXDLIN( 807)									while((_g2 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g2);
HXDLIN( 807)										_g2 = (_g2 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 807)									int state = 1;
HXDLIN( 807)									int _g = 0;
HXDLIN( 807)									while((_g < keys->length)){
HXLINE( 807)										int key = keys->__get(_g);
HXDLIN( 807)										_g = (_g + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 807)									int state1 = 2;
HXDLIN( 807)									int _g1 = 0;
HXDLIN( 807)									while((_g1 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g1);
HXDLIN( 807)										_g1 = (_g1 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 807)									int state2 = -1;
HXDLIN( 807)									int _g2 = 0;
HXDLIN( 807)									while((_g2 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g2);
HXDLIN( 807)										_g2 = (_g2 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 807)									int state = 1;
HXDLIN( 807)									int _g = 0;
HXDLIN( 807)									while((_g < keys->length)){
HXLINE( 807)										int key = keys->__get(_g);
HXDLIN( 807)										_g = (_g + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 807)									int state1 = 2;
HXDLIN( 807)									int _g1 = 0;
HXDLIN( 807)									while((_g1 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g1);
HXDLIN( 807)										_g1 = (_g1 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 807)									int state2 = -1;
HXDLIN( 807)									int _g2 = 0;
HXDLIN( 807)									while((_g2 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g2);
HXDLIN( 807)										_g2 = (_g2 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 807)									int state = 1;
HXDLIN( 807)									int _g = 0;
HXDLIN( 807)									while((_g < keys->length)){
HXLINE( 807)										int key = keys->__get(_g);
HXDLIN( 807)										_g = (_g + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 807)									int state1 = 2;
HXDLIN( 807)									int _g1 = 0;
HXDLIN( 807)									while((_g1 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g1);
HXDLIN( 807)										_g1 = (_g1 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 807)								{
HXLINE( 807)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 807)									int state2 = -1;
HXDLIN( 807)									int _g2 = 0;
HXDLIN( 807)									while((_g2 < keys->length)){
HXLINE( 807)										int key = keys->__get(_g2);
HXDLIN( 807)										_g2 = (_g2 + 1);
HXDLIN( 807)										if ((key != -1)) {
HXLINE( 807)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 807)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 807)								int state = 2;
HXDLIN( 807)								int _g = 0;
HXDLIN( 807)								while((_g < keys->length)){
HXLINE( 807)									int key = keys->__get(_g);
HXDLIN( 807)									_g = (_g + 1);
HXDLIN( 807)									if ((key != -1)) {
HXLINE( 807)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 807)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 807)								int state = 2;
HXDLIN( 807)								int _g = 0;
HXDLIN( 807)								while((_g < keys->length)){
HXLINE( 807)									int key = keys->__get(_g);
HXDLIN( 807)									_g = (_g + 1);
HXDLIN( 807)									if ((key != -1)) {
HXLINE( 807)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 807)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 807)								int state = 2;
HXDLIN( 807)								int _g = 0;
HXDLIN( 807)								while((_g < keys->length)){
HXLINE( 807)									int key = keys->__get(_g);
HXDLIN( 807)									_g = (_g + 1);
HXDLIN( 807)									if ((key != -1)) {
HXLINE( 807)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 807)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 807)								int state = 2;
HXDLIN( 807)								int _g = 0;
HXDLIN( 807)								while((_g < keys->length)){
HXLINE( 807)									int key = keys->__get(_g);
HXDLIN( 807)									_g = (_g + 1);
HXDLIN( 807)									if ((key != -1)) {
HXLINE( 807)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 808)					{
HXLINE( 808)						::Array< int > keys1 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1105,1);
HXDLIN( 808)						switch((int)(::Control_obj::UI_DOWN_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 808)									int state = 1;
HXDLIN( 808)									int _g = 0;
HXDLIN( 808)									while((_g < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g);
HXDLIN( 808)										_g = (_g + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 808)									int state1 = 2;
HXDLIN( 808)									int _g1 = 0;
HXDLIN( 808)									while((_g1 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g1);
HXDLIN( 808)										_g1 = (_g1 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 808)									int state2 = -1;
HXDLIN( 808)									int _g2 = 0;
HXDLIN( 808)									while((_g2 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g2);
HXDLIN( 808)										_g2 = (_g2 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 808)									int state = 1;
HXDLIN( 808)									int _g = 0;
HXDLIN( 808)									while((_g < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g);
HXDLIN( 808)										_g = (_g + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 808)									int state1 = 2;
HXDLIN( 808)									int _g1 = 0;
HXDLIN( 808)									while((_g1 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g1);
HXDLIN( 808)										_g1 = (_g1 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 808)									int state2 = -1;
HXDLIN( 808)									int _g2 = 0;
HXDLIN( 808)									while((_g2 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g2);
HXDLIN( 808)										_g2 = (_g2 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 808)									int state = 1;
HXDLIN( 808)									int _g = 0;
HXDLIN( 808)									while((_g < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g);
HXDLIN( 808)										_g = (_g + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 808)									int state1 = 2;
HXDLIN( 808)									int _g1 = 0;
HXDLIN( 808)									while((_g1 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g1);
HXDLIN( 808)										_g1 = (_g1 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 808)									int state2 = -1;
HXDLIN( 808)									int _g2 = 0;
HXDLIN( 808)									while((_g2 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g2);
HXDLIN( 808)										_g2 = (_g2 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 808)									int state = 1;
HXDLIN( 808)									int _g = 0;
HXDLIN( 808)									while((_g < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g);
HXDLIN( 808)										_g = (_g + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 808)									int state1 = 2;
HXDLIN( 808)									int _g1 = 0;
HXDLIN( 808)									while((_g1 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g1);
HXDLIN( 808)										_g1 = (_g1 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 808)									int state2 = -1;
HXDLIN( 808)									int _g2 = 0;
HXDLIN( 808)									while((_g2 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g2);
HXDLIN( 808)										_g2 = (_g2 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 808)									int state = 1;
HXDLIN( 808)									int _g = 0;
HXDLIN( 808)									while((_g < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g);
HXDLIN( 808)										_g = (_g + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 808)									int state1 = 2;
HXDLIN( 808)									int _g1 = 0;
HXDLIN( 808)									while((_g1 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g1);
HXDLIN( 808)										_g1 = (_g1 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 808)									int state2 = -1;
HXDLIN( 808)									int _g2 = 0;
HXDLIN( 808)									while((_g2 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g2);
HXDLIN( 808)										_g2 = (_g2 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 808)									int state = 1;
HXDLIN( 808)									int _g = 0;
HXDLIN( 808)									while((_g < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g);
HXDLIN( 808)										_g = (_g + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 808)									int state1 = 2;
HXDLIN( 808)									int _g1 = 0;
HXDLIN( 808)									while((_g1 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g1);
HXDLIN( 808)										_g1 = (_g1 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 808)									int state2 = -1;
HXDLIN( 808)									int _g2 = 0;
HXDLIN( 808)									while((_g2 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g2);
HXDLIN( 808)										_g2 = (_g2 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 808)									int state = 1;
HXDLIN( 808)									int _g = 0;
HXDLIN( 808)									while((_g < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g);
HXDLIN( 808)										_g = (_g + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 808)									int state1 = 2;
HXDLIN( 808)									int _g1 = 0;
HXDLIN( 808)									while((_g1 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g1);
HXDLIN( 808)										_g1 = (_g1 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 808)									int state2 = -1;
HXDLIN( 808)									int _g2 = 0;
HXDLIN( 808)									while((_g2 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g2);
HXDLIN( 808)										_g2 = (_g2 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 808)									int state = 1;
HXDLIN( 808)									int _g = 0;
HXDLIN( 808)									while((_g < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g);
HXDLIN( 808)										_g = (_g + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 808)									int state1 = 2;
HXDLIN( 808)									int _g1 = 0;
HXDLIN( 808)									while((_g1 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g1);
HXDLIN( 808)										_g1 = (_g1 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 808)								{
HXLINE( 808)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 808)									int state2 = -1;
HXDLIN( 808)									int _g2 = 0;
HXDLIN( 808)									while((_g2 < keys1->length)){
HXLINE( 808)										int key = keys1->__get(_g2);
HXDLIN( 808)										_g2 = (_g2 + 1);
HXDLIN( 808)										if ((key != -1)) {
HXLINE( 808)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 808)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 808)								int state = 2;
HXDLIN( 808)								int _g = 0;
HXDLIN( 808)								while((_g < keys1->length)){
HXLINE( 808)									int key = keys1->__get(_g);
HXDLIN( 808)									_g = (_g + 1);
HXDLIN( 808)									if ((key != -1)) {
HXLINE( 808)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 808)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 808)								int state = 2;
HXDLIN( 808)								int _g = 0;
HXDLIN( 808)								while((_g < keys1->length)){
HXLINE( 808)									int key = keys1->__get(_g);
HXDLIN( 808)									_g = (_g + 1);
HXDLIN( 808)									if ((key != -1)) {
HXLINE( 808)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 808)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 808)								int state = 2;
HXDLIN( 808)								int _g = 0;
HXDLIN( 808)								while((_g < keys1->length)){
HXLINE( 808)									int key = keys1->__get(_g);
HXDLIN( 808)									_g = (_g + 1);
HXDLIN( 808)									if ((key != -1)) {
HXLINE( 808)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 808)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 808)								int state = 2;
HXDLIN( 808)								int _g = 0;
HXDLIN( 808)								while((_g < keys1->length)){
HXLINE( 808)									int key = keys1->__get(_g);
HXDLIN( 808)									_g = (_g + 1);
HXDLIN( 808)									if ((key != -1)) {
HXLINE( 808)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 809)					{
HXLINE( 809)						::Array< int > keys2 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1106,1);
HXDLIN( 809)						switch((int)(::Control_obj::UI_LEFT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 809)									int state = 1;
HXDLIN( 809)									int _g = 0;
HXDLIN( 809)									while((_g < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g);
HXDLIN( 809)										_g = (_g + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 809)									int state1 = 2;
HXDLIN( 809)									int _g1 = 0;
HXDLIN( 809)									while((_g1 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g1);
HXDLIN( 809)										_g1 = (_g1 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 809)									int state2 = -1;
HXDLIN( 809)									int _g2 = 0;
HXDLIN( 809)									while((_g2 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g2);
HXDLIN( 809)										_g2 = (_g2 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 809)									int state = 1;
HXDLIN( 809)									int _g = 0;
HXDLIN( 809)									while((_g < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g);
HXDLIN( 809)										_g = (_g + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 809)									int state1 = 2;
HXDLIN( 809)									int _g1 = 0;
HXDLIN( 809)									while((_g1 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g1);
HXDLIN( 809)										_g1 = (_g1 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 809)									int state2 = -1;
HXDLIN( 809)									int _g2 = 0;
HXDLIN( 809)									while((_g2 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g2);
HXDLIN( 809)										_g2 = (_g2 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 809)									int state = 1;
HXDLIN( 809)									int _g = 0;
HXDLIN( 809)									while((_g < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g);
HXDLIN( 809)										_g = (_g + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 809)									int state1 = 2;
HXDLIN( 809)									int _g1 = 0;
HXDLIN( 809)									while((_g1 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g1);
HXDLIN( 809)										_g1 = (_g1 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 809)									int state2 = -1;
HXDLIN( 809)									int _g2 = 0;
HXDLIN( 809)									while((_g2 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g2);
HXDLIN( 809)										_g2 = (_g2 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 809)									int state = 1;
HXDLIN( 809)									int _g = 0;
HXDLIN( 809)									while((_g < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g);
HXDLIN( 809)										_g = (_g + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 809)									int state1 = 2;
HXDLIN( 809)									int _g1 = 0;
HXDLIN( 809)									while((_g1 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g1);
HXDLIN( 809)										_g1 = (_g1 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 809)									int state2 = -1;
HXDLIN( 809)									int _g2 = 0;
HXDLIN( 809)									while((_g2 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g2);
HXDLIN( 809)										_g2 = (_g2 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 809)									int state = 1;
HXDLIN( 809)									int _g = 0;
HXDLIN( 809)									while((_g < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g);
HXDLIN( 809)										_g = (_g + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 809)									int state1 = 2;
HXDLIN( 809)									int _g1 = 0;
HXDLIN( 809)									while((_g1 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g1);
HXDLIN( 809)										_g1 = (_g1 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 809)									int state2 = -1;
HXDLIN( 809)									int _g2 = 0;
HXDLIN( 809)									while((_g2 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g2);
HXDLIN( 809)										_g2 = (_g2 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 809)									int state = 1;
HXDLIN( 809)									int _g = 0;
HXDLIN( 809)									while((_g < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g);
HXDLIN( 809)										_g = (_g + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 809)									int state1 = 2;
HXDLIN( 809)									int _g1 = 0;
HXDLIN( 809)									while((_g1 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g1);
HXDLIN( 809)										_g1 = (_g1 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 809)									int state2 = -1;
HXDLIN( 809)									int _g2 = 0;
HXDLIN( 809)									while((_g2 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g2);
HXDLIN( 809)										_g2 = (_g2 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 809)									int state = 1;
HXDLIN( 809)									int _g = 0;
HXDLIN( 809)									while((_g < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g);
HXDLIN( 809)										_g = (_g + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 809)									int state1 = 2;
HXDLIN( 809)									int _g1 = 0;
HXDLIN( 809)									while((_g1 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g1);
HXDLIN( 809)										_g1 = (_g1 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 809)									int state2 = -1;
HXDLIN( 809)									int _g2 = 0;
HXDLIN( 809)									while((_g2 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g2);
HXDLIN( 809)										_g2 = (_g2 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 809)									int state = 1;
HXDLIN( 809)									int _g = 0;
HXDLIN( 809)									while((_g < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g);
HXDLIN( 809)										_g = (_g + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 809)									int state1 = 2;
HXDLIN( 809)									int _g1 = 0;
HXDLIN( 809)									while((_g1 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g1);
HXDLIN( 809)										_g1 = (_g1 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 809)								{
HXLINE( 809)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 809)									int state2 = -1;
HXDLIN( 809)									int _g2 = 0;
HXDLIN( 809)									while((_g2 < keys2->length)){
HXLINE( 809)										int key = keys2->__get(_g2);
HXDLIN( 809)										_g2 = (_g2 + 1);
HXDLIN( 809)										if ((key != -1)) {
HXLINE( 809)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 809)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 809)								int state = 2;
HXDLIN( 809)								int _g = 0;
HXDLIN( 809)								while((_g < keys2->length)){
HXLINE( 809)									int key = keys2->__get(_g);
HXDLIN( 809)									_g = (_g + 1);
HXDLIN( 809)									if ((key != -1)) {
HXLINE( 809)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 809)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 809)								int state = 2;
HXDLIN( 809)								int _g = 0;
HXDLIN( 809)								while((_g < keys2->length)){
HXLINE( 809)									int key = keys2->__get(_g);
HXDLIN( 809)									_g = (_g + 1);
HXDLIN( 809)									if ((key != -1)) {
HXLINE( 809)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 809)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 809)								int state = 2;
HXDLIN( 809)								int _g = 0;
HXDLIN( 809)								while((_g < keys2->length)){
HXLINE( 809)									int key = keys2->__get(_g);
HXDLIN( 809)									_g = (_g + 1);
HXDLIN( 809)									if ((key != -1)) {
HXLINE( 809)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 809)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 809)								int state = 2;
HXDLIN( 809)								int _g = 0;
HXDLIN( 809)								while((_g < keys2->length)){
HXLINE( 809)									int key = keys2->__get(_g);
HXDLIN( 809)									_g = (_g + 1);
HXDLIN( 809)									if ((key != -1)) {
HXLINE( 809)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 810)					{
HXLINE( 810)						::Array< int > keys3 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1107,1);
HXDLIN( 810)						switch((int)(::Control_obj::UI_RIGHT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 810)									int state = 1;
HXDLIN( 810)									int _g = 0;
HXDLIN( 810)									while((_g < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g);
HXDLIN( 810)										_g = (_g + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 810)									int state1 = 2;
HXDLIN( 810)									int _g1 = 0;
HXDLIN( 810)									while((_g1 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g1);
HXDLIN( 810)										_g1 = (_g1 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 810)									int state2 = -1;
HXDLIN( 810)									int _g2 = 0;
HXDLIN( 810)									while((_g2 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g2);
HXDLIN( 810)										_g2 = (_g2 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 810)									int state = 1;
HXDLIN( 810)									int _g = 0;
HXDLIN( 810)									while((_g < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g);
HXDLIN( 810)										_g = (_g + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 810)									int state1 = 2;
HXDLIN( 810)									int _g1 = 0;
HXDLIN( 810)									while((_g1 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g1);
HXDLIN( 810)										_g1 = (_g1 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 810)									int state2 = -1;
HXDLIN( 810)									int _g2 = 0;
HXDLIN( 810)									while((_g2 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g2);
HXDLIN( 810)										_g2 = (_g2 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 810)									int state = 1;
HXDLIN( 810)									int _g = 0;
HXDLIN( 810)									while((_g < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g);
HXDLIN( 810)										_g = (_g + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 810)									int state1 = 2;
HXDLIN( 810)									int _g1 = 0;
HXDLIN( 810)									while((_g1 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g1);
HXDLIN( 810)										_g1 = (_g1 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 810)									int state2 = -1;
HXDLIN( 810)									int _g2 = 0;
HXDLIN( 810)									while((_g2 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g2);
HXDLIN( 810)										_g2 = (_g2 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 810)									int state = 1;
HXDLIN( 810)									int _g = 0;
HXDLIN( 810)									while((_g < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g);
HXDLIN( 810)										_g = (_g + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 810)									int state1 = 2;
HXDLIN( 810)									int _g1 = 0;
HXDLIN( 810)									while((_g1 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g1);
HXDLIN( 810)										_g1 = (_g1 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 810)									int state2 = -1;
HXDLIN( 810)									int _g2 = 0;
HXDLIN( 810)									while((_g2 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g2);
HXDLIN( 810)										_g2 = (_g2 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 810)									int state = 1;
HXDLIN( 810)									int _g = 0;
HXDLIN( 810)									while((_g < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g);
HXDLIN( 810)										_g = (_g + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 810)									int state1 = 2;
HXDLIN( 810)									int _g1 = 0;
HXDLIN( 810)									while((_g1 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g1);
HXDLIN( 810)										_g1 = (_g1 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 810)									int state2 = -1;
HXDLIN( 810)									int _g2 = 0;
HXDLIN( 810)									while((_g2 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g2);
HXDLIN( 810)										_g2 = (_g2 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 810)									int state = 1;
HXDLIN( 810)									int _g = 0;
HXDLIN( 810)									while((_g < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g);
HXDLIN( 810)										_g = (_g + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 810)									int state1 = 2;
HXDLIN( 810)									int _g1 = 0;
HXDLIN( 810)									while((_g1 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g1);
HXDLIN( 810)										_g1 = (_g1 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 810)									int state2 = -1;
HXDLIN( 810)									int _g2 = 0;
HXDLIN( 810)									while((_g2 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g2);
HXDLIN( 810)										_g2 = (_g2 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 810)									int state = 1;
HXDLIN( 810)									int _g = 0;
HXDLIN( 810)									while((_g < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g);
HXDLIN( 810)										_g = (_g + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 810)									int state1 = 2;
HXDLIN( 810)									int _g1 = 0;
HXDLIN( 810)									while((_g1 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g1);
HXDLIN( 810)										_g1 = (_g1 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 810)									int state2 = -1;
HXDLIN( 810)									int _g2 = 0;
HXDLIN( 810)									while((_g2 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g2);
HXDLIN( 810)										_g2 = (_g2 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 810)									int state = 1;
HXDLIN( 810)									int _g = 0;
HXDLIN( 810)									while((_g < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g);
HXDLIN( 810)										_g = (_g + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 810)									int state1 = 2;
HXDLIN( 810)									int _g1 = 0;
HXDLIN( 810)									while((_g1 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g1);
HXDLIN( 810)										_g1 = (_g1 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 810)								{
HXLINE( 810)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 810)									int state2 = -1;
HXDLIN( 810)									int _g2 = 0;
HXDLIN( 810)									while((_g2 < keys3->length)){
HXLINE( 810)										int key = keys3->__get(_g2);
HXDLIN( 810)										_g2 = (_g2 + 1);
HXDLIN( 810)										if ((key != -1)) {
HXLINE( 810)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 810)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 810)								int state = 2;
HXDLIN( 810)								int _g = 0;
HXDLIN( 810)								while((_g < keys3->length)){
HXLINE( 810)									int key = keys3->__get(_g);
HXDLIN( 810)									_g = (_g + 1);
HXDLIN( 810)									if ((key != -1)) {
HXLINE( 810)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 810)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 810)								int state = 2;
HXDLIN( 810)								int _g = 0;
HXDLIN( 810)								while((_g < keys3->length)){
HXLINE( 810)									int key = keys3->__get(_g);
HXDLIN( 810)									_g = (_g + 1);
HXDLIN( 810)									if ((key != -1)) {
HXLINE( 810)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 810)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 810)								int state = 2;
HXDLIN( 810)								int _g = 0;
HXDLIN( 810)								while((_g < keys3->length)){
HXLINE( 810)									int key = keys3->__get(_g);
HXDLIN( 810)									_g = (_g + 1);
HXDLIN( 810)									if ((key != -1)) {
HXLINE( 810)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 810)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 810)								int state = 2;
HXDLIN( 810)								int _g = 0;
HXDLIN( 810)								while((_g < keys3->length)){
HXLINE( 810)									int key = keys3->__get(_g);
HXDLIN( 810)									_g = (_g + 1);
HXDLIN( 810)									if ((key != -1)) {
HXLINE( 810)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 811)					{
HXLINE( 811)						::Array< int > keys4 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1108,1);
HXDLIN( 811)						switch((int)(::Control_obj::NOTE_UP_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 811)									int state = 1;
HXDLIN( 811)									int _g = 0;
HXDLIN( 811)									while((_g < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g);
HXDLIN( 811)										_g = (_g + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 811)									int state1 = 2;
HXDLIN( 811)									int _g1 = 0;
HXDLIN( 811)									while((_g1 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g1);
HXDLIN( 811)										_g1 = (_g1 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 811)									int state2 = -1;
HXDLIN( 811)									int _g2 = 0;
HXDLIN( 811)									while((_g2 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g2);
HXDLIN( 811)										_g2 = (_g2 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 811)									int state = 1;
HXDLIN( 811)									int _g = 0;
HXDLIN( 811)									while((_g < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g);
HXDLIN( 811)										_g = (_g + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 811)									int state1 = 2;
HXDLIN( 811)									int _g1 = 0;
HXDLIN( 811)									while((_g1 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g1);
HXDLIN( 811)										_g1 = (_g1 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 811)									int state2 = -1;
HXDLIN( 811)									int _g2 = 0;
HXDLIN( 811)									while((_g2 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g2);
HXDLIN( 811)										_g2 = (_g2 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 811)									int state = 1;
HXDLIN( 811)									int _g = 0;
HXDLIN( 811)									while((_g < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g);
HXDLIN( 811)										_g = (_g + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 811)									int state1 = 2;
HXDLIN( 811)									int _g1 = 0;
HXDLIN( 811)									while((_g1 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g1);
HXDLIN( 811)										_g1 = (_g1 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 811)									int state2 = -1;
HXDLIN( 811)									int _g2 = 0;
HXDLIN( 811)									while((_g2 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g2);
HXDLIN( 811)										_g2 = (_g2 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 811)									int state = 1;
HXDLIN( 811)									int _g = 0;
HXDLIN( 811)									while((_g < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g);
HXDLIN( 811)										_g = (_g + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 811)									int state1 = 2;
HXDLIN( 811)									int _g1 = 0;
HXDLIN( 811)									while((_g1 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g1);
HXDLIN( 811)										_g1 = (_g1 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 811)									int state2 = -1;
HXDLIN( 811)									int _g2 = 0;
HXDLIN( 811)									while((_g2 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g2);
HXDLIN( 811)										_g2 = (_g2 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 811)									int state = 1;
HXDLIN( 811)									int _g = 0;
HXDLIN( 811)									while((_g < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g);
HXDLIN( 811)										_g = (_g + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 811)									int state1 = 2;
HXDLIN( 811)									int _g1 = 0;
HXDLIN( 811)									while((_g1 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g1);
HXDLIN( 811)										_g1 = (_g1 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 811)									int state2 = -1;
HXDLIN( 811)									int _g2 = 0;
HXDLIN( 811)									while((_g2 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g2);
HXDLIN( 811)										_g2 = (_g2 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 811)									int state = 1;
HXDLIN( 811)									int _g = 0;
HXDLIN( 811)									while((_g < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g);
HXDLIN( 811)										_g = (_g + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 811)									int state1 = 2;
HXDLIN( 811)									int _g1 = 0;
HXDLIN( 811)									while((_g1 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g1);
HXDLIN( 811)										_g1 = (_g1 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 811)									int state2 = -1;
HXDLIN( 811)									int _g2 = 0;
HXDLIN( 811)									while((_g2 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g2);
HXDLIN( 811)										_g2 = (_g2 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 811)									int state = 1;
HXDLIN( 811)									int _g = 0;
HXDLIN( 811)									while((_g < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g);
HXDLIN( 811)										_g = (_g + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 811)									int state1 = 2;
HXDLIN( 811)									int _g1 = 0;
HXDLIN( 811)									while((_g1 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g1);
HXDLIN( 811)										_g1 = (_g1 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 811)									int state2 = -1;
HXDLIN( 811)									int _g2 = 0;
HXDLIN( 811)									while((_g2 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g2);
HXDLIN( 811)										_g2 = (_g2 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 811)									int state = 1;
HXDLIN( 811)									int _g = 0;
HXDLIN( 811)									while((_g < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g);
HXDLIN( 811)										_g = (_g + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 811)									int state1 = 2;
HXDLIN( 811)									int _g1 = 0;
HXDLIN( 811)									while((_g1 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g1);
HXDLIN( 811)										_g1 = (_g1 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 811)								{
HXLINE( 811)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 811)									int state2 = -1;
HXDLIN( 811)									int _g2 = 0;
HXDLIN( 811)									while((_g2 < keys4->length)){
HXLINE( 811)										int key = keys4->__get(_g2);
HXDLIN( 811)										_g2 = (_g2 + 1);
HXDLIN( 811)										if ((key != -1)) {
HXLINE( 811)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 811)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 811)								int state = 2;
HXDLIN( 811)								int _g = 0;
HXDLIN( 811)								while((_g < keys4->length)){
HXLINE( 811)									int key = keys4->__get(_g);
HXDLIN( 811)									_g = (_g + 1);
HXDLIN( 811)									if ((key != -1)) {
HXLINE( 811)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 811)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 811)								int state = 2;
HXDLIN( 811)								int _g = 0;
HXDLIN( 811)								while((_g < keys4->length)){
HXLINE( 811)									int key = keys4->__get(_g);
HXDLIN( 811)									_g = (_g + 1);
HXDLIN( 811)									if ((key != -1)) {
HXLINE( 811)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 811)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 811)								int state = 2;
HXDLIN( 811)								int _g = 0;
HXDLIN( 811)								while((_g < keys4->length)){
HXLINE( 811)									int key = keys4->__get(_g);
HXDLIN( 811)									_g = (_g + 1);
HXDLIN( 811)									if ((key != -1)) {
HXLINE( 811)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 811)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 811)								int state = 2;
HXDLIN( 811)								int _g = 0;
HXDLIN( 811)								while((_g < keys4->length)){
HXLINE( 811)									int key = keys4->__get(_g);
HXDLIN( 811)									_g = (_g + 1);
HXDLIN( 811)									if ((key != -1)) {
HXLINE( 811)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 812)					{
HXLINE( 812)						::Array< int > keys5 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1109,1);
HXDLIN( 812)						switch((int)(::Control_obj::NOTE_DOWN_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 812)									int state = 1;
HXDLIN( 812)									int _g = 0;
HXDLIN( 812)									while((_g < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g);
HXDLIN( 812)										_g = (_g + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 812)									int state1 = 2;
HXDLIN( 812)									int _g1 = 0;
HXDLIN( 812)									while((_g1 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g1);
HXDLIN( 812)										_g1 = (_g1 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 812)									int state2 = -1;
HXDLIN( 812)									int _g2 = 0;
HXDLIN( 812)									while((_g2 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g2);
HXDLIN( 812)										_g2 = (_g2 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 812)									int state = 1;
HXDLIN( 812)									int _g = 0;
HXDLIN( 812)									while((_g < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g);
HXDLIN( 812)										_g = (_g + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 812)									int state1 = 2;
HXDLIN( 812)									int _g1 = 0;
HXDLIN( 812)									while((_g1 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g1);
HXDLIN( 812)										_g1 = (_g1 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 812)									int state2 = -1;
HXDLIN( 812)									int _g2 = 0;
HXDLIN( 812)									while((_g2 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g2);
HXDLIN( 812)										_g2 = (_g2 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 812)									int state = 1;
HXDLIN( 812)									int _g = 0;
HXDLIN( 812)									while((_g < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g);
HXDLIN( 812)										_g = (_g + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 812)									int state1 = 2;
HXDLIN( 812)									int _g1 = 0;
HXDLIN( 812)									while((_g1 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g1);
HXDLIN( 812)										_g1 = (_g1 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 812)									int state2 = -1;
HXDLIN( 812)									int _g2 = 0;
HXDLIN( 812)									while((_g2 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g2);
HXDLIN( 812)										_g2 = (_g2 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 812)									int state = 1;
HXDLIN( 812)									int _g = 0;
HXDLIN( 812)									while((_g < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g);
HXDLIN( 812)										_g = (_g + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 812)									int state1 = 2;
HXDLIN( 812)									int _g1 = 0;
HXDLIN( 812)									while((_g1 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g1);
HXDLIN( 812)										_g1 = (_g1 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 812)									int state2 = -1;
HXDLIN( 812)									int _g2 = 0;
HXDLIN( 812)									while((_g2 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g2);
HXDLIN( 812)										_g2 = (_g2 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 812)									int state = 1;
HXDLIN( 812)									int _g = 0;
HXDLIN( 812)									while((_g < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g);
HXDLIN( 812)										_g = (_g + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 812)									int state1 = 2;
HXDLIN( 812)									int _g1 = 0;
HXDLIN( 812)									while((_g1 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g1);
HXDLIN( 812)										_g1 = (_g1 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 812)									int state2 = -1;
HXDLIN( 812)									int _g2 = 0;
HXDLIN( 812)									while((_g2 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g2);
HXDLIN( 812)										_g2 = (_g2 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 812)									int state = 1;
HXDLIN( 812)									int _g = 0;
HXDLIN( 812)									while((_g < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g);
HXDLIN( 812)										_g = (_g + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 812)									int state1 = 2;
HXDLIN( 812)									int _g1 = 0;
HXDLIN( 812)									while((_g1 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g1);
HXDLIN( 812)										_g1 = (_g1 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 812)									int state2 = -1;
HXDLIN( 812)									int _g2 = 0;
HXDLIN( 812)									while((_g2 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g2);
HXDLIN( 812)										_g2 = (_g2 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 812)									int state = 1;
HXDLIN( 812)									int _g = 0;
HXDLIN( 812)									while((_g < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g);
HXDLIN( 812)										_g = (_g + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 812)									int state1 = 2;
HXDLIN( 812)									int _g1 = 0;
HXDLIN( 812)									while((_g1 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g1);
HXDLIN( 812)										_g1 = (_g1 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 812)									int state2 = -1;
HXDLIN( 812)									int _g2 = 0;
HXDLIN( 812)									while((_g2 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g2);
HXDLIN( 812)										_g2 = (_g2 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 812)									int state = 1;
HXDLIN( 812)									int _g = 0;
HXDLIN( 812)									while((_g < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g);
HXDLIN( 812)										_g = (_g + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 812)									int state1 = 2;
HXDLIN( 812)									int _g1 = 0;
HXDLIN( 812)									while((_g1 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g1);
HXDLIN( 812)										_g1 = (_g1 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 812)								{
HXLINE( 812)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 812)									int state2 = -1;
HXDLIN( 812)									int _g2 = 0;
HXDLIN( 812)									while((_g2 < keys5->length)){
HXLINE( 812)										int key = keys5->__get(_g2);
HXDLIN( 812)										_g2 = (_g2 + 1);
HXDLIN( 812)										if ((key != -1)) {
HXLINE( 812)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 812)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 812)								int state = 2;
HXDLIN( 812)								int _g = 0;
HXDLIN( 812)								while((_g < keys5->length)){
HXLINE( 812)									int key = keys5->__get(_g);
HXDLIN( 812)									_g = (_g + 1);
HXDLIN( 812)									if ((key != -1)) {
HXLINE( 812)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 812)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 812)								int state = 2;
HXDLIN( 812)								int _g = 0;
HXDLIN( 812)								while((_g < keys5->length)){
HXLINE( 812)									int key = keys5->__get(_g);
HXDLIN( 812)									_g = (_g + 1);
HXDLIN( 812)									if ((key != -1)) {
HXLINE( 812)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 812)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 812)								int state = 2;
HXDLIN( 812)								int _g = 0;
HXDLIN( 812)								while((_g < keys5->length)){
HXLINE( 812)									int key = keys5->__get(_g);
HXDLIN( 812)									_g = (_g + 1);
HXDLIN( 812)									if ((key != -1)) {
HXLINE( 812)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 812)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 812)								int state = 2;
HXDLIN( 812)								int _g = 0;
HXDLIN( 812)								while((_g < keys5->length)){
HXLINE( 812)									int key = keys5->__get(_g);
HXDLIN( 812)									_g = (_g + 1);
HXDLIN( 812)									if ((key != -1)) {
HXLINE( 812)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 813)					{
HXLINE( 813)						::Array< int > keys6 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1110,1);
HXDLIN( 813)						switch((int)(::Control_obj::NOTE_LEFT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 813)									int state = 1;
HXDLIN( 813)									int _g = 0;
HXDLIN( 813)									while((_g < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g);
HXDLIN( 813)										_g = (_g + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 813)									int state1 = 2;
HXDLIN( 813)									int _g1 = 0;
HXDLIN( 813)									while((_g1 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g1);
HXDLIN( 813)										_g1 = (_g1 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 813)									int state2 = -1;
HXDLIN( 813)									int _g2 = 0;
HXDLIN( 813)									while((_g2 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g2);
HXDLIN( 813)										_g2 = (_g2 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 813)									int state = 1;
HXDLIN( 813)									int _g = 0;
HXDLIN( 813)									while((_g < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g);
HXDLIN( 813)										_g = (_g + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 813)									int state1 = 2;
HXDLIN( 813)									int _g1 = 0;
HXDLIN( 813)									while((_g1 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g1);
HXDLIN( 813)										_g1 = (_g1 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 813)									int state2 = -1;
HXDLIN( 813)									int _g2 = 0;
HXDLIN( 813)									while((_g2 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g2);
HXDLIN( 813)										_g2 = (_g2 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 813)									int state = 1;
HXDLIN( 813)									int _g = 0;
HXDLIN( 813)									while((_g < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g);
HXDLIN( 813)										_g = (_g + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 813)									int state1 = 2;
HXDLIN( 813)									int _g1 = 0;
HXDLIN( 813)									while((_g1 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g1);
HXDLIN( 813)										_g1 = (_g1 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 813)									int state2 = -1;
HXDLIN( 813)									int _g2 = 0;
HXDLIN( 813)									while((_g2 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g2);
HXDLIN( 813)										_g2 = (_g2 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 813)									int state = 1;
HXDLIN( 813)									int _g = 0;
HXDLIN( 813)									while((_g < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g);
HXDLIN( 813)										_g = (_g + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 813)									int state1 = 2;
HXDLIN( 813)									int _g1 = 0;
HXDLIN( 813)									while((_g1 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g1);
HXDLIN( 813)										_g1 = (_g1 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 813)									int state2 = -1;
HXDLIN( 813)									int _g2 = 0;
HXDLIN( 813)									while((_g2 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g2);
HXDLIN( 813)										_g2 = (_g2 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 813)									int state = 1;
HXDLIN( 813)									int _g = 0;
HXDLIN( 813)									while((_g < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g);
HXDLIN( 813)										_g = (_g + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 813)									int state1 = 2;
HXDLIN( 813)									int _g1 = 0;
HXDLIN( 813)									while((_g1 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g1);
HXDLIN( 813)										_g1 = (_g1 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 813)									int state2 = -1;
HXDLIN( 813)									int _g2 = 0;
HXDLIN( 813)									while((_g2 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g2);
HXDLIN( 813)										_g2 = (_g2 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 813)									int state = 1;
HXDLIN( 813)									int _g = 0;
HXDLIN( 813)									while((_g < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g);
HXDLIN( 813)										_g = (_g + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 813)									int state1 = 2;
HXDLIN( 813)									int _g1 = 0;
HXDLIN( 813)									while((_g1 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g1);
HXDLIN( 813)										_g1 = (_g1 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 813)									int state2 = -1;
HXDLIN( 813)									int _g2 = 0;
HXDLIN( 813)									while((_g2 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g2);
HXDLIN( 813)										_g2 = (_g2 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 813)									int state = 1;
HXDLIN( 813)									int _g = 0;
HXDLIN( 813)									while((_g < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g);
HXDLIN( 813)										_g = (_g + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 813)									int state1 = 2;
HXDLIN( 813)									int _g1 = 0;
HXDLIN( 813)									while((_g1 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g1);
HXDLIN( 813)										_g1 = (_g1 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 813)									int state2 = -1;
HXDLIN( 813)									int _g2 = 0;
HXDLIN( 813)									while((_g2 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g2);
HXDLIN( 813)										_g2 = (_g2 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 813)									int state = 1;
HXDLIN( 813)									int _g = 0;
HXDLIN( 813)									while((_g < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g);
HXDLIN( 813)										_g = (_g + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 813)									int state1 = 2;
HXDLIN( 813)									int _g1 = 0;
HXDLIN( 813)									while((_g1 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g1);
HXDLIN( 813)										_g1 = (_g1 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 813)								{
HXLINE( 813)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 813)									int state2 = -1;
HXDLIN( 813)									int _g2 = 0;
HXDLIN( 813)									while((_g2 < keys6->length)){
HXLINE( 813)										int key = keys6->__get(_g2);
HXDLIN( 813)										_g2 = (_g2 + 1);
HXDLIN( 813)										if ((key != -1)) {
HXLINE( 813)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 813)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 813)								int state = 2;
HXDLIN( 813)								int _g = 0;
HXDLIN( 813)								while((_g < keys6->length)){
HXLINE( 813)									int key = keys6->__get(_g);
HXDLIN( 813)									_g = (_g + 1);
HXDLIN( 813)									if ((key != -1)) {
HXLINE( 813)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 813)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 813)								int state = 2;
HXDLIN( 813)								int _g = 0;
HXDLIN( 813)								while((_g < keys6->length)){
HXLINE( 813)									int key = keys6->__get(_g);
HXDLIN( 813)									_g = (_g + 1);
HXDLIN( 813)									if ((key != -1)) {
HXLINE( 813)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 813)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 813)								int state = 2;
HXDLIN( 813)								int _g = 0;
HXDLIN( 813)								while((_g < keys6->length)){
HXLINE( 813)									int key = keys6->__get(_g);
HXDLIN( 813)									_g = (_g + 1);
HXDLIN( 813)									if ((key != -1)) {
HXLINE( 813)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 813)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 813)								int state = 2;
HXDLIN( 813)								int _g = 0;
HXDLIN( 813)								while((_g < keys6->length)){
HXLINE( 813)									int key = keys6->__get(_g);
HXDLIN( 813)									_g = (_g + 1);
HXDLIN( 813)									if ((key != -1)) {
HXLINE( 813)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 814)					{
HXLINE( 814)						::Array< int > keys7 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1111,1);
HXDLIN( 814)						switch((int)(::Control_obj::NOTE_RIGHT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 814)									int state = 1;
HXDLIN( 814)									int _g = 0;
HXDLIN( 814)									while((_g < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g);
HXDLIN( 814)										_g = (_g + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 814)									int state1 = 2;
HXDLIN( 814)									int _g1 = 0;
HXDLIN( 814)									while((_g1 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g1);
HXDLIN( 814)										_g1 = (_g1 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 814)									int state2 = -1;
HXDLIN( 814)									int _g2 = 0;
HXDLIN( 814)									while((_g2 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g2);
HXDLIN( 814)										_g2 = (_g2 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 814)									int state = 1;
HXDLIN( 814)									int _g = 0;
HXDLIN( 814)									while((_g < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g);
HXDLIN( 814)										_g = (_g + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 814)									int state1 = 2;
HXDLIN( 814)									int _g1 = 0;
HXDLIN( 814)									while((_g1 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g1);
HXDLIN( 814)										_g1 = (_g1 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 814)									int state2 = -1;
HXDLIN( 814)									int _g2 = 0;
HXDLIN( 814)									while((_g2 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g2);
HXDLIN( 814)										_g2 = (_g2 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 814)									int state = 1;
HXDLIN( 814)									int _g = 0;
HXDLIN( 814)									while((_g < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g);
HXDLIN( 814)										_g = (_g + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 814)									int state1 = 2;
HXDLIN( 814)									int _g1 = 0;
HXDLIN( 814)									while((_g1 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g1);
HXDLIN( 814)										_g1 = (_g1 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 814)									int state2 = -1;
HXDLIN( 814)									int _g2 = 0;
HXDLIN( 814)									while((_g2 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g2);
HXDLIN( 814)										_g2 = (_g2 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 814)									int state = 1;
HXDLIN( 814)									int _g = 0;
HXDLIN( 814)									while((_g < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g);
HXDLIN( 814)										_g = (_g + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 814)									int state1 = 2;
HXDLIN( 814)									int _g1 = 0;
HXDLIN( 814)									while((_g1 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g1);
HXDLIN( 814)										_g1 = (_g1 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 814)									int state2 = -1;
HXDLIN( 814)									int _g2 = 0;
HXDLIN( 814)									while((_g2 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g2);
HXDLIN( 814)										_g2 = (_g2 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 814)									int state = 1;
HXDLIN( 814)									int _g = 0;
HXDLIN( 814)									while((_g < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g);
HXDLIN( 814)										_g = (_g + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 814)									int state1 = 2;
HXDLIN( 814)									int _g1 = 0;
HXDLIN( 814)									while((_g1 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g1);
HXDLIN( 814)										_g1 = (_g1 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 814)									int state2 = -1;
HXDLIN( 814)									int _g2 = 0;
HXDLIN( 814)									while((_g2 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g2);
HXDLIN( 814)										_g2 = (_g2 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 814)									int state = 1;
HXDLIN( 814)									int _g = 0;
HXDLIN( 814)									while((_g < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g);
HXDLIN( 814)										_g = (_g + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 814)									int state1 = 2;
HXDLIN( 814)									int _g1 = 0;
HXDLIN( 814)									while((_g1 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g1);
HXDLIN( 814)										_g1 = (_g1 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 814)									int state2 = -1;
HXDLIN( 814)									int _g2 = 0;
HXDLIN( 814)									while((_g2 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g2);
HXDLIN( 814)										_g2 = (_g2 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 814)									int state = 1;
HXDLIN( 814)									int _g = 0;
HXDLIN( 814)									while((_g < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g);
HXDLIN( 814)										_g = (_g + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 814)									int state1 = 2;
HXDLIN( 814)									int _g1 = 0;
HXDLIN( 814)									while((_g1 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g1);
HXDLIN( 814)										_g1 = (_g1 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 814)									int state2 = -1;
HXDLIN( 814)									int _g2 = 0;
HXDLIN( 814)									while((_g2 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g2);
HXDLIN( 814)										_g2 = (_g2 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 814)									int state = 1;
HXDLIN( 814)									int _g = 0;
HXDLIN( 814)									while((_g < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g);
HXDLIN( 814)										_g = (_g + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 814)									int state1 = 2;
HXDLIN( 814)									int _g1 = 0;
HXDLIN( 814)									while((_g1 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g1);
HXDLIN( 814)										_g1 = (_g1 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 814)								{
HXLINE( 814)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 814)									int state2 = -1;
HXDLIN( 814)									int _g2 = 0;
HXDLIN( 814)									while((_g2 < keys7->length)){
HXLINE( 814)										int key = keys7->__get(_g2);
HXDLIN( 814)										_g2 = (_g2 + 1);
HXDLIN( 814)										if ((key != -1)) {
HXLINE( 814)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 814)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 814)								int state = 2;
HXDLIN( 814)								int _g = 0;
HXDLIN( 814)								while((_g < keys7->length)){
HXLINE( 814)									int key = keys7->__get(_g);
HXDLIN( 814)									_g = (_g + 1);
HXDLIN( 814)									if ((key != -1)) {
HXLINE( 814)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 814)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 814)								int state = 2;
HXDLIN( 814)								int _g = 0;
HXDLIN( 814)								while((_g < keys7->length)){
HXLINE( 814)									int key = keys7->__get(_g);
HXDLIN( 814)									_g = (_g + 1);
HXDLIN( 814)									if ((key != -1)) {
HXLINE( 814)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 814)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 814)								int state = 2;
HXDLIN( 814)								int _g = 0;
HXDLIN( 814)								while((_g < keys7->length)){
HXLINE( 814)									int key = keys7->__get(_g);
HXDLIN( 814)									_g = (_g + 1);
HXDLIN( 814)									if ((key != -1)) {
HXLINE( 814)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 814)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 814)								int state = 2;
HXDLIN( 814)								int _g = 0;
HXDLIN( 814)								while((_g < keys7->length)){
HXLINE( 814)									int key = keys7->__get(_g);
HXDLIN( 814)									_g = (_g + 1);
HXDLIN( 814)									if ((key != -1)) {
HXLINE( 814)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 815)					{
HXLINE( 815)						::Array< int > keys8 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1112,1);
HXDLIN( 815)						switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 815)									int state = 1;
HXDLIN( 815)									int _g = 0;
HXDLIN( 815)									while((_g < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g);
HXDLIN( 815)										_g = (_g + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 815)									int state1 = 2;
HXDLIN( 815)									int _g1 = 0;
HXDLIN( 815)									while((_g1 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g1);
HXDLIN( 815)										_g1 = (_g1 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 815)									int state2 = -1;
HXDLIN( 815)									int _g2 = 0;
HXDLIN( 815)									while((_g2 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g2);
HXDLIN( 815)										_g2 = (_g2 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 815)									int state = 1;
HXDLIN( 815)									int _g = 0;
HXDLIN( 815)									while((_g < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g);
HXDLIN( 815)										_g = (_g + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 815)									int state1 = 2;
HXDLIN( 815)									int _g1 = 0;
HXDLIN( 815)									while((_g1 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g1);
HXDLIN( 815)										_g1 = (_g1 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 815)									int state2 = -1;
HXDLIN( 815)									int _g2 = 0;
HXDLIN( 815)									while((_g2 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g2);
HXDLIN( 815)										_g2 = (_g2 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 815)									int state = 1;
HXDLIN( 815)									int _g = 0;
HXDLIN( 815)									while((_g < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g);
HXDLIN( 815)										_g = (_g + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 815)									int state1 = 2;
HXDLIN( 815)									int _g1 = 0;
HXDLIN( 815)									while((_g1 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g1);
HXDLIN( 815)										_g1 = (_g1 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 815)									int state2 = -1;
HXDLIN( 815)									int _g2 = 0;
HXDLIN( 815)									while((_g2 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g2);
HXDLIN( 815)										_g2 = (_g2 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 815)									int state = 1;
HXDLIN( 815)									int _g = 0;
HXDLIN( 815)									while((_g < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g);
HXDLIN( 815)										_g = (_g + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 815)									int state1 = 2;
HXDLIN( 815)									int _g1 = 0;
HXDLIN( 815)									while((_g1 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g1);
HXDLIN( 815)										_g1 = (_g1 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 815)									int state2 = -1;
HXDLIN( 815)									int _g2 = 0;
HXDLIN( 815)									while((_g2 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g2);
HXDLIN( 815)										_g2 = (_g2 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 815)									int state = 1;
HXDLIN( 815)									int _g = 0;
HXDLIN( 815)									while((_g < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g);
HXDLIN( 815)										_g = (_g + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 815)									int state1 = 2;
HXDLIN( 815)									int _g1 = 0;
HXDLIN( 815)									while((_g1 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g1);
HXDLIN( 815)										_g1 = (_g1 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 815)									int state2 = -1;
HXDLIN( 815)									int _g2 = 0;
HXDLIN( 815)									while((_g2 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g2);
HXDLIN( 815)										_g2 = (_g2 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 815)									int state = 1;
HXDLIN( 815)									int _g = 0;
HXDLIN( 815)									while((_g < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g);
HXDLIN( 815)										_g = (_g + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 815)									int state1 = 2;
HXDLIN( 815)									int _g1 = 0;
HXDLIN( 815)									while((_g1 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g1);
HXDLIN( 815)										_g1 = (_g1 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 815)									int state2 = -1;
HXDLIN( 815)									int _g2 = 0;
HXDLIN( 815)									while((_g2 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g2);
HXDLIN( 815)										_g2 = (_g2 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 815)									int state = 1;
HXDLIN( 815)									int _g = 0;
HXDLIN( 815)									while((_g < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g);
HXDLIN( 815)										_g = (_g + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 815)									int state1 = 2;
HXDLIN( 815)									int _g1 = 0;
HXDLIN( 815)									while((_g1 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g1);
HXDLIN( 815)										_g1 = (_g1 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 815)									int state2 = -1;
HXDLIN( 815)									int _g2 = 0;
HXDLIN( 815)									while((_g2 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g2);
HXDLIN( 815)										_g2 = (_g2 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 815)									int state = 1;
HXDLIN( 815)									int _g = 0;
HXDLIN( 815)									while((_g < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g);
HXDLIN( 815)										_g = (_g + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 815)									int state1 = 2;
HXDLIN( 815)									int _g1 = 0;
HXDLIN( 815)									while((_g1 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g1);
HXDLIN( 815)										_g1 = (_g1 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 815)								{
HXLINE( 815)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 815)									int state2 = -1;
HXDLIN( 815)									int _g2 = 0;
HXDLIN( 815)									while((_g2 < keys8->length)){
HXLINE( 815)										int key = keys8->__get(_g2);
HXDLIN( 815)										_g2 = (_g2 + 1);
HXDLIN( 815)										if ((key != -1)) {
HXLINE( 815)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 815)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 815)								int state = 2;
HXDLIN( 815)								int _g = 0;
HXDLIN( 815)								while((_g < keys8->length)){
HXLINE( 815)									int key = keys8->__get(_g);
HXDLIN( 815)									_g = (_g + 1);
HXDLIN( 815)									if ((key != -1)) {
HXLINE( 815)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 815)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 815)								int state = 2;
HXDLIN( 815)								int _g = 0;
HXDLIN( 815)								while((_g < keys8->length)){
HXLINE( 815)									int key = keys8->__get(_g);
HXDLIN( 815)									_g = (_g + 1);
HXDLIN( 815)									if ((key != -1)) {
HXLINE( 815)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 815)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 815)								int state = 2;
HXDLIN( 815)								int _g = 0;
HXDLIN( 815)								while((_g < keys8->length)){
HXLINE( 815)									int key = keys8->__get(_g);
HXDLIN( 815)									_g = (_g + 1);
HXDLIN( 815)									if ((key != -1)) {
HXLINE( 815)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 815)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 815)								int state = 2;
HXDLIN( 815)								int _g = 0;
HXDLIN( 815)								while((_g < keys8->length)){
HXLINE( 815)									int key = keys8->__get(_g);
HXDLIN( 815)									_g = (_g + 1);
HXDLIN( 815)									if ((key != -1)) {
HXLINE( 815)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 816)					{
HXLINE( 816)						::Array< int > keys9 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1113,1);
HXDLIN( 816)						switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 816)									int state = 1;
HXDLIN( 816)									int _g = 0;
HXDLIN( 816)									while((_g < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g);
HXDLIN( 816)										_g = (_g + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 816)									int state1 = 2;
HXDLIN( 816)									int _g1 = 0;
HXDLIN( 816)									while((_g1 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g1);
HXDLIN( 816)										_g1 = (_g1 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 816)									int state2 = -1;
HXDLIN( 816)									int _g2 = 0;
HXDLIN( 816)									while((_g2 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g2);
HXDLIN( 816)										_g2 = (_g2 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 816)									int state = 1;
HXDLIN( 816)									int _g = 0;
HXDLIN( 816)									while((_g < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g);
HXDLIN( 816)										_g = (_g + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 816)									int state1 = 2;
HXDLIN( 816)									int _g1 = 0;
HXDLIN( 816)									while((_g1 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g1);
HXDLIN( 816)										_g1 = (_g1 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 816)									int state2 = -1;
HXDLIN( 816)									int _g2 = 0;
HXDLIN( 816)									while((_g2 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g2);
HXDLIN( 816)										_g2 = (_g2 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 816)									int state = 1;
HXDLIN( 816)									int _g = 0;
HXDLIN( 816)									while((_g < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g);
HXDLIN( 816)										_g = (_g + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 816)									int state1 = 2;
HXDLIN( 816)									int _g1 = 0;
HXDLIN( 816)									while((_g1 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g1);
HXDLIN( 816)										_g1 = (_g1 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 816)									int state2 = -1;
HXDLIN( 816)									int _g2 = 0;
HXDLIN( 816)									while((_g2 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g2);
HXDLIN( 816)										_g2 = (_g2 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 816)									int state = 1;
HXDLIN( 816)									int _g = 0;
HXDLIN( 816)									while((_g < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g);
HXDLIN( 816)										_g = (_g + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 816)									int state1 = 2;
HXDLIN( 816)									int _g1 = 0;
HXDLIN( 816)									while((_g1 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g1);
HXDLIN( 816)										_g1 = (_g1 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 816)									int state2 = -1;
HXDLIN( 816)									int _g2 = 0;
HXDLIN( 816)									while((_g2 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g2);
HXDLIN( 816)										_g2 = (_g2 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 816)									int state = 1;
HXDLIN( 816)									int _g = 0;
HXDLIN( 816)									while((_g < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g);
HXDLIN( 816)										_g = (_g + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 816)									int state1 = 2;
HXDLIN( 816)									int _g1 = 0;
HXDLIN( 816)									while((_g1 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g1);
HXDLIN( 816)										_g1 = (_g1 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 816)									int state2 = -1;
HXDLIN( 816)									int _g2 = 0;
HXDLIN( 816)									while((_g2 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g2);
HXDLIN( 816)										_g2 = (_g2 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 816)									int state = 1;
HXDLIN( 816)									int _g = 0;
HXDLIN( 816)									while((_g < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g);
HXDLIN( 816)										_g = (_g + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 816)									int state1 = 2;
HXDLIN( 816)									int _g1 = 0;
HXDLIN( 816)									while((_g1 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g1);
HXDLIN( 816)										_g1 = (_g1 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 816)									int state2 = -1;
HXDLIN( 816)									int _g2 = 0;
HXDLIN( 816)									while((_g2 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g2);
HXDLIN( 816)										_g2 = (_g2 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 816)									int state = 1;
HXDLIN( 816)									int _g = 0;
HXDLIN( 816)									while((_g < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g);
HXDLIN( 816)										_g = (_g + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 816)									int state1 = 2;
HXDLIN( 816)									int _g1 = 0;
HXDLIN( 816)									while((_g1 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g1);
HXDLIN( 816)										_g1 = (_g1 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 816)									int state2 = -1;
HXDLIN( 816)									int _g2 = 0;
HXDLIN( 816)									while((_g2 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g2);
HXDLIN( 816)										_g2 = (_g2 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 816)									int state = 1;
HXDLIN( 816)									int _g = 0;
HXDLIN( 816)									while((_g < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g);
HXDLIN( 816)										_g = (_g + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 816)									int state1 = 2;
HXDLIN( 816)									int _g1 = 0;
HXDLIN( 816)									while((_g1 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g1);
HXDLIN( 816)										_g1 = (_g1 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 816)								{
HXLINE( 816)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 816)									int state2 = -1;
HXDLIN( 816)									int _g2 = 0;
HXDLIN( 816)									while((_g2 < keys9->length)){
HXLINE( 816)										int key = keys9->__get(_g2);
HXDLIN( 816)										_g2 = (_g2 + 1);
HXDLIN( 816)										if ((key != -1)) {
HXLINE( 816)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 816)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 816)								int state = 2;
HXDLIN( 816)								int _g = 0;
HXDLIN( 816)								while((_g < keys9->length)){
HXLINE( 816)									int key = keys9->__get(_g);
HXDLIN( 816)									_g = (_g + 1);
HXDLIN( 816)									if ((key != -1)) {
HXLINE( 816)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 816)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 816)								int state = 2;
HXDLIN( 816)								int _g = 0;
HXDLIN( 816)								while((_g < keys9->length)){
HXLINE( 816)									int key = keys9->__get(_g);
HXDLIN( 816)									_g = (_g + 1);
HXDLIN( 816)									if ((key != -1)) {
HXLINE( 816)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 816)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 816)								int state = 2;
HXDLIN( 816)								int _g = 0;
HXDLIN( 816)								while((_g < keys9->length)){
HXLINE( 816)									int key = keys9->__get(_g);
HXDLIN( 816)									_g = (_g + 1);
HXDLIN( 816)									if ((key != -1)) {
HXLINE( 816)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 816)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 816)								int state = 2;
HXDLIN( 816)								int _g = 0;
HXDLIN( 816)								while((_g < keys9->length)){
HXLINE( 816)									int key = keys9->__get(_g);
HXDLIN( 816)									_g = (_g + 1);
HXDLIN( 816)									if ((key != -1)) {
HXLINE( 816)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 817)					{
HXLINE( 817)						::Array< int > keys10 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1114,1);
HXDLIN( 817)						switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 817)									int state = 1;
HXDLIN( 817)									int _g = 0;
HXDLIN( 817)									while((_g < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g);
HXDLIN( 817)										_g = (_g + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 817)									int state1 = 2;
HXDLIN( 817)									int _g1 = 0;
HXDLIN( 817)									while((_g1 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g1);
HXDLIN( 817)										_g1 = (_g1 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 817)									int state2 = -1;
HXDLIN( 817)									int _g2 = 0;
HXDLIN( 817)									while((_g2 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g2);
HXDLIN( 817)										_g2 = (_g2 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 817)									int state = 1;
HXDLIN( 817)									int _g = 0;
HXDLIN( 817)									while((_g < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g);
HXDLIN( 817)										_g = (_g + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 817)									int state1 = 2;
HXDLIN( 817)									int _g1 = 0;
HXDLIN( 817)									while((_g1 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g1);
HXDLIN( 817)										_g1 = (_g1 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 817)									int state2 = -1;
HXDLIN( 817)									int _g2 = 0;
HXDLIN( 817)									while((_g2 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g2);
HXDLIN( 817)										_g2 = (_g2 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 817)									int state = 1;
HXDLIN( 817)									int _g = 0;
HXDLIN( 817)									while((_g < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g);
HXDLIN( 817)										_g = (_g + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 817)									int state1 = 2;
HXDLIN( 817)									int _g1 = 0;
HXDLIN( 817)									while((_g1 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g1);
HXDLIN( 817)										_g1 = (_g1 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 817)									int state2 = -1;
HXDLIN( 817)									int _g2 = 0;
HXDLIN( 817)									while((_g2 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g2);
HXDLIN( 817)										_g2 = (_g2 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 817)									int state = 1;
HXDLIN( 817)									int _g = 0;
HXDLIN( 817)									while((_g < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g);
HXDLIN( 817)										_g = (_g + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 817)									int state1 = 2;
HXDLIN( 817)									int _g1 = 0;
HXDLIN( 817)									while((_g1 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g1);
HXDLIN( 817)										_g1 = (_g1 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 817)									int state2 = -1;
HXDLIN( 817)									int _g2 = 0;
HXDLIN( 817)									while((_g2 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g2);
HXDLIN( 817)										_g2 = (_g2 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 817)									int state = 1;
HXDLIN( 817)									int _g = 0;
HXDLIN( 817)									while((_g < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g);
HXDLIN( 817)										_g = (_g + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 817)									int state1 = 2;
HXDLIN( 817)									int _g1 = 0;
HXDLIN( 817)									while((_g1 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g1);
HXDLIN( 817)										_g1 = (_g1 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 817)									int state2 = -1;
HXDLIN( 817)									int _g2 = 0;
HXDLIN( 817)									while((_g2 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g2);
HXDLIN( 817)										_g2 = (_g2 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 817)									int state = 1;
HXDLIN( 817)									int _g = 0;
HXDLIN( 817)									while((_g < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g);
HXDLIN( 817)										_g = (_g + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 817)									int state1 = 2;
HXDLIN( 817)									int _g1 = 0;
HXDLIN( 817)									while((_g1 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g1);
HXDLIN( 817)										_g1 = (_g1 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 817)									int state2 = -1;
HXDLIN( 817)									int _g2 = 0;
HXDLIN( 817)									while((_g2 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g2);
HXDLIN( 817)										_g2 = (_g2 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 817)									int state = 1;
HXDLIN( 817)									int _g = 0;
HXDLIN( 817)									while((_g < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g);
HXDLIN( 817)										_g = (_g + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 817)									int state1 = 2;
HXDLIN( 817)									int _g1 = 0;
HXDLIN( 817)									while((_g1 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g1);
HXDLIN( 817)										_g1 = (_g1 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 817)									int state2 = -1;
HXDLIN( 817)									int _g2 = 0;
HXDLIN( 817)									while((_g2 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g2);
HXDLIN( 817)										_g2 = (_g2 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 817)									int state = 1;
HXDLIN( 817)									int _g = 0;
HXDLIN( 817)									while((_g < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g);
HXDLIN( 817)										_g = (_g + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 817)									int state1 = 2;
HXDLIN( 817)									int _g1 = 0;
HXDLIN( 817)									while((_g1 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g1);
HXDLIN( 817)										_g1 = (_g1 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 817)								{
HXLINE( 817)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 817)									int state2 = -1;
HXDLIN( 817)									int _g2 = 0;
HXDLIN( 817)									while((_g2 < keys10->length)){
HXLINE( 817)										int key = keys10->__get(_g2);
HXDLIN( 817)										_g2 = (_g2 + 1);
HXDLIN( 817)										if ((key != -1)) {
HXLINE( 817)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 817)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 817)								int state = 2;
HXDLIN( 817)								int _g = 0;
HXDLIN( 817)								while((_g < keys10->length)){
HXLINE( 817)									int key = keys10->__get(_g);
HXDLIN( 817)									_g = (_g + 1);
HXDLIN( 817)									if ((key != -1)) {
HXLINE( 817)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 817)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 817)								int state = 2;
HXDLIN( 817)								int _g = 0;
HXDLIN( 817)								while((_g < keys10->length)){
HXLINE( 817)									int key = keys10->__get(_g);
HXDLIN( 817)									_g = (_g + 1);
HXDLIN( 817)									if ((key != -1)) {
HXLINE( 817)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 817)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 817)								int state = 2;
HXDLIN( 817)								int _g = 0;
HXDLIN( 817)								while((_g < keys10->length)){
HXLINE( 817)									int key = keys10->__get(_g);
HXDLIN( 817)									_g = (_g + 1);
HXDLIN( 817)									if ((key != -1)) {
HXLINE( 817)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 817)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 817)								int state = 2;
HXDLIN( 817)								int _g = 0;
HXDLIN( 817)								while((_g < keys10->length)){
HXLINE( 817)									int key = keys10->__get(_g);
HXDLIN( 817)									_g = (_g + 1);
HXDLIN( 817)									if ((key != -1)) {
HXLINE( 817)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
HXLINE( 818)					{
HXLINE( 818)						::Array< int > keys11 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_1115,1);
HXDLIN( 818)						switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            							case (int)0: {
HXLINE( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 818)									int state = 1;
HXDLIN( 818)									int _g = 0;
HXDLIN( 818)									while((_g < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g);
HXDLIN( 818)										_g = (_g + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 818)									int state1 = 2;
HXDLIN( 818)									int _g1 = 0;
HXDLIN( 818)									while((_g1 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g1);
HXDLIN( 818)										_g1 = (_g1 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 818)									int state2 = -1;
HXDLIN( 818)									int _g2 = 0;
HXDLIN( 818)									while((_g2 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g2);
HXDLIN( 818)										_g2 = (_g2 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)1: {
HXLINE( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 818)									int state = 1;
HXDLIN( 818)									int _g = 0;
HXDLIN( 818)									while((_g < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g);
HXDLIN( 818)										_g = (_g + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 818)									int state1 = 2;
HXDLIN( 818)									int _g1 = 0;
HXDLIN( 818)									while((_g1 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g1);
HXDLIN( 818)										_g1 = (_g1 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 818)									int state2 = -1;
HXDLIN( 818)									int _g2 = 0;
HXDLIN( 818)									while((_g2 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g2);
HXDLIN( 818)										_g2 = (_g2 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 818)									int state = 1;
HXDLIN( 818)									int _g = 0;
HXDLIN( 818)									while((_g < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g);
HXDLIN( 818)										_g = (_g + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 818)									int state1 = 2;
HXDLIN( 818)									int _g1 = 0;
HXDLIN( 818)									while((_g1 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g1);
HXDLIN( 818)										_g1 = (_g1 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 818)									int state2 = -1;
HXDLIN( 818)									int _g2 = 0;
HXDLIN( 818)									while((_g2 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g2);
HXDLIN( 818)										_g2 = (_g2 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 818)									int state = 1;
HXDLIN( 818)									int _g = 0;
HXDLIN( 818)									while((_g < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g);
HXDLIN( 818)										_g = (_g + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 818)									int state1 = 2;
HXDLIN( 818)									int _g1 = 0;
HXDLIN( 818)									while((_g1 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g1);
HXDLIN( 818)										_g1 = (_g1 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 818)									int state2 = -1;
HXDLIN( 818)									int _g2 = 0;
HXDLIN( 818)									while((_g2 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g2);
HXDLIN( 818)										_g2 = (_g2 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)4: {
HXLINE( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 818)									int state = 1;
HXDLIN( 818)									int _g = 0;
HXDLIN( 818)									while((_g < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g);
HXDLIN( 818)										_g = (_g + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 818)									int state1 = 2;
HXDLIN( 818)									int _g1 = 0;
HXDLIN( 818)									while((_g1 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g1);
HXDLIN( 818)										_g1 = (_g1 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 818)									int state2 = -1;
HXDLIN( 818)									int _g2 = 0;
HXDLIN( 818)									while((_g2 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g2);
HXDLIN( 818)										_g2 = (_g2 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 818)									int state = 1;
HXDLIN( 818)									int _g = 0;
HXDLIN( 818)									while((_g < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g);
HXDLIN( 818)										_g = (_g + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 818)									int state1 = 2;
HXDLIN( 818)									int _g1 = 0;
HXDLIN( 818)									while((_g1 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g1);
HXDLIN( 818)										_g1 = (_g1 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 818)									int state2 = -1;
HXDLIN( 818)									int _g2 = 0;
HXDLIN( 818)									while((_g2 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g2);
HXDLIN( 818)										_g2 = (_g2 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)6: {
HXLINE( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 818)									int state = 1;
HXDLIN( 818)									int _g = 0;
HXDLIN( 818)									while((_g < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g);
HXDLIN( 818)										_g = (_g + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 818)									int state1 = 2;
HXDLIN( 818)									int _g1 = 0;
HXDLIN( 818)									while((_g1 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g1);
HXDLIN( 818)										_g1 = (_g1 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 818)									int state2 = -1;
HXDLIN( 818)									int _g2 = 0;
HXDLIN( 818)									while((_g2 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g2);
HXDLIN( 818)										_g2 = (_g2 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 818)									int state = 1;
HXDLIN( 818)									int _g = 0;
HXDLIN( 818)									while((_g < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g);
HXDLIN( 818)										_g = (_g + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action->addKey(key,state);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 818)									int state1 = 2;
HXDLIN( 818)									int _g1 = 0;
HXDLIN( 818)									while((_g1 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g1);
HXDLIN( 818)										_g1 = (_g1 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action1->addKey(key,state1);
            										}
            									}
            								}
HXDLIN( 818)								{
HXLINE( 818)									 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 818)									int state2 = -1;
HXDLIN( 818)									int _g2 = 0;
HXDLIN( 818)									while((_g2 < keys11->length)){
HXLINE( 818)										int key = keys11->__get(_g2);
HXDLIN( 818)										_g2 = (_g2 + 1);
HXDLIN( 818)										if ((key != -1)) {
HXLINE( 818)											action2->addKey(key,state2);
            										}
            									}
            								}
            							}
            							break;
            							case (int)8: {
HXLINE( 818)								 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 818)								int state = 2;
HXDLIN( 818)								int _g = 0;
HXDLIN( 818)								while((_g < keys11->length)){
HXLINE( 818)									int key = keys11->__get(_g);
HXDLIN( 818)									_g = (_g + 1);
HXDLIN( 818)									if ((key != -1)) {
HXLINE( 818)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 818)								 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 818)								int state = 2;
HXDLIN( 818)								int _g = 0;
HXDLIN( 818)								while((_g < keys11->length)){
HXLINE( 818)									int key = keys11->__get(_g);
HXDLIN( 818)									_g = (_g + 1);
HXDLIN( 818)									if ((key != -1)) {
HXLINE( 818)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)10: {
HXLINE( 818)								 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 818)								int state = 2;
HXDLIN( 818)								int _g = 0;
HXDLIN( 818)								while((_g < keys11->length)){
HXLINE( 818)									int key = keys11->__get(_g);
HXDLIN( 818)									_g = (_g + 1);
HXDLIN( 818)									if ((key != -1)) {
HXLINE( 818)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            							case (int)11: {
HXLINE( 818)								 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 818)								int state = 2;
HXDLIN( 818)								int _g = 0;
HXDLIN( 818)								while((_g < keys11->length)){
HXLINE( 818)									int key = keys11->__get(_g);
HXDLIN( 818)									_g = (_g + 1);
HXDLIN( 818)									if ((key != -1)) {
HXLINE( 818)										action->addKey(key,state);
            									}
            								}
            							}
            							break;
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
            			}
            			break;
            			case (int)3: {
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,setKeyboardScheme,(void))

void Controls_obj::removeKeyboard(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_872_removeKeyboard)
HXDLIN( 872)		int _g = 0;
HXDLIN( 872)		::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 872)		while((_g < _g1->length)){
HXDLIN( 872)			 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 872)			_g = (_g + 1);
HXLINE( 874)			int i = action->inputs->length;
HXLINE( 875)			while(true){
HXLINE( 875)				i = (i - 1);
HXDLIN( 875)				if (!(((i + 1) > 0))) {
HXLINE( 875)					goto _hx_goto_1117;
            				}
HXLINE( 877)				 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 878)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 879)					action->remove(input,null());
            				}
            			}
            			_hx_goto_1117:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,removeKeyboard,(void))

void Controls_obj::addGamepad(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_885_addGamepad)
HXLINE( 886)		this->gamepadsAdded->push(id);
HXLINE( 889)		{
HXLINE( 889)			::Dynamic map = buttonMap;
HXDLIN( 889)			::Dynamic _g_map = map;
HXDLIN( 889)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 889)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 889)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 889)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 889)				 ::Control _g1_key = key;
HXDLIN( 889)				 ::Control control = _g1_key;
HXDLIN( 889)				::Array< int > buttons = _g1_value;
HXLINE( 890)				{
HXLINE( 890)					int id1 = id;
HXDLIN( 890)					::Array< int > buttons1 = buttons;
HXDLIN( 890)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 890)								int state = 1;
HXDLIN( 890)								int _g = 0;
HXDLIN( 890)								while((_g < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g);
HXDLIN( 890)									_g = (_g + 1);
HXDLIN( 890)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 890)								int state1 = 2;
HXDLIN( 890)								int _g1 = 0;
HXDLIN( 890)								while((_g1 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g1);
HXDLIN( 890)									_g1 = (_g1 + 1);
HXDLIN( 890)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 890)								int state2 = -1;
HXDLIN( 890)								int _g2 = 0;
HXDLIN( 890)								while((_g2 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g2);
HXDLIN( 890)									_g2 = (_g2 + 1);
HXDLIN( 890)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 890)								int state = 1;
HXDLIN( 890)								int _g = 0;
HXDLIN( 890)								while((_g < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g);
HXDLIN( 890)									_g = (_g + 1);
HXDLIN( 890)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 890)								int state1 = 2;
HXDLIN( 890)								int _g1 = 0;
HXDLIN( 890)								while((_g1 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g1);
HXDLIN( 890)									_g1 = (_g1 + 1);
HXDLIN( 890)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 890)								int state2 = -1;
HXDLIN( 890)								int _g2 = 0;
HXDLIN( 890)								while((_g2 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g2);
HXDLIN( 890)									_g2 = (_g2 + 1);
HXDLIN( 890)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 890)								int state = 1;
HXDLIN( 890)								int _g = 0;
HXDLIN( 890)								while((_g < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g);
HXDLIN( 890)									_g = (_g + 1);
HXDLIN( 890)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 890)								int state1 = 2;
HXDLIN( 890)								int _g1 = 0;
HXDLIN( 890)								while((_g1 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g1);
HXDLIN( 890)									_g1 = (_g1 + 1);
HXDLIN( 890)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 890)								int state2 = -1;
HXDLIN( 890)								int _g2 = 0;
HXDLIN( 890)								while((_g2 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g2);
HXDLIN( 890)									_g2 = (_g2 + 1);
HXDLIN( 890)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 890)								int state = 1;
HXDLIN( 890)								int _g = 0;
HXDLIN( 890)								while((_g < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g);
HXDLIN( 890)									_g = (_g + 1);
HXDLIN( 890)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 890)								int state1 = 2;
HXDLIN( 890)								int _g1 = 0;
HXDLIN( 890)								while((_g1 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g1);
HXDLIN( 890)									_g1 = (_g1 + 1);
HXDLIN( 890)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 890)								int state2 = -1;
HXDLIN( 890)								int _g2 = 0;
HXDLIN( 890)								while((_g2 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g2);
HXDLIN( 890)									_g2 = (_g2 + 1);
HXDLIN( 890)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 890)								int state = 1;
HXDLIN( 890)								int _g = 0;
HXDLIN( 890)								while((_g < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g);
HXDLIN( 890)									_g = (_g + 1);
HXDLIN( 890)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 890)								int state1 = 2;
HXDLIN( 890)								int _g1 = 0;
HXDLIN( 890)								while((_g1 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g1);
HXDLIN( 890)									_g1 = (_g1 + 1);
HXDLIN( 890)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 890)								int state2 = -1;
HXDLIN( 890)								int _g2 = 0;
HXDLIN( 890)								while((_g2 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g2);
HXDLIN( 890)									_g2 = (_g2 + 1);
HXDLIN( 890)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 890)								int state = 1;
HXDLIN( 890)								int _g = 0;
HXDLIN( 890)								while((_g < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g);
HXDLIN( 890)									_g = (_g + 1);
HXDLIN( 890)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 890)								int state1 = 2;
HXDLIN( 890)								int _g1 = 0;
HXDLIN( 890)								while((_g1 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g1);
HXDLIN( 890)									_g1 = (_g1 + 1);
HXDLIN( 890)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 890)								int state2 = -1;
HXDLIN( 890)								int _g2 = 0;
HXDLIN( 890)								while((_g2 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g2);
HXDLIN( 890)									_g2 = (_g2 + 1);
HXDLIN( 890)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 890)								int state = 1;
HXDLIN( 890)								int _g = 0;
HXDLIN( 890)								while((_g < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g);
HXDLIN( 890)									_g = (_g + 1);
HXDLIN( 890)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 890)								int state1 = 2;
HXDLIN( 890)								int _g1 = 0;
HXDLIN( 890)								while((_g1 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g1);
HXDLIN( 890)									_g1 = (_g1 + 1);
HXDLIN( 890)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 890)								int state2 = -1;
HXDLIN( 890)								int _g2 = 0;
HXDLIN( 890)								while((_g2 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g2);
HXDLIN( 890)									_g2 = (_g2 + 1);
HXDLIN( 890)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 890)								int state = 1;
HXDLIN( 890)								int _g = 0;
HXDLIN( 890)								while((_g < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g);
HXDLIN( 890)									_g = (_g + 1);
HXDLIN( 890)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 890)								int state1 = 2;
HXDLIN( 890)								int _g1 = 0;
HXDLIN( 890)								while((_g1 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g1);
HXDLIN( 890)									_g1 = (_g1 + 1);
HXDLIN( 890)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 890)							{
HXLINE( 890)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 890)								int state2 = -1;
HXDLIN( 890)								int _g2 = 0;
HXDLIN( 890)								while((_g2 < buttons1->length)){
HXLINE( 890)									int button = buttons1->__get(_g2);
HXDLIN( 890)									_g2 = (_g2 + 1);
HXDLIN( 890)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 890)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 890)							int state = 2;
HXDLIN( 890)							int _g = 0;
HXDLIN( 890)							while((_g < buttons1->length)){
HXLINE( 890)								int button = buttons1->__get(_g);
HXDLIN( 890)								_g = (_g + 1);
HXDLIN( 890)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 890)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 890)							int state = 2;
HXDLIN( 890)							int _g = 0;
HXDLIN( 890)							while((_g < buttons1->length)){
HXLINE( 890)								int button = buttons1->__get(_g);
HXDLIN( 890)								_g = (_g + 1);
HXDLIN( 890)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 890)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 890)							int state = 2;
HXDLIN( 890)							int _g = 0;
HXDLIN( 890)							while((_g < buttons1->length)){
HXLINE( 890)								int button = buttons1->__get(_g);
HXDLIN( 890)								_g = (_g + 1);
HXDLIN( 890)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 890)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 890)							int state = 2;
HXDLIN( 890)							int _g = 0;
HXDLIN( 890)							while((_g < buttons1->length)){
HXLINE( 890)								int button = buttons1->__get(_g);
HXDLIN( 890)								_g = (_g + 1);
HXDLIN( 890)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepad,(void))

void Controls_obj::addGamepadLiteral(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_898_addGamepadLiteral)
HXLINE( 899)		this->gamepadsAdded->push(id);
HXLINE( 902)		{
HXLINE( 902)			::Dynamic map = buttonMap;
HXDLIN( 902)			::Dynamic _g_map = map;
HXDLIN( 902)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 902)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 902)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 902)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 902)				 ::Control _g1_key = key;
HXDLIN( 902)				 ::Control control = _g1_key;
HXDLIN( 902)				::Array< int > buttons = _g1_value;
HXLINE( 903)				{
HXLINE( 903)					int id1 = id;
HXDLIN( 903)					::Array< int > buttons1 = buttons;
HXDLIN( 903)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 903)								int state = 1;
HXDLIN( 903)								int _g = 0;
HXDLIN( 903)								while((_g < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g);
HXDLIN( 903)									_g = (_g + 1);
HXDLIN( 903)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 903)								int state1 = 2;
HXDLIN( 903)								int _g1 = 0;
HXDLIN( 903)								while((_g1 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g1);
HXDLIN( 903)									_g1 = (_g1 + 1);
HXDLIN( 903)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 903)								int state2 = -1;
HXDLIN( 903)								int _g2 = 0;
HXDLIN( 903)								while((_g2 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g2);
HXDLIN( 903)									_g2 = (_g2 + 1);
HXDLIN( 903)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 903)								int state = 1;
HXDLIN( 903)								int _g = 0;
HXDLIN( 903)								while((_g < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g);
HXDLIN( 903)									_g = (_g + 1);
HXDLIN( 903)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 903)								int state1 = 2;
HXDLIN( 903)								int _g1 = 0;
HXDLIN( 903)								while((_g1 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g1);
HXDLIN( 903)									_g1 = (_g1 + 1);
HXDLIN( 903)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 903)								int state2 = -1;
HXDLIN( 903)								int _g2 = 0;
HXDLIN( 903)								while((_g2 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g2);
HXDLIN( 903)									_g2 = (_g2 + 1);
HXDLIN( 903)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 903)								int state = 1;
HXDLIN( 903)								int _g = 0;
HXDLIN( 903)								while((_g < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g);
HXDLIN( 903)									_g = (_g + 1);
HXDLIN( 903)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 903)								int state1 = 2;
HXDLIN( 903)								int _g1 = 0;
HXDLIN( 903)								while((_g1 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g1);
HXDLIN( 903)									_g1 = (_g1 + 1);
HXDLIN( 903)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 903)								int state2 = -1;
HXDLIN( 903)								int _g2 = 0;
HXDLIN( 903)								while((_g2 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g2);
HXDLIN( 903)									_g2 = (_g2 + 1);
HXDLIN( 903)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 903)								int state = 1;
HXDLIN( 903)								int _g = 0;
HXDLIN( 903)								while((_g < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g);
HXDLIN( 903)									_g = (_g + 1);
HXDLIN( 903)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 903)								int state1 = 2;
HXDLIN( 903)								int _g1 = 0;
HXDLIN( 903)								while((_g1 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g1);
HXDLIN( 903)									_g1 = (_g1 + 1);
HXDLIN( 903)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 903)								int state2 = -1;
HXDLIN( 903)								int _g2 = 0;
HXDLIN( 903)								while((_g2 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g2);
HXDLIN( 903)									_g2 = (_g2 + 1);
HXDLIN( 903)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 903)								int state = 1;
HXDLIN( 903)								int _g = 0;
HXDLIN( 903)								while((_g < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g);
HXDLIN( 903)									_g = (_g + 1);
HXDLIN( 903)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 903)								int state1 = 2;
HXDLIN( 903)								int _g1 = 0;
HXDLIN( 903)								while((_g1 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g1);
HXDLIN( 903)									_g1 = (_g1 + 1);
HXDLIN( 903)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 903)								int state2 = -1;
HXDLIN( 903)								int _g2 = 0;
HXDLIN( 903)								while((_g2 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g2);
HXDLIN( 903)									_g2 = (_g2 + 1);
HXDLIN( 903)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 903)								int state = 1;
HXDLIN( 903)								int _g = 0;
HXDLIN( 903)								while((_g < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g);
HXDLIN( 903)									_g = (_g + 1);
HXDLIN( 903)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 903)								int state1 = 2;
HXDLIN( 903)								int _g1 = 0;
HXDLIN( 903)								while((_g1 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g1);
HXDLIN( 903)									_g1 = (_g1 + 1);
HXDLIN( 903)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 903)								int state2 = -1;
HXDLIN( 903)								int _g2 = 0;
HXDLIN( 903)								while((_g2 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g2);
HXDLIN( 903)									_g2 = (_g2 + 1);
HXDLIN( 903)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 903)								int state = 1;
HXDLIN( 903)								int _g = 0;
HXDLIN( 903)								while((_g < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g);
HXDLIN( 903)									_g = (_g + 1);
HXDLIN( 903)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 903)								int state1 = 2;
HXDLIN( 903)								int _g1 = 0;
HXDLIN( 903)								while((_g1 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g1);
HXDLIN( 903)									_g1 = (_g1 + 1);
HXDLIN( 903)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 903)								int state2 = -1;
HXDLIN( 903)								int _g2 = 0;
HXDLIN( 903)								while((_g2 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g2);
HXDLIN( 903)									_g2 = (_g2 + 1);
HXDLIN( 903)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 903)								int state = 1;
HXDLIN( 903)								int _g = 0;
HXDLIN( 903)								while((_g < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g);
HXDLIN( 903)									_g = (_g + 1);
HXDLIN( 903)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 903)								int state1 = 2;
HXDLIN( 903)								int _g1 = 0;
HXDLIN( 903)								while((_g1 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g1);
HXDLIN( 903)									_g1 = (_g1 + 1);
HXDLIN( 903)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 903)							{
HXLINE( 903)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 903)								int state2 = -1;
HXDLIN( 903)								int _g2 = 0;
HXDLIN( 903)								while((_g2 < buttons1->length)){
HXLINE( 903)									int button = buttons1->__get(_g2);
HXDLIN( 903)									_g2 = (_g2 + 1);
HXDLIN( 903)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 903)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 903)							int state = 2;
HXDLIN( 903)							int _g = 0;
HXDLIN( 903)							while((_g < buttons1->length)){
HXLINE( 903)								int button = buttons1->__get(_g);
HXDLIN( 903)								_g = (_g + 1);
HXDLIN( 903)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)9: {
HXLINE( 903)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 903)							int state = 2;
HXDLIN( 903)							int _g = 0;
HXDLIN( 903)							while((_g < buttons1->length)){
HXLINE( 903)								int button = buttons1->__get(_g);
HXDLIN( 903)								_g = (_g + 1);
HXDLIN( 903)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)10: {
HXLINE( 903)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 903)							int state = 2;
HXDLIN( 903)							int _g = 0;
HXDLIN( 903)							while((_g < buttons1->length)){
HXLINE( 903)								int button = buttons1->__get(_g);
HXDLIN( 903)								_g = (_g + 1);
HXDLIN( 903)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)11: {
HXLINE( 903)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 903)							int state = 2;
HXDLIN( 903)							int _g = 0;
HXDLIN( 903)							while((_g < buttons1->length)){
HXLINE( 903)								int button = buttons1->__get(_g);
HXDLIN( 903)								_g = (_g + 1);
HXDLIN( 903)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepadLiteral,(void))

void Controls_obj::removeGamepad(::hx::Null< int >  __o_deviceID){
            		int deviceID = __o_deviceID.Default(-1);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_911_removeGamepad)
HXLINE( 912)		{
HXLINE( 912)			int _g = 0;
HXDLIN( 912)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 912)			while((_g < _g1->length)){
HXLINE( 912)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 912)				_g = (_g + 1);
HXLINE( 914)				int i = action->inputs->length;
HXLINE( 915)				while(true){
HXLINE( 915)					i = (i - 1);
HXDLIN( 915)					if (!(((i + 1) > 0))) {
HXLINE( 915)						goto _hx_goto_1180;
            					}
HXLINE( 917)					 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 918)					bool _hx_tmp;
HXDLIN( 918)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 918)						if ((deviceID != -1)) {
HXLINE( 918)							_hx_tmp = (input->deviceID == deviceID);
            						}
            						else {
HXLINE( 918)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 918)						_hx_tmp = false;
            					}
HXDLIN( 918)					if (_hx_tmp) {
HXLINE( 919)						action->remove(input,null());
            					}
            				}
            				_hx_goto_1180:;
            			}
            		}
HXLINE( 923)		this->gamepadsAdded->remove(deviceID);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeGamepad,(void))

void Controls_obj::addDefaultGamepad(int id){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_929_addDefaultGamepad)
HXDLIN( 929)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 929)		_g->set(::Control_obj::ACCEPT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1212,1));
HXDLIN( 929)		_g->set(::Control_obj::BACK_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1213,1));
HXDLIN( 929)		_g->set(::Control_obj::UI_UP_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1214,2));
HXDLIN( 929)		_g->set(::Control_obj::UI_DOWN_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1215,2));
HXDLIN( 929)		_g->set(::Control_obj::UI_LEFT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1216,2));
HXDLIN( 929)		_g->set(::Control_obj::UI_RIGHT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1217,2));
HXDLIN( 929)		_g->set(::Control_obj::NOTE_UP_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1218,2));
HXDLIN( 929)		_g->set(::Control_obj::NOTE_DOWN_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1219,2));
HXDLIN( 929)		_g->set(::Control_obj::NOTE_LEFT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1220,2));
HXDLIN( 929)		_g->set(::Control_obj::NOTE_RIGHT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1221,2));
HXDLIN( 929)		_g->set(::Control_obj::PAUSE_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1222,1));
HXDLIN( 929)		_g->set(::Control_obj::RESET_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_1223,1));
HXDLIN( 929)		this->gamepadsAdded->push(id);
HXDLIN( 929)		{
HXDLIN( 929)			::Dynamic map = _g;
HXDLIN( 929)			::Dynamic _g_map = map;
HXDLIN( 929)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 929)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 929)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 929)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 929)				 ::Control _g1_key = key;
HXDLIN( 929)				 ::Control control = _g1_key;
HXDLIN( 929)				::Array< int > buttons = _g1_value;
HXDLIN( 929)				{
HXDLIN( 929)					int id1 = id;
HXDLIN( 929)					::Array< int > buttons1 = buttons;
HXDLIN( 929)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 929)								int state = 1;
HXDLIN( 929)								int _g = 0;
HXDLIN( 929)								while((_g < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g);
HXDLIN( 929)									_g = (_g + 1);
HXDLIN( 929)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 929)								int state1 = 2;
HXDLIN( 929)								int _g1 = 0;
HXDLIN( 929)								while((_g1 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g1);
HXDLIN( 929)									_g1 = (_g1 + 1);
HXDLIN( 929)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 929)								int state2 = -1;
HXDLIN( 929)								int _g2 = 0;
HXDLIN( 929)								while((_g2 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g2);
HXDLIN( 929)									_g2 = (_g2 + 1);
HXDLIN( 929)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 929)								int state = 1;
HXDLIN( 929)								int _g = 0;
HXDLIN( 929)								while((_g < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g);
HXDLIN( 929)									_g = (_g + 1);
HXDLIN( 929)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 929)								int state1 = 2;
HXDLIN( 929)								int _g1 = 0;
HXDLIN( 929)								while((_g1 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g1);
HXDLIN( 929)									_g1 = (_g1 + 1);
HXDLIN( 929)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 929)								int state2 = -1;
HXDLIN( 929)								int _g2 = 0;
HXDLIN( 929)								while((_g2 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g2);
HXDLIN( 929)									_g2 = (_g2 + 1);
HXDLIN( 929)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 929)								int state = 1;
HXDLIN( 929)								int _g = 0;
HXDLIN( 929)								while((_g < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g);
HXDLIN( 929)									_g = (_g + 1);
HXDLIN( 929)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 929)								int state1 = 2;
HXDLIN( 929)								int _g1 = 0;
HXDLIN( 929)								while((_g1 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g1);
HXDLIN( 929)									_g1 = (_g1 + 1);
HXDLIN( 929)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 929)								int state2 = -1;
HXDLIN( 929)								int _g2 = 0;
HXDLIN( 929)								while((_g2 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g2);
HXDLIN( 929)									_g2 = (_g2 + 1);
HXDLIN( 929)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 929)								int state = 1;
HXDLIN( 929)								int _g = 0;
HXDLIN( 929)								while((_g < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g);
HXDLIN( 929)									_g = (_g + 1);
HXDLIN( 929)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 929)								int state1 = 2;
HXDLIN( 929)								int _g1 = 0;
HXDLIN( 929)								while((_g1 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g1);
HXDLIN( 929)									_g1 = (_g1 + 1);
HXDLIN( 929)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 929)								int state2 = -1;
HXDLIN( 929)								int _g2 = 0;
HXDLIN( 929)								while((_g2 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g2);
HXDLIN( 929)									_g2 = (_g2 + 1);
HXDLIN( 929)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 929)								int state = 1;
HXDLIN( 929)								int _g = 0;
HXDLIN( 929)								while((_g < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g);
HXDLIN( 929)									_g = (_g + 1);
HXDLIN( 929)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 929)								int state1 = 2;
HXDLIN( 929)								int _g1 = 0;
HXDLIN( 929)								while((_g1 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g1);
HXDLIN( 929)									_g1 = (_g1 + 1);
HXDLIN( 929)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 929)								int state2 = -1;
HXDLIN( 929)								int _g2 = 0;
HXDLIN( 929)								while((_g2 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g2);
HXDLIN( 929)									_g2 = (_g2 + 1);
HXDLIN( 929)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)5: {
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 929)								int state = 1;
HXDLIN( 929)								int _g = 0;
HXDLIN( 929)								while((_g < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g);
HXDLIN( 929)									_g = (_g + 1);
HXDLIN( 929)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 929)								int state1 = 2;
HXDLIN( 929)								int _g1 = 0;
HXDLIN( 929)								while((_g1 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g1);
HXDLIN( 929)									_g1 = (_g1 + 1);
HXDLIN( 929)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 929)								int state2 = -1;
HXDLIN( 929)								int _g2 = 0;
HXDLIN( 929)								while((_g2 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g2);
HXDLIN( 929)									_g2 = (_g2 + 1);
HXDLIN( 929)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)6: {
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 929)								int state = 1;
HXDLIN( 929)								int _g = 0;
HXDLIN( 929)								while((_g < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g);
HXDLIN( 929)									_g = (_g + 1);
HXDLIN( 929)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 929)								int state1 = 2;
HXDLIN( 929)								int _g1 = 0;
HXDLIN( 929)								while((_g1 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g1);
HXDLIN( 929)									_g1 = (_g1 + 1);
HXDLIN( 929)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 929)								int state2 = -1;
HXDLIN( 929)								int _g2 = 0;
HXDLIN( 929)								while((_g2 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g2);
HXDLIN( 929)									_g2 = (_g2 + 1);
HXDLIN( 929)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 929)								int state = 1;
HXDLIN( 929)								int _g = 0;
HXDLIN( 929)								while((_g < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g);
HXDLIN( 929)									_g = (_g + 1);
HXDLIN( 929)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 929)								int state1 = 2;
HXDLIN( 929)								int _g1 = 0;
HXDLIN( 929)								while((_g1 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g1);
HXDLIN( 929)									_g1 = (_g1 + 1);
HXDLIN( 929)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 929)							{
HXDLIN( 929)								 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 929)								int state2 = -1;
HXDLIN( 929)								int _g2 = 0;
HXDLIN( 929)								while((_g2 < buttons1->length)){
HXDLIN( 929)									int button = buttons1->__get(_g2);
HXDLIN( 929)									_g2 = (_g2 + 1);
HXDLIN( 929)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)8: {
HXDLIN( 929)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 929)							int state = 2;
HXDLIN( 929)							int _g = 0;
HXDLIN( 929)							while((_g < buttons1->length)){
HXDLIN( 929)								int button = buttons1->__get(_g);
HXDLIN( 929)								_g = (_g + 1);
HXDLIN( 929)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)9: {
HXDLIN( 929)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 929)							int state = 2;
HXDLIN( 929)							int _g = 0;
HXDLIN( 929)							while((_g < buttons1->length)){
HXDLIN( 929)								int button = buttons1->__get(_g);
HXDLIN( 929)								_g = (_g + 1);
HXDLIN( 929)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)10: {
HXDLIN( 929)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 929)							int state = 2;
HXDLIN( 929)							int _g = 0;
HXDLIN( 929)							while((_g < buttons1->length)){
HXDLIN( 929)								int button = buttons1->__get(_g);
HXDLIN( 929)								_g = (_g + 1);
HXDLIN( 929)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)11: {
HXDLIN( 929)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 929)							int state = 2;
HXDLIN( 929)							int _g = 0;
HXDLIN( 929)							while((_g < buttons1->length)){
HXDLIN( 929)								int button = buttons1->__get(_g);
HXDLIN( 929)								_g = (_g + 1);
HXDLIN( 929)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,addDefaultGamepad,(void))

void Controls_obj::bindButtons( ::Control control,int id,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_970_bindButtons)
HXDLIN( 970)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_up;
HXDLIN( 970)					int state = 1;
HXDLIN( 970)					int _g = 0;
HXDLIN( 970)					while((_g < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g);
HXDLIN( 970)						_g = (_g + 1);
HXDLIN( 970)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_upP;
HXDLIN( 970)					int state1 = 2;
HXDLIN( 970)					int _g1 = 0;
HXDLIN( 970)					while((_g1 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g1);
HXDLIN( 970)						_g1 = (_g1 + 1);
HXDLIN( 970)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_upR;
HXDLIN( 970)					int state2 = -1;
HXDLIN( 970)					int _g2 = 0;
HXDLIN( 970)					while((_g2 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g2);
HXDLIN( 970)						_g2 = (_g2 + 1);
HXDLIN( 970)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_left;
HXDLIN( 970)					int state = 1;
HXDLIN( 970)					int _g = 0;
HXDLIN( 970)					while((_g < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g);
HXDLIN( 970)						_g = (_g + 1);
HXDLIN( 970)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_leftP;
HXDLIN( 970)					int state1 = 2;
HXDLIN( 970)					int _g1 = 0;
HXDLIN( 970)					while((_g1 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g1);
HXDLIN( 970)						_g1 = (_g1 + 1);
HXDLIN( 970)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_leftR;
HXDLIN( 970)					int state2 = -1;
HXDLIN( 970)					int _g2 = 0;
HXDLIN( 970)					while((_g2 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g2);
HXDLIN( 970)						_g2 = (_g2 + 1);
HXDLIN( 970)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_right;
HXDLIN( 970)					int state = 1;
HXDLIN( 970)					int _g = 0;
HXDLIN( 970)					while((_g < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g);
HXDLIN( 970)						_g = (_g + 1);
HXDLIN( 970)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_rightP;
HXDLIN( 970)					int state1 = 2;
HXDLIN( 970)					int _g1 = 0;
HXDLIN( 970)					while((_g1 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g1);
HXDLIN( 970)						_g1 = (_g1 + 1);
HXDLIN( 970)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_rightR;
HXDLIN( 970)					int state2 = -1;
HXDLIN( 970)					int _g2 = 0;
HXDLIN( 970)					while((_g2 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g2);
HXDLIN( 970)						_g2 = (_g2 + 1);
HXDLIN( 970)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action = this->_ui_down;
HXDLIN( 970)					int state = 1;
HXDLIN( 970)					int _g = 0;
HXDLIN( 970)					while((_g < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g);
HXDLIN( 970)						_g = (_g + 1);
HXDLIN( 970)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action1 = this->_ui_downP;
HXDLIN( 970)					int state1 = 2;
HXDLIN( 970)					int _g1 = 0;
HXDLIN( 970)					while((_g1 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g1);
HXDLIN( 970)						_g1 = (_g1 + 1);
HXDLIN( 970)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action2 = this->_ui_downR;
HXDLIN( 970)					int state2 = -1;
HXDLIN( 970)					int _g2 = 0;
HXDLIN( 970)					while((_g2 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g2);
HXDLIN( 970)						_g2 = (_g2 + 1);
HXDLIN( 970)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action = this->_note_up;
HXDLIN( 970)					int state = 1;
HXDLIN( 970)					int _g = 0;
HXDLIN( 970)					while((_g < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g);
HXDLIN( 970)						_g = (_g + 1);
HXDLIN( 970)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_upP;
HXDLIN( 970)					int state1 = 2;
HXDLIN( 970)					int _g1 = 0;
HXDLIN( 970)					while((_g1 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g1);
HXDLIN( 970)						_g1 = (_g1 + 1);
HXDLIN( 970)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_upR;
HXDLIN( 970)					int state2 = -1;
HXDLIN( 970)					int _g2 = 0;
HXDLIN( 970)					while((_g2 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g2);
HXDLIN( 970)						_g2 = (_g2 + 1);
HXDLIN( 970)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action = this->_note_left;
HXDLIN( 970)					int state = 1;
HXDLIN( 970)					int _g = 0;
HXDLIN( 970)					while((_g < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g);
HXDLIN( 970)						_g = (_g + 1);
HXDLIN( 970)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_leftP;
HXDLIN( 970)					int state1 = 2;
HXDLIN( 970)					int _g1 = 0;
HXDLIN( 970)					while((_g1 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g1);
HXDLIN( 970)						_g1 = (_g1 + 1);
HXDLIN( 970)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_leftR;
HXDLIN( 970)					int state2 = -1;
HXDLIN( 970)					int _g2 = 0;
HXDLIN( 970)					while((_g2 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g2);
HXDLIN( 970)						_g2 = (_g2 + 1);
HXDLIN( 970)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action = this->_note_right;
HXDLIN( 970)					int state = 1;
HXDLIN( 970)					int _g = 0;
HXDLIN( 970)					while((_g < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g);
HXDLIN( 970)						_g = (_g + 1);
HXDLIN( 970)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_rightP;
HXDLIN( 970)					int state1 = 2;
HXDLIN( 970)					int _g1 = 0;
HXDLIN( 970)					while((_g1 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g1);
HXDLIN( 970)						_g1 = (_g1 + 1);
HXDLIN( 970)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_rightR;
HXDLIN( 970)					int state2 = -1;
HXDLIN( 970)					int _g2 = 0;
HXDLIN( 970)					while((_g2 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g2);
HXDLIN( 970)						_g2 = (_g2 + 1);
HXDLIN( 970)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action = this->_note_down;
HXDLIN( 970)					int state = 1;
HXDLIN( 970)					int _g = 0;
HXDLIN( 970)					while((_g < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g);
HXDLIN( 970)						_g = (_g + 1);
HXDLIN( 970)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action1 = this->_note_downP;
HXDLIN( 970)					int state1 = 2;
HXDLIN( 970)					int _g1 = 0;
HXDLIN( 970)					while((_g1 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g1);
HXDLIN( 970)						_g1 = (_g1 + 1);
HXDLIN( 970)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 970)				{
HXDLIN( 970)					 ::flixel::input::actions::FlxActionDigital action2 = this->_note_downR;
HXDLIN( 970)					int state2 = -1;
HXDLIN( 970)					int _g2 = 0;
HXDLIN( 970)					while((_g2 < buttons->length)){
HXDLIN( 970)						int button = buttons->__get(_g2);
HXDLIN( 970)						_g2 = (_g2 + 1);
HXDLIN( 970)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN( 970)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 970)				int state = 2;
HXDLIN( 970)				int _g = 0;
HXDLIN( 970)				while((_g < buttons->length)){
HXDLIN( 970)					int button = buttons->__get(_g);
HXDLIN( 970)					_g = (_g + 1);
HXDLIN( 970)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)9: {
HXDLIN( 970)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 970)				int state = 2;
HXDLIN( 970)				int _g = 0;
HXDLIN( 970)				while((_g < buttons->length)){
HXDLIN( 970)					int button = buttons->__get(_g);
HXDLIN( 970)					_g = (_g + 1);
HXDLIN( 970)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)10: {
HXDLIN( 970)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 970)				int state = 2;
HXDLIN( 970)				int _g = 0;
HXDLIN( 970)				while((_g < buttons->length)){
HXDLIN( 970)					int button = buttons->__get(_g);
HXDLIN( 970)					_g = (_g + 1);
HXDLIN( 970)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)11: {
HXDLIN( 970)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 970)				int state = 2;
HXDLIN( 970)				int _g = 0;
HXDLIN( 970)				while((_g < buttons->length)){
HXDLIN( 970)					int button = buttons->__get(_g);
HXDLIN( 970)					_g = (_g + 1);
HXDLIN( 970)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,bindButtons,(void))

void Controls_obj::unbindButtons( ::Control control,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_983_unbindButtons)
HXDLIN( 983)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_up,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_upP,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_upR,gamepadID,buttons);
            			}
            			break;
            			case (int)1: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_left,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_leftP,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_leftR,gamepadID,buttons);
            			}
            			break;
            			case (int)2: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_right,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_rightP,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_rightR,gamepadID,buttons);
            			}
            			break;
            			case (int)3: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_down,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_downP,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_ui_downR,gamepadID,buttons);
            			}
            			break;
            			case (int)4: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_up,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_upP,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_upR,gamepadID,buttons);
            			}
            			break;
            			case (int)5: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_left,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_leftP,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_leftR,gamepadID,buttons);
            			}
            			break;
            			case (int)6: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_right,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_rightP,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_rightR,gamepadID,buttons);
            			}
            			break;
            			case (int)7: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_down,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_downP,gamepadID,buttons);
HXDLIN( 983)				::Controls_obj::removeButtons(this->_note_downR,gamepadID,buttons);
            			}
            			break;
            			case (int)8: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_reset,gamepadID,buttons);
            			}
            			break;
            			case (int)9: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_accept,gamepadID,buttons);
            			}
            			break;
            			case (int)10: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_back,gamepadID,buttons);
            			}
            			break;
            			case (int)11: {
HXDLIN( 983)				::Controls_obj::removeButtons(this->_pause,gamepadID,buttons);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,unbindButtons,(void))

::Array< int > Controls_obj::getInputsFor( ::Control control, ::Device device,::Array< int > list){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_1007_getInputsFor)
HXLINE(1008)		if (::hx::IsNull( list )) {
HXLINE(1009)			list = ::Array_obj< int >::__new(0);
            		}
HXLINE(1011)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE(1014)				int _g = 0;
HXDLIN(1014)				::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN(1014)				while((_g < _g1->length)){
HXLINE(1014)					 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN(1014)					_g = (_g + 1);
HXLINE(1016)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE(1017)						list->push(input->inputID);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(1019)				int id = device->_hx_getInt(0);
HXLINE(1020)				{
HXLINE(1020)					int _g = 0;
HXDLIN(1020)					::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN(1020)					while((_g < _g1->length)){
HXLINE(1020)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN(1020)						_g = (_g + 1);
HXLINE(1022)						if ((input->deviceID == id)) {
HXLINE(1023)							list->push(input->inputID);
            						}
            					}
            				}
            			}
            			break;
            		}
HXLINE(1026)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,getInputsFor,return )

void Controls_obj::removeDevice( ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_1031_removeDevice)
HXDLIN(1031)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE(1034)				this->setKeyboardScheme(::KeyboardScheme_obj::None_dyn(),null());
            			}
            			break;
            			case (int)1: {
HXLINE(1035)				int id = device->_hx_getInt(0);
HXLINE(1036)				this->removeGamepad(id);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeDevice,(void))

void Controls_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_588_init)
HXLINE( 589)		 ::flixel::input::actions::FlxActionManager actions =  ::flixel::input::actions::FlxActionManager_obj::__alloc( HX_CTX );
HXLINE( 590)		::flixel::FlxG_obj::inputs->add_flixel_input_actions_FlxActionManager(actions);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,init,(void))

void Controls_obj::addKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys,int state){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_752_addKeys)
HXDLIN( 752)		int _g = 0;
HXDLIN( 752)		while((_g < keys->length)){
HXDLIN( 752)			int key = keys->__get(_g);
HXDLIN( 752)			_g = (_g + 1);
HXLINE( 753)			if ((key != -1)) {
HXLINE( 754)				action->addKey(key,state);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,addKeys,(void))

void Controls_obj::removeKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_758_removeKeys)
HXLINE( 759)		int i = action->inputs->length;
HXLINE( 760)		while(true){
HXLINE( 760)			i = (i - 1);
HXDLIN( 760)			if (!(((i + 1) > 0))) {
HXLINE( 760)				goto _hx_goto_1261;
            			}
HXLINE( 762)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 763)			bool _hx_tmp;
HXDLIN( 763)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 763)				_hx_tmp = (keys->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE( 763)				_hx_tmp = false;
            			}
HXDLIN( 763)			if (_hx_tmp) {
HXLINE( 764)				action->remove(input,null());
            			}
            		}
            		_hx_goto_1261:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,removeKeys,(void))

void Controls_obj::addButtons( ::flixel::input::actions::FlxActionDigital action,::Array< int > buttons,int state,int id){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_991_addButtons)
HXDLIN( 991)		int _g = 0;
HXDLIN( 991)		while((_g < buttons->length)){
HXDLIN( 991)			int button = buttons->__get(_g);
HXDLIN( 991)			_g = (_g + 1);
HXLINE( 992)			action->addGamepad(button,state,id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,addButtons,(void))

void Controls_obj::removeButtons( ::flixel::input::actions::FlxActionDigital action,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_996_removeButtons)
HXLINE( 997)		int i = action->inputs->length;
HXLINE( 998)		while(true){
HXLINE( 998)			i = (i - 1);
HXDLIN( 998)			if (!(((i + 1) > 0))) {
HXLINE( 998)				goto _hx_goto_1265;
            			}
HXLINE(1000)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE(1001)			bool _hx_tmp;
HXDLIN(1001)			bool _hx_tmp1;
HXDLIN(1001)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE(1001)				if ((gamepadID != -1)) {
HXLINE(1001)					_hx_tmp1 = (input->deviceID == gamepadID);
            				}
            				else {
HXLINE(1001)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE(1001)				_hx_tmp1 = false;
            			}
HXDLIN(1001)			if (_hx_tmp1) {
HXLINE(1001)				_hx_tmp = (buttons->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE(1001)				_hx_tmp = false;
            			}
HXDLIN(1001)			if (_hx_tmp) {
HXLINE(1002)				action->remove(input,null());
            			}
            		}
            		_hx_goto_1265:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,removeButtons,(void))

bool Controls_obj::isDevice( ::flixel::input::actions::FlxActionInput input, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_1042_isDevice)
HXDLIN(1042)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE(1044)				return ::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() );
            			}
            			break;
            			case (int)1: {
HXLINE(1045)				int id = device->_hx_getInt(0);
HXDLIN(1045)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE(1045)					if ((id != -1)) {
HXLINE(1045)						return (input->deviceID == id);
            					}
            					else {
HXLINE(1045)						return true;
            					}
            				}
            				else {
HXLINE(1045)					return false;
            				}
            			}
            			break;
            		}
HXLINE(1042)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isDevice,return )

bool Controls_obj::isGamepad( ::flixel::input::actions::FlxActionInput input,int deviceID){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_1051_isGamepad)
HXDLIN(1051)		if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXDLIN(1051)			if ((deviceID != -1)) {
HXDLIN(1051)				return (input->deviceID == deviceID);
            			}
            			else {
HXDLIN(1051)				return true;
            			}
            		}
            		else {
HXDLIN(1051)			return false;
            		}
HXDLIN(1051)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isGamepad,return )


::hx::ObjectPtr< Controls_obj > Controls_obj::__new(::String name, ::KeyboardScheme __o_scheme) {
	::hx::ObjectPtr< Controls_obj > __this = new Controls_obj();
	__this->__construct(name,__o_scheme);
	return __this;
}

::hx::ObjectPtr< Controls_obj > Controls_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::KeyboardScheme __o_scheme) {
	Controls_obj *__this = (Controls_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Controls_obj), true, "Controls"));
	*(void **)__this = Controls_obj::_hx_vtable;
	__this->__construct(name,__o_scheme);
	return __this;
}

Controls_obj::Controls_obj()
{
}

void Controls_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controls);
	HX_MARK_MEMBER_NAME(_ui_up,"_ui_up");
	HX_MARK_MEMBER_NAME(_ui_left,"_ui_left");
	HX_MARK_MEMBER_NAME(_ui_right,"_ui_right");
	HX_MARK_MEMBER_NAME(_ui_down,"_ui_down");
	HX_MARK_MEMBER_NAME(_ui_upP,"_ui_upP");
	HX_MARK_MEMBER_NAME(_ui_leftP,"_ui_leftP");
	HX_MARK_MEMBER_NAME(_ui_rightP,"_ui_rightP");
	HX_MARK_MEMBER_NAME(_ui_downP,"_ui_downP");
	HX_MARK_MEMBER_NAME(_ui_upR,"_ui_upR");
	HX_MARK_MEMBER_NAME(_ui_leftR,"_ui_leftR");
	HX_MARK_MEMBER_NAME(_ui_rightR,"_ui_rightR");
	HX_MARK_MEMBER_NAME(_ui_downR,"_ui_downR");
	HX_MARK_MEMBER_NAME(_note_up,"_note_up");
	HX_MARK_MEMBER_NAME(_note_left,"_note_left");
	HX_MARK_MEMBER_NAME(_note_right,"_note_right");
	HX_MARK_MEMBER_NAME(_note_down,"_note_down");
	HX_MARK_MEMBER_NAME(_note_upP,"_note_upP");
	HX_MARK_MEMBER_NAME(_note_leftP,"_note_leftP");
	HX_MARK_MEMBER_NAME(_note_rightP,"_note_rightP");
	HX_MARK_MEMBER_NAME(_note_downP,"_note_downP");
	HX_MARK_MEMBER_NAME(_note_upR,"_note_upR");
	HX_MARK_MEMBER_NAME(_note_leftR,"_note_leftR");
	HX_MARK_MEMBER_NAME(_note_rightR,"_note_rightR");
	HX_MARK_MEMBER_NAME(_note_downR,"_note_downR");
	HX_MARK_MEMBER_NAME(_accept,"_accept");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_pause,"_pause");
	HX_MARK_MEMBER_NAME(_reset,"_reset");
	HX_MARK_MEMBER_NAME(byName,"byName");
	HX_MARK_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_MARK_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	HX_MARK_MEMBER_NAME(trackedinputsUI,"trackedinputsUI");
	HX_MARK_MEMBER_NAME(trackedinputsNOTES,"trackedinputsNOTES");
	 ::flixel::input::actions::FlxActionSet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Controls_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ui_up,"_ui_up");
	HX_VISIT_MEMBER_NAME(_ui_left,"_ui_left");
	HX_VISIT_MEMBER_NAME(_ui_right,"_ui_right");
	HX_VISIT_MEMBER_NAME(_ui_down,"_ui_down");
	HX_VISIT_MEMBER_NAME(_ui_upP,"_ui_upP");
	HX_VISIT_MEMBER_NAME(_ui_leftP,"_ui_leftP");
	HX_VISIT_MEMBER_NAME(_ui_rightP,"_ui_rightP");
	HX_VISIT_MEMBER_NAME(_ui_downP,"_ui_downP");
	HX_VISIT_MEMBER_NAME(_ui_upR,"_ui_upR");
	HX_VISIT_MEMBER_NAME(_ui_leftR,"_ui_leftR");
	HX_VISIT_MEMBER_NAME(_ui_rightR,"_ui_rightR");
	HX_VISIT_MEMBER_NAME(_ui_downR,"_ui_downR");
	HX_VISIT_MEMBER_NAME(_note_up,"_note_up");
	HX_VISIT_MEMBER_NAME(_note_left,"_note_left");
	HX_VISIT_MEMBER_NAME(_note_right,"_note_right");
	HX_VISIT_MEMBER_NAME(_note_down,"_note_down");
	HX_VISIT_MEMBER_NAME(_note_upP,"_note_upP");
	HX_VISIT_MEMBER_NAME(_note_leftP,"_note_leftP");
	HX_VISIT_MEMBER_NAME(_note_rightP,"_note_rightP");
	HX_VISIT_MEMBER_NAME(_note_downP,"_note_downP");
	HX_VISIT_MEMBER_NAME(_note_upR,"_note_upR");
	HX_VISIT_MEMBER_NAME(_note_leftR,"_note_leftR");
	HX_VISIT_MEMBER_NAME(_note_rightR,"_note_rightR");
	HX_VISIT_MEMBER_NAME(_note_downR,"_note_downR");
	HX_VISIT_MEMBER_NAME(_accept,"_accept");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_pause,"_pause");
	HX_VISIT_MEMBER_NAME(_reset,"_reset");
	HX_VISIT_MEMBER_NAME(byName,"byName");
	HX_VISIT_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_VISIT_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	HX_VISIT_MEMBER_NAME(trackedinputsUI,"trackedinputsUI");
	HX_VISIT_MEMBER_NAME(trackedinputsNOTES,"trackedinputsNOTES");
	 ::flixel::input::actions::FlxActionSet_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Controls_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_BACK() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { return ::hx::Val( _back ); }
		if (HX_FIELD_EQ(inName,"UI_UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_UP() ); }
		if (HX_FIELD_EQ(inName,"PAUSE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PAUSE() ); }
		if (HX_FIELD_EQ(inName,"RESET") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RESET() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ui_up") ) { return ::hx::Val( _ui_up ); }
		if (HX_FIELD_EQ(inName,"_pause") ) { return ::hx::Val( _pause ); }
		if (HX_FIELD_EQ(inName,"_reset") ) { return ::hx::Val( _reset ); }
		if (HX_FIELD_EQ(inName,"byName") ) { return ::hx::Val( byName ); }
		if (HX_FIELD_EQ(inName,"ACCEPT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ACCEPT() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_ui_upP") ) { return ::hx::Val( _ui_upP ); }
		if (HX_FIELD_EQ(inName,"_ui_upR") ) { return ::hx::Val( _ui_upR ); }
		if (HX_FIELD_EQ(inName,"_accept") ) { return ::hx::Val( _accept ); }
		if (HX_FIELD_EQ(inName,"UI_LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_LEFT() ); }
		if (HX_FIELD_EQ(inName,"UI_DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_DOWN() ); }
		if (HX_FIELD_EQ(inName,"UI_UP_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_UP_P() ); }
		if (HX_FIELD_EQ(inName,"UI_UP_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_UP_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_ui_left") ) { return ::hx::Val( _ui_left ); }
		if (HX_FIELD_EQ(inName,"_ui_down") ) { return ::hx::Val( _ui_down ); }
		if (HX_FIELD_EQ(inName,"_note_up") ) { return ::hx::Val( _note_up ); }
		if (HX_FIELD_EQ(inName,"UI_RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return ::hx::Val( get_BACK_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindKeys") ) { return ::hx::Val( bindKeys_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ui_right") ) { return ::hx::Val( _ui_right ); }
		if (HX_FIELD_EQ(inName,"_ui_leftP") ) { return ::hx::Val( _ui_leftP ); }
		if (HX_FIELD_EQ(inName,"_ui_downP") ) { return ::hx::Val( _ui_downP ); }
		if (HX_FIELD_EQ(inName,"_ui_leftR") ) { return ::hx::Val( _ui_leftR ); }
		if (HX_FIELD_EQ(inName,"_ui_downR") ) { return ::hx::Val( _ui_downR ); }
		if (HX_FIELD_EQ(inName,"_note_upP") ) { return ::hx::Val( _note_upP ); }
		if (HX_FIELD_EQ(inName,"_note_upR") ) { return ::hx::Val( _note_upR ); }
		if (HX_FIELD_EQ(inName,"get_UI_UP") ) { return ::hx::Val( get_UI_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"UI_LEFT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_LEFT_P() ); }
		if (HX_FIELD_EQ(inName,"UI_DOWN_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_DOWN_P() ); }
		if (HX_FIELD_EQ(inName,"UI_LEFT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_LEFT_R() ); }
		if (HX_FIELD_EQ(inName,"UI_DOWN_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_DOWN_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT() ); }
		if (HX_FIELD_EQ(inName,"NOTE_DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_UP_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_UP_R() ); }
		if (HX_FIELD_EQ(inName,"get_PAUSE") ) { return ::hx::Val( get_PAUSE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RESET") ) { return ::hx::Val( get_RESET_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ui_rightP") ) { return ::hx::Val( _ui_rightP ); }
		if (HX_FIELD_EQ(inName,"_ui_rightR") ) { return ::hx::Val( _ui_rightR ); }
		if (HX_FIELD_EQ(inName,"_note_left") ) { return ::hx::Val( _note_left ); }
		if (HX_FIELD_EQ(inName,"_note_down") ) { return ::hx::Val( _note_down ); }
		if (HX_FIELD_EQ(inName,"UI_RIGHT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_RIGHT_P() ); }
		if (HX_FIELD_EQ(inName,"UI_RIGHT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UI_RIGHT_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"get_ACCEPT") ) { return ::hx::Val( get_ACCEPT_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindKeys") ) { return ::hx::Val( unbindKeys_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepad") ) { return ::hx::Val( addGamepad_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_note_right") ) { return ::hx::Val( _note_right ); }
		if (HX_FIELD_EQ(inName,"_note_leftP") ) { return ::hx::Val( _note_leftP ); }
		if (HX_FIELD_EQ(inName,"_note_downP") ) { return ::hx::Val( _note_downP ); }
		if (HX_FIELD_EQ(inName,"_note_leftR") ) { return ::hx::Val( _note_leftR ); }
		if (HX_FIELD_EQ(inName,"_note_downR") ) { return ::hx::Val( _note_downR ); }
		if (HX_FIELD_EQ(inName,"get_UI_LEFT") ) { return ::hx::Val( get_UI_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_DOWN") ) { return ::hx::Val( get_UI_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_UP_P") ) { return ::hx::Val( get_UI_UP_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_UP_R") ) { return ::hx::Val( get_UI_UP_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP") ) { return ::hx::Val( get_NOTE_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_DOWN_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_LEFT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_LEFT_R() ); }
		if (HX_FIELD_EQ(inName,"NOTE_DOWN_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_DOWN_R() ); }
		if (HX_FIELD_EQ(inName,"setHitBoxUI") ) { return ::hx::Val( setHitBoxUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkByName") ) { return ::hx::Val( checkByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindButtons") ) { return ::hx::Val( bindButtons_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_note_rightP") ) { return ::hx::Val( _note_rightP ); }
		if (HX_FIELD_EQ(inName,"_note_rightR") ) { return ::hx::Val( _note_rightR ); }
		if (HX_FIELD_EQ(inName,"get_UI_RIGHT") ) { return ::hx::Val( get_UI_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT_P() ); }
		if (HX_FIELD_EQ(inName,"NOTE_RIGHT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NOTE_RIGHT_R() ); }
		if (HX_FIELD_EQ(inName,"addbuttonuUI") ) { return ::hx::Val( addbuttonuUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachBound") ) { return ::hx::Val( forEachBound_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInputsFor") ) { return ::hx::Val( getInputsFor_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeDevice") ) { return ::hx::Val( removeDevice_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { return ::hx::Val( gamepadsAdded ); }
		if (HX_FIELD_EQ(inName,"get_UI_LEFT_P") ) { return ::hx::Val( get_UI_LEFT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_DOWN_P") ) { return ::hx::Val( get_UI_DOWN_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_LEFT_R") ) { return ::hx::Val( get_UI_LEFT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_DOWN_R") ) { return ::hx::Val( get_UI_DOWN_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT") ) { return ::hx::Val( get_NOTE_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN") ) { return ::hx::Val( get_NOTE_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP_P") ) { return ::hx::Val( get_NOTE_UP_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_UP_R") ) { return ::hx::Val( get_NOTE_UP_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeGamepad") ) { return ::hx::Val( removeGamepad_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindButtons") ) { return ::hx::Val( unbindButtons_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { return ::hx::Val( keyboardScheme ); }
		if (HX_FIELD_EQ(inName,"get_UI_RIGHT_P") ) { return ::hx::Val( get_UI_RIGHT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UI_RIGHT_R") ) { return ::hx::Val( get_UI_RIGHT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT") ) { return ::hx::Val( get_NOTE_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"setHitBoxNOTES") ) { return ::hx::Val( setHitBoxNOTES_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeFlxInput") ) { return ::hx::Val( removeFlxInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceBinding") ) { return ::hx::Val( replaceBinding_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeKeyboard") ) { return ::hx::Val( removeKeyboard_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT_P") ) { return ::hx::Val( get_NOTE_LEFT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN_P") ) { return ::hx::Val( get_NOTE_DOWN_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_LEFT_R") ) { return ::hx::Val( get_NOTE_LEFT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_DOWN_R") ) { return ::hx::Val( get_NOTE_DOWN_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"trackedinputsUI") ) { return ::hx::Val( trackedinputsUI ); }
		if (HX_FIELD_EQ(inName,"addbuttonuNOTES") ) { return ::hx::Val( addbuttonuNOTES_dyn() ); }
		if (HX_FIELD_EQ(inName,"setVirtualPadUI") ) { return ::hx::Val( setVirtualPadUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDialogueName") ) { return ::hx::Val( getDialogueName_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT_P") ) { return ::hx::Val( get_NOTE_RIGHT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NOTE_RIGHT_R") ) { return ::hx::Val( get_NOTE_RIGHT_R_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setKeyboardScheme") ) { return ::hx::Val( setKeyboardScheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepadLiteral") ) { return ::hx::Val( addGamepadLiteral_dyn() ); }
		if (HX_FIELD_EQ(inName,"addDefaultGamepad") ) { return ::hx::Val( addDefaultGamepad_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"trackedinputsNOTES") ) { return ::hx::Val( trackedinputsNOTES ); }
		if (HX_FIELD_EQ(inName,"setVirtualPadNOTES") ) { return ::hx::Val( setVirtualPadNOTES_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeKeyboardScheme") ) { return ::hx::Val( mergeKeyboardScheme_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getActionFromControl") ) { return ::hx::Val( getActionFromControl_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDialogueNameFromToken") ) { return ::hx::Val( getDialogueNameFromToken_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Controls_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addKeys") ) { outValue = addKeys_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDevice") ) { outValue = isDevice_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isGamepad") ) { outValue = isGamepad_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeKeys") ) { outValue = removeKeys_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addButtons") ) { outValue = addButtons_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeButtons") ) { outValue = removeButtons_dyn(); return true; }
	}
	return false;
}

::hx::Val Controls_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ui_up") ) { _ui_up=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pause") ) { _pause=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reset") ) { _reset=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byName") ) { byName=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_ui_upP") ) { _ui_upP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_upR") ) { _ui_upR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_accept") ) { _accept=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_ui_left") ) { _ui_left=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_down") ) { _ui_down=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_up") ) { _note_up=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ui_right") ) { _ui_right=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_leftP") ) { _ui_leftP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_downP") ) { _ui_downP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_leftR") ) { _ui_leftR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_downR") ) { _ui_downR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_upP") ) { _note_upP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_upR") ) { _note_upR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ui_rightP") ) { _ui_rightP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_rightR") ) { _ui_rightR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_left") ) { _note_left=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_down") ) { _note_down=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_note_right") ) { _note_right=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_leftP") ) { _note_leftP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_downP") ) { _note_downP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_leftR") ) { _note_leftR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_downR") ) { _note_downR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_note_rightP") ) { _note_rightP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_note_rightR") ) { _note_rightR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { gamepadsAdded=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { keyboardScheme=inValue.Cast<  ::KeyboardScheme >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trackedinputsUI") ) { trackedinputsUI=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"trackedinputsNOTES") ) { trackedinputsNOTES=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controls_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ui_up",e7,09,79,9f));
	outFields->push(HX_("_ui_left",93,a6,41,31));
	outFields->push(HX_("_ui_right",d0,27,3d,5f));
	outFields->push(HX_("_ui_down",ee,96,ff,2b));
	outFields->push(HX_("_ui_upP",89,a0,6f,ea));
	outFields->push(HX_("_ui_leftP",5d,1a,30,e8));
	outFields->push(HX_("_ui_rightP",80,ae,45,f6));
	outFields->push(HX_("_ui_downP",a2,79,a4,53));
	outFields->push(HX_("_ui_upR",8b,a0,6f,ea));
	outFields->push(HX_("_ui_leftR",5f,1a,30,e8));
	outFields->push(HX_("_ui_rightR",82,ae,45,f6));
	outFields->push(HX_("_ui_downR",a4,79,a4,53));
	outFields->push(HX_("_note_up",49,c1,14,87));
	outFields->push(HX_("_note_left",75,7a,c3,00));
	outFields->push(HX_("_note_right",ae,b9,54,21));
	outFields->push(HX_("_note_down",d0,6a,81,fb));
	outFields->push(HX_("_note_upP",e7,5e,14,ab));
	outFields->push(HX_("_note_leftP",3b,ac,47,aa));
	outFields->push(HX_("_note_rightP",e2,be,cd,08));
	outFields->push(HX_("_note_downP",80,0b,bc,15));
	outFields->push(HX_("_note_upR",e9,5e,14,ab));
	outFields->push(HX_("_note_leftR",3d,ac,47,aa));
	outFields->push(HX_("_note_rightR",e4,be,cd,08));
	outFields->push(HX_("_note_downR",82,0b,bc,15));
	outFields->push(HX_("_accept",a7,a4,7d,79));
	outFields->push(HX_("_back",06,f6,21,f4));
	outFields->push(HX_("_pause",37,1e,3f,b9));
	outFields->push(HX_("_reset",10,91,af,e2));
	outFields->push(HX_("byName",c2,2b,4e,0e));
	outFields->push(HX_("gamepadsAdded",ae,52,a9,94));
	outFields->push(HX_("keyboardScheme",2c,c8,f4,c5));
	outFields->push(HX_("UI_UP",a6,42,98,21));
	outFields->push(HX_("UI_LEFT",12,b1,2f,e4));
	outFields->push(HX_("UI_RIGHT",51,4c,98,3c));
	outFields->push(HX_("UI_DOWN",6d,a1,ed,de));
	outFields->push(HX_("UI_UP_P",37,0b,2b,ea));
	outFields->push(HX_("UI_LEFT_P",a3,ec,4b,14));
	outFields->push(HX_("UI_RIGHT_P",a2,15,81,cc));
	outFields->push(HX_("UI_DOWN_P",be,e9,aa,ae));
	outFields->push(HX_("UI_UP_R",39,0b,2b,ea));
	outFields->push(HX_("UI_LEFT_R",a5,ec,4b,14));
	outFields->push(HX_("UI_RIGHT_R",a4,15,81,cc));
	outFields->push(HX_("UI_DOWN_R",c0,e9,aa,ae));
	outFields->push(HX_("NOTE_UP",c8,83,48,cd));
	outFields->push(HX_("NOTE_LEFT",b4,fe,4b,0d));
	outFields->push(HX_("NOTE_RIGHT",6f,ec,3f,0c));
	outFields->push(HX_("NOTE_DOWN",0f,ef,09,08));
	outFields->push(HX_("NOTE_UP_P",d9,58,47,13));
	outFields->push(HX_("NOTE_LEFT_P",c5,66,50,f7));
	outFields->push(HX_("NOTE_RIGHT_P",40,79,67,8d));
	outFields->push(HX_("NOTE_DOWN_P",e0,63,af,91));
	outFields->push(HX_("NOTE_UP_R",db,58,47,13));
	outFields->push(HX_("NOTE_LEFT_R",c7,66,50,f7));
	outFields->push(HX_("NOTE_RIGHT_R",42,79,67,8d));
	outFields->push(HX_("NOTE_DOWN_R",e2,63,af,91));
	outFields->push(HX_("ACCEPT",08,3f,89,bd));
	outFields->push(HX_("BACK",27,a2,d1,2b));
	outFields->push(HX_("PAUSE",d6,0e,46,3b));
	outFields->push(HX_("RESET",af,81,b6,64));
	outFields->push(HX_("trackedinputsUI",67,05,98,f5));
	outFields->push(HX_("trackedinputsNOTES",ee,46,f7,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Controls_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_up),HX_("_ui_up",e7,09,79,9f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_left),HX_("_ui_left",93,a6,41,31)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_right),HX_("_ui_right",d0,27,3d,5f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_down),HX_("_ui_down",ee,96,ff,2b)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_upP),HX_("_ui_upP",89,a0,6f,ea)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_leftP),HX_("_ui_leftP",5d,1a,30,e8)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_rightP),HX_("_ui_rightP",80,ae,45,f6)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_downP),HX_("_ui_downP",a2,79,a4,53)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_upR),HX_("_ui_upR",8b,a0,6f,ea)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_leftR),HX_("_ui_leftR",5f,1a,30,e8)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_rightR),HX_("_ui_rightR",82,ae,45,f6)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_ui_downR),HX_("_ui_downR",a4,79,a4,53)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_up),HX_("_note_up",49,c1,14,87)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_left),HX_("_note_left",75,7a,c3,00)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_right),HX_("_note_right",ae,b9,54,21)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_down),HX_("_note_down",d0,6a,81,fb)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_upP),HX_("_note_upP",e7,5e,14,ab)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_leftP),HX_("_note_leftP",3b,ac,47,aa)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_rightP),HX_("_note_rightP",e2,be,cd,08)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_downP),HX_("_note_downP",80,0b,bc,15)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_upR),HX_("_note_upR",e9,5e,14,ab)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_leftR),HX_("_note_leftR",3d,ac,47,aa)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_rightR),HX_("_note_rightR",e4,be,cd,08)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_note_downR),HX_("_note_downR",82,0b,bc,15)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_accept),HX_("_accept",a7,a4,7d,79)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_back),HX_("_back",06,f6,21,f4)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_pause),HX_("_pause",37,1e,3f,b9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_reset),HX_("_reset",10,91,af,e2)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Controls_obj,byName),HX_("byName",c2,2b,4e,0e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Controls_obj,gamepadsAdded),HX_("gamepadsAdded",ae,52,a9,94)},
	{::hx::fsObject /*  ::KeyboardScheme */ ,(int)offsetof(Controls_obj,keyboardScheme),HX_("keyboardScheme",2c,c8,f4,c5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Controls_obj,trackedinputsUI),HX_("trackedinputsUI",67,05,98,f5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Controls_obj,trackedinputsNOTES),HX_("trackedinputsNOTES",ee,46,f7,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Controls_obj_sStaticStorageInfo = 0;
#endif

static ::String Controls_obj_sMemberFields[] = {
	HX_("_ui_up",e7,09,79,9f),
	HX_("_ui_left",93,a6,41,31),
	HX_("_ui_right",d0,27,3d,5f),
	HX_("_ui_down",ee,96,ff,2b),
	HX_("_ui_upP",89,a0,6f,ea),
	HX_("_ui_leftP",5d,1a,30,e8),
	HX_("_ui_rightP",80,ae,45,f6),
	HX_("_ui_downP",a2,79,a4,53),
	HX_("_ui_upR",8b,a0,6f,ea),
	HX_("_ui_leftR",5f,1a,30,e8),
	HX_("_ui_rightR",82,ae,45,f6),
	HX_("_ui_downR",a4,79,a4,53),
	HX_("_note_up",49,c1,14,87),
	HX_("_note_left",75,7a,c3,00),
	HX_("_note_right",ae,b9,54,21),
	HX_("_note_down",d0,6a,81,fb),
	HX_("_note_upP",e7,5e,14,ab),
	HX_("_note_leftP",3b,ac,47,aa),
	HX_("_note_rightP",e2,be,cd,08),
	HX_("_note_downP",80,0b,bc,15),
	HX_("_note_upR",e9,5e,14,ab),
	HX_("_note_leftR",3d,ac,47,aa),
	HX_("_note_rightR",e4,be,cd,08),
	HX_("_note_downR",82,0b,bc,15),
	HX_("_accept",a7,a4,7d,79),
	HX_("_back",06,f6,21,f4),
	HX_("_pause",37,1e,3f,b9),
	HX_("_reset",10,91,af,e2),
	HX_("byName",c2,2b,4e,0e),
	HX_("gamepadsAdded",ae,52,a9,94),
	HX_("keyboardScheme",2c,c8,f4,c5),
	HX_("get_UI_UP",fd,9e,41,65),
	HX_("get_UI_LEFT",29,11,2a,6a),
	HX_("get_UI_RIGHT",5a,00,b2,f1),
	HX_("get_UI_DOWN",84,01,e8,64),
	HX_("get_UI_UP_P",4e,6b,25,70),
	HX_("get_UI_LEFT_P",7a,c0,af,d5),
	HX_("get_UI_RIGHT_P",eb,9d,76,42),
	HX_("get_UI_DOWN_P",95,bd,0e,70),
	HX_("get_UI_UP_R",50,6b,25,70),
	HX_("get_UI_LEFT_R",7c,c0,af,d5),
	HX_("get_UI_RIGHT_R",ed,9d,76,42),
	HX_("get_UI_DOWN_R",97,bd,0e,70),
	HX_("get_NOTE_UP",df,e3,42,53),
	HX_("get_NOTE_LEFT",8b,d2,af,ce),
	HX_("get_NOTE_RIGHT",b8,74,35,82),
	HX_("get_NOTE_DOWN",e6,c2,6d,c9),
	HX_("get_NOTE_UP_P",b0,2c,ab,d4),
	HX_("get_NOTE_LEFT_P",5c,1e,32,b8),
	HX_("get_NOTE_RIGHT_P",c9,65,06,92),
	HX_("get_NOTE_DOWN_P",77,1b,91,52),
	HX_("get_NOTE_UP_R",b2,2c,ab,d4),
	HX_("get_NOTE_LEFT_R",5e,1e,32,b8),
	HX_("get_NOTE_RIGHT_R",cb,65,06,92),
	HX_("get_NOTE_DOWN_R",79,1b,91,52),
	HX_("get_ACCEPT",d1,ae,10,ae),
	HX_("get_BACK",b0,5d,8c,ab),
	HX_("get_PAUSE",2d,6b,ef,7e),
	HX_("get_RESET",06,de,5f,a8),
	HX_("trackedinputsUI",67,05,98,f5),
	HX_("trackedinputsNOTES",ee,46,f7,27),
	HX_("addbuttonuNOTES",9f,ce,e0,16),
	HX_("setHitBoxNOTES",27,d7,64,55),
	HX_("setVirtualPadNOTES",97,c5,82,69),
	HX_("addbuttonuUI",16,35,a2,ad),
	HX_("setHitBoxUI",8e,07,bf,26),
	HX_("setVirtualPadUI",1e,b3,6c,e3),
	HX_("removeFlxInput",9c,4e,9c,6b),
	HX_("update",09,86,05,87),
	HX_("checkByName",aa,fe,5f,f0),
	HX_("getDialogueName",39,8d,0f,32),
	HX_("getDialogueNameFromToken",b6,d0,32,d3),
	HX_("getActionFromControl",87,31,3f,3d),
	HX_("forEachBound",34,ae,22,2f),
	HX_("replaceBinding",71,99,ae,a4),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyTo",90,1c,33,c9),
	HX_("mergeKeyboardScheme",04,51,83,14),
	HX_("bindKeys",51,26,d1,b4),
	HX_("unbindKeys",aa,0d,95,3a),
	HX_("setKeyboardScheme",6e,4f,d6,5b),
	HX_("removeKeyboard",0b,f9,7f,32),
	HX_("addGamepad",80,0c,10,f1),
	HX_("addGamepadLiteral",cf,54,ef,a8),
	HX_("removeGamepad",bd,3c,40,62),
	HX_("addDefaultGamepad",e1,d7,98,02),
	HX_("bindButtons",04,66,e6,c6),
	HX_("unbindButtons",4b,dc,20,e8),
	HX_("getInputsFor",ea,35,e1,37),
	HX_("removeDevice",fa,77,a5,e0),
	::String(null()) };

::hx::Class Controls_obj::__mClass;

static ::String Controls_obj_sStaticFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("addKeys",b5,24,44,83),
	HX_("removeKeys",58,1c,26,c4),
	HX_("addButtons",20,7e,ff,31),
	HX_("removeButtons",5d,ae,2f,a3),
	HX_("isDevice",20,78,e1,c9),
	HX_("isGamepad",d7,5d,84,8d),
	::String(null())
};

void Controls_obj::__register()
{
	Controls_obj _hx_dummy;
	Controls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Controls",96,42,6e,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Controls_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Controls_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Controls_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Controls_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Controls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Controls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

