#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_DialogueBoxPsych
#include <DialogueBoxPsych.h>
#endif
#ifndef INCLUDED_DialogueCharacter
#include <DialogueCharacter.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_128129519e640548_145_new,"DialogueBoxPsych","new",0x1a49b57a,"DialogueBoxPsych.new","DialogueBoxPsych.hx",145,0xf6ef1736)
static const ::String _hx_array_data_c9b73088_1[] = {
	HX_("normal",27,72,69,30),HX_("angry",21,49,e2,22),
};
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_214_spawnCharacters,"DialogueBoxPsych","spawnCharacters",0xbe2056df,"DialogueBoxPsych.spawnCharacters","DialogueBoxPsych.hx",214,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_268_update,"DialogueBoxPsych","update",0xc33c4d2f,"DialogueBoxPsych.update","DialogueBoxPsych.hx",268,0xf6ef1736)
static const ::String _hx_array_data_c9b73088_18[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
static const ::String _hx_array_data_c9b73088_19[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_443_startNextDialog,"DialogueBoxPsych","startNextDialog",0x95e56137,"DialogueBoxPsych.startNextDialog","DialogueBoxPsych.hx",443,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_512_parseDialogue,"DialogueBoxPsych","parseDialogue",0xf7806e05,"DialogueBoxPsych.parseDialogue","DialogueBoxPsych.hx",512,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_517_updateBoxOffsets,"DialogueBoxPsych","updateBoxOffsets",0xb38f5cc4,"DialogueBoxPsych.updateBoxOffsets","DialogueBoxPsych.hx",517,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_210_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",210,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_211_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",211,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_212_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",212,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_262_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",262,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_263_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",263,0xf6ef1736)

void DialogueBoxPsych_obj::__construct( ::Dynamic dialogueList,::String song){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_145_new)
HXLINE( 441)		this->lastBoxType = HX_("",00,00,00,00);
HXLINE( 440)		this->lastCharacter = -1;
HXLINE( 266)		this->ignoreThisFrame = true;
HXLINE( 265)		this->daText = null();
HXLINE( 264)		this->scrollSpeed = 4500;
HXLINE( 208)		this->dialogueEnded = false;
HXLINE( 207)		this->dialogueStarted = false;
HXLINE( 162)		this->textBoxTypes = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_1,2);
HXLINE( 160)		this->offsetPos = ((Float)-600);
HXLINE( 159)		this->currentText = 0;
HXLINE( 157)		this->arrayCharacters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 155)		this->textToType = HX_("",00,00,00,00);
HXLINE( 153)		this->bgFade = null();
HXLINE( 152)		this->skipDialogueThing = null();
HXLINE( 151)		this->nextDialogueThing = null();
HXLINE( 148)		this->dialogueList = null();
HXLINE( 167)		super::__construct(null(),null(),null());
HXLINE( 169)		bool _hx_tmp;
HXDLIN( 169)		if (::hx::IsNotNull( song )) {
HXLINE( 169)			_hx_tmp = (song != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 169)			_hx_tmp = false;
            		}
HXDLIN( 169)		if (_hx_tmp) {
HXLINE( 170)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 170)			::String library = null();
HXDLIN( 170)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + song) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE( 171)			{
HXLINE( 171)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 171)				 ::Dynamic onComplete = null();
HXDLIN( 171)				if (::hx::IsNull( _this->_channel )) {
HXLINE( 171)					_this->play(null(),null(),null());
            				}
HXDLIN( 171)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 171)					_this->fadeTween->cancel();
            				}
HXDLIN( 171)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),2, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
            		}
HXLINE( 174)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-500,-500,null());
HXDLIN( 174)		this->bgFade = _hx_tmp1->makeGraphic((::flixel::FlxG_obj::width * 2),(::flixel::FlxG_obj::height * 2),-1,null(),null());
HXLINE( 175)		this->bgFade->scrollFactor->set(null(),null());
HXLINE( 176)		this->bgFade->set_visible(true);
HXLINE( 177)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE( 178)		this->add(this->bgFade);
HXLINE( 180)		this->dialogueList = dialogueList;
HXLINE( 181)		this->spawnCharacters();
HXLINE( 183)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,70,370,null());
HXLINE( 184)		 ::flixel::FlxSprite _hx_tmp2 = this->box;
HXDLIN( 184)		::String library = null();
HXDLIN( 184)		 ::Dynamic _hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 184)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 185)		this->box->scrollFactor->set(null(),null());
HXLINE( 186)		this->box->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 187)		this->box->animation->addByPrefix(HX_("normal",27,72,69,30),HX_("dialogue0",18,48,13,fa),24,null(),null(),null());
HXLINE( 188)		this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("dialogue0",18,48,13,fa),24,false,null(),null());
HXLINE( 189)		this->box->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("dialogue scream",f7,35,c2,e7),24,null(),null(),null());
HXLINE( 190)		this->box->animation->addByPrefix(HX_("angryOpen",8b,1d,01,b1),HX_("dialogue scream",f7,35,c2,e7),24,false,null(),null());
HXLINE( 191)		this->box->animation->addByPrefix(HX_("center-normal",df,c0,ab,9c),HX_("dialogue0",18,48,13,fa),24,null(),null(),null());
HXLINE( 192)		this->box->animation->addByPrefix(HX_("center-normalOpen",49,4c,74,58),HX_("dialogue0",18,48,13,fa),24,false,null(),null());
HXLINE( 193)		this->box->animation->addByPrefix(HX_("center-angry",69,39,92,b0),HX_("dialogue scream",f7,35,c2,e7),24,null(),null(),null());
HXLINE( 194)		this->box->animation->addByPrefix(HX_("center-angryOpen",d3,d1,42,e2),HX_("dialogue scream",f7,35,c2,e7),24,false,null(),null());
HXLINE( 195)		this->box->animation->play(HX_("normal",27,72,69,30),true,null(),null());
HXLINE( 196)		this->box->set_visible(false);
HXLINE( 197)		 ::flixel::FlxSprite _hx_tmp4 = this->box;
HXDLIN( 197)		_hx_tmp4->setGraphicSize(::Std_obj::_hx_int((this->box->get_width() * ((Float)0.6))),null());
HXLINE( 198)		 ::flixel::FlxSprite fh = this->box;
HXDLIN( 198)		fh->set_x((fh->x - ( (Float)(350) )));
HXLINE( 199)		 ::flixel::FlxSprite fh1 = this->box;
HXDLIN( 199)		fh1->set_y((fh1->y - ( (Float)(100) )));
HXLINE( 200)		this->box->set_flipX(true);
HXLINE( 201)		this->box->updateHitbox();
HXLINE( 202)		this->add(this->box);
HXLINE( 204)		this->startNextDialog();
            	}

Dynamic DialogueBoxPsych_obj::__CreateEmpty() { return new DialogueBoxPsych_obj; }

void *DialogueBoxPsych_obj::_hx_vtable = 0;

Dynamic DialogueBoxPsych_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBoxPsych_obj > _hx_result = new DialogueBoxPsych_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBoxPsych_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7d24723c || inClassId==(int)0x7dab0655;
	}
}

void DialogueBoxPsych_obj::spawnCharacters(){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_214_spawnCharacters)
HXLINE( 216)		 ::haxe::ds::StringMap charsMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 220)		{
HXLINE( 220)			int _g = 0;
HXDLIN( 220)			int _g1 = ( (::Array< ::Dynamic>)(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic)) )->length;
HXDLIN( 220)			while((_g < _g1)){
HXLINE( 220)				_g = (_g + 1);
HXDLIN( 220)				int i = (_g - 1);
HXLINE( 221)				if (::hx::IsNotNull(  ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(i) )) {
HXLINE( 222)					::String charToAdd = ( (::String)( ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("portrait",5b,21,af,b8),::hx::paccDynamic)) );
HXLINE( 223)					bool _hx_tmp;
HXDLIN( 223)					if (charsMap->exists(charToAdd)) {
HXLINE( 223)						_hx_tmp = !(( (bool)(charsMap->get(charToAdd)) ));
            					}
            					else {
HXLINE( 223)						_hx_tmp = true;
            					}
HXDLIN( 223)					if (_hx_tmp) {
HXLINE( 224)						charsMap->set(charToAdd,true);
            					}
            				}
            			}
            		}
HXLINE( 229)		{
HXLINE( 229)			 ::Dynamic individualChar = charsMap->keys();
HXDLIN( 229)			while(( (bool)(individualChar->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 229)				::String individualChar1 = ( (::String)(individualChar->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 230)				Float x = ::DialogueBoxPsych_obj::LEFT_CHAR_X;
HXLINE( 231)				Float y = ::DialogueBoxPsych_obj::DEFAULT_CHAR_Y;
HXLINE( 232)				 ::DialogueCharacter _hx_char =  ::DialogueCharacter_obj::__alloc( HX_CTX ,(x + this->offsetPos),y,individualChar1);
HXLINE( 234)				Float _hx_tmp = _hx_char->get_width();
HXDLIN( 234)				_hx_char->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp * ::DialogueCharacter_obj::DEFAULT_SCALE) * ( (Float)(_hx_char->jsonFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) ))),null());
HXLINE( 235)				_hx_char->updateHitbox();
HXLINE( 236)				_hx_char->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 237)				_hx_char->scrollFactor->set(null(),null());
HXLINE( 238)				_hx_char->set_alpha(((Float)0.00001));
HXLINE( 239)				this->add(_hx_char);
HXLINE( 241)				bool saveY = false;
HXLINE( 242)				::String _hx_switch_0 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 244)					_hx_char->set_x((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )));
HXLINE( 245)					Float char1 = _hx_char->x;
HXDLIN( 245)					_hx_char->set_x((char1 - (_hx_char->get_width() / ( (Float)(2) ))));
HXLINE( 246)					y = _hx_char->y;
HXLINE( 247)					_hx_char->set_y(( (Float)((::flixel::FlxG_obj::height + 50)) ));
HXLINE( 248)					saveY = true;
HXLINE( 243)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 250)					int x1 = ::flixel::FlxG_obj::width;
HXDLIN( 250)					Float x2 = (( (Float)(x1) ) - _hx_char->get_width());
HXDLIN( 250)					x = (x2 + ::DialogueBoxPsych_obj::RIGHT_CHAR_X);
HXLINE( 251)					_hx_char->set_x((x - this->offsetPos));
HXLINE( 249)					goto _hx_goto_4;
            				}
            				_hx_goto_4:;
HXLINE( 253)				x = (x +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0));
HXLINE( 254)				y = (y +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1));
HXLINE( 255)				_hx_char->set_x((_hx_char->x +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0)));
HXLINE( 256)				_hx_char->set_y((_hx_char->y +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1)));
HXLINE( 257)				Float _hx_tmp1;
HXDLIN( 257)				if (saveY) {
HXLINE( 257)					_hx_tmp1 = y;
            				}
            				else {
HXLINE( 257)					_hx_tmp1 = x;
            				}
HXDLIN( 257)				_hx_char->startingPos = _hx_tmp1;
HXLINE( 258)				this->arrayCharacters->push(_hx_char);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,spawnCharacters,(void))

void DialogueBoxPsych_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_268_update)
HXLINE( 269)		if (this->ignoreThisFrame) {
HXLINE( 270)			this->ignoreThisFrame = false;
HXLINE( 271)			this->super::update(elapsed);
HXLINE( 272)			return;
            		}
HXLINE( 275)		if (!(this->dialogueEnded)) {
HXLINE( 276)			 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 276)			fh->set_alpha((fh->alpha + (((Float)0.5) * elapsed)));
HXLINE( 277)			if ((this->bgFade->alpha > ((Float)0.5))) {
HXLINE( 277)				this->bgFade->set_alpha(((Float)0.5));
            			}
HXLINE( 280)			bool justTouched = false;
HXLINE( 282)			{
HXLINE( 282)				int _g = 0;
HXDLIN( 282)				::Array< ::Dynamic> _g1 = ::flixel::FlxG_obj::touches->list;
HXDLIN( 282)				while((_g < _g1->length)){
HXLINE( 282)					 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN( 282)					_g = (_g + 1);
HXLINE( 284)					justTouched = false;
HXLINE( 286)					if ((touch->input->current == -1)) {
HXLINE( 287)						justTouched = true;
            					}
            				}
            			}
HXLINE( 291)			bool _hx_tmp;
HXDLIN( 291)			if (!(( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY())) {
HXLINE( 291)				_hx_tmp = justTouched;
            			}
            			else {
HXLINE( 291)				_hx_tmp = true;
            			}
HXDLIN( 291)			if (_hx_tmp) {
HXLINE( 292)				if (!(this->daText->finishedText)) {
HXLINE( 293)					if (::hx::IsNotNull( this->daText )) {
HXLINE( 294)						this->daText->killTheTimer();
HXLINE( 295)						this->daText->kill();
HXLINE( 296)						this->remove(this->daText,null());
HXLINE( 297)						this->daText->destroy();
            					}
HXLINE( 299)					this->daText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(::DialogueBoxPsych_obj::DEFAULT_TEXT_X) ),( (Float)(::DialogueBoxPsych_obj::DEFAULT_TEXT_Y) ),this->textToType,false,true,((Float)0.0),((Float)0.7));
HXLINE( 300)					this->add(this->daText);
HXLINE( 302)					if (::hx::IsNotNull( this->skipDialogueThing )) {
HXLINE( 303)						this->skipDialogueThing();
            					}
            				}
            				else {
HXLINE( 305)					if ((this->currentText >= ( (::Array< ::Dynamic>)(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic)) )->length)) {
HXLINE( 306)						this->dialogueEnded = true;
HXLINE( 307)						{
HXLINE( 307)							int _g = 0;
HXDLIN( 307)							int _g1 = this->textBoxTypes->length;
HXDLIN( 307)							while((_g < _g1)){
HXLINE( 307)								_g = (_g + 1);
HXDLIN( 307)								int i = (_g - 1);
HXLINE( 308)								::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_18,2);
HXLINE( 309)								::String animName = this->box->animation->_curAnim->name;
HXLINE( 310)								{
HXLINE( 310)									int _g1 = 0;
HXDLIN( 310)									int _g2 = checkArray->length;
HXDLIN( 310)									while((_g1 < _g2)){
HXLINE( 310)										_g1 = (_g1 + 1);
HXDLIN( 310)										int j = (_g1 - 1);
HXLINE( 311)										bool _hx_tmp;
HXDLIN( 311)										if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 311)											_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            										}
            										else {
HXLINE( 311)											_hx_tmp = true;
            										}
HXDLIN( 311)										if (_hx_tmp) {
HXLINE( 312)											this->box->animation->play(((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)),true,null(),null());
            										}
            									}
            								}
            							}
            						}
HXLINE( 317)						this->box->animation->_curAnim->set_curFrame((this->box->animation->_curAnim->frames->length - 1));
HXLINE( 318)						this->box->animation->_curAnim->reverse();
HXLINE( 319)						this->daText->kill();
HXLINE( 320)						this->remove(this->daText,null());
HXLINE( 321)						this->daText->destroy();
HXLINE( 322)						this->daText = null();
HXLINE( 323)						::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
HXLINE( 324)						{
HXLINE( 324)							 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 324)							 ::Dynamic To = 0;
HXDLIN( 324)							 ::Dynamic onComplete = null();
HXDLIN( 324)							if (::hx::IsNull( To )) {
HXLINE( 324)								To = 0;
            							}
HXDLIN( 324)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 324)								_this->fadeTween->cancel();
            							}
HXDLIN( 324)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),1, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
            					}
            					else {
HXLINE( 326)						this->startNextDialog();
            					}
            				}
HXLINE( 328)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 328)				_hx_tmp->play(::Paths_obj::sound(HX_("dialogueClose",80,e3,49,e3),null()),null(),null(),null(),null(),null());
            			}
            			else {
HXLINE( 329)				if (this->daText->finishedText) {
HXLINE( 330)					 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(this->lastCharacter).StaticCast<  ::DialogueCharacter >();
HXLINE( 331)					bool _hx_tmp;
HXDLIN( 331)					bool _hx_tmp1;
HXDLIN( 331)					bool _hx_tmp2;
HXDLIN( 331)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 331)						_hx_tmp2 = ::hx::IsNotNull( _hx_char->animation->_curAnim );
            					}
            					else {
HXLINE( 331)						_hx_tmp2 = false;
            					}
HXDLIN( 331)					if (_hx_tmp2) {
HXLINE( 331)						_hx_tmp1 = _hx_char->animationIsLoop();
            					}
            					else {
HXLINE( 331)						_hx_tmp1 = false;
            					}
HXDLIN( 331)					if (_hx_tmp1) {
HXLINE( 331)						_hx_tmp = _hx_char->animation->get_finished();
            					}
            					else {
HXLINE( 331)						_hx_tmp = false;
            					}
HXDLIN( 331)					if (_hx_tmp) {
HXLINE( 332)						_hx_char->playAnim(_hx_char->animation->_curAnim->name,true);
            					}
            				}
            				else {
HXLINE( 335)					 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(this->lastCharacter).StaticCast<  ::DialogueCharacter >();
HXLINE( 336)					bool _hx_tmp;
HXDLIN( 336)					bool _hx_tmp1;
HXDLIN( 336)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 336)						_hx_tmp1 = ::hx::IsNotNull( _hx_char->animation->_curAnim );
            					}
            					else {
HXLINE( 336)						_hx_tmp1 = false;
            					}
HXDLIN( 336)					if (_hx_tmp1) {
HXLINE( 336)						_hx_tmp = _hx_char->animation->get_finished();
            					}
            					else {
HXLINE( 336)						_hx_tmp = false;
            					}
HXDLIN( 336)					if (_hx_tmp) {
HXLINE( 337)						_hx_char->animation->_curAnim->restart();
            					}
            				}
            			}
HXLINE( 341)			if (this->box->animation->_curAnim->finished) {
HXLINE( 342)				{
HXLINE( 342)					int _g = 0;
HXDLIN( 342)					int _g1 = this->textBoxTypes->length;
HXDLIN( 342)					while((_g < _g1)){
HXLINE( 342)						_g = (_g + 1);
HXDLIN( 342)						int i = (_g - 1);
HXLINE( 343)						::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_19,2);
HXLINE( 344)						::String animName = this->box->animation->_curAnim->name;
HXLINE( 345)						{
HXLINE( 345)							int _g1 = 0;
HXDLIN( 345)							int _g2 = checkArray->length;
HXDLIN( 345)							while((_g1 < _g2)){
HXLINE( 345)								_g1 = (_g1 + 1);
HXDLIN( 345)								int j = (_g1 - 1);
HXLINE( 346)								bool _hx_tmp;
HXDLIN( 346)								if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 346)									_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            								}
            								else {
HXLINE( 346)									_hx_tmp = true;
            								}
HXDLIN( 346)								if (_hx_tmp) {
HXLINE( 347)									this->box->animation->play((checkArray->__get(j) + this->textBoxTypes->__get(i)),true,null(),null());
            								}
            							}
            						}
            					}
            				}
HXLINE( 351)				::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
            			}
HXLINE( 354)			bool _hx_tmp1;
HXDLIN( 354)			if ((this->lastCharacter != -1)) {
HXLINE( 354)				_hx_tmp1 = (this->arrayCharacters->length > 0);
            			}
            			else {
HXLINE( 354)				_hx_tmp1 = false;
            			}
HXDLIN( 354)			if (_hx_tmp1) {
HXLINE( 355)				int _g = 0;
HXDLIN( 355)				int _g1 = this->arrayCharacters->length;
HXDLIN( 355)				while((_g < _g1)){
HXLINE( 355)					_g = (_g + 1);
HXDLIN( 355)					int i = (_g - 1);
HXLINE( 356)					 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >();
HXLINE( 357)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 358)						if ((i != this->lastCharacter)) {
HXLINE( 359)							::String _hx_switch_0 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            							if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 364)								_hx_char->set_y((_hx_char->y + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 365)								if ((_hx_char->y > (_hx_char->startingPos + ::flixel::FlxG_obj::height))) {
HXLINE( 365)									_hx_char->set_y((_hx_char->startingPos + ::flixel::FlxG_obj::height));
            								}
HXLINE( 363)								goto _hx_goto_12;
            							}
            							if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 361)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 362)								if ((_hx_char->x < (_hx_char->startingPos + this->offsetPos))) {
HXLINE( 362)									_hx_char->set_x((_hx_char->startingPos + this->offsetPos));
            								}
HXLINE( 360)								goto _hx_goto_12;
            							}
            							if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 367)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 368)								if ((_hx_char->x > (_hx_char->startingPos - this->offsetPos))) {
HXLINE( 368)									_hx_char->set_x((_hx_char->startingPos - this->offsetPos));
            								}
HXLINE( 366)								goto _hx_goto_12;
            							}
            							_hx_goto_12:;
HXLINE( 370)							_hx_char->set_alpha((_hx_char->alpha - (( (Float)(3) ) * elapsed)));
HXLINE( 371)							if ((_hx_char->alpha < ((Float)0.00001))) {
HXLINE( 371)								_hx_char->set_alpha(((Float)0.00001));
            							}
            						}
            						else {
HXLINE( 373)							::String _hx_switch_1 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            							if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 378)								_hx_char->set_y((_hx_char->y - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 379)								if ((_hx_char->y < _hx_char->startingPos)) {
HXLINE( 379)									_hx_char->set_y(_hx_char->startingPos);
            								}
HXLINE( 377)								goto _hx_goto_13;
            							}
            							if (  (_hx_switch_1==HX_("left",07,08,b0,47)) ){
HXLINE( 375)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 376)								if ((_hx_char->x > _hx_char->startingPos)) {
HXLINE( 376)									_hx_char->set_x(_hx_char->startingPos);
            								}
HXLINE( 374)								goto _hx_goto_13;
            							}
            							if (  (_hx_switch_1==HX_("right",dc,0b,64,e9)) ){
HXLINE( 381)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 382)								if ((_hx_char->x < _hx_char->startingPos)) {
HXLINE( 382)									_hx_char->set_x(_hx_char->startingPos);
            								}
HXLINE( 380)								goto _hx_goto_13;
            							}
            							_hx_goto_13:;
HXLINE( 384)							_hx_char->set_alpha((_hx_char->alpha + (( (Float)(3) ) * elapsed)));
HXLINE( 385)							if ((_hx_char->alpha > 1)) {
HXLINE( 385)								_hx_char->set_alpha(( (Float)(1) ));
            							}
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 391)			bool _hx_tmp;
HXDLIN( 391)			if (::hx::IsNotNull( this->box )) {
HXLINE( 391)				_hx_tmp = (this->box->animation->_curAnim->curFrame <= 0);
            			}
            			else {
HXLINE( 391)				_hx_tmp = false;
            			}
HXDLIN( 391)			if (_hx_tmp) {
HXLINE( 392)				this->box->kill();
HXLINE( 393)				this->remove(this->box,null());
HXLINE( 394)				this->box->destroy();
HXLINE( 395)				this->box = null();
            			}
HXLINE( 398)			if (::hx::IsNotNull( this->bgFade )) {
HXLINE( 399)				 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 399)				fh->set_alpha((fh->alpha - (((Float)0.5) * elapsed)));
HXLINE( 400)				if ((this->bgFade->alpha <= 0)) {
HXLINE( 401)					this->bgFade->kill();
HXLINE( 402)					this->remove(this->bgFade,null());
HXLINE( 403)					this->bgFade->destroy();
HXLINE( 404)					this->bgFade = null();
            				}
            			}
HXLINE( 408)			{
HXLINE( 408)				int _g = 0;
HXDLIN( 408)				int _g1 = this->arrayCharacters->length;
HXDLIN( 408)				while((_g < _g1)){
HXLINE( 408)					_g = (_g + 1);
HXDLIN( 408)					int i = (_g - 1);
HXLINE( 409)					 ::DialogueCharacter leChar = this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >();
HXLINE( 410)					if (::hx::IsNotNull( leChar )) {
HXLINE( 411)						::String _hx_switch_2 = ( (::String)(this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >()->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            						if (  (_hx_switch_2==HX_("center",d5,25,db,05)) ){
HXLINE( 415)							leChar->set_y((leChar->y + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 415)							goto _hx_goto_15;
            						}
            						if (  (_hx_switch_2==HX_("left",07,08,b0,47)) ){
HXLINE( 413)							leChar->set_x((leChar->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 413)							goto _hx_goto_15;
            						}
            						if (  (_hx_switch_2==HX_("right",dc,0b,64,e9)) ){
HXLINE( 417)							leChar->set_x((leChar->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 417)							goto _hx_goto_15;
            						}
            						_hx_goto_15:;
HXLINE( 419)						leChar->set_alpha((leChar->alpha - (elapsed * ( (Float)(10) ))));
            					}
            				}
            			}
HXLINE( 423)			bool _hx_tmp1;
HXDLIN( 423)			if (::hx::IsNull( this->box )) {
HXLINE( 423)				_hx_tmp1 = ::hx::IsNull( this->bgFade );
            			}
            			else {
HXLINE( 423)				_hx_tmp1 = false;
            			}
HXDLIN( 423)			if (_hx_tmp1) {
HXLINE( 424)				{
HXLINE( 424)					int _g = 0;
HXDLIN( 424)					int _g1 = this->arrayCharacters->length;
HXDLIN( 424)					while((_g < _g1)){
HXLINE( 424)						_g = (_g + 1);
HXDLIN( 424)						int i = (_g - 1);
HXLINE( 425)						 ::DialogueCharacter leChar = this->arrayCharacters->__get(0).StaticCast<  ::DialogueCharacter >();
HXLINE( 426)						if (::hx::IsNotNull( leChar )) {
HXLINE( 427)							this->arrayCharacters->remove(leChar);
HXLINE( 428)							leChar->kill();
HXLINE( 429)							this->remove(leChar,null());
HXLINE( 430)							leChar->destroy();
            						}
            					}
            				}
HXLINE( 433)				this->finishThing();
HXLINE( 434)				this->kill();
            			}
            		}
HXLINE( 437)		this->super::update(elapsed);
            	}


void DialogueBoxPsych_obj::startNextDialog(){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_443_startNextDialog)
HXLINE( 444)		 ::Dynamic curDialogue = null();
HXLINE( 445)		while(true){
HXLINE( 446)			curDialogue =  ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(this->currentText);
HXLINE( 445)			if (!(::hx::IsNull( curDialogue ))) {
HXLINE( 445)				goto _hx_goto_20;
            			}
            		}
            		_hx_goto_20:;
HXLINE( 449)		bool _hx_tmp;
HXDLIN( 449)		if (::hx::IsNotNull( curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) )) {
HXLINE( 449)			_hx_tmp = (( (::String)(curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) ).length < 1);
            		}
            		else {
HXLINE( 449)			_hx_tmp = true;
            		}
HXDLIN( 449)		if (_hx_tmp) {
HXLINE( 449)			curDialogue->__SetField(HX_("text",ad,cc,f9,4c),HX_(" ",20,00,00,00),::hx::paccDynamic);
            		}
HXLINE( 450)		if (::hx::IsNull( curDialogue->__Field(HX_("boxState",06,60,2a,ff),::hx::paccDynamic) )) {
HXLINE( 450)			curDialogue->__SetField(HX_("boxState",06,60,2a,ff),HX_("normal",27,72,69,30),::hx::paccDynamic);
            		}
HXLINE( 451)		bool _hx_tmp1;
HXDLIN( 451)		if (::hx::IsNotNull( curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic) )) {
HXLINE( 451)			_hx_tmp1 = ::Math_obj::isNaN(( (Float)(curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 451)			_hx_tmp1 = true;
            		}
HXDLIN( 451)		if (_hx_tmp1) {
HXLINE( 451)			curDialogue->__SetField(HX_("speed",87,97,69,81),((Float)0.05),::hx::paccDynamic);
            		}
HXLINE( 453)		::String animName = ( (::String)(curDialogue->__Field(HX_("boxState",06,60,2a,ff),::hx::paccDynamic)) );
HXLINE( 454)		::String boxType = this->textBoxTypes->__get(0);
HXLINE( 455)		{
HXLINE( 455)			int _g = 0;
HXDLIN( 455)			int _g1 = this->textBoxTypes->length;
HXDLIN( 455)			while((_g < _g1)){
HXLINE( 455)				_g = (_g + 1);
HXDLIN( 455)				int i = (_g - 1);
HXLINE( 456)				if ((this->textBoxTypes->__get(i) == animName)) {
HXLINE( 457)					boxType = animName;
            				}
            			}
            		}
HXLINE( 461)		int character = 0;
HXLINE( 462)		this->box->set_visible(true);
HXLINE( 463)		{
HXLINE( 463)			int _g2 = 0;
HXDLIN( 463)			int _g3 = this->arrayCharacters->length;
HXDLIN( 463)			while((_g2 < _g3)){
HXLINE( 463)				_g2 = (_g2 + 1);
HXDLIN( 463)				int i = (_g2 - 1);
HXLINE( 464)				if (::hx::IsEq( this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >()->curCharacter,curDialogue->__Field(HX_("portrait",5b,21,af,b8),::hx::paccDynamic) )) {
HXLINE( 465)					character = i;
HXLINE( 466)					goto _hx_goto_22;
            				}
            			}
            			_hx_goto_22:;
            		}
HXLINE( 469)		::String centerPrefix = HX_("",00,00,00,00);
HXLINE( 470)		::String lePosition = ( (::String)(this->arrayCharacters->__get(character).StaticCast<  ::DialogueCharacter >()->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
HXLINE( 471)		if ((lePosition == HX_("center",d5,25,db,05))) {
HXLINE( 471)			centerPrefix = HX_("center-",b8,f4,e5,19);
            		}
HXLINE( 473)		if ((character != this->lastCharacter)) {
HXLINE( 474)			this->box->animation->play(((centerPrefix + boxType) + HX_("Open",ea,2f,8d,34)),true,null(),null());
HXLINE( 475)			::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
HXLINE( 476)			this->box->set_flipX((lePosition == HX_("left",07,08,b0,47)));
            		}
            		else {
HXLINE( 477)			if ((boxType != this->lastBoxType)) {
HXLINE( 478)				this->box->animation->play((centerPrefix + boxType),true,null(),null());
HXLINE( 479)				::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
            			}
            		}
HXLINE( 481)		this->lastCharacter = character;
HXLINE( 482)		this->lastBoxType = boxType;
HXLINE( 484)		if (::hx::IsNotNull( this->daText )) {
HXLINE( 485)			this->daText->killTheTimer();
HXLINE( 486)			this->daText->kill();
HXLINE( 487)			this->remove(this->daText,null());
HXLINE( 488)			this->daText->destroy();
            		}
HXLINE( 491)		this->textToType = ( (::String)(curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE( 492)		this->daText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(::DialogueBoxPsych_obj::DEFAULT_TEXT_X) ),( (Float)(::DialogueBoxPsych_obj::DEFAULT_TEXT_Y) ),this->textToType,false,true,curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic),((Float)0.7));
HXLINE( 493)		this->add(this->daText);
HXLINE( 495)		 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(character).StaticCast<  ::DialogueCharacter >();
HXLINE( 496)		if (::hx::IsNotNull( _hx_char )) {
HXLINE( 497)			_hx_char->playAnim(( (::String)(curDialogue->__Field(HX_("expression",98,11,9f,2e),::hx::paccDynamic)) ),this->daText->finishedText);
HXLINE( 498)			if (::hx::IsNotNull( _hx_char->animation->_curAnim )) {
HXLINE( 499)				Float rate = (( (Float)(24) ) - (((( (Float)(curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) ) - ((Float)0.05)) / ( (Float)(5) )) * ( (Float)(480) )));
HXLINE( 500)				if ((rate < 12)) {
HXLINE( 500)					rate = ( (Float)(12) );
            				}
            				else {
HXLINE( 501)					if ((rate > 48)) {
HXLINE( 501)						rate = ( (Float)(48) );
            					}
            				}
HXLINE( 502)				_hx_char->animation->_curAnim->set_frameRate(rate);
            			}
            		}
HXLINE( 505)		this->currentText++;
HXLINE( 507)		if (::hx::IsNotNull( this->nextDialogueThing )) {
HXLINE( 508)			this->nextDialogueThing();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,startNextDialog,(void))

Float DialogueBoxPsych_obj::LEFT_CHAR_X;

Float DialogueBoxPsych_obj::RIGHT_CHAR_X;

Float DialogueBoxPsych_obj::DEFAULT_CHAR_Y;

int DialogueBoxPsych_obj::DEFAULT_TEXT_X;

int DialogueBoxPsych_obj::DEFAULT_TEXT_Y;

 ::Dynamic DialogueBoxPsych_obj::parseDialogue(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_512_parseDialogue)
HXLINE( 513)		::String rawJson = ::openfl::utils::Assets_obj::getText(path);
HXLINE( 514)		return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DialogueBoxPsych_obj,parseDialogue,return )

void DialogueBoxPsych_obj::updateBoxOffsets( ::flixel::FlxSprite box){
            	HX_STACKFRAME(&_hx_pos_128129519e640548_517_updateBoxOffsets)
HXLINE( 518)		box->centerOffsets(null());
HXLINE( 519)		box->updateHitbox();
HXLINE( 520)		if (::StringTools_obj::startsWith(box->animation->_curAnim->name,HX_("angry",21,49,e2,22))) {
HXLINE( 521)			box->offset->set(50,65);
            		}
            		else {
HXLINE( 522)			if (::StringTools_obj::startsWith(box->animation->_curAnim->name,HX_("center-angry",69,39,92,b0))) {
HXLINE( 523)				box->offset->set(50,30);
            			}
            			else {
HXLINE( 525)				box->offset->set(10,0);
            			}
            		}
HXLINE( 528)		if (!(box->flipX)) {
HXLINE( 528)			 ::flixel::math::FlxPoint fh = box->offset;
HXDLIN( 528)			fh->set_y((fh->y + 10));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DialogueBoxPsych_obj,updateBoxOffsets,(void))


::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__new( ::Dynamic dialogueList,::String song) {
	::hx::ObjectPtr< DialogueBoxPsych_obj > __this = new DialogueBoxPsych_obj();
	__this->__construct(dialogueList,song);
	return __this;
}

::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic dialogueList,::String song) {
	DialogueBoxPsych_obj *__this = (DialogueBoxPsych_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBoxPsych_obj), true, "DialogueBoxPsych"));
	*(void **)__this = DialogueBoxPsych_obj::_hx_vtable;
	__this->__construct(dialogueList,song);
	return __this;
}

DialogueBoxPsych_obj::DialogueBoxPsych_obj()
{
}

void DialogueBoxPsych_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBoxPsych);
	HX_MARK_MEMBER_NAME(dialogue,"dialogue");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_MARK_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(textToType,"textToType");
	HX_MARK_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_MARK_MEMBER_NAME(currentText,"currentText");
	HX_MARK_MEMBER_NAME(offsetPos,"offsetPos");
	HX_MARK_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_MARK_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(daText,"daText");
	HX_MARK_MEMBER_NAME(ignoreThisFrame,"ignoreThisFrame");
	HX_MARK_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_MARK_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBoxPsych_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dialogue,"dialogue");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_VISIT_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(textToType,"textToType");
	HX_VISIT_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_VISIT_MEMBER_NAME(currentText,"currentText");
	HX_VISIT_MEMBER_NAME(offsetPos,"offsetPos");
	HX_VISIT_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_VISIT_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(daText,"daText");
	HX_VISIT_MEMBER_NAME(ignoreThisFrame,"ignoreThisFrame");
	HX_VISIT_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_VISIT_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBoxPsych_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"daText") ) { return ::hx::Val( daText ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { return ::hx::Val( dialogue ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { return ::hx::Val( offsetPos ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { return ::hx::Val( textToType ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"currentText") ) { return ::hx::Val( currentText ); }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { return ::hx::Val( scrollSpeed ); }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { return ::hx::Val( lastBoxType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { return ::hx::Val( textBoxTypes ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { return ::hx::Val( dialogueEnded ); }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { return ::hx::Val( lastCharacter ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { return ::hx::Val( arrayCharacters ); }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
		if (HX_FIELD_EQ(inName,"spawnCharacters") ) { return ::hx::Val( spawnCharacters_dyn() ); }
		if (HX_FIELD_EQ(inName,"ignoreThisFrame") ) { return ::hx::Val( ignoreThisFrame ); }
		if (HX_FIELD_EQ(inName,"startNextDialog") ) { return ::hx::Val( startNextDialog_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { return ::hx::Val( nextDialogueThing ); }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { return ::hx::Val( skipDialogueThing ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DialogueBoxPsych_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"LEFT_CHAR_X") ) { outValue = ( LEFT_CHAR_X ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RIGHT_CHAR_X") ) { outValue = ( RIGHT_CHAR_X ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseDialogue") ) { outValue = parseDialogue_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHAR_Y") ) { outValue = ( DEFAULT_CHAR_Y ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_X") ) { outValue = ( DEFAULT_TEXT_X ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_Y") ) { outValue = ( DEFAULT_TEXT_Y ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateBoxOffsets") ) { outValue = updateBoxOffsets_dyn(); return true; }
	}
	return false;
}

::hx::Val DialogueBoxPsych_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"daText") ) { daText=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { dialogue=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { offsetPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { textToType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentText") ) { currentText=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { lastBoxType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { textBoxTypes=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { dialogueEnded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { lastCharacter=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { arrayCharacters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreThisFrame") ) { ignoreThisFrame=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { nextDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { skipDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DialogueBoxPsych_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"LEFT_CHAR_X") ) { LEFT_CHAR_X=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RIGHT_CHAR_X") ) { RIGHT_CHAR_X=ioValue.Cast< Float >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHAR_Y") ) { DEFAULT_CHAR_Y=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_X") ) { DEFAULT_TEXT_X=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_Y") ) { DEFAULT_TEXT_Y=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DialogueBoxPsych_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dialogue",18,2d,94,a7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("textToType",62,de,b2,b9));
	outFields->push(HX_("arrayCharacters",a3,23,67,53));
	outFields->push(HX_("currentText",86,a5,8b,85));
	outFields->push(HX_("offsetPos",c1,3b,c0,41));
	outFields->push(HX_("textBoxTypes",3b,d8,65,ca));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("dialogueEnded",c2,14,61,0b));
	outFields->push(HX_("scrollSpeed",3a,e0,46,cb));
	outFields->push(HX_("daText",ca,52,61,0d));
	outFields->push(HX_("ignoreThisFrame",7d,81,d2,40));
	outFields->push(HX_("lastCharacter",73,b6,0a,40));
	outFields->push(HX_("lastBoxType",af,f2,77,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBoxPsych_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBoxPsych_obj,dialogue),HX_("dialogue",18,2d,94,a7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,nextDialogueThing),HX_("nextDialogueThing",c3,c2,a1,d9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,skipDialogueThing),HX_("skipDialogueThing",b7,29,12,4e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,textToType),HX_("textToType",62,de,b2,b9)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DialogueBoxPsych_obj,arrayCharacters),HX_("arrayCharacters",a3,23,67,53)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,currentText),HX_("currentText",86,a5,8b,85)},
	{::hx::fsFloat,(int)offsetof(DialogueBoxPsych_obj,offsetPos),HX_("offsetPos",c1,3b,c0,41)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBoxPsych_obj,textBoxTypes),HX_("textBoxTypes",3b,d8,65,ca)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueEnded),HX_("dialogueEnded",c2,14,61,0b)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBoxPsych_obj,daText),HX_("daText",ca,52,61,0d)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,ignoreThisFrame),HX_("ignoreThisFrame",7d,81,d2,40)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,lastCharacter),HX_("lastCharacter",73,b6,0a,40)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,lastBoxType),HX_("lastBoxType",af,f2,77,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DialogueBoxPsych_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::LEFT_CHAR_X,HX_("LEFT_CHAR_X",e7,bb,19,61)},
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::RIGHT_CHAR_X,HX_("RIGHT_CHAR_X",d2,58,47,14)},
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::DEFAULT_CHAR_Y,HX_("DEFAULT_CHAR_Y",8e,06,1f,4b)},
	{::hx::fsInt,(void *) &DialogueBoxPsych_obj::DEFAULT_TEXT_X,HX_("DEFAULT_TEXT_X",24,d8,31,6c)},
	{::hx::fsInt,(void *) &DialogueBoxPsych_obj::DEFAULT_TEXT_Y,HX_("DEFAULT_TEXT_Y",25,d8,31,6c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DialogueBoxPsych_obj_sMemberFields[] = {
	HX_("dialogue",18,2d,94,a7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("finishThing",9b,aa,8e,36),
	HX_("nextDialogueThing",c3,c2,a1,d9),
	HX_("skipDialogueThing",b7,29,12,4e),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("box",0b,be,4a,00),
	HX_("textToType",62,de,b2,b9),
	HX_("arrayCharacters",a3,23,67,53),
	HX_("currentText",86,a5,8b,85),
	HX_("offsetPos",c1,3b,c0,41),
	HX_("textBoxTypes",3b,d8,65,ca),
	HX_("dialogueStarted",09,77,22,70),
	HX_("dialogueEnded",c2,14,61,0b),
	HX_("spawnCharacters",c5,32,da,c2),
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("daText",ca,52,61,0d),
	HX_("ignoreThisFrame",7d,81,d2,40),
	HX_("update",09,86,05,87),
	HX_("lastCharacter",73,b6,0a,40),
	HX_("lastBoxType",af,f2,77,51),
	HX_("startNextDialog",1d,3d,9f,9a),
	::String(null()) };

static void DialogueBoxPsych_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::LEFT_CHAR_X,"LEFT_CHAR_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::RIGHT_CHAR_X,"RIGHT_CHAR_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_CHAR_Y,"DEFAULT_CHAR_Y");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_X,"DEFAULT_TEXT_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_Y,"DEFAULT_TEXT_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogueBoxPsych_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::LEFT_CHAR_X,"LEFT_CHAR_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::RIGHT_CHAR_X,"RIGHT_CHAR_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_CHAR_Y,"DEFAULT_CHAR_Y");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_X,"DEFAULT_TEXT_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_Y,"DEFAULT_TEXT_Y");
};

#endif

::hx::Class DialogueBoxPsych_obj::__mClass;

static ::String DialogueBoxPsych_obj_sStaticFields[] = {
	HX_("LEFT_CHAR_X",e7,bb,19,61),
	HX_("RIGHT_CHAR_X",d2,58,47,14),
	HX_("DEFAULT_CHAR_Y",8e,06,1f,4b),
	HX_("DEFAULT_TEXT_X",24,d8,31,6c),
	HX_("DEFAULT_TEXT_Y",25,d8,31,6c),
	HX_("parseDialogue",6b,64,c3,ec),
	HX_("updateBoxOffsets",1e,ea,75,d1),
	::String(null())
};

void DialogueBoxPsych_obj::__register()
{
	DialogueBoxPsych_obj _hx_dummy;
	DialogueBoxPsych_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueBoxPsych",88,30,b7,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DialogueBoxPsych_obj::__GetStatic;
	__mClass->mSetStaticField = &DialogueBoxPsych_obj::__SetStatic;
	__mClass->mMarkFunc = DialogueBoxPsych_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DialogueBoxPsych_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBoxPsych_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBoxPsych_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogueBoxPsych_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBoxPsych_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBoxPsych_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogueBoxPsych_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_210_boot)
HXDLIN( 210)		LEFT_CHAR_X = ((Float)-60);
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_211_boot)
HXDLIN( 211)		RIGHT_CHAR_X = ((Float)-100);
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_212_boot)
HXDLIN( 212)		DEFAULT_CHAR_Y = ((Float)60);
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_262_boot)
HXDLIN( 262)		DEFAULT_TEXT_X = 90;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_263_boot)
HXDLIN( 263)		DEFAULT_TEXT_Y = 430;
            	}
}

