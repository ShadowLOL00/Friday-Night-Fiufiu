#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_ControlsSubstate
#include <ControlsSubstate.h>
#endif
#ifndef INCLUDED_InputFormatter
#include <InputFormatter.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_ui_FlxActionMode
#include <ui/FlxActionMode.h>
#endif
#ifndef INCLUDED_ui_FlxDPadMode
#include <ui/FlxDPadMode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0105b02946ff30ba_408_new,"ControlsSubstate","new",0xe75631b9,"ControlsSubstate.new","OptionsState.hx",408,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_486_update,"ControlsSubstate","update",0xc5c9c250,"ControlsSubstate.update","OptionsState.hx",486,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_502_update,"ControlsSubstate","update",0xc5c9c250,"ControlsSubstate.update","OptionsState.hx",502,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_561_getInputTextNum,"ControlsSubstate","getInputTextNum",0xeb55653e,"ControlsSubstate.getInputTextNum","OptionsState.hx",561,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_571_changeSelection,"ControlsSubstate","changeSelection",0xda311b95,"ControlsSubstate.changeSelection","OptionsState.hx",571,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_618_changeAlt,"ControlsSubstate","changeAlt",0x496f0fb2,"ControlsSubstate.changeAlt","OptionsState.hx",618,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_641_unselectableCheck,"ControlsSubstate","unselectableCheck",0xa3530332,"ControlsSubstate.unselectableCheck","OptionsState.hx",641,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_648_addBindTexts,"ControlsSubstate","addBindTexts",0xea2c254f,"ControlsSubstate.addBindTexts","OptionsState.hx",648,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_663_reloadKeys,"ControlsSubstate","reloadKeys",0x6f13edb4,"ControlsSubstate.reloadKeys","OptionsState.hx",663,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_409_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",409,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_410_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",410,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_412_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",412,0x342db2ab)

void ControlsSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0105b02946ff30ba_408_new)
HXLINE( 485)		this->bindingTime = ((Float)0);
HXLINE( 484)		this->leaving = false;
HXLINE( 439)		this->nextAccept = 5;
HXLINE( 438)		this->rebindingKey = false;
HXLINE( 436)		this->grpInputsAlt = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 435)		this->grpInputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 415)		this->optionShit = ::cpp::VirtualArray_obj::__new(16)->init(0,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("NOTES",21,14,b9,1d)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("note_left",b4,fe,20,a5)))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("note_down",0f,ef,de,9f)))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("note_up",c8,67,5c,4d)))->init(4,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("note_right",8f,ec,ca,4e)))->init(5,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(6,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("UI",54,4a,00,00)))->init(7,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("ui_left",12,4d,89,f7)))->init(8,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("ui_down",6d,3d,47,f2)))->init(9,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("ui_up",a6,c2,91,a3)))->init(10,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("ui_right",71,30,a7,17)))->init(11,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(12,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Reset",af,b9,f5,79))->init(1,HX_("reset",cf,49,c8,e6)))->init(13,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Accept",28,07,9b,3f))->init(1,HX_("accept",08,93,06,0b)))->init(14,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Back",47,06,ea,2b))->init(1,HX_("back",27,da,10,41)))->init(15,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Pause",d6,46,85,50))->init(1,HX_("pause",f6,d6,57,bd)));
HXLINE( 413)		this->bindLength = 0;
HXLINE( 442)		super::__construct();
HXLINE( 444)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 445)		this->add(this->grpOptions);
HXLINE( 447)		this->controlMap = ::ClientPrefs_obj::keyBinds->copy();
HXLINE( 448)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)));
HXLINE( 449)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,::ControlsSubstate_obj::defaultKey));
HXLINE( 451)		{
HXLINE( 451)			int _g = 0;
HXDLIN( 451)			int _g1 = this->optionShit->get_length();
HXDLIN( 451)			while((_g < _g1)){
HXLINE( 451)				_g = (_g + 1);
HXDLIN( 451)				int i = (_g - 1);
HXLINE( 452)				bool isCentered = false;
HXLINE( 453)				bool isDefaultKey = ::hx::IsEq( this->optionShit->__get(i)->__GetItem(0),::ControlsSubstate_obj::defaultKey );
HXLINE( 454)				if (this->unselectableCheck(i,true)) {
HXLINE( 455)					isCentered = true;
            				}
HXLINE( 458)				bool optionText;
HXDLIN( 458)				if (isCentered) {
HXLINE( 458)					optionText = isDefaultKey;
            				}
            				else {
HXLINE( 458)					optionText = true;
            				}
HXDLIN( 458)				 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((10 * i)) ),( (::String)(this->optionShit->__get(i)->__GetItem(0)) ),optionText,false,null(),null());
HXLINE( 459)				optionText1->isMenuItem = true;
HXLINE( 460)				if (isCentered) {
HXLINE( 461)					optionText1->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 462)					optionText1->forceX = optionText1->x;
HXLINE( 463)					optionText1->yAdd = ( (Float)(-55) );
            				}
            				else {
HXLINE( 465)					optionText1->forceX = ( (Float)(200) );
            				}
HXLINE( 467)				optionText1->yMult = ( (Float)(60) );
HXLINE( 468)				optionText1->targetY = ( (Float)(i) );
HXLINE( 469)				this->grpOptions->add(optionText1).StaticCast<  ::Alphabet >();
HXLINE( 471)				if (!(isCentered)) {
HXLINE( 472)					this->addBindTexts(optionText1,i);
HXLINE( 473)					this->bindLength++;
HXLINE( 474)					if ((::ControlsSubstate_obj::curSelected < 0)) {
HXLINE( 474)						::ControlsSubstate_obj::curSelected = i;
            					}
            				}
            			}
            		}
HXLINE( 477)		this->changeSelection(null());
HXLINE( 480)		this->addVirtualPad(::ui::FlxDPadMode_obj::FULL_dyn(),::ui::FlxActionMode_obj::A_B_dyn());
            	}

Dynamic ControlsSubstate_obj::__CreateEmpty() { return new ControlsSubstate_obj; }

void *ControlsSubstate_obj::_hx_vtable = 0;

Dynamic ControlsSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlsSubstate_obj > _hx_result = new ControlsSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ControlsSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x1b849407) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1b849407;
			} else {
				return inClassId==(int)0x5661ffbf;
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

void ControlsSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_486_update)
HXLINE( 487)		if (!(this->rebindingKey)) {
HXLINE( 488)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 489)				this->changeSelection(-1);
            			}
HXLINE( 491)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 492)				this->changeSelection(1);
            			}
HXLINE( 494)			bool _hx_tmp;
HXDLIN( 494)			if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 494)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            			}
            			else {
HXLINE( 494)				_hx_tmp = true;
            			}
HXDLIN( 494)			if (_hx_tmp) {
HXLINE( 495)				this->changeAlt();
            			}
HXLINE( 498)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::Alphabet spr){
            					HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_502_update)
HXLINE( 502)					spr->set_alpha(( (Float)(0) ));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 499)				::ClientPrefs_obj::keyBinds = this->controlMap->copy();
HXLINE( 500)				::ClientPrefs_obj::reloadControls();
HXLINE( 501)				this->grpOptions->forEachAlive( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 504)				this->close();
HXLINE( 505)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 505)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 508)			bool _hx_tmp1;
HXDLIN( 508)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 508)				_hx_tmp1 = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 508)				_hx_tmp1 = false;
            			}
HXDLIN( 508)			if (_hx_tmp1) {
HXLINE( 509)				if (::hx::IsEq( this->optionShit->__get(::ControlsSubstate_obj::curSelected)->__GetItem(0),::ControlsSubstate_obj::defaultKey )) {
HXLINE( 510)					this->controlMap = ::ClientPrefs_obj::defaultKeys->copy();
HXLINE( 511)					this->reloadKeys();
HXLINE( 512)					this->changeSelection(null());
HXLINE( 513)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 513)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 514)					if (!(this->unselectableCheck(::ControlsSubstate_obj::curSelected,null()))) {
HXLINE( 515)						this->bindingTime = ( (Float)(0) );
HXLINE( 516)						this->rebindingKey = true;
HXLINE( 517)						if (::ControlsSubstate_obj::curAlt) {
HXLINE( 518)							this->grpInputsAlt->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
            						else {
HXLINE( 520)							this->grpInputs->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
HXLINE( 522)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 522)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            				}
            			}
            		}
            		else {
HXLINE( 526)			int keyPressed = ::flixel::FlxG_obj::keys->firstJustPressed();
HXLINE( 527)			if ((keyPressed > -1)) {
HXLINE( 528)				::Array< int > keysArray = ( (::Array< int >)(this->controlMap->get(this->optionShit->__get(::ControlsSubstate_obj::curSelected)->__GetItem(1))) );
HXLINE( 529)				int _hx_tmp;
HXDLIN( 529)				if (::ControlsSubstate_obj::curAlt) {
HXLINE( 529)					_hx_tmp = 1;
            				}
            				else {
HXLINE( 529)					_hx_tmp = 0;
            				}
HXDLIN( 529)				keysArray[_hx_tmp] = keyPressed;
HXLINE( 531)				int opposite;
HXDLIN( 531)				if (::ControlsSubstate_obj::curAlt) {
HXLINE( 531)					opposite = 0;
            				}
            				else {
HXLINE( 531)					opposite = 1;
            				}
HXLINE( 532)				if ((keysArray->__get(opposite) == keysArray->__get((1 - opposite)))) {
HXLINE( 533)					keysArray[opposite] = -1;
            				}
HXLINE( 535)				this->controlMap->set(( (::String)(this->optionShit->__get(::ControlsSubstate_obj::curSelected)->__GetItem(1)) ),keysArray);
HXLINE( 537)				this->reloadKeys();
HXLINE( 538)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 538)				_hx_tmp1->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 539)				this->rebindingKey = false;
            			}
HXLINE( 542)			 ::ControlsSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 542)			_hx_tmp->bindingTime = (_hx_tmp->bindingTime + elapsed);
HXLINE( 543)			if ((this->bindingTime > 5)) {
HXLINE( 544)				if (::ControlsSubstate_obj::curAlt) {
HXLINE( 545)					this->grpInputsAlt->__get(::ControlsSubstate_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE( 547)					this->grpInputs->__get(::ControlsSubstate_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
HXLINE( 549)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 549)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 550)				this->rebindingKey = false;
HXLINE( 551)				this->bindingTime = ( (Float)(0) );
            			}
            		}
HXLINE( 555)		if ((this->nextAccept > 0)) {
HXLINE( 556)			 ::ControlsSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 556)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 558)		this->super::update(elapsed);
            	}


int ControlsSubstate_obj::getInputTextNum(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_561_getInputTextNum)
HXLINE( 562)		int num = 0;
HXLINE( 563)		{
HXLINE( 563)			int _g = 0;
HXDLIN( 563)			int _g1 = ::ControlsSubstate_obj::curSelected;
HXDLIN( 563)			while((_g < _g1)){
HXLINE( 563)				_g = (_g + 1);
HXDLIN( 563)				int i = (_g - 1);
HXLINE( 564)				if (::hx::IsGreater( this->optionShit->__get(i)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),1 )) {
HXLINE( 565)					num = (num + 1);
            				}
            			}
            		}
HXLINE( 568)		return num;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,getInputTextNum,return )

void ControlsSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_571_changeSelection)
HXLINE( 572)		while(true){
HXLINE( 573)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::ControlsSubstate >();
HXDLIN( 573)			::ControlsSubstate_obj::curSelected = (::ControlsSubstate_obj::curSelected + change);
HXLINE( 574)			if ((::ControlsSubstate_obj::curSelected < 0)) {
HXLINE( 575)				::ControlsSubstate_obj::curSelected = (this->optionShit->get_length() - 1);
            			}
HXLINE( 576)			if ((::ControlsSubstate_obj::curSelected >= this->optionShit->get_length())) {
HXLINE( 577)				::ControlsSubstate_obj::curSelected = 0;
            			}
HXLINE( 572)			if (!(this->unselectableCheck(::ControlsSubstate_obj::curSelected,null()))) {
HXLINE( 572)				goto _hx_goto_6;
            			}
            		}
            		_hx_goto_6:;
HXLINE( 580)		int bullShit = 0;
HXLINE( 582)		{
HXLINE( 582)			int _g = 0;
HXDLIN( 582)			int _g1 = this->grpInputs->length;
HXDLIN( 582)			while((_g < _g1)){
HXLINE( 582)				_g = (_g + 1);
HXDLIN( 582)				int i = (_g - 1);
HXLINE( 583)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 585)		{
HXLINE( 585)			int _g2 = 0;
HXDLIN( 585)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 585)			while((_g2 < _g3)){
HXLINE( 585)				_g2 = (_g2 + 1);
HXDLIN( 585)				int i = (_g2 - 1);
HXLINE( 586)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 589)		{
HXLINE( 589)			int _g4 = 0;
HXDLIN( 589)			::Array< ::Dynamic> _g5 = this->grpOptions->members;
HXDLIN( 589)			while((_g4 < _g5->length)){
HXLINE( 589)				 ::Alphabet item = _g5->__get(_g4).StaticCast<  ::Alphabet >();
HXDLIN( 589)				_g4 = (_g4 + 1);
HXLINE( 590)				item->targetY = ( (Float)((bullShit - ::ControlsSubstate_obj::curSelected)) );
HXLINE( 591)				bullShit = (bullShit + 1);
HXLINE( 593)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 594)					item->set_alpha(((Float)0.6));
HXLINE( 595)					if ((item->targetY == 0)) {
HXLINE( 596)						item->set_alpha(( (Float)(1) ));
HXLINE( 597)						if (::ControlsSubstate_obj::curAlt) {
HXLINE( 598)							int _g = 0;
HXDLIN( 598)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 598)							while((_g < _g1)){
HXLINE( 598)								_g = (_g + 1);
HXDLIN( 598)								int i = (_g - 1);
HXLINE( 599)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 600)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 601)									goto _hx_goto_10;
            								}
            							}
            							_hx_goto_10:;
            						}
            						else {
HXLINE( 605)							int _g = 0;
HXDLIN( 605)							int _g1 = this->grpInputs->length;
HXDLIN( 605)							while((_g < _g1)){
HXLINE( 605)								_g = (_g + 1);
HXDLIN( 605)								int i = (_g - 1);
HXLINE( 606)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 607)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 608)									goto _hx_goto_11;
            								}
            							}
            							_hx_goto_11:;
            						}
            					}
            				}
            			}
            		}
HXLINE( 615)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 615)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlsSubstate_obj,changeSelection,(void))

void ControlsSubstate_obj::changeAlt(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_618_changeAlt)
HXLINE( 619)		::ControlsSubstate_obj::curAlt = !(::ControlsSubstate_obj::curAlt);
HXLINE( 620)		{
HXLINE( 620)			int _g = 0;
HXDLIN( 620)			int _g1 = this->grpInputs->length;
HXDLIN( 620)			while((_g < _g1)){
HXLINE( 620)				_g = (_g + 1);
HXDLIN( 620)				int i = (_g - 1);
HXLINE( 621)				if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::ControlsSubstate_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 622)					this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 623)					if (!(::ControlsSubstate_obj::curAlt)) {
HXLINE( 624)						this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 626)					goto _hx_goto_13;
            				}
            			}
            			_hx_goto_13:;
            		}
HXLINE( 629)		{
HXLINE( 629)			int _g2 = 0;
HXDLIN( 629)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 629)			while((_g2 < _g3)){
HXLINE( 629)				_g2 = (_g2 + 1);
HXDLIN( 629)				int i = (_g2 - 1);
HXLINE( 630)				if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::ControlsSubstate_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 631)					this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 632)					if (::ControlsSubstate_obj::curAlt) {
HXLINE( 633)						this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 635)					goto _hx_goto_14;
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE( 638)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 638)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,changeAlt,(void))

bool ControlsSubstate_obj::unselectableCheck(int num, ::Dynamic __o_checkDefaultKey){
            		 ::Dynamic checkDefaultKey = __o_checkDefaultKey;
            		if (::hx::IsNull(__o_checkDefaultKey)) checkDefaultKey = false;
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_641_unselectableCheck)
HXLINE( 642)		if (::hx::IsEq( this->optionShit->__get(num)->__GetItem(0),::ControlsSubstate_obj::defaultKey )) {
HXLINE( 643)			return ( (bool)(checkDefaultKey) );
            		}
HXLINE( 645)		if (::hx::IsLess( this->optionShit->__get(num)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),2 )) {
HXLINE( 645)			return ::hx::IsNotEq( this->optionShit->__get(num)->__GetItem(0),::ControlsSubstate_obj::defaultKey );
            		}
            		else {
HXLINE( 645)			return false;
            		}
HXDLIN( 645)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubstate_obj,unselectableCheck,return )

void ControlsSubstate_obj::addBindTexts( ::Alphabet optionText,int num){
            	HX_GC_STACKFRAME(&_hx_pos_0105b02946ff30ba_648_addBindTexts)
HXLINE( 649)		::cpp::VirtualArray keys = ( (::cpp::VirtualArray)(this->controlMap->get(this->optionShit->__get(num)->__GetItem(1))) );
HXLINE( 650)		 ::AttachedText text1 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(( (int)(keys->__get(0)) )),400,-55,null());
HXLINE( 651)		text1->setPosition((optionText->x + 400),(optionText->y - ( (Float)(55) )));
HXLINE( 652)		text1->sprTracker = optionText;
HXLINE( 653)		this->grpInputs->push(text1);
HXLINE( 654)		this->add(text1);
HXLINE( 656)		 ::AttachedText text2 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(( (int)(keys->__get(1)) )),650,-55,null());
HXLINE( 657)		text2->setPosition((optionText->x + 650),(optionText->y - ( (Float)(55) )));
HXLINE( 658)		text2->sprTracker = optionText;
HXLINE( 659)		this->grpInputsAlt->push(text2);
HXLINE( 660)		this->add(text2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubstate_obj,addBindTexts,(void))

void ControlsSubstate_obj::reloadKeys(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_663_reloadKeys)
HXLINE( 664)		while((this->grpInputs->length > 0)){
HXLINE( 665)			 ::AttachedText item = this->grpInputs->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 666)			item->kill();
HXLINE( 667)			this->grpInputs->remove(item);
HXLINE( 668)			item->destroy();
            		}
HXLINE( 670)		while((this->grpInputsAlt->length > 0)){
HXLINE( 671)			 ::AttachedText item = this->grpInputsAlt->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 672)			item->kill();
HXLINE( 673)			this->grpInputsAlt->remove(item);
HXLINE( 674)			item->destroy();
            		}
HXLINE( 677)		{
HXLINE( 677)			int _g = 0;
HXDLIN( 677)			int _g1 = this->grpOptions->length;
HXDLIN( 677)			while((_g < _g1)){
HXLINE( 677)				_g = (_g + 1);
HXDLIN( 677)				int i = (_g - 1);
HXLINE( 678)				if (!(this->unselectableCheck(i,true))) {
HXLINE( 679)					this->addBindTexts(Dynamic( this->grpOptions->members->__get(i)).StaticCast<  ::Alphabet >(),i);
            				}
            			}
            		}
HXLINE( 684)		int bullShit = 0;
HXLINE( 685)		{
HXLINE( 685)			int _g2 = 0;
HXDLIN( 685)			int _g3 = this->grpInputs->length;
HXDLIN( 685)			while((_g2 < _g3)){
HXLINE( 685)				_g2 = (_g2 + 1);
HXDLIN( 685)				int i = (_g2 - 1);
HXLINE( 686)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 688)		{
HXLINE( 688)			int _g4 = 0;
HXDLIN( 688)			int _g5 = this->grpInputsAlt->length;
HXDLIN( 688)			while((_g4 < _g5)){
HXLINE( 688)				_g4 = (_g4 + 1);
HXDLIN( 688)				int i = (_g4 - 1);
HXLINE( 689)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 692)		{
HXLINE( 692)			int _g6 = 0;
HXDLIN( 692)			::Array< ::Dynamic> _g7 = this->grpOptions->members;
HXDLIN( 692)			while((_g6 < _g7->length)){
HXLINE( 692)				 ::Alphabet item = _g7->__get(_g6).StaticCast<  ::Alphabet >();
HXDLIN( 692)				_g6 = (_g6 + 1);
HXLINE( 693)				item->targetY = ( (Float)((bullShit - ::ControlsSubstate_obj::curSelected)) );
HXLINE( 694)				bullShit = (bullShit + 1);
HXLINE( 696)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 697)					item->set_alpha(((Float)0.6));
HXLINE( 698)					if ((item->targetY == 0)) {
HXLINE( 699)						item->set_alpha(( (Float)(1) ));
HXLINE( 700)						if (::ControlsSubstate_obj::curAlt) {
HXLINE( 701)							int _g = 0;
HXDLIN( 701)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 701)							while((_g < _g1)){
HXLINE( 701)								_g = (_g + 1);
HXDLIN( 701)								int i = (_g - 1);
HXLINE( 702)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 703)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            						else {
HXLINE( 707)							int _g = 0;
HXDLIN( 707)							int _g1 = this->grpInputs->length;
HXDLIN( 707)							while((_g < _g1)){
HXLINE( 707)								_g = (_g + 1);
HXDLIN( 707)								int i = (_g - 1);
HXLINE( 708)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 709)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,reloadKeys,(void))

int ControlsSubstate_obj::curSelected;

bool ControlsSubstate_obj::curAlt;

::String ControlsSubstate_obj::defaultKey;


::hx::ObjectPtr< ControlsSubstate_obj > ControlsSubstate_obj::__new() {
	::hx::ObjectPtr< ControlsSubstate_obj > __this = new ControlsSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ControlsSubstate_obj > ControlsSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ControlsSubstate_obj *__this = (ControlsSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlsSubstate_obj), true, "ControlsSubstate"));
	*(void **)__this = ControlsSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ControlsSubstate_obj::ControlsSubstate_obj()
{
}

void ControlsSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlsSubstate);
	HX_MARK_MEMBER_NAME(bindLength,"bindLength");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(grpInputs,"grpInputs");
	HX_MARK_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_MARK_MEMBER_NAME(controlMap,"controlMap");
	HX_MARK_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(leaving,"leaving");
	HX_MARK_MEMBER_NAME(bindingTime,"bindingTime");
	 ::MusicBeatSubstate_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ControlsSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bindLength,"bindLength");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(grpInputs,"grpInputs");
	HX_VISIT_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_VISIT_MEMBER_NAME(controlMap,"controlMap");
	HX_VISIT_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(leaving,"leaving");
	HX_VISIT_MEMBER_NAME(bindingTime,"bindingTime");
	 ::MusicBeatSubstate_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ControlsSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { return ::hx::Val( leaving ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { return ::hx::Val( grpInputs ); }
		if (HX_FIELD_EQ(inName,"changeAlt") ) { return ::hx::Val( changeAlt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { return ::hx::Val( bindLength ); }
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"controlMap") ) { return ::hx::Val( controlMap ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"reloadKeys") ) { return ::hx::Val( reloadKeys_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { return ::hx::Val( bindingTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { return ::hx::Val( grpInputsAlt ); }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { return ::hx::Val( rebindingKey ); }
		if (HX_FIELD_EQ(inName,"addBindTexts") ) { return ::hx::Val( addBindTexts_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getInputTextNum") ) { return ::hx::Val( getInputTextNum_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ControlsSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { outValue = ( curAlt ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { outValue = ( defaultKey ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val ControlsSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { leaving=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { grpInputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { bindLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controlMap") ) { controlMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { bindingTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { grpInputsAlt=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { rebindingKey=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ControlsSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { curAlt=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { defaultKey=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ControlsSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bindLength",83,6a,31,c7));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("grpInputs",ee,3e,7e,59));
	outFields->push(HX_("grpInputsAlt",db,fa,fe,c1));
	outFields->push(HX_("controlMap",3f,0f,a7,04));
	outFields->push(HX_("rebindingKey",cd,70,6f,a8));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("leaving",f4,09,47,15));
	outFields->push(HX_("bindingTime",f2,09,cb,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ControlsSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ControlsSubstate_obj,bindLength),HX_("bindLength",83,6a,31,c7)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ControlsSubstate_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(ControlsSubstate_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubstate_obj,grpInputs),HX_("grpInputs",ee,3e,7e,59)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubstate_obj,grpInputsAlt),HX_("grpInputsAlt",db,fa,fe,c1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ControlsSubstate_obj,controlMap),HX_("controlMap",3f,0f,a7,04)},
	{::hx::fsBool,(int)offsetof(ControlsSubstate_obj,rebindingKey),HX_("rebindingKey",cd,70,6f,a8)},
	{::hx::fsInt,(int)offsetof(ControlsSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsBool,(int)offsetof(ControlsSubstate_obj,leaving),HX_("leaving",f4,09,47,15)},
	{::hx::fsFloat,(int)offsetof(ControlsSubstate_obj,bindingTime),HX_("bindingTime",f2,09,cb,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ControlsSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ControlsSubstate_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(void *) &ControlsSubstate_obj::curAlt,HX_("curAlt",89,9b,c2,3e)},
	{::hx::fsString,(void *) &ControlsSubstate_obj::defaultKey,HX_("defaultKey",5e,97,fe,25)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ControlsSubstate_obj_sMemberFields[] = {
	HX_("bindLength",83,6a,31,c7),
	HX_("optionShit",d5,2d,ee,91),
	HX_("grpOptions",f9,45,d8,00),
	HX_("grpInputs",ee,3e,7e,59),
	HX_("grpInputsAlt",db,fa,fe,c1),
	HX_("controlMap",3f,0f,a7,04),
	HX_("rebindingKey",cd,70,6f,a8),
	HX_("nextAccept",5b,44,38,c0),
	HX_("leaving",f4,09,47,15),
	HX_("bindingTime",f2,09,cb,be),
	HX_("update",09,86,05,87),
	HX_("getInputTextNum",65,e2,d9,59),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeAlt",99,a5,f7,1d),
	HX_("unselectableCheck",19,58,ce,19),
	HX_("addBindTexts",c8,f9,1e,b0),
	HX_("reloadKeys",ed,81,0e,92),
	::String(null()) };

static void ControlsSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::curAlt,"curAlt");
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::defaultKey,"defaultKey");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlsSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::curAlt,"curAlt");
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::defaultKey,"defaultKey");
};

#endif

::hx::Class ControlsSubstate_obj::__mClass;

static ::String ControlsSubstate_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("curAlt",89,9b,c2,3e),
	HX_("defaultKey",5e,97,fe,25),
	::String(null())
};

void ControlsSubstate_obj::__register()
{
	ControlsSubstate_obj _hx_dummy;
	ControlsSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ControlsSubstate",47,e1,a2,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ControlsSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &ControlsSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = ControlsSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ControlsSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlsSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlsSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlsSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlsSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlsSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ControlsSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_409_boot)
HXDLIN( 409)		curSelected = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_410_boot)
HXDLIN( 410)		curAlt = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_412_boot)
HXDLIN( 412)		defaultKey = HX_("Reset to Default Keys",47,5b,97,3d);
            	}
}

