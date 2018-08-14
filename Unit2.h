//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Gestures.hpp>
#include <FMX.Media.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPanel *PanelInsects;
	TImage *ImageInsects;
	TPanel *PanelWater;
	TImage *ImageWater;
	TPanel *PanelAir;
	TImage *ImageAir;
	TPanel *PanelHome;
	TImage *ImageHome;
	TTimer *TimerHelp5Wait;
	TTimer *TimerHelp5Start;
	TPanel *PanelWild;
	TImage *ImageWild;
	TTimer *TimerHelpFingLeft;
	TTimer *TimerHelpFingRight;
	TTimer *TimerHelpFingUp;
	TTimer *TimerHelpFingDown;
	TTimer *TimerHelpFingStart;
	TRectangle *ZoneCapBtn;
	TRectangle *SphereInfo;
	TFloatAnimation *FloatAnimation5;
	TRectangle *CapBtn1;
	TTimer *TimerSphereInfoStart;
	TTimer *TimerSphereInfoLeft;
	TTimer *TimerSphereInfoRight;
	TRectangle *SphereTesting;
	TFloatAnimation *FloatAnimation2;
	TTimer *TimerSphereTestingWait;
	TTimer *TimerSphereTestingStart;
	TTimer *TimerSphereTestingLeft;
	TTimer *TimerSphereTestingRight;
	TLabel *DescriptionWhite;
	TFloatAnimation *FloatAnimation3;
	TTimer *TimerDescriptionStart;
	TLabel *ALBUM;
	TTimer *TimerSwypeDown;
	TTimer *TimerTest;
	TRectangle *Help1;
	TFloatAnimation *FloatAnimation15;
	TLabel *DiscriptionHelp1;
	TFloatAnimation *FloatAnimation17;
	TTimer *TimerHelpWait1;
	TTimer *TimerHelpStart1;
	TRectangle *Help2;
	TFloatAnimation *FloatAnimation6;
	TLabel *DiscriptionHelp2;
	TFloatAnimation *FloatAnimation7;
	TTimer *TimerHelpStart2;
	TTimer *TimerHelpWait2;
	TTimer *TimerDescriptionWait;
	TTimer *TimerDescriptionEnd;
	TLabel *Discription;
	TFloatAnimation *FloatAnimation8;
	TMediaPlayer *MediaPlayer1;
	TTimer *TimerHelp3Start;
	TTimer *TimerHelp3Wait;
	TRectangle *Help3;
	TFloatAnimation *FloatAnimation18;
	TLabel *DiscriptionHelp3;
	TFloatAnimation *FloatAnimation24;
	TLabel *DiscriptionHelp4;
	TFloatAnimation *FloatAnimation25;
	TRectangle *Help4;
	TFloatAnimation *FloatAnimation19;
	TTimer *TimerHelp4Wait;
	TTimer *TimerHelp4Start;
	TRectangle *Help6;
	TFloatAnimation *FloatAnimation21;
	TLabel *DiscriptionHelp6;
	TFloatAnimation *FloatAnimation23;
	TTimer *TimerHelp6Start;
	TTimer *TimerHelp6Wait;
	TLabel *DescriptionColor;
	TFloatAnimation *FloatAnimation4;
	TLabel *DescriptionBlack;
	TFloatAnimation *FloatAnimation9;
	TTimer *TimerCapBtnLeft;
	TTimer *TimerCapBtnRight;
	TTimer *TimerCapBtnStart;
	TTimer *TimerCapBtnEnd;
	TRectangle *ArrowUp;
	TFloatAnimation *FloatAnimation10;
	TRectangle *ArrowDown;
	TFloatAnimation *FloatAnimation11;
	TRectangle *ArrowRight;
	TFloatAnimation *FloatAnimation12;
	TRectangle *ArrowLeft;
	TFloatAnimation *FloatAnimation13;
	TLabel *Loading;
	TTimer *TimerSwypeDownWait;
	TTimer *TimerTestWait;
	TRectangle *ZoneArrowUp;
	TRectangle *ZoneArrowDown;
	TRectangle *ZoneArrowLeft;
	TRectangle *ZoneArrowRight;
	TMediaPlayer *MediaPlayer2;
	TTimer *TimerSphereSound;
	TGestureManager *GestureManager1;
	TLabel *DiscriptionHelp5;
	TFloatAnimation *FloatAnimation22;
	TRectangle *Help5;
	TFloatAnimation *FloatAnimation20;
	TTimer *TimerAnimalSoundWait;
	TTimer *TimerAnimalSound;
	TTimer *TimerAnimalSnd;
	TRectangle *HelpFing;
	TFloatAnimation *FloatAnimation1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormDeactivate(TObject *Sender);
	void __fastcall FormHide(TObject *Sender);
	void __fastcall FormKeyUp(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall TimerHelp5StartTimer(TObject *Sender);
	void __fastcall TimerAnimalSoundWaitTimer(TObject *Sender);
	void __fastcall TimerAnimalSoundTimer(TObject *Sender);
	void __fastcall TimerAnimalSndTimer(TObject *Sender);
	void __fastcall TimerHelp5WaitTimer(TObject *Sender);
	void __fastcall TimerHelp6WaitTimer(TObject *Sender);
	void __fastcall TimerHelp6StartTimer(TObject *Sender);
	void __fastcall ArrowUpClick(TObject *Sender);
	void __fastcall ArrowLeftClick(TObject *Sender);
	void __fastcall ArrowRightClick(TObject *Sender);
	void __fastcall ArrowDownClick(TObject *Sender);
	void __fastcall TimerSwypeDownWaitTimer(TObject *Sender);
	void __fastcall TimerSwypeDownTimer(TObject *Sender);
	void __fastcall TimerTestWaitTimer(TObject *Sender);
	void __fastcall TimerTestTimer(TObject *Sender);
	void __fastcall TimerDescriptionStartTimer(TObject *Sender);
	void __fastcall TimerDescriptionWaitTimer(TObject *Sender);
	void __fastcall TimerDescriptionEndTimer(TObject *Sender);
	void __fastcall TimerSphereSoundTimer(TObject *Sender);
	void __fastcall TimerHelp3StartTimer(TObject *Sender);
	void __fastcall TimerHelp3WaitTimer(TObject *Sender);
	void __fastcall TimerHelpStart1Timer(TObject *Sender);
	void __fastcall TimerHelpWait1Timer(TObject *Sender);
	void __fastcall TimerHelp4StartTimer(TObject *Sender);
	void __fastcall TimerHelp4WaitTimer(TObject *Sender);
	void __fastcall TimerHelpStart2Timer(TObject *Sender);
	void __fastcall TimerHelpWait2Timer(TObject *Sender);
	void __fastcall TimerHelpFingDownTimer(TObject *Sender);
	void __fastcall TimerHelpFingLeftTimer(TObject *Sender);
	void __fastcall TimerHelpFingRightTimer(TObject *Sender);
	void __fastcall TimerHelpFingUpTimer(TObject *Sender);
	void __fastcall TimerHelpFingStartTimer(TObject *Sender);
	void __fastcall TimerSphereInfoStartTimer(TObject *Sender);
	void __fastcall TimerSphereInfoLeftTimer(TObject *Sender);
	void __fastcall TimerSphereInfoRightTimer(TObject *Sender);
	void __fastcall SphereInfoClick(TObject *Sender);
	void __fastcall TimerCapBtnEndTimer(TObject *Sender);
	void __fastcall TimerCapBtnStartTimer(TObject *Sender);
	void __fastcall TimerCapBtnLeftTimer(TObject *Sender);
	void __fastcall TimerCapBtnRightTimer(TObject *Sender);
	void __fastcall TimerSphereTestingStartTimer(TObject *Sender);
	void __fastcall TimerSphereTestingWaitTimer(TObject *Sender);
	void __fastcall TimerSphereTestingLeftTimer(TObject *Sender);
	void __fastcall TimerSphereTestingRightTimer(TObject *Sender);
	void __fastcall SphereTestingClick(TObject *Sender);
	void __fastcall CapBtn1Click(TObject *Sender);
	void __fastcall ImageHomeGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall ImageAirGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall ImageInsectsGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall ImageWaterGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall ImageWildGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
