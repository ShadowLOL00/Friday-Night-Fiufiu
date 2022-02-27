#include <hxcpp.h>

#ifndef INCLUDED_Achievements
#include <Achievements.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_28_unlockAchievement,"Achievements","unlockAchievement",0xddbd5e61,"Achievements.unlockAchievement","Achievements.hx",28,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_34_isAchievementUnlocked,"Achievements","isAchievementUnlocked",0x1e700b3e,"Achievements.isAchievementUnlocked","Achievements.hx",34,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_41_getAchievementIndex,"Achievements","getAchievementIndex",0x4a8ffcaf,"Achievements.getAchievementIndex","Achievements.hx",41,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_51_loadAchievements,"Achievements","loadAchievements",0x7629cad4,"Achievements.loadAchievements","Achievements.hx",51,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_13_boot,"Achievements","boot",0x8eb5af9c,"Achievements.boot","Achievements.hx",13,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_25_boot,"Achievements","boot",0x8eb5af9c,"Achievements.boot","Achievements.hx",25,0xf249f7fa)
HX_LOCAL_STACK_FRAME(_hx_pos_51d0672471f6b710_27_boot,"Achievements","boot",0x8eb5af9c,"Achievements.boot","Achievements.hx",27,0xf249f7fa)

void Achievements_obj::__construct() { }

Dynamic Achievements_obj::__CreateEmpty() { return new Achievements_obj; }

void *Achievements_obj::_hx_vtable = 0;

Dynamic Achievements_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Achievements_obj > _hx_result = new Achievements_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Achievements_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x375f4004;
}

::cpp::VirtualArray Achievements_obj::achievementsStuff;

 ::haxe::ds::StringMap Achievements_obj::achievementsMap;

int Achievements_obj::henchmenDeath;

void Achievements_obj::unlockAchievement(::String name){
            	HX_STACKFRAME(&_hx_pos_51d0672471f6b710_28_unlockAchievement)
HXLINE(  29)		::flixel::FlxG_obj::log->advanced(((HX_("Completed achievement \"",bc,88,62,0c) + name) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::NORMAL,null());
HXLINE(  30)		::Achievements_obj::achievementsMap->set(name,true);
HXLINE(  31)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  31)		_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Achievements_obj,unlockAchievement,(void))

bool Achievements_obj::isAchievementUnlocked(::String name){
            	HX_STACKFRAME(&_hx_pos_51d0672471f6b710_34_isAchievementUnlocked)
HXLINE(  35)		bool _hx_tmp;
HXDLIN(  35)		if (::Achievements_obj::achievementsMap->exists(name)) {
HXLINE(  35)			_hx_tmp = ::Achievements_obj::achievementsMap->get_bool(name);
            		}
            		else {
HXLINE(  35)			_hx_tmp = false;
            		}
HXDLIN(  35)		if (_hx_tmp) {
HXLINE(  36)			return true;
            		}
HXLINE(  38)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Achievements_obj,isAchievementUnlocked,return )

int Achievements_obj::getAchievementIndex(::String name){
            	HX_STACKFRAME(&_hx_pos_51d0672471f6b710_41_getAchievementIndex)
HXLINE(  42)		{
HXLINE(  42)			int _g = 0;
HXDLIN(  42)			int _g1 = ::Achievements_obj::achievementsStuff->get_length();
HXDLIN(  42)			while((_g < _g1)){
HXLINE(  42)				_g = (_g + 1);
HXDLIN(  42)				int i = (_g - 1);
HXLINE(  43)				if (::hx::IsEq( ::Achievements_obj::achievementsStuff->__get(i)->__GetItem(2),name )) {
HXLINE(  44)					return i;
            				}
            			}
            		}
HXLINE(  47)		return -1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Achievements_obj,getAchievementIndex,return )

void Achievements_obj::loadAchievements(){
            	HX_STACKFRAME(&_hx_pos_51d0672471f6b710_51_loadAchievements)
HXDLIN(  51)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data )) {
HXLINE(  52)			if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("achievementsMap",d8,6f,d5,91),::hx::paccDynamic) )) {
HXLINE(  53)				::Achievements_obj::achievementsMap = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("achievementsMap",d8,6f,d5,91),::hx::paccDynamic)) );
            			}
HXLINE(  55)			if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("achievementsUnlocked",67,55,27,1c),::hx::paccDynamic) )) {
HXLINE(  56)				::flixel::FlxG_obj::log->advanced(HX_("Trying to load stuff",c6,1c,d3,26),::flixel::_hx_system::debug::log::LogStyle_obj::NORMAL,null());
HXLINE(  57)				::Array< ::String > savedStuff = ( (::Array< ::String >)(::flixel::FlxG_obj::save->data->__Field(HX_("achievementsUnlocked",67,55,27,1c),::hx::paccDynamic)) );
HXLINE(  58)				{
HXLINE(  58)					int _g = 0;
HXDLIN(  58)					int _g1 = savedStuff->length;
HXDLIN(  58)					while((_g < _g1)){
HXLINE(  58)						_g = (_g + 1);
HXDLIN(  58)						int i = (_g - 1);
HXLINE(  59)						::Achievements_obj::achievementsMap->set(savedStuff->__get(i),true);
            					}
            				}
            			}
HXLINE(  62)			bool _hx_tmp;
HXDLIN(  62)			if ((::Achievements_obj::henchmenDeath == 0)) {
HXLINE(  62)				_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("henchmenDeath",f4,76,2a,dd),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  62)				_hx_tmp = false;
            			}
HXDLIN(  62)			if (_hx_tmp) {
HXLINE(  63)				::Achievements_obj::henchmenDeath = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("henchmenDeath",f4,76,2a,dd),::hx::paccDynamic)) );
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Achievements_obj,loadAchievements,(void))


Achievements_obj::Achievements_obj()
{
}

bool Achievements_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"henchmenDeath") ) { outValue = ( henchmenDeath ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"achievementsMap") ) { outValue = ( achievementsMap ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadAchievements") ) { outValue = loadAchievements_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"achievementsStuff") ) { outValue = ( achievementsStuff ); return true; }
		if (HX_FIELD_EQ(inName,"unlockAchievement") ) { outValue = unlockAchievement_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAchievementIndex") ) { outValue = getAchievementIndex_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"isAchievementUnlocked") ) { outValue = isAchievementUnlocked_dyn(); return true; }
	}
	return false;
}

bool Achievements_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"henchmenDeath") ) { henchmenDeath=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"achievementsMap") ) { achievementsMap=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"achievementsStuff") ) { achievementsStuff=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Achievements_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Achievements_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &Achievements_obj::achievementsStuff,HX_("achievementsStuff",30,c3,ed,46)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Achievements_obj::achievementsMap,HX_("achievementsMap",d8,6f,d5,91)},
	{::hx::fsInt,(void *) &Achievements_obj::henchmenDeath,HX_("henchmenDeath",f4,76,2a,dd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Achievements_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Achievements_obj::achievementsStuff,"achievementsStuff");
	HX_MARK_MEMBER_NAME(Achievements_obj::achievementsMap,"achievementsMap");
	HX_MARK_MEMBER_NAME(Achievements_obj::henchmenDeath,"henchmenDeath");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Achievements_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Achievements_obj::achievementsStuff,"achievementsStuff");
	HX_VISIT_MEMBER_NAME(Achievements_obj::achievementsMap,"achievementsMap");
	HX_VISIT_MEMBER_NAME(Achievements_obj::henchmenDeath,"henchmenDeath");
};

#endif

::hx::Class Achievements_obj::__mClass;

static ::String Achievements_obj_sStaticFields[] = {
	HX_("achievementsStuff",30,c3,ed,46),
	HX_("achievementsMap",d8,6f,d5,91),
	HX_("henchmenDeath",f4,76,2a,dd),
	HX_("unlockAchievement",0b,e4,d1,6a),
	HX_("isAchievementUnlocked",e8,ad,c9,f2),
	HX_("getAchievementIndex",d9,c0,10,aa),
	HX_("loadAchievements",6a,28,c7,f2),
	::String(null())
};

void Achievements_obj::__register()
{
	Achievements_obj _hx_dummy;
	Achievements_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Achievements",44,ed,7d,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Achievements_obj::__GetStatic;
	__mClass->mSetStaticField = &Achievements_obj::__SetStatic;
	__mClass->mMarkFunc = Achievements_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Achievements_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Achievements_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Achievements_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Achievements_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Achievements_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Achievements_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_51d0672471f6b710_13_boot)
HXDLIN(  13)		achievementsStuff = ::cpp::VirtualArray_obj::__new(10)->init(0,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Maluco na Noite de Sexta",91,b7,10,19))->init(1,HX_W(u"Jogue numa Sexta... \u00e0 Noite.",862a,ef47))->init(2,HX_("friday_night_play",9b,1f,4e,c7))->init(3,true))->init(1,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Soltando Belos Cantos",7f,fa,f6,b1))->init(1,HX_W(u"Passe a week do Bem-te-vi no dif\u00edcil sem erros.",1958,45ca))->init(2,HX_("bemtevi_nomiss",ee,ad,7d,98))->init(3,false))->init(2,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Hmm... picante!",53,f6,12,2e))->init(1,HX_("Passe a week do Bem-te-vi no Spicy sem erros.",1f,ae,8c,b8))->init(2,HX_("bemtevispicy_nomiss",e8,54,cb,53))->init(3,false))->init(3,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("A A Folou!",f6,b2,c0,17))->init(1,HX_W(u"Passe a m\u00fasica \"A A Folou\" no dif\u00edcil sem erros.",5f6a,f7bd))->init(2,HX_("aafolou_nomiss",73,0e,07,9a))->init(3,true))->init(4,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Mas que Desastre Musical!",6e,2b,c2,d3))->init(1,HX_W(u"Complete uma m\u00fasica com accuracy abaixo de 20%.",6ee8,cca8))->init(2,HX_("ur_bad",a3,4f,85,aa))->init(3,false))->init(5,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Perfeccionista",43,c8,f5,95))->init(1,HX_W(u"Complete uma m\u00fasica com accuracy 100%.",b638,3ade))->init(2,HX_("ur_good",9f,19,79,8d))->init(3,false))->init(6,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Ainda ta Com Folego...?",50,1f,cc,a4))->init(1,HX_("Segure uma nota por 20 segundos.",6d,dd,82,c7))->init(2,HX_("oversinging",1f,13,8f,78))->init(3,false))->init(7,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Hiperativo",f3,ca,89,c3))->init(1,HX_W(u"Complete uma m\u00fasica sem a anima\u00e7\u00e3o Idle.",5d9f,3596))->init(2,HX_("hype",46,63,1a,45))->init(3,false))->init(8,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Apenas nos dois",b9,c6,98,9e))->init(1,HX_W(u"Complete uma m\u00fasica apertando em apenas 2 setas.",293c,9769))->init(2,HX_("two_keys",c7,f4,0a,9b))->init(3,false))->init(9,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("Torradeira Gamer",91,de,06,80))->init(1,HX_W(u"J\u00e1 tentou rodar o God Of War na torradeira?",10da,68bd))->init(2,HX_("toastie",43,0c,91,5f))->init(3,false));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_51d0672471f6b710_25_boot)
HXDLIN(  25)		achievementsMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_51d0672471f6b710_27_boot)
HXDLIN(  27)		henchmenDeath = 0;
            	}
}

