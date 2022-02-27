#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_CustomFadeTransition
#include <CustomFadeTransition.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PauseSubState
#include <PauseSubState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_17d383cbce329512_17_new,"PauseSubState","new",0x00d575d9,"PauseSubState.new","PauseSubState.hx",17,0x953dc7b7)
static const ::String _hx_array_data_08e59567_2[] = {
	HX_("Continuar",8f,56,ce,ff),HX_("Reiniciar",88,18,9d,e2),HX_("Modo de Pratica",e6,f4,b7,4c),HX_("Botplay",5b,23,fb,2e),HX_("Sair para o Menu",c7,e5,26,36),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_122_update,"PauseSubState","update",0x6d53d230,"PauseSubState.update","PauseSubState.hx",122,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_183_destroy,"PauseSubState","destroy",0xc2ba82f3,"PauseSubState.destroy","PauseSubState.hx",183,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_190_changeSelection,"PauseSubState","changeSelection",0x8f960fb5,"PauseSubState.changeSelection","PauseSubState.hx",190,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_218_regenMenu,"PauseSubState","regenMenu",0xfb4cc935,"PauseSubState.regenMenu","PauseSubState.hx",218,0x953dc7b7)

void PauseSubState_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_17_new)
HXLINE(  23)		this->curSelected = 0;
HXLINE(  22)		this->menuItemsOG = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_2,5);
HXLINE(  21)		this->menuItems = ::Array_obj< ::String >::__new(0);
HXLINE(  33)		super::__construct();
HXLINE(  34)		this->menuItems = this->menuItemsOG;
HXLINE(  36)		 ::flixel::_hx_system::FlxSound _hx_tmp =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  36)		::String library = null();
HXDLIN(  36)		this->pauseMusic = _hx_tmp->loadEmbedded(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),true,true,null());
HXLINE(  37)		this->pauseMusic->set_volume(( (Float)(0) ));
HXLINE(  38)		 ::flixel::_hx_system::FlxSound _hx_tmp1 = this->pauseMusic;
HXDLIN(  38)		 ::flixel::math::FlxRandom _hx_tmp2 = ::flixel::FlxG_obj::random;
HXDLIN(  38)		_hx_tmp1->play(false,_hx_tmp2->_hx_int(0,::Std_obj::_hx_int((this->pauseMusic->_length / ( (Float)(2) ))),null()),null());
HXLINE(  40)		::flixel::FlxG_obj::sound->list->add(this->pauseMusic).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE(  42)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  43)		bg->set_alpha(( (Float)(0) ));
HXLINE(  44)		bg->scrollFactor->set(null(),null());
HXLINE(  45)		this->add(bg);
HXLINE(  47)		 ::flixel::text::FlxText levelInfo =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,15,0,HX_("",00,00,00,00),32,null());
HXLINE(  48)		levelInfo->set_text(( (::String)((levelInfo->text + ::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic))) ));
HXLINE(  49)		levelInfo->scrollFactor->set(null(),null());
HXLINE(  50)		levelInfo->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  51)		levelInfo->updateHitbox();
HXLINE(  52)		this->add(levelInfo);
HXLINE(  54)		 ::flixel::text::FlxText levelDifficulty =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,47,0,HX_("",00,00,00,00),32,null());
HXLINE(  55)		::String levelDifficulty1 = levelDifficulty->text;
HXDLIN(  55)		levelDifficulty->set_text((levelDifficulty1 + ::CoolUtil_obj::difficultyString()));
HXLINE(  56)		levelDifficulty->scrollFactor->set(null(),null());
HXLINE(  57)		levelDifficulty->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  58)		levelDifficulty->updateHitbox();
HXLINE(  59)		this->add(levelDifficulty);
HXLINE(  61)		 ::flixel::text::FlxText blueballedTxt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,79,0,HX_("",00,00,00,00),32,null());
HXLINE(  62)		blueballedTxt->set_text((HX_("Blueballed: ",fe,a6,48,b4) + ::PlayState_obj::deathCounter));
HXLINE(  63)		blueballedTxt->scrollFactor->set(null(),null());
HXLINE(  64)		blueballedTxt->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  65)		blueballedTxt->updateHitbox();
HXLINE(  66)		this->add(blueballedTxt);
HXLINE(  68)		this->practiceText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,116,0,HX_("PRACTICE MODE",e8,14,ba,86),32,null());
HXLINE(  69)		this->practiceText->scrollFactor->set(null(),null());
HXLINE(  70)		this->practiceText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  71)		 ::flixel::text::FlxText _hx_tmp3 = this->practiceText;
HXDLIN(  71)		int _hx_tmp4 = ::flixel::FlxG_obj::width;
HXDLIN(  71)		_hx_tmp3->set_x((( (Float)(_hx_tmp4) ) - (this->practiceText->get_width() + 20)));
HXLINE(  72)		this->practiceText->updateHitbox();
HXLINE(  73)		this->practiceText->set_visible(::PlayState_obj::practiceMode);
HXLINE(  74)		this->add(this->practiceText);
HXLINE(  76)		this->botplayText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,(::flixel::FlxG_obj::height - 40),0,HX_("BOTPLAY",5b,cf,7d,e1),32,null());
HXLINE(  77)		this->botplayText->scrollFactor->set(null(),null());
HXLINE(  78)		this->botplayText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  79)		 ::flixel::text::FlxText _hx_tmp5 = this->botplayText;
HXDLIN(  79)		int _hx_tmp6 = ::flixel::FlxG_obj::width;
HXDLIN(  79)		_hx_tmp5->set_x((( (Float)(_hx_tmp6) ) - (this->botplayText->get_width() + 20)));
HXLINE(  80)		this->botplayText->updateHitbox();
HXLINE(  81)		this->botplayText->set_visible(::PlayState_obj::cpuControlled);
HXLINE(  82)		this->add(this->botplayText);
HXLINE(  84)		blueballedTxt->set_alpha(( (Float)(0) ));
HXLINE(  85)		levelDifficulty->set_alpha(( (Float)(0) ));
HXLINE(  86)		levelInfo->set_alpha(( (Float)(0) ));
HXLINE(  88)		int _hx_tmp7 = ::flixel::FlxG_obj::width;
HXDLIN(  88)		levelInfo->set_x((( (Float)(_hx_tmp7) ) - (levelInfo->get_width() + 20)));
HXLINE(  89)		int _hx_tmp8 = ::flixel::FlxG_obj::width;
HXDLIN(  89)		levelDifficulty->set_x((( (Float)(_hx_tmp8) ) - (levelDifficulty->get_width() + 20)));
HXLINE(  90)		int _hx_tmp9 = ::flixel::FlxG_obj::width;
HXDLIN(  90)		blueballedTxt->set_x((( (Float)(_hx_tmp9) ) - (blueballedTxt->get_width() + 20)));
HXLINE(  92)		::flixel::tweens::FlxTween_obj::tween(bg, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  93)		::flixel::tweens::FlxTween_obj::tween(levelInfo, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),20)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.3))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  94)		::flixel::tweens::FlxTween_obj::tween(levelDifficulty, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(levelDifficulty->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.5))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  95)		::flixel::tweens::FlxTween_obj::tween(blueballedTxt, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(blueballedTxt->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.7))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE(  97)		this->grpMenuShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  98)		this->add(this->grpMenuShit);
HXLINE( 100)		{
HXLINE( 100)			int _g = 0;
HXDLIN( 100)			int _g1 = this->menuItems->length;
HXDLIN( 100)			while((_g < _g1)){
HXLINE( 100)				_g = (_g + 1);
HXDLIN( 100)				int i = (_g - 1);
HXLINE( 102)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 103)				songText->isMenuItem = true;
HXLINE( 104)				songText->targetY = ( (Float)(i) );
HXLINE( 105)				this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 108)		this->changeSelection(null());
HXLINE( 110)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE( 113)		this->addVirtualPad(::ui::FlxDPadMode_obj::UP_DOWN_dyn(),::ui::FlxActionMode_obj::A_dyn());
HXLINE( 114)		 ::flixel::FlxCamera camcontrol =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE( 115)		::flixel::FlxG_obj::cameras->add(camcontrol,null()).StaticCast<  ::flixel::FlxCamera >();
HXLINE( 116)		{
HXLINE( 116)			 ::flixel::FlxCamera camcontrol1 = camcontrol;
HXDLIN( 116)			camcontrol1->bgColor = (camcontrol1->bgColor & 16777215);
HXDLIN( 116)			 ::flixel::FlxCamera camcontrol2 = camcontrol;
HXDLIN( 116)			camcontrol2->bgColor = (camcontrol2->bgColor | 0);
            		}
HXLINE( 117)		this->_virtualpad->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,camcontrol));
            	}

Dynamic PauseSubState_obj::__CreateEmpty() { return new PauseSubState_obj; }

void *PauseSubState_obj::_hx_vtable = 0;

Dynamic PauseSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseSubState_obj > _hx_result = new PauseSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PauseSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x519cdafb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x519cdafb;
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

void PauseSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_122_update)
HXLINE( 123)		if ((this->pauseMusic->_volume < ((Float)0.5))) {
HXLINE( 124)			 ::flixel::_hx_system::FlxSound fh = this->pauseMusic;
HXDLIN( 124)			fh->set_volume((fh->_volume + (((Float)0.01) * elapsed)));
            		}
HXLINE( 126)		this->super::update(elapsed);
HXLINE( 128)		bool upP = ::PlayerSettings_obj::player1->controls->_ui_upP->check();
HXLINE( 129)		bool downP = ::PlayerSettings_obj::player1->controls->_ui_downP->check();
HXLINE( 130)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 132)		if (upP) {
HXLINE( 134)			this->changeSelection(-1);
            		}
HXLINE( 136)		if (downP) {
HXLINE( 138)			this->changeSelection(1);
            		}
HXLINE( 141)		if (accepted) {
HXLINE( 143)			::String daSelected = this->menuItems->__get(this->curSelected);
HXLINE( 145)			::String _hx_switch_0 = daSelected;
            			if (  (_hx_switch_0==HX_("BACK",27,a2,d1,2b)) ){
HXLINE( 176)				this->menuItems = this->menuItemsOG;
HXLINE( 177)				this->regenMenu();
HXLINE( 175)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Botplay",5b,23,fb,2e)) ){
HXLINE( 158)				::PlayState_obj::cpuControlled = !(::PlayState_obj::cpuControlled);
HXLINE( 159)				::PlayState_obj::usedPractice = true;
HXLINE( 160)				this->botplayText->set_visible(::PlayState_obj::cpuControlled);
HXLINE( 157)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Exit to menu",82,87,9a,a9)) ){
HXLINE( 162)				::PlayState_obj::deathCounter = 0;
HXLINE( 163)				::PlayState_obj::seenCutscene = false;
HXLINE( 164)				::CustomFadeTransition_obj::nextCamera = ::PauseSubState_obj::transCamera;
HXLINE( 165)				if (::PlayState_obj::isStoryMode) {
HXLINE( 166)					::MusicBeatState_obj::switchState( ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				else {
HXLINE( 168)					::MusicBeatState_obj::switchState( ::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            				}
HXLINE( 170)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 170)				::String library = null();
HXDLIN( 170)				_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
HXLINE( 171)				::PlayState_obj::usedPractice = false;
HXLINE( 172)				::PlayState_obj::changedDifficulty = false;
HXLINE( 173)				::PlayState_obj::cpuControlled = false;
HXLINE( 161)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Restart Song",06,b6,fe,13)) ){
HXLINE( 154)				::CustomFadeTransition_obj::nextCamera = ::PauseSubState_obj::transCamera;
HXLINE( 155)				::MusicBeatState_obj::resetState();
HXLINE( 156)				::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 153)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Resume",cd,dd,18,3d)) ){
HXLINE( 148)				this->close();
HXDLIN( 148)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("Toggle Practice Mode",7c,8b,b4,6b)) ){
HXLINE( 150)				::PlayState_obj::practiceMode = !(::PlayState_obj::practiceMode);
HXLINE( 151)				::PlayState_obj::usedPractice = true;
HXLINE( 152)				this->practiceText->set_visible(::PlayState_obj::practiceMode);
HXLINE( 149)				goto _hx_goto_3;
            			}
            			_hx_goto_3:;
            		}
            	}


void PauseSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_183_destroy)
HXLINE( 184)		this->pauseMusic->destroy();
HXLINE( 186)		this->super::destroy();
            	}


void PauseSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_190_changeSelection)
HXLINE( 191)		 ::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 193)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 193)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 195)		if ((this->curSelected < 0)) {
HXLINE( 196)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 197)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 198)			this->curSelected = 0;
            		}
HXLINE( 200)		int bullShit = 0;
HXLINE( 202)		{
HXLINE( 202)			int _g = 0;
HXDLIN( 202)			::Array< ::Dynamic> _g1 = this->grpMenuShit->members;
HXDLIN( 202)			while((_g < _g1->length)){
HXLINE( 202)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 202)				_g = (_g + 1);
HXLINE( 204)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 205)				bullShit = (bullShit + 1);
HXLINE( 207)				item->set_alpha(((Float)0.6));
HXLINE( 210)				if ((item->targetY == 0)) {
HXLINE( 212)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,changeSelection,(void))

void PauseSubState_obj::regenMenu(){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_218_regenMenu)
HXLINE( 219)		{
HXLINE( 219)			int _g = 0;
HXDLIN( 219)			int _g1 = this->grpMenuShit->members->get_length();
HXDLIN( 219)			while((_g < _g1)){
HXLINE( 219)				_g = (_g + 1);
HXDLIN( 219)				int i = (_g - 1);
HXLINE( 220)				this->grpMenuShit->remove(Dynamic( this->grpMenuShit->members->__get(0)).StaticCast<  ::Alphabet >(),true).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 222)		{
HXLINE( 222)			int _g2 = 0;
HXDLIN( 222)			int _g3 = this->menuItems->length;
HXDLIN( 222)			while((_g2 < _g3)){
HXLINE( 222)				_g2 = (_g2 + 1);
HXDLIN( 222)				int i = (_g2 - 1);
HXLINE( 223)				 ::Alphabet item =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 224)				item->isMenuItem = true;
HXLINE( 225)				item->targetY = ( (Float)(i) );
HXLINE( 226)				this->grpMenuShit->add(item).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 228)		this->curSelected = 0;
HXLINE( 229)		this->changeSelection(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(PauseSubState_obj,regenMenu,(void))

 ::flixel::FlxCamera PauseSubState_obj::transCamera;


::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PauseSubState_obj > __this = new PauseSubState_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PauseSubState_obj *__this = (PauseSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseSubState_obj), true, "PauseSubState"));
	*(void **)__this = PauseSubState_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PauseSubState_obj::PauseSubState_obj()
{
}

void PauseSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseSubState);
	HX_MARK_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_MARK_MEMBER_NAME(practiceText,"practiceText");
	HX_MARK_MEMBER_NAME(botplayText,"botplayText");
	 ::MusicBeatSubstate_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_VISIT_MEMBER_NAME(practiceText,"practiceText");
	HX_VISIT_MEMBER_NAME(botplayText,"botplayText");
	 ::MusicBeatSubstate_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PauseSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"regenMenu") ) { return ::hx::Val( regenMenu_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { return ::hx::Val( grpMenuShit ); }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { return ::hx::Val( menuItemsOG ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"botplayText") ) { return ::hx::Val( botplayText ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { return ::hx::Val( practiceText ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PauseSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"transCamera") ) { outValue = ( transCamera ); return true; }
	}
	return false;
}

::hx::Val PauseSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { grpMenuShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { menuItemsOG=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"botplayText") ) { botplayText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { practiceText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PauseSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"transCamera") ) { transCamera=ioValue.Cast<  ::flixel::FlxCamera >(); return true; }
	}
	return false;
}

void PauseSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpMenuShit",04,32,b8,f0));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("menuItemsOG",39,55,bf,30));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	outFields->push(HX_("practiceText",08,73,28,84));
	outFields->push(HX_("botplayText",c8,cd,df,87));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PauseSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PauseSubState_obj,grpMenuShit),HX_("grpMenuShit",04,32,b8,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItemsOG),HX_("menuItemsOG",39,55,bf,30)},
	{::hx::fsInt,(int)offsetof(PauseSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PauseSubState_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,practiceText),HX_("practiceText",08,73,28,84)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,botplayText),HX_("botplayText",c8,cd,df,87)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PauseSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(void *) &PauseSubState_obj::transCamera,HX_("transCamera",ed,e0,5c,21)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PauseSubState_obj_sMemberFields[] = {
	HX_("grpMenuShit",04,32,b8,f0),
	HX_("menuItems",e1,15,e5,5c),
	HX_("menuItemsOG",39,55,bf,30),
	HX_("curSelected",fb,eb,ab,32),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("practiceText",08,73,28,84),
	HX_("botplayText",c8,cd,df,87),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("changeSelection",bc,98,b5,48),
	HX_("regenMenu",fc,42,dc,26),
	::String(null()) };

static void PauseSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PauseSubState_obj::transCamera,"transCamera");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PauseSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PauseSubState_obj::transCamera,"transCamera");
};

#endif

::hx::Class PauseSubState_obj::__mClass;

static ::String PauseSubState_obj_sStaticFields[] = {
	HX_("transCamera",ed,e0,5c,21),
	::String(null())
};

void PauseSubState_obj::__register()
{
	PauseSubState_obj _hx_dummy;
	PauseSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PauseSubState",67,95,e5,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PauseSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &PauseSubState_obj::__SetStatic;
	__mClass->mMarkFunc = PauseSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PauseSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

