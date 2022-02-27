#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MemoryCounter
#include <MemoryCounter.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_12_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",12,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_50_init,"Main","init",0xea732345,"Main.init","Main.hx",50,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_77_setupGame,"Main","setupGame",0x7f7688ba,"Main.setupGame","Main.hx",77,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_32_main,"Main","main",0xed0e206e,"Main.main","Main.hx",32,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_60_dumpCache,"Main","dumpCache",0xbbc26819,"Main.dumpCache","Main.hx",60,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_25_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",25,0x087e5c05)

void Main_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_12_new)
HXLINE(  20)		this->startFullscreen = false;
HXLINE(  19)		this->skipSplash = false;
HXLINE(  18)		this->framerate = 60;
HXLINE(  17)		this->zoom = ((Float)-1);
HXLINE(  16)		this->initialState = ::hx::ClassOf< ::TitleState >();
HXLINE(  15)		this->gameHeight = 720;
HXLINE(  14)		this->gameWidth = 1280;
HXLINE(  37)		super::__construct();
HXLINE(  39)		if (::hx::IsNotNull( this->stage )) {
HXLINE(  41)			this->init(null());
            		}
            		else {
HXLINE(  45)			this->addEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null(),null(),null());
            		}
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::init( ::openfl::events::Event E){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_50_init)
HXLINE(  51)		if (this->hasEventListener(HX_("addedToStage",63,22,55,0c))) {
HXLINE(  53)			this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null());
            		}
HXLINE(  56)		this->setupGame();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

void Main_obj::setupGame(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_77_setupGame)
HXLINE(  78)		int stageWidth = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXLINE(  79)		int stageHeight = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXLINE(  81)		if ((this->zoom == -1)) {
HXLINE(  83)			Float ratioX = (( (Float)(stageWidth) ) / ( (Float)(this->gameWidth) ));
HXLINE(  84)			Float ratioY = (( (Float)(stageHeight) ) / ( (Float)(this->gameHeight) ));
HXLINE(  85)			this->zoom = ::Math_obj::min(ratioX,ratioY);
HXLINE(  86)			this->gameWidth = ::Math_obj::ceil((( (Float)(stageWidth) ) / this->zoom));
HXLINE(  87)			this->gameHeight = ::Math_obj::ceil((( (Float)(stageHeight) ) / this->zoom));
            		}
HXLINE(  94)		::ClientPrefs_obj::startControls();
HXLINE(  95)		this->addChild( ::flixel::FlxGame_obj::__alloc( HX_CTX ,this->gameWidth,this->gameHeight,this->initialState,this->zoom,this->framerate,this->framerate,this->skipSplash,this->startFullscreen));
HXLINE(  97)		::Main_obj::fpsVar =  ::openfl::display::FPS_obj::__alloc( HX_CTX ,10,3,16777215);
HXLINE(  98)		this->addChild(::Main_obj::fpsVar);
HXLINE(  99)		if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE( 100)			::Main_obj::fpsVar->set_visible(::ClientPrefs_obj::showFPS);
            		}
HXLINE( 104)		::Main_obj::memoryCounter =  ::MemoryCounter_obj::__alloc( HX_CTX ,10,3,16777215);
HXLINE( 105)		this->addChild(::Main_obj::memoryCounter);
HXLINE( 106)		if (::hx::IsNotNull( ::Main_obj::memoryCounter )) {
HXLINE( 107)			::Main_obj::memoryCounter->set_visible(::ClientPrefs_obj::showFPS);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setupGame,(void))

 ::openfl::display::FPS Main_obj::fpsVar;

 ::MemoryCounter Main_obj::memoryCounter;

::String Main_obj::path;

void Main_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_32_main)
HXDLIN(  32)		 ::openfl::display::MovieClip _hx_tmp = ::openfl::Lib_obj::get_current();
HXDLIN(  32)		_hx_tmp->addChild( ::Main_obj::__alloc( HX_CTX ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))

void Main_obj::dumpCache(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_60_dumpCache)
HXLINE(  62)		{
HXLINE(  62)			 ::Dynamic key = ::flixel::FlxG_obj::bitmap->_cache->keys();
HXDLIN(  62)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  62)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  64)				 ::flixel::graphics::FlxGraphic obj = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key1)) );
HXLINE(  65)				if (::hx::IsNotNull( obj )) {
HXLINE(  67)					::openfl::utils::IAssetCache_obj::removeBitmapData(::openfl::utils::Assets_obj::cache,key1);
HXLINE(  68)					::flixel::FlxG_obj::bitmap->_cache->remove(key1);
HXLINE(  69)					obj->destroy();
            				}
            			}
            		}
HXLINE(  72)		::openfl::utils::IAssetCache_obj::clear(::openfl::utils::Assets_obj::cache,HX_("songs",fe,36,c7,80));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,dumpCache,(void))


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(gameWidth,"gameWidth");
	HX_MARK_MEMBER_NAME(gameHeight,"gameHeight");
	HX_MARK_MEMBER_NAME(initialState,"initialState");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(framerate,"framerate");
	HX_MARK_MEMBER_NAME(skipSplash,"skipSplash");
	HX_MARK_MEMBER_NAME(startFullscreen,"startFullscreen");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameWidth,"gameWidth");
	HX_VISIT_MEMBER_NAME(gameHeight,"gameHeight");
	HX_VISIT_MEMBER_NAME(initialState,"initialState");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(framerate,"framerate");
	HX_VISIT_MEMBER_NAME(skipSplash,"skipSplash");
	HX_VISIT_MEMBER_NAME(startFullscreen,"startFullscreen");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return ::hx::Val( zoom ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { return ::hx::Val( gameWidth ); }
		if (HX_FIELD_EQ(inName,"framerate") ) { return ::hx::Val( framerate ); }
		if (HX_FIELD_EQ(inName,"setupGame") ) { return ::hx::Val( setupGame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { return ::hx::Val( gameHeight ); }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { return ::hx::Val( skipSplash ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { return ::hx::Val( initialState ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { return ::hx::Val( startFullscreen ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { outValue = ( path ); return true; }
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fpsVar") ) { outValue = ( fpsVar ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dumpCache") ) { outValue = dumpCache_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"memoryCounter") ) { outValue = ( memoryCounter ); return true; }
	}
	return false;
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { gameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framerate") ) { framerate=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { gameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { initialState=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { startFullscreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fpsVar") ) { fpsVar=ioValue.Cast<  ::openfl::display::FPS >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"memoryCounter") ) { memoryCounter=ioValue.Cast<  ::MemoryCounter >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gameWidth",b4,a4,7d,ff));
	outFields->push(HX_("gameHeight",79,f1,c1,44));
	outFields->push(HX_("initialState",ed,76,1b,48));
	outFields->push(HX_("zoom",13,a3,f8,50));
	outFields->push(HX_("framerate",8d,e5,4b,4e));
	outFields->push(HX_("skipSplash",46,75,9c,27));
	outFields->push(HX_("startFullscreen",3d,c1,ee,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Main_obj,gameWidth),HX_("gameWidth",b4,a4,7d,ff)},
	{::hx::fsInt,(int)offsetof(Main_obj,gameHeight),HX_("gameHeight",79,f1,c1,44)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Main_obj,initialState),HX_("initialState",ed,76,1b,48)},
	{::hx::fsFloat,(int)offsetof(Main_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{::hx::fsInt,(int)offsetof(Main_obj,framerate),HX_("framerate",8d,e5,4b,4e)},
	{::hx::fsBool,(int)offsetof(Main_obj,skipSplash),HX_("skipSplash",46,75,9c,27)},
	{::hx::fsBool,(int)offsetof(Main_obj,startFullscreen),HX_("startFullscreen",3d,c1,ee,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::FPS */ ,(void *) &Main_obj::fpsVar,HX_("fpsVar",7e,e6,8c,91)},
	{::hx::fsObject /*  ::MemoryCounter */ ,(void *) &Main_obj::memoryCounter,HX_("memoryCounter",fb,dd,7c,c5)},
	{::hx::fsString,(void *) &Main_obj::path,HX_("path",a5,e5,51,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("gameWidth",b4,a4,7d,ff),
	HX_("gameHeight",79,f1,c1,44),
	HX_("initialState",ed,76,1b,48),
	HX_("zoom",13,a3,f8,50),
	HX_("framerate",8d,e5,4b,4e),
	HX_("skipSplash",46,75,9c,27),
	HX_("startFullscreen",3d,c1,ee,2d),
	HX_("init",10,3b,bb,45),
	HX_("setupGame",0f,51,ed,9e),
	::String(null()) };

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::fpsVar,"fpsVar");
	HX_MARK_MEMBER_NAME(Main_obj::memoryCounter,"memoryCounter");
	HX_MARK_MEMBER_NAME(Main_obj::path,"path");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::fpsVar,"fpsVar");
	HX_VISIT_MEMBER_NAME(Main_obj::memoryCounter,"memoryCounter");
	HX_VISIT_MEMBER_NAME(Main_obj::path,"path");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("fpsVar",7e,e6,8c,91),
	HX_("memoryCounter",fb,dd,7c,c5),
	HX_("path",a5,e5,51,4a),
	HX_("main",39,38,56,48),
	HX_("dumpCache",6e,30,39,db),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_25_boot)
HXDLIN(  25)		path = ::lime::_hx_system::System_obj::get_applicationStorageDirectory();
            	}
}

