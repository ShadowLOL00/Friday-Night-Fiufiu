#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_ColorSwapShader
#include <ColorSwapShader.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_NotesSubstate
#include <NotesSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_ui_FlxActionMode
#include <ui/FlxActionMode.h>
#endif
#ifndef INCLUDED_ui_FlxDPadMode
#include <ui/FlxDPadMode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30acc222447c2979_137_new,"NotesSubstate","new",0xd3cddfc4,"NotesSubstate.new","OptionsState.hx",137,0x342db2ab)
static const Float _hx_array_data_06f1edd2_2[] = {
	(Float)240,(Float)90,
};
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_200_update,"NotesSubstate","update",0xc8182d25,"NotesSubstate.update","OptionsState.hx",200,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_305_update,"NotesSubstate","update",0xc8182d25,"NotesSubstate.update","OptionsState.hx",305,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_308_update,"NotesSubstate","update",0xc8182d25,"NotesSubstate.update","OptionsState.hx",308,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_322_changeSelection,"NotesSubstate","changeSelection",0xf1bb2e20,"NotesSubstate.changeSelection","OptionsState.hx",322,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_352_changeType,"NotesSubstate","changeType",0x637c8d66,"NotesSubstate.changeType","OptionsState.hx",352,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_371_resetValue,"NotesSubstate","resetValue",0x567f1c3e,"NotesSubstate.resetValue","OptionsState.hx",371,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_381_updateValue,"NotesSubstate","updateValue",0x803efc0c,"NotesSubstate.updateValue","OptionsState.hx",381,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_139_boot,"NotesSubstate","boot",0x786eec4e,"NotesSubstate.boot","OptionsState.hx",139,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_140_boot,"NotesSubstate","boot",0x786eec4e,"NotesSubstate.boot","OptionsState.hx",140,0x342db2ab)

void NotesSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_30acc222447c2979_137_new)
HXLINE( 199)		this->hsvTextOffsets = ::Array_obj< Float >::fromData( _hx_array_data_06f1edd2_2,2);
HXLINE( 198)		this->changingNote = false;
HXLINE( 149)		this->posX = 250;
HXLINE( 147)		this->nextAccept = 5;
HXLINE( 145)		this->holdTime = ((Float)0);
HXLINE( 144)		this->curValue = ((Float)0);
HXLINE( 143)		this->shaderArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 151)		super::__construct();
HXLINE( 153)		this->grpNotes =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 154)		this->add(this->grpNotes);
HXLINE( 155)		this->grpNumbers =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 156)		this->add(this->grpNumbers);
HXLINE( 158)		{
HXLINE( 158)			int _g = 0;
HXDLIN( 158)			int _g1 = ::ClientPrefs_obj::arrowHSV->length;
HXDLIN( 158)			while((_g < _g1)){
HXLINE( 158)				_g = (_g + 1);
HXDLIN( 158)				int i = (_g - 1);
HXLINE( 159)				Float yPos = ( (Float)(((165 * i) + 35)) );
HXLINE( 160)				{
HXLINE( 160)					{
HXLINE( 161)						 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),yPos,::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0)),null(),null(),null(),null());
HXLINE( 162)						optionText->set_x((( (Float)((this->posX + 100)) ) - (( (Float)((optionText->lettersArray->length * 90)) ) / ( (Float)(2) ))));
HXLINE( 163)						this->grpNumbers->add(optionText).StaticCast<  ::Alphabet >();
            					}
HXLINE( 160)					{
HXLINE( 161)						 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),yPos,::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1)),null(),null(),null(),null());
HXLINE( 162)						optionText1->set_x((( (Float)(((this->posX + 225) + 100)) ) - (( (Float)((optionText1->lettersArray->length * 90)) ) / ( (Float)(2) ))));
HXLINE( 163)						this->grpNumbers->add(optionText1).StaticCast<  ::Alphabet >();
            					}
HXLINE( 160)					{
HXLINE( 161)						 ::Alphabet optionText2 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),yPos,::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2)),null(),null(),null(),null());
HXLINE( 162)						optionText2->set_x((( (Float)(((this->posX + 450) + 100)) ) - (( (Float)((optionText2->lettersArray->length * 90)) ) / ( (Float)(2) ))));
HXLINE( 163)						this->grpNumbers->add(optionText2).StaticCast<  ::Alphabet >();
            					}
            				}
HXLINE( 166)				 ::flixel::FlxSprite note =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->posX - 70),yPos,null());
HXLINE( 167)				::String library = null();
HXDLIN( 167)				 ::Dynamic _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 167)				note->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 168)				switch((int)(i)){
            					case (int)0: {
HXLINE( 170)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("purple0",74,7e,2d,e7),null(),null(),null(),null());
            					}
            					break;
            					case (int)1: {
HXLINE( 172)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("blue0",56,04,01,b5),null(),null(),null(),null());
            					}
            					break;
            					case (int)2: {
HXLINE( 174)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("green0",0d,dc,7f,15),null(),null(),null(),null());
            					}
            					break;
            					case (int)3: {
HXLINE( 176)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("red0",bf,4d,a7,4b),null(),null(),null(),null());
            					}
            					break;
            				}
HXLINE( 178)				note->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 179)				note->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 180)				this->grpNotes->add(note).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 182)				 ::ColorSwap newShader =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 183)				note->shader = newShader->shader;
HXLINE( 184)				newShader->set_hue((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0)) ) / ( (Float)(360) )));
HXLINE( 185)				newShader->set_saturation((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1)) ) / ( (Float)(100) )));
HXLINE( 186)				newShader->set_brightness((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2)) ) / ( (Float)(100) )));
HXLINE( 187)				this->shaderArray->push(newShader);
            			}
            		}
HXLINE( 189)		this->hsvText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("Hue    Saturation  Brightness",7b,47,68,9c),false,false,0,((Float)0.65));
HXLINE( 190)		this->add(this->hsvText);
HXLINE( 191)		this->changeSelection(null());
HXLINE( 194)		this->addVirtualPad(::ui::FlxDPadMode_obj::FULL_dyn(),::ui::FlxActionMode_obj::A_B_dyn());
            	}

Dynamic NotesSubstate_obj::__CreateEmpty() { return new NotesSubstate_obj; }

void *NotesSubstate_obj::_hx_vtable = 0;

Dynamic NotesSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotesSubstate_obj > _hx_result = new NotesSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NotesSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x4fa93366) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x4fa93366;
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

void NotesSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_200_update)
HXLINE( 201)		if (this->changingNote) {
HXLINE( 202)			if ((this->holdTime < ((Float)0.5))) {
HXLINE( 203)				if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 204)					this->updateValue(-1);
HXLINE( 205)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 205)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 206)					if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 207)						this->updateValue(1);
HXLINE( 208)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 208)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            					else {
HXLINE( 209)						if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 210)							this->resetValue(::NotesSubstate_obj::curSelected,::NotesSubstate_obj::typeSelected);
HXLINE( 211)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 211)							_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
            					}
            				}
HXLINE( 213)				bool _hx_tmp;
HXDLIN( 213)				if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 213)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            				}
            				else {
HXLINE( 213)					_hx_tmp = true;
            				}
HXDLIN( 213)				if (_hx_tmp) {
HXLINE( 214)					this->holdTime = ( (Float)(0) );
            				}
            				else {
HXLINE( 215)					bool _hx_tmp;
HXDLIN( 215)					if (!(::PlayerSettings_obj::player1->controls->_ui_left->check())) {
HXLINE( 215)						_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_right->check();
            					}
            					else {
HXLINE( 215)						_hx_tmp = true;
            					}
HXDLIN( 215)					if (_hx_tmp) {
HXLINE( 216)						 ::NotesSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 216)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            			}
            			else {
HXLINE( 219)				Float add = ( (Float)(90) );
HXLINE( 220)				switch((int)(::NotesSubstate_obj::typeSelected)){
            					case (int)1: case (int)2: {
HXLINE( 221)						add = ( (Float)(50) );
            					}
            					break;
            				}
HXLINE( 223)				if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 224)					this->updateValue((elapsed * -(add)));
            				}
            				else {
HXLINE( 225)					if (::PlayerSettings_obj::player1->controls->_ui_right->check()) {
HXLINE( 226)						this->updateValue((elapsed * add));
            					}
            				}
HXLINE( 228)				bool _hx_tmp;
HXDLIN( 228)				if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 228)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            				}
            				else {
HXLINE( 228)					_hx_tmp = true;
            				}
HXDLIN( 228)				if (_hx_tmp) {
HXLINE( 229)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 229)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 230)					this->holdTime = ( (Float)(0) );
            				}
            			}
            		}
            		else {
HXLINE( 234)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 235)				this->changeSelection(-1);
HXLINE( 236)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 236)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 238)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 239)				this->changeSelection(1);
HXLINE( 240)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 240)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 242)			if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 243)				this->changeType(-1);
HXLINE( 244)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 244)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 246)			if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 247)				this->changeType(1);
HXLINE( 248)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 248)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 250)			if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 251)				{
HXLINE( 252)					this->resetValue(::NotesSubstate_obj::curSelected,0);
HXDLIN( 252)					this->resetValue(::NotesSubstate_obj::curSelected,1);
HXDLIN( 252)					this->resetValue(::NotesSubstate_obj::curSelected,2);
            				}
HXLINE( 254)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 254)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 256)			bool _hx_tmp;
HXDLIN( 256)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 256)				_hx_tmp = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 256)				_hx_tmp = false;
            			}
HXDLIN( 256)			if (_hx_tmp) {
HXLINE( 257)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 257)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 258)				this->changingNote = true;
HXLINE( 259)				this->holdTime = ( (Float)(0) );
HXLINE( 260)				{
HXLINE( 260)					int _g = 0;
HXDLIN( 260)					int _g1 = this->grpNumbers->length;
HXDLIN( 260)					while((_g < _g1)){
HXLINE( 260)						_g = (_g + 1);
HXDLIN( 260)						int i = (_g - 1);
HXLINE( 261)						 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 262)						item->set_alpha(( (Float)(0) ));
HXLINE( 263)						if ((((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected) == i)) {
HXLINE( 264)							item->set_alpha(( (Float)(1) ));
            						}
            					}
            				}
HXLINE( 267)				{
HXLINE( 267)					int _g2 = 0;
HXDLIN( 267)					int _g3 = this->grpNotes->length;
HXDLIN( 267)					while((_g2 < _g3)){
HXLINE( 267)						_g2 = (_g2 + 1);
HXDLIN( 267)						int i = (_g2 - 1);
HXLINE( 268)						 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 269)						item->set_alpha(( (Float)(0) ));
HXLINE( 270)						if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 271)							item->set_alpha(( (Float)(1) ));
            						}
            					}
            				}
HXLINE( 274)				this->super::update(elapsed);
HXLINE( 275)				return;
            			}
            		}
HXLINE( 279)		Float lerpVal = ::CoolUtil_obj::boundTo((elapsed * ((Float)9.6)),( (Float)(0) ),( (Float)(1) ));
HXLINE( 280)		{
HXLINE( 280)			int _g = 0;
HXDLIN( 280)			int _g1 = this->grpNotes->length;
HXDLIN( 280)			while((_g < _g1)){
HXLINE( 280)				_g = (_g + 1);
HXDLIN( 280)				int i = (_g - 1);
HXLINE( 281)				 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 282)				Float intendedPos = ( (Float)((this->posX - 70)) );
HXLINE( 283)				if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 284)					Float a = item->x;
HXDLIN( 284)					item->set_x((a + (lerpVal * ((intendedPos + 100) - a))));
            				}
            				else {
HXLINE( 286)					Float a = item->x;
HXDLIN( 286)					item->set_x((a + (lerpVal * (intendedPos - a))));
            				}
HXLINE( 288)				{
HXLINE( 288)					{
HXLINE( 289)						 ::Alphabet item2 = Dynamic( this->grpNumbers->members->__get((i * 3))).StaticCast<  ::Alphabet >();
HXLINE( 290)						item2->set_x((((item->x + 265) + (225 * ::hx::Mod(0,3))) - (( (Float)((30 * item2->lettersArray->length)) ) / ( (Float)(2) ))));
HXLINE( 291)						if ((::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0) < 0)) {
HXLINE( 292)							item2->set_x((item2->x - ( (Float)(20) )));
            						}
            					}
HXLINE( 288)					{
HXLINE( 289)						 ::Alphabet item21 = Dynamic( this->grpNumbers->members->__get(((i * 3) + 1))).StaticCast<  ::Alphabet >();
HXLINE( 290)						item21->set_x((((item->x + 265) + (225 * ::hx::Mod(1,3))) - (( (Float)((30 * item21->lettersArray->length)) ) / ( (Float)(2) ))));
HXLINE( 291)						if ((::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1) < 0)) {
HXLINE( 292)							item21->set_x((item21->x - ( (Float)(20) )));
            						}
            					}
HXLINE( 288)					{
HXLINE( 289)						 ::Alphabet item22 = Dynamic( this->grpNumbers->members->__get(((i * 3) + 2))).StaticCast<  ::Alphabet >();
HXLINE( 290)						item22->set_x((((item->x + 265) + (225 * ::hx::Mod(2,3))) - (( (Float)((30 * item22->lettersArray->length)) ) / ( (Float)(2) ))));
HXLINE( 291)						if ((::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2) < 0)) {
HXLINE( 292)							item22->set_x((item22->x - ( (Float)(20) )));
            						}
            					}
            				}
HXLINE( 296)				if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 297)					this->hsvText->setPosition((item->x + this->hsvTextOffsets->__get(0)),(item->y - this->hsvTextOffsets->__get(1)));
            				}
            			}
            		}
HXLINE( 301)		bool _hx_tmp;
HXDLIN( 301)		if (!(::PlayerSettings_obj::player1->controls->_back->check())) {
HXLINE( 301)			if (this->changingNote) {
HXLINE( 301)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_accept->check();
            			}
            			else {
HXLINE( 301)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 301)			_hx_tmp = true;
            		}
HXDLIN( 301)		if (_hx_tmp) {
HXLINE( 302)			this->changeSelection(null());
HXLINE( 303)			if (!(this->changingNote)) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::Alphabet spr){
            					HX_STACKFRAME(&_hx_pos_30acc222447c2979_305_update)
HXLINE( 305)					spr->set_alpha(( (Float)(0) ));
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            				void _hx_run( ::flixel::FlxSprite spr){
            					HX_STACKFRAME(&_hx_pos_30acc222447c2979_308_update)
HXLINE( 308)					spr->set_alpha(( (Float)(0) ));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 304)				this->grpNumbers->forEachAlive( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 307)				this->grpNotes->forEachAlive( ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 310)				this->close();
            			}
HXLINE( 312)			this->changingNote = false;
HXLINE( 313)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 313)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 316)		if ((this->nextAccept > 0)) {
HXLINE( 317)			 ::NotesSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 319)		this->super::update(elapsed);
            	}


void NotesSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_322_changeSelection)
HXLINE( 323)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::NotesSubstate >();
HXDLIN( 323)		::NotesSubstate_obj::curSelected = (::NotesSubstate_obj::curSelected + change);
HXLINE( 324)		if ((::NotesSubstate_obj::curSelected < 0)) {
HXLINE( 325)			::NotesSubstate_obj::curSelected = (::ClientPrefs_obj::arrowHSV->length - 1);
            		}
HXLINE( 326)		if ((::NotesSubstate_obj::curSelected >= ::ClientPrefs_obj::arrowHSV->length)) {
HXLINE( 327)			::NotesSubstate_obj::curSelected = 0;
            		}
HXLINE( 329)		this->curValue = ( (Float)(::ClientPrefs_obj::arrowHSV->__get(::NotesSubstate_obj::curSelected).StaticCast< ::Array< int > >()->__get(::NotesSubstate_obj::typeSelected)) );
HXLINE( 330)		this->updateValue(null());
HXLINE( 332)		{
HXLINE( 332)			int _g = 0;
HXDLIN( 332)			int _g1 = this->grpNumbers->length;
HXDLIN( 332)			while((_g < _g1)){
HXLINE( 332)				_g = (_g + 1);
HXDLIN( 332)				int i = (_g - 1);
HXLINE( 333)				 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 334)				item->set_alpha(((Float)0.6));
HXLINE( 335)				if ((((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected) == i)) {
HXLINE( 336)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 339)		{
HXLINE( 339)			int _g2 = 0;
HXDLIN( 339)			int _g3 = this->grpNotes->length;
HXDLIN( 339)			while((_g2 < _g3)){
HXLINE( 339)				_g2 = (_g2 + 1);
HXDLIN( 339)				int i = (_g2 - 1);
HXLINE( 340)				 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 341)				item->set_alpha(((Float)0.6));
HXLINE( 342)				item->scale->set(1,1);
HXLINE( 343)				if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 344)					item->set_alpha(( (Float)(1) ));
HXLINE( 345)					item->scale->set(((Float)1.2),((Float)1.2));
HXLINE( 346)					this->hsvText->setPosition((item->x + this->hsvTextOffsets->__get(0)),(item->y - this->hsvTextOffsets->__get(1)));
            				}
            			}
            		}
HXLINE( 349)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 349)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubstate_obj,changeSelection,(void))

void NotesSubstate_obj::changeType(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_352_changeType)
HXLINE( 353)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::NotesSubstate >();
HXDLIN( 353)		::NotesSubstate_obj::typeSelected = (::NotesSubstate_obj::typeSelected + change);
HXLINE( 354)		if ((::NotesSubstate_obj::typeSelected < 0)) {
HXLINE( 355)			::NotesSubstate_obj::typeSelected = 2;
            		}
HXLINE( 356)		if ((::NotesSubstate_obj::typeSelected > 2)) {
HXLINE( 357)			::NotesSubstate_obj::typeSelected = 0;
            		}
HXLINE( 359)		this->curValue = ( (Float)(::ClientPrefs_obj::arrowHSV->__get(::NotesSubstate_obj::curSelected).StaticCast< ::Array< int > >()->__get(::NotesSubstate_obj::typeSelected)) );
HXLINE( 360)		this->updateValue(null());
HXLINE( 362)		{
HXLINE( 362)			int _g = 0;
HXDLIN( 362)			int _g1 = this->grpNumbers->length;
HXDLIN( 362)			while((_g < _g1)){
HXLINE( 362)				_g = (_g + 1);
HXDLIN( 362)				int i = (_g - 1);
HXLINE( 363)				 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 364)				item->set_alpha(((Float)0.6));
HXLINE( 365)				if ((((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected) == i)) {
HXLINE( 366)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubstate_obj,changeType,(void))

void NotesSubstate_obj::resetValue(int selected,int type){
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_371_resetValue)
HXLINE( 372)		this->curValue = ( (Float)(0) );
HXLINE( 373)		::ClientPrefs_obj::arrowHSV->__get(selected).StaticCast< ::Array< int > >()[type] = 0;
HXLINE( 374)		switch((int)(type)){
            			case (int)0: {
HXLINE( 375)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_hue(( (Float)(0) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 376)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_saturation(( (Float)(0) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 377)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_brightness(( (Float)(0) ));
            			}
            			break;
            		}
HXLINE( 379)		Dynamic( this->grpNumbers->members->__get(((selected * 3) + type))).StaticCast<  ::Alphabet >()->changeText(HX_("0",30,00,00,00),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(NotesSubstate_obj,resetValue,(void))

void NotesSubstate_obj::updateValue(::hx::Null< Float >  __o_change){
            		Float change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_381_updateValue)
HXLINE( 382)		 ::NotesSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 382)		_hx_tmp->curValue = (_hx_tmp->curValue + change);
HXLINE( 383)		int roundedValue = ::Math_obj::round(this->curValue);
HXLINE( 384)		Float max = ( (Float)(180) );
HXLINE( 385)		switch((int)(::NotesSubstate_obj::typeSelected)){
            			case (int)1: case (int)2: {
HXLINE( 386)				max = ( (Float)(100) );
            			}
            			break;
            		}
HXLINE( 389)		if ((roundedValue < -(max))) {
HXLINE( 390)			this->curValue = -(max);
            		}
            		else {
HXLINE( 391)			if ((roundedValue > max)) {
HXLINE( 392)				this->curValue = max;
            			}
            		}
HXLINE( 394)		roundedValue = ::Math_obj::round(this->curValue);
HXLINE( 395)		::ClientPrefs_obj::arrowHSV->__get(::NotesSubstate_obj::curSelected).StaticCast< ::Array< int > >()[::NotesSubstate_obj::typeSelected] = roundedValue;
HXLINE( 397)		switch((int)(::NotesSubstate_obj::typeSelected)){
            			case (int)0: {
HXLINE( 398)				this->shaderArray->__get(::NotesSubstate_obj::curSelected).StaticCast<  ::ColorSwap >()->set_hue((( (Float)(roundedValue) ) / ( (Float)(360) )));
            			}
            			break;
            			case (int)1: {
HXLINE( 399)				this->shaderArray->__get(::NotesSubstate_obj::curSelected).StaticCast<  ::ColorSwap >()->set_saturation((( (Float)(roundedValue) ) / ( (Float)(100) )));
            			}
            			break;
            			case (int)2: {
HXLINE( 400)				this->shaderArray->__get(::NotesSubstate_obj::curSelected).StaticCast<  ::ColorSwap >()->set_brightness((( (Float)(roundedValue) ) / ( (Float)(100) )));
            			}
            			break;
            		}
HXLINE( 402)		 ::Alphabet _hx_tmp1 = Dynamic( this->grpNumbers->members->__get(((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected))).StaticCast<  ::Alphabet >();
HXDLIN( 402)		_hx_tmp1->changeText(::Std_obj::string(roundedValue),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubstate_obj,updateValue,(void))

int NotesSubstate_obj::curSelected;

int NotesSubstate_obj::typeSelected;


::hx::ObjectPtr< NotesSubstate_obj > NotesSubstate_obj::__new() {
	::hx::ObjectPtr< NotesSubstate_obj > __this = new NotesSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NotesSubstate_obj > NotesSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NotesSubstate_obj *__this = (NotesSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotesSubstate_obj), true, "NotesSubstate"));
	*(void **)__this = NotesSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NotesSubstate_obj::NotesSubstate_obj()
{
}

void NotesSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NotesSubstate);
	HX_MARK_MEMBER_NAME(grpNumbers,"grpNumbers");
	HX_MARK_MEMBER_NAME(grpNotes,"grpNotes");
	HX_MARK_MEMBER_NAME(shaderArray,"shaderArray");
	HX_MARK_MEMBER_NAME(curValue,"curValue");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(hsvText,"hsvText");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(posX,"posX");
	HX_MARK_MEMBER_NAME(changingNote,"changingNote");
	HX_MARK_MEMBER_NAME(hsvTextOffsets,"hsvTextOffsets");
	 ::MusicBeatSubstate_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NotesSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpNumbers,"grpNumbers");
	HX_VISIT_MEMBER_NAME(grpNotes,"grpNotes");
	HX_VISIT_MEMBER_NAME(shaderArray,"shaderArray");
	HX_VISIT_MEMBER_NAME(curValue,"curValue");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(hsvText,"hsvText");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(posX,"posX");
	HX_VISIT_MEMBER_NAME(changingNote,"changingNote");
	HX_VISIT_MEMBER_NAME(hsvTextOffsets,"hsvTextOffsets");
	 ::MusicBeatSubstate_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NotesSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { return ::hx::Val( posX ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hsvText") ) { return ::hx::Val( hsvText ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpNotes") ) { return ::hx::Val( grpNotes ); }
		if (HX_FIELD_EQ(inName,"curValue") ) { return ::hx::Val( curValue ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpNumbers") ) { return ::hx::Val( grpNumbers ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"changeType") ) { return ::hx::Val( changeType_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetValue") ) { return ::hx::Val( resetValue_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderArray") ) { return ::hx::Val( shaderArray ); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return ::hx::Val( updateValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changingNote") ) { return ::hx::Val( changingNote ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hsvTextOffsets") ) { return ::hx::Val( hsvTextOffsets ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NotesSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"typeSelected") ) { outValue = ( typeSelected ); return true; }
	}
	return false;
}

::hx::Val NotesSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { posX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hsvText") ) { hsvText=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpNotes") ) { grpNotes=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curValue") ) { curValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpNumbers") ) { grpNumbers=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderArray") ) { shaderArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changingNote") ) { changingNote=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hsvTextOffsets") ) { hsvTextOffsets=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NotesSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"typeSelected") ) { typeSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void NotesSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpNumbers",25,7c,95,ca));
	outFields->push(HX_("grpNotes",1c,82,cb,82));
	outFields->push(HX_("shaderArray",34,18,bc,fc));
	outFields->push(HX_("curValue",d1,79,66,79));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("hsvText",58,29,de,08));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("posX",44,84,5c,4a));
	outFields->push(HX_("changingNote",3f,d5,59,d6));
	outFields->push(HX_("hsvTextOffsets",08,63,36,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NotesSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(NotesSubstate_obj,grpNumbers),HX_("grpNumbers",25,7c,95,ca)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(NotesSubstate_obj,grpNotes),HX_("grpNotes",1c,82,cb,82)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(NotesSubstate_obj,shaderArray),HX_("shaderArray",34,18,bc,fc)},
	{::hx::fsFloat,(int)offsetof(NotesSubstate_obj,curValue),HX_("curValue",d1,79,66,79)},
	{::hx::fsFloat,(int)offsetof(NotesSubstate_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(NotesSubstate_obj,hsvText),HX_("hsvText",58,29,de,08)},
	{::hx::fsInt,(int)offsetof(NotesSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsInt,(int)offsetof(NotesSubstate_obj,posX),HX_("posX",44,84,5c,4a)},
	{::hx::fsBool,(int)offsetof(NotesSubstate_obj,changingNote),HX_("changingNote",3f,d5,59,d6)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(NotesSubstate_obj,hsvTextOffsets),HX_("hsvTextOffsets",08,63,36,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NotesSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &NotesSubstate_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(void *) &NotesSubstate_obj::typeSelected,HX_("typeSelected",35,23,d0,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NotesSubstate_obj_sMemberFields[] = {
	HX_("grpNumbers",25,7c,95,ca),
	HX_("grpNotes",1c,82,cb,82),
	HX_("shaderArray",34,18,bc,fc),
	HX_("curValue",d1,79,66,79),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("hsvText",58,29,de,08),
	HX_("nextAccept",5b,44,38,c0),
	HX_("posX",44,84,5c,4a),
	HX_("changingNote",3f,d5,59,d6),
	HX_("hsvTextOffsets",08,63,36,51),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeType",4a,28,52,27),
	HX_("resetValue",22,b7,54,1a),
	HX_("updateValue",a8,e8,50,17),
	::String(null()) };

static void NotesSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NotesSubstate_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(NotesSubstate_obj::typeSelected,"typeSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NotesSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotesSubstate_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(NotesSubstate_obj::typeSelected,"typeSelected");
};

#endif

::hx::Class NotesSubstate_obj::__mClass;

static ::String NotesSubstate_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("typeSelected",35,23,d0,98),
	::String(null())
};

void NotesSubstate_obj::__register()
{
	NotesSubstate_obj _hx_dummy;
	NotesSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("NotesSubstate",d2,ed,f1,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NotesSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &NotesSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = NotesSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NotesSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotesSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotesSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NotesSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotesSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotesSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NotesSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_139_boot)
HXDLIN( 139)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_140_boot)
HXDLIN( 140)		typeSelected = 0;
            	}
}

