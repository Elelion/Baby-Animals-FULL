//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Media.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Gestures.hpp>
#include <FMX.Controls.Presentation.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMediaPlayer *MediaPlayer1;
	TRectangle *MainImageRectangle;
	TTimer *TimerLeaflet1End;
	TTimer *TimerLeaflet1Left;
	TTimer *TimerLeaflet1Right;
	TTimer *TimerLeaflet1Start;
	TTimer *TimerLeaflet2End;
	TTimer *TimerLeaflet2Left;
	TTimer *TimerLeaflet2Right;
	TTimer *TimerLeaflet2Start;
	TTimer *TimerSphere1End;
	TTimer *TimerSphere1Strat;
	TTimer *TimerSphere2End;
	TTimer *TimerSphere2Start;
	TTimer *TimerSphere3End;
	TTimer *TimerSphere3Start;
	TTimer *TimerSphere4End;
	TTimer *TimerSphere4Start;
	TTimer *TimerSphere5Left;
	TTimer *TimerSphere5Right;
	TTimer *TimerSphere5Start;
	TRectangle *AnimalsAir;
	TRectangle *AnimalsHome;
	TRectangle *AnimalsInsects;
	TRectangle *AnimalsWater;
	TRectangle *AnimalsWild;
	TGestureManager *GestureManager1;
	TFloatAnimation *FloatAnimation7;
	TFloatAnimation *FloatAnimation8;
	TFloatAnimation *FloatAnimation9;
	TFloatAnimation *FloatAnimation10;
	TFloatAnimation *FloatAnimation11;
	TRectangle *Animal1;
	TFloatAnimation *FloatAnimation6;
	TRectangle *CapBtn1;
	TRectangle *Leaflet1;
	TRectangle *Leaflet2;
	TRectangle *Sphere1;
	TFloatAnimation *FloatAnimation1;
	TRectangle *Sphere2;
	TFloatAnimation *FloatAnimation3;
	TRectangle *Sphere3;
	TFloatAnimation *FloatAnimation2;
	TRectangle *Sphere4;
	TFloatAnimation *FloatAnimation4;
	TRectangle *Sphere5;
	TFloatAnimation *FloatAnimation5;
	TTimer *TimerHelpFingUp;
	TTimer *TimerHelpFingDown;
	TTimer *TimerHelpFingRight;
	TTimer *TimerHelpFingLeft;
	TFloatAnimation *FloatAnimation13;
	TFloatAnimation *FloatAnimation14;
	TRectangle *SphereHardTesting;
	TFloatAnimation *FloatAnimation16;
	TRectangle *Help1;
	TFloatAnimation *FloatAnimation15;
	TTimer *TimerSphereHardTestingStart;
	TTimer *TimerSphereHardTestingLeft;
	TTimer *TimerSphereHardTestingRight;
	TTimer *TimerSphereHardTestingWait;
	TLabel *DiscriptionHelp1;
	TRectangle *HelpFing;
	TFloatAnimation *FloatAnimation12;
	TTimer *TimerHelpStart;
	TFloatAnimation *FloatAnimation17;
	TTimer *TimerHelpWait;
	TRectangle *Help2;
	TFloatAnimation *FloatAnimation18;
	TRectangle *Help3;
	TFloatAnimation *FloatAnimation19;
	TRectangle *Help4;
	TFloatAnimation *FloatAnimation20;
	TRectangle *Help5;
	TFloatAnimation *FloatAnimation21;
	TLabel *DiscriptionHelp4;
	TFloatAnimation *FloatAnimation22;
	TLabel *DiscriptionHelp5;
	TFloatAnimation *FloatAnimation23;
	TLabel *DiscriptionHelp2;
	TFloatAnimation *FloatAnimation24;
	TLabel *DiscriptionHelp3;
	TFloatAnimation *FloatAnimation25;
	TTimer *TimerHelp4Start;
	TTimer *TimerHelp4Wait;
	TTimer *TimerHelp5Start;
	TTimer *TimerHelp5Wait;
	TTimer *TimerHelp2Start;
	TTimer *TimerHelp2Wait;
	TTimer *TimerHelp3Start;
	TTimer *TimerHelp3Wait;
	TLabel *Loading;
	TTimer *TimerHardTest;
	TTimer *TimerCapBtnStart;
	TTimer *TimerCapBtnEnd;
	TTimer *TimerCapBtnLeft;
	TTimer *TimerCapBtnRight;
	TTimer *TimerAlbumSound;
	TMediaPlayer *MediaPlayer2;
	TTimer *TimerSphereSound;
	TRectangle *ArrowUp;
	TFloatAnimation *FloatAnimation26;
	TRectangle *ArrowDown;
	TFloatAnimation *FloatAnimation27;
	TRectangle *ArrowLeft;
	TFloatAnimation *FloatAnimation28;
	TRectangle *ArrowRight;
	TFloatAnimation *FloatAnimation29;
	TRectangle *ZoneArrowUp;
	TRectangle *ZoneArrowDown;
	TRectangle *ZoneArrowRight;
	TRectangle *ZoneArrowLeft;
	void __fastcall TimerSphere1StratTimer(TObject *Sender);
	void __fastcall TimerSphere1EndTimer(TObject *Sender);
	void __fastcall TimerSphere2StartTimer(TObject *Sender);
	void __fastcall TimerSphere2EndTimer(TObject *Sender);
	void __fastcall TimerLeaflet1StartTimer(TObject *Sender);
	void __fastcall TimerLeaflet1EndTimer(TObject *Sender);
	void __fastcall TimerLeaflet1LeftTimer(TObject *Sender);
	void __fastcall TimerLeaflet1RightTimer(TObject *Sender);
	void __fastcall TimerSphere3StartTimer(TObject *Sender);
	void __fastcall TimerSphere3EndTimer(TObject *Sender);
	void __fastcall TimerSphere4StartTimer(TObject *Sender);
	void __fastcall TimerSphere4EndTimer(TObject *Sender);
	void __fastcall TimerLeaflet2StartTimer(TObject *Sender);
	void __fastcall TimerLeaflet2EndTimer(TObject *Sender);
	void __fastcall TimerLeaflet2LeftTimer(TObject *Sender);
	void __fastcall TimerLeaflet2RightTimer(TObject *Sender);
	void __fastcall TimerSphere5StartTimer(TObject *Sender);
	void __fastcall TimerSphere5LeftTimer(TObject *Sender);
	void __fastcall TimerSphere5RightTimer(TObject *Sender);
	void __fastcall CapBtn1Click(TObject *Sender);
	void __fastcall Sphere5Click(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall AnimalsWildGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall AnimalsWaterGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall AnimalsInsectsGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall AnimalsHomeGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall AnimalsAirGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall TimerHelpFingRightTimer(TObject *Sender);
	void __fastcall TimerHelpFingLeftTimer(TObject *Sender);
	void __fastcall TimerHelpFingUpTimer(TObject *Sender);
	void __fastcall TimerHelpFingDownTimer(TObject *Sender);
	void __fastcall MainImageRectangleGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall TimerSphereHardTestingWaitTimer(TObject *Sender);
	void __fastcall TimerSphereHardTestingStartTimer(TObject *Sender);
	void __fastcall TimerSphereHardTestingLeftTimer(TObject *Sender);
	void __fastcall TimerSphereHardTestingRightTimer(TObject *Sender);
	void __fastcall TimerHelpStartTimer(TObject *Sender);
	void __fastcall TimerHelpWaitTimer(TObject *Sender);
	void __fastcall TimerHelp4StartTimer(TObject *Sender);
	void __fastcall TimerHelp5StartTimer(TObject *Sender);
	void __fastcall TimerHelp4WaitTimer(TObject *Sender);
	void __fastcall TimerHelp5WaitTimer(TObject *Sender);
	void __fastcall TimerHelp2StartTimer(TObject *Sender);
	void __fastcall TimerHelp3StartTimer(TObject *Sender);
	void __fastcall TimerHelp2WaitTimer(TObject *Sender);
	void __fastcall TimerHelp3WaitTimer(TObject *Sender);
	void __fastcall SphereHardTestingClick(TObject *Sender);
	void __fastcall TimerHardTestTimer(TObject *Sender);
	void __fastcall TimerCapBtnStartTimer(TObject *Sender);
	void __fastcall TimerCapBtnRightTimer(TObject *Sender);
	void __fastcall TimerCapBtnLeftTimer(TObject *Sender);
	void __fastcall TimerCapBtnEndTimer(TObject *Sender);
	void __fastcall TimerAlbumSoundTimer(TObject *Sender);
	void __fastcall TimerSphereSoundTimer(TObject *Sender);
	void __fastcall ArrowLeftClick(TObject *Sender);
	void __fastcall ArrowRightClick(TObject *Sender);
	void __fastcall ArrowUpClick(TObject *Sender);
	void __fastcall ArrowDownClick(TObject *Sender);
	void __fastcall Sphere1Click(TObject *Sender);
	void __fastcall Sphere3Click(TObject *Sender);
	void __fastcall Sphere4Click(TObject *Sender);
	void __fastcall Sphere2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
