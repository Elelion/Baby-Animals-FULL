//---------------------------------------------------------------------------

#include <fmx.h>
#include <System.IOUtils.hpp> //���������� ��� ��������������� �����
#include <System.SysUtils.hpp> //���������� ��� ��������������� �����
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h" //For Animals
#include "Unit3.h" //For Testing
#include "Unit4.h" //For Archive data

int SphereX1, SphereY1, i1; //���������� ��� 1�� ������
int SphereX2, SphereY2, i2; //���������� ��� 2�� ������
int SphereX3, SphereY3, i3; //���������� ��� 3�� ������
int SphereX4, SphereY4, i4; //���������� ��� 4�� ������

int LeafletX1, LeafletY1, i5, j5; //���������� ��� 1�� ��������
int LeafletX2, LeafletY2, i6, j6; //���������� ��� 2�� ��������

int SphereX5, SphereY5, i7, j7; //���������� ��� 5�� ������.
int SphereHardTestingX1, SphereHardTestingY1, F1_i13, F1_j13; //��� ������ �� ������� ������.

int HelpFingX1, HelpFingY1, i8, j8; //���������� ��� ��������� "�����"

int CapBtnX1, F1_j14; //��� �������� �������� CapBtn
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
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
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg");
}

void HARD_92st()
{
	Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg");
	Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg");
	Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.jpg");
	Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//GENERATOR OF RANDOM NUMBERS...................................................
void RAND()
{
//������ �������� ��� ������������������ �������������
	int a0 = Random(91),  a21 = Random(91),
		a1 = Random(91),  a22 = Random(91),
		a2 = Random(91),  a23 = Random(91),
		a3 = Random(91),  a24 = Random(91),
		a4 = Random(91),  a25 = Random(91),
		a5 = Random(91),  a26 = Random(91),
		a6 = Random(91),  a27 = Random(91),
		a7 = Random(91),  a28 = Random(91),
		a8 = Random(91),  a29 = Random(91),
		a9 = Random(91),  a30 = Random(91),
		a10 = Random(91), a31 = Random(91),
		a11 = Random(91), a32 = Random(91),
		a12 = Random(91), a33 = Random(91),
		a13 = Random(91), a34 = Random(91),
		a14 = Random(91), a35 = Random(91),
		a15 = Random(91), a36 = Random(91),
		a16 = Random(91), a37 = Random(91),
		a17 = Random(91), a38 = Random(9),
		a18 = Random(91), a39 = Random(91),
		a19 = Random(91), a40 = Random(91),
		a20 = Random(91), a41 = Random(91);

	int b0 = a0,   b21 = a21,
		b1 = a1,   b22 = a22,
		b2 = a2,   b23 = a23,
		b3 = a3,   b24 = a24,
		b4 = a4,   b25 = a25,
		b5 = a5,   b26 = a26,
		b6 = a6,   b27 = a27,
		b7 = a7,   b28 = a28,
		b8 = a8,   b29 = a29,
		b9 = a9,   b30 = a30,
		b10 = a10, b31 = a31,
		b11 = a11, b32 = a32,
		b12 = a12, b33 = a33,
		b13 = a13, b34 = a34,
		b14 = a14, b35 = a35,
		b15 = a15, b36 = a36,
		b16 = a16, b37 = a37,
		b17 = a17, b38 = a38,
		b18 = a18, b39 = a39,
		b19 = a19, b40 = a40,
		b20 = a20, b41 = a41;

	Form3->Memo1->Lines->Clear();

	//a0
	if(a0 == b1 || a0 == b2 || a0 == b3  || a0 == b4  || a0 == b5  || a0 == b6  || a0 == b7 ||
	   a0 == b8 || a0 == b9 || a0 == b10 || a0 == b11 || a0 == b12 || a0 == b13 || a0 == b14 || a0 == b15 ||
	   a0 == b16 || a0 == b17 || a0 == b18 || a0 == b19 || a0 == b20 || a0 == b21 || a0 == b22 || a0 == b23 ||
	   a0 == b24 || a0 == b25 || a0 == b26 || a0 == b27 || a0 == b28 || a0 == b29 || a0 == b30 || a0 == b31 ||
	   a0 == b32 || a0 == b33 || a0 == b34 || a0 == b35 || a0 == b36)
	{ a0 = Random(91); }
	else { b0 = a0;	Form3->Memo1->Lines->Add(b0); }

	//a1
	if(a1 == b2 || a1 == b3  || a1 == b4  || a1 == b5  || a1 == b6  || a1 == b7  || a1 == b8 ||
	   a1 == b9 || a1 == b10 || a1 == b11 || a1 == b12 || a1 == b13 || a1 == b14 || a1 == b15 || a1 == b16 ||
	   a1 == b17 || a1 == b18 || a1 == b19 || a1 == b20 || a1 == b21 || a1 == b22 || a1 == b23 || a1 == b24 ||
	   a1 == b25 || a1 == b26 || a1 == b27 || a1 == b28 || a1 == b29 || a1 == b30 || a1 == b31 || a1 == b32 ||
	   a1 == b33 || a1 == b34 || a1 == b35 || a1 == b36)
	{ a1 = Random(91); }
	else { b1 = a1;	Form3->Memo1->Lines->Add(b1); }

	//a2
	if(a2 == b3  || a2 == b4  || a2 == b5  || a2 == b6  || a2 == b7 || a2 == b8 || a2 == b9 ||
	   a2 == b10 || a2 == b11 || a2 == b12 || a2 == b13 || a2 == b14 || a2 == b15 || a2 == b16 || a2 == b17 ||
	   a2 == b18 || a2 == b19 || a2 == b20 || a2 == b21 || a2 == b22 || a2 == b23 || a2 == b24 || a2 == b25 ||
	   a2 == b26 || a2 == b27 || a2 == b28 || a2 == b29 || a2 == b30 || a2 == b31 || a2 == b32 || a2 == b33 ||
	   a2 == b34 || a2 == b35 || a2 == b36)
	{ a2 = Random(91); }
	else { b2 = a2;	Form3->Memo1->Lines->Add(b2); }

	//a3
	if(a3 == b4 || a3 == b5 || a3 == b6 || a3 == b7 || a3 == b8 || a3 == b9 || a3 == b10 ||
	   a3 == b11 || a3 == b12 || a3 == b13 || a3 == b14 || a3 == b15 || a3 == b16 || a3 == b17 || a3 == b18 ||
	   a3 == b19 || a3 == b20 || a3 == b21 || a3 == b22 || a3 == b23 || a3 == b24 || a3 == b25 || a3 == b26 ||
	   a3 == b27 || a3 == b28 || a3 == b29 || a3 == b30 || a3 == b31 || a3 == b32 || a3 == b33 || a3 == b34 ||
	   a3 == b35 || a3 == b36)
	{ a3 = Random(91); }
	else { b3 = a3;	Form3->Memo1->Lines->Add(b3); }

	//a4
	if(a4 == b5 || a4 == b6 || a4 == b7 || a4 == b8 || a4 == b9 || a4 == b10 || a4 == b11 ||
	   a4 == b12 || a4 == b13 || a4 == b14 || a4 == b15 || a4 == b16 || a4 == b17 || a4 == b18 || a4 == b19 ||
	   a4 == b20 || a4 == b21 || a4 == b22 || a4 == b23 || a4 == b24 || a4 == b25 || a4 == b26 || a4 == b27 ||
	   a4 == b28 || a4 == b29 || a4 == b30 || a4 == b31 || a4 == b32 || a4 == b33 || a4 == b34 || a4 == b35 ||
	   a4 == b36)
	{ a4 = Random(91); }
	else { b4 = a4;	Form3->Memo1->Lines->Add(b4); }

	//a5
	if(a5 == b6 || a5 == b7 || a5 == b8 || a5 == b9 || a5 == b10 || a5 == b11 || a5 == b12 ||
	   a5 == b13 || a5 == b14 || a5 == b15 || a5 == b16 || a5 == b17 || a5 == b18 || a5 == b19 || a5 == b20 ||
	   a5 == b21 || a5 == b22 || a5 == b23 || a5 == b24 || a5 == b25 || a5 == b26 || a5 == b27 || a5 == b28 ||
	   a5 == b29 || a5 == b30 || a5 == b31 || a5 == b32 || a5 == b33 || a5 == b34 || a5 == b35 || a5 == b36)
	{ a5 = Random(91); }
	else { b5 = a5;	Form3->Memo1->Lines->Add(b5); }

	//a6
	if(a6 == b7 || a6 == b8 || a6 == b9 || a6 == b10 || a6 == b11 || a6 == b12 || a6 == b13 ||
	   a6 == b14 || a6 == b15 || a6 == b16 || a6 == b17 || a6 == b18 || a6 == b19 || a6 == b20 || a6 == b21 ||
	   a6 == b22 || a6 == b23 || a6 == b24 || a6 == b25 || a6 == b26 || a6 == b27 || a6 == b28 || a6 == b29 ||
	   a6 == b30 || a6 == b31 || a6 == b32 || a6 == b33 || a6 == b34 || a6 == b35 || a6 == b36)
	{ a6 = Random(91); }
	else { b6 = a6;	Form3->Memo1->Lines->Add(b6); }

	//a7
	if(a7 == b8 || a7 == b9 || a7 == b10 || a7 == b11 || a7 == b12 || a7 == b13 || a7 == b14 || a7 == b15 ||
	   a7 == b16 || a7 == b17 || a7 == b18 || a7 == b19 || a7 == b20 || a7 == b21 || a7 == b22 || a7 == b23 ||
	   a7 == b24 || a7 == b25 || a7 == b26 || a7 == b27 || a7 == b28 || a7 == b29 || a7 == b30 || a7 == b31 ||
	   a7 == b32 || a7 == b33 || a7 == b34 || a7 == b35 || a7 == b36)
	{ a7 = Random(91); }
	else { b7 = a7;	Form3->Memo1->Lines->Add(b7); }

	//a8
	if(a8 == b9 || a8 == b10 || a8 == b11 || a8 == b12 || a8 == b13 || a8 == b14 || a8 == b15 || a8 == b16 ||
	   a8 == b17 || a8 == b18 || a8 == b19 || a8 == b20 || a8 == b21 || a8 == b22 || a8 == b23 || a8 == b24 ||
	   a8 == b25 || a8 == b26 || a8 == b27 || a8 == b28 || a8 == b29 || a8 == b30 || a8 == b31 || a8 == b32 ||
	   a8 == b33 || a8 == b34 || a8 == b35 || a8 == b36)
	{ a8 = Random(91); }
	else { b8 = a8;	Form3->Memo1->Lines->Add(b8); }

	//a9
	if(a9 == b10 || a9 == b11 || a9 == b12 || a9 == b13 || a9 == b14 || a9 == b15 || a9 == b16 || a9 == b17 ||
	   a9 == b18 || a9 == b19 || a9 == b20 || a9 == b21 || a9 == b22 || a9 == b23 || a9 == b24 || a9 == b25 ||
	   a9 == b26 || a9 == b27 || a9 == b28 || a9 == b29 || a9 == b30 || a9 == b31 || a9 == b32 || a9 == b33 ||
	   a9 == b34 || a9 == b35 || a9 == b36)
	{ a9 = Random(91); }
	else { b9 = a9;	Form3->Memo1->Lines->Add(b9); }

	//a10
	if(a10 == b11 || a10 == b12 || a10 == b13 || a10 == b14 || a10 == b15 || a10 == b16 || a10 == b17 || a10 == b18 ||
	   a10 == b19 || a10 == b20 || a10 == b21 || a10 == b22 || a10 == b23 || a10 == b24 || a10 == b25 || a10 == b26 ||
	   a10 == b27 || a10 == b28 || a10 == b29 || a10 == b30 || a10 == b31 || a10 == b32 || a10 == b33 || a10 == b34 ||
	   a10 == b35 || a10 == b36)
	{ a10 = Random(91); }
	else { b10 = a10;	Form3->Memo1->Lines->Add(b10); }

	//a11
	if(a11 == b12 || a11 == b13 || a11 == b14 || a11 == b15 || a11 == b16 || a11 == b17 || a11 == b18 || a11 == b19 ||
	   a11 == b20 || a11 == b21 || a11 == b22 || a11 == b23 || a11 == b24 || a11 == b25 || a11 == b26 || a11 == b27 ||
	   a11 == b28 || a11 == b29 || a11 == b30 || a11 == b31 || a11 == b32 || a11 == b33 || a11 == b34 || a11 == b35 ||
	   a11 == b36)
	{ a11 = Random(91); }
	else { b11 = a11;	Form3->Memo1->Lines->Add(b11); }

   //a12
	if(a12 == b13 || a12 == b14 || a12 == b15 || a12 == b16 || a12 == b17 || a12 == b18 || a12 == b19 || a12 == b20 ||
	   a12 == b21 || a12 == b22 || a12 == b23 || a12 == b24 || a12 == b25 || a12 == b26 || a12 == b27 || a12 == b28 ||
	   a12 == b29 || a12 == b30 || a12 == b31 || a12 == b32 || a12 == b33 || a12 == b34 || a12 == b35 || a12 == b36)
	{ a12 = Random(91); }
	else { b12 = a12;	Form3->Memo1->Lines->Add(b12); }

   //a13
	if(a13 == b14 || a13 == b15 || a13 == b16 || a13 == b17 || a13 == b18 || a13 == b19 || a13 == b20 || a13 == b21 ||
	   a13 == b22 || a13 == b23 || a13 == b24 || a13 == b25 || a13 == b26 || a13 == b27 || a13 == b28 || a13 == b29 ||
	   a13 == b30 || a13 == b31 || a13 == b32 || a13 == b33 || a13 == b34 || a13 == b35 || a13 == b36)
	{ a13 = Random(91); }
	else { b13 = a13;	Form3->Memo1->Lines->Add(b13); }

   //a14
	if(a14 == b15 || a14 == b16 || a14 == b17 || a14 == b18 || a14 == b19 || a14 == b20 || a14 == b21 || a14 == b22 ||
	   a14 == b23 || a14 == b24 || a14 == b25 || a14 == b26 || a14 == b27 || a14 == b28 || a14 == b29 || a14 == b30 ||
	   a14 == b31 || a14 == b32 || a14 == b33 || a14 == b34 || a14 == b35 || a14 == b36)
	{ a14 = Random(91); }
	else { b14 = a14;	Form3->Memo1->Lines->Add(b14); }

   //a15
	if(a15 == b16 || a15 == b17 || a15 == b18 || a15 == b19 || a15 == b20 || a15 == b21 || a15 == b22 || a15 == b23 ||
	   a15 == b24 || a15 == b25 || a15 == b26 || a15 == b27 || a15 == b28 || a15 == b29 || a15 == b30 || a15 == b31 ||
	   a15 == b32 || a15 == b33 || a15 == b34 || a15 == b35 || a15 == b36)
	{ a15 = Random(91); }
	else { b15 = a15;	Form3->Memo1->Lines->Add(b15); }

   //a16
	if(a16 == b17 || a16 == b18 || a16 == b19 || a16 == b20 || a16 == b21 || a16 == b22 || a16 == b23 || a16 == b24 ||
	   a16 == b25  || a16 == b26 || a16 == b27 || a16 == b28 || a16 == b29 || a16 == b30 || a16 == b31 || a16 == b32 ||
	   a16 == b33 || a16 == b34 || a16 == b35 || a16 == b36)
	{ a16 = Random(91); }
	else { b16 = a16;	Form3->Memo1->Lines->Add(b16); }

   //a17
	if(a17 == b18 || a17 == b19 || a17 == b20 || a17 == b21 || a17 == b22 || a17 == b23 || a17 == b24 || a17 == b25 ||
	   a17 == b26 || a17 == b27 || a17 == b28 || a17 == b29 || a17 == b30 || a17 == b31 || a17 == b32 || a17 == b33 ||
	   a17 == b34 || a17 == b35 || a17 == b36)
	{ a17 = Random(91); }
	else { b17 = a17;	Form3->Memo1->Lines->Add(b17); }

   //a18
	if(a18 == b19 || a18 == b20 || a18 == b21 || a18 == b22 || a18 == b23 || a18 == b24 || a18 == b25 || a18 == b26 ||
	   a18 == b27 || a18 == b28 || a18 == b29 || a18 == b30 || a18 == b31 || a18 == b32 || a18 == b33 || a18 == b34 ||
	   a18 == b35 || a18 == b36)
	{ a18 = Random(91); }
	else { b18 = a18;	Form3->Memo1->Lines->Add(b18); }

   //a19
	if(a19 == b20 || a19 == b21 || a19 == b22 || a19 == b23 || a19 == b24 || a19 == b25 || a19 == b26 || a19 == b27 ||
	   a19 == b28 || a19 == b29 || a19 == b30 || a19 == b31 || a19 == b32 || a19 == b33 || a19 == b34 || a19 == b35 ||
	   a19 == b36)
	{ a19 = Random(91); }
	else { b19 = a19;	Form3->Memo1->Lines->Add(b19); }

   //a20
	if(a20 == b21 || a20 == b22 || a20 == b23 || a20 == b24 || a20 == b25 || a20 == b26 || a20 == b27 || a20 == b28 ||
	   a20 == b29 || a20 == b30 || a20 == b31 || a20 == b32 || a20 == b33 || a20 == b34 || a20 == b35 || a20 == b36)
	{ a20 = Random(91); }
	else { b20 = a20;	Form3->Memo1->Lines->Add(b20); }

   //a21
	if(a21 == b22 || a21 == b23 || a21 == b24 || a21 == b25 || a21 == b26 || a21 == b27 || a21 == b28 || a21 == b29 ||
	   a21 == b30 || a21 == b31 || a21 == b32 || a21 == b33 || a21 == b34 || a21 == b35 || a21 == b36)
	{ a21 = Random(91); }
	else { b21 = a21;	Form3->Memo1->Lines->Add(b21); }

   //a22
	if(a22 == b23 || a22 == b24 || a22 == b25 || a22 == b26 || a22 == b27 || a22 == b28 || a22 == b29 || a22 == b30 ||
	   a22 == b31 || a22 == b32 || a22 == b33 || a22 == b34 || a22 == b35 || a22 == b36)
	{ a22 = Random(91); }
	else { b22 = a22;	Form3->Memo1->Lines->Add(b22); }

   //a23
	if(a23 == b24 || a23 == b25 || a23 == b26 || a23 == b27 || a23 == b28 || a23 == b29 || a23 == b30 || a23 == b31 ||
	   a23 == b32 || a23 == b33 || a23 == b34 || a23 == b35 || a23 == b36)
	{ a23 = Random(91); }
	else { b23 = a23;	Form3->Memo1->Lines->Add(b23); }

   //a24
	if(a24 == b25 || a24 == b26 || a24 == b27 || a24 == b28 || a24 == b29 || a24 == b30 || a24 == b31 || a24 == b32 ||
	   a24 == b33 || a24 == b34 || a24 == b35 || a24 == b36)
	{ a24 = Random(91); }
	else { b24 = a24;	Form3->Memo1->Lines->Add(b24); }

   //a25
	if(a25 == b26 || a25 == b27 || a25 == b28 || a25 == b29 || a25 == b30 || a25 == b31 || a25 == b32 || a25 == b33 ||
	   a25 == b34 || a25 == b35 || a25 == b36)
	{ a25 = Random(91); }
	else { b25 = a25;	Form3->Memo1->Lines->Add(b25); }

   //a26
	if(a26 == b27 || a26 == b28 || a26 == b29 || a26 == b30 || a26 == b31 || a26 == b32 || a26 == b33 || a26 == b34 ||
	   a26 == b35 || a26 == b36)
	{ a26 = Random(91); }
	else { b26 = a26;	Form3->Memo1->Lines->Add(b26); }

   //a27
	if(a27 == b28 || a27 == b29 || a27 == b30 || a27 == b31 || a27 == b32 || a27 == b33 || a27 == b34 || a27 == b35 ||
	   a27 == b36)
	{ a27 = Random(91); }
	else { b27 = a27;	Form3->Memo1->Lines->Add(b27); }

   //a28
	if(a28 == b29 || a28 == b30 || a28 == b31 || a28 == b32 || a28 == b33 || a28 == b34 || a28 == b35 || a28 == b36)
	{ a28 = Random(91); }
	else { b28 = a28;	Form3->Memo1->Lines->Add(b28); }

   //a29
	if(a29 == b30 || a29 == b31 || a29 == b32 || a29 == b33 || a29 == b34 || a29 == b35 || a29 == b36)
	{ a29 = Random(91); }
	else { b29 = a29;	Form3->Memo1->Lines->Add(b29); }

   //a30
	if(a30 == b31 || a30 == b32 || a30 == b33 || a30 == b34 || a30 == b35 || a30 == b36)
	{ a30 = Random(91); }
	else { b30 = a30;	Form3->Memo1->Lines->Add(b30); }

   //a31
	if(a31 == b32 || a31 == b33 || a31 == b34 || a31 == b35 || a31 == b36)
	{ a31 = Random(91); }
	else { b31 = a31;	Form3->Memo1->Lines->Add(b31); }

   //a32
	if(a32 == b33 || a32 == b34 || a32 == b35 || a32 == b36)
	{ a32 = Random(91); }
	else { b32 = a32;	Form3->Memo1->Lines->Add(b32); }

   //a33
	if(a33 == b34 || a33 == b35 || a33 == b36)
	{ a33 = Random(91); }
	else { b33 = a33;	Form3->Memo1->Lines->Add(b33); }

   //a34
	if(a34 == b35 || a34 == b36)
	{ a34 = Random(91); }
	else { b34 = a34;	Form3->Memo1->Lines->Add(b34); }

   //a35
	if(a35 == b36)
	{ a35 = Random(91); }
	else { b35 = a35;	Form3->Memo1->Lines->Add(b35); }
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//���������� ��������� ��������� ��� �������� � ����������������................
void POSITION()
{
//Loading (label).............................
	Form1->Loading->Position->X = Form1->Width / 2 - Form1->Loading->Width / 2;
	Form1->Loading->Position->Y = Form1->AnimalsHome->Position->Y + Form1->AnimalsHome->Height - Form1->Loading->Height - 4; //������������� �������� ���� ���� ������ ������� Rectangle (AnimalsHome)

//������ (Animal1)..................
	//���������������:
	Form1->Animal1->Position->X = Form1->Width / 2 + Form1->Width / 5; // ����� �� 5 - ���������� �� ������
	Form1->Animal1->Position->Y = Form1->Height - Form1->Animal1->Height;

//��������..........................
	//��������������� (CapBtn1):
	int a = Form1->Width / 2; //�������� 50% ������ ������
	Form1->CapBtn1->Position->X = Form1->Width / 2 - a / 2; //�������� 1/4 ������ ������
	Form1->CapBtn1->Position->Y = Form1->Height - Form1->CapBtn1->Height - 5;
	//���������� ���������:
	CapBtnX1 = Form1->CapBtn1->Position->X;
	F1_j14 = Form1->CapBtn1->Position->X;

//1�� �����.........................
	//���������������:
	Form1->Sphere1->Position->X = Form1->Width / 20;
	Form1->Sphere1->Position->Y = Form1->Height - 150;

	//���������� ���������:
	SphereY1 = Form1->Sphere1->Position->Y;
	i1 = Form1->Sphere1->Position->Y;

//2�� �����.........................
	//���������������:
	Form1->Sphere2->Position->X = Form1->CapBtn1->Position->X + 75; //������������� �� ����������������� CapBtn1, ������� ��� ��������
	Form1->Sphere2->Position->Y = Form1->Height + 10; //�.�. ��� �� ������� ��� �� �� ��� �����

	//���������� ���������:
	SphereY2 = Form1->Sphere2->Position->Y;
	i2 = Form1->Sphere2->Position->Y;

//3�� �����.........................
	//���������������:
	Form1->Sphere3->Position->X = Form1->Width / 2 + 15;
	Form1->Sphere3->Position->Y = Form1->Height + 50;

	//���������� ���������:
	SphereY3 = Form1->Sphere3->Position->Y;
	i3 = Form1->Sphere3->Position->Y;

//4�� �����.........................
	//���������������:
	Form1->Sphere4->Position->X = Form1->Width - 76; //38 - ������ ������ 38+38 = 76
	Form1->Sphere4->Position->Y = Form1->Height - 76;

	//���������� ���������:
	SphereY4 = Form1->Sphere4->Position->Y;
	i4 = Form1->Sphere4->Position->Y;

//5�� �����.........................
	//���������� ����� �� �����
	//������������ �������� Sphere5, ����������� �� �������� (CapBtn1)
	Form1->Sphere5->Position->X = Form1->CapBtn1->Position->X + 12; //12 - �������� �� 25, ��� 25 - �������� ������� ������
	Form1->Sphere5->Position->Y = Form1->Height - Form1->Sphere5->Height - 5 - Form1->CapBtn1->Height - 10;

	//���������� ���������:
	SphereY5 = Form1->Sphere5->Position->Y;
	SphereX5 = Form1->Sphere5->Position->X;

	i7 = Form1->Sphere5->Position->Y; //��������� ���������� ��� "������"
	j7 = Form1->Sphere5->Position->X; //��������� ���������� ��� ������������ ���� / �����

//SpherehardTesting �����.........................
	//���������� ����� �� �����
	//������������ �������� SphereHardTesting, ����������� �� �������� (CapBtn1)
	Form1->SphereHardTesting->Position->X = Form1->CapBtn1->Position->X + 12; //12 - �������� �� 25, ��� 25 - �������� ������� ������
	Form1->SphereHardTesting->Position->Y = Form1->Height - Form1->SphereHardTesting->Height - 5 - Form1->CapBtn1->Height; //��������� ������, ��� �� ����� ��� ���� ����

	//���������� ���������:
	SphereHardTestingY1 = Form1->SphereHardTesting->Position->Y;
	SphereHardTestingX1 = Form1->SphereHardTesting->Position->X;

	F1_i13 = Form1->SphereHardTesting->Position->Y; //��������� ���������� ��� "������"
	F1_j13 = Form1->SphereHardTesting->Position->X; //��������� ���������� ��� ������������ ���� / �����

//1�� ������........................
	//���������������:
	Form1->Leaflet1->Position->X = Form1->Width - 145;
	Form1->Leaflet1->Position->Y = -15;	//�.�. ������ ������� ���������� �� �� ����� ����� ��� �� � �����

	//���������� ���������:
	LeafletY1 = Form1->Leaflet1->Position->Y;
	LeafletX1 = Form1->Leaflet1->Position->X;
	i5 = Form1->Leaflet1->Position->Y; //��� �������
	j5 = Form1->Leaflet1->Position->X;; //��� ������������ ���� / �����

//2�� ������........................
	//���������������:
	Form1->Leaflet2->Position->X = Form1->Width - 90;
	Form1->Leaflet2->Position->Y = Form1->Height / 2 - 70;

	//���������� ���������:
	LeafletY2 = Form1->Leaflet2->Position->Y;
	LeafletX2 = Form1->Leaflet2->Position->X;
	i6 = Form1->Leaflet2->Position->Y; //��� �������
	j6 = Form1->Leaflet2->Position->X;; //��� ������������ ���� / �����

//�������� (HelpFing)...............
	//���������������:
	Form1->HelpFing->Position->X = Form1->Width / 2 - Form1->HelpFing->Width / 2; //��������� ������ ����� �� �����������
	Form1->HelpFing->Position->Y = Form1->Height / 2 - Form1->HelpFing->Height / 2; //��������� ������ ����� �� ���������

	//���������� ���������:
	HelpFingY1 = Form1->HelpFing->Position->Y;
	HelpFingX1 = Form1->HelpFing->Position->X;
	i8 = Form1->HelpFing->Position->Y; //��� �������� �����/����
	j8 = Form1->HelpFing->Position->X; //��� �������� ���� / �����

//��������� �����, ����, �����, � ����� � ���� �������
	Form1->ArrowUp->Position->X = Form1->Width / 2 - Form1->ArrowUp->Width / 2;
	Form1->ArrowUp->Position->Y = Form1->AnimalsHome->Position->Y - 24; //-24 - ������
	Form1->ZoneArrowUp->Position->X = Form1->Width / 2 - Form1->ZoneArrowUp->Width / 2;
	Form1->ZoneArrowUp->Position->Y = Form1->AnimalsHome->Position->Y - Form1->ZoneArrowUp->Height;

	Form1->ArrowDown->Position->X = Form1->Width / 2 - Form1->ArrowDown->Width / 2;
	Form1->ArrowDown->Position->Y = Form1->AnimalsHome->Position->Y + Form1->AnimalsHome->Height + 4; //+4 - ������
	Form1->ZoneArrowDown->Position->X = Form1->Width / 2 - Form1->ZoneArrowDown->Width / 2;
	Form1->ZoneArrowDown->Position->Y = Form1->AnimalsHome->Position->Y + Form1->AnimalsHome->Height;

	Form1->ArrowLeft->Position->X = Form1->AnimalsHome->Position->X - Form1->ArrowLeft->Width - 24; //24 - ���������
	Form1->ArrowLeft->Position->Y = Form1->Height / 2 - Form1->ArrowLeft->Height / 2;
	Form1->ZoneArrowLeft->Position->X = Form1->AnimalsHome->Position->X - Form1->ZoneArrowLeft->Width - 14; //-14 - ������
	Form1->ZoneArrowLeft->Position->Y = Form1->Height / 2 - Form1->ZoneArrowLeft->Height / 2;

	Form1->ArrowRight->Position->X = Form1->AnimalsHome->Position->X + Form1->AnimalsHome->Width + 24;
	Form1->ArrowRight->Position->Y = Form1->Height / 2 - Form1->ArrowRight->Height / 2;
	Form1->ZoneArrowRight->Position->X = Form1->AnimalsHome->Position->X + Form1->AnimalsHome->Width + Form1->ZoneArrowRight->Width / 2 - 4; //���������
	Form1->ZoneArrowRight->Position->Y = Form1->Height / 2 - Form1->ZoneArrowRight->Height / 2;
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//�-��� ��������������� "��������" Rectangle's Animals, wild... �.�.�...........
void POSITION_RECTANGLES()
{
//AnimalsHome
	//���������������:
	Form1->AnimalsHome->Width = Form1->Width / 2 + Form1->Width / 10;
	Form1->AnimalsHome->Height = Form1->Height / 2 + Form1->Height / 4;

//AnimalsWild
	//���������������:
	Form1->AnimalsWild->Width = Form1->Width / 2 + Form1->Width / 10;
	Form1->AnimalsWild->Height = Form1->Height / 2 + Form1->Height / 4;

//AnimalsAir
	//���������������:
	Form1->AnimalsAir->Width = Form1->Width / 2 + Form1->Width / 10;
	Form1->AnimalsAir->Height = Form1->Height / 2 + Form1->Height / 4;

//AnimalsWater
	//���������������:
	Form1->AnimalsWater->Width = Form1->Width / 2 + Form1->Width / 10;
	Form1->AnimalsWater->Height = Form1->Height / 2 + Form1->Height / 4;

//AnimalsInsects
	//���������������:
	Form1->AnimalsInsects->Width = Form1->Width / 2 + Form1->Width / 10;
	Form1->AnimalsInsects->Height = Form1->Height / 2 + Form1->Height / 4;
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������� Error1, 2, 3, 4 �� Form3...............................................
void HIDE_ERROR()
{
	Form3->Error1->Visible = false;
	Form3->Error2->Visible = false;
	Form3->Error3->Visible = false;
	Form3->Error4->Visible = false;
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphere1StratTimer(TObject *Sender)
{
	if(i1 > -50)
	{
		i1--;
		Sphere1->Position->Y = i1;

		if(i1 <= -50)
		{
			Sphere1->Visible = false;
			TimerSphere1Strat->Enabled = false;
			TimerSphere1End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphere1EndTimer(TObject *Sender)
{
	Sphere1->Position->Y = SphereY1; 	//���������� ����������� ������ ��� 1�� ������
	i1 = SphereY1; 						//���������� ������, ��� �� ����� ���� ����� ������� �����1
	Sphere1->Visible = true;

	TimerSphere1End->Enabled = false;
	TimerSphere1Strat->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphere2StartTimer(TObject *Sender)
{
	if(i2 > -50)
	{
		i2--;
		Sphere2->Position->Y = i2;

		if(i2 <= -50)
		{
			Sphere2->Visible = false;
			TimerSphere2Start->Enabled = false;
			TimerSphere2End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphere2EndTimer(TObject *Sender)
{
	Sphere2->Position->Y = SphereY2; 	//���������� ����������� ������ ��� 2�� ������
	i2 = SphereY2; 						//���������� ������, ��� �� ����� ���� ����� ������� �����1
	Sphere2->Visible = true;

	TimerSphere2End->Enabled = false;
	TimerSphere2Start->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerLeaflet1StartTimer(TObject *Sender)
{
	if(i5 < Form1->Height + 40)
	{
		i5++;
		Leaflet1->Position->Y = i5;

		if(i5 == Form1->Height + 40) //��������� ������� � ��������
		{
			Leaflet1->Visible = false;
			TimerLeaflet1Start->Enabled = false;

			TimerLeaflet1Left->Enabled = false;
			TimerLeaflet1Right->Enabled = false;

			TimerLeaflet1End->Interval = Random(37000);
			TimerLeaflet1End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerLeaflet1EndTimer(TObject *Sender)
{
	Leaflet1->Position->Y = LeafletY1; 		//���������� ����������� ������ ��� 1�� �������
	Leaflet1->Position->X = LeafletX1; 		//���������� ����������� ������ ��� 1�� �������
	i5 = LeafletY1; 						//���������� ������, ��� �� ����� ���� ����� ������� ������1
	j5 = LeafletX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������" ������1
	Leaflet1->Visible = true;

	TimerLeaflet1End->Enabled = false;
	TimerLeaflet1Start->Enabled = true;

	TimerLeaflet1Left->Enabled = true;
	TimerLeaflet1Right->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerLeaflet1LeftTimer(TObject *Sender)
{
//������ ������� ��������1 � ����
	if(Leaflet1->Position->X -20 < Leaflet1->Position->X)
	{
		j5--;
		Leaflet1->Position->X = j5;

		if(Leaflet1->Position->X <= LeafletX1 - 20) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			TimerLeaflet1Right->Enabled = true;
			TimerLeaflet1Left->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerLeaflet1RightTimer(TObject *Sender)
{
//������ ������� ��������1 � �����
	if(Leaflet1->Position->X < LeafletX1 + 20)
	{
		j5++;
		Leaflet1->Position->X = j5;

		if(Leaflet1->Position->X >= LeafletX1 + 20) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			TimerLeaflet1Left->Enabled = true;
			TimerLeaflet1Right->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphere3StartTimer(TObject *Sender)
{
	if(i3 > -50)
	{
		i3--;
		Sphere3->Position->Y = i3;

		if(i3 <= -50)
		{
			Sphere3->Visible = false;
			TimerSphere3Start->Enabled = false;

			TimerSphere3End->Interval = Random(48000);
			TimerSphere3End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphere3EndTimer(TObject *Sender)
{
	Sphere3->Position->Y = SphereY3; 	//���������� ����������� ������ ��� 3�� ������
	i3 = SphereY3; 						//���������� ������, ��� �� ����� ���� ����� ������� �����1
	Sphere3->Visible = true;

	TimerSphere3End->Enabled = false;
	TimerSphere3Start->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphere4StartTimer(TObject *Sender)
{
	if(i4 > -40)
	{
		i4--;
		Sphere4->Position->Y = i4;

		if(i4 <= -40)
		{
			Sphere4->Visible = false;
			TimerSphere4Start->Enabled = false;

			TimerSphere4End->Interval = Random(36000);
			TimerSphere4End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphere4EndTimer(TObject *Sender)
{
	Sphere4->Position->Y = SphereY4; 	//���������� ����������� ������ ��� 2�� ������
	i4 = SphereY4; 						//���������� ������, ��� �� ����� ���� ����� ������� �����1
	Sphere4->Visible = true;

	TimerSphere4End->Enabled = false;
	TimerSphere4Start->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerLeaflet2StartTimer(TObject *Sender)
{
	if(i6 < Form1->Height + 35)
	{
		i6++;
		Leaflet2->Position->Y = i6;

		if(i6 == Form1->Height + 35) //��������� ������� � ��������
		{
			Leaflet2->Visible = false;
			TimerLeaflet2Start->Enabled = false;

			TimerLeaflet2Left->Enabled = false;
			TimerLeaflet2Right->Enabled = false;

			TimerLeaflet2End->Interval = Random(44000);
			TimerLeaflet2End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerLeaflet2EndTimer(TObject *Sender)
{
	Leaflet2->Position->Y = LeafletY2; 		//���������� ����������� ������ ��� 2�� �������
	Leaflet2->Position->X = LeafletX2; 		//���������� ����������� ������ ��� 2�� �������
	i6 = LeafletY2; 						//���������� ������, ��� �� ����� ���� ����� ������� ������2
	j6 = LeafletX2; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������" ������2
	Leaflet2->Visible = true;

	TimerLeaflet2End->Enabled = false;
	TimerLeaflet2Start->Enabled = true;

	TimerLeaflet2Left->Enabled = false;
	TimerLeaflet2Right->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerLeaflet2LeftTimer(TObject *Sender)
{
//������ ������� ��������2 � ����
	if(Leaflet2->Position->X -20 < Leaflet2->Position->X)
	{
		j6--;
		Leaflet2->Position->X = j6;

		if(Leaflet2->Position->X <= LeafletX2 - 20) //, ��� LeafletX2 - ����������� ���������� �� X ���
		{
			TimerLeaflet2Right->Enabled = true;
			TimerLeaflet2Left->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerLeaflet2RightTimer(TObject *Sender)
{
//������ ������� ��������2 � �����
	if(Leaflet2->Position->X < LeafletX2 + 20)
	{
		j6++;
		Leaflet2->Position->X = j6;

		if(Leaflet2->Position->X >= LeafletX2 + 20) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			TimerLeaflet2Left->Enabled = true;
			TimerLeaflet2Right->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphere5StartTimer(TObject *Sender)
{
	if(i7 > - 10)
	{
		i7--;
		Sphere5->Position->Y = i7;

		if(i7 <= - 10) //��������� ������� � ��������
		{
			Sphere5->Visible = false;
			TimerSphere5Start->Enabled = false;

			TimerSphere5Left->Enabled = false;
			TimerSphere5Right->Enabled = false;

//			TimerSphere5End->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphere5LeftTimer(TObject *Sender)
{
//������ �������� ������5 � ����
	if(Sphere5->Position->X - 25 < Sphere5->Position->X)
	{
		j7--;
		Sphere5->Position->X = j7;

		if(Sphere5->Position->X <= SphereX5 - 25) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			TimerSphere5Right->Enabled = true;
			TimerSphere5Left->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphere5RightTimer(TObject *Sender)
{
//������ �������� ������5 � �����
	if(Sphere5->Position->X < SphereX5 + 25)
	{
		j7++;
		Sphere5->Position->X = j7;

		if(Sphere5->Position->X >= SphereX5 + 25) //, ��� SphereX5 - ����������� ���������� �� X ���
		{
			TimerSphere5Left->Enabled = true;
			TimerSphere5Right->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CapBtn1Click(TObject *Sender)
{
	if(HelpFing->Visible == false)
	{
		//SphereInfo............................................................
		if(Sphere5->Visible == false && SphereHardTesting->Visible == false)
		{
			//������� ������ �� Form2...........
			//SphereInfo
			Form2->SphereInfo->Visible = false;
			Form2->TimerSphereInfoStart->Enabled = false;

			Form2->TimerSphereInfoLeft->Enabled = false;
			Form2->TimerSphereInfoRight->Enabled = false;

			//SphereTesting
			Form2->SphereTesting->Visible = false;
			Form2->TimerSphereTestingStart->Enabled = false;
			Form2->TimerSphereTestingWait->Enabled = false;

			Form2->TimerSphereTestingLeft->Enabled = false;
			Form2->TimerSphereTestingRight->Enabled = false;

			//��������� ����� ��� �� Form1......
			//Sphere1.......................
			Sphere5->Position->Y = SphereY5; 		//���������� ����������� ������ ��� 2�� �������
			Sphere5->Position->X = SphereX5; 		//���������� ����������� ������ ��� 2�� �������
			i7 = SphereY5; 						//���������� ������, ��� �� ����� ���� ����� ������� ������2
			j7 = SphereX5; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������" ������2
			Sphere5->Visible = true;

			TimerSphere5Start->Enabled = true;

			TimerSphere5Left->Enabled = false;
			TimerSphere5Right->Enabled = true;

			//SphereHardTesting..............
			SphereHardTesting->Position->Y = SphereHardTestingY1;
			SphereHardTesting->Position->X = SphereHardTestingX1;
			F1_i13 = SphereHardTestingY1;
			F1_j13 = SphereHardTestingX1;
			TimerSphereHardTestingWait->Enabled = true;

			TimerSphereHardTestingLeft->Enabled = true;
			TimerSphereHardTestingRight->Enabled = false;
		}
		else
		{
			//Sphere5..........................
			Sphere5->Visible = false;
			TimerSphere5Start->Enabled = false;

			TimerSphere5Left->Enabled = false;
			TimerSphere5Right->Enabled = false;

			//SphereHardTesting...............
			SphereHardTesting->Visible = false;
			TimerSphereHardTestingStart->Enabled = false;

			TimerSphereHardTestingLeft->Enabled = false;
			TimerSphereHardTestingRight->Enabled = false;
		}
	}
	else
	{
		int z;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Sphere5Click(TObject *Sender)
{
	TimerSphereSound->Enabled = true; //�������� ������� "������" ������

//������ ��������� ������
	AnimalsHome->Visible = true; //������ ������ WILD ��� ���������
	AnimalsWild->Visible = false;
	AnimalsWater->Visible = false;
	AnimalsAir->Visible = false;
	AnimalsInsects->Visible = false;

//�������� Fing......................
	TimerHelpFingLeft->Enabled = true;
	HelpFing->Visible = true;

//�������� ��������� � ���� Help2
	TimerHelp2Start->Enabled = true;

//������� SpherehardTest........................
	SphereHardTesting->Visible = false; //��� �������� ���������, ��������� ���������
	TimerSphereHardTestingWait->Enabled = false;
	TimerSphereHardTestingStart->Enabled = false;
	TimerSphereHardTestingLeft->Enabled = false;
	TimerSphereHardTestingRight->Enabled = false;

//������� Sphere5..........................
	Sphere5->Visible = false;
	TimerSphere5Start->Enabled = false;

	TimerSphere5Left->Enabled = false;
	TimerSphere5Right->Enabled = false;

//������� Arrows && Zones
	ArrowUp->Visible = false;
	ArrowDown->Visible = false;
	ArrowLeft->Visible = false;
	ArrowRight->Visible = false;

	ZoneArrowUp->Visible = false;
	ZoneArrowDown->Visible = false;
	ZoneArrowLeft->Visible = false;
	ZoneArrowRight->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormResize(TObject *Sender)
{
	POSITION(); //�������� �-���, ����������� ��������� ����������, ��� �������� � ������������ ��������������� � ����������������
	POSITION_RECTANGLES(); //�������� �-���, �������������� "�������", Rectangles, animals, wild �.�.�.
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AnimalsWildGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		//����� � ����..........................................................
		if(EventInfo.GestureID == String(sgiUp))
		{
			TimerAlbumSound->Enabled = true; //������ ��������������� �����
		}

		//������� ������, � ����................................................
		if(EventInfo.GestureID == String(sgiLeft))
		{
			if(AnimalsWild->Visible == true)
			{
				AnimalsAir->Visible = true;
				AnimalsWild->Visible = false;

				TimerAlbumSound->Enabled = true; //������ �������

				//�������� ���������
				ArrowLeft->Visible = true;
				ArrowRight->Visible = true;

				//�������� Zone
				ZoneArrowLeft->Visible = true;
				ZoneArrowRight->Visible = true;
			}
		}

		//������� �����, � �����................................................
		if(EventInfo.GestureID == String(sgiRight))
		{
			if(AnimalsWild->Visible == true)
			{
				AnimalsHome->Visible = true;
				AnimalsWild->Visible = false;

				TimerAlbumSound->Enabled = true; //������ �������

				//�������� ���������
				ArrowLeft->Visible = false;
				ArrowRight->Visible = true;

				//�������� Zone
				ZoneArrowLeft->Visible = false;
				ZoneArrowRight->Visible = true;
			}
		}

		//������� � ������......................................................
		if(EventInfo.GestureID == String(sgiDown))
		{
			Form2->Show();

			Form2->PanelHome->Visible = false;

			Form2->PanelWild->Visible = true;

			Form2->PanelAir->Visible = false;
			Form2->PanelWater->Visible = false;
			Form2->PanelInsects->Visible = false;

			Form2->ALBUM->Text = "WILD";

			//���������� �������� ���������� ���������
			Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");

			//�.�. ��������� �������� �����, �� ��������� ��� ��� � Disription
			Form2->Discription->Text = Form4->LabelArctic_foxName->Text;

			//��������� ������ �������
			Form2->TimerAnimalSoundWait->Enabled = true;

			//��������� ������ ������� �������� �� Form2
			Form2->TimerCapBtnStart->Enabled = true;

			//�������� ���������
			Form2->ArrowUp->Visible = true;
			Form2->ArrowDown->Visible = true;
			Form2->ArrowLeft->Visible = false;
			Form2->ArrowRight->Visible = true;

			//�������� Zone
			Form2->ZoneArrowUp->Visible = true;
			Form2->ZoneArrowDown->Visible = true;
			Form2->ZoneArrowLeft->Visible = false;
			Form2->ZoneArrowRight->Visible = true;
		}
	}
	else
	{
		int x;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AnimalsWaterGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		//����� � ����..........................................................
		if(EventInfo.GestureID == String(sgiUp))
		{
			TimerAlbumSound->Enabled = true; //������ ��������������� �����
		}

		//������� ������, � ����................................................
		if(EventInfo.GestureID == String(sgiLeft))
		{
			if(AnimalsWater->Visible == true)
			{
				AnimalsInsects->Visible = true;
				AnimalsWater->Visible = false;

				TimerAlbumSound->Enabled = true; //������ �������

				//�������� ���������
				ArrowLeft->Visible = true;
				ArrowRight->Visible = false;

				//�������� Zone
				ZoneArrowLeft->Visible = true;
				ZoneArrowRight->Visible = false;
			}
		}

		//������� �����, � �����................................................
		if(EventInfo.GestureID == String(sgiRight))
		{
			if(AnimalsWater->Visible == true)
			{
				AnimalsAir->Visible = true;
				AnimalsWater->Visible = false;

				TimerAlbumSound->Enabled = true; //������ �������

				//�������� ���������
				ArrowLeft->Visible = true;
				ArrowRight->Visible = true;

				//�������� Zone
				ZoneArrowLeft->Visible = true;
				ZoneArrowRight->Visible = true;
			}
		}

		if(EventInfo.GestureID == String(sgiDown)) //������� � ������
		{
			Form2->Show();

			Form2->PanelHome->Visible = false;
			Form2->PanelWild->Visible = false;
			Form2->PanelAir->Visible = false;

			Form2->PanelWater->Visible = true;

			Form2->PanelInsects->Visible = false;

			Form2->ALBUM->Text = "WATER";

			//���������� �������� ���������� ���������
			Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg");

			//�.�. ��������� �������� �������, �� ��������� ��� ��� � Disription
			Form2->Discription->Text = Form4->LabelCachalotName->Text;

			//��������� ������ �������
			Form2->TimerAnimalSoundWait->Enabled = true;

			//��������� ������ ������� �������� �� Form2
			Form2->TimerCapBtnStart->Enabled = true;

			//�������� ���������
			Form2->ArrowUp->Visible = true;
			Form2->ArrowDown->Visible = true;
			Form2->ArrowLeft->Visible = false;
			Form2->ArrowRight->Visible = true;

			//�������� Zone
			Form2->ZoneArrowUp->Visible = true;
			Form2->ZoneArrowDown->Visible = true;
			Form2->ZoneArrowLeft->Visible = false;
			Form2->ZoneArrowRight->Visible = true;
		}
	}
	else
	{
        int x;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AnimalsInsectsGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		//����� � ����..........................................................
		if(EventInfo.GestureID == String(sgiUp))
		{
			TimerAlbumSound->Enabled = true; //������ ��������������� �����
		}

		//������� ������, � ����................................................
		if(EventInfo.GestureID == String(sgiLeft))
		{
			//�� ����� �������� �� ������, �.�. ��� ��������� / �������� �������

			TimerAlbumSound->Enabled = true; //������ �������
		}

		//������� �����, � �����................................................
		if(EventInfo.GestureID == String(sgiRight))
		{
			if(AnimalsInsects->Visible == true)
			{
				AnimalsWater->Visible = true;
				AnimalsInsects->Visible = false;

				TimerAlbumSound->Enabled = true; //������ �������

				//�������� ���������
				ArrowLeft->Visible = true;
				ArrowRight->Visible = true;

				//�������� Zone
				ZoneArrowLeft->Visible = true;
				ZoneArrowRight->Visible = true;
			}
		}

		//������� � ������....
		if(EventInfo.GestureID == String(sgiDown))
		{
			Form2->Show();

			Form2->PanelHome->Visible = false;
			Form2->PanelWild->Visible = false;
			Form2->PanelAir->Visible = false;
			Form2->PanelWater->Visible = false;

			Form2->PanelInsects->Visible = true;

			Form2->ALBUM->Text = "INSECTS";

			//���������� �������� ���������� ���������
			Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg");

			//�.�. ��������� �������� �������, �� ��������� ��� ��� � Disription
			Form2->Discription->Text = Form4->LabelAntName->Text;

			//��������� ������ �������
			Form2->TimerAnimalSoundWait->Enabled = true;

			//��������� ������ ������� �������� �� Form2
			Form2->TimerCapBtnStart->Enabled = true;

			//�������� ���������
			Form2->ArrowUp->Visible = true;
			Form2->ArrowDown->Visible = true;
			Form2->ArrowLeft->Visible = false;
			Form2->ArrowRight->Visible = true;

			//�������� Zone
			Form2->ZoneArrowUp->Visible = true;
			Form2->ZoneArrowDown->Visible = true;
			Form2->ZoneArrowLeft->Visible = false;
			Form2->ZoneArrowRight->Visible = true;
		}
	}
	else
	{
        int x;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AnimalsHomeGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
		  bool &Handled)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		//����� � ����..........................................................
		if(EventInfo.GestureID == String(sgiUp))
		{
			TimerAlbumSound->Enabled = true; //������ ��������������� �����
		}

		//������� ������, � ����................................................
		if(EventInfo.GestureID == String(sgiLeft))
		{
			if(AnimalsHome->Visible == true)
			{
				AnimalsWild->Visible = true;
				AnimalsHome->Visible = false;

				TimerAlbumSound->Enabled = true; //������ �������

				//�������� ���������
				ArrowLeft->Visible = true;
				ArrowRight->Visible = true;

				//�������� Zone
				ZoneArrowLeft->Visible = true;
				ZoneArrowRight->Visible = true;
			}
		}

		//������� �����, � �����................................................
		if(EventInfo.GestureID == String(sgiRight))
		{
			//�� ����� �������� �� ������, �.�. ��� ��������� / �������� �������

			TimerAlbumSound->Enabled = true; //������ �������
		}

		//������� � ������......................................................
		if(EventInfo.GestureID == String(sgiDown))
		{
			Form2->Show();
			Form2->PanelHome->Visible = true;

			Form2->PanelWild->Visible = false;
			Form2->PanelAir->Visible = false;
			Form2->PanelWater->Visible = false;
			Form2->PanelInsects->Visible = false;

			Form2->ALBUM->Text = "HOME"; //������ ������ HOME

			//���������� �������� ���������� ���������
			Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");

			//�.�. ��������� �������� ������, �� ��������� ��� ��� � Disription
			Form2->Discription->Text = Form4->LabelBuffaloName->Text;

			//��������� ������ �������
			Form2->TimerAnimalSoundWait->Enabled = true;

			//��������� ������ ������� �������� �� Form2
			Form2->TimerCapBtnStart->Enabled = true;

			//�������� ���������
			Form2->ArrowUp->Visible = true;
			Form2->ArrowDown->Visible = true;
			Form2->ArrowLeft->Visible = false;
			Form2->ArrowRight->Visible = true;

			//�������� Zone
			Form2->ZoneArrowUp->Visible = true;
			Form2->ZoneArrowDown->Visible = true;
			Form2->ZoneArrowLeft->Visible = false;
			Form2->ZoneArrowRight->Visible = true;
		}
	}
	else
	{
		int x;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AnimalsAirGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		//����� � ����..........................................................
		if(EventInfo.GestureID == String(sgiUp))
		{
			TimerAlbumSound->Enabled = true; //������ ��������������� �����
		}

		//������� ������, � ����................................................
		if(EventInfo.GestureID == String(sgiLeft))
		{
			if(AnimalsAir->Visible == true)
			{
				AnimalsWater->Visible = true;
				AnimalsAir->Visible = false;

				TimerAlbumSound->Enabled = true; //������ �������

				//�������� ���������
				ArrowLeft->Visible = true;
				ArrowRight->Visible = true;

				//�������� Zone
				ZoneArrowLeft->Visible = true;
				ZoneArrowRight->Visible = true;
			}
		}

		//������� �����, � �����................................................
		if(EventInfo.GestureID == String(sgiRight))
		{
			if(AnimalsAir->Visible == true)
			{
				AnimalsWild->Visible = true;
				AnimalsAir->Visible = false;

				TimerAlbumSound->Enabled = true; //������ �������

				//�������� ���������
				ArrowLeft->Visible = true;
				ArrowRight->Visible = true;

				//�������� Zone
				ZoneArrowLeft->Visible = true;
				ZoneArrowRight->Visible = true;
			}
		}

		if(EventInfo.GestureID == String(sgiDown)) //������� � ������
		{
			Form2->Show();

			Form2->PanelHome->Visible = false;
			Form2->PanelWild->Visible = false;

			Form2->PanelAir->Visible = true;

			Form2->PanelWater->Visible = false;
			Form2->PanelInsects->Visible = false;

			Form2->ALBUM->Text = "AIR";

			//���������� �������� ���������� ���������
			Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg");

			//�.�. ��������� �������� ���������, �� ��������� ��� ��� � Disription
			Form2->Discription->Text = Form4->LabelAlbatrossName->Text;

			//��������� ������ �������
			Form2->TimerAnimalSoundWait->Enabled = true;

			//�������� ���������
			Form2->ArrowUp->Visible = true;
			Form2->ArrowDown->Visible = true;
			Form2->ArrowLeft->Visible = false;
			Form2->ArrowRight->Visible = true;

			//�������� Zone
			Form2->ZoneArrowUp->Visible = true;
			Form2->ZoneArrowDown->Visible = true;
			Form2->ZoneArrowLeft->Visible = false;
			Form2->ZoneArrowRight->Visible = true;
		}
	}
	else
	{
		int x;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHelpFingRightTimer(TObject *Sender)
{
//������ �������� ��������� (HelpFing) � �����
	if(HelpFing->Position->X < Form1->Width + 50)
	{
		if(HelpFing->Position->X >= Form1->Width - Form1->Width / 3)
		{
			AnimalsHome->Visible = true;

			AnimalsWild->Visible = false;
			AnimalsWater->Visible = false;
			AnimalsAir->Visible = false;
			AnimalsInsects->Visible = false;
		}

		j8++; j8++; //�������� + 2� �� �������
		HelpFing->Position->X = j8;

		if(HelpFing->Position->X >= Form1->Width + 50) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			HelpFing->Visible = false;

			HelpFing->Position->Y = HelpFingY1; 		//���������� ����������� X ���������� ��� HelpFing
			HelpFing->Position->X = HelpFingX1; 		//���������� ����������� Y ���������� ��� HelpFing
			i8 = HelpFingY1; 						//���������� ������, ��� �� ����� ���� ����� �������/�������� HelpFing
			j8 = HelpFingX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "�������" HelpFing
			HelpFing->Visible = true;

			TimerHelp3Wait->Enabled = true; //��������� ��������� � ����� Help3

			TimerHelpFingRight->Enabled = false;
			TimerHelpStart->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHelpFingLeftTimer(TObject *Sender)
{
//������ �������� ��������� (HelpFing) � ����
	if(HelpFing->Position->X > -50)
	{
		if(HelpFing->Position->X <= Form1->Width / 3)
		{
			AnimalsHome->Visible = false;

			AnimalsWild->Visible = true; //������� ������ ������

			AnimalsWater->Visible = false;
			AnimalsAir->Visible = false;
			AnimalsInsects->Visible = false;
		}

		j8--; j8--; //�������� + 2� �� �������
		HelpFing->Position->X = j8;

		if(HelpFing->Position->X <= - 50)
		{
			HelpFing->Visible = false;

			HelpFing->Position->Y = HelpFingY1; 		//���������� ����������� X ���������� ��� HelpFing
			HelpFing->Position->X = HelpFingX1; 		//���������� ����������� Y ���������� ��� HelpFing
			i8 = HelpFingY1; 						//���������� ������, ��� �� ����� ���� ����� �������/�������� HelpFing
			j8 = HelpFingX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "�������" HelpFing
			HelpFing->Visible = true;

			TimerHelp2Wait->Enabled = true; //��������� ��������� � ���� Help2
			TimerHelp3Start->Enabled = true; //�������� ��������� � ����� Help3

			TimerHelpFingLeft->Enabled = false;
			TimerHelpFingRight->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHelpFingUpTimer(TObject *Sender)
{
//������ �������� ��������� (HelpFing) � ����
	if(i8 > -100)
	{
		i8--;
		i8--; //��� �2 ��������

		HelpFing->Position->Y = i8;

		if(i8 <= -100)
		{
			HelpFing->Visible = false;

			HelpFing->Position->Y = HelpFingY1; 		//���������� ����������� X ���������� ��� HelpFing
			HelpFing->Position->X = HelpFingX1; 		//���������� ����������� Y ���������� ��� HelpFing
			i8 = HelpFingY1; 						//���������� ������, ��� �� ����� ���� ����� �������/�������� HelpFing
			j8 = HelpFingX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "�������" HelpFing
			HelpFing->Visible = true;

			TimerHelp4Wait->Enabled = true; //��������� ��������� ������ �����
			TimerHelp5Start->Enabled = true; //�������� ��������� ������ � ���
			TimerHelpFingUp->Enabled = false;
			TimerHelpFingDown->Enabled = true;

		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::TimerHelpFingDownTimer(TObject *Sender)
{
//������ �������� ��������� (HelpFing) � ���
	if(i8 < Form1->Height +50)
	{
		if(HelpFing->Position->Y == Form1->Height - 50)
		{
			Form2->PanelHome->Visible = true;

			Form2->PanelWild->Visible = false;
			Form2->PanelAir->Visible = false;
			Form2->PanelWater->Visible = false;
			Form2->PanelInsects->Visible = false;

//			Form1->Show();
		}

		i8++;
		i8++;

		HelpFing->Position->Y = i8;

		if(i8 >= Form1->Height +50)
		{
			HelpFing->Visible = false;

			HelpFing->Position->Y = HelpFingY1; 		//���������� ����������� X ���������� ��� HelpFing
			HelpFing->Position->X = HelpFingX1; 		//���������� ����������� Y ���������� ��� HelpFing
			i8 = HelpFingY1; 						//���������� ������, ��� �� ����� ���� ����� �������/�������� HelpFing
			j8 = HelpFingX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "�������" HelpFing

			TimerHelpFingDown->Enabled = false;
			TimerHelp5Wait->Enabled = true; //��������� ��������� ������ � ���

			Form2->TimerHelpFingStart->Enabled = true;
			Form2->PanelHome->Visible = true;

			//������ ��������� �������� - ������
			Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");

			//��������� ��������� �� Form2
			Form2->ArrowUp->Visible = false;
			Form2->ArrowDown->Visible = false;
			Form2->ArrowLeft->Visible = false;
			Form2->ArrowRight->Visible = false;

			//�������� Zone
			Form2->ZoneArrowUp->Visible = false;
			Form2->ZoneArrowDown->Visible = false;
			Form2->ZoneArrowLeft->Visible = false;
			Form2->ZoneArrowRight->Visible = false;

			Form2->Show();
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MainImageRectangleGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
		  bool &Handled)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		 if(EventInfo.GestureID == String(sgiLeft)) //������� ������, � ����
		{
			if(AnimalsInsects->Visible == true)
			{
			//��� �� ����� ��������
			}

			if(AnimalsWater->Visible == true)
			{
				AnimalsInsects->Visible = true;
				AnimalsWater->Visible = false;
			}

			if(AnimalsAir->Visible == true)
			{
				AnimalsWater->Visible = true;
				AnimalsAir->Visible = false;
			}

			if(AnimalsWild->Visible == true)
			{
				AnimalsAir->Visible = true;
				AnimalsWild->Visible = false;
			}

			if(AnimalsHome->Visible == true)
			{
				AnimalsWild->Visible = true;
				AnimalsHome->Visible = false;
			}
		}

		if(EventInfo.GestureID == String(sgiRight)) //������� �����, � �����
		{
			if(AnimalsHome->Visible == true)
			{
				//��� �� ����� ��������
			}

			if(AnimalsWild->Visible == true)
			{
				AnimalsHome->Visible = true;
				AnimalsWild->Visible = false;
			}

			if(AnimalsAir->Visible == true)
			{
				AnimalsWild->Visible = true;
				AnimalsAir->Visible = false;
			}

			if(AnimalsWater->Visible == true)
			{
				AnimalsAir->Visible = true;
				AnimalsWater->Visible = false;
			}

			if(AnimalsInsects->Visible == true)
			{
				AnimalsWater->Visible = true;
				AnimalsInsects->Visible = false;
			}
		}
	}
	else
	{
		int x;
    }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormActivate(TObject *Sender)
{
	POSITION(); //�������� �-���, ����������� ��������� ����������, ��� �������� � ������������ ��������������� � ����������������
	POSITION_RECTANGLES(); //�������� �-���, �������������� "�������", Rectangles, animals, wild �.�.�.
}
//---------------------------------------------------------------------------


void __fastcall TForm1::TimerSphereHardTestingWaitTimer(TObject *Sender)
{
	TimerSphereHardTestingStart->Enabled = true;
	SphereHardTesting->Visible = true;

	TimerSphereHardTestingWait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphereHardTestingStartTimer(TObject *Sender)
{
	if(F1_i13 > - 10)
	{
		F1_i13--;
		SphereHardTesting->Position->Y = F1_i13;

		if(F1_i13 <= - 10) //��������� ������ � ��������
		{
			SphereHardTesting->Visible = false;
			TimerSphereHardTestingStart->Enabled = false;

			TimerSphereHardTestingLeft->Enabled = false;
			TimerSphereHardTestingRight->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphereHardTestingLeftTimer(TObject *Sender)
{
//������ �������� SphereHardTesting � ����
	if(SphereHardTesting->Position->X - 40 < SphereHardTesting->Position->X)
	{
		F1_j13--;
		SphereHardTesting->Position->X = F1_j13;

		if(SphereHardTesting->Position->X <= SphereHardTestingX1 - 40) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			TimerSphereHardTestingRight->Enabled = true;
			TimerSphereHardTestingLeft->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphereHardTestingRightTimer(TObject *Sender)
{
//������ �������� SphereHardTesting � �����
	if(SphereHardTesting->Position->X < SphereHardTestingX1 + 40)
	{
		F1_j13++;
		SphereHardTesting->Position->X = F1_j13;

		if(SphereHardTesting->Position->X >= SphereHardTestingX1 + 40) //, ��� SphereX5 - ����������� ���������� �� X ���
		{
			TimerSphereHardTestingLeft->Enabled = true;
			TimerSphereHardTestingRight->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHelpStartTimer(TObject *Sender)
{
//��������� HelpFing.......................................
	HelpFing->Visible = false;

//SpherehardTest...........................................
	SphereHardTesting->Visible = false; //��� �������� ���������, ��������� ���������
	TimerSphereHardTestingWait->Enabled = false;
	TimerSphereHardTestingStart->Enabled = false;
	TimerSphereHardTestingLeft->Enabled = false;
	TimerSphereHardTestingRight->Enabled = false;

	SphereHardTesting->Position->X = CapBtn1->Position->X + 5; //+5 ������
	SphereHardTesting->Position->Y = CapBtn1->Position->Y - CapBtn1->Height - 10; //-10 ������

	SphereHardTesting->Visible = true;

//Help1.....................................................
	Help1->Visible = false; //��� �������� ���������, ��������� ���������
	Help1->Position->X = SphereHardTesting->Position->X - 12; //���������� ������ �� SphereHardTesting
	Help1->Position->Y = SphereHardTesting->Position->Y - 20;
	Help1->Visible = true;

//DiscriptionHelp1.........................................
	DiscriptionHelp1->Visible = false; //��� �������� ���������, ��������� ���������
	DiscriptionHelp1->Position->X = Help1->Position->X + 45;
	DiscriptionHelp1->Position->Y = Help1->Position->Y - 25;
	DiscriptionHelp1->Visible = true;

//��������� TimerHelp1..........
	TimerHelpStart->Enabled = false;
	TimerHelpWait->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHelpWaitTimer(TObject *Sender)
{
	DiscriptionHelp1->Visible = false; //��������� �������� ���������
	SphereHardTesting->Visible = false; //��������� SphereHardTesting
	Help1->Visible = false; //��������� �������� ���������

	HelpFing->Visible = true; //�������� ��������� HelpFing

	TimerHelpFingUp->Enabled = true; //�������� ������ ��� �������� �����
	TimerHelp4Start->Enabled = true; //�������� ��������� ��� ������ �����
	TimerHelpWait->Enabled = false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::TimerHelp4StartTimer(TObject *Sender)
{
//Help4.....................................................
	Help4->Visible = false; //��� �������� ���������, ��������� ���������
	Help4->Position->X = Form1->Width / 2 - HelpFing->Width - 5; //������ ������ �� HelpFing � �����
	Help4->Position->Y = 4;
	Help4->Visible = true;

//DiscriptionHelp4.........................................
	DiscriptionHelp4->Visible = false; //��� �������� ���������, ��������� ���������
	DiscriptionHelp4->Position->X = Help4->Position->X - DiscriptionHelp4->Width; //������ �� Help4
	DiscriptionHelp4->Position->Y = 4 + Help4->Height / 2;
	DiscriptionHelp4->Visible = true;

//��������� TimerHelp4Start..........
	TimerHelp4Start->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHelp5StartTimer(TObject *Sender)
{
//Help5.....................................................
	Help5->Visible = false; //��� �������� ���������, ��������� ���������
	Help5->Position->X = Form1->Width / 2 + HelpFing->Width / 2 + 5; //������ ������ �� HelpFing � �����
	Help5->Position->Y = Form1->Height - 4 - Help5->Height;
	Help5->Visible = true;

//DiscriptionHelp5.........................................
	DiscriptionHelp5->Visible = false; //��� �������� ���������, ��������� ���������
	DiscriptionHelp5->Position->X = Help5->Position->X + Help5->Width + 4; //������ �� Help4
	DiscriptionHelp5->Position->Y = Help5->Position->Y + Help5->Height / 2 - 40 ;
	DiscriptionHelp5->Visible = true;

//��������� TimerHelp5Start..........
	TimerHelp5Start->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHelp4WaitTimer(TObject *Sender)
{
	DiscriptionHelp4->Visible = false; //��������� �������� ���������
	Help4->Visible = false; //��������� �������� ���������

	TimerHelp4Wait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHelp5WaitTimer(TObject *Sender)
{
	DiscriptionHelp5->Visible = false; //��������� �������� ���������
	Help5->Visible = false; //��������� �������� ���������

	TimerHelp5Wait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHelp2StartTimer(TObject *Sender)
{
//Help2.....................................................
	Help2->Visible = false; //��� �������� ���������, ��������� ���������
	Help2->Position->X =  4; //������ ������
	Help2->Position->Y = HelpFing->Position->Y + HelpFing->Height + 4; //��������� Y ����������, ��� �� ��� ���� � ����������� �� HelpFing
	Help2->Visible = true; //����������

//DiscriptionHelp2.........................................
	DiscriptionHelp2->Visible = false; //��� �������� ���������, ��������� ���������
	DiscriptionHelp2->Position->X =Help2->Position->X + Help2->Width / 2; //������ ��� �� �������� ������ ���� �� ����� �������
	DiscriptionHelp2->Position->Y = Help2->Position->Y + DiscriptionHelp2->Height + 4; //������ ��� �� ����� ��� ���� �������
	DiscriptionHelp2->Visible = true; //����������

//��������� TimerHelp2Start..........
	TimerHelp2Start->Enabled = false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::TimerHelp3StartTimer(TObject *Sender)
{
//Help3.....................................................
	Help3->Visible = false; //��� �������� ���������, ��������� ���������
	Help3->Position->X =  Form1->Width - Help3->Width - 4;
	Help3->Position->Y = HelpFing->Position->Y - Help3->Height - 4;
	Help3->Visible = true;

//DiscriptionHelp3.........................................
	DiscriptionHelp3->Visible = false; //��� �������� ���������, ��������� ���������
	DiscriptionHelp3->Position->X =Help3->Position->X - Help3->Width / 2;
	DiscriptionHelp3->Position->Y = Help3->Position->Y - DiscriptionHelp3->Height;
	DiscriptionHelp3->Visible = true;

//��������� TimerHelp3Start..........
	TimerHelp3Start->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::TimerHelp2WaitTimer(TObject *Sender)
{
	Help2->Visible = false;
	DiscriptionHelp2->Visible = false;

	TimerHelp2Wait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHelp3WaitTimer(TObject *Sender)
{
	Help3->Visible = false;
	DiscriptionHelp3->Visible = false;

	TimerHelp3Wait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SphereHardTestingClick(TObject *Sender)
{
	TimerSphereSound->Enabled = true; //�������� ������� "������" ������

//������� SpherehardTest........................
	SphereHardTesting->Visible = false; //��� �������� ���������, ��������� ���������
	TimerSphereHardTestingWait->Enabled = false;
	TimerSphereHardTestingStart->Enabled = false;
	TimerSphereHardTestingLeft->Enabled = false;
	TimerSphereHardTestingRight->Enabled = false;

//������� Sphere5..........................
	Sphere5->Visible = false;
	TimerSphere5Start->Enabled = false;

	TimerSphere5Left->Enabled = false;
	TimerSphere5Right->Enabled = false;

//�������� ���������� �� Form3
	Form3->TimerLeaflet1End->Enabled = true; //��� 1�� ��������
	Form3->TimerLeaflet2End->Enabled = true; //��� 2�� ��������
	Form3->TimerLeaflet3End->Enabled = true; //��� 3�� ��������

//�������� ����������� (Visible) ��������
	Form3->Image1->Visible = true;
	Form3->Image2->Visible = true;
	Form3->Image3->Visible = true;
	Form3->Image4->Visible = true;

	Loading->Visible = true;

	TimerHardTest->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerHardTestTimer(TObject *Sender)
{
//������ ������...........................
	Form2->ALBUM->Text = "HARD";
//	Form3->HT->Text = "HARD";

//�������� ������, ������� ������������ RAND() � ����������� �� ������.
	int i, t; //i - ��� for; t - ��� �������� ������ (��� �� Random(n) ��� ������ ��� ������.
	String STR = Time(); //STR - ���������� ���� AnsiString ��� �������� ������ �� ��������.
	t = StrToInt(STR.Delete(1, 6)); //����������� t - ������� ���-�� ������.

	for(i = 0; i < t; i ++)
	{
		RAND(); //�������� �-��� RAND() ������� ���, ������� �� ������ ������ ������ ������
	}

	Form3->COUNTER->Text = Form3->Memo1->Lines->Strings[0]; //������� ����� �� Random'a ��� ��������� �����
	Form3->ANIMALS->Text = Random(4);

	switch(StrToInt(Form3->COUNTER->Text))
	{

//......AIR.........................

		case 0: //BEGIN -> Albatross
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_0st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_4st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_7st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_11st(); HIDE_ERROR(); break; }
		}

		case 1: //Albatross -> Bullfinch
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_36st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_34st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_32st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_30st(); HIDE_ERROR(); break; }
		}

		case 2: //Bullfinch -> Deadlock
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_15st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_13st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_11st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_9st(); HIDE_ERROR(); break; }
		}

		case 3: //Deadlock -> Dove
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_32st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_33st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_28st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_27st(); HIDE_ERROR(); break; }
		}

		case 4: //Dove -> Duck
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_16st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_21st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_12st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_9st(); HIDE_ERROR(); break; }
		}

		case 5: //Duck -> Eagle
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_58st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_55st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_48st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_36st(); HIDE_ERROR(); break; }
		}

		case 6: //Eagle -> Falcon
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_2st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_1st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_14st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_26st(); HIDE_ERROR(); break; }
		}

		case 7: //Falcon -> Flamingo
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_87st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_86st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_84st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_66st(); HIDE_ERROR(); break; }
		}

		case 8: //Flamingo -> Goldfinch
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_67st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_60st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_52st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_46st(); HIDE_ERROR(); break; }
		}

		case 9: //Goldfinch -> Heron
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_23st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_22st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_20st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_29st(); HIDE_ERROR(); break; }
		}

		case 10: //Heron -> Jay
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_3st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_6st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_9st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_24st(); HIDE_ERROR(); break; }
		}

		case 11: //Jay -> Lark
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_57st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_58st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_59st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_60st(); HIDE_ERROR(); break; }
		}

		case 12: //Lark -> Owl
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_85st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_84st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_80st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_81st(); HIDE_ERROR(); break; }
		}

		case 13: //Owl -> Parrot
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_83st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_72st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_57st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_52st(); HIDE_ERROR(); break; }
		}

		case 14: //Parrot -> Pelican
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_7st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_10st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_3st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_5st(); HIDE_ERROR(); break; }
		}

		case 15: //Pelican -> Pheasant
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_89st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_90st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_82st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_83st(); HIDE_ERROR(); break; }
		}

		case 16: //Pheasant -> Raven
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_64st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_59st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_51st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_47st(); HIDE_ERROR(); break; }
		}

		case 17: //Raven -> Rook
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_55st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_89st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_83st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_59st(); HIDE_ERROR(); break; }
		}

		case 18: //Rook -> Seagull
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_12st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_9st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_6st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_88st(); HIDE_ERROR(); break; }
		}

		case 19: //Seagull -> Sparrow
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_21st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_20st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_17st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_13st(); HIDE_ERROR(); break; }
		}

		case 20: //Sparrow -> Stork
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_12st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_87st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_4st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_1st(); HIDE_ERROR(); break; }
		}

		case 21: //Stork -> Swallow
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_46st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_48st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_55st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_72st(); HIDE_ERROR(); break; }
		}

		case 22: //Swallow -> Titmouse
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_81st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_77st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_71st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_61st(); HIDE_ERROR(); break; }
		}

		case 23: //Titmouse -> Woodpecker
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_38st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_36st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_35st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_33st(); HIDE_ERROR(); break; }
		}

//......WATER...................................

		case 24: //Woodpecker -> Cachalot
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_34st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_38st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_53st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_67st(); HIDE_ERROR(); break; }
		}

		case 25: //Cachalot -> Crab
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_66st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_67st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_78st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_82st(); HIDE_ERROR(); break; }
		}

		case 26: //Crab -> Dolphin
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_9st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_7st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_2st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_34st(); HIDE_ERROR(); break; }
		}

		case 27: //Dolphin -> Echinoid
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_68st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_56st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_24st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_22st(); HIDE_ERROR(); break; }
		}

		case 28: //Echinoid -> Jellyfish
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_20st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_19st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_13st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_8st(); HIDE_ERROR(); break; }
		}

		case 29: //Jellyfish -> Octopus
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_77st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_78st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_86st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_85st(); HIDE_ERROR(); break; }
		}

		case 30: //Octopus -> Penguin
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_4st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_15st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_25st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_32st(); HIDE_ERROR(); break; }
		}

		case 31: //Penguin -> Perch
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_26st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_25st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_19st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_17st(); HIDE_ERROR(); break; }
		}

		case 32: //Perch -> Schyuka
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_51st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_53st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_54st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_56st(); HIDE_ERROR(); break; }
		}

		case 33: //Perch -> Sea-slope
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_1st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_8st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_10st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_12st(); HIDE_ERROR(); break; }
		}

		case 34: //Sea-slope -> Shark
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_27st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_0st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_2st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_7st(); HIDE_ERROR(); break; }
		}

		case 35: //Shark -> Snail
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_76st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_80st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_81st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_87st(); HIDE_ERROR(); break; }
		}

		case 36: //Snail -> Squid
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_8st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_11st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_21st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_28st(); HIDE_ERROR(); break; }
		}

		case 37: //Squid -> Starfish
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_61st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_64st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_67st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_69st(); HIDE_ERROR(); break; }
		}

		case 38: //Starfish -> Turtle
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_17st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_14st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_8st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_15st(); HIDE_ERROR(); break; }
		}

		case 39: //Turtle -> Walrus
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_63st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_62st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_69st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_75st(); HIDE_ERROR(); break; }
		}

//......INSECT..................................

		case 40: //Walrus -> Ant
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_79st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_82st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_87st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_90st(); HIDE_ERROR(); break; }
		}

		case 41: //Ant -> Bee
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_11st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_3st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_33st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_48st(); HIDE_ERROR(); break; }
		}

		case 42: //Bee -> Bug
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_28st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_45st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_56st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_20st(); HIDE_ERROR(); break; }
		}

		case 43: //Bug -> Bumblebee
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_71st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_65st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_58st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_55st(); HIDE_ERROR(); break; }
		}

		case 44: //Bumblebee -> Butterfly
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_60st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_73st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_74st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_80st(); HIDE_ERROR(); break; }
		}

		case 45: //Butterfly -> Dragonfly
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_59st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_61st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_64st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_71st(); HIDE_ERROR(); break; }
		}

		case 46: //Dragonfly -> Grasshopper
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_47st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_51st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_61st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_64st(); HIDE_ERROR(); break; }
		}

		case 47: //Grasshopper -> Ladybug
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_14st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_17st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_27st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_19st(); HIDE_ERROR(); break; }
		}

		case 48: //Ladybug -> Mantis
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_33st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_29st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_23st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_18st(); HIDE_ERROR(); break; }
		}

		case 49: //Mantis -> Scorpion
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_31st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_26st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_22st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_10st(); HIDE_ERROR(); break; }
		}

		case 50: //Scorpion -> Spider
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_56st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_40st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_38st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_45st(); HIDE_ERROR(); break; }
		}

		case 51: //Spider -> Tarantula
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_86st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_88st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_90st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_68st(); HIDE_ERROR(); break; }
		}

//......HOME....................................

		case 52: //Tarantula -> Buffalo
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_69st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_63st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_85st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_89st(); HIDE_ERROR(); break; }
		}

		case 53: //Buffalo -> Camel
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_74st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_75st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_79st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_63st(); HIDE_ERROR(); break; }
		}

		case 54: //Camel -> Cat
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_62st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_66st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_70st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_73st(); HIDE_ERROR(); break; }
		}

		case 55: //Cat -> Cock
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_39st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_32st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_26st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_23st(); HIDE_ERROR(); break; }
		}

		case 56: //Cock -> Cow
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_45st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_42st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_41st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_39st(); HIDE_ERROR(); break; }
		}

		case 57: //Cow -> Dog
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_75st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_76st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_68st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_70st(); HIDE_ERROR(); break; }
		}

		case 58: //Dog -> Donkey
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_6st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_5st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_37st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_48st(); HIDE_ERROR(); break; }
		}

		case 59: //Donkey -> Goat
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_29st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_28st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_30st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_43st(); HIDE_ERROR(); break; }
		}

		case 60: //Goat -> Hens
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_65st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_52st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_47st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_38st(); HIDE_ERROR(); break; }
		}

		case 61: //Hens -> Horse
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_44st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_24st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_34st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_16st(); HIDE_ERROR(); break; }
		}

		case 62: //Horse -> Pig
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_90st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_81st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_75st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_53st(); HIDE_ERROR(); break; }
		}

		case 63: //Pig -> Rabbit
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_22st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_23st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_31st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_35st(); HIDE_ERROR(); break; }
		}

		case 64: //Rabbit -> Sheep
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_43st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_46st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_45st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_50st(); HIDE_ERROR(); break; }
		}

		case 65: //Sheep -> Turkey
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_48st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_44st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_60st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_65st(); HIDE_ERROR(); break; }
		}

//......WILD....................................

		case 66: //Turkey -> Arctic-fox
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_5st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_91st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_0st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_92st(); HIDE_ERROR(); break; }
		}

		case 67: //Arctic-fox -> Bear
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_35st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_37st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_44st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_76st(); HIDE_ERROR(); break; }
		}

		case 68: //Bear -> Boar
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_50st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_54st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_62st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_58st(); HIDE_ERROR(); break; }
		}

		case 69: //Boar -> Chameleon
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_78st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_79st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_88st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_86st(); HIDE_ERROR(); break; }
		}

		case 70: //Chameleon -> Chipmunk
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_80st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_70st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_63st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_77st(); HIDE_ERROR(); break; }
		}

		case 71: //Chipmunk -> Deer
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_72st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_47st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_42st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_40st(); HIDE_ERROR(); break; }
		}

		case 72: //Deer -> Elephant
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_82st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_83st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_89st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_84st(); HIDE_ERROR(); break; }
		}

		case 73: //Elephant -> Fox
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_24st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_74st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_76st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_21st(); HIDE_ERROR(); break; }
		}

		case 74: //Fox -> Giraffe
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_52st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_50st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_44st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_42st(); HIDE_ERROR(); break; }
		}

		case 75: //Giraffe -> Hedgehog
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_42st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_71st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_18st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_25st(); HIDE_ERROR(); break; }
		}

		case 76: //Hedgehog -> Koala
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_18st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_16st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_15st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_14st(); HIDE_ERROR(); break; }
		}

		case 77: //Koala -> Lion
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_53st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_49st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_66st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_78st(); HIDE_ERROR(); break; }
		}

		case 78: //Lion -> Lynx
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_49st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_39st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_43st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_57st(); HIDE_ERROR(); break; }
		}

		case 79: //Lynx -> Marmot
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_19st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_31st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_39st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_37st(); HIDE_ERROR(); break; }
		}

		case 80: //Marmot -> Monkey
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_10st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_30st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_5st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_2st(); HIDE_ERROR(); break; }
		}

		case 81: //Monkey -> Panda
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_70st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_18st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_65st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_6st(); HIDE_ERROR(); break; }
		}

		case 82: //Panda -> Polar-bear
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_88st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_85st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_77st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_54st(); HIDE_ERROR(); break; }
		}

		case 83: //Polar-bear -> Raccoon
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_30st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_35st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_36st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_41st(); HIDE_ERROR(); break; }
		}

		case 84: //Raccoon -> Rhinoceros
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_54st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_57st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_73st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_79st(); HIDE_ERROR(); break; }
		}

		case 85: //Rhinoceros -> Snake
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_40st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_43st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_46st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_51st(); HIDE_ERROR(); break; }
		}

		case 86: //Snake -> Snow-leopard
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_84st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_12st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_16st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_0st(); HIDE_ERROR(); break; }
		}

		case 87: //Snow-leopard -> Squirrel
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_25st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_27st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_29st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_31st(); HIDE_ERROR(); break; }
		}

		case 88: //Squirrel -> Tiger
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_73st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_68st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_50st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_49st(); HIDE_ERROR(); break; }
		}

		case 89: //Tiger -> Wolf
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_37st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_41st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_49st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_62st(); HIDE_ERROR(); break; }
		}

		case 90: //Wolf -> Zebra
		{
			Form3->ANIMALS->Text = Random(4);

			if(Form3->ANIMALS->Text == "0") { HARD_41st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "1") { HARD_69st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "2") { HARD_72st(); HIDE_ERROR(); break; }
			if(Form3->ANIMALS->Text == "3") { HARD_74st(); HIDE_ERROR(); break; }
		}
	}

	Loading->Visible = false; //��������� ����������� �� ��������
	TimerHardTest->Enabled = false; //��������� ��� ������ ����������

	//�������� ������ ����� + / -
	Form3->SubtractScore->Visible = false;
	Form3->AddScore1->Visible = false;
	Form3->AddScore2->Visible = false;

	//�������� ������
	Form3->TimerAsk1->Enabled = true;

	Form3->TimerSphereQuestEnd->Enabled = true; //��� �������������� ������� �� ����� SphereQuest

	Form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerCapBtnStartTimer(TObject *Sender)
{
	TimerCapBtnEnd->Enabled = true;
	TimerCapBtnStart->Enabled = false;

	TimerCapBtnLeft->Enabled = false;
	TimerCapBtnRight->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerCapBtnRightTimer(TObject *Sender)
{
//������� �������� � �����
	if(CapBtn1->Position->X < CapBtnX1 + 1)
	{
		F1_j14++;
		CapBtn1->Position->X = F1_j14;

		if(CapBtn1->Position->X >= CapBtnX1 + 1) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			TimerCapBtnLeft->Enabled = true;
			TimerCapBtnRight->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerCapBtnLeftTimer(TObject *Sender)
{
//������� �������� � ����
	if(CapBtn1->Position->X -1 < CapBtn1->Position->X)
	{
		F1_j14--;
		CapBtn1->Position->X = F1_j14;

		if(CapBtn1->Position->X <= CapBtnX1 - 1)
		{
			TimerCapBtnRight->Enabled = true;
			TimerCapBtnLeft->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerCapBtnEndTimer(TObject *Sender)
{
	//��������������� (CapBtn1): ������������ � ������� POSITION
	int a = Form1->Width / 2; //�������� 50% ������ ������
	Form1->CapBtn1->Position->X = Form1->Width / 2 - a / 2; //�������� 1/4 ������ ������

	CapBtn1->Position->X = CapBtnX1; 		//���������� ����������� ������� X
	F1_j14 = CapBtnX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������" ������2

	TimerCapBtnEnd->Enabled = false;
	TimerCapBtnStart->Interval = Random(30000);
	TimerCapBtnStart->Enabled = true;

	TimerCapBtnRight->Enabled = false;
	TimerCapBtnLeft->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerAlbumSoundTimer(TObject *Sender)
{
	MediaPlayer1->Stop(); //������������� ������� �������

	if(AnimalsHome->Visible == true)
	{
		MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Home.mp3";
		MediaPlayer1->Play();
	}

	if(AnimalsWild->Visible == true)
	{
		MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wild.mp3";
		MediaPlayer1->Play();
	}

	if(AnimalsAir->Visible == true)
	{
		MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Air.mp3";
		MediaPlayer1->Play();
	}

	if(AnimalsWater->Visible == true)
	{
		MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Water.mp3";
		MediaPlayer1->Play();
	}

	if(AnimalsInsects->Visible == true)
	{
		MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Insects.mp3";
		MediaPlayer1->Play();
	}

	TimerAlbumSound->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerSphereSoundTimer(TObject *Sender)
{
	MediaPlayer2->Stop(); //������������� ������� �������

	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sphere.mp3";
	MediaPlayer2->Play();

	TimerSphereSound->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ArrowLeftClick(TObject *Sender)
{

	if(AnimalsWild->Visible == true)
	{
		AnimalsHome->Visible = true;
		AnimalsWild->Visible = false;

		TimerAlbumSound->Enabled = true; //������ �������

		//�������� ���������
		ArrowLeft->Visible = false;
		ArrowRight->Visible = true;

		//�������� Zone
		ZoneArrowLeft->Visible = false;
		ZoneArrowRight->Visible = true;
	}

	if(AnimalsAir->Visible == true)
	{
		AnimalsWild->Visible = true;
		AnimalsAir->Visible = false;

		TimerAlbumSound->Enabled = true; //������ �������

		//�������� ���������
		ArrowLeft->Visible = true;
		ArrowRight->Visible = true;

		//�������� Zone
		ZoneArrowLeft->Visible = true;
		ZoneArrowRight->Visible = true;
	}

	if(AnimalsWater->Visible == true)
	{
		AnimalsAir->Visible = true;
		AnimalsWater->Visible = false;

		TimerAlbumSound->Enabled = true; //������ �������

		//�������� ���������
		ArrowLeft->Visible = true;
		ArrowRight->Visible = true;

		//�������� Zone
		ZoneArrowLeft->Visible = true;
		ZoneArrowRight->Visible = true;
	}

	if(AnimalsInsects->Visible == true)
	{
		AnimalsWater->Visible = true;
		AnimalsInsects->Visible = false;

		TimerAlbumSound->Enabled = true; //������ �������

		//�������� ���������
		ArrowLeft->Visible = true;
		ArrowRight->Visible = true;

		//�������� Zone
		ZoneArrowLeft->Visible = true;
		ZoneArrowRight->Visible = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ArrowRightClick(TObject *Sender)
{
	if(AnimalsWater->Visible == true)
	{
		AnimalsInsects->Visible = true;
		AnimalsWater->Visible = false;

		TimerAlbumSound->Enabled = true; //������ �������

		//�������� ���������
		ArrowLeft->Visible = true;
		ArrowRight->Visible = false;

		//�������� Zone
		ZoneArrowLeft->Visible = true;
		ZoneArrowRight->Visible = false;
	}

	if(AnimalsAir->Visible == true)
	{
		AnimalsWater->Visible = true;
		AnimalsAir->Visible = false;

		TimerAlbumSound->Enabled = true; //������ �������

		//�������� ���������
		ArrowLeft->Visible = true;
		ArrowRight->Visible = true;

		//�������� Zone
		ZoneArrowLeft->Visible = true;
		ZoneArrowRight->Visible = true;
	}

	if(AnimalsWild->Visible == true)
	{
		AnimalsAir->Visible = true;
		AnimalsWild->Visible = false;

		TimerAlbumSound->Enabled = true; //������ �������

		//�������� ���������
		ArrowLeft->Visible = true;
		ArrowRight->Visible = true;

		//�������� Zone
		ZoneArrowLeft->Visible = true;
		ZoneArrowRight->Visible = true;
	}

	if(AnimalsHome->Visible == true)
	{
		AnimalsWild->Visible = true;
		AnimalsHome->Visible = false;

		TimerAlbumSound->Enabled = true; //������ �������

		//�������� ���������
		ArrowLeft->Visible = true;
		ArrowRight->Visible = true;

		//�������� Zone
		ZoneArrowLeft->Visible = true;
		ZoneArrowRight->Visible = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ArrowUpClick(TObject *Sender)
{
	TimerAlbumSound->Enabled = true; //������ ��������������� �����
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ArrowDownClick(TObject *Sender)
{
	if(AnimalsHome->Visible == true)
	{
		Form2->Show();
		Form2->PanelHome->Visible = true;

		Form2->PanelWild->Visible = false;
		Form2->PanelAir->Visible = false;
		Form2->PanelWater->Visible = false;
		Form2->PanelInsects->Visible = false;

		Form2->ALBUM->Text = "HOME"; //������ ������ HOME

		//���������� �������� ���������� ���������
		Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");

		//�.�. ��������� �������� ������, �� ��������� ��� ��� � Disription
		Form2->Discription->Text = Form4->LabelBuffaloName->Text;

		//��������� ������ �������
		Form2->TimerAnimalSoundWait->Enabled = true;

		//��������� ������ ������� �������� �� Form2
		Form2->TimerCapBtnStart->Enabled = true;

		//�������� ���������
		Form2->ArrowUp->Visible = true;
		Form2->ArrowDown->Visible = true;
		Form2->ArrowLeft->Visible = false;
		Form2->ArrowRight->Visible = true;

		//�������� Zone
		Form2->ZoneArrowUp->Visible = true;
		Form2->ZoneArrowDown->Visible = true;
		Form2->ZoneArrowLeft->Visible = false;
		Form2->ZoneArrowRight->Visible = true;
	}

	if(AnimalsWild->Visible == true)
	{
		Form2->Show();

		Form2->PanelHome->Visible = false;

		Form2->PanelWild->Visible = true;

		Form2->PanelAir->Visible = false;
		Form2->PanelWater->Visible = false;
		Form2->PanelInsects->Visible = false;

		Form2->ALBUM->Text = "WILD";

		//���������� �������� ���������� ���������
		Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");

		//�.�. ��������� �������� �����, �� ��������� ��� ��� � Disription
		Form2->Discription->Text = Form4->LabelArctic_foxName->Text;

		//��������� ������ �������
		Form2->TimerAnimalSoundWait->Enabled = true;

		//��������� ������ ������� �������� �� Form2
		Form2->TimerCapBtnStart->Enabled = true;

		//�������� ���������
		Form2->ArrowUp->Visible = true;
		Form2->ArrowDown->Visible = true;
		Form2->ArrowLeft->Visible = false;
		Form2->ArrowRight->Visible = true;

		//�������� Zone
		Form2->ZoneArrowUp->Visible = true;
		Form2->ZoneArrowDown->Visible = true;
		Form2->ZoneArrowLeft->Visible = false;
		Form2->ZoneArrowRight->Visible = true;
	}

	if(AnimalsAir->Visible == true)
	{
		Form2->Show();

		Form2->PanelHome->Visible = false;
		Form2->PanelWild->Visible = false;

		Form2->PanelAir->Visible = true;

		Form2->PanelWater->Visible = false;
		Form2->PanelInsects->Visible = false;

		Form2->ALBUM->Text = "AIR";

		//���������� �������� ���������� ���������
		Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg");

		//�.�. ��������� �������� ���������, �� ��������� ��� ��� � Disription
		Form2->Discription->Text = Form4->LabelAlbatrossName->Text;

		//��������� ������ �������
		Form2->TimerAnimalSoundWait->Enabled = true;

		//�������� ���������
		Form2->ArrowUp->Visible = true;
		Form2->ArrowDown->Visible = true;
		Form2->ArrowLeft->Visible = false;
		Form2->ArrowRight->Visible = true;

		//�������� Zone
		Form2->ZoneArrowUp->Visible = true;
		Form2->ZoneArrowDown->Visible = true;
		Form2->ZoneArrowLeft->Visible = false;
		Form2->ZoneArrowRight->Visible = true;
	}

	if(AnimalsWater->Visible == true)
	{
		Form2->Show();

		Form2->PanelHome->Visible = false;
		Form2->PanelWild->Visible = false;
		Form2->PanelAir->Visible = false;

		Form2->PanelWater->Visible = true;

		Form2->PanelInsects->Visible = false;

		Form2->ALBUM->Text = "WATER";

		//���������� �������� ���������� ���������
		Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg");

		//�.�. ��������� �������� �������, �� ��������� ��� ��� � Disription
		Form2->Discription->Text = Form4->LabelCachalotName->Text;

		//��������� ������ �������
		Form2->TimerAnimalSoundWait->Enabled = true;

		//��������� ������ ������� �������� �� Form2
		Form2->TimerCapBtnStart->Enabled = true;

		//�������� ���������
		Form2->ArrowUp->Visible = true;
		Form2->ArrowDown->Visible = true;
		Form2->ArrowLeft->Visible = false;
		Form2->ArrowRight->Visible = true;

		//�������� Zone
		Form2->ZoneArrowUp->Visible = true;
		Form2->ZoneArrowDown->Visible = true;
		Form2->ZoneArrowLeft->Visible = false;
		Form2->ZoneArrowRight->Visible = true;
	}

	if(AnimalsInsects->Visible == true)
	{
		Form2->Show();

		Form2->PanelHome->Visible = false;
		Form2->PanelWild->Visible = false;
		Form2->PanelAir->Visible = false;
		Form2->PanelWater->Visible = false;

		Form2->PanelInsects->Visible = true;

		Form2->ALBUM->Text = "INSECTS";

		//���������� �������� ���������� ���������
		Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg");

		//�.�. ��������� �������� �������, �� ��������� ��� ��� � Disription
		Form2->Discription->Text = Form4->LabelAntName->Text;

		//��������� ������ �������
		Form2->TimerAnimalSoundWait->Enabled = true;

		//��������� ������ ������� �������� �� Form2
		Form2->TimerCapBtnStart->Enabled = true;

		//�������� ���������
		Form2->ArrowUp->Visible = true;
		Form2->ArrowDown->Visible = true;
		Form2->ArrowLeft->Visible = false;
		Form2->ArrowRight->Visible = true;

		//�������� Zone
		Form2->ZoneArrowUp->Visible = true;
		Form2->ZoneArrowDown->Visible = true;
		Form2->ZoneArrowLeft->Visible = false;
		Form2->ZoneArrowRight->Visible = true;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Sphere1Click(TObject *Sender)
{
	TimerSphereSound->Enabled = true; //�������� ������� "������" ������

	Sphere1->Visible = false;
	TimerSphere1Strat->Enabled = false;
	TimerSphere1End->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Sphere3Click(TObject *Sender)
{
	TimerSphereSound->Enabled = true; //�������� ������� "������" ������

	Sphere3->Visible = false;
	TimerSphere3Start->Enabled = false;

	TimerSphere3End->Interval = Random(39000);
	TimerSphere3End->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Sphere4Click(TObject *Sender)
{
	TimerSphereSound->Enabled = true; //�������� ������� "������" ������

	Sphere4->Visible = false;
	TimerSphere4Start->Enabled = false;

	TimerSphere4End->Interval = Random(31000);
	TimerSphere4End->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Sphere2Click(TObject *Sender)
{
	TimerSphereSound->Enabled = true; //�������� ������� "������" ������

	Sphere2->Visible = false;
	TimerSphere2Start->Enabled = false;
	TimerSphere2End->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Form1->HelpFing->Visible = false;

	Form1->DiscriptionHelp1->Visible = false;
	Form1->Help1->Visible = false;

	Form1->DiscriptionHelp2->Visible = false;
	Form1->Help2->Visible = false;

	Form1->DiscriptionHelp3->Visible = false;
	Form1->Help3->Visible = false;

	Form1->DiscriptionHelp4->Visible = false;
	Form1->Help4->Visible = false;

	Form1->SphereHardTesting->Visible = false;
	Form1->Sphere5->Visible = false;

	Form1->Loading->Visible = false;

	Form1->ArrowLeft->Visible = false;
	Form1->ZoneArrowLeft->Visible = false;
}
//---------------------------------------------------------------------------

