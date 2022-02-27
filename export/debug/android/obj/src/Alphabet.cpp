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
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
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
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c95a0630eaf1443_17_new,"Alphabet","new",0xc4ae3f45,"Alphabet.new","Alphabet.hx",17,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_78_changeText,"Alphabet","changeText",0xd95269f8,"Alphabet.changeText","Alphabet.hx",78,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_116_addText,"Alphabet","addText",0x712354d3,"Alphabet.addText","Alphabet.hx",116,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_194_doSplitWords,"Alphabet","doSplitWords",0x060ce215,"Alphabet.doSplitWords","Alphabet.hx",194,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_205_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",205,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_220_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",220,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_219_startTypedText,"Alphabet","startTypedText",0x740816b0,"Alphabet.startTypedText","Alphabet.hx",219,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_227_timerCheck,"Alphabet","timerCheck",0x88d7667e,"Alphabet.timerCheck","Alphabet.hx",227,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_335_update,"Alphabet","update",0xc3c1b444,"Alphabet.update","Alphabet.hx",335,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_362_killTheTimer,"Alphabet","killTheTimer",0x04b90bcd,"Alphabet.killTheTimer","Alphabet.hx",362,0xc2e40fcb)

void Alphabet_obj::__construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_typingSpeed, ::Dynamic __o_textSize){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = false;
            		bool typed = __o_typed.Default(false);
            		 ::Dynamic typingSpeed = __o_typingSpeed;
            		if (::hx::IsNull(__o_typingSpeed)) typingSpeed = ((Float)0.05);
            		 ::Dynamic textSize = __o_textSize;
            		if (::hx::IsNull(__o_textSize)) textSize = 1;
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_17_new)
HXLINE( 226)		this->LONG_TEXT_ADD = ((Float)-24);
HXLINE( 203)		this->typeTimer = null();
HXLINE( 201)		this->consecutiveSpaces = 0;
HXLINE( 200)		this->dialogueSound = null();
HXLINE( 199)		this->curRow = 0;
HXLINE( 198)		this->xPos = ((Float)0);
HXLINE( 197)		this->loopNum = 0;
HXLINE(  50)		this->typingSpeed = ((Float)0.05);
HXLINE(  48)		this->typed = false;
HXLINE(  47)		this->finishedText = false;
HXLINE(  45)		this->lettersArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  44)		this->isBold = false;
HXLINE(  42)		this->splitWords = ::Array_obj< ::String >::__new(0);
HXLINE(  40)		this->xPosResetted = false;
HXLINE(  35)		this->yMulti = ((Float)1);
HXLINE(  34)		this->_finalText = HX_("",00,00,00,00);
HXLINE(  32)		this->text = HX_("",00,00,00,00);
HXLINE(  30)		this->textSize = ((Float)1.0);
HXLINE(  29)		this->isFreeplay = false;
HXLINE(  28)		this->isMenuItem = false;
HXLINE(  27)		this->yAdd = ((Float)0);
HXLINE(  26)		this->xAdd = ((Float)0);
HXLINE(  25)		this->yMult = ((Float)120);
HXLINE(  24)		this->targetY = ((Float)0);
HXLINE(  23)		this->forceX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(  20)		this->paused = false;
HXLINE(  19)		this->delay = ((Float)0.05);
HXLINE(  53)		super::__construct(x,y,null());
HXLINE(  54)		this->forceX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(  55)		this->textSize = ( (Float)(textSize) );
HXLINE(  57)		this->_finalText = text;
HXLINE(  58)		this->text = text;
HXLINE(  59)		this->typed = typed;
HXLINE(  60)		this->isBold = ( (bool)(bold) );
HXLINE(  62)		if ((text != HX_("",00,00,00,00))) {
HXLINE(  64)			if (typed) {
HXLINE(  66)				this->startTypedText(( (Float)(typingSpeed) ));
            			}
            			else {
HXLINE(  70)				this->addText();
            			}
            		}
            		else {
HXLINE(  73)			this->finishedText = true;
            		}
            	}

Dynamic Alphabet_obj::__CreateEmpty() { return new Alphabet_obj; }

void *Alphabet_obj::_hx_vtable = 0;

Dynamic Alphabet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alphabet_obj > _hx_result = new Alphabet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool Alphabet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x567b2b93) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x567b2b93;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Alphabet_obj::changeText(::String newText,::hx::Null< Float >  __o_newTypingSpeed){
            		Float newTypingSpeed = __o_newTypingSpeed.Default(-1);
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_78_changeText)
HXLINE(  79)		{
HXLINE(  79)			int _g = 0;
HXDLIN(  79)			int _g1 = this->lettersArray->length;
HXDLIN(  79)			while((_g < _g1)){
HXLINE(  79)				_g = (_g + 1);
HXDLIN(  79)				int i = (_g - 1);
HXLINE(  80)				 ::AlphaCharacter letter = this->lettersArray->__get(0).StaticCast<  ::AlphaCharacter >();
HXLINE(  81)				this->remove(letter,null());
HXLINE(  82)				this->lettersArray->remove(letter);
            			}
            		}
HXLINE(  84)		this->lettersArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  85)		this->splitWords = ::Array_obj< ::String >::__new(0);
HXLINE(  86)		this->loopNum = 0;
HXLINE(  87)		this->xPos = ( (Float)(0) );
HXLINE(  88)		this->curRow = 0;
HXLINE(  89)		this->consecutiveSpaces = 0;
HXLINE(  90)		this->xPosResetted = false;
HXLINE(  91)		this->finishedText = false;
HXLINE(  92)		this->lastSprite = null();
HXLINE(  94)		Float lastX = this->x;
HXLINE(  95)		this->set_x(( (Float)(0) ));
HXLINE(  96)		this->_finalText = newText;
HXLINE(  97)		this->text = newText;
HXLINE(  98)		if ((newTypingSpeed != -1)) {
HXLINE(  99)			this->typingSpeed = newTypingSpeed;
            		}
HXLINE( 102)		if ((this->text != HX_("",00,00,00,00))) {
HXLINE( 103)			if (this->typed) {
HXLINE( 105)				this->startTypedText(this->typingSpeed);
            			}
            			else {
HXLINE( 107)				this->addText();
            			}
            		}
            		else {
HXLINE( 110)			this->finishedText = true;
            		}
HXLINE( 112)		this->set_x(lastX);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Alphabet_obj,changeText,(void))

void Alphabet_obj::addText(){
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_116_addText)
HXLINE( 117)		this->doSplitWords();
HXLINE( 119)		Float xPos = ( (Float)(0) );
HXLINE( 120)		{
HXLINE( 120)			int _g = 0;
HXDLIN( 120)			::Array< ::String > _g1 = this->splitWords;
HXDLIN( 120)			while((_g < _g1->length)){
HXLINE( 120)				::String character = _g1->__get(_g);
HXDLIN( 120)				_g = (_g + 1);
HXLINE( 126)				bool spaceChar;
HXDLIN( 126)				if ((character != HX_(" ",20,00,00,00))) {
HXLINE( 126)					spaceChar = (character == HX_("_",5f,00,00,00));
            				}
            				else {
HXLINE( 126)					spaceChar = true;
            				}
HXLINE( 127)				if (spaceChar) {
HXLINE( 129)					this->consecutiveSpaces++;
            				}
HXLINE( 132)				bool isNumber = (::AlphaCharacter_obj::numbers.indexOf(character,null()) != -1);
HXLINE( 133)				bool isSymbol = (::AlphaCharacter_obj::symbols.indexOf(character,null()) != -1);
HXLINE( 134)				::String isAlphabet = ::AlphaCharacter_obj::alphabet;
HXDLIN( 134)				bool isAlphabet1 = (isAlphabet.indexOf(character.toLowerCase(),null()) != -1);
HXLINE( 135)				bool _hx_tmp;
HXDLIN( 135)				bool _hx_tmp1;
HXDLIN( 135)				bool _hx_tmp2;
HXDLIN( 135)				if (!(isAlphabet1)) {
HXLINE( 135)					_hx_tmp2 = isSymbol;
            				}
            				else {
HXLINE( 135)					_hx_tmp2 = true;
            				}
HXDLIN( 135)				if (!(_hx_tmp2)) {
HXLINE( 135)					_hx_tmp1 = isNumber;
            				}
            				else {
HXLINE( 135)					_hx_tmp1 = true;
            				}
HXDLIN( 135)				if (_hx_tmp1) {
HXLINE( 135)					if (this->isBold) {
HXLINE( 135)						_hx_tmp = !(spaceChar);
            					}
            					else {
HXLINE( 135)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 135)					_hx_tmp = false;
            				}
HXDLIN( 135)				if (_hx_tmp) {
HXLINE( 137)					if (::hx::IsNotNull( this->lastSprite )) {
HXLINE( 139)						Float xPos1 = this->lastSprite->x;
HXDLIN( 139)						xPos = (xPos1 + this->lastSprite->get_width());
            					}
HXLINE( 142)					if ((this->consecutiveSpaces > 0)) {
HXLINE( 144)						xPos = (xPos + (( (Float)((40 * this->consecutiveSpaces)) ) * this->textSize));
            					}
HXLINE( 146)					this->consecutiveSpaces = 0;
HXLINE( 149)					 ::AlphaCharacter letter =  ::AlphaCharacter_obj::__alloc( HX_CTX ,xPos,( (Float)(0) ),this->textSize);
HXLINE( 151)					if (this->isBold) {
HXLINE( 153)						if (isNumber) {
HXLINE( 155)							letter->createBoldNumber(character);
            						}
            						else {
HXLINE( 157)							if (isSymbol) {
HXLINE( 159)								letter->createBoldSymbol(character);
            							}
            							else {
HXLINE( 163)								letter->createBoldLetter(character);
            							}
            						}
            					}
            					else {
HXLINE( 168)						if (isNumber) {
HXLINE( 170)							letter->createNumber(character);
            						}
            						else {
HXLINE( 172)							if (isSymbol) {
HXLINE( 174)								letter->createSymbol(character);
            							}
            							else {
HXLINE( 178)								letter->createLetter(character);
            							}
            						}
            					}
HXLINE( 182)					this->add(letter);
HXLINE( 183)					this->lettersArray->push(letter);
HXLINE( 185)					this->lastSprite = letter;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,addText,(void))

void Alphabet_obj::doSplitWords(){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_194_doSplitWords)
HXDLIN( 194)		this->splitWords = this->_finalText.split(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,doSplitWords,(void))

void Alphabet_obj::startTypedText(Float speed){
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_205_startTypedText)
HXDLIN( 205)		 ::Alphabet _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 206)		this->_finalText = this->text;
HXLINE( 207)		this->doSplitWords();
HXLINE( 211)		if ((speed <= 0)) {
HXLINE( 212)			while(!(this->finishedText)){
HXLINE( 213)				this->timerCheck(null());
            			}
HXLINE( 215)			if (::hx::IsNotNull( this->dialogueSound )) {
HXLINE( 215)				 ::flixel::_hx_system::FlxSound _this = this->dialogueSound;
HXDLIN( 215)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 216)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 216)			this->dialogueSound = _hx_tmp->play(::Paths_obj::sound(HX_("dialogue",18,2d,94,a7),null()),null(),null(),null(),null(),null());
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Alphabet,_gthis,Float,speed) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Alphabet,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_220_startTypedText)
HXLINE( 220)					_gthis->timerCheck(tmr);
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_219_startTypedText)
HXLINE( 219)				_gthis->typeTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(speed, ::Dynamic(new _hx_Closure_0(_gthis)),0);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 218)			this->typeTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.1), ::Dynamic(new _hx_Closure_1(_gthis,speed)),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,startTypedText,(void))

void Alphabet_obj::timerCheck( ::flixel::util::FlxTimer tmr){
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_227_timerCheck)
HXLINE( 228)		bool autoBreak = false;
HXLINE( 229)		bool _hx_tmp;
HXDLIN( 229)		bool _hx_tmp1;
HXDLIN( 229)		bool _hx_tmp2;
HXDLIN( 229)		if ((this->loopNum <= (this->splitWords->length - 2))) {
HXLINE( 229)			_hx_tmp2 = (this->splitWords->__get(this->loopNum) == HX_("\\",5c,00,00,00));
            		}
            		else {
HXLINE( 229)			_hx_tmp2 = false;
            		}
HXDLIN( 229)		if (_hx_tmp2) {
HXLINE( 229)			_hx_tmp1 = (this->splitWords->__get((this->loopNum + 1)) == HX_("n",6e,00,00,00));
            		}
            		else {
HXLINE( 229)			_hx_tmp1 = false;
            		}
HXDLIN( 229)		if (!(_hx_tmp1)) {
HXLINE( 230)			bool _hx_tmp1;
HXDLIN( 230)			autoBreak = true;
HXDLIN( 230)			if (autoBreak) {
HXLINE( 230)				_hx_tmp1 = (this->xPos >= (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.65)));
            			}
            			else {
HXLINE( 230)				_hx_tmp1 = false;
            			}
HXDLIN( 230)			if (_hx_tmp1) {
HXLINE( 229)				_hx_tmp = (this->splitWords->__get(this->loopNum) == HX_(" ",20,00,00,00));
            			}
            			else {
HXLINE( 229)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 229)			_hx_tmp = true;
            		}
HXDLIN( 229)		if (_hx_tmp) {
HXLINE( 232)			if (autoBreak) {
HXLINE( 233)				if (::hx::IsNotNull( tmr )) {
HXLINE( 233)					 ::flixel::util::FlxTimer tmr1 = tmr;
HXDLIN( 233)					tmr1->loops = (tmr1->loops - 1);
            				}
HXLINE( 234)				 ::Alphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 234)				_hx_tmp->loopNum = (_hx_tmp->loopNum + 1);
            			}
            			else {
HXLINE( 236)				if (::hx::IsNotNull( tmr )) {
HXLINE( 236)					 ::flixel::util::FlxTimer tmr1 = tmr;
HXDLIN( 236)					tmr1->loops = (tmr1->loops - 2);
            				}
HXLINE( 237)				 ::Alphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 237)				_hx_tmp->loopNum = (_hx_tmp->loopNum + 2);
            			}
HXLINE( 239)			 ::Alphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)			_hx_tmp->yMulti = (_hx_tmp->yMulti + 1);
HXLINE( 240)			this->xPosResetted = true;
HXLINE( 241)			this->xPos = ( (Float)(0) );
HXLINE( 242)			 ::Alphabet _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 242)			_hx_tmp1->curRow = (_hx_tmp1->curRow + 1);
HXLINE( 243)			if ((this->curRow == 2)) {
HXLINE( 243)				this->set_y((this->y + this->LONG_TEXT_ADD));
            			}
            		}
HXLINE( 246)		bool _hx_tmp3;
HXDLIN( 246)		if ((this->loopNum <= this->splitWords->length)) {
HXLINE( 246)			_hx_tmp3 = ::hx::IsNotNull( this->splitWords->__get(this->loopNum) );
            		}
            		else {
HXLINE( 246)			_hx_tmp3 = false;
            		}
HXDLIN( 246)		if (_hx_tmp3) {
HXLINE( 247)			bool spaceChar;
HXDLIN( 247)			if ((this->splitWords->__get(this->loopNum) != HX_(" ",20,00,00,00))) {
HXLINE( 247)				spaceChar = (this->splitWords->__get(this->loopNum) == HX_("_",5f,00,00,00));
            			}
            			else {
HXLINE( 247)				spaceChar = true;
            			}
HXLINE( 248)			if (spaceChar) {
HXLINE( 250)				this->consecutiveSpaces++;
            			}
HXLINE( 253)			bool isNumber = (::AlphaCharacter_obj::numbers.indexOf(this->splitWords->__get(this->loopNum),null()) != -1);
HXLINE( 254)			bool isSymbol = (::AlphaCharacter_obj::symbols.indexOf(this->splitWords->__get(this->loopNum),null()) != -1);
HXLINE( 255)			::String isAlphabet = ::AlphaCharacter_obj::alphabet;
HXDLIN( 255)			bool isAlphabet1 = (isAlphabet.indexOf(this->splitWords->__get(this->loopNum).toLowerCase(),null()) != -1);
HXLINE( 257)			bool _hx_tmp;
HXDLIN( 257)			bool _hx_tmp1;
HXDLIN( 257)			bool _hx_tmp2;
HXDLIN( 257)			if (!(isAlphabet1)) {
HXLINE( 257)				_hx_tmp2 = isSymbol;
            			}
            			else {
HXLINE( 257)				_hx_tmp2 = true;
            			}
HXDLIN( 257)			if (!(_hx_tmp2)) {
HXLINE( 257)				_hx_tmp1 = isNumber;
            			}
            			else {
HXLINE( 257)				_hx_tmp1 = true;
            			}
HXDLIN( 257)			if (_hx_tmp1) {
HXLINE( 257)				if (this->isBold) {
HXLINE( 257)					_hx_tmp = !(spaceChar);
            				}
            				else {
HXLINE( 257)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 257)				_hx_tmp = false;
            			}
HXDLIN( 257)			if (_hx_tmp) {
HXLINE( 259)				bool _hx_tmp;
HXDLIN( 259)				if (::hx::IsNotNull( this->lastSprite )) {
HXLINE( 259)					_hx_tmp = !(this->xPosResetted);
            				}
            				else {
HXLINE( 259)					_hx_tmp = false;
            				}
HXDLIN( 259)				if (_hx_tmp) {
HXLINE( 261)					this->lastSprite->updateHitbox();
HXLINE( 262)					 ::Alphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 262)					Float _hx_tmp1 = _hx_tmp->xPos;
HXDLIN( 262)					_hx_tmp->xPos = (_hx_tmp1 + (this->lastSprite->get_width() + 3));
            				}
            				else {
HXLINE( 268)					this->xPosResetted = false;
            				}
HXLINE( 271)				if ((this->consecutiveSpaces > 0)) {
HXLINE( 273)					 ::Alphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)					_hx_tmp->xPos = (_hx_tmp->xPos + (( (Float)((20 * this->consecutiveSpaces)) ) * this->textSize));
            				}
HXLINE( 275)				this->consecutiveSpaces = 0;
HXLINE( 278)				 ::AlphaCharacter letter =  ::AlphaCharacter_obj::__alloc( HX_CTX ,this->xPos,(( (Float)(55) ) * this->yMulti),this->textSize);
HXLINE( 279)				letter->row = this->curRow;
HXLINE( 280)				if (this->isBold) {
HXLINE( 282)					if (isNumber) {
HXLINE( 284)						letter->createBoldNumber(this->splitWords->__get(this->loopNum));
            					}
            					else {
HXLINE( 286)						if (isSymbol) {
HXLINE( 288)							letter->createBoldSymbol(this->splitWords->__get(this->loopNum));
            						}
            						else {
HXLINE( 292)							letter->createBoldLetter(this->splitWords->__get(this->loopNum));
            						}
            					}
            				}
            				else {
HXLINE( 297)					if (isNumber) {
HXLINE( 299)						letter->createNumber(this->splitWords->__get(this->loopNum));
            					}
            					else {
HXLINE( 301)						if (isSymbol) {
HXLINE( 303)							letter->createSymbol(this->splitWords->__get(this->loopNum));
            						}
            						else {
HXLINE( 307)							letter->createLetter(this->splitWords->__get(this->loopNum));
            						}
            					}
            				}
HXLINE( 310)				letter->set_x((letter->x + 90));
HXLINE( 312)				if (::hx::IsNotNull( tmr )) {
HXLINE( 313)					if (::hx::IsNotNull( this->dialogueSound )) {
HXLINE( 313)						 ::flixel::_hx_system::FlxSound _this = this->dialogueSound;
HXDLIN( 313)						_this->cleanup(_this->autoDestroy,true);
            					}
HXLINE( 314)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 314)					this->dialogueSound = _hx_tmp->play(::Paths_obj::sound(HX_("dialogue",18,2d,94,a7),null()),null(),null(),null(),null(),null());
            				}
HXLINE( 317)				this->add(letter);
HXLINE( 319)				this->lastSprite = letter;
            			}
            		}
HXLINE( 323)		this->loopNum++;
HXLINE( 324)		if ((this->loopNum >= this->splitWords->length)) {
HXLINE( 325)			if (::hx::IsNotNull( tmr )) {
HXLINE( 326)				this->typeTimer = null();
HXLINE( 327)				tmr->cancel();
HXLINE( 328)				tmr->destroy();
            			}
HXLINE( 330)			this->finishedText = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,timerCheck,(void))

void Alphabet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_335_update)
HXLINE( 336)		if (this->isMenuItem) {
HXLINE( 338)			Float scaledY = ::flixel::math::FlxMath_obj::remapToRange(this->targetY,( (Float)(0) ),( (Float)(1) ),( (Float)(0) ),((Float)1.3));
HXLINE( 340)			Float lerpVal = ::CoolUtil_obj::boundTo((elapsed * ((Float)9.6)),( (Float)(0) ),( (Float)(1) ));
HXLINE( 341)			Float a = this->y;
HXDLIN( 341)			this->set_y((a + (lerpVal * ((((scaledY * this->yMult) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.48))) + this->yAdd) - a))));
HXLINE( 342)			if ((this->forceX != ::Math_obj::NEGATIVE_INFINITY)) {
HXLINE( 343)				this->set_x(this->forceX);
            			}
            			else {
HXLINE( 345)				Float a = this->x;
HXDLIN( 345)				this->set_x((a + (lerpVal * ((((this->targetY * ( (Float)(20) )) + 90) + this->xAdd) - a))));
            			}
            		}
HXLINE( 349)		if (this->isFreeplay) {
HXLINE( 351)			Float scaledY = ::flixel::math::FlxMath_obj::remapToRange(this->targetY,( (Float)(0) ),( (Float)(1) ),( (Float)(0) ),((Float)1.3));
HXLINE( 353)			Float lerpVal = ::CoolUtil_obj::boundTo((elapsed * ((Float)9.6)),( (Float)(0) ),( (Float)(1) ));
HXLINE( 354)			Float a = this->y;
HXDLIN( 354)			this->set_y((a + (lerpVal * ((((scaledY * this->yMult) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.48))) + this->yAdd) - a))));
HXLINE( 355)			Float a1 = this->x;
HXDLIN( 355)			this->set_x((a1 + (lerpVal * ((((this->targetY * ( (Float)(20) )) + 90) + this->xAdd) - a1))));
HXLINE( 356)			this->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
            		}
HXLINE( 359)		this->super::update(elapsed);
            	}


void Alphabet_obj::killTheTimer(){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_362_killTheTimer)
HXLINE( 363)		if (::hx::IsNotNull( this->typeTimer )) {
HXLINE( 364)			this->typeTimer->cancel();
HXLINE( 365)			this->typeTimer->destroy();
            		}
HXLINE( 367)		this->typeTimer = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,killTheTimer,(void))


::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__new(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_typingSpeed, ::Dynamic __o_textSize) {
	::hx::ObjectPtr< Alphabet_obj > __this = new Alphabet_obj();
	__this->__construct(x,y,__o_text,__o_bold,__o_typed,__o_typingSpeed,__o_textSize);
	return __this;
}

::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_typingSpeed, ::Dynamic __o_textSize) {
	Alphabet_obj *__this = (Alphabet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alphabet_obj), true, "Alphabet"));
	*(void **)__this = Alphabet_obj::_hx_vtable;
	__this->__construct(x,y,__o_text,__o_bold,__o_typed,__o_typingSpeed,__o_textSize);
	return __this;
}

Alphabet_obj::Alphabet_obj()
{
}

void Alphabet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alphabet);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(forceX,"forceX");
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(yMult,"yMult");
	HX_MARK_MEMBER_NAME(xAdd,"xAdd");
	HX_MARK_MEMBER_NAME(yAdd,"yAdd");
	HX_MARK_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_MARK_MEMBER_NAME(isFreeplay,"isFreeplay");
	HX_MARK_MEMBER_NAME(textSize,"textSize");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_finalText,"_finalText");
	HX_MARK_MEMBER_NAME(yMulti,"yMulti");
	HX_MARK_MEMBER_NAME(lastSprite,"lastSprite");
	HX_MARK_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_MARK_MEMBER_NAME(splitWords,"splitWords");
	HX_MARK_MEMBER_NAME(isBold,"isBold");
	HX_MARK_MEMBER_NAME(lettersArray,"lettersArray");
	HX_MARK_MEMBER_NAME(finishedText,"finishedText");
	HX_MARK_MEMBER_NAME(typed,"typed");
	HX_MARK_MEMBER_NAME(typingSpeed,"typingSpeed");
	HX_MARK_MEMBER_NAME(loopNum,"loopNum");
	HX_MARK_MEMBER_NAME(xPos,"xPos");
	HX_MARK_MEMBER_NAME(curRow,"curRow");
	HX_MARK_MEMBER_NAME(dialogueSound,"dialogueSound");
	HX_MARK_MEMBER_NAME(consecutiveSpaces,"consecutiveSpaces");
	HX_MARK_MEMBER_NAME(typeTimer,"typeTimer");
	HX_MARK_MEMBER_NAME(LONG_TEXT_ADD,"LONG_TEXT_ADD");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alphabet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(forceX,"forceX");
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(yMult,"yMult");
	HX_VISIT_MEMBER_NAME(xAdd,"xAdd");
	HX_VISIT_MEMBER_NAME(yAdd,"yAdd");
	HX_VISIT_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_VISIT_MEMBER_NAME(isFreeplay,"isFreeplay");
	HX_VISIT_MEMBER_NAME(textSize,"textSize");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_finalText,"_finalText");
	HX_VISIT_MEMBER_NAME(yMulti,"yMulti");
	HX_VISIT_MEMBER_NAME(lastSprite,"lastSprite");
	HX_VISIT_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_VISIT_MEMBER_NAME(splitWords,"splitWords");
	HX_VISIT_MEMBER_NAME(isBold,"isBold");
	HX_VISIT_MEMBER_NAME(lettersArray,"lettersArray");
	HX_VISIT_MEMBER_NAME(finishedText,"finishedText");
	HX_VISIT_MEMBER_NAME(typed,"typed");
	HX_VISIT_MEMBER_NAME(typingSpeed,"typingSpeed");
	HX_VISIT_MEMBER_NAME(loopNum,"loopNum");
	HX_VISIT_MEMBER_NAME(xPos,"xPos");
	HX_VISIT_MEMBER_NAME(curRow,"curRow");
	HX_VISIT_MEMBER_NAME(dialogueSound,"dialogueSound");
	HX_VISIT_MEMBER_NAME(consecutiveSpaces,"consecutiveSpaces");
	HX_VISIT_MEMBER_NAME(typeTimer,"typeTimer");
	HX_VISIT_MEMBER_NAME(LONG_TEXT_ADD,"LONG_TEXT_ADD");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Alphabet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAdd") ) { return ::hx::Val( xAdd ); }
		if (HX_FIELD_EQ(inName,"yAdd") ) { return ::hx::Val( yAdd ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"xPos") ) { return ::hx::Val( xPos ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		if (HX_FIELD_EQ(inName,"yMult") ) { return ::hx::Val( yMult ); }
		if (HX_FIELD_EQ(inName,"typed") ) { return ::hx::Val( typed ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"forceX") ) { return ::hx::Val( forceX ); }
		if (HX_FIELD_EQ(inName,"yMulti") ) { return ::hx::Val( yMulti ); }
		if (HX_FIELD_EQ(inName,"isBold") ) { return ::hx::Val( isBold ); }
		if (HX_FIELD_EQ(inName,"curRow") ) { return ::hx::Val( curRow ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		if (HX_FIELD_EQ(inName,"addText") ) { return ::hx::Val( addText_dyn() ); }
		if (HX_FIELD_EQ(inName,"loopNum") ) { return ::hx::Val( loopNum ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { return ::hx::Val( textSize ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeTimer") ) { return ::hx::Val( typeTimer ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { return ::hx::Val( isMenuItem ); }
		if (HX_FIELD_EQ(inName,"isFreeplay") ) { return ::hx::Val( isFreeplay ); }
		if (HX_FIELD_EQ(inName,"_finalText") ) { return ::hx::Val( _finalText ); }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { return ::hx::Val( lastSprite ); }
		if (HX_FIELD_EQ(inName,"splitWords") ) { return ::hx::Val( splitWords ); }
		if (HX_FIELD_EQ(inName,"changeText") ) { return ::hx::Val( changeText_dyn() ); }
		if (HX_FIELD_EQ(inName,"timerCheck") ) { return ::hx::Val( timerCheck_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"typingSpeed") ) { return ::hx::Val( typingSpeed ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { return ::hx::Val( xPosResetted ); }
		if (HX_FIELD_EQ(inName,"lettersArray") ) { return ::hx::Val( lettersArray ); }
		if (HX_FIELD_EQ(inName,"finishedText") ) { return ::hx::Val( finishedText ); }
		if (HX_FIELD_EQ(inName,"doSplitWords") ) { return ::hx::Val( doSplitWords_dyn() ); }
		if (HX_FIELD_EQ(inName,"killTheTimer") ) { return ::hx::Val( killTheTimer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueSound") ) { return ::hx::Val( dialogueSound ); }
		if (HX_FIELD_EQ(inName,"LONG_TEXT_ADD") ) { return ::hx::Val( LONG_TEXT_ADD ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startTypedText") ) { return ::hx::Val( startTypedText_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"consecutiveSpaces") ) { return ::hx::Val( consecutiveSpaces ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Alphabet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAdd") ) { xAdd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAdd") ) { yAdd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xPos") ) { xPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMult") ) { yMult=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typed") ) { typed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceX") ) { forceX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMulti") ) { yMulti=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBold") ) { isBold=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curRow") ) { curRow=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loopNum") ) { loopNum=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { textSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeTimer") ) { typeTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { isMenuItem=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isFreeplay") ) { isFreeplay=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_finalText") ) { _finalText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { lastSprite=inValue.Cast<  ::AlphaCharacter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"splitWords") ) { splitWords=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"typingSpeed") ) { typingSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { xPosResetted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lettersArray") ) { lettersArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finishedText") ) { finishedText=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueSound") ) { dialogueSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LONG_TEXT_ADD") ) { LONG_TEXT_ADD=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"consecutiveSpaces") ) { consecutiveSpaces=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Alphabet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("forceX",0d,fc,86,fd));
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("yMult",09,c5,ba,de));
	outFields->push(HX_("xAdd",89,44,83,4f));
	outFields->push(HX_("yAdd",28,7b,2c,50));
	outFields->push(HX_("isMenuItem",5c,04,de,c6));
	outFields->push(HX_("isFreeplay",aa,a2,35,9d));
	outFields->push(HX_("textSize",0e,f4,4e,4f));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("_finalText",04,c7,73,eb));
	outFields->push(HX_("yMulti",40,a3,b1,04));
	outFields->push(HX_("lastSprite",fb,be,70,8e));
	outFields->push(HX_("xPosResetted",80,a7,a1,63));
	outFields->push(HX_("splitWords",2f,7e,9f,9d));
	outFields->push(HX_("isBold",8f,46,82,5e));
	outFields->push(HX_("lettersArray",8c,b9,e1,14));
	outFields->push(HX_("finishedText",3f,2d,d5,f6));
	outFields->push(HX_("typed",6a,70,cb,1a));
	outFields->push(HX_("typingSpeed",90,39,dc,28));
	outFields->push(HX_("loopNum",42,06,69,20));
	outFields->push(HX_("xPos",fc,af,8e,4f));
	outFields->push(HX_("curRow",7a,84,cf,3e));
	outFields->push(HX_("dialogueSound",97,58,b3,1b));
	outFields->push(HX_("consecutiveSpaces",77,fc,aa,aa));
	outFields->push(HX_("typeTimer",ab,1a,0e,d5));
	outFields->push(HX_("LONG_TEXT_ADD",92,bc,1d,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Alphabet_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,paused),HX_("paused",ae,40,84,ef)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,forceX),HX_("forceX",0d,fc,86,fd)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yMult),HX_("yMult",09,c5,ba,de)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,xAdd),HX_("xAdd",89,44,83,4f)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yAdd),HX_("yAdd",28,7b,2c,50)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isMenuItem),HX_("isMenuItem",5c,04,de,c6)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isFreeplay),HX_("isFreeplay",aa,a2,35,9d)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,textSize),HX_("textSize",0e,f4,4e,4f)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,_finalText),HX_("_finalText",04,c7,73,eb)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yMulti),HX_("yMulti",40,a3,b1,04)},
	{::hx::fsObject /*  ::AlphaCharacter */ ,(int)offsetof(Alphabet_obj,lastSprite),HX_("lastSprite",fb,be,70,8e)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,xPosResetted),HX_("xPosResetted",80,a7,a1,63)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Alphabet_obj,splitWords),HX_("splitWords",2f,7e,9f,9d)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isBold),HX_("isBold",8f,46,82,5e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Alphabet_obj,lettersArray),HX_("lettersArray",8c,b9,e1,14)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,finishedText),HX_("finishedText",3f,2d,d5,f6)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,typed),HX_("typed",6a,70,cb,1a)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,typingSpeed),HX_("typingSpeed",90,39,dc,28)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,loopNum),HX_("loopNum",42,06,69,20)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,xPos),HX_("xPos",fc,af,8e,4f)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,curRow),HX_("curRow",7a,84,cf,3e)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(Alphabet_obj,dialogueSound),HX_("dialogueSound",97,58,b3,1b)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,consecutiveSpaces),HX_("consecutiveSpaces",77,fc,aa,aa)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(Alphabet_obj,typeTimer),HX_("typeTimer",ab,1a,0e,d5)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,LONG_TEXT_ADD),HX_("LONG_TEXT_ADD",92,bc,1d,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Alphabet_obj_sStaticStorageInfo = 0;
#endif

static ::String Alphabet_obj_sMemberFields[] = {
	HX_("delay",83,d7,26,d7),
	HX_("paused",ae,40,84,ef),
	HX_("forceX",0d,fc,86,fd),
	HX_("targetY",e8,f3,67,88),
	HX_("yMult",09,c5,ba,de),
	HX_("xAdd",89,44,83,4f),
	HX_("yAdd",28,7b,2c,50),
	HX_("isMenuItem",5c,04,de,c6),
	HX_("isFreeplay",aa,a2,35,9d),
	HX_("textSize",0e,f4,4e,4f),
	HX_("text",ad,cc,f9,4c),
	HX_("_finalText",04,c7,73,eb),
	HX_("yMulti",40,a3,b1,04),
	HX_("lastSprite",fb,be,70,8e),
	HX_("xPosResetted",80,a7,a1,63),
	HX_("splitWords",2f,7e,9f,9d),
	HX_("isBold",8f,46,82,5e),
	HX_("lettersArray",8c,b9,e1,14),
	HX_("finishedText",3f,2d,d5,f6),
	HX_("typed",6a,70,cb,1a),
	HX_("typingSpeed",90,39,dc,28),
	HX_("changeText",3d,02,43,27),
	HX_("addText",6e,0f,37,89),
	HX_("doSplitWords",9a,d5,87,23),
	HX_("loopNum",42,06,69,20),
	HX_("xPos",fc,af,8e,4f),
	HX_("curRow",7a,84,cf,3e),
	HX_("dialogueSound",97,58,b3,1b),
	HX_("consecutiveSpaces",77,fc,aa,aa),
	HX_("typeTimer",ab,1a,0e,d5),
	HX_("startTypedText",75,b5,ca,1c),
	HX_("LONG_TEXT_ADD",92,bc,1d,a5),
	HX_("timerCheck",c3,fe,c7,d6),
	HX_("update",09,86,05,87),
	HX_("killTheTimer",52,ff,33,22),
	::String(null()) };

::hx::Class Alphabet_obj::__mClass;

void Alphabet_obj::__register()
{
	Alphabet_obj _hx_dummy;
	Alphabet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Alphabet",d3,38,ea,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Alphabet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Alphabet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alphabet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alphabet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

