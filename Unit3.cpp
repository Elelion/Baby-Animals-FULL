//---------------------------------------------------------------------------

#include <fmx.h>
#include <System.IOUtils.hpp>
#include <System.SysUtils.hpp>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"

int F3_LeafletX1, F3_LeafletY1, F3_i1, F3_j1; //���������� ��� 1�� ��������
int F3_LeafletX2, F3_LeafletY2, F3_i2, F3_j2; //���������� ��� 2�� ��������
int F3_LeafletY3, F3_i3 ; //���������� ��� 3�� �������� (������ ������ � ���)

int F3_AddScore1Y1, F3_i4; //+25 score
int F3_AddScore2Y1, F3_i5; //+50 score
int F3_SubScoreY1,  F3_i6;   //-10 score

int SphereQuestX1, SphereQuestY1, F3_SQ_i1, F3_SQ_j1; //���������� ��� SphereQuest ������.

int HARD_TEST = 0; //��� ���� �����
int SCORE = 0; //��� ���������� �����
int ERR_SCORE = 0; //��� �������� ������
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm3 *Form3;

//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//RANDOM FOR HARD TESTING.......................................................
void HARD_0st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.jpg");
}

void HARD_1st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg"); //BONUS
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.jpg");
}

void HARD_2st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.jpg");
}

void HARD_3st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.jpg");
}

void HARD_4st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.jpg");
}

void HARD_5st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.jpg");
}

void HARD_6st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.jpg");
}

void HARD_7st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg");
}

void HARD_8st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.jpg");
}

void HARD_9st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg");
}

void HARD_10st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.jpg");
}

void HARD_11st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg");
}

void HARD_12st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.jpg");
}

void HARD_13st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.jpg");
}

void HARD_14st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg");
}

void HARD_15st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.jpg");
}

void HARD_16st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg");
}

void HARD_17st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg");
}

void HARD_18st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg");
}

void HARD_19st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.jpg");
}

void HARD_20st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.jpg");
}

void HARD_21st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.jpg");
}

void HARD_22st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.jpg");
}

void HARD_23st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");
}

void HARD_24st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg");
}

void HARD_25st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.jpg");
}

void HARD_26st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.jpg");
}

void HARD_27st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.jpg");
}

void HARD_28st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.jpg");
}

void HARD_29st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg");
}

void HARD_30st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.jpg");
}

void HARD_31st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.jpg");
}

void HARD_32st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.jpg");
}

void HARD_33st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.jpg");
}

void HARD_34st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.jpg");
}

void HARD_35st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.jpg");
}

void HARD_36st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.jpg");
}

void HARD_37st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.jpg");
}

void HARD_38st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.jpg");
}

void HARD_39st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.jpg");
}

void HARD_40st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg"); //BONUS
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.jpg");
}

void HARD_41st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.jpg");
}

void HARD_42st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.jpg");
}

void HARD_43st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg");
}

void HARD_44st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.jpg");
}

void HARD_45st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.jpg");
}

void HARD_46st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.jpg");
}

void HARD_47st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.jpg");
}

void HARD_48st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.jpg");
}

void HARD_49st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.jpg");
}

void HARD_50st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.jpg");
}

void HARD_51st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.jpg");
}

void HARD_52st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.jpg");
}

void HARD_53st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg");
}

void HARD_54st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.jpg");
}

void HARD_55st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumblebee.jpg");
}

void HARD_56st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.jpg");
}

void HARD_57st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg");
}

void HARD_58st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumblebee.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.jpg");
}

void HARD_59st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.jpg");
}

void HARD_60st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.jpg");
}

void HARD_61st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.jpg");
}

void HARD_62st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg");
}

void HARD_63st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg");
}

void HARD_64st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.jpg");
}

void HARD_65st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumblebee.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.jpg");
}

void HARD_66st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.jpg");
}

void HARD_67st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg");
}

void HARD_68st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg");
}

void HARD_69st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.jpg");
}

void HARD_70st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.jpg");
}

void HARD_71st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumblebee.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.jpg");
}

void HARD_72st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.jpg");
}

void HARD_73st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.jpg");
}

void HARD_74st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.jpg");
}

void HARD_75st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.jpg");
}

void HARD_76st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.jpg");
}

void HARD_77st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.jpg");
}

void HARD_78st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.jpg");
}

void HARD_79st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.jpg");
}

void HARD_80st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.jpg");
}

void HARD_81st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.jpg");
}

void HARD_82st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.jpg");
}

void HARD_83st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.jpg");
}

void HARD_84st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.jpg");
}

void HARD_85st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.jpg");
}

void HARD_86st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.jpg");
}

void HARD_87st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.jpg");
}

void HARD_88st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.jpg");
}

void HARD_89st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");
}

void HARD_90st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg");
}

void HARD_91st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg");
}

void HARD_92st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//RANDOM FOR INSECTS_ANIMAL.....................................................
void INSECTS_0st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumblebee.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg"); //4
}

void INSECTS_1st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg"); //2
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg"); //4
}

void INSECTS_2st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.jpg"); //4
}

void INSECTS_3st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg"); //4
}

void INSECTS_4st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumblebee.jpg"); //4
}

void INSECTS_5st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumblebee.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.jpg"); //4
}

void INSECTS_6st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.jpg"); //4
}

void INSECTS_7st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.jpg"); //4
}

void INSECTS_8st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.jpg"); //4
}

void INSECTS_9st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.jpg"); //4
}

void INSECTS_10st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumblebee.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.jpg"); //4
}

void INSECTS_11st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.jpg"); //4
}
//.................................................END RANDOM FOR INSECTS_ANIMAL
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//RANDOM FOR WATER_ANIMAL.......................................................
void WATER_0st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.jpg"); //4
}

void WATER_1st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg"); //4
}

void WATER_2st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.jpg"); //4
}

void WATER_3st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.jpg"); //4
}

void WATER_4st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg"); //4
}

void WATER_5st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.jpg"); //4
}

void WATER_6st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.jpg"); //4
}

void WATER_7st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.jpg"); //4
}

void WATER_8st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.jpg"); //4
}

void WATER_9st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.jpg"); //4
}

void WATER_10st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.jpg"); //4
}

void WATER_11st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.jpg"); //4
}

void WATER_12st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.jpg"); //4
}

void WATER_13st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg"); //4
}

void WATER_14st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.jpg"); //4
}

void WATER_15st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.jpg"); //4
}
//...................................................END RANDOM FOR WATER_ANIMAL
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//RANDOM FOR AIR_ANIMAL.........................................................
void AIR_0st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.jpg"); //4
}

void AIR_1st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.jpg"); //4
}

void AIR_2st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.jpg"); //4
}

void AIR_3st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.jpg"); //4
}

void AIR_4st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg"); //4
}

void AIR_5st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.jpg"); //4
}

void AIR_6st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.jpg"); //4
}

void AIR_7st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.jpg"); //4
}

void AIR_8st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.jpg"); //4
}

void AIR_9st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.jpg"); //4
}

void AIR_10st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.jpg"); //4
}

void AIR_11st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg"); //4
}

void AIR_12st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg"); //4
}

void AIR_13st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.jpg"); //4
}

void AIR_14st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.jpg"); //4
}

void AIR_15st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.jpg"); //4
}

void AIR_16st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.jpg"); //4
}

void AIR_17st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.jpg"); //4
}

void AIR_18st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.jpg"); //4
}

void AIR_19st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.jpg"); //4
}

void AIR_20st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.jpg"); //4
}

void AIR_21st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.jpg"); //4
}

void AIR_22st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg"); //4
}

void AIR_23st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.jpg"); //4
}
//.....................................................END RANDOM FOR AIR_ANIMAL
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//RANDOM FOR WILD_ANIMAL........................................................
void WILD_0st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.jpg"); //4
}

void WILD_1st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.jpg"); //4
}

void WILD_2st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg"); //4
}

void WILD_3st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.jpg"); //4
}

void WILD_4st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.jpg"); //4
}

void WILD_5st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.jpg"); //4
}

void WILD_6st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.jpg"); //4
}

void WILD_7st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.jpg"); //4
}

void WILD_8st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.jpg"); //4
}

void WILD_9st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.jpg"); //4
}

void WILD_10st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.jpg"); //4
}

void WILD_11st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg"); //4
}

void WILD_12st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.jpg"); //4
}

void WILD_13st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.jpg"); //4
}

void WILD_14st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.jpg"); //4
}

void WILD_15st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg"); //4
}

void WILD_16st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.jpg"); //4
}

void WILD_17st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.jpg"); //4
}

void WILD_18st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg"); //4
}

void WILD_19st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.jpg"); //4
}

void WILD_20st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.jpg"); //4
}

void WILD_21st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.jpg"); //4
}

void WILD_22st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.jpg"); //4
}

void WILD_23st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.jpg"); //4
}

void WILD_24st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.jpg"); //4
}
//....................................................END RANDOM FOR WILD_ANIMAL
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//RANDOM FOR HOME_ANIMAL........................................................
void HOME_0st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");//1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");   //4
}

void HOME_1st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg");  //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.jpg");  //1
}

void HOME_2st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.jpg");  //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.jpg"); //4
}

void HOME_3st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.jpg");  //4
}

void HOME_4st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg");  //--
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.jpg"); //4
}

void HOME_5st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.jpg");  //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg");  //4
}

void HOME_6st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.jpg");  //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg"); //4
}

void HOME_7st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg");  //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.jpg");  //--
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.jpg"); //4
}


void HOME_8st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.jpg");  //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.jpg");  //4
}

void HOME_9st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg");  //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg"); //4
}

void HOME_10st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg");  //--
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.jpg");  //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg"); //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg");   //4
}

void HOME_11st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.jpg"); //--
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.jpg");  //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.jpg"); //4
}

void HOME_12st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg");  //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.jpg"); //--
}

void HOME_13st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");  //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.jpg");    //4
}

void HOME_ADD_1() //�������������� ���� ��� Horse, Sheep, Rabbit, Pig
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg"); //1
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.jpg"); //2
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.jpg");  //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg");//4
}

void HOME_ADD_2() //�������������� ���� ��� Horse, Sheep, Rabbit, Pig
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.jpg");  //3
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.jpg");
}
//....................................................END RANDOM FOR HOME_ANIMAL
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//����� Image's, ANIMALS, COUNTER��� �������� Form3.............................
void RESET_PICTURES_FORM3()
{
	Form3->Image1->Visible = false;
	Form3->Image2->Visible = false;
	Form3->Image3->Visible = false;
	Form3->Image4->Visible = false;

	Form3->ANIMALS->Text = 0;
	Form3->COUNTER->Text = 0;
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//��������� ��������� ���������� (Timer's �.�.�.)...............................
void RESET_FORM3()
{
	Form3->TimerErrorHide->Enabled = false;

//������� ��� ������� / ������������ 1�� �������
	Form3->TimerLeaflet1Start->Enabled = false;
	Form3->TimerLeaflet1End->Enabled = false;
	Form3->TimerLeaflet1Left->Enabled = false;
	Form3->TimerLeaflet1Right->Enabled = false;

//������� ��� ������� / ������������ 2�� �������
	Form3->TimerLeaflet2Start->Enabled = false;
	Form3->TimerLeaflet2End->Enabled = false;
	Form3->TimerLeaflet2Left->Enabled = false;
	Form3->TimerLeaflet2Right->Enabled = false;

//������� ��� ������� 3�� �������
	Form3->TimerLeaflet3Start->Enabled = false;
	Form3->TimerLeaflet3End->Enabled = false;

//�������� ����������� � ��������.
	Form3->Loading->Visible = false;

//���������� �������� ��� HardTest
	HARD_TEST = 0;
	SCORE = 0;
	ERR_SCORE = 0;
	Form3->HARD->Text = "HARD";

//������ ����� + / -
	Form3->SubtractScore->Visible = false;
	Form3->AddScore1->Visible = false;
	Form3->AddScore2->Visible = false;

//��������� ������� ��� ����������� ����� +25, +50 � -10
	Form3->TimerAddScore1Start->Enabled = false;
	Form3->TimerAddScore1End->Enabled = false;

	Form3->TimerAddScore2Start->Enabled = false;
	Form3->TimerAddScore2End->Enabled = false;

	Form3->TimerSubtractScoreStart->Enabled = false;
	Form3->TimerSubtractScoreEnd->Enabled = false;

//��������� ������� ���������� ����������� �����
	//For Image1
	Form3->TimerAddScore1Image1->Enabled = false;
	Form3->TimerAddScore2Image1->Enabled = false;
	Form3->TimerSubScoreImage1->Enabled = false;
	Form3->TimerSubtractScoreImage1->Enabled = false;

	//For Image2
	Form3->TimerAddScore1Image2->Enabled = false;
	Form3->TimerAddScore2Image2->Enabled = false;
	Form3->TimerSubScoreImage2->Enabled = false;
	Form3->TimerSubtractScoreImage2->Enabled = false;

	//For Image3
	Form3->TimerAddScore1Image3->Enabled = false;
	Form3->TimerAddScore2Image3->Enabled = false;
	Form3->TimerSubScoreImage3->Enabled = false;
	Form3->TimerSubtractScoreImage3->Enabled = false;

	//For Image4
	Form3->TimerAddScore1Image4->Enabled = false;
	Form3->TimerAddScore2Image4->Enabled = false;
	Form3->TimerSubScoreImage4->Enabled = false;
	Form3->TimerSubtractScoreImage4->Enabled = false;

//�������� ���������� �����
	Form3->LabelTextScore->Visible = false;
	Form3->LabelScore->Visible = false;

	Form3->LabelTextErrorScore->Visible = false;
	Form3->LabelErrorScore->Visible = false;

	Form3->LabelScore->Text = "";
	Form3->LabelErrorScore->Text = "";

//��������� ������� �������
	Form3->TimerAsk1->Enabled = false;
	Form3->TimerAskVoice->Enabled = false;
	Form3->TimerAsk2->Enabled = false;
	Form3->TimerAnimalSound->Enabled = false;
	Form3->TimerTestAsk->Enabled = false;
	Form3->TimerTestVoice->Enabled = false;

//�������� ������� (������)
	Form3->MedalHome->Visible = false;
	Form3->MedalWild->Visible = false;
	Form3->MedalAir->Visible = false;
	Form3->MedalWater->Visible = false;
	Form3->MedalInsects->Visible = false;

	Form3->SmallMedalHome->Visible = false;
	Form3->SmallMedalWild->Visible = false;
	Form3->SmallMedalAir->Visible = false;
	Form3->SmallMedalWater->Visible = false;
	Form3->SmallMedalInsects->Visible = false;

//��������� MediaPlayers
	Form3->MediaPlayer1->Stop();
	Form3->MediaPlayer2->Stop();
	Form3->MediaPlayer3->Stop();

//��������� ���������� �����������
	Form3->TimerFinal->Enabled = false;
	Form3->TimerReward->Enabled = false;

//�������� ��������� �����
	Form3->FinalText->Visible = false;
	Form3->FinalTextHome->Visible = false;
	Form3->FinalTextWild->Visible = false;
	Form3->FinalTextAir->Visible = false;
	Form3->FinalTextWater->Visible = false;
	Form3->FinalTextInsects->Visible = false;
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//����. ��������� ���������� ��� �������� � ����������������....................
void REPOSITION_FORM3()
{
//Image1........................
	//���������������:
	Form3->Image1->Width = Form3->Width / 2 - Form3->Image1->Position->X; //������ ������ ������ 50% ������ Form3
	Form3->Image1->Height = Form3->Height / 2 - Form3->Image1->Position->Y + 1; //������ ������ ������ 50% ������ Form3

	//����������������:
	Form3->Image1->Position->X = Form3->Width / 30; //���������
	Form3->Image1->Position->Y = Form3->Height / 11; //������ � �����

//Image2........................
	//���������������:
	Form3->Image2->Width = Form3->Image1->Width; //����� ������ �� Image1
	Form3->Image2->Height = Form3->Image1->Height; //����� ������ �� Image1

	//����������������:
	Form3->Image2->Position->X = Form3->Image1->Position->X + Form3->Image1->Width + 4; //������������� �� Image1
	Form3->Image2->Position->Y = Form3->Image1->Position->Y;

//Image3........................

	//���������������:
	Form3->Image3->Width = Form3->Image1->Width; //����� ������ �� Image1
	Form3->Image3->Height = Form3->Image1->Height; //����� ������ �� Image1

	//����������������:
	Form3->Image3->Position->X = Form3->Image1->Position->X; //��������� �� Image1
	Form3->Image3->Position->Y = Form3->Image1->Position->Y + Form3->Image1->Height + 4; //������������� �� ��������� �� Image1

//Image4........................
	//���������������:
	Form3->Image4->Width = Form3->Image1->Width; //����� ������ �� Image1
	Form3->Image4->Height = Form3->Image1->Height; //����� ������ �� Image1

	//����������������:
	Form3->Image4->Position->X = Form3->Image3->Position->X + Form3->Image3->Width + 4; //������������� �� Image3
	Form3->Image4->Position->Y = Form3->Image2->Position->Y + Form3->Image2->Height + 4; //������������� �� ��������� �� Image2
}

void POSITION_FORM3()
{
//Image1........................
	//���������������:
	Form3->Image1->Width = Form3->Width / 2 - Form3->Image1->Position->X; //������ ������ ������ 50% ������ Form3
	Form3->Image1->Height = Form3->Height / 2 - Form3->Image1->Position->Y + 1; //������ ������ ������ 50% ������ Form3

	//����������������:
	Form3->Image1->Position->X = Form3->Width / 30; //���������
	Form3->Image1->Position->Y = Form3->Height / 11; //������ � �����

//Image2........................
	//���������������:
	Form3->Image2->Width = Form3->Image1->Width; //����� ������ �� Image1
	Form3->Image2->Height = Form3->Image1->Height; //����� ������ �� Image1

	//����������������:
	Form3->Image2->Position->X = Form3->Image1->Position->X + Form3->Image1->Width + 4; //������������� �� Image1
	Form3->Image2->Position->Y = Form3->Image1->Position->Y;

//Image3........................

	//���������������:
	Form3->Image3->Width = Form3->Image1->Width; //����� ������ �� Image1
	Form3->Image3->Height = Form3->Image1->Height; //����� ������ �� Image1

	//����������������:
	Form3->Image3->Position->X = Form3->Image1->Position->X; //��������� �� Image1
	Form3->Image3->Position->Y = Form3->Image1->Position->Y + Form3->Image1->Height + 4; //������������� �� ��������� �� Image1

//Image4........................
	//���������������:
	Form3->Image4->Width = Form3->Image1->Width; //����� ������ �� Image1
	Form3->Image4->Height = Form3->Image1->Height; //����� ������ �� Image1

	//����������������:
	Form3->Image4->Position->X = Form3->Image3->Position->X + Form3->Image3->Width + 4; //������������� �� Image3
	Form3->Image4->Position->Y = Form3->Image2->Position->Y + Form3->Image2->Height + 4; //������������� �� ��������� �� Image2

//Loading (label).............................
	Form3->Loading->Position->X = Form3->Width / 2 - Form3->Loading->Width / 2;
	Form3->Loading->Position->Y = Form3->Height - Form3->Loading->Height - 18;

//LabelTextScore (label) + LabelScore (label)........
	Form3->LabelTextScore->Position->X = Form3->Width / 2 - Form3->LabelTextScore->Width / 2;
	Form3->LabelScore->Position->X = Form3->LabelTextScore->Position->X + Form3->LabelTextScore->Width;

	Form3->LabelTextScore->Position->Y = Form3->Height / 7;
	Form3->LabelScore->Position->Y = Form3->LabelTextScore->Position->Y;

	//������� ���-�� ������
	Form3->LabelTextErrorScore->Position->X = Form3->Width / 2;
	Form3->LabelErrorScore->Position->X = Form3->LabelTextErrorScore->Position->X + Form3->LabelTextErrorScore->Width;

	Form3->LabelTextErrorScore->Position->Y = Form3->LabelTextScore->Position->Y + Form3->LabelTextScore->Height * 2;
	Form3->LabelErrorScore->Position->Y = Form3->LabelTextScore->Position->Y; //��������� ������ �� ����� �������� ������

//LabelError.........................................
	Form3->LabelTextErrorScore->Position->X = Form3->Width / 2 - Form3->LabelTextErrorScore->Width / 2;
	Form3->LabelErrorScore->Position->X = Form3->LabelTextErrorScore->Position->X + Form3->LabelTextErrorScore->Width;

	Form3->LabelTextErrorScore->Position->Y = Form3->LabelTextScore->Position->Y + Form3->LabelTextScore->Height * 2; //������������� �� ������������ ������
	Form3->LabelErrorScore->Position->Y = Form3->LabelTextErrorScore->Position->Y; //��������� ������ �� ����� �������� ������

//1�� ������....................
	//���������������:
	Form3->Leaflet1->Position->X = Form3->Width - 55;
	Form3->Leaflet1->Position->Y = -25;	//�.�. ������ ������� ���������� �� �� ����� ����� ��� �� � �����

	//���������� ���������:
	F3_LeafletY1 = Form3->Leaflet1->Position->Y;
	F3_LeafletX1 = Form3->Leaflet1->Position->X;
	F3_i1 = Form3->Leaflet1->Position->Y; //��� �������
	F3_j1 = Form3->Leaflet1->Position->X; //��� ������������ ���� / �����

//2�� ������....................
	//���������������:
	Form3->Leaflet2->Position->X = Form3->Width - 45;
	Form3->Leaflet2->Position->Y = -25;	//�.�. ������ ������� ���������� �� �� ����� ����� ��� �� � �����

	//���������� ���������:
	F3_LeafletY2 = Form3->Leaflet2->Position->Y;
	F3_LeafletX2 = Form3->Leaflet2->Position->X;
	F3_i2 = Form3->Leaflet2->Position->Y; //��� �������
	F3_j2 = Form3->Leaflet2->Position->X; //��� ������������ ���� / �����

//3�� ������....................
	//���������������:
	Form3->Leaflet3->Position->X = 15;
	Form3->Leaflet3->Position->Y = -25;	//�.�. ������ ������� ���������� �� �� ����� ����� ��� �� � �����

	//���������� ���������:
	F3_LeafletY3 = Form3->Leaflet3->Position->Y;
	F3_i3 = Form3->Leaflet3->Position->Y; //��� �������

//SphereQuest �����.............
	//���������������:
	Form3->SphereQuest->Position->X = Form3->Width / 2; //�������� Form3
	Form3->SphereQuest->Position->Y = Form3->Height + 50; //�.�. ������� SQ �� ��� ������� �����

	//���������� ���������:
	SphereQuestX1 = Form3->SphereQuest->Position->X;
	SphereQuestY1 = Form3->SphereQuest->Position->Y;

	F3_SQ_i1 = Form3->SphereQuest->Position->Y; //��������� ���������� ��� "������"
	F3_SQ_j1 = Form3->SphereQuest->Position->X; //��������� ���������� ��� ������������ ���� / �����

//SmallMedals...................
	Form3->SmallMedalHome->Width = 100;
	Form3->SmallMedalWild->Width = 75;
	Form3->SmallMedalAir->Width = 75;
	Form3->SmallMedalWater->Width = 75;
	Form3->SmallMedalInsects->Width = 75;

	Form3->SmallMedalHome->Height = 100;
	Form3->SmallMedalWild->Height = 125;
	Form3->SmallMedalAir->Height = 125;
	Form3->SmallMedalWater->Height = 125;
	Form3->SmallMedalInsects->Height = 125;

	//SmallHome
	Form3->SmallMedalHome->Position->X = Form3->Width / 2 - Form3->SmallMedalHome->Width / 2;
	Form3->SmallMedalHome->Position->Y = Form3->LabelTextErrorScore->Position->Y + Form3->LabelTextErrorScore->Height * 3;

	//SmallWild
	Form3->SmallMedalWild->Position->X = Form3->SmallMedalHome->Position->X + Form3->SmallMedalWild->Width + 15 + 25; //15 - ����������� ������, 25 - �������� �� 100 �� ������ Home
	Form3->SmallMedalWild->Position->Y = Form3->SmallMedalHome->Position->Y; //�� SmallHome

	//SmallInsects
	Form3->SmallMedalInsects->Position->X = Form3->SmallMedalHome->Position->X - Form3->SmallMedalWild->Width - 15;
	Form3->SmallMedalInsects->Position->Y = Form3->SmallMedalHome->Position->Y; //�� SmallHome

	//SmallAir
	Form3->SmallMedalAir->Position->X = Form3->SmallMedalInsects->Position->X - Form3->SmallMedalInsects->Width - 15;
	Form3->SmallMedalAir->Position->Y = Form3->SmallMedalHome->Position->Y; //�� SmallHome

	//SmallWater
	Form3->SmallMedalWater->Position->X = Form3->SmallMedalWild->Position->X + Form3->SmallMedalWild->Width + 15;
	Form3->SmallMedalWater->Position->Y = Form3->SmallMedalHome->Position->Y; //�� SmallHome

//Medals........................
	Form3->MedalHome->Width = 125 * 2;
	Form3->MedalWild->Width = 125;
	Form3->MedalAir->Width = 125;
	Form3->MedalWater->Width = 125;
	Form3->MedalInsects->Width = 125;

	Form3->MedalHome->Height = 125 * 2;
	Form3->MedalWild->Height = 200;
	Form3->MedalAir->Height = 200;
	Form3->MedalWater->Height = 200;
	Form3->MedalInsects->Height = 200;

	//Home
	Form3->MedalHome->Position->X = Form3->Width / 4 - Form3->MedalHome->Width / 2;
	Form3->MedalHome->Position->Y = Form3->LabelTextScore->Position->Y - 15;

	//Wild
	Form3->MedalWild->Position->X = Form3->Width / 3 - Form3->MedalWild->Width / 2;
	Form3->MedalWild->Position->Y = Form3->LabelTextScore->Position->Y;

	//Air
	Form3->MedalAir->Position->X = Form3->Width / 3 - Form3->MedalHome->Width / 2;
	Form3->MedalAir->Position->Y = Form3->LabelTextScore->Position->Y;

	//Water
	Form3->MedalWater->Position->X = Form3->Width / 3 - Form3->MedalHome->Width / 2;
	Form3->MedalWater->Position->Y = Form3->LabelTextScore->Position->Y;

	//Insects
	Form3->MedalInsects->Position->X = Form3->Width / 3 - Form3->MedalHome->Width / 2;
	Form3->MedalInsects->Position->Y = Form3->LabelTextScore->Position->Y;

//FinalTest
	Form3->FinalText->Position->X = Form3->Image4->Position->X;
	Form3->FinalText->Position->Y = Form3->Height / 10;

	Form3->FinalTextHome->Position->X = Form3->Image4->Position->X;
	Form3->FinalTextHome->Position->Y = Form3->FinalText->Position->Y + Form3->FinalText->Height * 2;

	Form3->FinalTextWild->Position->X = Form3->Image4->Position->X;
	Form3->FinalTextWild->Position->Y = Form3->FinalText->Position->Y + Form3->FinalText->Height * 2;

	Form3->FinalTextAir->Position->X = Form3->Image4->Position->X;
	Form3->FinalTextAir->Position->Y = Form3->FinalText->Position->Y + Form3->FinalText->Height * 2;

	Form3->FinalTextWater->Position->X = Form3->Image4->Position->X;
	Form3->FinalTextWater->Position->Y = Form3->FinalText->Position->Y + Form3->FinalText->Height * 2;

	Form3->FinalTextInsects->Position->X = Form3->Image4->Position->X;
	Form3->FinalTextInsects->Position->Y = Form3->FinalText->Position->Y + Form3->FinalText->Height * 2;
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//���������������� Error1, 2, 3, 4..............................................
void ERROR_1()
{
	Form3->Error1->Position->X = Form3->Image1->Position->X + Form3->Image1->Width / 2 - Form3->Error1->Width / 2; //�������� �������
	Form3->Error1->Position->Y = Form3->Image1->Position->Y + Form3->Image1->Height / 2 - Form3->Error1->Height / 2;
}

void ERROR_2()
{
	Form3->Error2->Position->X = Form3->Image2->Position->X + Form3->Image2->Width / 2 - Form3->Error2->Width / 2; //�������� �������
	Form3->Error2->Position->Y = Form3->Image2->Position->Y + Form3->Image2->Height / 2 - Form3->Error2->Height / 2;
}

void ERROR_3()
{
	Form3->Error3->Position->X = Form3->Image3->Position->X + Form3->Image3->Width / 2 - Form3->Error3->Width / 2; //�������� �������
	Form3->Error3->Position->Y = Form3->Image3->Position->Y + Form3->Image3->Height / 2 - Form3->Error3->Height / 2;
}

void ERROR_4()
{
	Form3->Error4->Position->X = Form3->Image4->Position->X + Form3->Image4->Width / 2 - Form3->Error4->Width / 2; //�������� �������
	Form3->Error4->Position->Y = Form3->Image4->Position->Y + Form3->Image4->Height / 2 - Form3->Error4->Height / 2;
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//���������������� Score's......................................................

//AddScore1.............
void ADD_SCORE1_IMAGE1()
{
//���������������:
	Form3->AddScore1->Position->X = Form3->Image1->Position->X + Form3->Image1->Width / 2 - Form3->AddScore1->Width / 2;
	Form3->AddScore1->Position->Y = Form3->Image1->Position->Y + Form3->Image1->Height / 2 - Form3->AddScore1->Height / 2;

//���������� ���������:
	//���������� ���������:
	F3_AddScore1Y1 = Form3->AddScore1->Position->Y;
	F3_i4 = Form3->AddScore1->Position->Y;
}

void ADD_SCORE1_IMAGE2()
{
//���������������:
	Form3->AddScore1->Position->X = Form3->Image2->Position->X + Form3->Image2->Width / 2 - Form3->AddScore1->Width / 2;
	Form3->AddScore1->Position->Y = Form3->Image2->Position->Y + Form3->Image2->Height / 2 - Form3->AddScore1->Height / 2;

//���������� ���������:
	F3_AddScore1Y1 = Form3->AddScore1->Position->Y;
	F3_i4 = Form3->AddScore1->Position->Y;
}

void ADD_SCORE1_IMAGE3()
{
//���������������:
	Form3->AddScore1->Position->X = Form3->Image3->Position->X + Form3->Image3->Width / 2 - Form3->AddScore1->Width / 2;
	Form3->AddScore1->Position->Y = Form3->Image3->Position->Y + Form3->Image3->Height / 2 - Form3->AddScore1->Height / 2;

//���������� ���������:
	F3_AddScore1Y1 = Form3->AddScore1->Position->Y;
	F3_i4 = Form3->AddScore1->Position->Y;
}

void ADD_SCORE1_IMAGE4()
{
//���������������:
	Form3->AddScore1->Position->X = Form3->Image4->Position->X + Form3->Image4->Width / 2 - Form3->AddScore1->Width / 2;
	Form3->AddScore1->Position->Y = Form3->Image4->Position->Y + Form3->Image4->Height / 2 - Form3->AddScore1->Height / 2;

//���������� ���������:
	F3_AddScore1Y1 = Form3->AddScore1->Position->Y;
	F3_i4 = Form3->AddScore1->Position->Y;
}

//AddScore2.............
void ADD_SCORE2_IMAGE1()
{
//���������������:
	Form3->AddScore2->Position->X = Form3->Image1->Position->X + Form3->Image1->Width / 2 - Form3->AddScore2->Width / 2;
	Form3->AddScore2->Position->Y = Form3->Image1->Position->Y + Form3->Image1->Height / 2 - Form3->AddScore2->Height / 2;

//���������� ���������:
	F3_AddScore2Y1 = Form3->AddScore2->Position->Y;
	F3_i5 = Form3->AddScore2->Position->Y;
}

void ADD_SCORE2_IMAGE2()
{
//���������������:
	Form3->AddScore2->Position->X = Form3->Image2->Position->X + Form3->Image2->Width / 2 - Form3->AddScore2->Width / 2;
	Form3->AddScore2->Position->Y = Form3->Image2->Position->Y + Form3->Image2->Height / 2 - Form3->AddScore2->Height / 2;

//���������� ���������:
	F3_AddScore2Y1 = Form3->AddScore2->Position->Y;
	F3_i5 = Form3->AddScore2->Position->Y;
}

void ADD_SCORE2_IMAGE3()
{
//���������������:
	Form3->AddScore2->Position->X = Form3->Image3->Position->X + Form3->Image3->Width / 2 - Form3->AddScore2->Width / 2;
	Form3->AddScore2->Position->Y = Form3->Image3->Position->Y + Form3->Image3->Height / 2 - Form3->AddScore2->Height / 2;

//���������� ���������:
	F3_AddScore2Y1 = Form3->AddScore2->Position->Y;
	F3_i5 = Form3->AddScore2->Position->Y;
}

void ADD_SCORE2_IMAGE4()
{
//���������������:
	Form3->AddScore2->Position->X = Form3->Image4->Position->X + Form3->Image4->Width / 2 - Form3->AddScore2->Width / 2;
	Form3->AddScore2->Position->Y = Form3->Image4->Position->Y + Form3->Image4->Height / 2 - Form3->AddScore2->Height / 2;

//���������� ���������:
	F3_AddScore2Y1 = Form3->AddScore2->Position->Y;
	F3_i5 = Form3->AddScore2->Position->Y;
}

//SubtractScore........
void SUB_SCORE_IMAGE1()
{
//���������������:
	Form3->SubtractScore->Position->X = Form3->Image1->Position->X + Form3->Image1->Width / 2 - Form3->SubtractScore->Width / 2;
	Form3->SubtractScore->Position->Y = Form3->Image1->Position->Y + Form3->Image1->Height / 2 - Form3->SubtractScore->Height / 2;

//���������� ���������:
	F3_SubScoreY1 = Form3->SubtractScore->Position->Y;
	F3_i6 = Form3->SubtractScore->Position->Y;
}

void SUB_SCORE_IMAGE2()
{
//���������������:
	Form3->SubtractScore->Position->X = Form3->Image2->Position->X + Form3->Image2->Width / 2 - Form3->SubtractScore->Width / 2;
	Form3->SubtractScore->Position->Y = Form3->Image2->Position->Y + Form3->Image2->Height / 2 - Form3->SubtractScore->Height / 2;

//���������� ���������:
	F3_SubScoreY1 = Form3->SubtractScore->Position->Y;
	F3_i6 = Form3->SubtractScore->Position->Y;
}

void SUB_SCORE_IMAGE3()
{
//���������������:
	Form3->SubtractScore->Position->X = Form3->Image3->Position->X + Form3->Image3->Width / 2 - Form3->SubtractScore->Width / 2;
	Form3->SubtractScore->Position->Y = Form3->Image3->Position->Y + Form3->Image3->Height / 2 - Form3->SubtractScore->Height / 2;

//���������� ���������:
	F3_SubScoreY1 = Form3->SubtractScore->Position->Y;
	F3_i6 = Form3->SubtractScore->Position->Y;
}

void SUB_SCORE_IMAGE4()
{
//���������������:
	Form3->SubtractScore->Position->X = Form3->Image4->Position->X + Form3->Image4->Width / 2 - Form3->SubtractScore->Width / 2;
	Form3->SubtractScore->Position->Y = Form3->Image4->Position->Y + Form3->Image4->Height / 2 - Form3->SubtractScore->Height / 2;

//���������� ���������:
	F3_SubScoreY1 = Form3->SubtractScore->Position->Y;
	F3_i6 = Form3->SubtractScore->Position->Y;
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������� Error1, 2, 3, 4.......................................................
void HIDE_ERROR()
{
	Form3->Error1->Visible = false;
	Form3->Error2->Visible = false;
	Form3->Error3->Visible = false;
	Form3->Error4->Visible = false;
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������������� ���� ������.....................................................
void SOUND_ERROR()
{
	Form3->MediaPlayer2->Stop();
	Form3->MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Error.mp3";
	Form3->MediaPlayer2->Play();
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//����������� ����������� �����..................................................
void FINAL_NORMAL_TEST()
{
	//��������� ������� �����
	Form3->MediaPlayer1->Stop();
	Form3->MediaPlayer2->Stop();
	Form3->MediaPlayer3->Stop();

	Form3->TimerAsk1->Enabled = false;
	Form3->TimerAskVoice->Enabled = false;
	Form3->TimerAsk2->Enabled = false;
	Form3->TimerAnimalSound->Enabled = false;
	Form3->TimerTestAsk->Enabled = false;
	Form3->TimerTestVoice->Enabled = false;

	//��������� ��������....
	Form3->Image1->Visible = false;
	Form3->Image2->Visible = false;
	Form3->Image3->Visible = false;
	Form3->Image4->Visible = false;

	//��������� ������� ������..
	Form3->Error1->Visible = false;
	Form3->Error2->Visible = false;
	Form3->Error3->Visible = false;
	Form3->Error4->Visible = false;

	//��������� ����������� ������ SphereQuest
	Form3->TimerSphereQuestEnd->Enabled = false;
	Form3->TimerSphereQuestStart->Enabled = false;
	Form3->TimerSphereQuestLeft->Enabled = false;
	Form3->TimerSphereQuestRight->Enabled = false;

	Form3->SphereQuest->Visible = false;

	//�������� ������!!!
	Form3->MediaPlayer1->Stop();
	Form3->MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Final.mp3";
	Form3->MediaPlayer1->Play();

	Form3->TimerFinal->Interval = 20000; //������ ����� ��� HAR test
	Form3->TimerFinal->Enabled = true; //�������� ������, ������� ������������ �����, �.�. ��������� �� � �������� ������ ��������.
}
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
	Form3->Error1->Visible = false;
	Form3->Error2->Visible = false;
	Form3->Error3->Visible = false;
	Form3->Error4->Visible = false;

	Form3->AddScore1->Visible = false;
	Form3->AddScore2->Visible = false;
	Form3->SubtractScore->Visible = false;

	Form3->SphereQuest->Visible = false;

	Form3->HARD->Visible = false;
	Form3->COUNTER->Visible = false;
    Form3->ANIMALS->Visible = false;

	Form3->SmallMedalWild->Visible = false;
	Form3->SmallMedalWater->Visible = false;
	Form3->SmallMedalInsects->Visible = false;
	Form3->SmallMedalHome->Visible = false;
	Form3->SmallMedalAir->Visible = false;

	Form3->Memo1->Visible = false;

	Form3->MedalWild->Visible = false;
	Form3->MedalWater->Visible = false;
	Form3->MedalInsects->Visible = false;
	Form3->MedalHome->Visible = false;
	Form3->MedalAir->Visible = false;

	Form3->Loading->Visible = false;

	Form3->LabelTextScore->Visible = false;
	Form3->LabelScore->Visible = false;
	Form3->LabelTextErrorScore->Visible = false;
	Form3->LabelErrorScore->Visible = false;

	Form3->FinalText->Visible = false;
	Form3->FinalTextHome->Visible = false;
	Form3->FinalTextWild->Visible = false;
	Form3->FinalTextAir->Visible = false;
	Form3->FinalTextWater->Visible = false;
	Form3->FinalTextInsects->Visible = false;

   	HARD_TEST = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormActivate(TObject *Sender)
{
	POSITION_FORM3();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
	RESET_PICTURES_FORM3();
	HIDE_ERROR();
	RESET_FORM3();

	Form2->Loading->Visible = false; //�������� ��������, �� Form2
	Form2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormHide(TObject *Sender)
{
	RESET_PICTURES_FORM3();
	HIDE_ERROR();
	RESET_FORM3();

	Form2->Loading->Visible = false; //�������� ��������, �� Form2
	Form2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormKeyUp(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift)
{
	if(Key == vkHardwareBack)
	{
		Key = 0; //����������� ������� ������ "�����" - �� ������ ��������

		Loading->Visible = true; //�������� ����������� � ��������
		TimerClose->Enabled = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormResize(TObject *Sender)
{
	POSITION_FORM3();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerLeaflet3StartTimer(TObject *Sender)
{
	if(F3_i3 < Form3->Height + 40)
	{
		F3_i3++;
		Leaflet3->Position->Y = F3_i3;

		if(F3_i3 == Form3->Height + 40) //��������� �������
		{
			Leaflet3->Visible = false;
			TimerLeaflet3Start->Enabled = false;

			TimerLeaflet3End->Interval = Random(30000);
			TimerLeaflet3End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerLeaflet3EndTimer(TObject *Sender)
{
	Leaflet3->Position->Y = F3_LeafletY3; 		//���������� ����������� ������ ��� 3�� �������
	F3_i3 = F3_LeafletY3; 						//���������� ������, ��� �� ����� ���� ����� ������� ������3

	Leaflet3->Visible = true;

	TimerLeaflet3End->Enabled = false;
	TimerLeaflet3Start->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerLeaflet1StartTimer(TObject *Sender)
{
	if(F3_i1 < Form3->Height + 40)
	{
		F3_i1++;
		Leaflet1->Position->Y = F3_i1;

		if(F3_i1 == Form3->Height + 40) //��������� ������� � ��������
		{
			Leaflet1->Visible = false;
			TimerLeaflet1Start->Enabled = false;

			TimerLeaflet1Left->Enabled = false;
			TimerLeaflet1Right->Enabled = false;

			TimerLeaflet1End->Interval = Random(25000);
			TimerLeaflet1End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerLeaflet1EndTimer(TObject *Sender)
{
	Leaflet1->Position->Y = F3_LeafletY1; 		//���������� ����������� ������ ��� 1�� �������
	Leaflet1->Position->X = F3_LeafletX1; 		//���������� ����������� ������ ��� 1�� �������
	F3_i1 = F3_LeafletY1; 						//���������� ������, ��� �� ����� ���� ����� ������� ������1
	F3_j1 = F3_LeafletX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������" ������1

	Leaflet1->Visible = true;

	TimerLeaflet1End->Enabled = false;
	TimerLeaflet1Start->Enabled = true;

	TimerLeaflet1Left->Enabled = true;
	TimerLeaflet1Right->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerLeaflet1LeftTimer(TObject *Sender)
{
//������ ������� ��������1 � ����
	if(Leaflet1->Position->X -20 < Leaflet1->Position->X)
	{
		F3_j1--;
		Leaflet1->Position->X = F3_j1;

		if(Leaflet1->Position->X <= F3_LeafletX1 - 20) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			TimerLeaflet1Right->Enabled = true;
			TimerLeaflet1Left->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerLeaflet1RightTimer(TObject *Sender)
{
//������ ������� ��������1 � �����
	if(Leaflet1->Position->X < F3_LeafletX1 + 20)
	{
		F3_j1++;
		Leaflet1->Position->X = F3_j1;

		if(Leaflet1->Position->X >= F3_LeafletX1 + 20) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			TimerLeaflet1Left->Enabled = true;
			TimerLeaflet1Right->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerLeaflet2StartTimer(TObject *Sender)
{
	if(F3_i2 < Form3->Height + 40)
	{
		F3_i2++;
		Leaflet2->Position->Y = F3_i2;

		if(F3_i2 == Form3->Height + 40) //��������� ������� � ��������
		{
			Leaflet2->Visible = false;
			TimerLeaflet2Start->Enabled = false;

			TimerLeaflet2Left->Enabled = false;
			TimerLeaflet2Right->Enabled = false;

			TimerLeaflet2End->Interval = Random(45000);
			TimerLeaflet2End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerLeaflet2EndTimer(TObject *Sender)
{
	Leaflet2->Position->Y = F3_LeafletY2; 		//���������� ����������� ������ ��� 2�� �������
	Leaflet2->Position->X = F3_LeafletX2; 		//���������� ����������� ������ ��� 2�� �������
	F3_i2 = F3_LeafletY2; 						//���������� ������, ��� �� ����� ���� ����� ������� ������2
	F3_j2 = F3_LeafletX2; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������" ������2

	Leaflet2->Visible = true;

	TimerLeaflet2End->Enabled = false;
	TimerLeaflet2Start->Enabled = true;

	TimerLeaflet2Left->Enabled = false;
	TimerLeaflet2Right->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerLeaflet2LeftTimer(TObject *Sender)
{
//������ ������� ��������2 � ����
	if(Leaflet2->Position->X -15 < Leaflet2->Position->X)
	{
		F3_j2--;
		Leaflet2->Position->X = F3_j2;

		if(Leaflet2->Position->X <= F3_LeafletX2 - 15) //, ��� LeafletX2 - ����������� ���������� �� X ���
		{
			TimerLeaflet2Right->Enabled = true;
			TimerLeaflet2Left->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerLeaflet2RightTimer(TObject *Sender)
{
//������ ������� ��������2 � �����
	if(Leaflet2->Position->X < F3_LeafletX2 + 15)
	{
		F3_j2++;
		Leaflet2->Position->X = F3_j2;

		if(Leaflet2->Position->X >= F3_LeafletX2 + 15) //, ��� LeafletX2 - ����������� ���������� �� X ���
		{
			TimerLeaflet2Left->Enabled = true;
			TimerLeaflet2Right->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore1Image1Timer(TObject *Sender)
{
	//���������� ���������� ����� +25
	ADD_SCORE1_IMAGE1();
	AddScore1->Visible = true;
	TimerAddScore1Start->Enabled = true;

	SCORE = SCORE + 25;
	LabelScore->Text = SCORE;

	TimerAddScore1Image1->Enabled = false;

	TimerAddScore2End->Enabled = false;
	TimerSubtractScoreEnd->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore2Image1Timer(TObject *Sender)
{
	//���������� ���������� ����� +50
	ADD_SCORE2_IMAGE1();
	AddScore2->Visible = true;
	TimerAddScore2Start->Enabled = true;

	SCORE = SCORE + 50;
	LabelScore->Text = SCORE;

	TimerAddScore2Image1->Enabled = false;

	TimerAddScore1End->Enabled = false;
	TimerSubtractScoreEnd->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSubScoreImage1Timer(TObject *Sender)
{
//���������� ���������� ����� -10
	if(SubtractScore->Visible == false)
	{
		SUB_SCORE_IMAGE1();

		SubtractScore->Visible = true;
		TimerSubtractScoreStart->Enabled = true;
	}
	else
	{
		SubtractScore->Visible = false;
		TimerSubtractScoreImage1->Enabled = true;
	}

	SCORE = SCORE - 10;
	LabelScore->Text = SCORE;

	TimerSubScoreImage1->Enabled = false;

	TimerAddScore1End->Enabled = false;
	TimerAddScore2End->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSubtractScoreImage1Timer(TObject *Sender)
{
	SUB_SCORE_IMAGE1();

	SubtractScore->Visible = true;
	TimerSubtractScoreImage1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image1Click(TObject *Sender)
{
	Image1->Free();

	REPOSITION_FORM3();

//������ ������ RANDOM..........................................................
	if(Form2->ALBUM->Text == "HARD")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "0") //0 - ��� Image1
		{
			if(HARD_TEST == Memo1->Lines->Count) //���� ���������� ���� � Memo == ���-�� �����, ������� ���� ���������� ��� �����
			{
				//��������� ������� �����
				MediaPlayer1->Stop();
				MediaPlayer2->Stop();
				MediaPlayer3->Stop();

				//��������� ��������....
				Image1->Visible = false;
				Image2->Visible = false;
				Image3->Visible = false;
				Image4->Visible = false;

				//��������� ������� ������..
				Error1->Visible = false;
				Error2->Visible = false;
				Error3->Visible = false;
				Error4->Visible = false;

				//�������� ����������...............
				LabelTextScore->Visible = true;
				LabelScore->Visible = true;

				LabelTextErrorScore->Visible = true;
				LabelErrorScore->Visible = true;

				//������� ������ � ����������.......
				LabelScore->Text = SCORE;
				LabelErrorScore->Text = ERR_SCORE;

				//��������� ����������� ������ SphereQuest
				TimerSphereQuestEnd->Enabled = false;
				TimerSphereQuestStart->Enabled = false;
				TimerSphereQuestLeft->Enabled = false;
				TimerSphereQuestRight->Enabled = false;

				SphereQuest->Visible = false;

				Form3->MedalHome->Visible = false;
				Form3->MedalWild->Visible = false;
				Form3->MedalAir->Visible = false;
				Form3->MedalWater->Visible = false;
				Form3->MedalInsects->Visible = false;

				Form3->FinalText->Visible = false;
				Form3->FinalTextHome->Visible = false;
				Form3->FinalTextWild->Visible = false;
				Form3->FinalTextAir->Visible = false;
				Form3->FinalTextWater->Visible = false;
				Form3->FinalTextInsects->Visible = false;

				Form3->SmallMedalHome->Visible = true;
				Form3->SmallMedalWild->Visible = true;
				Form3->SmallMedalAir->Visible = true;
				Form3->SmallMedalWater->Visible = true;
				Form3->SmallMedalInsects->Visible = true;

				Form3->TimerAsk1->Enabled = false;
				Form3->TimerAskVoice->Enabled = false;
				Form3->TimerAsk2->Enabled = false;
				Form3->TimerAnimalSound->Enabled = false;
				Form3->TimerTestAsk->Enabled = false;
				Form3->TimerTestVoice->Enabled = false;

				//�������� �������
				if(ERR_SCORE == 0)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward4.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE == 1)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward3.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE == 2)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward2.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE > 2)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward1.mp3";
					MediaPlayer1->Play();
				}

				//�������� ������, ������� ����� 2 ���, �������� ������!!!
				TimerReward->Enabled = true;
			}
			else
			{
				COUNTER->Text = Memo1->Lines->Strings[HARD_TEST];

				switch(StrToInt(COUNTER->Text))
				{

//......AIR................

					case 0: //BEGIN -> Albatross
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_11st(); HIDE_ERROR(); break; }
					}

					case 1: //Albatross -> Bullfinch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

                        TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_30st(); HIDE_ERROR(); break; }
					}

					case 2: //Bullfinch -> Deadlock
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_13st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_9st(); HIDE_ERROR(); break; }
					}

					case 3: //Deadlock -> Dove
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_27st(); HIDE_ERROR(); break; }
					}

					case 4: //Dove -> Duck
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_9st(); HIDE_ERROR(); break; }
					}

					case 5: //Duck -> Eagle
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_36st(); HIDE_ERROR(); break; }
					}

					case 6: //Eagle -> Falcon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_2st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_1st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_26st(); HIDE_ERROR(); break; }
					}

					case 7: //Falcon -> Flamingo
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_66st(); HIDE_ERROR(); break; }
					}

					case 8: //Flamingo -> Goldfinch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_46st(); HIDE_ERROR(); break; }
					}

					case 9: //Goldfinch -> Heron
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_29st(); HIDE_ERROR(); break; }
					}

					case 10: //Heron -> Jay
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_24st(); HIDE_ERROR(); break; }
					}

					case 11: //Jay -> Lark
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_60st(); HIDE_ERROR(); break; }
					}

					case 12: //Lark -> Owl
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_81st(); HIDE_ERROR(); break; }
					}

					case 13: //Owl -> Parrot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_52st(); HIDE_ERROR(); break; }
					}

					case 14: //Parrot -> Pelican
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_5st(); HIDE_ERROR(); break; }
					}

					case 15: //Pelican -> Pheasant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_83st(); HIDE_ERROR(); break; }
					}

					case 16: //Pheasant -> Raven
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_47st(); HIDE_ERROR(); break; }
					}

					case 17: //Raven -> Rook
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_59st(); HIDE_ERROR(); break; }
					}

					case 18: //Rook -> Seagull
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_88st(); HIDE_ERROR(); break; }
					}

					case 19: //Seagull -> Sparrow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_13st(); HIDE_ERROR(); break; }
					}

					case 20: //Sparrow -> Stork
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_1st(); HIDE_ERROR(); break; }
					}

					case 21: //Stork -> Swallow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_72st(); HIDE_ERROR(); break; }
					}

					case 22: //Swallow -> Titmouse
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_61st(); HIDE_ERROR(); break; }
					}

					case 23: //Titmouse -> Woodpecker
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_33st(); HIDE_ERROR(); break; }
					}

//......WATER.......

					case 24: //Woodpecker -> Cachalot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_67st(); HIDE_ERROR(); break; }
					}

					case 25: //Cachalot -> Crab
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_82st(); HIDE_ERROR(); break; }
					}

					case 26: //Crab -> Dolphin
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_2st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_34st(); HIDE_ERROR(); break; }
					}

					case 27: //Dolphin -> Echinoid
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_22st(); HIDE_ERROR(); break; }
					}

					case 28: //Echinoid -> Jellyfish
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_13st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_8st(); HIDE_ERROR(); break; }
					}

					case 29: //Jellyfish -> Octopus
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_85st(); HIDE_ERROR(); break; }
					}

					case 30: //Octopus -> Penguin
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_32st(); HIDE_ERROR(); break; }
					}

					case 31: //Penguin -> Perch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_17st(); HIDE_ERROR(); break; }
					}

					case 32: //Perch -> Schyuka
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_56st(); HIDE_ERROR(); break; }
					}

					case 33: //Perch -> Sea-slope
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_1st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_12st(); HIDE_ERROR(); break; }
					}

					case 34: //Sea-slope -> Shark
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_92st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_7st(); HIDE_ERROR(); break; }
					}

					case 35: //Shark -> Snail
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_87st(); HIDE_ERROR(); break; }
					}

					case 36: //Snail -> Squid
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_28st(); HIDE_ERROR(); break; }
					}

					case 37: //Squid -> Starfish
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_69st(); HIDE_ERROR(); break; }
					}

					case 38: //Starfish -> Turtle
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_15st(); HIDE_ERROR(); break; }
					}

					case 39: //Turtle -> Walrus
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_75st(); HIDE_ERROR(); break; }
					}

//......INSECT......

					case 40: //Walrus -> Ant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_90st(); HIDE_ERROR(); break; }
					}

					case 41: //Ant -> Bee
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_48st(); HIDE_ERROR(); break; }
					}

					case 42: //Bee -> Bug
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_20st(); HIDE_ERROR(); break; }
					}

					case 43: //Bug -> Bumblebee
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_55st(); HIDE_ERROR(); break; }
					}

					case 44: //Bumblebee -> Butterfly
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_80st(); HIDE_ERROR(); break; }
					}

					case 45: //Butterfly -> Dragonfly
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_71st(); HIDE_ERROR(); break; }
					}

					case 46: //Dragonfly -> Grasshopper
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_64st(); HIDE_ERROR(); break; }
					}

					case 47: //Grasshopper -> Ladybug
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_19st(); HIDE_ERROR(); break; }
					}

					case 48: //Ladybug -> Mantis
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_18st(); HIDE_ERROR(); break; }
					}

					case 49: //Mantis -> Scorpion
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_10st(); HIDE_ERROR(); break; }
					}

					case 50: //Scorpion -> Spider
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_40st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_45st(); HIDE_ERROR(); break; }
					}

					case 51: //Spider -> Tarantula
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_68st(); HIDE_ERROR(); break; }
					}

//......HOME........

					case 52: //Tarantula -> Buffalo
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_89st(); HIDE_ERROR(); break; }
					}

					case 53: //Buffalo -> Camel
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_63st(); HIDE_ERROR(); break; }
					}

					case 54: //Camel -> Cat
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_73st(); HIDE_ERROR(); break; }
					}

					case 55: //Cat -> Cock
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_23st(); HIDE_ERROR(); break; }
					}

					case 56: //Cock -> Cow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_39st(); HIDE_ERROR(); break; }
					}

					case 57: //Cow -> Dog
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_70st(); HIDE_ERROR(); break; }
					}

					case 58: //Dog -> Donkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_48st(); HIDE_ERROR(); break; }
					}

					case 59: //Donkey -> Goat
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_43st(); HIDE_ERROR(); break; }
					}

					case 60: //Goat -> Hens
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_38st(); HIDE_ERROR(); break; }
					}

					case 61: //Hens -> Horse
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_16st(); HIDE_ERROR(); break; }
					}

					case 62: //Horse -> Pig
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_53st(); HIDE_ERROR(); break; }
					}

					case 63: //Pig -> Rabbit
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_35st(); HIDE_ERROR(); break; }
					}

					case 64: //Rabbit -> Sheep
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_50st(); HIDE_ERROR(); break; }
					}

					case 65: //Sheep -> Turkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_65st(); HIDE_ERROR(); break; }
					}

//......WILD........

					case 66: //Turkey -> Arctic-fox
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_91st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_92st(); HIDE_ERROR(); break; }
					}

					case 67: //Arctic-fox -> Bear
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_76st(); HIDE_ERROR(); break; }
					}

					case 68: //Bear -> Boar
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_58st(); HIDE_ERROR(); break; }
					}

					case 69: //Boar -> Chameleon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_86st(); HIDE_ERROR(); break; }
					}

					case 70: //Chameleon -> Chipmunk
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_77st(); HIDE_ERROR(); break; }
					}

					case 71: //Chipmunk -> Deer
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_40st(); HIDE_ERROR(); break; }
					}

					case 72: //Deer -> Elephant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_84st(); HIDE_ERROR(); break; }
					}

					case 73: //Elephant -> Fox
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_21st(); HIDE_ERROR(); break; }
					}

					case 74: //Fox -> Giraffe
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_91st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_42st(); HIDE_ERROR(); break; }
					}

					case 75: //Giraffe -> Hedgehog
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_25st(); HIDE_ERROR(); break; }
					}

					case 76: //Hedgehog -> Koala
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_14st(); HIDE_ERROR(); break; }
					}

					case 77: //Koala -> Lion
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_78st(); HIDE_ERROR(); break; }
					}

					case 78: //Lion -> Lynx
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_57st(); HIDE_ERROR(); break; }
					}

					case 79: //Lynx -> Marmot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_37st(); HIDE_ERROR(); break; }
					}

					case 80: //Marmot -> Monkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_2st(); HIDE_ERROR(); break; }
					}

					case 81: //Monkey -> Panda
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_6st(); HIDE_ERROR(); break; }
					}

					case 82: //Panda -> Polar-bear
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_54st(); HIDE_ERROR(); break; }
					}

					case 83: //Polar-bear -> Raccoon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_41st(); HIDE_ERROR(); break; }
					}

					case 84: //Raccoon -> Rhinoceros
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_79st(); HIDE_ERROR(); break; }
					}

					case 85: //Rhinoceros -> Snake
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_40st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_51st(); HIDE_ERROR(); break; }
					}

					case 86: //Snake -> Snow-leopard
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_0st(); HIDE_ERROR(); break; }
					}

					case 87: //Snow-leopard -> Squirrel
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_31st(); HIDE_ERROR(); break; }
					}

					case 88: //Squirrel -> Tiger
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_49st(); HIDE_ERROR(); break; }
					}

					case 89: //Tiger -> Wolf
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_62st(); HIDE_ERROR(); break; }
					}

					case 90: //Wolf -> Zebra
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image1->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_74st(); HIDE_ERROR(); break; }
					}
				} //switch -> end
			} //else -> end
		} //IF -> end
		else { SOUND_ERROR(); ERROR_1(); Error1->Visible = true; TimerSubScoreImage1->Enabled = true; ERR_SCORE++; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ INSECTS.........................................................
	if(Form2->ALBUM->Text == "INSECTS")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "0")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Ant -> Bee
				{
					COUNTER->Text = "1"; //-> Bee
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_7st(); HIDE_ERROR(); break; }
				}

				case 1: //Bee -> Bug
				{
					COUNTER->Text = "2"; //-> Bug
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_8st(); HIDE_ERROR(); break; }
				}

				case 2: //Bug -> Bumblebee
				{
					COUNTER->Text = "3"; //-> Bumblebee
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_4st(); HIDE_ERROR(); break; }
				}

				case 3: //Bumblebee -> Butterfly
				{
					COUNTER->Text = "4"; //-> Butterfly
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_5st(); HIDE_ERROR(); break; }
				}

				case 4: //Butterfly -> Dragonfly
				{
					COUNTER->Text = "5"; //-> Dragonfly
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_6st(); HIDE_ERROR(); break; }
				}

				case 5: //Dragonfly -> Grasshopper
				{
					COUNTER->Text = "6"; //-> Grasshopper
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_9st(); HIDE_ERROR(); break; }
				}

				case 6: //Grasshopper -> Ladybug
				{
					COUNTER->Text = "7"; //-> Ladybug
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_11st(); HIDE_ERROR(); break; }
				}

				case 7: //Ladybug -> Mantis
				{
					COUNTER->Text = "8"; //-> Mantis
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_1st(); HIDE_ERROR(); break; }
				}

				case 8: //Mantis -> Scorpion
				{
					COUNTER->Text = "9"; //-> Scorpion
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_2st(); HIDE_ERROR(); break; }
				}

				case 9: //Scorpion -> Spider
				{
					COUNTER->Text = "10"; //-> Spider
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_10st(); HIDE_ERROR(); break; }
				}

				case 10: //Spider -> Tarantula
				{
					COUNTER->Text = "11"; //-> Tarantula
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_0st(); HIDE_ERROR(); break; }
				}

				case 11: //Tarantula -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = true;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = true;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
                }
			}
		}
		else { SOUND_ERROR(); ERROR_1(); Error1->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WATER...........................................................
	if(Form2->ALBUM->Text == "WATER")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "0")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Cachalot -> Crab
				{
					COUNTER->Text = "1"; //-> Crab
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_7st(); HIDE_ERROR(); break; }
				}

				case 1: //Crab -> Dolphin
				{
					COUNTER->Text = "2"; //-> Dolphin
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_0st(); HIDE_ERROR(); break; }
				}

				case 2: //Dolphin -> Echinoid
				{
					COUNTER->Text = "3"; //-> Echinoid
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_11st(); HIDE_ERROR(); break; }
				}

				case 3: //Echinoid -> Jellyfish
				{
					COUNTER->Text = "4"; //-> Jellyfish
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_14st(); HIDE_ERROR(); break; }
				}

				case 4: //Jellyfish -> Octopus
				{
					COUNTER->Text = "5"; //-> Octopus
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_10st(); HIDE_ERROR(); break; }
				}

				case 5: //Octopus -> Penguin
				{
					COUNTER->Text = "6"; //-> Penguin
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_15st(); HIDE_ERROR(); break; }
				}

				case 6: //Penguin -> Perch
				{
					COUNTER->Text = "7"; //-> Perch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_1st(); HIDE_ERROR(); break; }
				}

				case 7: //Perch -> Schyuka
				{
					COUNTER->Text = "8"; //-> Schyuka
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_12st(); HIDE_ERROR(); break; }
                }

				case 8: //Schyuka -> Sea-slope
				{
					COUNTER->Text = "9"; //-> Sea-slope
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_5st(); HIDE_ERROR(); break; }
				}

				case 9: //Sea-slope -> Shark
				{
					COUNTER->Text = "10"; //-> Shark
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_4st(); HIDE_ERROR(); break; }
				}

				case 10: //Shark -> Snail
				{
					COUNTER->Text = "11"; //-> Snail
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_6st(); HIDE_ERROR(); break; }
				}

				case 11: //Snail -> Squid
				{
					COUNTER->Text = "12"; //-> Squid
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Squid -> Starfish
				{
					COUNTER->Text = "13"; //-> Starfish
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_8st(); HIDE_ERROR(); break; }
				}

				case 13: //Starfish -> Turtle
				{
					COUNTER->Text = "14"; //-> Turtle
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_3st(); HIDE_ERROR(); break; }
				}

				case 14: //Turtle -> Walrus
				{
					COUNTER->Text = "15"; //-> Walrus
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_9st(); HIDE_ERROR(); break; }
				}

				case 15: //Walrus -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = true;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = true;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		else { SOUND_ERROR(); ERROR_1(); Error1->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ AIR.............................................................
	if(Form2->ALBUM->Text == "AIR")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "0")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Albatross -> Bullfinch
				{
					COUNTER->Text = "1"; //-> Bullfinch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_5st(); HIDE_ERROR(); break; }
				}

				case 1: //Bullfinch -> Deadlock
				{
					COUNTER->Text = "2"; //-> Deadlock
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_11st(); HIDE_ERROR(); break; }
				}

				case 2: //Deadlock -> Dove
				{
					COUNTER->Text = "3"; //-> Dove
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_8st(); HIDE_ERROR(); break; }
				}

				case 3: //Dove -> Duck
				{
					COUNTER->Text = "4"; //-> Duck
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_21st(); HIDE_ERROR(); break; }
				}

				case 4: //Duck -> Eagle
				{
					COUNTER->Text = "5"; //-> Eagle
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_6st(); HIDE_ERROR(); break; }
				}

				case 5: //Eagle -> Falcon
				{
					COUNTER->Text = "6"; //-> Falcon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_19st(); HIDE_ERROR(); break; }
				}

				case 6: //Falcon -> Flamingo
				{
					COUNTER->Text = "7"; //-> Flamingo
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_17st(); HIDE_ERROR(); break; }
				}

				case 7: //Flamingo -> Goldfinch
				{
					COUNTER->Text = "8"; //-> Goldfinch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_18st(); HIDE_ERROR(); break; }
				}

				case 8: //Goldfinch -> Heron
				{
					COUNTER->Text = "9"; //-> Heron
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_4st(); HIDE_ERROR(); break; }
				}

				case 9: //Heron -> Jay
				{
					COUNTER->Text = "10"; //-> Jay
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_12st(); HIDE_ERROR(); break; }
				}

				case 10: //Jay -> Lark
				{
					COUNTER->Text = "11"; //-> Lark
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_2st(); HIDE_ERROR(); break; }
				}

				case 11: //Lark -> Owl
				{
					COUNTER->Text = "12"; //-> Owl
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_23st(); HIDE_ERROR(); break; }
				}

				case 12: //Owl -> Parrot
				{
					COUNTER->Text = "13"; //-> Parrot
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_10st(); HIDE_ERROR(); break; }
				}

				case 13: //Parrot -> Pelican
				{
					COUNTER->Text = "14"; //-> Pelican
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_3st(); HIDE_ERROR(); break; }
				}

				case 14: //Pelican -> Pheasant
				{
					COUNTER->Text = "15"; //-> Pheasant
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_16st(); HIDE_ERROR(); break; }
				}

				case 15: //Pheasant -> Raven
				{
					COUNTER->Text = "16"; //-> Raven
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_20st(); HIDE_ERROR(); break; }
				}

				case 16: //Raven -> Rook
				{
					COUNTER->Text = "17"; //-> Rook
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_0st(); HIDE_ERROR(); break; }
				}

				case 17: //Rook -> Seagull
				{
					COUNTER->Text = "18"; //-> Seagull
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_7st(); HIDE_ERROR(); break; }
				}

				case 18: //Seagull -> Sparrow
				{
					COUNTER->Text = "19"; //-> Sparrow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_1st(); HIDE_ERROR(); break; }
				}

				case 19: //Sparrow -> Stork
				{
					COUNTER->Text = "20"; //-> Stork
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_9st(); HIDE_ERROR(); break; }
				}

				case 20: //Stork -> Swallow
				{
					COUNTER->Text = "21"; //-> Swallow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_13st(); HIDE_ERROR(); break; }
				}

				case 21: //Swallow -> Titmouse
				{
					COUNTER->Text = "22"; //-> Titmouse
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_15st(); HIDE_ERROR(); break; }
				}

				case 22: //Titmouse -> Woodpecker
				{
					COUNTER->Text = "23"; //-> Woodpecker
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_14st(); HIDE_ERROR(); break; }
				}

				case 23: //Woodpecker -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = true;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = true;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		else { SOUND_ERROR(); ERROR_1(); Error1->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WILD............................................................
	if(Form2->ALBUM->Text == "WILD")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "0")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Arctic-fox -> Bear
				{
					COUNTER->Text = "1"; //-> Bear
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_9st(); HIDE_ERROR(); break; }
				}

				case 1: //Bear -> Boar
				{
					COUNTER->Text = "2"; //-> Boar
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_24st(); HIDE_ERROR(); break; }
				}

				case 2: 		//Boar -> Chameleon
				{
					COUNTER->Text = "3"; //-> Chameleon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_14st(); HIDE_ERROR(); break; }
				}

				case 3: //Chameleon -> Chipmunk
				{
					COUNTER->Text = "4"; //-> Chipmunk
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_7st(); HIDE_ERROR(); break; }
				}

				case 4: //Chipmunk -> Deer
				{
					COUNTER->Text = "5"; //-> Deer
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_5st(); HIDE_ERROR(); break; }
				}

				case 5: //Deer -> Elephant
				{
					COUNTER->Text = "6"; //-> Elephant
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_21st(); HIDE_ERROR(); break; }
				}

				case 6: //Elephant -> Fox
				{
					COUNTER->Text = "7"; //-> Fox
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_8st(); HIDE_ERROR(); break; }
				}

				case 7: //Fox -> Giraffe
				{
					COUNTER->Text = "8"; //-> Giraffe
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_16st(); HIDE_ERROR(); break; }
				}

				case 8: //Giraffe -> Hedgehog
				{
					COUNTER->Text = "9"; //-> Hedgehog
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_22st(); HIDE_ERROR(); break; }
				}

				case 9: //Hedgehog -> Koala
				{
					COUNTER->Text = "10"; //-> Koala
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_18st(); HIDE_ERROR(); break; }
				}

				case 10: //Koala -> Lion
				{
					COUNTER->Text = "11"; //-> Lion
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_10st(); HIDE_ERROR(); break; }
				}

				case 11: //Lion -> Lynx
				{
					COUNTER->Text = "12"; //-> Lynx
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Lynx -> Marmot
				{
					COUNTER->Text = "13"; //-> Marmot
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_19st(); HIDE_ERROR(); break; }
				}

				case 13: //Marmot -> Monkey
				{
					COUNTER->Text = "14"; //-> Monkey
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_20st(); HIDE_ERROR(); break; }
				}

				case 14: //Monkey -> Panda
				{
					COUNTER->Text = "15"; //-> Panda
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_23st(); HIDE_ERROR(); break; }
				}

				case 15: //Panda -> Polar-bear
				{
					COUNTER->Text = "16"; //-> Polar-bear
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_0st(); HIDE_ERROR(); break; }
				}

				case 16: //Polar-bear -> Raccoon
				{
					COUNTER->Text = "17"; //-> Raccoon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_1st(); HIDE_ERROR(); break; }
				}

				case 17: //Raccoon -> Rhinoceros
				{
					COUNTER->Text = "18"; //-> Rhinoceros
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_17st(); HIDE_ERROR(); break; }
				}

				case 18: //Rhinoceros -> Snake
				{
					COUNTER->Text = "19"; //-> Snake
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_4st(); HIDE_ERROR(); break; }
				}

				case 19: //Snake -> Snow-leopard
				{
					COUNTER->Text = "20"; //-> Snow-leopard
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_6st(); HIDE_ERROR(); break; }
				}

				case 20: //Snow-leopard -> Squirrel
				{
					COUNTER->Text = "21"; //-> Squirrel
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_13st(); HIDE_ERROR(); break; }
				}

				case 21: //Squirrel -> Tiger
				{
					COUNTER->Text = "22"; //-> Tiger
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_12st(); HIDE_ERROR(); break; }
				}

				case 22: //Tiger -> Wolf
				{
					COUNTER->Text = "23"; //-> Wolf
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_11st(); HIDE_ERROR(); break; }
				}

				case 23: //Wolf -> Zebra
				{
					COUNTER->Text = "24"; //-> Zebra
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_3st(); HIDE_ERROR(); break; }
				}

				case 24: //Zebra -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = true;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = true;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		else { SOUND_ERROR(); ERROR_1(); Error1->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ HOME...........................................................
	if(Form2->ALBUM->Text == "HOME")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "0") //0 - ������ ������� "������" � Image1 (0, 1, 2, 3)
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Buffalo -> Camel
				{
					COUNTER->Text = "1";
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_10st(); HIDE_ERROR(); break; }
				}

				case 1: //Camel -> Cat
				{
					COUNTER->Text = "2"; //-> Cat
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_13st(); HIDE_ERROR(); break; }
				}


				case 2: //Cat -> Cock
				{
					COUNTER->Text = "3"; //-> Cock
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_0st(); HIDE_ERROR(); break; }
				}

				case 3: //Cock -> Cow
				{
					COUNTER->Text = "4"; //-> Cow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_1st(); HIDE_ERROR(); break; }
				}

				case 4: //Cow -> Dog
				{
					COUNTER->Text = "5"; //-> Dog
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_8st(); HIDE_ERROR(); break; }
				}

				case 5: //Dog -> Donkey
				{
					COUNTER->Text = "6"; //-> Donkey
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_4st(); HIDE_ERROR(); break; }
				}

				case 6: //Donkey -> Goat
				{
					COUNTER->Text = "7"; //-> Goat
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_5st(); HIDE_ERROR(); break; }
				}

				case 7: //Goat -> Hens
				{
					COUNTER->Text = "8"; //-> Hens
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_11st(); HIDE_ERROR(); break; }
				}

				case 8: //Hens -> Horse
				{
					COUNTER->Text = "9"; //-> Horse
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_6st(); HIDE_ERROR(); break; }
				}

				case 9: //Horse -> Pig
				{
					COUNTER->Text = "10"; //-> Pig
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_ADD_1(); HIDE_ERROR(); break; }
				}

				case 10: //Pig -> Rabbit
				{
					COUNTER->Text = "11"; //-> Rabbit
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_7st(); HIDE_ERROR(); break; }
				}

				case 11: //Rabbit -> Sheep
				{
					COUNTER->Text = "12"; //-> Sheep
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Sheep -> Turkey
				{ //��� 12 ��� - Sheep

					COUNTER->Text = "13"; //-> Turkey (13)
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);  //Random for Turkey

					//���������� Random'a ��� Camel
					if(ANIMALS->Text == "0") { HOME_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_ADD_2(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_3st(); HIDE_ERROR(); break; }
				}

				case 13: //Turkey -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = true;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = true;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		//���� � Image1 ��� Buffalo, �� ���������� "������" - �����.
		else { SOUND_ERROR(); ERROR_1(); Error1->Visible = true; }
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerRewardTimer(TObject *Sender)
{
	//�������� ������!!!
	MediaPlayer1->Stop();
	MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "FinalMusic.mp3";
	MediaPlayer1->Play();

	TimerFinal->Interval = 30000; //������ ����� ��� HAR test
	TimerFinal->Enabled = true; //�������� ������, ������� ������������ �����, �.�. ��������� �� � �������� ������ ��������.
	TimerReward->Enabled = false; //�������� ������, ������� ��������� Form3 �� ��������� ������, ��� == 30 ���.
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerFinalTimer(TObject *Sender)
{
	TimerClose->Enabled = true; //�������� ������ ����������� ����������
	Loading->Visible = true; //�������� ����������� � ��������

	TimerFinal->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerCloseTimer(TObject *Sender)
{
	RESET_FORM3();
	HIDE_ERROR();
	RESET_PICTURES_FORM3();

	Form2->Loading->Visible = false; //�������� ��������, �� Form2

	TimerClose->Enabled = false;

	Form1->TimerAlbumSound->Enabled = true;

	Form2->Close();
	Form3->Close();
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerErrorHideTimer(TObject *Sender)
{
	HIDE_ERROR(); //�-��� ��������� ��� Error's (��������)
	TimerErrorHide->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore2EndTimer(TObject *Sender)
{
	AddScore2->Position->Y = F3_AddScore2Y1; 		//���������� ����������� ������ ��� AddScore1 ������
	F3_i5 = F3_AddScore2Y1; 						//���������� ������, ��� �� ����� ���� ����� ������� AddScore2

	AddScore2->Visible = false;
	TimerAddScore2End->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore2StartTimer(TObject *Sender)
{
	if(F3_i5 > -50)
	{
		F3_i5--;
		AddScore2->Position->Y = F3_i5;

		if(F3_i5 <= -50)
		{
			AddScore2->Visible = false;
			TimerAddScore2Start->Enabled = false;
			TimerAddScore2End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSubtractScoreStartTimer(TObject *Sender)
{
	if(F3_i6 > -50)
	{
		F3_i6--;
		SubtractScore->Position->Y = F3_i6;

		if(F3_i6 <= -50)
		{
			SubtractScore->Visible = false;
			TimerSubtractScoreStart->Enabled = false;
			TimerSubtractScoreEnd->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSubtractScoreEndTimer(TObject *Sender)
{
	SubtractScore->Position->Y = F3_SubScoreY1; 		//���������� ����������� ������ ��� AddScore1 ������
	F3_i6 = F3_SubScoreY1; 						//���������� ������, ��� �� ����� ���� ����� ������� AddScore2

	SubtractScore->Visible = false;
	TimerSubtractScoreEnd->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::AddScore2Click(TObject *Sender)
{
//��� ������ ������
	MediaPlayer3->Stop(); //������������� ������� �������

	MediaPlayer3->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sphere.mp3";
	MediaPlayer3->Play();

//������� �����, ���������� ��������� ����������
	AddScore2->Position->Y = F3_AddScore2Y1; 		//���������� ����������� ������ ��� AddScore1 ������
	F3_i5 = F3_AddScore2Y1; 						//���������� ������, ��� �� ����� ���� ����� ������� AddScore2

	AddScore2->Visible = false;
	TimerAddScore2End->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SubtractScoreClick(TObject *Sender)
{
//��� ������ ������
	MediaPlayer3->Stop(); //������������� ������� �������

	MediaPlayer3->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sphere.mp3";
	MediaPlayer3->Play();

//������� �����, ���������� ��������� ����������
	SubtractScore->Position->Y = F3_SubScoreY1; 		//���������� ����������� ������ ��� AddScore1 ������
	F3_i6 = F3_SubScoreY1; 						//���������� ������, ��� �� ����� ���� ����� ������� AddScore2

	SubtractScore->Visible = false;
	TimerSubtractScoreEnd->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore1StartTimer(TObject *Sender)
{
	if(F3_i4 > -50)
	{
		F3_i4--;
		AddScore1->Position->Y = F3_i4;

		if(F3_i4 <= -50)
		{
			AddScore1->Visible = false;
			TimerAddScore1Start->Enabled = false;
			TimerAddScore1End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore1EndTimer(TObject *Sender)
{
	AddScore1->Position->Y = F3_AddScore1Y1; 		//���������� ����������� ������ ��� AddScore1 ������
	F3_i4 = F3_AddScore1Y1; 						//���������� ������, ��� �� ����� ���� ����� ������� AddScore1

	AddScore1->Visible = false;
	TimerAddScore1End->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::AddScore1Click(TObject *Sender)
{
//��� ������ ������
	MediaPlayer3->Stop(); //������������� ������� �������

	MediaPlayer3->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sphere.mp3";
	MediaPlayer3->Play();

//������� �����, ���������� ��������� ����������
	AddScore1->Position->Y = F3_AddScore1Y1; 		//���������� ����������� ������ ��� AddScore1 ������
	F3_i4 = F3_AddScore1Y1; 						//���������� ������, ��� �� ����� ���� ����� ������� AddScore1

	AddScore1->Visible = false;
	TimerAddScore1End->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SphereQuestClick(TObject *Sender)
{
//��� ������ ������
	MediaPlayer3->Stop(); //������������� ������� �������

	MediaPlayer3->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sphere.mp3";
	MediaPlayer3->Play();

//������ ������ RANDOM..........................................................
	if(Form2->ALBUM->Text == "HARD")
	{
		switch(StrToInt(COUNTER->Text))
		{

//......AIR................

			case 0: //BEGIN -> Albatross
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 1: //Albatross -> Bullfinch
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 2: //Bullfinch -> Deadlock
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 3: //Deadlock -> Dove
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 4: //Dove -> Duck
			{
				TimerAskVoice->Enabled = false;
				TimerAsk1->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk2->Enabled = true;
				break;
			}

			case 5: //Duck -> Eagle
			{
				TimerAskVoice->Enabled = false;
				TimerAsk1->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk2->Enabled = true;
				break;
			}

			case 6: //Eagle -> Falcon
			{
				TimerAskVoice->Enabled = false;
				TimerAsk1->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk2->Enabled = true;
				break;
			}

			case 7: //Falcon -> Flamingo
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 8: //Flamingo -> Goldfinch
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 9: //Goldfinch -> Heron
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 10: //Heron -> Jay
			{
				TimerAskVoice->Enabled = false;
				TimerAsk1->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk2->Enabled = true;
				break;
			}

			case 11: //Jay -> Lark
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 12: //Lark -> Owl
			{
				TimerAskVoice->Enabled = false;
				TimerAsk1->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk2->Enabled = true;
				break;
			}

			case 13: //Owl -> Parrot
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 14: //Parrot -> Pelican
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 15: //Pelican -> Pheasant
			{
				TimerAskVoice->Enabled = false;
				TimerAsk1->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk2->Enabled = true;
				break;
			}

			case 16: //Pheasant -> Raven
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 17: //Raven -> Rook
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 18: //Rook -> Seagull
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 19: //Seagull -> Sparrow
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 20: //Sparrow -> Stork
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 21: //Stork -> Swallow
			{
				TimerAskVoice->Enabled = false;
				TimerAsk1->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk2->Enabled = true;
				break;
			}

			case 22: //Swallow -> Titmouse
			{
				TimerAskVoice->Enabled = false;
				TimerAsk1->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk2->Enabled = true;
				break;
			}

			case 23: //Titmouse -> Woodpecker
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

//......WATER.......

			case 24: //Woodpecker -> Cachalot
			{
				TimerAskVoice->Enabled = false;
				TimerAsk1->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk2->Enabled = true;
				break;
			}

			case 25: //Cachalot -> Crab
			{
				TimerAskVoice->Enabled = false;
				TimerAsk2->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk1->Enabled = true;
				break;
			}

			case 26: //Crab -> Dolphin
			{
				TimerAskVoice->Enabled = false;
				TimerAsk1->Enabled = false;
				TimerAnimalSound->Enabled = false;

				TimerAsk2->Enabled = true;
				break;
			}

			case 27: //Dolphin -> Echinoid
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 28: //Echinoid -> Jellyfish
					{
							TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 29: //Jellyfish -> Octopus
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 30: //Octopus -> Penguin
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 31: //Penguin -> Perch
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 32: //Perch -> Schyuka
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 33: //Perch -> Sea-slope
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 34: //Sea-slope -> Shark
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 35: //Shark -> Snail
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 36: //Snail -> Squid
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 37: //Squid -> Starfish
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 38: //Starfish -> Turtle
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 39: //Turtle -> Walrus
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

//......INSECT......

					case 40: //Walrus -> Ant
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 41: //Ant -> Bee
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 42: //Bee -> Bug
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 43: //Bug -> Bumblebee
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 44: //Bumblebee -> Butterfly
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 45: //Butterfly -> Dragonfly
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 46: //Dragonfly -> Grasshopper
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 47: //Grasshopper -> Ladybug
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 48: //Ladybug -> Mantis
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 49: //Mantis -> Scorpion
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 50: //Scorpion -> Spider
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 51: //Spider -> Tarantula
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

//......HOME........

					case 52: //Tarantula -> Buffalo
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 53: //Buffalo -> Camel
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 54: //Camel -> Cat
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 55: //Cat -> Cock
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 56: //Cock -> Cow
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 57: //Cow -> Dog
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 58: //Dog -> Donkey
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 59: //Donkey -> Goat
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 60: //Goat -> Hens
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 61: //Hens -> Horse
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 62: //Horse -> Pig
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 63: //Pig -> Rabbit
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 64: //Rabbit -> Sheep
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 65: //Sheep -> Turkey
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

//......WILD........

					case 66: //Turkey -> Arctic-fox
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 67: //Arctic-fox -> Bear
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 68: //Bear -> Boar
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 69: //Boar -> Chameleon
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 70: //Chameleon -> Chipmunk
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 71: //Chipmunk -> Deer
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 72: //Deer -> Elephant
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 73: //Elephant -> Fox
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 74: //Fox -> Giraffe
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 75: //Giraffe -> Hedgehog
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 76: //Hedgehog -> Koala
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 77: //Koala -> Lion
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 78: //Lion -> Lynx
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 79: //Lynx -> Marmot
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 80: //Marmot -> Monkey
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 81: //Monkey -> Panda
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 82: //Panda -> Polar-bear
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 83: //Polar-bear -> Raccoon
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 84: //Raccoon -> Rhinoceros
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 85: //Rhinoceros -> Snake
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 86: //Snake -> Snow-leopard
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 87: //Snow-leopard -> Squirrel
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 88: //Squirrel -> Tiger
					{
						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;
				break;
					}

					case 89: //Tiger -> Wolf
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}

					case 90: //Wolf -> Zebra
					{
						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;
				break;
					}
				} //switch -> end
			} //else -> end

	if(Form2->ALBUM->Text == "INSECTS") { TimerTestAsk->Enabled = true; }

	if(Form2->ALBUM->Text == "WATER") { TimerTestAsk->Enabled = true; }

	if(Form2->ALBUM->Text == "AIR") { TimerTestAsk->Enabled = true; }

	if(Form2->ALBUM->Text == "WILD") { TimerTestAsk->Enabled = true; }

	if(Form2->ALBUM->Text == "HOME") { TimerTestAsk->Enabled = true; }





	SphereQuest->Visible = false;
	TimerSphereQuestStart->Enabled = false;

	TimerSphereQuestLeft->Enabled = false;
	TimerSphereQuestRight->Enabled = false;

	TimerSphereQuestEnd->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSphereQuestStartTimer(TObject *Sender)
{
	if(F3_SQ_i1 > - 50)
	{
		F3_SQ_i1--;
		SphereQuest->Position->Y = F3_SQ_i1;

		if(F3_SQ_i1 <= - 50) //��������� ������ � ��������
		{
			SphereQuest->Visible = false;
			TimerSphereQuestStart->Enabled = false;

			TimerSphereQuestLeft->Enabled = false;
			TimerSphereQuestRight->Enabled = false;

			TimerSphereQuestEnd->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSphereQuestEndTimer(TObject *Sender)
{
	SphereQuest->Position->Y = SphereQuestY1; 		//���������� ����������� ������ ��� 2�� �������
	SphereQuest->Position->X = SphereQuestX1; 		//���������� ����������� ������ ��� 2�� �������
	F3_SQ_i1 = SphereQuestY1; 						//���������� ������, ��� �� ����� ���� ����� ������� ������2
	F3_SQ_j1 = SphereQuestX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������" ������2

	SphereQuest->Visible = true;

	TimerSphereQuestEnd->Enabled = false;
	TimerSphereQuestStart->Enabled = true;

	TimerSphereQuestLeft->Enabled = false;
	TimerSphereQuestRight->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSphereQuestLeftTimer(TObject *Sender)
{
//������ ������� SQ � ����
	if(SphereQuest->Position->X -25 < SphereQuest->Position->X)
	{
		F3_SQ_j1--;
		SphereQuest->Position->X = F3_SQ_j1;

		if(SphereQuest->Position->X <= SphereQuestX1 - 25) //, ��� LeafletX2 - ����������� ���������� �� X ���
		{
			TimerSphereQuestRight->Enabled = true;
			TimerSphereQuestLeft->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSphereQuestRightTimer(TObject *Sender)
{
//������ ������� SQ � �����
	if(SphereQuest->Position->X < SphereQuestX1 + 25)
	{
		F3_SQ_j1++;
		SphereQuest->Position->X = F3_SQ_j1;

		if(SphereQuest->Position->X >= SphereQuestX1 + 25) //, ��� LeafletX2 - ����������� ���������� �� X ���
		{
			TimerSphereQuestLeft->Enabled = true;
			TimerSphereQuestRight->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerTestAskTimer(TObject *Sender)
{
	MediaPlayer1->Stop(); //������������� ������� �������

//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ INSECTS.........................................................
	if(Form2->ALBUM->Text == "INSECTS")
	{
		switch(StrToInt(COUNTER->Text))
		{
			case 0: //Ant
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 1: //Bee
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 2: //Bug
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 3: //Bumblebee
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 4: //Butterfly
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 5: //Dragonfly
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 6: //Grasshopper
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 7: //Ladybug
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 8: //Mantis
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 9: //Scorpion
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 10: //Spider
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 11: //Tarantula
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WATER...........................................................
	if(Form2->ALBUM->Text == "WATER")
	{
		switch(StrToInt(COUNTER->Text))
		{
			case 0: //Cachalot
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 1: //Crab
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 2: //Dolphin
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 3: //Echinoid
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 4: //Jellyfish
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 5: //Octopus
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 6: //Penguin
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 7: //Perch
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 8: //Schyuka
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 9: //Sea-slope
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 10: //Shark
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 11: //Snail
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 12: //Squid
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 13: //Starfish
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 14: //Turtle
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 15: //Walrus
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ AIR.............................................................
	if(Form2->ALBUM->Text == "AIR")
	{
		switch(StrToInt(COUNTER->Text))
		{
			case 0: //Albatross
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 1: //Bullfinch
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 2: //Deadlock
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 3: //Dove
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 4: //Duck
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 5: //Eagle
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 6: //Falcon
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 7: //Flamingo
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 8: //Goldfinch
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 9: //Heron
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 10: //Jay
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 11: //Lark
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 12: //Owl
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 13: //Parrot
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 14: //Pelican
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 15: //Pheasant
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 16: //Raven
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 17: //Rook
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 18: //Seagull
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 19: //Sparrow
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 20: //Stork
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 21: //Swallow
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 22: //Titmouse
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 23: //Woodpecker
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WILD............................................................
	if(Form2->ALBUM->Text == "WILD")
	{
		switch(StrToInt(COUNTER->Text))
		{
			case 0: //Arctic-fox
			{
					MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 1: //Bear
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 2: //Boar
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 3: //Chameleon
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 4: //Chipmunk
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 5: //Deer
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 6: //Elephant
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 7: //Fox
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 8: //Giraffe
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 9: //Hedgehog
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 10: //Koala
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 11: //Lion
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 12: //Lynx
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 13: //Marmot
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 14: //Monkey
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 15: //Panda
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 16: //Polar-bear
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 17: //Raccoon
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 18: //Rhinoceros
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 19: //Snake
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 20: //Snow-leopard
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 21: //Squirrel
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 22: //Tiger
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 23: //Wolf
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 24: //Zebra
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ HOME...........................................................
	if(Form2->ALBUM->Text == "HOME")
	{
		switch(StrToInt(COUNTER->Text))
		{
			case 0: //Buffalo
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 1: //Camel
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}


			case 2: //Cat
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 3: //Cock
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 4: //Cow
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 5: //Dog
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 6: //Donkey
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 7: //Goat
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 8: //Hens
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 9: //Horse
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 10: //Pig
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 11: //Rabbit
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 12: //Sheep
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}

			case 13: //Turkey
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerTestVoice->Enabled = true; break;
			}
		}
	}

	TimerTestAsk->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAnimalSoundTimer(TObject *Sender)
{
	MediaPlayer1->Stop(); //������������� ������� �������

	switch(StrToInt(COUNTER->Text))
	{

//......AIR................

		case 0: //BEGIN -> Albatros
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatros.mp3"; MediaPlayer1->Play(); break;
		}

		case 1: //Albatross -> Bullfinch
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.mp3"; MediaPlayer1->Play(); break;
		}

//		case 2: //Bullfinch -> Deadlock
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.mp3"; MediaPlayer1->Play(); break;
//		}

		case 3: //Deadlock -> Dove
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.mp3"; MediaPlayer1->Play(); break;
		}

		case 4: //Dove -> Duck
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.mp3"; MediaPlayer1->Play(); break;
		}

		case 5: //Duck -> Eagle
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.mp3"; MediaPlayer1->Play(); break;
		}

		case 6: //Eagle -> Falcon
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.mp3"; MediaPlayer1->Play(); break;
		}

		case 7: //Falcon -> Flamingo
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.mp3"; MediaPlayer1->Play(); break;
		}

		case 8: //Flamingo -> Goldfinch
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.mp3"; MediaPlayer1->Play(); break;
		}

		case 9: //Goldfinch -> Heron
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.mp3"; MediaPlayer1->Play(); break;
		}

		case 10: //Heron -> Jay
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.mp3"; MediaPlayer1->Play(); break;
		}

		case 11: //Jay -> Lark
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.mp3"; MediaPlayer1->Play(); break;
		}

		case 12: //Lark -> Owl
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.mp3"; MediaPlayer1->Play(); break;
		}

		case 13: //Owl -> Parrot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.mp3"; MediaPlayer1->Play(); break;
		}

		case 14: //Parrot -> Pelican
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.mp3"; MediaPlayer1->Play(); break;
		}

		case 15: //Pelican -> Pheasant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.mp3"; MediaPlayer1->Play(); break;
		}

		case 16: //Pheasant -> Raven
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.mp3"; MediaPlayer1->Play(); break;
		}

		case 17: //Raven -> Rook
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.mp3"; MediaPlayer1->Play(); break;
		}

		case 18: //Rook -> Seagull
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.mp3"; MediaPlayer1->Play(); break;
		}

		case 19: //Seagull -> Sparrow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.mp3"; MediaPlayer1->Play(); break;
		}

		case 20: //Sparrow -> Stork
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.mp3"; MediaPlayer1->Play(); break;
		}

		case 21: //Stork -> Swallow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.mp3"; MediaPlayer1->Play(); break;
		}

		case 22: //Swallow -> Titmouse
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.mp3"; MediaPlayer1->Play(); break;
		}

		case 23: //Titmouse -> Woodpecker
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.mp3"; MediaPlayer1->Play(); break;
		}

//......WATER.......

		case 24: //Woodpecker -> Cachalot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.mp3"; MediaPlayer1->Play(); break;
		}

//		case 25: //Cachalot -> Crab
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.mp3"; MediaPlayer1->Play(); break;
//		}

		case 26: //Crab -> Dolphin
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.mp3"; MediaPlayer1->Play(); break;
		}

//		case 27: //Dolphin -> Echinoid
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.mp3"; MediaPlayer1->Play(); break;
//		}

//		case 28: //Echinoid -> Jellyfish
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.mp3"; MediaPlayer1->Play(); break;
//		}

//		case 29: //Jellyfish -> Octopus
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.mp3"; MediaPlayer1->Play(); break;
//		}

		case 30: //Octopus -> Penguin
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.mp3"; MediaPlayer1->Play(); break;
		}

//		case 31: //Penguin -> Perch
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.mp3"; MediaPlayer1->Play(); break;
//		}

//		case 32: //Perch -> Schyuka
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.mp3"; MediaPlayer1->Play(); break;
//		}

//		case 33: //Perch -> Sea-slope
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.mp3"; MediaPlayer1->Play(); break;
//		}

//		case 34: //Sea-slope -> Shark
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.mp3"; MediaPlayer1->Play(); break;
//		}

//		case 35: //Shark -> Snail
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.mp3"; MediaPlayer1->Play(); break;
//		}

//		case 36: //Snail -> Squid
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.mp3"; MediaPlayer1->Play(); break;
//		}

//		case 37: //Squid -> Starfish
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.mp3"; MediaPlayer1->Play(); break;
//		}

//		case 38: //Starfish -> Turtle
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.mp3"; MediaPlayer1->Play(); break;
//		}

		case 39: //Turtle -> Walrus
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.mp3"; MediaPlayer1->Play(); break;
		}

//......INSECT......

		case 40: //Walrus -> Ant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.mp3"; MediaPlayer1->Play(); break;
		}

		case 41: //Ant -> Bee
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.mp3"; MediaPlayer1->Play(); break;
		}

		case 42: //Bee -> Bug
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.mp3"; MediaPlayer1->Play(); break;
		}

		case 43: //Bug -> Bumblebee
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumb.mp3"; MediaPlayer1->Play(); break;
		}

		case 44: //Bumblebee -> Butterfly
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.mp3"; MediaPlayer1->Play(); break;
		}

		case 45: //Butterfly -> Dragonfly
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.mp3"; MediaPlayer1->Play(); break;
		}

		case 46: //Dragonfly -> Grasshopper
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.mp3"; MediaPlayer1->Play(); break;
		}

//		case 47: //Grasshopper -> Ladybug
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.mp3"; MediaPlayer1->Play(); break;
//		}

		case 48: //Ladybug -> Mantis
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.mp3"; MediaPlayer1->Play(); break;
		}

//		case 49: //Mantis -> Scorpion
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.mp3"; MediaPlayer1->Play(); break;
//		}

		case 50: //Scorpion -> Spider
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.mp3"; MediaPlayer1->Play(); break;
		}

//		case 51: //Spider -> Tarantula
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.mp3"; MediaPlayer1->Play(); break;
//		}

//......HOME........

		case 52: //Tarantula -> Buffalo
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.mp3"; MediaPlayer1->Play(); break;
		}

		case 53: //Buffalo -> Camel
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.mp3"; MediaPlayer1->Play(); break;
		}

		case 54: //Camel -> Cat
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.mp3"; MediaPlayer1->Play(); break;
		}

		case 55: //Cat -> Cock
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.mp3"; MediaPlayer1->Play(); break;
		}

		case 56: //Cock -> Cow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.mp3"; MediaPlayer1->Play(); break;
		}

		case 57: //Cow -> Dog
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.mp3"; MediaPlayer1->Play(); break;
		}

		case 58: //Dog -> Donkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.mp3"; MediaPlayer1->Play(); break;
		}

		case 59: //Donkey -> Goat
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.mp3"; MediaPlayer1->Play(); break;
		}

		case 60: //Goat -> Hens
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.mp3"; MediaPlayer1->Play(); break;
		}

		case 61: //Hens -> Horse
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.mp3"; MediaPlayer1->Play(); break;
		}

		case 62: //Horse -> Pig
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.mp3"; MediaPlayer1->Play(); break;
		}

		case 63: //Pig -> Rabbit
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.mp3"; MediaPlayer1->Play(); break;
		}

		case 64: //Rabbit -> Sheep
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.mp3"; MediaPlayer1->Play(); break;
		}

		case 65: //Sheep -> Turkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.mp3"; MediaPlayer1->Play(); break;
		}

//......WILD........

		case 66: //Turkey -> Arctic-fox
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.mp3"; MediaPlayer1->Play(); break;
		}

		case 67: //Arctic-fox -> Bear
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.mp3"; MediaPlayer1->Play(); break;
		}

		case 68: //Bear -> Boar
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.mp3"; MediaPlayer1->Play(); break;
		}

//		case 69: //Boar -> Chameleon
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.mp3"; MediaPlayer1->Play(); break;
//		}

		case 70: //Chameleon -> Chipmunk
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.mp3"; MediaPlayer1->Play(); break;
		}

		case 71: //Chipmunk -> Deer
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.mp3"; MediaPlayer1->Play(); break;
		}

		case 72: //Deer -> Elephant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.mp3"; MediaPlayer1->Play(); break;
		}

		case 73: //Elephant -> Fox
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.mp3"; MediaPlayer1->Play(); break;
		}

//		case 74: //Fox -> Giraffe
//		{
//			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.mp3"; MediaPlayer1->Play(); break;
//		}

		case 75: //Giraffe -> Hedgehog
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.mp3"; MediaPlayer1->Play(); break;
		}

		case 76: //Hedgehog -> Koala
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.mp3"; MediaPlayer1->Play(); break;
		}

		case 77: //Koala -> Lion
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.mp3"; MediaPlayer1->Play(); break;
		}

		case 78: //Lion -> Lynx
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.mp3"; MediaPlayer1->Play(); break;
		}

		case 79: //Lynx -> Marmot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.mp3"; MediaPlayer1->Play(); break;
		}

		case 80: //Marmot -> Monkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.mp3"; MediaPlayer1->Play(); break;
		}

		case 81: //Monkey -> Panda
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.mp3"; MediaPlayer1->Play(); break;
		}

		case 82: //Panda -> Polar-bear
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.mp3"; MediaPlayer1->Play(); break;
		}

		case 83: //Polar-bear -> Raccoon
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.mp3"; MediaPlayer1->Play(); break;
		}

		case 84: //Raccoon -> Rhinoceros
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.mp3"; MediaPlayer1->Play(); break;
		}

		case 85: //Rhinoceros -> Snake
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.mp3"; MediaPlayer1->Play(); break;
		}

		case 86: //Snake -> Snow-leopard
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.mp3"; MediaPlayer1->Play(); break;
		}

		case 87: //Snow-leopard -> Squirrel
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.mp3"; MediaPlayer1->Play(); break;
		}

		case 88: //Squirrel -> Tiger
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.mp3"; MediaPlayer1->Play(); break;
		}

		case 89: //Tiger -> Wolf
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.mp3"; MediaPlayer1->Play(); break;
		}

		case 90: //Wolf -> Zebra
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.mp3"; MediaPlayer1->Play(); break;
		}
	}

	TimerAnimalSound->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAskVoiceTimer(TObject *Sender)
{
	MediaPlayer1->Stop(); //������������� ������� �������

	switch(StrToInt(COUNTER->Text))
	{

//......AIR................

		case 0: //BEGIN -> Albatros
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sAlbatross.mp3"; MediaPlayer1->Play(); break;
		}

		case 1: //Albatross -> Bullfinch
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBullfinch.mp3"; MediaPlayer1->Play(); break;
		}

		case 2: //Bullfinch -> Deadlock
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDeadlock.mp3"; MediaPlayer1->Play(); break;
		}

		case 3: //Deadlock -> Dove
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDove.mp3"; MediaPlayer1->Play(); break;
		}

		case 4: //Dove -> Duck
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDuck.mp3"; MediaPlayer1->Play(); break;
		}

		case 5: //Duck -> Eagle
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sEagle.mp3"; MediaPlayer1->Play(); break;
		}

		case 6: //Eagle -> Falcon
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sFalcon.mp3"; MediaPlayer1->Play(); break;
		}

		case 7: //Falcon -> Flamingo
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sFlamingo.mp3"; MediaPlayer1->Play(); break;
		}

		case 8: //Flamingo -> Goldfinch
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGoldfinch.mp3"; MediaPlayer1->Play(); break;
		}

		case 9: //Goldfinch -> Heron
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHeron.mp3"; MediaPlayer1->Play(); break;
		}

		case 10: //Heron -> Jay
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sJay.mp3"; MediaPlayer1->Play(); break;
		}

		case 11: //Jay -> Lark
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLark.mp3"; MediaPlayer1->Play(); break;
		}

		case 12: //Lark -> Owl
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sOwl.mp3"; MediaPlayer1->Play(); break;
		}

		case 13: //Owl -> Parrot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sParrot.mp3"; MediaPlayer1->Play(); break;
		}

		case 14: //Parrot -> Pelican
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPelican.mp3"; MediaPlayer1->Play(); break;
		}

		case 15: //Pelican -> Pheasant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPheasant.mp3"; MediaPlayer1->Play(); break;
		}

		case 16: //Pheasant -> Raven
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRaven.mp3"; MediaPlayer1->Play(); break;
		}

		case 17: //Raven -> Rook
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRook.mp3"; MediaPlayer1->Play(); break;
		}

		case 18: //Rook -> Seagull
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSeagull.mp3"; MediaPlayer1->Play(); break;
		}

		case 19: //Seagull -> Sparrow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSparrow.mp3"; MediaPlayer1->Play(); break;
		}

		case 20: //Sparrow -> Stork
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sStork.mp3"; MediaPlayer1->Play(); break;
		}

		case 21: //Stork -> Swallow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSwallow.mp3"; MediaPlayer1->Play(); break;
		}

		case 22: //Swallow -> Titmouse
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTitmouse.mp3"; MediaPlayer1->Play(); break;
		}

		case 23: //Titmouse -> Woodpecker
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sWoodpecker.mp3"; MediaPlayer1->Play(); break;
		}

//......WATER.......

		case 24: //Woodpecker -> Cachalot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCachalot.mp3"; MediaPlayer1->Play(); break;
		}

		case 25: //Cachalot -> Crab
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCrab.mp3"; MediaPlayer1->Play(); break;
		}

		case 26: //Crab -> Dolphin
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDolphin.mp3"; MediaPlayer1->Play(); break;
		}

		case 27: //Dolphin -> Echinoid
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sEchinoid.mp3"; MediaPlayer1->Play(); break;
		}

		case 28: //Echinoid -> Jellyfish
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sJellyfish.mp3"; MediaPlayer1->Play(); break;
		}

		case 29: //Jellyfish -> Octopus
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sOctopus.mp3"; MediaPlayer1->Play(); break;
		}

		case 30: //Octopus -> Penguin
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPenguin.mp3"; MediaPlayer1->Play(); break;
		}

		case 31: //Penguin -> Perch
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPerch.mp3"; MediaPlayer1->Play(); break;
		}

		case 32: //Perch -> Schyuka
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSchyuka.mp3"; MediaPlayer1->Play(); break;
		}

		case 33: //Perch -> Sea-slope
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSea-slope.mp3"; MediaPlayer1->Play(); break;
		}

		case 34: //Sea-slope -> Shark
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sShark.mp3"; MediaPlayer1->Play(); break;
		}

		case 35: //Shark -> Snail
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSnail.mp3"; MediaPlayer1->Play(); break;
		}

		case 36: //Snail -> Squid
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSquid.mp3"; MediaPlayer1->Play(); break;
		}

		case 37: //Squid -> Starfish
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sStarfish.mp3"; MediaPlayer1->Play(); break;
		}

		case 38: //Starfish -> Turtle
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTurtle.mp3"; MediaPlayer1->Play(); break;
		}

		case 39: //Turtle -> Walrus
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sWalrus.mp3"; MediaPlayer1->Play(); break;
		}

//......INSECT......

		case 40: //Walrus -> Ant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sAnt.mp3"; MediaPlayer1->Play(); break;
		}

		case 41: //Ant -> Bee
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBee.mp3"; MediaPlayer1->Play(); break;
		}

		case 42: //Bee -> Bug
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBug.mp3"; MediaPlayer1->Play(); break;
		}

		case 43: //Bug -> Bumblebee
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBumblebee.mp3"; MediaPlayer1->Play(); break;
		}

		case 44: //Bumblebee -> Butterfly
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sButterfly.mp3"; MediaPlayer1->Play(); break;
		}

		case 45: //Butterfly -> Dragonfly
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDragonfly.mp3"; MediaPlayer1->Play(); break;
		}

		case 46: //Dragonfly -> Grasshopper
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGrasshopper.mp3"; MediaPlayer1->Play(); break;
		}

		case 47: //Grasshopper -> Ladybug
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLadybug.mp3"; MediaPlayer1->Play(); break;
		}

		case 48: //Ladybug -> Mantis
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sMantis.mp3"; MediaPlayer1->Play(); break;
		}

		case 49: //Mantis -> Scorpion
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sScorpion.mp3"; MediaPlayer1->Play(); break;
		}

		case 50: //Scorpion -> Spider
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSpider.mp3"; MediaPlayer1->Play(); break;
		}

		case 51: //Spider -> Tarantula
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTarantula.mp3"; MediaPlayer1->Play(); break;
		}

//......HOME........

		case 52: //Tarantula -> Buffalo
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBuffalo.mp3"; MediaPlayer1->Play(); break;
		}

		case 53: //Buffalo -> Camel
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCamel.mp3"; MediaPlayer1->Play(); break;
		}

		case 54: //Camel -> Cat
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCat.mp3"; MediaPlayer1->Play(); break;
		}

		case 55: //Cat -> Cock
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCock.mp3"; MediaPlayer1->Play(); break;
		}

		case 56: //Cock -> Cow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCow.mp3"; MediaPlayer1->Play(); break;
		}

		case 57: //Cow -> Dog
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDog.mp3"; MediaPlayer1->Play(); break;
		}

		case 58: //Dog -> Donkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDonkey.mp3"; MediaPlayer1->Play(); break;
		}

		case 59: //Donkey -> Goat
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGoat.mp3"; MediaPlayer1->Play(); break;
		}

		case 60: //Goat -> Hens
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHens.mp3"; MediaPlayer1->Play(); break;
		}

		case 61: //Hens -> Horse
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHorse.mp3"; MediaPlayer1->Play(); break;
		}

		case 62: //Horse -> Pig
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPig.mp3"; MediaPlayer1->Play(); break;
		}

		case 63: //Pig -> Rabbit
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRabbit.mp3"; MediaPlayer1->Play(); break;
		}

		case 64: //Rabbit -> Sheep
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSheep.mp3"; MediaPlayer1->Play(); break;
		}

		case 65: //Sheep -> Turkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTurkey.mp3"; MediaPlayer1->Play(); break;
		}

//......WILD........

		case 66: //Turkey -> Arctic-fox
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sArctic-fox.mp3"; MediaPlayer1->Play(); break;
		}

		case 67: //Arctic-fox -> Bear
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBear.mp3"; MediaPlayer1->Play(); break;
		}

		case 68: //Bear -> Boar
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBoar.mp3"; MediaPlayer1->Play(); break;
		}

		case 69: //Boar -> Chameleon
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sChameleon.mp3"; MediaPlayer1->Play(); break;
		}

		case 70: //Chameleon -> Chipmunk
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sChipmunk.mp3"; MediaPlayer1->Play(); break;
		}

		case 71: //Chipmunk -> Deer
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDeer.mp3"; MediaPlayer1->Play(); break;
		}

		case 72: //Deer -> Elephant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sElephant.mp3"; MediaPlayer1->Play(); break;
		}

		case 73: //Elephant -> Fox
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sFox.mp3"; MediaPlayer1->Play(); break;
		}

		case 74: //Fox -> Giraffe
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGiraffe.mp3"; MediaPlayer1->Play(); break;
		}

		case 75: //Giraffe -> Hedgehog
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHedgehog.mp3"; MediaPlayer1->Play(); break;
		}

		case 76: //Hedgehog -> Koala
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sKoala.mp3"; MediaPlayer1->Play(); break;
		}

		case 77: //Koala -> Lion
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLion.mp3"; MediaPlayer1->Play(); break;
		}

		case 78: //Lion -> Lynx
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLynx.mp3"; MediaPlayer1->Play(); break;
		}

		case 79: //Lynx -> Marmot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sMarmot.mp3"; MediaPlayer1->Play(); break;
		}

		case 80: //Marmot -> Monkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sMonkey.mp3"; MediaPlayer1->Play(); break;
		}

		case 81: //Monkey -> Panda
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPanda.mp3"; MediaPlayer1->Play(); break;
		}

		case 82: //Panda -> Polar-bear
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPolar-bear.mp3"; MediaPlayer1->Play(); break;
		}

		case 83: //Polar-bear -> Raccoon
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRaccoon.mp3"; MediaPlayer1->Play(); break;
		}

		case 84: //Raccoon -> Rhinoceros
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRhinoceros.mp3"; MediaPlayer1->Play(); break;
		}

		case 85: //Rhinoceros -> Snake
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSnake.mp3"; MediaPlayer1->Play(); break;
		}

		case 86: //Snake -> Snow-leopard
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSnow-leopard.mp3"; MediaPlayer1->Play(); break;
		}

		case 87: //Snow-leopard -> Squirrel
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSquirrel.mp3"; MediaPlayer1->Play(); break;
		}

		case 88: //Squirrel -> Tiger
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTiger.mp3"; MediaPlayer1->Play(); break;
		}

		case 89: //Tiger -> Wolf
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sWolf.mp3"; MediaPlayer1->Play(); break;
		}

		case 90: //Wolf -> Zebra
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sZebra.mp3"; MediaPlayer1->Play(); break;
		}
	}

	TimerAskVoice->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAsk1Timer(TObject *Sender)
{
	MediaPlayer1->Stop(); //������������� ������� �������

	switch(StrToInt(COUNTER->Text))
	{

//......AIR................

		case 0: //BEGIN -> Albatross
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 1: //Albatross -> Bullfinch
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 2: //Bullfinch -> Deadlock
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 3: //Deadlock -> Dove
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 4: //Dove -> Duck
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 5: //Duck -> Eagle
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 6: //Eagle -> Falcon
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 7: //Falcon -> Flamingo
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 8: //Flamingo -> Goldfinch
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 9: //Goldfinch -> Heron
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 10: //Heron -> Jay
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 11: //Jay -> Lark
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 12: //Lark -> Owl
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 13: //Owl -> Parrot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 14: //Parrot -> Pelican
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 15: //Pelican -> Pheasant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 16: //Pheasant -> Raven
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 17: //Raven -> Rook
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 18: //Rook -> Seagull
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 19: //Seagull -> Sparrow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 20: //Sparrow -> Stork
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 21: //Stork -> Swallow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 22: //Swallow -> Titmouse
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 23: //Titmouse -> Woodpecker
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

//......WATER.......

		case 24: //Woodpecker -> Cachalot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 25: //Cachalot -> Crab
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 26: //Crab -> Dolphin
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 27: //Dolphin -> Echinoid
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 28: //Echinoid -> Jellyfish
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 29: //Jellyfish -> Octopus
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 30: //Octopus -> Penguin
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 31: //Penguin -> Perch
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 32: //Perch -> Schyuka
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 33: //Perch -> Sea-slope
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 34: //Sea-slope -> Shark
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 35: //Shark -> Snail
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 36: //Snail -> Squid
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 37: //Squid -> Starfish
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 38: //Starfish -> Turtle
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 39: //Turtle -> Walrus
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

//......INSECT......

		case 40: //Walrus -> Ant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 41: //Ant -> Bee
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 42: //Bee -> Bug
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 43: //Bug -> Bumblebee
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 44: //Bumblebee -> Butterfly
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 45: //Butterfly -> Dragonfly
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 46: //Dragonfly -> Grasshopper
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 47: //Grasshopper -> Ladybug
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 48: //Ladybug -> Mantis
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 49: //Mantis -> Scorpion
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 50: //Scorpion -> Spider
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 51: //Spider -> Tarantula
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

//......HOME........

		case 52: //Tarantula -> Buffalo
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 53: //Buffalo -> Camel
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 54: //Camel -> Cat
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 55: //Cat -> Cock
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 56: //Cock -> Cow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 57: //Cow -> Dog
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 58: //Dog -> Donkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 59: //Donkey -> Goat
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 60: //Goat -> Hens
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 61: //Hens -> Horse
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 62: //Horse -> Pig
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 63: //Pig -> Rabbit
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 64: //Rabbit -> Sheep
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 65: //Sheep -> Turkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

//......WILD........

		case 66: //Turkey -> Arctic-fox
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 67: //Arctic-fox -> Bear
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 68: //Bear -> Boar
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 69: //Boar -> Chameleon
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 70: //Chameleon -> Chipmunk
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 71: //Chipmunk -> Deer
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 72: //Deer -> Elephant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 73: //Elephant -> Fox
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 74: //Fox -> Giraffe
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 75: //Giraffe -> Hedgehog
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 76: //Hedgehog -> Koala
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 77: //Koala -> Lion
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 78: //Lion -> Lynx
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 79: //Lynx -> Marmot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 80: //Marmot -> Monkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 81: //Monkey -> Panda
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 82: //Panda -> Polar-bear
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 83: //Polar-bear -> Raccoon
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 84: //Raccoon -> Rhinoceros
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 85: //Rhinoceros -> Snake
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 86: //Snake -> Snow-leopard
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 87: //Snow-leopard -> Squirrel
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 88: //Squirrel -> Tiger
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where2.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 89: //Tiger -> Wolf
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}

		case 90: //Wolf -> Zebra
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAskVoice->Enabled = true; break;
		}
	}

	TimerAsk1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAsk2Timer(TObject *Sender)
{
	MediaPlayer1->Stop(); //������������� ������� �������

	switch(StrToInt(COUNTER->Text))
	{

//......AIR................

		case 0: //BEGIN -> Albatross
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 1: //Albatross -> Bullfinch
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 2: //Bullfinch -> Deadlock
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 3: //Deadlock -> Dove
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 4: //Dove -> Duck
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 5: //Duck -> Eagle
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 6: //Eagle -> Falcon
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 7: //Falcon -> Flamingo
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 8: //Flamingo -> Goldfinch
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 9: //Goldfinch -> Heron
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 10: //Heron -> Jay
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 11: //Jay -> Lark
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Where1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 12: //Lark -> Owl
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 13: //Owl -> Parrot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 14: //Parrot -> Pelican
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 15: //Pelican -> Pheasant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 16: //Pheasant -> Raven
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 17: //Raven -> Rook
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 18: //Rook -> Seagull
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 19: //Seagull -> Sparrow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 20: //Sparrow -> Stork
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 21: //Stork -> Swallow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 22: //Swallow -> Titmouse
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 23: //Titmouse -> Woodpecker
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

//......WATER.......

		case 24: //Woodpecker -> Cachalot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 25: //Cachalot -> Crab
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 26: //Crab -> Dolphin
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 27: //Dolphin -> Echinoid
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 28: //Echinoid -> Jellyfish
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 29: //Jellyfish -> Octopus
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 30: //Octopus -> Penguin
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 31: //Penguin -> Perch
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 32: //Perch -> Schyuka
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 33: //Perch -> Sea-slope
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 34: //Sea-slope -> Shark
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 35: //Shark -> Snail
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 36: //Snail -> Squid
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 37: //Squid -> Starfish
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 38: //Starfish -> Turtle
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 39: //Turtle -> Walrus
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

//......INSECT......

		case 40: //Walrus -> Ant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 41: //Ant -> Bee
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 42: //Bee -> Bug
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 43: //Bug -> Bumblebee
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 44: //Bumblebee -> Butterfly
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 45: //Butterfly -> Dragonfly
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 46: //Dragonfly -> Grasshopper
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 47: //Grasshopper -> Ladybug
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 48: //Ladybug -> Mantis
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 49: //Mantis -> Scorpion
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 50: //Scorpion -> Spider
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 51: //Spider -> Tarantula
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

//......HOME........

		case 52: //Tarantula -> Buffalo
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 53: //Buffalo -> Camel
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 54: //Camel -> Cat
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 55: //Cat -> Cock
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 56: //Cock -> Cow
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 57: //Cow -> Dog
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 58: //Dog -> Donkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 59: //Donkey -> Goat
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 60: //Goat -> Hens
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 61: //Hens -> Horse
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 62: //Horse -> Pig
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 63: //Pig -> Rabbit
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 64: //Rabbit -> Sheep
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 65: //Sheep -> Turkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

//......WILD........

		case 66: //Turkey -> Arctic-fox
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 67: //Arctic-fox -> Bear
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 68: //Bear -> Boar
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 69: //Boar -> Chameleon
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 70: //Chameleon -> Chipmunk
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 71: //Chipmunk -> Deer
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 72: //Deer -> Elephant
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 73: //Elephant -> Fox
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 74: //Fox -> Giraffe
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 75: //Giraffe -> Hedgehog
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 76: //Hedgehog -> Koala
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 77: //Koala -> Lion
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 78: //Lion -> Lynx
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 79: //Lynx -> Marmot
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 80: //Marmot -> Monkey
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 81: //Monkey -> Panda
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 82: //Panda -> Polar-bear
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 83: //Polar-bear -> Raccoon
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 84: //Raccoon -> Rhinoceros
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 85: //Rhinoceros -> Snake
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 86: //Snake -> Snow-leopard
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 87: //Snow-leopard -> Squirrel
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 88: //Squirrel -> Tiger
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask2.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 89: //Tiger -> Wolf
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}

		case 90: //Wolf -> Zebra
		{
			MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ask1.mp3"; MediaPlayer1->Play(); TimerAnimalSound->Enabled = true; break;
		}
	}

	TimerAsk2->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerTestVoiceTimer(TObject *Sender)
{
	MediaPlayer1->Stop(); //������������� ������� �������

//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ INSECTS.........................................................
	if(Form2->ALBUM->Text == "INSECTS")
	{
		switch(StrToInt(COUNTER->Text))
		{
			case 0: //Ant -> Bee
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sAnt.mp3"; MediaPlayer1->Play(); break;
			}

			case 1: //Ant -> Bee
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBee.mp3"; MediaPlayer1->Play(); break;
			}

			case 2: //Bee -> Bug
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBug.mp3"; MediaPlayer1->Play(); break;
			}

			case 3: //Bug -> Bumblebee
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBumblebee.mp3"; MediaPlayer1->Play(); break;
			}

			case 4: //Bumblebee -> Butterfly
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sButterfly.mp3"; MediaPlayer1->Play(); break;
			}

			case 5: //Butterfly -> Dragonfly
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDragonfly.mp3"; MediaPlayer1->Play(); break;
			}

			case 6: //Dragonfly -> Grasshopper
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGrasshopper.mp3"; MediaPlayer1->Play(); break;
			}

			case 7: //Grasshopper -> Ladybug
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLadybug.mp3"; MediaPlayer1->Play(); break;
			}

			case 8: //Ladybug -> Mantis
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sMantis.mp3"; MediaPlayer1->Play(); break;
			}

			case 9: //Mantis -> Scorpion
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sScorpion.mp3"; MediaPlayer1->Play(); break;
			}

			case 10: //Scorpion -> Spider
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSpider.mp3"; MediaPlayer1->Play(); break;
			}

			case 11: //Spider -> Tarantula
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTarantula.mp3"; MediaPlayer1->Play(); break;
			}
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WATER...........................................................
	if(Form2->ALBUM->Text == "WATER")
	{
		switch(StrToInt(COUNTER->Text))
		{
			case 0: //Cachalot
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCachalot.mp3"; MediaPlayer1->Play(); break;
			}

			case 1: //Crab
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCrab.mp3"; MediaPlayer1->Play(); break;
			}

			case 2: //Dolphin
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDolphin.mp3"; MediaPlayer1->Play(); break;
			}

			case 3: //Echinoid
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sEchinoid.mp3"; MediaPlayer1->Play(); break;
			}

			case 4: //Jellyfish
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sJellyfish.mp3"; MediaPlayer1->Play(); break;
			}

			case 5: //Octopus
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sOctopus.mp3"; MediaPlayer1->Play(); break;
			}

			case 6: //Penguin
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPenguin.mp3"; MediaPlayer1->Play(); break;
			}

			case 7: //Perch
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPerch.mp3"; MediaPlayer1->Play(); break;
			}

			case 8: //Schyuka
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSchyuka.mp3"; MediaPlayer1->Play(); break;
			}

			case 9: //Sea-slope
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSea-slope.mp3"; MediaPlayer1->Play(); break;
			}

			case 10: //Shark
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sShark.mp3"; MediaPlayer1->Play(); break;
			}

			case 11: //Snail
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSnail.mp3"; MediaPlayer1->Play(); break;
			}

			case 12: //Squid
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSquid.mp3"; MediaPlayer1->Play(); break;
			}

			case 13: //Starfish
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sStarfish.mp3"; MediaPlayer1->Play(); break;
			}

			case 14: //Turtle
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTurtle.mp3"; MediaPlayer1->Play(); break;
			}

			case 15: //Walrus
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sWalrus.mp3"; MediaPlayer1->Play(); break;
			}
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ AIR.............................................................
	if(Form2->ALBUM->Text == "AIR")
	{
		switch(StrToInt(COUNTER->Text))
		{
			case 0: //Albatross
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sAlbatross.mp3"; MediaPlayer1->Play(); break;
			}

			case 1: //Bullfinch
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBullfinch.mp3"; MediaPlayer1->Play(); break;
			}

			case 2: //Deadlock
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDeadlock.mp3"; MediaPlayer1->Play(); break;
			}

			case 3: //Dove
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDove.mp3"; MediaPlayer1->Play(); break;
			}

			case 4: //Duck
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDuck.mp3"; MediaPlayer1->Play(); break;
			}

			case 5: //Eagle
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sEagle.mp3"; MediaPlayer1->Play(); break;
			}

			case 6: //Falcon
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sFalcon.mp3"; MediaPlayer1->Play(); break;
			}

			case 7: //Flamingo
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sFlamingo.mp3"; MediaPlayer1->Play(); break;
			}

			case 8: //Goldfinch
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGoldfinch.mp3"; MediaPlayer1->Play(); break;
			}

			case 9: //Heron
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHeron.mp3"; MediaPlayer1->Play(); break;
			}

			case 10: //Jay
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sJay.mp3"; MediaPlayer1->Play(); break;
			}

			case 11: //Lark
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLark.mp3"; MediaPlayer1->Play(); break;
			}

			case 12: //Owl
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sOwl.mp3"; MediaPlayer1->Play(); break;
			}

			case 13: //Parrot
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sParrot.mp3"; MediaPlayer1->Play(); break;
			}

			case 14: //Pelican
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPelican.mp3"; MediaPlayer1->Play(); break;
			}

			case 15: //Pheasant
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPheasant.mp3"; MediaPlayer1->Play(); break;
			}

			case 16: //Raven
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRaven.mp3"; MediaPlayer1->Play(); break;
			}

			case 17: //Rook
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRook.mp3"; MediaPlayer1->Play(); break;
			}

			case 18: //Seagull
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSeagull.mp3"; MediaPlayer1->Play(); break;
			}

			case 19: //Sparrow
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSparrow.mp3"; MediaPlayer1->Play(); break;
			}

			case 20: //Stork
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sStork.mp3"; MediaPlayer1->Play(); break;
			}

			case 21: //Swallow
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSwallow.mp3"; MediaPlayer1->Play(); break;
			}

			case 22: //Titmouse
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTitmouse.mp3"; MediaPlayer1->Play(); break;
			}

			case 23: //Woodpecker
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sWoodpecker.mp3"; MediaPlayer1->Play(); break;
			}
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WILD............................................................
	if(Form2->ALBUM->Text == "WILD")
	{
		switch(StrToInt(COUNTER->Text))
		{
			case 0: //Arctic-fox
			{
					MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sArctic-fox.mp3"; MediaPlayer1->Play(); break;
			}

			case 1: //Bear
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBear.mp3"; MediaPlayer1->Play(); break;
			}

			case 2: //Boar
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBoar.mp3"; MediaPlayer1->Play(); break;
			}

			case 3: //Chameleon
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sChameleon.mp3"; MediaPlayer1->Play(); break;
			}

			case 4: //Chipmunk
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sChipmunk.mp3"; MediaPlayer1->Play(); break;
			}

			case 5: //Deer
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDeer.mp3"; MediaPlayer1->Play(); break;
			}

			case 6: //Elephant
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sElephant.mp3"; MediaPlayer1->Play(); break;
			}

			case 7: //Fox
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sFox.mp3"; MediaPlayer1->Play(); break;
			}

			case 8: //Giraffe
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGiraffe.mp3"; MediaPlayer1->Play(); break;
			}

			case 9: //Hedgehog
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHedgehog.mp3"; MediaPlayer1->Play(); break;
			}

			case 10: //Koala
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sKoala.mp3"; MediaPlayer1->Play(); break;
			}

			case 11: //Lion
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLion.mp3"; MediaPlayer1->Play(); break;
			}

			case 12: //Lynx
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLynx.mp3"; MediaPlayer1->Play(); break;
			}

			case 13: //Marmot
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sMarmot.mp3"; MediaPlayer1->Play(); break;
			}

			case 14: //Monkey
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sMonkey.mp3"; MediaPlayer1->Play(); break;
			}

			case 15: //Panda
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPanda.mp3"; MediaPlayer1->Play(); break;
			}

			case 16: //Polar-bear
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPolar-bear.mp3"; MediaPlayer1->Play(); break;
			}

			case 17: //Raccoon
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRaccoon.mp3"; MediaPlayer1->Play(); break;
			}

			case 18: //Rhinoceros
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRhinoceros.mp3"; MediaPlayer1->Play(); break;
			}

			case 19: //Snake
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSnake.mp3"; MediaPlayer1->Play(); break;
			}

			case 20: //Snow-leopard
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSnow-leopard.mp3"; MediaPlayer1->Play(); break;
			}

			case 21: //Squirrel
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSquirrel.mp3"; MediaPlayer1->Play(); break;
			}

			case 22: //Tiger
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTiger.mp3"; MediaPlayer1->Play(); break;
			}

			case 23: //Wolf
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sWolf.mp3"; MediaPlayer1->Play(); break;
			}

			case 24: //Zebra
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sZebra.mp3"; MediaPlayer1->Play(); break;
			}
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ HOME...........................................................
	if(Form2->ALBUM->Text == "HOME")
	{
		switch(StrToInt(COUNTER->Text))
		{
			case 0: //Buffalo
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBuffalo.mp3"; MediaPlayer1->Play(); break;
			}

			case 1: //Camel
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCamel.mp3"; MediaPlayer1->Play(); break;
			}


			case 2: //Cat
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCat.mp3"; MediaPlayer1->Play(); break;
			}

			case 3: //Cock
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCock.mp3"; MediaPlayer1->Play(); break;
			}

			case 4: //Cow
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCow.mp3"; MediaPlayer1->Play(); break;
			}

			case 5: //Dog
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDog.mp3"; MediaPlayer1->Play(); break;
			}

			case 6: //Donkey
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDonkey.mp3"; MediaPlayer1->Play(); break;
			}

			case 7: //Goat
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGoat.mp3"; MediaPlayer1->Play(); break;
			}

			case 8: //Hens
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHens.mp3"; MediaPlayer1->Play(); break;
			}

			case 9: //Horse
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHorse.mp3"; MediaPlayer1->Play(); break;
			}

			case 10: //Pig
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPig.mp3"; MediaPlayer1->Play(); break;
			}

			case 11: //Rabbit
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRabbit.mp3"; MediaPlayer1->Play(); break;
			}

			case 12: //Sheep
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSheep.mp3"; MediaPlayer1->Play(); break;
			}

			case 13: //Turkey
			{
				MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTurkey.mp3"; MediaPlayer1->Play(); break;
			}
		}
	}

	TimerTestVoice->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore1Image2Timer(TObject *Sender)
{
	//���������� ���������� ����� +25
	ADD_SCORE1_IMAGE2();
	AddScore1->Visible = true;
	TimerAddScore1Start->Enabled = true;

	SCORE = SCORE + 25;
	LabelScore->Text = SCORE;

	TimerAddScore1Image2->Enabled = false;

	TimerAddScore2End->Enabled = false;
	TimerSubtractScoreEnd->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore2Image2Timer(TObject *Sender)
{
	//���������� ���������� ����� +50
	ADD_SCORE2_IMAGE2();
	AddScore2->Visible = true;
	TimerAddScore2Start->Enabled = true;

	SCORE = SCORE + 50;
	LabelScore->Text = SCORE;

	TimerAddScore2Image2->Enabled = false;

	TimerAddScore1End->Enabled = false;
	TimerSubtractScoreEnd->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSubScoreImage2Timer(TObject *Sender)
{
//���������� ���������� ����� -10
	if(SubtractScore->Visible == false)
	{
		SUB_SCORE_IMAGE2();

		SubtractScore->Visible = true;
		TimerSubtractScoreStart->Enabled = true;
	}
	else
	{
		SubtractScore->Visible = false;
		TimerSubtractScoreImage2->Enabled = true;
	}

	SCORE = SCORE - 10;
	LabelScore->Text = SCORE;

	TimerSubScoreImage2->Enabled = false;

	TimerAddScore1End->Enabled = false;
	TimerAddScore2End->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSubtractScoreImage2Timer(TObject *Sender)
{
	SUB_SCORE_IMAGE2();

	SubtractScore->Visible = true;
	TimerSubtractScoreImage2->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSubtractScoreImage4Timer(TObject *Sender)
{
	SUB_SCORE_IMAGE4();

	SubtractScore->Visible = true;
	TimerSubtractScoreImage4->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSubScoreImage4Timer(TObject *Sender)
{
//���������� ���������� ����� -10
	if(SubtractScore->Visible == false)
	{
		SUB_SCORE_IMAGE4();

		SubtractScore->Visible = true;
		TimerSubtractScoreStart->Enabled = true;
	}
	else
	{
		SubtractScore->Visible = false;
		TimerSubtractScoreImage4->Enabled = true;
	}

	SCORE = SCORE - 10;
	LabelScore->Text = SCORE;

	TimerSubScoreImage4->Enabled = false;

	TimerAddScore1End->Enabled = false;
	TimerAddScore2End->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore2Image4Timer(TObject *Sender)
{
	//���������� ���������� ����� +50
	ADD_SCORE2_IMAGE4();
	AddScore2->Visible = true;
	TimerAddScore2Start->Enabled = true;

	SCORE = SCORE + 50;
	LabelScore->Text = SCORE;

	TimerAddScore2Image4->Enabled = false;

	TimerAddScore1End->Enabled = false;
	TimerSubtractScoreEnd->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore1Image4Timer(TObject *Sender)
{
	//���������� ���������� ����� +25
	ADD_SCORE1_IMAGE4();
	AddScore1->Visible = true;
	TimerAddScore1Start->Enabled = true;

	SCORE = SCORE + 25;
	LabelScore->Text = SCORE;

	TimerAddScore1Image4->Enabled = false;

	TimerAddScore2End->Enabled = false;
	TimerSubtractScoreEnd->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore1Image3Timer(TObject *Sender)
{
	//���������� ���������� ����� +25
	ADD_SCORE1_IMAGE3();
	AddScore1->Visible = true;
	TimerAddScore1Start->Enabled = true;

	SCORE = SCORE + 25;
	LabelScore->Text = SCORE;

	TimerAddScore1Image3->Enabled = false;

	TimerAddScore2End->Enabled = false;
	TimerSubtractScoreEnd->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerAddScore2Image3Timer(TObject *Sender)
{
	//���������� ���������� ����� +50
	ADD_SCORE2_IMAGE3();
	AddScore2->Visible = true;
	TimerAddScore2Start->Enabled = true;

	SCORE = SCORE + 50;
	LabelScore->Text = SCORE;

	TimerAddScore2Image3->Enabled = false;

	TimerAddScore1End->Enabled = false;
	TimerSubtractScoreEnd->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSubScoreImage3Timer(TObject *Sender)
{
//���������� ���������� ����� -10
	if(SubtractScore->Visible == false)
	{
		SUB_SCORE_IMAGE3();

		SubtractScore->Visible = true;
		TimerSubtractScoreStart->Enabled = true;
	}
	else
	{
		SubtractScore->Visible = false;
		TimerSubtractScoreImage3->Enabled = true;
	}

	SCORE = SCORE - 10;
	LabelScore->Text = SCORE;

	TimerSubScoreImage3->Enabled = false;

	TimerAddScore1End->Enabled = false;
	TimerAddScore2End->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TimerSubtractScoreImage3Timer(TObject *Sender)
{
	SUB_SCORE_IMAGE3();

	SubtractScore->Visible = true;
	TimerSubtractScoreImage3->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image3Click(TObject *Sender)
{
	Image3->Free();

	REPOSITION_FORM3();

//������ ������ RANDOM..........................................................
	if(Form2->ALBUM->Text == "HARD")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "2") //0 - ��� Image3
		{
			if(HARD_TEST == Memo1->Lines->Count)
			{
				//��������� ������� �����
				MediaPlayer1->Stop();
				MediaPlayer2->Stop();
				MediaPlayer3->Stop();

				//��������� ��������....
				Image1->Visible = false;
				Image2->Visible = false;
				Image3->Visible = false;
				Image4->Visible = false;

				//��������� ������� ������..
				Error1->Visible = false;
				Error2->Visible = false;
				Error3->Visible = false;
				Error4->Visible = false;

				//�������� ����������...............
				LabelTextScore->Visible = true;
				LabelScore->Visible = true;

				LabelTextErrorScore->Visible = true;
				LabelErrorScore->Visible = true;

				//������� ������ � ����������.......
				LabelScore->Text = SCORE;
				LabelErrorScore->Text = ERR_SCORE;

				//��������� ����������� ������ SphereQuest
				TimerSphereQuestEnd->Enabled = false;
				TimerSphereQuestStart->Enabled = false;
				TimerSphereQuestLeft->Enabled = false;
				TimerSphereQuestRight->Enabled = false;

				SphereQuest->Visible = false;

				Form3->MedalHome->Visible = false;
				Form3->MedalWild->Visible = false;
				Form3->MedalAir->Visible = false;
				Form3->MedalWater->Visible = false;
				Form3->MedalInsects->Visible = false;

				Form3->FinalText->Visible = false;
				Form3->FinalTextHome->Visible = false;
				Form3->FinalTextWild->Visible = false;
				Form3->FinalTextAir->Visible = false;
				Form3->FinalTextWater->Visible = false;
				Form3->FinalTextInsects->Visible = false;

				Form3->SmallMedalHome->Visible = true;
				Form3->SmallMedalWild->Visible = true;
				Form3->SmallMedalAir->Visible = true;
				Form3->SmallMedalWater->Visible = true;
				Form3->SmallMedalInsects->Visible = true;

				Form3->TimerAsk1->Enabled = false;
				Form3->TimerAskVoice->Enabled = false;
				Form3->TimerAsk2->Enabled = false;
				Form3->TimerAnimalSound->Enabled = false;
				Form3->TimerTestAsk->Enabled = false;
				Form3->TimerTestVoice->Enabled = false;

				//�������� �������
				if(ERR_SCORE == 0)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward4.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE == 1)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward3.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE == 2)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward2.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE > 2)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward1.mp3";
					MediaPlayer1->Play();
				}

				//�������� ������, ������� ����� 2 ���, �������� ������!!!
				TimerReward->Enabled = true;
			}
			else
			{
				COUNTER->Text = Memo1->Lines->Strings[HARD_TEST];

				switch(StrToInt(COUNTER->Text))
				{

//......AIR.........

					case 0: //BEGIN -> Albatross
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_11st(); HIDE_ERROR(); break; }
					}

					case 1: //Albatross -> Bullfinch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_30st(); HIDE_ERROR(); break; }
					}

					case 2: //Bullfinch -> Deadlock
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_13st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_9st(); HIDE_ERROR(); break; }
					}

					case 3: //Deadlock -> Dove
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_27st(); HIDE_ERROR(); break; }
					}

					case 4: //Dove -> Duck
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_9st(); HIDE_ERROR(); break; }
					}

					case 5: //Duck -> Eagle
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_36st(); HIDE_ERROR(); break; }
					}

					case 6: //Eagle -> Falcon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_2st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_1st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_26st(); HIDE_ERROR(); break; }
					}

					case 7: //Falcon -> Flamingo
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_66st(); HIDE_ERROR(); break; }
					}

					case 8: //Flamingo -> Goldfinch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_46st(); HIDE_ERROR(); break; }
					}

					case 9: //Goldfinch -> Heron
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_29st(); HIDE_ERROR(); break; }
					}

					case 10: //Heron -> Jay
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_24st(); HIDE_ERROR(); break; }
					}

					case 11: //Jay -> Lark
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_60st(); HIDE_ERROR(); break; }
					}

					case 12: //Lark -> Owl
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_81st(); HIDE_ERROR(); break; }
					}

					case 13: //Owl -> Parrot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_52st(); HIDE_ERROR(); break; }
					}

					case 14: //Parrot -> Pelican
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_5st(); HIDE_ERROR(); break; }
					}

					case 15: //Pelican -> Pheasant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_83st(); HIDE_ERROR(); break; }
					}

					case 16: //Pheasant -> Raven
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_47st(); HIDE_ERROR(); break; }
					}

					case 17: //Raven -> Rook
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_59st(); HIDE_ERROR(); break; }
					}

					case 18: //Rook -> Seagull
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_88st(); HIDE_ERROR(); break; }
					}

					case 19: //Seagull -> Sparrow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_13st(); HIDE_ERROR(); break; }
					}

					case 20: //Sparrow -> Stork
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_1st(); HIDE_ERROR(); break; }
					}

					case 21: //Stork -> Swallow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_72st(); HIDE_ERROR(); break; }
					}

					case 22: //Swallow -> Titmouse
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_61st(); HIDE_ERROR(); break; }
					}

					case 23: //Titmouse -> Woodpecker
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_33st(); HIDE_ERROR(); break; }
					}

//......WATER.......

					case 24: //Woodpecker -> Cachalot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_67st(); HIDE_ERROR(); break; }
					}

					case 25: //Cachalot -> Crab
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_82st(); HIDE_ERROR(); break; }
					}

					case 26: //Crab -> Dolphin
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_2st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_34st(); HIDE_ERROR(); break; }
					}

					case 27: //Dolphin -> Echinoid
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_22st(); HIDE_ERROR(); break; }
					}

					case 28: //Echinoid -> Jellyfish
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_13st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_8st(); HIDE_ERROR(); break; }
					}

					case 29: //Jellyfish -> Octopus
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_85st(); HIDE_ERROR(); break; }
					}

					case 30: //Octopus -> Penguin
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_32st(); HIDE_ERROR(); break; }
					}

					case 31: //Penguin -> Perch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_17st(); HIDE_ERROR(); break; }
					}

					case 32: //Perch -> Schyuka
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_56st(); HIDE_ERROR(); break; }
					}

					case 33: //Perch -> Sea-slope
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_1st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_12st(); HIDE_ERROR(); break; }
					}

					case 34: //Sea-slope -> Shark
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_92st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_7st(); HIDE_ERROR(); break; }
					}

					case 35: //Shark -> Snail
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_87st(); HIDE_ERROR(); break; }
					}

					case 36: //Snail -> Squid
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_28st(); HIDE_ERROR(); break; }
					}

					case 37: //Squid -> Starfish
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_69st(); HIDE_ERROR(); break; }
					}

					case 38: //Starfish -> Turtle
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_15st(); HIDE_ERROR(); break; }
					}

					case 39: //Turtle -> Walrus
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_75st(); HIDE_ERROR(); break; }
					}

//......INSECT......

					case 40: //Walrus -> Ant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_90st(); HIDE_ERROR(); break; }
					}

					case 41: //Ant -> Bee
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_48st(); HIDE_ERROR(); break; }
					}

					case 42: //Bee -> Bug
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_20st(); HIDE_ERROR(); break; }
					}

					case 43: //Bug -> Bumblebee
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_55st(); HIDE_ERROR(); break; }
					}

					case 44: //Bumblebee -> Butterfly
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_80st(); HIDE_ERROR(); break; }
					}

					case 45: //Butterfly -> Dragonfly
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_71st(); HIDE_ERROR(); break; }
					}

					case 46: //Dragonfly -> Grasshopper
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_64st(); HIDE_ERROR(); break; }
					}

					case 47: //Grasshopper -> Ladybug
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_19st(); HIDE_ERROR(); break; }
					}

					case 48: //Ladybug -> Mantis
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_18st(); HIDE_ERROR(); break; }
					}

					case 49: //Mantis -> Scorpion
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_10st(); HIDE_ERROR(); break; }
					}

					case 50: //Scorpion -> Spider
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_40st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_45st(); HIDE_ERROR(); break; }
					}

					case 51: //Spider -> Tarantula
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_68st(); HIDE_ERROR(); break; }
					}

//......HOME........

					case 52: //Tarantula -> Buffalo
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_89st(); HIDE_ERROR(); break; }
					}

					case 53: //Buffalo -> Camel
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_63st(); HIDE_ERROR(); break; }
					}

					case 54: //Camel -> Cat
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_73st(); HIDE_ERROR(); break; }
					}

					case 55: //Cat -> Cock
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_23st(); HIDE_ERROR(); break; }
					}

					case 56: //Cock -> Cow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_39st(); HIDE_ERROR(); break; }
					}

					case 57: //Cow -> Dog
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_70st(); HIDE_ERROR(); break; }
					}

					case 58: //Dog -> Donkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_48st(); HIDE_ERROR(); break; }
					}

					case 59: //Donkey -> Goat
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_43st(); HIDE_ERROR(); break; }
					}

					case 60: //Goat -> Hens
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_38st(); HIDE_ERROR(); break; }
					}

					case 61: //Hens -> Horse
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_16st(); HIDE_ERROR(); break; }
					}

					case 62: //Horse -> Pig
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_53st(); HIDE_ERROR(); break; }
					}

					case 63: //Pig -> Rabbit
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_35st(); HIDE_ERROR(); break; }
					}

					case 64: //Rabbit -> Sheep
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_50st(); HIDE_ERROR(); break; }
					}

					case 65: //Sheep -> Turkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_65st(); HIDE_ERROR(); break; }
					}

//......WILD........

					case 66: //Turkey -> Arctic-fox
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_91st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_92st(); HIDE_ERROR(); break; }
					}

					case 67: //Arctic-fox -> Bear
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_76st(); HIDE_ERROR(); break; }
					}

					case 68: //Bear -> Boar
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_58st(); HIDE_ERROR(); break; }
					}

					case 69: //Boar -> Chameleon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_86st(); HIDE_ERROR(); break; }
					}

					case 70: //Chameleon -> Chipmunk
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_77st(); HIDE_ERROR(); break; }
					}

					case 71: //Chipmunk -> Deer
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_40st(); HIDE_ERROR(); break; }
					}

					case 72: //Deer -> Elephant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_84st(); HIDE_ERROR(); break; }
					}

					case 73: //Elephant -> Fox
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_21st(); HIDE_ERROR(); break; }
					}

					case 74: //Fox -> Giraffe
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_91st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_42st(); HIDE_ERROR(); break; }
					}

					case 75: //Giraffe -> Hedgehog
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_25st(); HIDE_ERROR(); break; }
					}

					case 76: //Hedgehog -> Koala
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_14st(); HIDE_ERROR(); break; }
					}

					case 77: //Koala -> Lion
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_78st(); HIDE_ERROR(); break; }
					}

					case 78: //Lion -> Lynx
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_57st(); HIDE_ERROR(); break; }
					}

					case 79: //Lynx -> Marmot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_37st(); HIDE_ERROR(); break; }
					}

					case 80: //Marmot -> Monkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_2st(); HIDE_ERROR(); break; }
					}

					case 81: //Monkey -> Panda
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_6st(); HIDE_ERROR(); break; }
					}

					case 82: //Panda -> Polar-bear
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_54st(); HIDE_ERROR(); break; }
					}

					case 83: //Polar-bear -> Raccoon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_41st(); HIDE_ERROR(); break; }
					}

					case 84: //Raccoon -> Rhinoceros
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_79st(); HIDE_ERROR(); break; }
					}

					case 85: //Rhinoceros -> Snake
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_40st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_51st(); HIDE_ERROR(); break; }
					}

					case 86: //Snake -> Snow-leopard
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_0st(); HIDE_ERROR(); break; }
					}

					case 87: //Snow-leopard -> Squirrel
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_31st(); HIDE_ERROR(); break; }
					}

					case 88: //Squirrel -> Tiger
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_49st(); HIDE_ERROR(); break; }
					}

					case 89: //Tiger -> Wolf
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_62st(); HIDE_ERROR(); break; }
					}

					case 90: //Wolf -> Zebra
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image3->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_74st(); HIDE_ERROR(); break; }
					}
				} //switch -> end
			} //else -> end
		} //IF -> end
		else { SOUND_ERROR(); ERROR_3(); Error3->Visible = true; TimerSubScoreImage3->Enabled = true; ERR_SCORE++; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ INSECTS.........................................................
	if(Form2->ALBUM->Text == "INSECTS")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "2")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Ant -> Bee
				{
					COUNTER->Text = "1"; //-> Bee
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_7st(); HIDE_ERROR(); break; }
				}

				case 1: //Bee -> Bug
				{
					COUNTER->Text = "2"; //-> Bug
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_8st(); HIDE_ERROR(); break; }
				}

				case 2: //Bug -> Bumblebee
				{
					COUNTER->Text = "3"; //-> Bumblebee
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_4st(); HIDE_ERROR(); break; }
				}

				case 3: //Bumblebee -> Butterfly
				{
					COUNTER->Text = "4"; //-> Butterfly
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_5st(); HIDE_ERROR(); break; }
				}

				case 4: //Butterfly -> Dragonfly
				{
					COUNTER->Text = "5"; //-> Dragonfly
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_6st(); HIDE_ERROR(); break; }
				}

				case 5: //Dragonfly -> Grasshopper
				{
					COUNTER->Text = "6"; //-> Grasshopper
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_9st(); HIDE_ERROR(); break; }
				}

				case 6: //Grasshopper -> Ladybug
				{
					COUNTER->Text = "7"; //-> Ladybug
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_11st(); HIDE_ERROR(); break; }
				}

				case 7: //Ladybug -> Mantis
				{
					COUNTER->Text = "8"; //-> Mantis
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_1st(); HIDE_ERROR(); break; }
				}

				case 8: //Mantis -> Scorpion
				{
					COUNTER->Text = "9"; //-> Scorpion
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_2st(); HIDE_ERROR(); break; }
				}

				case 9: //Scorpion -> Spider
				{
					COUNTER->Text = "10"; //-> Spider
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_10st(); HIDE_ERROR(); break; }
				}

				case 10: //Spider -> Tarantula
				{
					COUNTER->Text = "11"; //-> Tarantula
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_0st(); HIDE_ERROR(); break; }
				}

				case 11: //Tarantula -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = true;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = true;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
                }
			}
		}
		else { SOUND_ERROR(); ERROR_3(); Error3->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WATER...........................................................
	if(Form2->ALBUM->Text == "WATER")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "2")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Cachalot -> Crab
				{
					COUNTER->Text = "1"; //-> Crab
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_7st(); HIDE_ERROR(); break; }
                }

				case 1: //Crab -> Dolphin
				{
					COUNTER->Text = "2"; //-> Dolphin
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_0st(); HIDE_ERROR(); break; }
				}

				case 2: //Dolphin -> Echinoid
				{
					COUNTER->Text = "3"; //-> Echinoid
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_11st(); HIDE_ERROR(); break; }
				}

				case 3: //Echinoid -> Jellyfish
				{
					COUNTER->Text = "4"; //-> Jellyfish
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_14st(); HIDE_ERROR(); break; }
				}

				case 4: //Jellyfish -> Octopus
				{
					COUNTER->Text = "5"; //-> Octopus
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_10st(); HIDE_ERROR(); break; }
				}

				case 5: //Octopus -> Penguin
				{
					COUNTER->Text = "6"; //-> Penguin
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_15st(); HIDE_ERROR(); break; }
				}

				case 6: //Penguin -> Perch
				{
					COUNTER->Text = "7"; //-> Perch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_1st(); HIDE_ERROR(); break; }
				}

				case 7: //Perch -> Schyuka
				{
					COUNTER->Text = "8"; //-> Schyuka
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_12st(); HIDE_ERROR(); break; }
                }

				case 8: //Schyuka -> Sea-slope
				{
					COUNTER->Text = "9"; //-> Sea-slope
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_5st(); HIDE_ERROR(); break; }
				}

				case 9: //Sea-slope -> Shark
				{
					COUNTER->Text = "10"; //-> Shark
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_4st(); HIDE_ERROR(); break; }
				}

				case 10: //Shark -> Snail
				{
					COUNTER->Text = "11"; //-> Snail
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_6st(); HIDE_ERROR(); break; }
				}

				case 11: //Snail -> Squid
				{
					COUNTER->Text = "12"; //-> Squid
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Squid -> Starfish
				{
					COUNTER->Text = "13"; //-> Starfish
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_8st(); HIDE_ERROR(); break; }
				}

				case 13: //Starfish -> Turtle
				{
					COUNTER->Text = "14"; //-> Turtle
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_3st(); HIDE_ERROR(); break; }
				}

				case 14: //Turtle -> Walrus
				{
					COUNTER->Text = "15"; //-> Walrus
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_9st(); HIDE_ERROR(); break; }
				}

				case 15: //Walrus -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = true;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = true;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
                }
			}
		}
		else { SOUND_ERROR(); ERROR_3(); Error3->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ AIR.............................................................
	if(Form2->ALBUM->Text == "AIR")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "2")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Albatross -> Bullfinch
				{
					COUNTER->Text = "1"; //-> Bullfinch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_5st(); HIDE_ERROR(); break; }
				}

				case 1: //Bullfinch -> Deadlock
				{
					COUNTER->Text = "2"; //-> Deadlock
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_11st(); HIDE_ERROR(); break; }
				}

				case 2: //Deadlock -> Dove
				{
					COUNTER->Text = "3"; //-> Dove
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_8st(); HIDE_ERROR(); break; }
				}

				case 3: //Dove -> Duck
				{
					COUNTER->Text = "4"; //-> Duck
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_21st(); HIDE_ERROR(); break; }
				}

				case 4: //Duck -> Eagle
				{
					COUNTER->Text = "5"; //-> Eagle
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_6st(); HIDE_ERROR(); break; }
				}

				case 5: //Eagle -> Falcon
				{
					COUNTER->Text = "6"; //-> Falcon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_19st(); HIDE_ERROR(); break; }
				}

				case 6: //Falcon -> Flamingo
				{
					COUNTER->Text = "7"; //-> Flamingo
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_17st(); HIDE_ERROR(); break; }
				}

				case 7: //Flamingo -> Goldfinch
				{
					COUNTER->Text = "8"; //-> Goldfinch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_18st(); HIDE_ERROR(); break; }
				}

				case 8: //Goldfinch -> Heron
				{
					COUNTER->Text = "9"; //-> Heron
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_4st(); HIDE_ERROR(); break; }
				}

				case 9: //Heron -> Jay
				{
					COUNTER->Text = "10"; //-> Jay
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_12st(); HIDE_ERROR(); break; }
				}

				case 10: //Jay -> Lark
				{
					COUNTER->Text = "11"; //-> Lark
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_2st(); HIDE_ERROR(); break; }
				}

				case 11: //Lark -> Owl
				{
					COUNTER->Text = "12"; //-> Owl
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_23st(); HIDE_ERROR(); break; }
				}

				case 12: //Owl -> Parrot
				{
					COUNTER->Text = "13"; //-> Parrot
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_10st(); HIDE_ERROR(); break; }
				}

				case 13: //Parrot -> Pelican
				{
					COUNTER->Text = "14"; //-> Pelican
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_3st(); HIDE_ERROR(); break; }
				}

				case 14: //Pelican -> Pheasant
				{
					COUNTER->Text = "15"; //-> Pheasant
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_16st(); HIDE_ERROR(); break; }
				}

				case 15: //Pheasant -> Raven
				{
					COUNTER->Text = "16"; //-> Raven
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_20st(); HIDE_ERROR(); break; }
				}

				case 16: //Raven -> Rook
				{
					COUNTER->Text = "17"; //-> Rook
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_0st(); HIDE_ERROR(); break; }
				}

				case 17: //Rook -> Seagull
				{
					COUNTER->Text = "18"; //-> Seagull
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_7st(); HIDE_ERROR(); break; }
				}

				case 18: //Seagull -> Sparrow
				{
					COUNTER->Text = "19"; //-> Sparrow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_1st(); HIDE_ERROR(); break; }
				}

				case 19: //Sparrow -> Stork
				{
					COUNTER->Text = "20"; //-> Stork
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_9st(); HIDE_ERROR(); break; }
				}

				case 20: //Stork -> Swallow
				{
					COUNTER->Text = "21"; //-> Swallow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_13st(); HIDE_ERROR(); break; }
				}

				case 21: //Swallow -> Titmouse
				{
					COUNTER->Text = "22"; //-> Titmouse
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_15st(); HIDE_ERROR(); break; }
				}

				case 22: //Titmouse -> Woodpecker
				{
					COUNTER->Text = "23"; //-> Woodpecker
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_14st(); HIDE_ERROR(); break; }
				}

				case 23: //Woodpecker -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = true;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = true;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		else { SOUND_ERROR(); ERROR_3(); Error3->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WILD............................................................
	if(Form2->ALBUM->Text == "WILD")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "2")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Arctic-fox -> Bear
				{
					COUNTER->Text = "1"; //-> Bear
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_9st(); HIDE_ERROR(); break; }
				}

				case 1: //Bear -> Boar
				{
					COUNTER->Text = "2"; //-> Boar
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_24st(); HIDE_ERROR(); break; }
				}

				case 2: 		//Boar -> Chameleon
				{
					COUNTER->Text = "3"; //-> Chameleon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_14st(); HIDE_ERROR(); break; }
				}

				case 3: //Chameleon -> Chipmunk
				{
					COUNTER->Text = "4"; //-> Chipmunk
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_7st(); HIDE_ERROR(); break; }
				}

				case 4: //Chipmunk -> Deer
				{
					COUNTER->Text = "5"; //-> Deer
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_5st(); HIDE_ERROR(); break; }
				}

				case 5: //Deer -> Elephant
				{
					COUNTER->Text = "6"; //-> Elephant
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_21st(); HIDE_ERROR(); break; }
				}

				case 6: //Elephant -> Fox
				{
					COUNTER->Text = "7"; //-> Fox
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_8st(); HIDE_ERROR(); break; }
				}

				case 7: //Fox -> Giraffe
				{
					COUNTER->Text = "8"; //-> Giraffe
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_16st(); HIDE_ERROR(); break; }
				}

				case 8: //Giraffe -> Hedgehog
				{
					COUNTER->Text = "9"; //-> Hedgehog
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_22st(); HIDE_ERROR(); break; }
				}

				case 9: //Hedgehog -> Koala
				{
					COUNTER->Text = "10"; //-> Koala
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_18st(); HIDE_ERROR(); break; }
				}

				case 10: //Koala -> Lion
				{
					COUNTER->Text = "11"; //-> Lion
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_10st(); HIDE_ERROR(); break; }
				}

				case 11: //Lion -> Lynx
				{
					COUNTER->Text = "12"; //-> Lynx
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Lynx -> Marmot
				{
					COUNTER->Text = "13"; //-> Marmot
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_19st(); HIDE_ERROR(); break; }
				}

				case 13: //Marmot -> Monkey
				{
					COUNTER->Text = "14"; //-> Monkey
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_20st(); HIDE_ERROR(); break; }
				}

				case 14: //Monkey -> Panda
				{
					COUNTER->Text = "15"; //-> Panda
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_23st(); HIDE_ERROR(); break; }
				}

				case 15: //Panda -> Polar-bear
				{
					COUNTER->Text = "16"; //-> Polar-bear
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_0st(); HIDE_ERROR(); break; }
				}

				case 16: //Polar-bear -> Raccoon
				{
					COUNTER->Text = "17"; //-> Raccoon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_1st(); HIDE_ERROR(); break; }
				}

				case 17: //Raccoon -> Rhinoceros
				{
					COUNTER->Text = "18"; //-> Rhinoceros
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_17st(); HIDE_ERROR(); break; }
				}

				case 18: //Rhinoceros -> Snake
				{
					COUNTER->Text = "19"; //-> Snake
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_4st(); HIDE_ERROR(); break; }
				}

				case 19: //Snake -> Snow-leopard
				{
					COUNTER->Text = "20"; //-> Snow-leopard
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_6st(); HIDE_ERROR(); break; }
				}

				case 20: //Snow-leopard -> Squirrel
				{
					COUNTER->Text = "21"; //-> Squirrel
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_13st(); HIDE_ERROR(); break; }
				}

				case 21: //Squirrel -> Tiger
				{
					COUNTER->Text = "22"; //-> Tiger
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_12st(); HIDE_ERROR(); break; }
				}

				case 22: //Tiger -> Wolf
				{
					COUNTER->Text = "23"; //-> Wolf
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_11st(); HIDE_ERROR(); break; }
				}

				case 23: //Wolf -> Zebra
				{
					COUNTER->Text = "24"; //-> Zebra
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_3st(); HIDE_ERROR(); break; }
				}

				case 24: //Zebra -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = true;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = true;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		else { SOUND_ERROR(); ERROR_3(); Error3->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ HOME...........................................................
	if(Form2->ALBUM->Text == "HOME")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "2")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Buffalo -> Camel
				{
					COUNTER->Text = "1";
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_10st(); HIDE_ERROR(); break; }
				}

				case 1: //Camel -> Cat
				{
					COUNTER->Text = "2"; //-> Cat
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_13st(); HIDE_ERROR(); break; }
				}


				case 2: //Cat -> Cock
				{
					COUNTER->Text = "3"; //-> Cock
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_0st(); HIDE_ERROR(); break; }
				}

				case 3: //Cock -> Cow
				{
					COUNTER->Text = "4"; //-> Cow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_1st(); HIDE_ERROR(); break; }
				}

				case 4: //Cow -> Dog
				{
					COUNTER->Text = "5"; //-> Dog
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_8st(); HIDE_ERROR(); break; }
				}

				case 5: //Dog -> Donkey
				{
					COUNTER->Text = "6"; //-> Donkey
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_4st(); HIDE_ERROR(); break; }
				}

				case 6: //Donkey -> Goat
				{
					COUNTER->Text = "7"; //-> Goat
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_5st(); HIDE_ERROR(); break; }
				}

				case 7: //Goat -> Hens
				{
					COUNTER->Text = "8"; //-> Hens
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_11st(); HIDE_ERROR(); break; }
				}

				case 8: //Hens -> Horse
				{
					COUNTER->Text = "9"; //-> Horse
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_6st(); HIDE_ERROR(); break; }
				}

				case 9: //Horse -> Pig
				{
					COUNTER->Text = "10"; //-> Pig
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_ADD_1(); HIDE_ERROR(); break; }
				}

				case 10: //Pig -> Rabbit
				{
					COUNTER->Text = "11"; //-> Rabbit
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_7st(); HIDE_ERROR(); break; }
				}

				case 11: //Rabbit -> Sheep
				{
					COUNTER->Text = "12"; //-> Sheep
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Sheep -> Turkey
				{ //��� 12 ��� - Sheep

					COUNTER->Text = "13"; //-> Turkey (13)
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);  //Random for Turkey

					//���������� Random'a ��� Camel
					if(ANIMALS->Text == "0") { HOME_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_ADD_2(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_3st(); HIDE_ERROR(); break; }
				}

				case 13: //Turkey -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = true;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = true;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		else { SOUND_ERROR(); ERROR_3(); Error3->Visible = true; }
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image2Click(TObject *Sender)
{
	Image2->Free();

	REPOSITION_FORM3();

//������ ������ RANDOM..........................................................
	if(Form2->ALBUM->Text == "HARD")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "1") //1 - ��� Image2
		{
			if(HARD_TEST == Memo1->Lines->Count)
			{
				//��������� ������� �����
				MediaPlayer1->Stop();
				MediaPlayer2->Stop();
				MediaPlayer3->Stop();

				//��������� ��������....
				Image1->Visible = false;
				Image2->Visible = false;
				Image3->Visible = false;
				Image4->Visible = false;

				//��������� ������� ������..
				Error1->Visible = false;
				Error2->Visible = false;
				Error3->Visible = false;
				Error4->Visible = false;

				//�������� ����������...............
				LabelTextScore->Visible = true;
				LabelScore->Visible = true;

				LabelTextErrorScore->Visible = true;
				LabelErrorScore->Visible = true;

				//������� ������ � ����������.......
				LabelScore->Text = SCORE;
				LabelErrorScore->Text = ERR_SCORE;

				//��������� ����������� ������ SphereQuest
				TimerSphereQuestEnd->Enabled = false;
				TimerSphereQuestStart->Enabled = false;
				TimerSphereQuestLeft->Enabled = false;
				TimerSphereQuestRight->Enabled = false;

				SphereQuest->Visible = false;

				Form3->MedalHome->Visible = false;
				Form3->MedalWild->Visible = false;
				Form3->MedalAir->Visible = false;
				Form3->MedalWater->Visible = false;
				Form3->MedalInsects->Visible = false;

				Form3->FinalText->Visible = false;
				Form3->FinalTextHome->Visible = false;
				Form3->FinalTextWild->Visible = false;
				Form3->FinalTextAir->Visible = false;
				Form3->FinalTextWater->Visible = false;
				Form3->FinalTextInsects->Visible = false;

				Form3->SmallMedalHome->Visible = true;
				Form3->SmallMedalWild->Visible = true;
				Form3->SmallMedalAir->Visible = true;
				Form3->SmallMedalWater->Visible = true;
				Form3->SmallMedalInsects->Visible = true;

				Form3->TimerAsk1->Enabled = false;
				Form3->TimerAskVoice->Enabled = false;
				Form3->TimerAsk2->Enabled = false;
				Form3->TimerAnimalSound->Enabled = false;
				Form3->TimerTestAsk->Enabled = false;
				Form3->TimerTestVoice->Enabled = false;

				//�������� �������
				if(ERR_SCORE == 0)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward4.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE == 1)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward3.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE == 2)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward2.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE > 2)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward1.mp3";
					MediaPlayer1->Play();
				}

				//�������� ������, ������� ����� 2 ���, �������� ������!!!
				TimerReward->Enabled = true;
			}
			else
			{
				COUNTER->Text = Memo1->Lines->Strings[HARD_TEST];

				switch(StrToInt(COUNTER->Text))
				{

//......AIR.........

					case 0: //BEGIN -> Albatross
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_11st(); HIDE_ERROR(); break; }
					}

					case 1: //Albatross -> Bullfinch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_30st(); HIDE_ERROR(); break; }
					}

					case 2: //Bullfinch -> Deadlock
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_13st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_9st(); HIDE_ERROR(); break; }
					}

					case 3: //Deadlock -> Dove
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_27st(); HIDE_ERROR(); break; }
					}

					case 4: //Dove -> Duck
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_9st(); HIDE_ERROR(); break; }
					}

					case 5: //Duck -> Eagle
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_36st(); HIDE_ERROR(); break; }
					}

					case 6: //Eagle -> Falcon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_2st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_1st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_26st(); HIDE_ERROR(); break; }
					}

					case 7: //Falcon -> Flamingo
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_66st(); HIDE_ERROR(); break; }
					}

					case 8: //Flamingo -> Goldfinch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_46st(); HIDE_ERROR(); break; }
					}

					case 9: //Goldfinch -> Heron
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_29st(); HIDE_ERROR(); break; }
					}

					case 10: //Heron -> Jay
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_24st(); HIDE_ERROR(); break; }
					}

					case 11: //Jay -> Lark
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_60st(); HIDE_ERROR(); break; }
					}

					case 12: //Lark -> Owl
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_81st(); HIDE_ERROR(); break; }
					}

					case 13: //Owl -> Parrot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_52st(); HIDE_ERROR(); break; }
					}

					case 14: //Parrot -> Pelican
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_5st(); HIDE_ERROR(); break; }
					}

					case 15: //Pelican -> Pheasant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_83st(); HIDE_ERROR(); break; }
					}

					case 16: //Pheasant -> Raven
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_47st(); HIDE_ERROR(); break; }
					}

					case 17: //Raven -> Rook
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_59st(); HIDE_ERROR(); break; }
					}

					case 18: //Rook -> Seagull
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_88st(); HIDE_ERROR(); break; }
					}

					case 19: //Seagull -> Sparrow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_13st(); HIDE_ERROR(); break; }
					}

					case 20: //Sparrow -> Stork
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_1st(); HIDE_ERROR(); break; }
					}

					case 21: //Stork -> Swallow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_72st(); HIDE_ERROR(); break; }
					}

					case 22: //Swallow -> Titmouse
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_61st(); HIDE_ERROR(); break; }
					}

					case 23: //Titmouse -> Woodpecker
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_33st(); HIDE_ERROR(); break; }
					}

//......WATER.......

					case 24: //Woodpecker -> Cachalot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_67st(); HIDE_ERROR(); break; }
					}

					case 25: //Cachalot -> Crab
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_82st(); HIDE_ERROR(); break; }
					}

					case 26: //Crab -> Dolphin
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_2st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_34st(); HIDE_ERROR(); break; }
					}

					case 27: //Dolphin -> Echinoid
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_22st(); HIDE_ERROR(); break; }
					}

					case 28: //Echinoid -> Jellyfish
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_13st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_8st(); HIDE_ERROR(); break; }
					}

					case 29: //Jellyfish -> Octopus
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_85st(); HIDE_ERROR(); break; }
					}

					case 30: //Octopus -> Penguin
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_32st(); HIDE_ERROR(); break; }
					}

					case 31: //Penguin -> Perch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_17st(); HIDE_ERROR(); break; }
					}

					case 32: //Perch -> Schyuka
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_56st(); HIDE_ERROR(); break; }
					}

					case 33: //Perch -> Sea-slope
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_1st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_12st(); HIDE_ERROR(); break; }
					}

					case 34: //Sea-slope -> Shark
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_92st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_7st(); HIDE_ERROR(); break; }
					}

					case 35: //Shark -> Snail
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_87st(); HIDE_ERROR(); break; }
					}

					case 36: //Snail -> Squid
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_28st(); HIDE_ERROR(); break; }
					}

					case 37: //Squid -> Starfish
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_69st(); HIDE_ERROR(); break; }
					}

					case 38: //Starfish -> Turtle
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_15st(); HIDE_ERROR(); break; }
					}

					case 39: //Turtle -> Walrus
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_75st(); HIDE_ERROR(); break; }
					}

//......INSECT......

					case 40: //Walrus -> Ant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_90st(); HIDE_ERROR(); break; }
					}

					case 41: //Ant -> Bee
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_48st(); HIDE_ERROR(); break; }
					}

					case 42: //Bee -> Bug
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_20st(); HIDE_ERROR(); break; }
					}

					case 43: //Bug -> Bumblebee
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_55st(); HIDE_ERROR(); break; }
					}

					case 44: //Bumblebee -> Butterfly
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_80st(); HIDE_ERROR(); break; }
					}

					case 45: //Butterfly -> Dragonfly
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_71st(); HIDE_ERROR(); break; }
					}

					case 46: //Dragonfly -> Grasshopper
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_64st(); HIDE_ERROR(); break; }
					}

					case 47: //Grasshopper -> Ladybug
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_19st(); HIDE_ERROR(); break; }
					}

					case 48: //Ladybug -> Mantis
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_18st(); HIDE_ERROR(); break; }
					}

					case 49: //Mantis -> Scorpion
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_10st(); HIDE_ERROR(); break; }
					}

					case 50: //Scorpion -> Spider
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_40st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_45st(); HIDE_ERROR(); break; }
					}

					case 51: //Spider -> Tarantula
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_68st(); HIDE_ERROR(); break; }
					}

//......HOME........

					case 52: //Tarantula -> Buffalo
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_89st(); HIDE_ERROR(); break; }
					}

					case 53: //Buffalo -> Camel
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_63st(); HIDE_ERROR(); break; }
					}

					case 54: //Camel -> Cat
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_73st(); HIDE_ERROR(); break; }
					}

					case 55: //Cat -> Cock
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_23st(); HIDE_ERROR(); break; }
					}

					case 56: //Cock -> Cow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_39st(); HIDE_ERROR(); break; }
					}

					case 57: //Cow -> Dog
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_70st(); HIDE_ERROR(); break; }
					}

					case 58: //Dog -> Donkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_48st(); HIDE_ERROR(); break; }
					}

					case 59: //Donkey -> Goat
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_43st(); HIDE_ERROR(); break; }
					}

					case 60: //Goat -> Hens
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_38st(); HIDE_ERROR(); break; }
					}

					case 61: //Hens -> Horse
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_16st(); HIDE_ERROR(); break; }
					}

					case 62: //Horse -> Pig
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_53st(); HIDE_ERROR(); break; }
					}

					case 63: //Pig -> Rabbit
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_35st(); HIDE_ERROR(); break; }
					}

					case 64: //Rabbit -> Sheep
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_50st(); HIDE_ERROR(); break; }
					}

					case 65: //Sheep -> Turkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_65st(); HIDE_ERROR(); break; }
					}

//......WILD........

					case 66: //Turkey -> Arctic-fox
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_91st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_92st(); HIDE_ERROR(); break; }
					}

					case 67: //Arctic-fox -> Bear
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_76st(); HIDE_ERROR(); break; }
					}

					case 68: //Bear -> Boar
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_58st(); HIDE_ERROR(); break; }
					}

					case 69: //Boar -> Chameleon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_86st(); HIDE_ERROR(); break; }
					}

					case 70: //Chameleon -> Chipmunk
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_77st(); HIDE_ERROR(); break; }
					}

					case 71: //Chipmunk -> Deer
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_40st(); HIDE_ERROR(); break; }
					}

					case 72: //Deer -> Elephant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_84st(); HIDE_ERROR(); break; }
					}

					case 73: //Elephant -> Fox
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_21st(); HIDE_ERROR(); break; }
					}

					case 74: //Fox -> Giraffe
					{
						HARD_TEST++; HARD->Text = HARD_TEST;


						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAddScore1Image2->Enabled = true;
						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_91st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_42st(); HIDE_ERROR(); break; }
					}

					case 75: //Giraffe -> Hedgehog
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_25st(); HIDE_ERROR(); break; }
					}

					case 76: //Hedgehog -> Koala
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_14st(); HIDE_ERROR(); break; }
					}

					case 77: //Koala -> Lion
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_78st(); HIDE_ERROR(); break; }
					}

					case 78: //Lion -> Lynx
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_57st(); HIDE_ERROR(); break; }
					}

					case 79: //Lynx -> Marmot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_37st(); HIDE_ERROR(); break; }
					}

					case 80: //Marmot -> Monkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_2st(); HIDE_ERROR(); break; }
					}

					case 81: //Monkey -> Panda
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_6st(); HIDE_ERROR(); break; }
					}

					case 82: //Panda -> Polar-bear
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_54st(); HIDE_ERROR(); break; }
					}

					case 83: //Polar-bear -> Raccoon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_41st(); HIDE_ERROR(); break; }
					}

					case 84: //Raccoon -> Rhinoceros
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_79st(); HIDE_ERROR(); break; }
					}

					case 85: //Rhinoceros -> Snake
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_40st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_51st(); HIDE_ERROR(); break; }
					}

					case 86: //Snake -> Snow-leopard
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_0st(); HIDE_ERROR(); break; }
					}

					case 87: //Snow-leopard -> Squirrel
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_31st(); HIDE_ERROR(); break; }
					}

					case 88: //Squirrel -> Tiger
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_49st(); HIDE_ERROR(); break; }
					}

					case 89: //Tiger -> Wolf
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_62st(); HIDE_ERROR(); break; }
					}

					case 90: //Wolf -> Zebra
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image2->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_74st(); HIDE_ERROR(); break; }
					}
				} //switch -> end
			} //else -> end
		} //IF -> end
		else { SOUND_ERROR(); ERROR_2(); Error2->Visible = true; TimerSubScoreImage2->Enabled = true; ERR_SCORE++; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ INSECTS.........................................................
	if(Form2->ALBUM->Text == "INSECTS")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "1")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Ant -> Bee
				{
					COUNTER->Text = "1"; //-> Bee
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_7st(); HIDE_ERROR(); break; }
				}

				case 1: //Bee -> Bug
				{
					COUNTER->Text = "2"; //-> Bug
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_8st(); HIDE_ERROR(); break; }
				}

				case 2: //Bug -> Bumblebee
				{
					COUNTER->Text = "3"; //-> Bumblebee
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_4st(); HIDE_ERROR(); break; }
				}

				case 3: //Bumblebee -> Butterfly
				{
					COUNTER->Text = "4"; //-> Butterfly
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_5st(); HIDE_ERROR(); break; }
				}

				case 4: //Butterfly -> Dragonfly
				{
					COUNTER->Text = "5"; //-> Dragonfly
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_6st(); HIDE_ERROR(); break; }
				}

				case 5: //Dragonfly -> Grasshopper
				{
					COUNTER->Text = "6"; //-> Grasshopper
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_9st(); HIDE_ERROR(); break; }
				}

				case 6: //Grasshopper -> Ladybug
				{
					COUNTER->Text = "7"; //-> Ladybug
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_11st(); HIDE_ERROR(); break; }
				}

				case 7: //Ladybug -> Mantis
				{
					COUNTER->Text = "8"; //-> Mantis
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_1st(); HIDE_ERROR(); break; }
				}

				case 8: //Mantis -> Scorpion
				{
					COUNTER->Text = "9"; //-> Scorpion
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_2st(); HIDE_ERROR(); break; }
				}

				case 9: //Scorpion -> Spider
				{
					COUNTER->Text = "10"; //-> Spider
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_10st(); HIDE_ERROR(); break; }
				}

				case 10: //Spider -> Tarantula
				{
					COUNTER->Text = "11"; //-> Tarantula
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_0st(); HIDE_ERROR(); break; }
				}

				case 11: //Tarantula -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = true;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = true;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
                }
			}
		}
		else { SOUND_ERROR(); ERROR_2(); Error2->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WATER...........................................................
	if(Form2->ALBUM->Text == "WATER")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "1")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Cachalot -> Crab
				{
					COUNTER->Text = "1"; //-> Crab
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_7st(); HIDE_ERROR(); break; }
                }

				case 1: //Crab -> Dolphin
				{
					COUNTER->Text = "2"; //-> Dolphin
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_0st(); HIDE_ERROR(); break; }
				}

				case 2: //Dolphin -> Echinoid
				{
					COUNTER->Text = "3"; //-> Echinoid
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_11st(); HIDE_ERROR(); break; }
				}

				case 3: //Echinoid -> Jellyfish
				{
					COUNTER->Text = "4"; //-> Jellyfish
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_14st(); HIDE_ERROR(); break; }
				}

				case 4: //Jellyfish -> Octopus
				{
					COUNTER->Text = "5"; //-> Octopus
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_10st(); HIDE_ERROR(); break; }
				}

				case 5: //Octopus -> Penguin
				{
					COUNTER->Text = "6"; //-> Penguin
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_15st(); HIDE_ERROR(); break; }
				}

				case 6: //Penguin -> Perch
				{
					COUNTER->Text = "7"; //-> Perch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_1st(); HIDE_ERROR(); break; }
				}

				case 7: //Perch -> Schyuka
				{
					COUNTER->Text = "8"; //-> Schyuka
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_12st(); HIDE_ERROR(); break; }
                }

				case 8: //Schyuka -> Sea-slope
				{
					COUNTER->Text = "9"; //-> Sea-slope
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_5st(); HIDE_ERROR(); break; }
				}

				case 9: //Sea-slope -> Shark
				{
					COUNTER->Text = "10"; //-> Shark
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_4st(); HIDE_ERROR(); break; }
				}

				case 10: //Shark -> Snail
				{
					COUNTER->Text = "11"; //-> Snail
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_6st(); HIDE_ERROR(); break; }
				}

				case 11: //Snail -> Squid
				{
					COUNTER->Text = "12"; //-> Squid
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Squid -> Starfish
				{
					COUNTER->Text = "13"; //-> Starfish
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_8st(); HIDE_ERROR(); break; }
				}

				case 13: //Starfish -> Turtle
				{
					COUNTER->Text = "14"; //-> Turtle
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_3st(); HIDE_ERROR(); break; }
				}

				case 14: //Turtle -> Walrus
				{
					COUNTER->Text = "15"; //-> Walrus
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_9st(); HIDE_ERROR(); break; }
				}

				case 15: //Walrus -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = true;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = true;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
                }
			}
		}
		else { SOUND_ERROR(); ERROR_2(); Error2->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ AIR.............................................................
	if(Form2->ALBUM->Text == "AIR")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "1")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Albatross -> Bullfinch
				{
					COUNTER->Text = "1"; //-> Bullfinch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_5st(); HIDE_ERROR(); break; }
				}

				case 1: //Bullfinch -> Deadlock
				{
					COUNTER->Text = "2"; //-> Deadlock
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_11st(); HIDE_ERROR(); break; }
				}

				case 2: //Deadlock -> Dove
				{
					COUNTER->Text = "3"; //-> Dove
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_8st(); HIDE_ERROR(); break; }
				}

				case 3: //Dove -> Duck
				{
					COUNTER->Text = "4"; //-> Duck
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_21st(); HIDE_ERROR(); break; }
				}

				case 4: //Duck -> Eagle
				{
					COUNTER->Text = "5"; //-> Eagle
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_6st(); HIDE_ERROR(); break; }
				}

				case 5: //Eagle -> Falcon
				{
					COUNTER->Text = "6"; //-> Falcon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_19st(); HIDE_ERROR(); break; }
				}

				case 6: //Falcon -> Flamingo
				{
					COUNTER->Text = "7"; //-> Flamingo
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_17st(); HIDE_ERROR(); break; }
				}

				case 7: //Flamingo -> Goldfinch
				{
					COUNTER->Text = "8"; //-> Goldfinch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_18st(); HIDE_ERROR(); break; }
				}

				case 8: //Goldfinch -> Heron
				{
					COUNTER->Text = "9"; //-> Heron
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_4st(); HIDE_ERROR(); break; }
				}

				case 9: //Heron -> Jay
				{
					COUNTER->Text = "10"; //-> Jay
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_12st(); HIDE_ERROR(); break; }
				}

				case 10: //Jay -> Lark
				{
					COUNTER->Text = "11"; //-> Lark
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_2st(); HIDE_ERROR(); break; }
				}

				case 11: //Lark -> Owl
				{
					COUNTER->Text = "12"; //-> Owl
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_23st(); HIDE_ERROR(); break; }
				}

				case 12: //Owl -> Parrot
				{
					COUNTER->Text = "13"; //-> Parrot
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_10st(); HIDE_ERROR(); break; }
				}

				case 13: //Parrot -> Pelican
				{
					COUNTER->Text = "14"; //-> Pelican
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_3st(); HIDE_ERROR(); break; }
				}

				case 14: //Pelican -> Pheasant
				{
					COUNTER->Text = "15"; //-> Pheasant
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_16st(); HIDE_ERROR(); break; }
				}

				case 15: //Pheasant -> Raven
				{
					COUNTER->Text = "16"; //-> Raven
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_20st(); HIDE_ERROR(); break; }
				}

				case 16: //Raven -> Rook
				{
					COUNTER->Text = "17"; //-> Rook
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_0st(); HIDE_ERROR(); break; }
				}

				case 17: //Rook -> Seagull
				{
					COUNTER->Text = "18"; //-> Seagull
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_7st(); HIDE_ERROR(); break; }
				}

				case 18: //Seagull -> Sparrow
				{
					COUNTER->Text = "19"; //-> Sparrow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_1st(); HIDE_ERROR(); break; }
				}

				case 19: //Sparrow -> Stork
				{
					COUNTER->Text = "20"; //-> Stork
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_9st(); HIDE_ERROR(); break; }
				}

				case 20: //Stork -> Swallow
				{
					COUNTER->Text = "21"; //-> Swallow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_13st(); HIDE_ERROR(); break; }
				}

				case 21: //Swallow -> Titmouse
				{
					COUNTER->Text = "22"; //-> Titmouse
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_15st(); HIDE_ERROR(); break; }
				}

				case 22: //Titmouse -> Woodpecker
				{
					COUNTER->Text = "23"; //-> Woodpecker
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_14st(); HIDE_ERROR(); break; }
				}

				case 23: //Woodpecker -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = true;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = true;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		else { SOUND_ERROR(); ERROR_2(); Error2->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WILD............................................................
	if(Form2->ALBUM->Text == "WILD")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "1")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Arctic-fox -> Bear
				{
					COUNTER->Text = "1"; //-> Bear
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_9st(); HIDE_ERROR(); break; }
				}

				case 1: //Bear -> Boar
				{
					COUNTER->Text = "2"; //-> Boar
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_24st(); HIDE_ERROR(); break; }
				}

				case 2: 		//Boar -> Chameleon
				{
					COUNTER->Text = "3"; //-> Chameleon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_14st(); HIDE_ERROR(); break; }
				}

				case 3: //Chameleon -> Chipmunk
				{
					COUNTER->Text = "4"; //-> Chipmunk
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_7st(); HIDE_ERROR(); break; }
				}

				case 4: //Chipmunk -> Deer
				{
					COUNTER->Text = "5"; //-> Deer
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_5st(); HIDE_ERROR(); break; }
				}

				case 5: //Deer -> Elephant
				{
					COUNTER->Text = "6"; //-> Elephant
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_21st(); HIDE_ERROR(); break; }
				}

				case 6: //Elephant -> Fox
				{
					COUNTER->Text = "7"; //-> Fox
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_8st(); HIDE_ERROR(); break; }
				}

				case 7: //Fox -> Giraffe
				{
					COUNTER->Text = "8"; //-> Giraffe
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_16st(); HIDE_ERROR(); break; }
				}

				case 8: //Giraffe -> Hedgehog
				{
					COUNTER->Text = "9"; //-> Hedgehog
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_22st(); HIDE_ERROR(); break; }
				}

				case 9: //Hedgehog -> Koala
				{
					COUNTER->Text = "10"; //-> Koala
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_18st(); HIDE_ERROR(); break; }
				}

				case 10: //Koala -> Lion
				{
					COUNTER->Text = "11"; //-> Lion
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_10st(); HIDE_ERROR(); break; }
				}

				case 11: //Lion -> Lynx
				{
					COUNTER->Text = "12"; //-> Lynx
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Lynx -> Marmot
				{
					COUNTER->Text = "13"; //-> Marmot
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_19st(); HIDE_ERROR(); break; }
				}

				case 13: //Marmot -> Monkey
				{
					COUNTER->Text = "14"; //-> Monkey
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_20st(); HIDE_ERROR(); break; }
				}

				case 14: //Monkey -> Panda
				{
					COUNTER->Text = "15"; //-> Panda
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_23st(); HIDE_ERROR(); break; }
				}

				case 15: //Panda -> Polar-bear
				{
					COUNTER->Text = "16"; //-> Polar-bear
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_0st(); HIDE_ERROR(); break; }
				}

				case 16: //Polar-bear -> Raccoon
				{
					COUNTER->Text = "17"; //-> Raccoon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_1st(); HIDE_ERROR(); break; }
				}

				case 17: //Raccoon -> Rhinoceros
				{
					COUNTER->Text = "18"; //-> Rhinoceros
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_17st(); HIDE_ERROR(); break; }
				}

				case 18: //Rhinoceros -> Snake
				{
					COUNTER->Text = "19"; //-> Snake
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_4st(); HIDE_ERROR(); break; }
				}

				case 19: //Snake -> Snow-leopard
				{
					COUNTER->Text = "20"; //-> Snow-leopard
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_6st(); HIDE_ERROR(); break; }
				}

				case 20: //Snow-leopard -> Squirrel
				{
					COUNTER->Text = "21"; //-> Squirrel
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_13st(); HIDE_ERROR(); break; }
				}

				case 21: //Squirrel -> Tiger
				{
					COUNTER->Text = "22"; //-> Tiger
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_12st(); HIDE_ERROR(); break; }
				}

				case 22: //Tiger -> Wolf
				{
					COUNTER->Text = "23"; //-> Wolf
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_11st(); HIDE_ERROR(); break; }
				}

				case 23: //Wolf -> Zebra
				{
					COUNTER->Text = "24"; //-> Zebra
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_3st(); HIDE_ERROR(); break; }
				}

				case 24: //Zebra -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = true;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = true;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		else { SOUND_ERROR(); ERROR_2(); Error2->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ HOME............................................................
	if(Form2->ALBUM->Text == "HOME")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "1")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Buffalo -> Camel
				{
					COUNTER->Text = "1";
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_10st(); HIDE_ERROR(); break; }
				}

				case 1: //Camel -> Cat
				{
					COUNTER->Text = "2"; //-> Cat
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_13st(); HIDE_ERROR(); break; }
				}


				case 2: //Cat -> Cock
				{
					COUNTER->Text = "3"; //-> Cock
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_0st(); HIDE_ERROR(); break; }
				}

				case 3: //Cock -> Cow
				{
					COUNTER->Text = "4"; //-> Cow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_1st(); HIDE_ERROR(); break; }
				}

				case 4: //Cow -> Dog
				{
					COUNTER->Text = "5"; //-> Dog
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_8st(); HIDE_ERROR(); break; }
				}

				case 5: //Dog -> Donkey
				{
					COUNTER->Text = "6"; //-> Donkey
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_4st(); HIDE_ERROR(); break; }
				}

				case 6: //Donkey -> Goat
				{
					COUNTER->Text = "7"; //-> Goat
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_5st(); HIDE_ERROR(); break; }
				}

				case 7: //Goat -> Hens
				{
					COUNTER->Text = "8"; //-> Hens
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_11st(); HIDE_ERROR(); break; }
				}

				case 8: //Hens -> Horse
				{
					COUNTER->Text = "9"; //-> Horse
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_6st(); HIDE_ERROR(); break; }
				}

				case 9: //Horse -> Pig
				{
					COUNTER->Text = "10"; //-> Pig
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_ADD_1(); HIDE_ERROR(); break; }
				}

				case 10: //Pig -> Rabbit
				{
					COUNTER->Text = "11"; //-> Rabbit
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_7st(); HIDE_ERROR(); break; }
				}

				case 11: //Rabbit -> Sheep
				{
					COUNTER->Text = "12"; //-> Sheep
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Sheep -> Turkey
				{ //��� 12 ��� - Sheep

					COUNTER->Text = "13"; //-> Turkey (13)
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);  //Random for Turkey

					//���������� Random'a ��� Camel
					if(ANIMALS->Text == "0") { HOME_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_ADD_2(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_3st(); HIDE_ERROR(); break; }
				}

				case 13: //Turkey -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = true;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = true;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		else { SOUND_ERROR(); ERROR_2(); Error2->Visible = true; }
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image4Click(TObject *Sender)
{
	Image4->Free();

	REPOSITION_FORM3();

//������ ������ RANDOM..........................................................
	if(Form2->ALBUM->Text == "HARD")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "3") //0 - ��� Image4
		{
			if(HARD_TEST == Memo1->Lines->Count)
			{
				//��������� ������� �����
				MediaPlayer1->Stop();
				MediaPlayer2->Stop();
				MediaPlayer3->Stop();

				//��������� ��������....
				Image1->Visible = false;
				Image2->Visible = false;
				Image3->Visible = false;
				Image4->Visible = false;

				//��������� ������� ������..
				Error1->Visible = false;
				Error2->Visible = false;
				Error3->Visible = false;
				Error4->Visible = false;

				//�������� ����������...............
				LabelTextScore->Visible = true;
				LabelScore->Visible = true;

				LabelTextErrorScore->Visible = true;
				LabelErrorScore->Visible = true;

				//������� ������ � ����������.......
				LabelScore->Text = SCORE;
				LabelErrorScore->Text = ERR_SCORE;

				//��������� ����������� ������ SphereQuest
				TimerSphereQuestEnd->Enabled = false;
				TimerSphereQuestStart->Enabled = false;
				TimerSphereQuestLeft->Enabled = false;
				TimerSphereQuestRight->Enabled = false;

				SphereQuest->Visible = false;

				Form3->MedalHome->Visible = false;
				Form3->MedalWild->Visible = false;
				Form3->MedalAir->Visible = false;
				Form3->MedalWater->Visible = false;
				Form3->MedalInsects->Visible = false;

				Form3->FinalText->Visible = false;
				Form3->FinalTextHome->Visible = false;
				Form3->FinalTextWild->Visible = false;
				Form3->FinalTextAir->Visible = false;
				Form3->FinalTextWater->Visible = false;
				Form3->FinalTextInsects->Visible = false;

				Form3->SmallMedalHome->Visible = true;
				Form3->SmallMedalWild->Visible = true;
				Form3->SmallMedalAir->Visible = true;
				Form3->SmallMedalWater->Visible = true;
				Form3->SmallMedalInsects->Visible = true;

				Form3->TimerAsk1->Enabled = false;
				Form3->TimerAskVoice->Enabled = false;
				Form3->TimerAsk2->Enabled = false;
				Form3->TimerAnimalSound->Enabled = false;
				Form3->TimerTestAsk->Enabled = false;
				Form3->TimerTestVoice->Enabled = false;

				//�������� �������
				if(ERR_SCORE == 0)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward4.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE == 1)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward3.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE == 2)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward2.mp3";
					MediaPlayer1->Play();
				}

				if(ERR_SCORE > 2)
				{
					MediaPlayer1->Stop();
					MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Reward1.mp3";
					MediaPlayer1->Play();
				}

				//�������� ������, ������� ����� 2 ���, �������� ������!!!
				TimerReward->Enabled = true;
			}
			else
			{
				COUNTER->Text = Memo1->Lines->Strings[HARD_TEST];

				switch(StrToInt(COUNTER->Text))
				{

//......AIR.........

					case 0: //BEGIN -> Albatross
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_11st(); HIDE_ERROR(); break; }
					}

					case 1: //Albatross -> Bullfinch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_30st(); HIDE_ERROR(); break; }
					}

					case 2: //Bullfinch -> Deadlock
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_13st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_9st(); HIDE_ERROR(); break; }
					}

					case 3: //Deadlock -> Dove
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_27st(); HIDE_ERROR(); break; }
					}

					case 4: //Dove -> Duck
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_9st(); HIDE_ERROR(); break; }
					}

					case 5: //Duck -> Eagle
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_36st(); HIDE_ERROR(); break; }
					}

					case 6: //Eagle -> Falcon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_2st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_1st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_26st(); HIDE_ERROR(); break; }
					}

					case 7: //Falcon -> Flamingo
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_66st(); HIDE_ERROR(); break; }
					}

					case 8: //Flamingo -> Goldfinch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_46st(); HIDE_ERROR(); break; }
					}

					case 9: //Goldfinch -> Heron
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_29st(); HIDE_ERROR(); break; }
					}

					case 10: //Heron -> Jay
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_24st(); HIDE_ERROR(); break; }
					}

					case 11: //Jay -> Lark
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_60st(); HIDE_ERROR(); break; }
					}

					case 12: //Lark -> Owl
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_81st(); HIDE_ERROR(); break; }
					}

					case 13: //Owl -> Parrot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_52st(); HIDE_ERROR(); break; }
					}

					case 14: //Parrot -> Pelican
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_5st(); HIDE_ERROR(); break; }
					}

					case 15: //Pelican -> Pheasant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_83st(); HIDE_ERROR(); break; }
					}

					case 16: //Pheasant -> Raven
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_47st(); HIDE_ERROR(); break; }
					}

					case 17: //Raven -> Rook
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_59st(); HIDE_ERROR(); break; }
					}

					case 18: //Rook -> Seagull
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_88st(); HIDE_ERROR(); break; }
					}

					case 19: //Seagull -> Sparrow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_13st(); HIDE_ERROR(); break; }
					}

					case 20: //Sparrow -> Stork
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_1st(); HIDE_ERROR(); break; }
					}

					case 21: //Stork -> Swallow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_55st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_72st(); HIDE_ERROR(); break; }
					}

					case 22: //Swallow -> Titmouse
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_61st(); HIDE_ERROR(); break; }
					}

					case 23: //Titmouse -> Woodpecker
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_33st(); HIDE_ERROR(); break; }
					}

//......WATER.......

					case 24: //Woodpecker -> Cachalot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_67st(); HIDE_ERROR(); break; }
					}

					case 25: //Cachalot -> Crab
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_82st(); HIDE_ERROR(); break; }
					}

					case 26: //Crab -> Dolphin
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_9st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_7st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_2st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_34st(); HIDE_ERROR(); break; }
					}

					case 27: //Dolphin -> Echinoid
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_22st(); HIDE_ERROR(); break; }
					}

					case 28: //Echinoid -> Jellyfish
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_20st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_13st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_8st(); HIDE_ERROR(); break; }
					}

					case 29: //Jellyfish -> Octopus
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_85st(); HIDE_ERROR(); break; }
					}

					case 30: //Octopus -> Penguin
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_4st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_32st(); HIDE_ERROR(); break; }
					}

					case 31: //Penguin -> Perch
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_17st(); HIDE_ERROR(); break; }
					}

					case 32: //Perch -> Schyuka
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_56st(); HIDE_ERROR(); break; }
					}

					case 33: //Perch -> Sea-slope
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_1st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_12st(); HIDE_ERROR(); break; }
					}

					case 34: //Sea-slope -> Shark
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_92st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_7st(); HIDE_ERROR(); break; }
					}

					case 35: //Shark -> Snail
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_87st(); HIDE_ERROR(); break; }
					}

					case 36: //Snail -> Squid
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_21st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_28st(); HIDE_ERROR(); break; }
					}

					case 37: //Squid -> Starfish
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_67st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_69st(); HIDE_ERROR(); break; }
					}

					case 38: //Starfish -> Turtle
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_8st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_15st(); HIDE_ERROR(); break; }
					}

					case 39: //Turtle -> Walrus
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_75st(); HIDE_ERROR(); break; }
					}

//......INSECT......

					case 40: //Walrus -> Ant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_87st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_90st(); HIDE_ERROR(); break; }
					}

					case 41: //Ant -> Bee
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_11st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_3st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_48st(); HIDE_ERROR(); break; }
					}

					case 42: //Bee -> Bug
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_20st(); HIDE_ERROR(); break; }
					}

					case 43: //Bug -> Bumblebee
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_58st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_55st(); HIDE_ERROR(); break; }
					}

					case 44: //Bumblebee -> Butterfly
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_80st(); HIDE_ERROR(); break; }
					}

					case 45: //Butterfly -> Dragonfly
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_59st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_64st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_71st(); HIDE_ERROR(); break; }
					}

					case 46: //Dragonfly -> Grasshopper
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_51st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_61st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_64st(); HIDE_ERROR(); break; }
					}

					case 47: //Grasshopper -> Ladybug
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_14st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_17st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_19st(); HIDE_ERROR(); break; }
					}

					case 48: //Ladybug -> Mantis
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_33st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_18st(); HIDE_ERROR(); break; }
					}

					case 49: //Mantis -> Scorpion
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_10st(); HIDE_ERROR(); break; }
					}

					case 50: //Scorpion -> Spider
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_56st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_40st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_38st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_45st(); HIDE_ERROR(); break; }
					}

					case 51: //Spider -> Tarantula
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_86st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_68st(); HIDE_ERROR(); break; }
					}

//......HOME........

					case 52: //Tarantula -> Buffalo
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_89st(); HIDE_ERROR(); break; }
					}

					case 53: //Buffalo -> Camel
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_63st(); HIDE_ERROR(); break; }
					}

					case 54: //Camel -> Cat
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_73st(); HIDE_ERROR(); break; }
					}

					case 55: //Cat -> Cock
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_32st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_26st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_23st(); HIDE_ERROR(); break; }
					}

					case 56: //Cock -> Cow
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_39st(); HIDE_ERROR(); break; }
					}

					case 57: //Cow -> Dog
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_70st(); HIDE_ERROR(); break; }
					}

					case 58: //Dog -> Donkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_6st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_48st(); HIDE_ERROR(); break; }
					}

					case 59: //Donkey -> Goat
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_28st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_43st(); HIDE_ERROR(); break; }
					}

					case 60: //Goat -> Hens
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_38st(); HIDE_ERROR(); break; }
					}

					case 61: //Hens -> Horse
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_34st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_16st(); HIDE_ERROR(); break; }
					}

					case 62: //Horse -> Pig
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_90st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_81st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_75st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_53st(); HIDE_ERROR(); break; }
					}

					case 63: //Pig -> Rabbit
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_22st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_23st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_35st(); HIDE_ERROR(); break; }
					}

					case 64: //Rabbit -> Sheep
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_45st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_50st(); HIDE_ERROR(); break; }
					}

					case 65: //Sheep -> Turkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_48st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_60st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_65st(); HIDE_ERROR(); break; }
					}

//......WILD........

					case 66: //Turkey -> Arctic-fox
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_91st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_0st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_92st(); HIDE_ERROR(); break; }
					}

					case 67: //Arctic-fox -> Bear
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_44st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_76st(); HIDE_ERROR(); break; }
					}

					case 68: //Bear -> Boar
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_62st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_58st(); HIDE_ERROR(); break; }
					}

					case 69: //Boar -> Chameleon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_78st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_79st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_86st(); HIDE_ERROR(); break; }
					}

					case 70: //Chameleon -> Chipmunk
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_80st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_63st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_77st(); HIDE_ERROR(); break; }
					}

					case 71: //Chipmunk -> Deer
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_47st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_40st(); HIDE_ERROR(); break; }
					}

					case 72: //Deer -> Elephant
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_82st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_83st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_89st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_84st(); HIDE_ERROR(); break; }
					}

					case 73: //Elephant -> Fox
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_24st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_74st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_76st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_21st(); HIDE_ERROR(); break; }
					}

					case 74: //Fox -> Giraffe
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_52st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_91st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_42st(); HIDE_ERROR(); break; }
					}

					case 75: //Giraffe -> Hedgehog
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_42st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_71st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_25st(); HIDE_ERROR(); break; }
					}

					case 76: //Hedgehog -> Koala
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_15st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_14st(); HIDE_ERROR(); break; }
					}

					case 77: //Koala -> Lion
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_53st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_66st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_78st(); HIDE_ERROR(); break; }
					}

					case 78: //Lion -> Lynx
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_57st(); HIDE_ERROR(); break; }
					}

					case 79: //Lynx -> Marmot
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_19st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_31st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_39st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_37st(); HIDE_ERROR(); break; }
					}

					case 80: //Marmot -> Monkey
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_10st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_5st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_2st(); HIDE_ERROR(); break; }
					}

					case 81: //Monkey -> Panda
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_70st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_18st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_65st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_6st(); HIDE_ERROR(); break; }
					}

					case 82: //Panda -> Polar-bear
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_88st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_85st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_77st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_54st(); HIDE_ERROR(); break; }
					}

					case 83: //Polar-bear -> Raccoon
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_30st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_35st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_36st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_41st(); HIDE_ERROR(); break; }
					}

					case 84: //Raccoon -> Rhinoceros
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_54st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_57st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_79st(); HIDE_ERROR(); break; }
					}

					case 85: //Rhinoceros -> Snake
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_40st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_43st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_46st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_51st(); HIDE_ERROR(); break; }
					}

					case 86: //Snake -> Snow-leopard
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_84st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_12st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_16st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_0st(); HIDE_ERROR(); break; }
					}

					case 87: //Snow-leopard -> Squirrel
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_25st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_27st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_29st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_31st(); HIDE_ERROR(); break; }
					}

					case 88: //Squirrel -> Tiger
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk2->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk1->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_73st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_68st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_50st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_49st(); HIDE_ERROR(); break; }
					}

					case 89: //Tiger -> Wolf
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore1Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_37st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_49st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_62st(); HIDE_ERROR(); break; }
					}

					case 90: //Wolf -> Zebra
					{
						HARD_TEST++; HARD->Text = HARD_TEST;

						TimerAddScore2Image4->Enabled = true;

						TimerAskVoice->Enabled = false;
						TimerAsk1->Enabled = false;
						TimerAnimalSound->Enabled = false;

						TimerAsk2->Enabled = true;

						Form3->ANIMALS->Text = Random(4);

						if(Form3->ANIMALS->Text == "0") { HARD_41st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "1") { HARD_69st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "2") { HARD_72st(); HIDE_ERROR(); break; }
						if(Form3->ANIMALS->Text == "3") { HARD_74st(); HIDE_ERROR(); break; }
					}
				} //switch -> end
			} //else -> end
		} //IF -> end
		else { SOUND_ERROR(); ERROR_4(); Error4->Visible = true; TimerSubScoreImage4->Enabled = true; ERR_SCORE++; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ INSECTS.........................................................
	if(Form2->ALBUM->Text == "INSECTS")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "3")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Ant -> Bee
				{
					COUNTER->Text = "1"; //-> Bee
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_7st(); HIDE_ERROR(); break; }
				}

				case 1: //Bee -> Bug
				{
					COUNTER->Text = "2"; //-> Bug
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_8st(); HIDE_ERROR(); break; }
				}

				case 2: //Bug -> Bumblebee
				{
					COUNTER->Text = "3"; //-> Bumblebee
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_4st(); HIDE_ERROR(); break; }
				}

				case 3: //Bumblebee -> Butterfly
				{
					COUNTER->Text = "4"; //-> Butterfly
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_5st(); HIDE_ERROR(); break; }
				}

				case 4: //Butterfly -> Dragonfly
				{
					COUNTER->Text = "5"; //-> Dragonfly
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_6st(); HIDE_ERROR(); break; }
				}

				case 5: //Dragonfly -> Grasshopper
				{
					COUNTER->Text = "6"; //-> Grasshopper
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_9st(); HIDE_ERROR(); break; }
				}

				case 6: //Grasshopper -> Ladybug
				{
					COUNTER->Text = "7"; //-> Ladybug
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_11st(); HIDE_ERROR(); break; }
				}

				case 7: //Ladybug -> Mantis
				{
					COUNTER->Text = "8"; //-> Mantis
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_1st(); HIDE_ERROR(); break; }
				}

				case 8: //Mantis -> Scorpion
				{
					COUNTER->Text = "9"; //-> Scorpion
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_2st(); HIDE_ERROR(); break; }
				}

				case 9: //Scorpion -> Spider
				{
					COUNTER->Text = "10"; //-> Spider
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_10st(); HIDE_ERROR(); break; }
				}

				case 10: //Spider -> Tarantula
				{
					COUNTER->Text = "11"; //-> Tarantula
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { INSECTS_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { INSECTS_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { INSECTS_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { INSECTS_0st(); HIDE_ERROR(); break; }
				}

				case 11: //Tarantula -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = true;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = true;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
                }
			}
		}
		else { SOUND_ERROR(); ERROR_4(); Error4->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WATER...........................................................
	if(Form2->ALBUM->Text == "WATER")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "3")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Cachalot -> Crab
				{
					COUNTER->Text = "1"; //-> Crab
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_7st(); HIDE_ERROR(); break; }
                }

				case 1: //Crab -> Dolphin
				{
					COUNTER->Text = "2"; //-> Dolphin
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_0st(); HIDE_ERROR(); break; }
				}

				case 2: //Dolphin -> Echinoid
				{
					COUNTER->Text = "3"; //-> Echinoid
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_11st(); HIDE_ERROR(); break; }
				}

				case 3: //Echinoid -> Jellyfish
				{
					COUNTER->Text = "4"; //-> Jellyfish
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_14st(); HIDE_ERROR(); break; }
				}

				case 4: //Jellyfish -> Octopus
				{
					COUNTER->Text = "5"; //-> Octopus
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_10st(); HIDE_ERROR(); break; }
				}

				case 5: //Octopus -> Penguin
				{
					COUNTER->Text = "6"; //-> Penguin
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_15st(); HIDE_ERROR(); break; }
				}

				case 6: //Penguin -> Perch
				{
					COUNTER->Text = "7"; //-> Perch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_1st(); HIDE_ERROR(); break; }
				}

				case 7: //Perch -> Schyuka
				{
					COUNTER->Text = "8"; //-> Schyuka
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_12st(); HIDE_ERROR(); break; }
                }

				case 8: //Schyuka -> Sea-slope
				{
					COUNTER->Text = "9"; //-> Sea-slope
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_5st(); HIDE_ERROR(); break; }
				}

				case 9: //Sea-slope -> Shark
				{
					COUNTER->Text = "10"; //-> Shark
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_4st(); HIDE_ERROR(); break; }
				}

				case 10: //Shark -> Snail
				{
					COUNTER->Text = "11"; //-> Snail
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_6st(); HIDE_ERROR(); break; }
				}

				case 11: //Snail -> Squid
				{
					COUNTER->Text = "12"; //-> Squid
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Squid -> Starfish
				{
					COUNTER->Text = "13"; //-> Starfish
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_8st(); HIDE_ERROR(); break; }
				}

				case 13: //Starfish -> Turtle
				{
					COUNTER->Text = "14"; //-> Turtle
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_3st(); HIDE_ERROR(); break; }
				}

				case 14: //Turtle -> Walrus
				{
					COUNTER->Text = "15"; //-> Walrus
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WATER_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WATER_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WATER_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WATER_9st(); HIDE_ERROR(); break; }
				}

				case 15: //Walrus -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = true;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = true;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
                }
			}
		}
		else { SOUND_ERROR(); ERROR_4(); Error4->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ AIR.............................................................
	if(Form2->ALBUM->Text == "AIR")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "3")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Albatross -> Bullfinch
				{
					COUNTER->Text = "1"; //-> Bullfinch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_5st(); HIDE_ERROR(); break; }
				}

				case 1: //Bullfinch -> Deadlock
				{
					COUNTER->Text = "2"; //-> Deadlock
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_11st(); HIDE_ERROR(); break; }
				}

				case 2: //Deadlock -> Dove
				{
					COUNTER->Text = "3"; //-> Dove
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_8st(); HIDE_ERROR(); break; }
				}

				case 3: //Dove -> Duck
				{
					COUNTER->Text = "4"; //-> Duck
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_21st(); HIDE_ERROR(); break; }
				}

				case 4: //Duck -> Eagle
				{
					COUNTER->Text = "5"; //-> Eagle
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_6st(); HIDE_ERROR(); break; }
				}

				case 5: //Eagle -> Falcon
				{
					COUNTER->Text = "6"; //-> Falcon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_19st(); HIDE_ERROR(); break; }
				}

				case 6: //Falcon -> Flamingo
				{
					COUNTER->Text = "7"; //-> Flamingo
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_17st(); HIDE_ERROR(); break; }
				}

				case 7: //Flamingo -> Goldfinch
				{
					COUNTER->Text = "8"; //-> Goldfinch
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_18st(); HIDE_ERROR(); break; }
				}

				case 8: //Goldfinch -> Heron
				{
					COUNTER->Text = "9"; //-> Heron
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_4st(); HIDE_ERROR(); break; }
				}

				case 9: //Heron -> Jay
				{
					COUNTER->Text = "10"; //-> Jay
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_12st(); HIDE_ERROR(); break; }
				}

				case 10: //Jay -> Lark
				{
					COUNTER->Text = "11"; //-> Lark
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_2st(); HIDE_ERROR(); break; }
				}

				case 11: //Lark -> Owl
				{
					COUNTER->Text = "12"; //-> Owl
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_23st(); HIDE_ERROR(); break; }
				}

				case 12: //Owl -> Parrot
				{
					COUNTER->Text = "13"; //-> Parrot
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_10st(); HIDE_ERROR(); break; }
				}

				case 13: //Parrot -> Pelican
				{
					COUNTER->Text = "14"; //-> Pelican
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_3st(); HIDE_ERROR(); break; }
				}

				case 14: //Pelican -> Pheasant
				{
					COUNTER->Text = "15"; //-> Pheasant
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_16st(); HIDE_ERROR(); break; }
				}

				case 15: //Pheasant -> Raven
				{
					COUNTER->Text = "16"; //-> Raven
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_20st(); HIDE_ERROR(); break; }
				}

				case 16: //Raven -> Rook
				{
					COUNTER->Text = "17"; //-> Rook
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_0st(); HIDE_ERROR(); break; }
				}

				case 17: //Rook -> Seagull
				{
					COUNTER->Text = "18"; //-> Seagull
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_7st(); HIDE_ERROR(); break; }
				}

				case 18: //Seagull -> Sparrow
				{
					COUNTER->Text = "19"; //-> Sparrow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_1st(); HIDE_ERROR(); break; }
				}

				case 19: //Sparrow -> Stork
				{
					COUNTER->Text = "20"; //-> Stork
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_9st(); HIDE_ERROR(); break; }
				}

				case 20: //Stork -> Swallow
				{
					COUNTER->Text = "21"; //-> Swallow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_13st(); HIDE_ERROR(); break; }
				}

				case 21: //Swallow -> Titmouse
				{
					COUNTER->Text = "22"; //-> Titmouse
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_15st(); HIDE_ERROR(); break; }
				}

				case 22: //Titmouse -> Woodpecker
				{
					COUNTER->Text = "23"; //-> Woodpecker
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { AIR_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { AIR_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { AIR_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { AIR_14st(); HIDE_ERROR(); break; }
				}

				case 23: //Woodpecker -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = true;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = true;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		else { SOUND_ERROR(); ERROR_4(); Error4->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ WILD............................................................
	if(Form2->ALBUM->Text == "WILD")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "3")
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Arctic-fox -> Bear
				{
					COUNTER->Text = "1"; //-> Bear
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_9st(); HIDE_ERROR(); break; }
				}

				case 1: //Bear -> Boar
				{
					COUNTER->Text = "2"; //-> Boar
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_24st(); HIDE_ERROR(); break; }
				}

				case 2: //Boar -> Chameleon
				{
					COUNTER->Text = "3"; //-> Chameleon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_14st(); HIDE_ERROR(); break; }
				}

				case 3: //Chameleon -> Chipmunk
				{
					COUNTER->Text = "4"; //-> Chipmunk
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_7st(); HIDE_ERROR(); break; }
				}

				case 4: //Chipmunk -> Deer
				{
					COUNTER->Text = "5"; //-> Deer
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_5st(); HIDE_ERROR(); break; }
				}

				case 5: //Deer -> Elephant
				{
					COUNTER->Text = "6"; //-> Elephant
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_21st(); HIDE_ERROR(); break; }
				}

				case 6: //Elephant -> Fox
				{
					COUNTER->Text = "7"; //-> Fox
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_8st(); HIDE_ERROR(); break; }
				}

				case 7: //Fox -> Giraffe
				{
					COUNTER->Text = "8"; //-> Giraffe
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_16st(); HIDE_ERROR(); break; }
				}

				case 8: //Giraffe -> Hedgehog
				{
					COUNTER->Text = "9"; //-> Hedgehog
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_22st(); HIDE_ERROR(); break; }
				}

				case 9: //Hedgehog -> Koala
				{
					COUNTER->Text = "10"; //-> Koala
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_18st(); HIDE_ERROR(); break; }
				}

				case 10: //Koala -> Lion
				{
					COUNTER->Text = "11"; //-> Lion
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_10st(); HIDE_ERROR(); break; }
				}

				case 11: //Lion -> Lynx
				{
					COUNTER->Text = "12"; //-> Lynx
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Lynx -> Marmot
				{
					COUNTER->Text = "13"; //-> Marmot
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_19st(); HIDE_ERROR(); break; }
				}

				case 13: //Marmot -> Monkey
				{
					COUNTER->Text = "14"; //-> Monkey
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_20st(); HIDE_ERROR(); break; }
				}

				case 14: //Monkey -> Panda
				{
					COUNTER->Text = "15"; //-> Panda
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_23st(); HIDE_ERROR(); break; }
				}

				case 15: //Panda -> Polar-bear
				{
					COUNTER->Text = "16"; //-> Polar-bear
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_0st(); HIDE_ERROR(); break; }
				}

				case 16: //Polar-bear -> Raccoon
				{
					COUNTER->Text = "17"; //-> Raccoon
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_14st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_1st(); HIDE_ERROR(); break; }
				}

				case 17: //Raccoon -> Rhinoceros
				{
					COUNTER->Text = "18"; //-> Rhinoceros
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_17st(); HIDE_ERROR(); break; }
				}

				case 18: //Rhinoceros -> Snake
				{
					COUNTER->Text = "19"; //-> Snake
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_18st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_19st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_4st(); HIDE_ERROR(); break; }
				}

				case 19: //Snake -> Snow-leopard
				{
					COUNTER->Text = "20"; //-> Snow-leopard
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_6st(); HIDE_ERROR(); break; }
				}

				case 20: //Snow-leopard -> Squirrel
				{
					COUNTER->Text = "21"; //-> Squirrel
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_17st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_13st(); HIDE_ERROR(); break; }
				}

				case 21: //Squirrel -> Tiger
				{
					COUNTER->Text = "22"; //-> Tiger
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_20st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_21st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_12st(); HIDE_ERROR(); break; }
				}

				case 22: //Tiger -> Wolf
				{
					COUNTER->Text = "23"; //-> Wolf
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_22st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_15st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_11st(); HIDE_ERROR(); break; }
				}

				case 23: //Wolf -> Zebra
				{
					COUNTER->Text = "24"; //-> Zebra
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { WILD_24st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { WILD_23st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { WILD_16st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { WILD_3st(); HIDE_ERROR(); break; }
				}

				case 24: //Zebra -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = false;
					Form3->MedalWild->Visible = true;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = false;
					Form3->FinalTextWild->Visible = true;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		else { SOUND_ERROR(); ERROR_4(); Error4->Visible = true; }
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������ ������ HOME...........................................................
	if(Form2->ALBUM->Text == "HOME")
	{
		HIDE_ERROR();

		if(ANIMALS->Text == "3") //0 - ������ ������� "������" � Image1 (0, 1, 2, 3)
		{
			switch(StrToInt(COUNTER->Text))
			{
				case 0: //Buffalo -> Camel
				{
					COUNTER->Text = "1";
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_10st(); HIDE_ERROR(); break; }
				}

				case 1: //Camel -> Cat
				{
					COUNTER->Text = "2"; //-> Cat
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_13st(); HIDE_ERROR(); break; }
				}


				case 2: //Cat -> Cock
				{
					COUNTER->Text = "3"; //-> Cock
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_3st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_0st(); HIDE_ERROR(); break; }
				}

				case 3: //Cock -> Cow
				{
					COUNTER->Text = "4"; //-> Cow
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_4st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_1st(); HIDE_ERROR(); break; }
				}

				case 4: //Cow -> Dog
				{
					COUNTER->Text = "5"; //-> Dog
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_8st(); HIDE_ERROR(); break; }
				}

				case 5: //Dog -> Donkey
				{
					COUNTER->Text = "6"; //-> Donkey
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_4st(); HIDE_ERROR(); break; }
				}

				case 6: //Donkey -> Goat
				{
					COUNTER->Text = "7"; //-> Goat
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_7st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_10st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_5st(); HIDE_ERROR(); break; }
				}

				case 7: //Goat -> Hens
				{
					COUNTER->Text = "8"; //-> Hens
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_11st(); HIDE_ERROR(); break; }
				}

				case 8: //Hens -> Horse
				{
					COUNTER->Text = "9"; //-> Horse
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_1st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_0st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_6st(); HIDE_ERROR(); break; }
				}

				case 9: //Horse -> Pig
				{
					COUNTER->Text = "10"; //-> Pig
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_9st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_2st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_ADD_1(); HIDE_ERROR(); break; }
				}

				case 10: //Pig -> Rabbit
				{
					COUNTER->Text = "11"; //-> Rabbit
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_8st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_5st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_7st(); HIDE_ERROR(); break; }
				}

				case 11: //Rabbit -> Sheep
				{
					COUNTER->Text = "12"; //-> Sheep
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);

					if(ANIMALS->Text == "0") { HOME_12st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_ADD_1(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_6st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_2st(); HIDE_ERROR(); break; }
				}

				case 12: //Sheep -> Turkey
				{ //��� 12 ��� - Sheep

					COUNTER->Text = "13"; //-> Turkey (13)
					TimerTestAsk->Enabled = true;
					ANIMALS->Text = Random(4);  //Random for Turkey

					//���������� Random'a ��� Camel
					if(ANIMALS->Text == "0") { HOME_11st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "1") { HOME_13st(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "2") { HOME_ADD_2(); HIDE_ERROR(); break; }
					if(ANIMALS->Text == "3") { HOME_3st(); HIDE_ERROR(); break; }
				}

				case 13: //Turkey -> End
				{
					FINAL_NORMAL_TEST();

					Form3->MedalHome->Visible = true;
					Form3->MedalWild->Visible = false;
					Form3->MedalAir->Visible = false;
					Form3->MedalWater->Visible = false;
					Form3->MedalInsects->Visible = false;

					Form3->FinalText->Visible = true;
					Form3->FinalTextHome->Visible = true;
					Form3->FinalTextWild->Visible = false;
					Form3->FinalTextAir->Visible = false;
					Form3->FinalTextWater->Visible = false;
					Form3->FinalTextInsects->Visible = false;

					Form3->SmallMedalHome->Visible = false;
					Form3->SmallMedalWild->Visible = false;
					Form3->SmallMedalAir->Visible = false;
					Form3->SmallMedalWater->Visible = false;
					Form3->SmallMedalInsects->Visible = false;

					break;
				}
			}
		}
		//���� � Image1 ��� Buffalo, �� ���������� "������" - �����.
		else { SOUND_ERROR(); ERROR_4(); Error4->Visible = true; }
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::MedalAirClick(TObject *Sender)
{
	MediaPlayer2->Stop();
	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Air.mp3";
	MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::MedalInsectsClick(TObject *Sender)
{
	MediaPlayer2->Stop();
	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Insects.mp3";
	MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::MedalWaterClick(TObject *Sender)
{
	MediaPlayer2->Stop();
	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Water.mp3";
	MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::MedalHomeClick(TObject *Sender)
{
	MediaPlayer2->Stop();
	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Home.mp3";
	MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::MedalWildClick(TObject *Sender)
{
	MediaPlayer2->Stop();
	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wild.mp3";
	MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SmallMedalAirClick(TObject *Sender)
{
	MediaPlayer2->Stop();
	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Air.mp3";
	MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SmallMedalHomeClick(TObject *Sender)
{
	MediaPlayer2->Stop();
	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Home.mp3";
	MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SmallMedalWaterClick(TObject *Sender)
{
	MediaPlayer2->Stop();
	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Water.mp3";
	MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SmallMedalWildClick(TObject *Sender)
{
	MediaPlayer2->Stop();
	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wild.mp3";
	MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::SmallMedalInsectsClick(TObject *Sender)
{
	MediaPlayer2->Stop();
	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Insects.mp3";
	MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

