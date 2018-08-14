//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Media.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Objects.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TRectangle *MainImageRectangleForm3;
	TImage *Image1;
	TFloatAnimation *FloatAnimation1;
	TImage *Image2;
	TFloatAnimation *FloatAnimation3;
	TImage *Image3;
	TFloatAnimation *FloatAnimation2;
	TImage *Image4;
	TFloatAnimation *FloatAnimation4;
	TLabel *ANIMALS;
	TLabel *COUNTER;
	TRectangle *Error1;
	TFloatAnimation *FloatAnimation5;
	TRectangle *Error2;
	TFloatAnimation *FloatAnimation6;
	TRectangle *Error3;
	TFloatAnimation *FloatAnimation7;
	TRectangle *Error4;
	TFloatAnimation *FloatAnimation8;
	TTimer *TimerErrorHide;
	TTimer *TimerClose;
	TTimer *TimerLeaflet1Start;
	TTimer *TimerLeaflet1End;
	TTimer *TimerLeaflet1Left;
	TTimer *TimerLeaflet1Right;
	TTimer *TimerLeaflet2End;
	TTimer *TimerLeaflet2Start;
	TTimer *TimerLeaflet2Left;
	TTimer *TimerLeaflet2Right;
	TTimer *TimerLeaflet3Start;
	TTimer *TimerLeaflet3End;
	TMediaPlayer *MediaPlayer1;
	TRectangle *AddScore1;
	TFloatAnimation *FloatAnimation11;
	TRectangle *AddScore2;
	TFloatAnimation *FloatAnimation12;
	TRectangle *SubtractScore;
	TFloatAnimation *FloatAnimation14;
	TMemo *Memo1;
	TTimer *TimerSubtractScoreStart;
	TTimer *TimerSubtractScoreEnd;
	TLabel *LabelScore;
	TTimer *TimerAddScore1Start;
	TTimer *TimerAddScore1End;
	TTimer *TimerAddScore2Start;
	TTimer *TimerAddScore2End;
	TTimer *TimerAddScore1Image3;
	TTimer *TimerAddScore2Image3;
	TTimer *TimerSubScoreImage3;
	TTimer *TimerAddScore1Image2;
	TTimer *TimerAddScore2Image2;
	TTimer *TimerSubScoreImage2;
	TTimer *TimerAddScore1Image4;
	TTimer *TimerAddScore2Image4;
	TTimer *TimerSubScoreImage4;
	TTimer *TimerSubtractScoreImage2;
	TTimer *TimerSubtractScoreImage3;
	TTimer *TimerSubtractScoreImage4;
	TLabel *LabelTextScore;
	TLabel *HARD;
	TTimer *TimerAsk1;
	TTimer *TimerAsk2;
	TTimer *TimerAnimalSound;
	TMediaPlayer *MediaPlayer2;
	TTimer *TimerTestAsk;
	TTimer *TimerTestVoice;
	TTimer *TimerAskVoice;
	TLabel *LabelTextErrorScore;
	TLabel *LabelErrorScore;
	TTimer *TimerSphereQuestEnd;
	TTimer *TimerSphereQuestRight;
	TTimer *TimerSphereQuestStart;
	TTimer *TimerSphereQuestLeft;
	TMediaPlayer *MediaPlayer3;
	TRectangle *MedalHome;
	TFloatAnimation *FloatAnimation16;
	TRectangle *MedalAir;
	TFloatAnimation *FloatAnimation17;
	TRectangle *MedalWild;
	TFloatAnimation *FloatAnimation18;
	TRectangle *SmallMedalInsects;
	TFloatAnimation *FloatAnimation19;
	TRectangle *MedalWater;
	TFloatAnimation *FloatAnimation20;
	TRectangle *SmallMedalAir;
	TFloatAnimation *FloatAnimation21;
	TRectangle *SmallMedalWater;
	TFloatAnimation *FloatAnimation22;
	TRectangle *SmallMedalWild;
	TFloatAnimation *FloatAnimation23;
	TRectangle *MedalInsects;
	TFloatAnimation *FloatAnimation24;
	TRectangle *SmallMedalHome;
	TFloatAnimation *FloatAnimation25;
	TRectangle *SphereQuest;
	TFloatAnimation *FloatAnimation15;
	TTimer *TimerFinal;
	TTimer *TimerReward;
	TLabel *FinalText;
	TLabel *FinalTextWild;
	TLabel *FinalTextHome;
	TLabel *FinalTextInsects;
	TLabel *FinalTextAir;
	TLabel *FinalTextWater;
	TLabel *Loading;
	TRectangle *Leaflet3;
	TFloatAnimation *FloatAnimation10;
	TRectangle *Leaflet1;
	TFloatAnimation *FloatAnimation13;
	TRectangle *Leaflet2;
	TFloatAnimation *FloatAnimation9;
	TTimer *TimerSubtractScoreImage1;
	TTimer *TimerAddScore1Image1;
	TTimer *TimerAddScore2Image1;
	TTimer *TimerSubScoreImage1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormHide(TObject *Sender);
	void __fastcall FormKeyUp(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall TimerLeaflet3StartTimer(TObject *Sender);
	void __fastcall TimerLeaflet3EndTimer(TObject *Sender);
	void __fastcall TimerLeaflet1StartTimer(TObject *Sender);
	void __fastcall TimerLeaflet1EndTimer(TObject *Sender);
	void __fastcall TimerLeaflet1LeftTimer(TObject *Sender);
	void __fastcall TimerLeaflet1RightTimer(TObject *Sender);
	void __fastcall TimerLeaflet2StartTimer(TObject *Sender);
	void __fastcall TimerLeaflet2EndTimer(TObject *Sender);
	void __fastcall TimerLeaflet2LeftTimer(TObject *Sender);
	void __fastcall TimerLeaflet2RightTimer(TObject *Sender);
	void __fastcall TimerAddScore1Image1Timer(TObject *Sender);
	void __fastcall TimerAddScore2Image1Timer(TObject *Sender);
	void __fastcall TimerSubScoreImage1Timer(TObject *Sender);
	void __fastcall TimerSubtractScoreImage1Timer(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall TimerRewardTimer(TObject *Sender);
	void __fastcall TimerFinalTimer(TObject *Sender);
	void __fastcall TimerCloseTimer(TObject *Sender);
	void __fastcall TimerErrorHideTimer(TObject *Sender);
	void __fastcall TimerAddScore2EndTimer(TObject *Sender);
	void __fastcall TimerAddScore2StartTimer(TObject *Sender);
	void __fastcall TimerSubtractScoreStartTimer(TObject *Sender);
	void __fastcall TimerSubtractScoreEndTimer(TObject *Sender);
	void __fastcall AddScore2Click(TObject *Sender);
	void __fastcall SubtractScoreClick(TObject *Sender);
	void __fastcall TimerAddScore1StartTimer(TObject *Sender);
	void __fastcall TimerAddScore1EndTimer(TObject *Sender);
	void __fastcall AddScore1Click(TObject *Sender);
	void __fastcall SphereQuestClick(TObject *Sender);
	void __fastcall TimerSphereQuestStartTimer(TObject *Sender);
	void __fastcall TimerSphereQuestEndTimer(TObject *Sender);
	void __fastcall TimerSphereQuestLeftTimer(TObject *Sender);
	void __fastcall TimerSphereQuestRightTimer(TObject *Sender);
	void __fastcall TimerTestAskTimer(TObject *Sender);
	void __fastcall TimerAnimalSoundTimer(TObject *Sender);
	void __fastcall TimerAskVoiceTimer(TObject *Sender);
	void __fastcall TimerAsk1Timer(TObject *Sender);
	void __fastcall TimerAsk2Timer(TObject *Sender);
	void __fastcall TimerTestVoiceTimer(TObject *Sender);
	void __fastcall TimerAddScore1Image2Timer(TObject *Sender);
	void __fastcall TimerAddScore2Image2Timer(TObject *Sender);
	void __fastcall TimerSubScoreImage2Timer(TObject *Sender);
	void __fastcall TimerSubtractScoreImage2Timer(TObject *Sender);
	void __fastcall TimerSubtractScoreImage4Timer(TObject *Sender);
	void __fastcall TimerSubScoreImage4Timer(TObject *Sender);
	void __fastcall TimerAddScore2Image4Timer(TObject *Sender);
	void __fastcall TimerAddScore1Image4Timer(TObject *Sender);
	void __fastcall TimerAddScore1Image3Timer(TObject *Sender);
	void __fastcall TimerAddScore2Image3Timer(TObject *Sender);
	void __fastcall TimerSubScoreImage3Timer(TObject *Sender);
	void __fastcall TimerSubtractScoreImage3Timer(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall MedalAirClick(TObject *Sender);
	void __fastcall MedalInsectsClick(TObject *Sender);
	void __fastcall MedalWaterClick(TObject *Sender);
	void __fastcall MedalHomeClick(TObject *Sender);
	void __fastcall MedalWildClick(TObject *Sender);
	void __fastcall SmallMedalAirClick(TObject *Sender);
	void __fastcall SmallMedalHomeClick(TObject *Sender);
	void __fastcall SmallMedalWaterClick(TObject *Sender);
	void __fastcall SmallMedalWildClick(TObject *Sender);
	void __fastcall SmallMedalInsectsClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
