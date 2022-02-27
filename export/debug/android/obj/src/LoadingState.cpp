#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MultiCallback
#include <MultiCallback.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_StageData
#include <StageData.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b9d652bf7289928_19_new,"LoadingState","new",0x2bad3187,"LoadingState.new","LoadingState.hx",19,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_89_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",89,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_74_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",74,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_50_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",50,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_96_checkLoadSong,"LoadingState","checkLoadSong",0xc27149ea,"LoadingState.checkLoadSong","LoadingState.hx",96,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_105_checkLoadSong,"LoadingState","checkLoadSong",0xc27149ea,"LoadingState.checkLoadSong","LoadingState.hx",105,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_109_checkLibrary,"LoadingState","checkLibrary",0xd141a10c,"LoadingState.checkLibrary","LoadingState.hx",109,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_118_checkLibrary,"LoadingState","checkLibrary",0xd141a10c,"LoadingState.checkLibrary","LoadingState.hx",118,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_123_update,"LoadingState","update",0x70c61742,"LoadingState.update","LoadingState.hx",123,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_133_onLoad,"LoadingState","onLoad",0xd402341e,"LoadingState.onLoad","LoadingState.hx",133,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_191_destroy,"LoadingState","destroy",0xc344ada1,"LoadingState.destroy","LoadingState.hx",191,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_142_getSongPath,"LoadingState","getSongPath",0xa60766f7,"LoadingState.getSongPath","LoadingState.hx",142,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_147_getVocalPath,"LoadingState","getVocalPath",0xfda3e53d,"LoadingState.getVocalPath","LoadingState.hx",147,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_152_loadAndSwitchState,"LoadingState","loadAndSwitchState",0xbf595d65,"LoadingState.loadAndSwitchState","LoadingState.hx",152,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_156_getNextState,"LoadingState","getNextState",0xdef1eea1,"LoadingState.getNextState","LoadingState.hx",156,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_182_isSoundLoaded,"LoadingState","isSoundLoaded",0x31df9651,"LoadingState.isSoundLoaded","LoadingState.hx",182,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_187_isLibraryLoaded,"LoadingState","isLibraryLoaded",0xa95b1abd,"LoadingState.isLibraryLoaded","LoadingState.hx",187,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_235_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",235,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_257_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",257,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_198_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",198,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_21_boot,"LoadingState","boot",0x03f7252b,"LoadingState.boot","LoadingState.hx",21,0x53ff9bc9)

void LoadingState_obj::__construct( ::flixel::FlxState target,bool stopMusic,::String directory){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_19_new)
HXLINE(  33)		this->targetShit = ((Float)0);
HXLINE(  30)		this->stopMusic = false;
HXLINE(  37)		super::__construct(null(),null());
HXLINE(  38)		this->target = target;
HXLINE(  39)		this->stopMusic = stopMusic;
HXLINE(  40)		this->directory = directory;
            	}

Dynamic LoadingState_obj::__CreateEmpty() { return new LoadingState_obj; }

void *LoadingState_obj::_hx_vtable = 0;

Dynamic LoadingState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadingState_obj > _hx_result = new LoadingState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool LoadingState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2a8fb4d5) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2a8fb4d5;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void LoadingState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::LoadingState,_gthis) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetLibrary lib){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,introComplete) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer _){
            				HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_89_create)
HXLINE(  89)				introComplete();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_74_create)
HXLINE(  75)			_gthis->callbacks =  ::MultiCallback_obj::__alloc( HX_CTX ,_gthis->onLoad_dyn(),null());
HXLINE(  76)			 ::Dynamic introComplete = _gthis->callbacks->add(HX_("introComplete",45,d3,4c,b2));
HXLINE(  77)			if (::hx::IsNotNull( ::PlayState_obj::SONG )) {
HXLINE(  78)				 ::LoadingState _gthis1 = _gthis;
HXDLIN(  78)				_gthis1->checkLoadSong(( (::String)(::LoadingState_obj::getSongPath()) ));
HXLINE(  79)				if (( (bool)(::PlayState_obj::SONG->__Field(HX_("needsVoices",be,05,e9,0d),::hx::paccDynamic)) )) {
HXLINE(  80)					 ::LoadingState _gthis1 = _gthis;
HXDLIN(  80)					_gthis1->checkLoadSong(( (::String)(::LoadingState_obj::getVocalPath()) ));
            				}
            			}
HXLINE(  82)			_gthis->checkLibrary(HX_("shared",a5,5e,2b,1d));
HXLINE(  83)			bool _hx_tmp;
HXDLIN(  83)			bool _hx_tmp1;
HXDLIN(  83)			if (::hx::IsNotNull( _gthis->directory )) {
HXLINE(  83)				_hx_tmp1 = (_gthis->directory.length > 0);
            			}
            			else {
HXLINE(  83)				_hx_tmp1 = false;
            			}
HXDLIN(  83)			if (_hx_tmp1) {
HXLINE(  83)				_hx_tmp = (_gthis->directory != HX_("shared",a5,5e,2b,1d));
            			}
            			else {
HXLINE(  83)				_hx_tmp = false;
            			}
HXDLIN(  83)			if (_hx_tmp) {
HXLINE(  84)				_gthis->checkLibrary(_gthis->directory);
            			}
HXLINE(  87)			Float fadeTime = ((Float)0.5);
HXLINE(  88)			::flixel::FlxG_obj::camera->fade(::flixel::FlxG_obj::camera->bgColor,fadeTime,true,null(),null());
HXLINE(  89)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start((fadeTime + ((Float)1.0)), ::Dynamic(new _hx_Closure_0(introComplete)),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_50_create)
HXDLIN(  50)		 ::LoadingState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  51)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  51)		::String library = null();
HXDLIN(  51)		this->funkay = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleBG",5d,e5,5d,e5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  52)		 ::flixel::FlxSprite _hx_tmp1 = this->funkay;
HXDLIN(  52)		_hx_tmp1->setGraphicSize(::Std_obj::_hx_int((this->funkay->get_width() * ((Float)0.8))),null());
HXLINE(  53)		this->funkay->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  54)		this->funkay->screenCenter(::flixel::util::FlxAxes_obj::XY_dyn());
HXLINE(  55)		this->add(this->funkay);
HXLINE(  57)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,-150,null());
HXLINE(  58)		 ::flixel::FlxSprite _hx_tmp2 = this->logoBl;
HXDLIN(  58)		::String library1 = null();
HXDLIN(  58)		 ::Dynamic _hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN(  58)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE(  59)		this->logoBl->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  60)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,null(),null(),null());
HXLINE(  61)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE(  62)		this->logoBl->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  63)		this->logoBl->updateHitbox();
HXLINE(  64)		this->add(this->logoBl);
HXLINE(  66)		this->loadBar =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 20),null())->makeGraphic(::flixel::FlxG_obj::width,10,-230653,null(),null());
HXLINE(  67)		this->loadBar->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  68)		this->loadBar->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  69)		this->add(this->loadBar);
HXLINE(  71)		::LoadingState_obj::initSongsManifest()->onComplete( ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


void LoadingState_obj::checkLoadSong(::String path){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_96_checkLoadSong)
HXDLIN(  96)		if (!(::openfl::utils::IAssetCache_obj::hasSound(::openfl::utils::Assets_obj::cache,path))) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::openfl::media::Sound _){
            				HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_105_checkLoadSong)
HXLINE( 105)				callback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  98)			 ::lime::utils::AssetLibrary library = ::openfl::utils::Assets_obj::getLibrary(HX_("songs",fe,36,c7,80));
HXLINE(  99)			::String symbolPath = ( (::String)(path.split(HX_(":",3a,00,00,00))->pop()) );
HXLINE( 104)			 ::Dynamic callback = this->callbacks->add((HX_("song:",c5,36,c7,80) + path));
HXLINE( 105)			::openfl::utils::Assets_obj::loadSound(path,null())->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,checkLoadSong,(void))

void LoadingState_obj::checkLibrary(::String library){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_109_checkLibrary)
HXLINE( 110)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 110)		bool _hx_tmp1 = ::openfl::utils::Assets_obj::hasLibrary(library);
HXDLIN( 110)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/LoadingState.hx",55,7f,fd,f0),110,HX_("LoadingState",15,62,ae,41),HX_("checkLibrary",13,df,f6,2c)));
HXLINE( 111)		if (::hx::IsNull( ::openfl::utils::Assets_obj::getLibrary(library) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::openfl::utils::AssetLibrary _){
            				HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_118_checkLibrary)
HXLINE( 118)				callback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 114)			if (!(::lime::utils::Assets_obj::libraryPaths->exists(library))) {
HXLINE( 115)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Missing library: ",07,45,01,4f) + library)));
            			}
HXLINE( 117)			 ::Dynamic callback = this->callbacks->add((HX_("library:",df,f4,b1,42) + library));
HXLINE( 118)			::openfl::utils::Assets_obj::loadLibrary(library)->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,checkLibrary,(void))

void LoadingState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_123_update)
HXLINE( 124)		this->super::update(elapsed);
HXLINE( 126)		if (::hx::IsNotNull( this->callbacks )) {
HXLINE( 127)			this->targetShit = ::flixel::math::FlxMath_obj::remapToRange((( (Float)(this->callbacks->numRemaining) ) / ( (Float)(this->callbacks->length) )),( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),( (Float)(1) ));
HXLINE( 128)			 ::flixel::math::FlxPoint fh = this->loadBar->scale;
HXDLIN( 128)			fh->set_x((fh->x + (((Float)0.5) * (this->targetShit - this->loadBar->scale->x))));
            		}
            	}


void LoadingState_obj::onLoad(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_133_onLoad)
HXLINE( 134)		bool _hx_tmp;
HXDLIN( 134)		if (this->stopMusic) {
HXLINE( 134)			_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 134)			_hx_tmp = false;
            		}
HXDLIN( 134)		if (_hx_tmp) {
HXLINE( 135)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 135)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 137)		::MusicBeatState_obj::switchState(this->target);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,onLoad,(void))

void LoadingState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_191_destroy)
HXLINE( 192)		this->super::destroy();
HXLINE( 194)		this->callbacks = null();
            	}


Float LoadingState_obj::MIN_TIME;

 ::Dynamic LoadingState_obj::getSongPath(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_142_getSongPath)
HXDLIN( 142)		return (((HX_("songs:assets/songs/",c1,ed,e6,7e) + ::StringTools_obj::replace(( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00))) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getSongPath,return )

 ::Dynamic LoadingState_obj::getVocalPath(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_147_getVocalPath)
HXDLIN( 147)		return (((HX_("songs:assets/songs/",c1,ed,e6,7e) + ::StringTools_obj::replace(( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00))) + HX_("/Voices.",1e,f6,e5,90)) + HX_("ogg",4f,94,54,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getVocalPath,return )

void LoadingState_obj::loadAndSwitchState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_152_loadAndSwitchState)
HXDLIN( 152)		::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(target,stopMusic));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,loadAndSwitchState,(void))

 ::flixel::FlxState LoadingState_obj::getNextState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_156_getNextState)
HXLINE( 157)		::String directory = HX_("shared",a5,5e,2b,1d);
HXLINE( 158)		::String weekDir = ::StageData_obj::forceNextDirectory;
HXLINE( 159)		::StageData_obj::forceNextDirectory = null();
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		bool _hx_tmp1;
HXDLIN( 161)		if (::hx::IsNotNull( weekDir )) {
HXLINE( 161)			_hx_tmp1 = (weekDir.length > 0);
            		}
            		else {
HXLINE( 161)			_hx_tmp1 = false;
            		}
HXDLIN( 161)		if (_hx_tmp1) {
HXLINE( 161)			_hx_tmp = (weekDir != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 161)			_hx_tmp = false;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 161)			directory = weekDir;
            		}
HXLINE( 163)		::Paths_obj::setCurrentLevel(directory);
HXLINE( 164)		::haxe::Log_obj::trace((HX_("Setting asset folder to ",b3,9c,5c,a5) + directory),::hx::SourceInfo(HX_("source/LoadingState.hx",55,7f,fd,f0),164,HX_("LoadingState",15,62,ae,41),HX_("getNextState",a8,2c,a7,3a)));
HXLINE( 166)		bool loaded = false;
HXLINE( 167)		if (::hx::IsNotNull( ::PlayState_obj::SONG )) {
HXLINE( 168)			bool loaded1;
HXDLIN( 168)			bool loaded2;
HXDLIN( 168)			if (::LoadingState_obj::isSoundLoaded(( (::String)(::LoadingState_obj::getSongPath()) ))) {
HXLINE( 168)				if (( (bool)(::PlayState_obj::SONG->__Field(HX_("needsVoices",be,05,e9,0d),::hx::paccDynamic)) )) {
HXLINE( 168)					loaded2 = ::LoadingState_obj::isSoundLoaded(( (::String)(::LoadingState_obj::getVocalPath()) ));
            				}
            				else {
HXLINE( 168)					loaded2 = true;
            				}
            			}
            			else {
HXLINE( 168)				loaded2 = false;
            			}
HXDLIN( 168)			if (loaded2) {
HXLINE( 168)				loaded1 = ::LoadingState_obj::isLibraryLoaded(HX_("shared",a5,5e,2b,1d));
            			}
            			else {
HXLINE( 168)				loaded1 = false;
            			}
HXDLIN( 168)			if (loaded1) {
HXLINE( 168)				loaded = ::LoadingState_obj::isLibraryLoaded(directory);
            			}
            			else {
HXLINE( 168)				loaded = false;
            			}
            		}
HXLINE( 171)		if (!(loaded)) {
HXLINE( 172)			return  ::LoadingState_obj::__alloc( HX_CTX ,target,stopMusic,directory);
            		}
HXLINE( 174)		bool _hx_tmp2;
HXDLIN( 174)		if (stopMusic) {
HXLINE( 174)			_hx_tmp2 = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 174)			_hx_tmp2 = false;
            		}
HXDLIN( 174)		if (_hx_tmp2) {
HXLINE( 175)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 175)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 177)		return target;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,getNextState,return )

bool LoadingState_obj::isSoundLoaded(::String path){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_182_isSoundLoaded)
HXDLIN( 182)		return ::openfl::utils::IAssetCache_obj::hasSound(::openfl::utils::Assets_obj::cache,path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,isSoundLoaded,return )

bool LoadingState_obj::isLibraryLoaded(::String library){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_187_isLibraryLoaded)
HXDLIN( 187)		return ::hx::IsNotNull( ::openfl::utils::Assets_obj::getLibrary(library) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,isLibraryLoaded,return )

 ::lime::app::Future LoadingState_obj::initSongsManifest(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_235_initSongsManifest)
HXLINE( 236)			if (::hx::IsNull( manifest )) {
HXLINE( 238)				promise->error(((HX_("Cannot parse asset manifest for library \"",cf,1e,cc,48) + id) + HX_("\"",22,00,00,00)));
HXLINE( 239)				return;
            			}
HXLINE( 242)			 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 244)			if (::hx::IsNull( library )) {
HXLINE( 246)				promise->error(((HX_("Cannot open library \"",44,cc,55,e7) + id) + HX_("\"",22,00,00,00)));
            			}
            			else {
HXLINE( 251)				::lime::utils::Assets_obj::libraries->set(id,library);
HXLINE( 252)				library->onChange->add(::lime::utils::Assets_obj::onChange->dispatch_dyn(),null(),null());
HXLINE( 253)				 ::lime::app::Promise_lime_utils_AssetLibrary promise1 = promise;
HXDLIN( 253)				promise1->completeWith(::lime::app::Future_obj::withValue(library));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_257_initSongsManifest)
HXLINE( 257)			promise->error(((HX_("There is no asset library with an ID of \"",8b,06,e2,9a) + id) + HX_("\"",22,00,00,00)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_198_initSongsManifest)
HXLINE( 199)		::String id = HX_("songs",fe,36,c7,80);
HXLINE( 200)		 ::lime::app::Promise_lime_utils_AssetLibrary promise =  ::lime::app::Promise_lime_utils_AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 202)		 ::lime::utils::AssetLibrary library = ::lime::utils::Assets_obj::getLibrary(id);
HXLINE( 204)		if (::hx::IsNotNull( library )) {
HXLINE( 206)			return ::lime::app::Future_obj::withValue(library);
            		}
HXLINE( 209)		::String path = id;
HXLINE( 210)		::String rootPath = null();
HXLINE( 213)		 ::haxe::ds::StringMap libraryPaths = ::lime::utils::Assets_obj::libraryPaths;
HXLINE( 214)		if (libraryPaths->exists(id)) {
HXLINE( 216)			path = libraryPaths->get_string(id);
HXLINE( 217)			rootPath = ::haxe::io::Path_obj::directory(path);
            		}
            		else {
HXLINE( 221)			if (::StringTools_obj::endsWith(path,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 223)				rootPath = path;
HXLINE( 224)				path = (path + HX_("/library.json",2a,a7,07,47));
            			}
            			else {
HXLINE( 228)				rootPath = ::haxe::io::Path_obj::directory(path);
            			}
HXLINE( 231)			path = ::lime::utils::Assets_obj::_hx___cacheBreak(path);
            		}
HXLINE( 234)		::lime::utils::AssetManifest_obj::loadFromFile(path,rootPath)->onComplete( ::Dynamic(new _hx_Closure_0(id,promise)))->onError( ::Dynamic(new _hx_Closure_1(id,promise)));
HXLINE( 260)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,initSongsManifest,return )


::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__new( ::flixel::FlxState target,bool stopMusic,::String directory) {
	::hx::ObjectPtr< LoadingState_obj > __this = new LoadingState_obj();
	__this->__construct(target,stopMusic,directory);
	return __this;
}

::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxState target,bool stopMusic,::String directory) {
	LoadingState_obj *__this = (LoadingState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadingState_obj), true, "LoadingState"));
	*(void **)__this = LoadingState_obj::_hx_vtable;
	__this->__construct(target,stopMusic,directory);
	return __this;
}

LoadingState_obj::LoadingState_obj()
{
}

void LoadingState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoadingState);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(stopMusic,"stopMusic");
	HX_MARK_MEMBER_NAME(directory,"directory");
	HX_MARK_MEMBER_NAME(callbacks,"callbacks");
	HX_MARK_MEMBER_NAME(targetShit,"targetShit");
	HX_MARK_MEMBER_NAME(funkay,"funkay");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(jorgeTank,"jorgeTank");
	HX_MARK_MEMBER_NAME(loadBar,"loadBar");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoadingState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(stopMusic,"stopMusic");
	HX_VISIT_MEMBER_NAME(directory,"directory");
	HX_VISIT_MEMBER_NAME(callbacks,"callbacks");
	HX_VISIT_MEMBER_NAME(targetShit,"targetShit");
	HX_VISIT_MEMBER_NAME(funkay,"funkay");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(jorgeTank,"jorgeTank");
	HX_VISIT_MEMBER_NAME(loadBar,"loadBar");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LoadingState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"funkay") ) { return ::hx::Val( funkay ); }
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoad") ) { return ::hx::Val( onLoad_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadBar") ) { return ::hx::Val( loadBar ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { return ::hx::Val( stopMusic ); }
		if (HX_FIELD_EQ(inName,"directory") ) { return ::hx::Val( directory ); }
		if (HX_FIELD_EQ(inName,"callbacks") ) { return ::hx::Val( callbacks ); }
		if (HX_FIELD_EQ(inName,"jorgeTank") ) { return ::hx::Val( jorgeTank ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetShit") ) { return ::hx::Val( targetShit ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkLibrary") ) { return ::hx::Val( checkLibrary_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkLoadSong") ) { return ::hx::Val( checkLoadSong_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LoadingState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getSongPath") ) { outValue = getSongPath_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getVocalPath") ) { outValue = getVocalPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getNextState") ) { outValue = getNextState_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isSoundLoaded") ) { outValue = isSoundLoaded_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isLibraryLoaded") ) { outValue = isLibraryLoaded_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initSongsManifest") ) { outValue = initSongsManifest_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadAndSwitchState") ) { outValue = loadAndSwitchState_dyn(); return true; }
	}
	return false;
}

::hx::Val LoadingState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"funkay") ) { funkay=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadBar") ) { loadBar=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { stopMusic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"directory") ) { directory=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"callbacks") ) { callbacks=inValue.Cast<  ::MultiCallback >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jorgeTank") ) { jorgeTank=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetShit") ) { targetShit=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoadingState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("stopMusic",43,09,9d,20));
	outFields->push(HX_("directory",6d,f2,44,10));
	outFields->push(HX_("callbacks",0e,f3,bf,a6));
	outFields->push(HX_("targetShit",b1,6b,83,a6));
	outFields->push(HX_("funkay",44,ab,4f,6f));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("jorgeTank",f5,7f,6e,37));
	outFields->push(HX_("loadBar",4d,2b,d5,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LoadingState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxState */ ,(int)offsetof(LoadingState_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsBool,(int)offsetof(LoadingState_obj,stopMusic),HX_("stopMusic",43,09,9d,20)},
	{::hx::fsString,(int)offsetof(LoadingState_obj,directory),HX_("directory",6d,f2,44,10)},
	{::hx::fsObject /*  ::MultiCallback */ ,(int)offsetof(LoadingState_obj,callbacks),HX_("callbacks",0e,f3,bf,a6)},
	{::hx::fsFloat,(int)offsetof(LoadingState_obj,targetShit),HX_("targetShit",b1,6b,83,a6)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,funkay),HX_("funkay",44,ab,4f,6f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,jorgeTank),HX_("jorgeTank",f5,7f,6e,37)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,loadBar),HX_("loadBar",4d,2b,d5,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LoadingState_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &LoadingState_obj::MIN_TIME,HX_("MIN_TIME",3a,05,70,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LoadingState_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("stopMusic",43,09,9d,20),
	HX_("directory",6d,f2,44,10),
	HX_("callbacks",0e,f3,bf,a6),
	HX_("targetShit",b1,6b,83,a6),
	HX_("funkay",44,ab,4f,6f),
	HX_("logoBl",15,ca,6e,5c),
	HX_("jorgeTank",f5,7f,6e,37),
	HX_("loadBar",4d,2b,d5,08),
	HX_("create",fc,66,0f,7c),
	HX_("checkLoadSong",03,52,52,a5),
	HX_("checkLibrary",13,df,f6,2c),
	HX_("update",09,86,05,87),
	HX_("onLoad",e5,a2,41,ea),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void LoadingState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LoadingState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#endif

::hx::Class LoadingState_obj::__mClass;

static ::String LoadingState_obj_sStaticFields[] = {
	HX_("MIN_TIME",3a,05,70,2a),
	HX_("getSongPath",d0,06,1e,5e),
	HX_("getVocalPath",44,23,59,59),
	HX_("loadAndSwitchState",ac,5a,a7,a6),
	HX_("getNextState",a8,2c,a7,3a),
	HX_("isSoundLoaded",6a,9e,c0,14),
	HX_("isLibraryLoaded",16,1b,a1,cc),
	HX_("initSongsManifest",9d,87,b0,e7),
	::String(null())
};

void LoadingState_obj::__register()
{
	LoadingState_obj _hx_dummy;
	LoadingState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LoadingState",15,62,ae,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoadingState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LoadingState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LoadingState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoadingState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoadingState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LoadingState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadingState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadingState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LoadingState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_21_boot)
HXDLIN(  21)		MIN_TIME = ((Float)1.0);
            	}
}

