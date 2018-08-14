//---------------------------------------------------------------------------

#include <fmx.h>
#include <System.IOUtils.hpp> //���������� ��� ��������������� �����
#include <System.SysUtils.hpp> //���������� ��� ��������������� �����
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h" //For Testing
#include "Unit4.h" //Resources form4, always is HIDE!

int FORM_WIDTH;  //���������� ��� �������� ������ Form2
int FORM_HEIGHT; //���������� ��� �������� ������ Form2

int HOME = 0; 	 //���������� ��� �������������� �������� ��������
int WILD = 0; 	 //���������� ��� �������������� ����� ��������
int AIR = 0; 	 //���������� ��� �������������� ��������� ��������
int WATER = 0; 	 //���������� ��� �������������� ������� ��������
int INSECTS = 0; //���������� ��� �������������� ��������� ��������

int SphereXInfo, SphereYInfo, i9, j9; //���������� ��� Info ������.
int SphereXTesting, SphereYTesting, i10, j10; //���������� ��� Testing ������.

int DescriptionY1, i11; //���������� ��� Label �������� Description.

int HelpFingX1, HelpFingY1, i12, j12; //���������� ��� ��������� "�����"

int F3_CapBtnX1, F3_j15; //��� �������� �������� CapBtn
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm2 *Form2;




//RIGHT.........................................................................
//����� � �����, �.�. ������, ��� �������� ��������
void HOME_RIGHT()
{
	if(HOME == 13)
	{
		int i;
	}
	else
	{
		HOME++;

		if(Form2->PanelHome->Visible == true)
		{
			switch(HOME)
			{
				//Camel
				case 1:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg");
					Form2->Discription->Text = Form4->LabelCamelName->Text; //������ ��� ���������
					Form2->TimerAnimalSound->Enabled = true; 				//�������� �������

					Form2->ArrowLeft->Visible = true;
					Form2->ZoneArrowLeft->Visible = true;

					break;
				}

				//Cat
				case 2:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.jpg");
					Form2->Discription->Text = Form4->LabelCatName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Cock
				case 3:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");
					Form2->Discription->Text = Form4->LabelCockName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Cow
				case 4:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.jpg");
					Form2->Discription->Text = Form4->LabelCowName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Dog
				case 5:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.jpg");
					Form2->Discription->Text = Form4->LabelDogName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Donkey
				case 6:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.jpg");
					Form2->Discription->Text = Form4->LabelDonkeyName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Goat
				case 7:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg");
					Form2->Discription->Text = Form4->LabelGoatName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Hens
				case 8:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.jpg");
					Form2->Discription->Text = Form4->LabelHensName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Horse
				case 9:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg");
					Form2->Discription->Text = Form4->LabelHorseName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Pig
				case 10:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg");
					Form2->Discription->Text = Form4->LabelPigName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Rabbit
				case 11:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.jpg");
					Form2->Discription->Text = Form4->LabelRabbitName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Sheep
				case 12:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.jpg");
					Form2->Discription->Text = Form4->LabelSheepName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowRight->Visible = true;
					Form2->ZoneArrowRight->Visible = true;

					break;
				}

				//Turkey
				case 13:
				{
					//�������� ����� ����� (������������ �� CapBtn1)............
					//������� ����� �� Form1.......
					Form1->Sphere5->Visible = false;
					Form1->TimerSphere5Start->Enabled = false;

					Form1->TimerSphere5Left->Enabled = false;
					Form1->TimerSphere5Right->Enabled = false;

					//������� DescriptionWhite/Black.....................
					Form2->DescriptionWhite->Visible = false;
					Form2->DescriptionBlack->Visible = false;
					Form2->DescriptionColor->Visible = false;
					Form2->TimerDescriptionStart->Enabled = false;

					//������� Discription
					Form2->Discription->Visible = false;

					//��������� ����� SphereTesting..............
					Form2->SphereTesting->Position->Y = SphereYTesting; 		//���������� ����������� ������
					Form2->SphereInfo->Position->X = SphereXTesting; 		//���������� ����������� ������
					i10 = SphereYTesting; 						//���������� ������, ��� �� ����� ���� ����� �������
					j10 = SphereXTesting; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������"
					Form2->TimerSphereTestingWait->Enabled = true; //��������� �������� ��� ShpereTesting

					Form2->TimerSphereTestingLeft->Enabled = true;
					Form2->TimerSphereTestingRight->Enabled = false;

					//��������� ��������, �������� �������......................
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.jpg");
					Form2->Discription->Text = Form4->LabelTurkeyName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					//������� ��������� � ����� ArrowRight (������� �����)
					Form2->ArrowRight->Visible = false;
					Form2->ZoneArrowRight->Visible = false;

					break;
				}
			}
		}
	}
}

//����� � �����, �.�. ������, ��� ����� ��������
void WILD_RIGHT()
{
	if(WILD == 24)
	{
		int i;
	}
	else
	{
		WILD++;

		if(Form2->PanelWild->Visible == true)
		{
			switch(WILD)
			{
				//Bear
				case 1:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.jpg");
					Form2->Discription->Text = Form4->LabelBearName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowLeft->Visible = true;
					Form2->ZoneArrowLeft->Visible = true;

					break;
				}

				//Boar
				case 2:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.jpg");
					Form2->Discription->Text = Form4->LabelBoarName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Chameleon
				case 3:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.jpg");
					Form2->Discription->Text = Form4->LabelChameleonName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Chipmunk
				case 4:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.jpg");
					Form2->Discription->Text = Form4->LabelChipmunkName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Deer
				case 5:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.jpg");
					Form2->Discription->Text = Form4->LabelDeerName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Elephant
				case 6:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.jpg");
					Form2->Discription->Text = Form4->LabelElephantName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Fox
				case 7:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.jpg");
					Form2->Discription->Text = Form4->LabelFoxName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Giraffe
				case 8:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.jpg");
					Form2->Discription->Text = Form4->LabelGiraffeName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Hedgehog
				case 9:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.jpg");
					Form2->Discription->Text = Form4->LabelHedgehogName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Koala
				case 10:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg");
					Form2->Discription->Text = Form4->LabelKoalaName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Lion
				case 11:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.jpg");
					Form2->Discription->Text = Form4->LabelLionName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Lynx
				case 12:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg");
					Form2->Discription->Text = Form4->LabelLynxName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Marmot
				case 13:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.jpg");
					Form2->Discription->Text = Form4->LabelMarmotName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Monkey
				case 14:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.jpg");
					Form2->Discription->Text = Form4->LabelMonkeyName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Panda
				case 15:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.jpg");
					Form2->Discription->Text = Form4->LabelPandaName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Polar-bear
				case 16:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.jpg");
					Form2->Discription->Text = Form4->LabelPolar_bearName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Raccoon
				case 17:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.jpg");
					Form2->Discription->Text = Form4->LabelRaccoonName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Rhinoceros
				case 18:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.jpg");
					Form2->Discription->Text = Form4->LabelRhinocerosName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Snake
				case 19:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.jpg");
					Form2->Discription->Text = Form4->LabelSnakeName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Snow-leopard
				case 20:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.jpg");
					Form2->Discription->Text = Form4->LabelSnow_leopardName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Squirrel
				case 21:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.jpg");
					Form2->Discription->Text = Form4->LabelSquirrelName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Tiger
				case 22:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.jpg");
					Form2->Discription->Text = Form4->LabelTigerName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Wolf
				case 23:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg");
					Form2->Discription->Text = Form4->LabelWolfName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowRight->Visible = true;
					Form2->ZoneArrowRight->Visible = true;

					break;
				}

				//Zebra
				case 24:
				{
					//�������� ����� ����� (������������ �� CapBtn1)............
					//������� ����� �� Form1.......
					Form1->Sphere5->Visible = false;
					Form1->TimerSphere5Start->Enabled = false;

					Form1->TimerSphere5Left->Enabled = false;
					Form1->TimerSphere5Right->Enabled = false;

					//������� DescriptionWhite/Black.....................
					Form2->DescriptionWhite->Visible = false;
					Form2->DescriptionBlack->Visible = false;
					Form2->DescriptionColor->Visible = false;
					Form2->TimerDescriptionStart->Enabled = false;

					//������� Discription
					Form2->Discription->Visible = false;

					//��������� ����� SphereTesting..............
					Form2->SphereTesting->Position->Y = SphereYTesting; 		//���������� ����������� ������
					Form2->SphereInfo->Position->X = SphereXTesting; 		//���������� ����������� ������
					i10 = SphereYTesting; 						//���������� ������, ��� �� ����� ���� ����� �������
					j10 = SphereXTesting; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������"
					Form2->TimerSphereTestingWait->Enabled = true; //��������� �������� ��� ShpereTesting

					Form2->TimerSphereTestingLeft->Enabled = true;
					Form2->TimerSphereTestingRight->Enabled = false;

					//��������� ��������, �������� �������......................
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.jpg");
					Form2->Discription->Text = Form4->LabelZebraName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					//������� ��������� � ����� ArrowRight (������� �����)
					Form2->ArrowRight->Visible = false;
					Form2->ZoneArrowRight->Visible = false;

					break;
				}
			}
		}
	}
}

//����� � �����, �.�. ������, ��� ��������� ��������
void AIR_RIGHT()
{
	if(AIR == 23)
	{
		int i;
	}
	else
	{
		AIR++;

		if(Form2->PanelAir->Visible == true)
		{
			switch(AIR)
			{
				//Bullfinch
				case 1:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.jpg");
					Form2->Discription->Text = Form4->LabelBullfinchName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowLeft->Visible = true;
					Form2->ZoneArrowLeft->Visible = true;

					break;
				}

				//Deadlock
				case 2:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg");
					Form2->Discription->Text = Form4->LabelDeadlockName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Dove
				case 3:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.jpg");
					Form2->Discription->Text = Form4->LabelDoveName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Duck
				case 4:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.jpg");
					Form2->Discription->Text = Form4->LabelDuckName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Eagle
				case 5:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.jpg");
					Form2->Discription->Text = Form4->LabelEagleName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Falcon
				case 6:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.jpg");
					Form2->Discription->Text = Form4->LabelFalconName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Flamingo
				case 7:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.jpg");
					Form2->Discription->Text = Form4->LabelFlamingoName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Goldfinch
				case 8:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.jpg");
					Form2->Discription->Text = Form4->LabelGoldfinchName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Heron
				case 9:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg");
					Form2->Discription->Text = Form4->LabelHeronName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Jay
				case 10:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg");
					Form2->Discription->Text = Form4->LabelJayName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Lark
				case 11:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.jpg");
					Form2->Discription->Text = Form4->LabelLarkName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Owl
				case 12:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.jpg");
					Form2->Discription->Text = Form4->LabelOwlName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Parrot
				case 13:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.jpg");
					Form2->Discription->Text = Form4->LabelParrotName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Pelican
				case 14:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.jpg");
					Form2->Discription->Text = Form4->LabelPelicanName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Pheasant
				case 15:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.jpg");
					Form2->Discription->Text = Form4->LabelPheasantName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Raven
				case 16:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.jpg");
					Form2->Discription->Text = Form4->LabelRavenName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Rook
				case 17:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.jpg");
					Form2->Discription->Text = Form4->LabelRookName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Seagull
				case 18:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.jpg");
					Form2->Discription->Text = Form4->LabelSeagullName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Sparrow
				case 19:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.jpg");
					Form2->Discription->Text = Form4->LabelSparrowName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Stork
				case 20:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.jpg");
					Form2->Discription->Text = Form4->LabelStorkName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Swallow
				case 21:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.jpg");
					Form2->Discription->Text = Form4->LabelSwallowName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Titmouse
				case 22:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.jpg");
					Form2->Discription->Text = Form4->LabelTitmouseName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowRight->Visible = true;
					Form2->ZoneArrowRight->Visible = true;

					break;
				}

				//Woodpecker
				case 23:
				{
					//�������� ����� ����� (������������ �� CapBtn1)............
					//������� ����� �� Form1.......
					Form1->Sphere5->Visible = false;
					Form1->TimerSphere5Start->Enabled = false;

					Form1->TimerSphere5Left->Enabled = false;
					Form1->TimerSphere5Right->Enabled = false;

					//������� DescriptionWhite/Black.....................
					Form2->DescriptionWhite->Visible = false;
					Form2->DescriptionBlack->Visible = false;
					Form2->DescriptionColor->Visible = false;
					Form2->TimerDescriptionStart->Enabled = false;

					//������� Discription
					Form2->Discription->Visible = false;

					//��������� ����� SphereTesting..............
					Form2->SphereTesting->Position->Y = SphereYTesting; 		//���������� ����������� ������
					Form2->SphereInfo->Position->X = SphereXTesting; 		//���������� ����������� ������
					i10 = SphereYTesting; 						//���������� ������, ��� �� ����� ���� ����� �������
					j10 = SphereXTesting; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������"
					Form2->TimerSphereTestingWait->Enabled = true; //��������� �������� ��� ShpereTesting

					Form2->TimerSphereTestingLeft->Enabled = true;
					Form2->TimerSphereTestingRight->Enabled = false;

					//��������� ��������, �������� �������......................
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.jpg");
					Form2->Discription->Text = Form4->LabelWoodpeckerName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					//������� ��������� � ����� ArrowRight (������� �����)
					Form2->ArrowRight->Visible = false;
					Form2->ZoneArrowRight->Visible = false;

					break;
				}
			}
		}
	}
}

//����� � �����, �.�. ������, ��� ������ ��������
void WATER_RIGHT()
{
	if(WATER == 15)
	{
		int i;
	}
	else
	{
		WATER++;

		if(Form2->PanelWater->Visible == true)
		{
			switch(WATER)
			{
				//Crab
				case 1:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.jpg");
					Form2->Discription->Text = Form4->LabelCrabName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowLeft->Visible = true;
					Form2->ZoneArrowLeft->Visible = true;

					break;  }

				//Dolphin
				case 2:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.jpg");
					Form2->Discription->Text = Form4->LabelDolphinName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Echinoid
				case 3:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.jpg");
					Form2->Discription->Text = Form4->LabelEchinoidName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Jellyfish
				case 4:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.jpg");
					Form2->Discription->Text = Form4->LabelJellyfishName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Octopus
				case 5:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.jpg");
					Form2->Discription->Text = Form4->LabelOctopusName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Penguin
				case 6:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.jpg");
					Form2->Discription->Text = Form4->LabelPenguinName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Perch
				case 7:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg");
					Form2->Discription->Text = Form4->LabelPerchName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Schyuka
				case 8:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.jpg");
					Form2->Discription->Text = Form4->LabelSchyukaName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Sea_slope
				case 9:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.jpg");
					Form2->Discription->Text = Form4->LabelSea_slopeName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Shark
				case 10:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg");
					Form2->Discription->Text = Form4->LabelSharkName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Snail
				case 11:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.jpg");
					Form2->Discription->Text = Form4->LabelSnailName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Squid
				case 12:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.jpg");
					Form2->Discription->Text = Form4->LabelSquidName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Starfish
				case 13:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.jpg");
					Form2->Discription->Text = Form4->LabelStarfishName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Turtle
				case 14:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.jpg");
					Form2->Discription->Text = Form4->LabelTurtleName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowRight->Visible = true;
					Form2->ZoneArrowRight->Visible = true;

					break;
				}

				//Walrus
				case 15:
				{
					//�������� ����� ����� (������������ �� CapBtn1)............
					//������� ����� �� Form1.......
					Form1->Sphere5->Visible = false;
					Form1->TimerSphere5Start->Enabled = false;

					Form1->TimerSphere5Left->Enabled = false;
					Form1->TimerSphere5Right->Enabled = false;

					//������� DescriptionWhite/Black.....................
					Form2->DescriptionWhite->Visible = false;
					Form2->DescriptionBlack->Visible = false;
					Form2->DescriptionColor->Visible = false;
					Form2->TimerDescriptionStart->Enabled = false;

					//������� Discription
					Form2->Discription->Visible = false;

					//��������� ����� SphereTesting..............
					Form2->SphereTesting->Position->Y = SphereYTesting; 		//���������� ����������� ������
					Form2->SphereInfo->Position->X = SphereXTesting; 		//���������� ����������� ������
					i10 = SphereYTesting; 						//���������� ������, ��� �� ����� ���� ����� �������
					j10 = SphereXTesting; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������"
					Form2->TimerSphereTestingWait->Enabled = true; //��������� �������� ��� ShpereTesting

					Form2->TimerSphereTestingLeft->Enabled = true;
					Form2->TimerSphereTestingRight->Enabled = false;

					//��������� ��������, �������� �������......................
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.jpg");
					Form2->Discription->Text = Form4->LabelWalrusName->Text;
					Form2->TimerAnimalSound->Enabled = true;

                    //������� ��������� � ����� ArrowRight (������� �����)
					Form2->ArrowRight->Visible = false;
					Form2->ZoneArrowRight->Visible = false;

					break;
				}
			}
		}
	}
}

//����� � �����, �.�. ������, ��� ��������� ��������
void INSECTS_RIGHT()
{
	if(INSECTS == 13)
	{
		int i;
	}
	else
	{
		INSECTS++;

		if(Form2->PanelInsects->Visible == true)
		{
			switch(INSECTS)
			{
				//Bee
				case 1:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.jpg");
					Form2->Discription->Text = Form4->LabelBeeName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowLeft->Visible = true;
					Form2->ZoneArrowLeft->Visible = true;

					break;
				}

				//Bug
				case 2:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.jpg");
					Form2->Discription->Text = Form4->LabelBugName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Bumblebee
				case 3:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumblebee.jpg");
					Form2->Discription->Text = Form4->LabelBumblebeeName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Butterfly
				case 4:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.jpg");
					Form2->Discription->Text = Form4->LabelButterflyName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Dragonfly
				case 5:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.jpg");
					Form2->Discription->Text = Form4->LabelDragonflyName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Grasshopper
				case 6:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.jpg");
					Form2->Discription->Text = Form4->LabelGrasshopperName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Ladybug
				case 7:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.jpg");
					Form2->Discription->Text = Form4->LabelLadybugName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Mantis
				case 8:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg");
					Form2->Discription->Text = Form4->LabelMantisName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Scorpion
				case 9:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.jpg");
					Form2->Discription->Text = Form4->LabelScorpionName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Spider
				case 10:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.jpg");
					Form2->Discription->Text = Form4->LabelSpiderName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowRight->Visible = true;
					Form2->ZoneArrowRight->Visible = true;

					break;
				}

				//Tarantula
				case 11:
				{
					//�������� ����� ����� (������������ �� CapBtn1)............
					//������� ����� �� Form1.......
					Form1->Sphere5->Visible = false;
					Form1->TimerSphere5Start->Enabled = false;

					Form1->TimerSphere5Left->Enabled = false;
					Form1->TimerSphere5Right->Enabled = false;

					//������� DescriptionWhite/Black.....................
					Form2->DescriptionWhite->Visible = false;
					Form2->DescriptionBlack->Visible = false;
					Form2->DescriptionColor->Visible = false;
					Form2->TimerDescriptionStart->Enabled = false;

					//������� Discription
					Form2->Discription->Visible = false;

					//��������� ����� SphereTesting..............
					Form2->SphereTesting->Position->Y = SphereYTesting; 		//���������� ����������� ������
					Form2->SphereInfo->Position->X = SphereXTesting; 		//���������� ����������� ������
					i10 = SphereYTesting; 						//���������� ������, ��� �� ����� ���� ����� �������
					j10 = SphereXTesting; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������"
					Form2->TimerSphereTestingWait->Enabled = true; //��������� �������� ��� ShpereTesting

					Form2->TimerSphereTestingLeft->Enabled = true;
					Form2->TimerSphereTestingRight->Enabled = false;

					//��������� ��������, �������� �������......................
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg");
					Form2->Discription->Text = Form4->LabelTarantulaName->Text;
					Form2->TimerAnimalSound->Enabled = true;

                    //������� ��������� � ����� ArrowRight (������� �����)
					Form2->ArrowRight->Visible = false;
					Form2->ZoneArrowRight->Visible = false;

					break;
				}
			}
		}
	}
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//LEFT..........................................................................
//����� � ����, �.�. �����, ��� �������� ��������
void HOME_LEFT()
{
	if(HOME == 0)
	{
		int i;
	}
	else
	{
		HOME--;

		if(Form2->PanelHome->Visible == true)
		{
			switch(HOME)
			{
				//Buffalo
				case 0:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");
					Form2->Discription->Text = Form4->LabelBuffaloName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					//������� ��������� � ���� ArrowLeft (������� �����)
					Form2->ArrowLeft->Visible = false;
					Form2->ZoneArrowLeft->Visible = false;

					break;
				}

				//Camel
				case 1:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg");
					Form2->Discription->Text = Form4->LabelCamelName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowLeft->Visible = true;
					Form2->ZoneArrowLeft->Visible = true;

					break;
				}

				//Cat
				case 2:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.jpg");
					Form2->Discription->Text = Form4->LabelCatName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Cock
				case 3:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");
					Form2->Discription->Text = Form4->LabelCockName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Cow
				case 4:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.jpg");
					Form2->Discription->Text = Form4->LabelCowName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Dog
				case 5:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.jpg");
					Form2->Discription->Text = Form4->LabelDogName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Donkey
				case 6:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.jpg");
					Form2->Discription->Text = Form4->LabelDonkeyName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Goat
				case 7:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.jpg");
					Form2->Discription->Text = Form4->LabelGoatName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Hens
				case 8:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.jpg");
					Form2->Discription->Text = Form4->LabelHensName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Horse
				case 9:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg");
					Form2->Discription->Text = Form4->LabelHorseName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Pig
				case 10:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg");
					Form2->Discription->Text = Form4->LabelPigName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Rabbit
				case 11:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.jpg");
					Form2->Discription->Text = Form4->LabelRabbitName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Sheep
				case 12:
				{
					Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.jpg");
					Form2->Discription->Text = Form4->LabelSheepName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowRight->Visible = true;
					Form2->ZoneArrowRight->Visible = true;

					break;
				}
			}
		}
	}
}

//����� � ����, �.�. �����, ��� ����� ��������
void WILD_LEFT()
{
	if(WILD == 0)
	{
		int i;
	}
	else
	{
		WILD--;

		if(Form2->PanelWild->Visible == true)
		{
			switch(WILD)
			{
				//Arctic-fox
				case 0:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");
					Form2->Discription->Text = Form4->LabelArctic_foxName->Text;
					Form2->TimerAnimalSound->Enabled = true;

                    //������� ��������� � ���� ArrowLeft (������� �����)
					Form2->ArrowLeft->Visible = false;
					Form2->ZoneArrowLeft->Visible = false;

					break;
				}

				//Bear
				case 1:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.jpg");
					Form2->Discription->Text = Form4->LabelBearName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowLeft->Visible = true;
					Form2->ZoneArrowLeft->Visible = true;

					break;
				}

				//Boar
				case 2:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.jpg");
					Form2->Discription->Text = Form4->LabelBoarName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Chameleon
				case 3:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.jpg");
					Form2->Discription->Text = Form4->LabelChameleonName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Chipmunk
				case 4:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.jpg");
					Form2->Discription->Text = Form4->LabelChipmunkName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Deer
				case 5:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.jpg");
					Form2->Discription->Text = Form4->LabelDeerName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Elephant
				case 6:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.jpg");
					Form2->Discription->Text = Form4->LabelElephantName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Fox
				case 7:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.jpg");
					Form2->Discription->Text = Form4->LabelFoxName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Giraffe
				case 8:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.jpg");
					Form2->Discription->Text = Form4->LabelGiraffeName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Hedgehog
				case 9:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.jpg");
					Form2->Discription->Text = Form4->LabelHedgehogName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Koala
				case 10:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.jpg");
					Form2->Discription->Text = Form4->LabelKoalaName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Lion
				case 11:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.jpg");
					Form2->Discription->Text = Form4->LabelLionName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Lynx
				case 12:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg");
					Form2->Discription->Text = Form4->LabelLynxName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Marmot
				case 13:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.jpg");
					Form2->Discription->Text = Form4->LabelMarmotName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Monkey
				case 14:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.jpg");
					Form2->Discription->Text = Form4->LabelMonkeyName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Panda
				case 15:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.jpg");
					Form2->Discription->Text = Form4->LabelPandaName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Polar-bear
				case 16:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.jpg");
					Form2->Discription->Text = Form4->LabelPolar_bearName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Raccoon
				case 17:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.jpg");
					Form2->Discription->Text = Form4->LabelRaccoonName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Rhinoceros
				case 18:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.jpg");
					Form2->Discription->Text = Form4->LabelRhinocerosName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Snake
				case 19:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.jpg");
					Form2->Discription->Text = Form4->LabelSnakeName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Snow-leopard
				case 20:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.jpg");
					Form2->Discription->Text = Form4->LabelSnow_leopardName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Squirrel
				case 21:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.jpg");
					Form2->Discription->Text = Form4->LabelSquirrelName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Tiger
				case 22:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.jpg");
					Form2->Discription->Text = Form4->LabelTigerName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Wolf
				case 23:
				{
					Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg");
					Form2->Discription->Text = Form4->LabelWolfName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowRight->Visible = true;
					Form2->ZoneArrowRight->Visible = true;

					break;
				}
			}
		}
	}
}

//����� � ����, �.�. �����, ��� ��������� ��������
void AIR_LEFT()
{
	if(AIR == 0)
	{
		int i;
	}
	else
	{
		AIR--;

		if(Form2->PanelAir->Visible == true)
		{
			switch(AIR)
			{
				//Albatross
				case 0:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg");
					Form2->Discription->Text = Form4->LabelAlbatrossName->Text;
					Form2->TimerAnimalSound->Enabled = true;

                    //������� ��������� � ���� ArrowLeft (������� �����)
					Form2->ArrowLeft->Visible = false;
					Form2->ZoneArrowLeft->Visible = false;

					break;
				}

				//Bullfinch
				case 1:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.jpg");
					Form2->Discription->Text = Form4->LabelBullfinchName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowLeft->Visible = true;
					Form2->ZoneArrowLeft->Visible = true;

					break;
				}

				//Deadlock
				case 2:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.jpg");
					Form2->Discription->Text = Form4->LabelDeadlockName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Dove
				case 3:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.jpg");
					Form2->Discription->Text = Form4->LabelDoveName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Duck
				case 4:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.jpg");
					Form2->Discription->Text = Form4->LabelDuckName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Eagle
				case 5:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.jpg");
					Form2->Discription->Text = Form4->LabelEagleName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Falcon
				case 6:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.jpg");
					Form2->Discription->Text = Form4->LabelFalconName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Flamingo
				case 7:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.jpg");
					Form2->Discription->Text = Form4->LabelFlamingoName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Goldfinch
				case 8:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.jpg");
					Form2->Discription->Text = Form4->LabelGoldfinchName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Heron
				case 9:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg");
					Form2->Discription->Text = Form4->LabelHeronName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Jay
				case 10:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.jpg");
					Form2->Discription->Text = Form4->LabelJayName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Lark
				case 11:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.jpg");
					Form2->Discription->Text = Form4->LabelLarkName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Owl
				case 12:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.jpg");
					Form2->Discription->Text = Form4->LabelOwlName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Parrot
				case 13:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.jpg");
					Form2->Discription->Text = Form4->LabelParrotName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Pelican
				case 14:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.jpg");
					Form2->Discription->Text = Form4->LabelPelicanName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Pheasant
				case 15:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.jpg");
					Form2->Discription->Text = Form4->LabelPheasantName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Raven
				case 16:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.jpg");
					Form2->Discription->Text = Form4->LabelRavenName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Rook
				case 17:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.jpg");
					Form2->Discription->Text = Form4->LabelRookName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Seagull
				case 18:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.jpg");
					Form2->Discription->Text = Form4->LabelSeagullName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Sparrow
				case 19:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.jpg");
					Form2->Discription->Text = Form4->LabelSparrowName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Stork
				case 20:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.jpg");
					Form2->Discription->Text = Form4->LabelStorkName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Swallow
				case 21:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.jpg");
					Form2->Discription->Text = Form4->LabelSwallowName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Titmouse
				case 22:
				{
					Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.jpg");
					Form2->Discription->Text = Form4->LabelTitmouseName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowRight->Visible = true;
					Form2->ZoneArrowRight->Visible = true;

					break;
				}
			}
		}
	}
}

//����� � ����, �.�. �����, ��� ������ ��������
void WATER_LEFT()
{
	if(WATER == 0)
	{
		int i;
	}
	else
	{
		WATER--;

		if(Form2->PanelWater->Visible == true)
		{
			switch(WATER)
			{
				//Cachalot
				case 0:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg");
					Form2->Discription->Text = Form4->LabelCachalotName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					//������� ��������� � ���� ArrowLeft (������� �����)
					Form2->ArrowLeft->Visible = false;
					Form2->ZoneArrowLeft->Visible = false;

					break;
				}

				//Crab
				case 1:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.jpg");
					Form2->Discription->Text = Form4->LabelCrabName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowLeft->Visible = true;
					Form2->ZoneArrowLeft->Visible = true;

					break;  }

				//Dolphin
				case 2:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.jpg");
					Form2->Discription->Text = Form4->LabelDolphinName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Echinoid
				case 3:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.jpg");
					Form2->Discription->Text = Form4->LabelEchinoidName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Jellyfish
				case 4:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.jpg");
					Form2->Discription->Text = Form4->LabelJellyfishName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Octopus
				case 5:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.jpg");
					Form2->Discription->Text = Form4->LabelOctopusName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Penguin
				case 6:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.jpg");
					Form2->Discription->Text = Form4->LabelPenguinName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Perch
				case 7:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg");
					Form2->Discription->Text = Form4->LabelPerchName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Schyuka
				case 8:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.jpg");
					Form2->Discription->Text = Form4->LabelSchyukaName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Sea_slope
				case 9:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.jpg");
					Form2->Discription->Text = Form4->LabelSea_slopeName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Shark
				case 10:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg");
					Form2->Discription->Text = Form4->LabelSharkName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Snail
				case 11:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.jpg");
					Form2->Discription->Text = Form4->LabelSnailName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Squid
				case 12:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.jpg");
					Form2->Discription->Text = Form4->LabelSquidName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Starfish
				case 13:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.jpg");
					Form2->Discription->Text = Form4->LabelStarfishName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Turtle
				case 14:
				{
					Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.jpg");
					Form2->Discription->Text = Form4->LabelTurtleName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowRight->Visible = true;
					Form2->ZoneArrowRight->Visible = true;

					break;
				}
			}
		}
	}
}

//����� � ����, �.�. �����, ��� ��������� ��������
void INSECTS_LEFT()
{
	if(INSECTS == 0)
	{
		int i;
	}
	else
	{
		INSECTS--;

		if(Form2->PanelInsects->Visible == true)
		{
			switch(INSECTS)
			{
				//Ant
				case 0:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg");
					Form2->Discription->Text = Form4->LabelAntName->Text;
					Form2->TimerAnimalSound->Enabled = true;

                    //������� ��������� � ���� ArrowLeft (������� �����)
					Form2->ArrowLeft->Visible = false;
					Form2->ZoneArrowLeft->Visible = false;

					break;
				}

				//Bee
				case 1:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.jpg");
					Form2->Discription->Text = Form4->LabelBeeName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowLeft->Visible = true;
					Form2->ZoneArrowLeft->Visible = true;

					break;
				}

				//Bug
				case 2:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.jpg");
					Form2->Discription->Text = Form4->LabelBugName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Bumblebee
				case 3:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumblebee.jpg");
					Form2->Discription->Text = Form4->LabelBumblebeeName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Butterfly
				case 4:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.jpg");
					Form2->Discription->Text = Form4->LabelButterflyName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Dragonfly
				case 5:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.jpg");
					Form2->Discription->Text = Form4->LabelDragonflyName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Grasshopper
				case 6:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.jpg");
					Form2->Discription->Text = Form4->LabelGrasshopperName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Ladybug
				case 7:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.jpg");
					Form2->Discription->Text = Form4->LabelLadybugName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Mantis
				case 8:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg");
					Form2->Discription->Text = Form4->LabelMantisName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Scorpion
				case 9:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.jpg");
					Form2->Discription->Text = Form4->LabelScorpionName->Text;
					Form2->TimerAnimalSound->Enabled = true;
					break;
				}

				//Spider
				case 10:
				{
					Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.jpg");
					Form2->Discription->Text = Form4->LabelSpiderName->Text;
					Form2->TimerAnimalSound->Enabled = true;

					Form2->ArrowRight->Visible = true;
					Form2->ZoneArrowRight->Visible = true;

					break;
				}
			}
		}
	}
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//����. ��������� ���������� ��� �������� � ����������������....................
void POSITION_FORM2()
{
//Loading (label).............................
	Form2->Loading->Position->X = Form2->Width / 2 - Form2->Loading->Width / 2;
	Form2->Loading->Position->Y = Form2->Height - Form2->Loading->Height;

//��������....................................
	//��������������� (CapBtn1):
	int a = Form2->Width / 2; //�������� 50% ������ ������
	Form2->CapBtn1->Position->X = Form2->Width / 2 - a / 2; //�������� 1/4 ������ ������
	Form2->CapBtn1->Position->Y = Form2->Height - Form2->CapBtn1->Height + 24;
	//���������� ���������:
	F3_CapBtnX1 = Form2->CapBtn1->Position->X;
	F3_j15 = Form2->CapBtn1->Position->X;

//���� ������� ��� ��������...................
	//��������������� (ZoneCapBtn):
	Form2->ZoneCapBtn->Position->X = Form2->CapBtn1->Position->X - 16;
	Form2->ZoneCapBtn->Position->Y = Form2->CapBtn1->Position->Y - 32;

//Info �����................................
	//���������� ����� �� �����
	//������������ �������� info, ����������� �� �������� (CapBtn1)
	Form2->SphereInfo->Position->X = Form2->CapBtn1->Position->X + 12; //12 - �������� �� 25, ��� 25 - �������� ������� ������
	Form2->SphereInfo->Position->Y = Form2->CapBtn1->Position->Y - 45;

	//���������� ���������:
	SphereYInfo = Form2->SphereInfo->Position->Y;
	SphereXInfo = Form2->SphereInfo->Position->X;

	i9 = Form2->SphereInfo->Position->Y; //��������� ���������� ��� "������"
	j9 = Form2->SphereInfo->Position->X; //��������� ���������� ��� ������������ ���� / �����

//Testing �����.............................
	//���������� ����� �� �����
	//������������ �������� Testing, ����������� �� �������� (CapBtn1)
	Form2->SphereTesting->Position->X = Form2->CapBtn1->Position->X + 12; //12 - �������� �� 25, ��� 25 - �������� ������� ������
	Form2->SphereTesting->Position->Y = Form2->CapBtn1->Position->Y - 45;

	//���������� ���������:
	SphereYTesting = Form2->SphereTesting->Position->Y;
	SphereXTesting = Form2->SphereTesting->Position->X;

	i10 = Form2->SphereTesting->Position->Y; //��������� ���������� ��� "������"
	j10 = Form2->SphereTesting->Position->X; //��������� ���������� ��� ������������ ���� / �����

//�������� (HelpFing).........................
	//���������������:
	Form2->HelpFing->Position->X = Form2->Width / 2 - Form2->HelpFing->Width / 2; //��������� ������ ����� �� �����������
	Form2->HelpFing->Position->Y = Form2->Height / 2 - Form2->HelpFing->Height / 2; //��������� ������ ����� �� ���������

	//���������� ���������:
	HelpFingY1 = Form2->HelpFing->Position->Y;
	HelpFingX1 = Form2->HelpFing->Position->X;
	i12 = Form2->HelpFing->Position->Y; //��� �������� �����/����
	j12 = Form2->HelpFing->Position->X; //��� �������� ���� / �����

//Label - descriptionWhite / Black.............
	//���������������:
	Form2->DescriptionWhite->Width = Form2->Width -40;
	Form2->DescriptionBlack->Width = Form2->Width -40;
	Form2->DescriptionColor->Width = Form2->Width -40;

	Form2->DescriptionWhite->Height = 210;
	Form2->DescriptionBlack->Height = 210;
	Form2->DescriptionColor->Height = 210;

	Form2->DescriptionWhite->Position->X = 20;
	Form2->DescriptionBlack->Position->X = 20;
	Form2->DescriptionColor->Position->X = 20;

	Form2->DescriptionWhite->Position->Y = Form2->Height - 50;
	Form2->DescriptionBlack->Position->Y = Form2->Height - 50;
	Form2->DescriptionColor->Position->Y = Form2->Height - 50;

	//���������� ���������:
	DescriptionY1 = Form2->DescriptionWhite->Position->Y;
	i11 = Form2->DescriptionWhite->Position->Y;

//Discription - label � ������ ���������
	Form2->Discription->Position->X = 12;
	Form2->Discription->Position->Y = 4;

//��������� �����, ����, �����, � ����� � ���� �������
	Form2->ArrowUp->Position->X = Form2->Width / 2 - Form2->ArrowUp->Width / 2;
	Form2->ArrowUp->Position->Y = 4;
	Form2->ZoneArrowUp->Position->X = Form2->Width / 2 - Form2->ZoneArrowUp->Width / 2;
	Form2->ZoneArrowUp->Position->Y = 0;

	Form2->ArrowDown->Position->X = Form2->Width / 2 - Form2->ArrowDown->Width / 2;
	Form2->ArrowDown->Position->Y = Form2->Height - Form2->ArrowDown->Height - 4;
	Form2->ZoneArrowDown->Position->X = Form2->Width / 2 - Form2->ZoneArrowDown->Width / 2;
	Form2->ZoneArrowDown->Position->Y = Form2->Height - Form2->ZoneArrowDown->Height;

	Form2->ArrowLeft->Position->X = 4;
	Form2->ArrowLeft->Position->Y = Form2->Height / 2 - Form2->ArrowLeft->Height / 2;
	Form2->ZoneArrowLeft->Position->X = 0;
	Form2->ZoneArrowLeft->Position->Y = Form2->Height / 2 - Form2->ZoneArrowLeft->Height / 2;

	Form2->ArrowRight->Position->X = Form2->Width - Form2->ArrowRight->Width - 4;
	Form2->ArrowRight->Position->Y = Form2->Height / 2 - Form2->ArrowRight->Height / 2;
	Form2->ZoneArrowRight->Position->X = Form2->Width - Form2->ZoneArrowRight->Width;
	Form2->ZoneArrowRight->Position->Y = Form2->Height / 2 - Form2->ZoneArrowRight->Height / 2;
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//������� Description, DiscriptionWhite / Black, Sound..........................
void RESET_DESCRIPTION()
{
	Form2->DescriptionWhite->Visible = false;
	Form2->DescriptionBlack->Visible = false;
	Form2->DescriptionColor->Visible = false;

	Form2->TimerDescriptionStart->Enabled = false;
	Form2->TimerDescriptionWait->Enabled = false;
	Form2->TimerDescriptionEnd->Enabled = false;

	Form2->Discription->Visible = false; //��������� ��� ���������

	//���������� ��������� ���������� �� ��������� (����������� �� POSITION_FORM2)
	Form2->DescriptionWhite->Position->X = 20;
	Form2->DescriptionBlack->Position->X = 20;
	Form2->DescriptionColor->Position->X = 20;
	Form2->DescriptionWhite->Position->Y = Form2->Height - 50;
	Form2->DescriptionBlack->Position->Y = Form2->Height - 50;
	Form2->DescriptionColor->Position->Y = Form2->Height - 50;

	Form2->MediaPlayer1->Stop(); //��������� �������

	Form2->TimerAnimalSnd->Enabled = false; //��������� ������ ������ �������� �������
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//��������� ��������� ���������� (Timer's �.�.�.)...............................
void RESET_FORM2()
{
	Form2->Loading->Visible = false; //�������� ����������� � ��������.

	Form2->TimerDescriptionStart->Enabled = false; //��������� ��� ������� ��������
	Form2->TimerDescriptionWait->Enabled = false;
	Form2->TimerDescriptionEnd->Enabled = false;

	Form2->TimerSphereTestingWait->Enabled = false; //��������� SphereTesting
	Form2->TimerSphereTestingStart->Enabled = false;
	Form2->TimerSphereTestingRight->Enabled = false;
	Form2->TimerSphereTestingLeft->Enabled = false;

	Form2->TimerSphereInfoStart->Enabled = false; //��������� SphereInfo
	Form2->TimerSphereInfoLeft->Enabled = false;
	Form2->TimerSphereInfoRight->Enabled = false;

	Form2->SphereInfo->Visible = false;
	Form2->SphereTesting->Visible = false;

	Form2->TimerCapBtnEnd->Enabled = false; //��������� �������� �������� ������ / �����
	Form2->TimerCapBtnStart->Enabled = false;
	Form2->TimerCapBtnLeft->Enabled = false;
	Form2->TimerCapBtnRight->Enabled = false;

	Form2->ArrowUp->Visible = true; //��������� ���������
	Form2->ArrowDown->Visible = true;
	Form2->ArrowLeft->Visible = false;
	Form2->ArrowRight->Visible = true;

	//�������� Zone
	Form2->ZoneArrowUp->Visible = true;
	Form2->ZoneArrowDown->Visible = true;
	Form2->ZoneArrowLeft->Visible = false;
	Form2->ZoneArrowRight->Visible = true;

	//��������� ������ "������" ������
	Form2->TimerSphereSound->Enabled = false;
}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//��������� �������� ��� ��������� Form2........................................
void RESET_PICTURES()
{
	HOME = 0;
	WILD = 0;
	AIR = 0;
	WATER = 0;
	INSECTS = 0;

	Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");
	Form2->ImageWild->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");
	Form2->ImageAir->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg");
	Form2->ImageWater->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg");
	Form2->ImageInsects->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg");
}
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
	Form2->Discription->Visible = false;
	Form2->DescriptionBlack->Visible = false;
	Form2->DescriptionColor->Visible = false;
	Form2->DescriptionWhite->Visible = false;

	Form2->Help1->Visible = false;
	Form2->DiscriptionHelp1->Visible = false;
	Form2->Help2->Visible = false;
	Form2->DiscriptionHelp2->Visible = false;
	Form2->Help3->Visible = false;
	Form2->DiscriptionHelp3->Visible = false;
	Form2->Help4->Visible = false;
	Form2->DiscriptionHelp4->Visible = false;
	Form2->Help5->Visible = false;
	Form2->DiscriptionHelp5->Visible = false;
	Form2->Help6->Visible = false;
	Form2->DiscriptionHelp6->Visible = false;

	Form2->SphereInfo->Visible = false;
	Form2->SphereTesting->Visible = false;

	Form2->ArrowLeft->Visible = false;
	Form2->ZoneArrowLeft->Visible = false;

	Form2->Loading->Visible = false;

	Form2->ALBUM->Visible = false;

    Form2->HelpFing->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormActivate(TObject *Sender)
{
	POSITION_FORM2(); //����. ��������� ��������� ��� �������� � ����������������
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
		RESET_PICTURES(); //��������� �������� ��� ��������� Form2
		RESET_DESCRIPTION(); //���������� ��������
		RESET_FORM2(); //��������� ��������� ����������
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormDeactivate(TObject *Sender)
{
		RESET_PICTURES(); //��������� �������� ��� ��������� Form2
		RESET_DESCRIPTION(); //���������� ��������
		RESET_FORM2(); //��������� ��������� ����������
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormHide(TObject *Sender)
{
		RESET_PICTURES(); //��������� �������� ��� ��������� Form2
		RESET_DESCRIPTION(); //���������� ��������
		RESET_FORM2(); //��������� ��������� ����������
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormKeyUp(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift)
{
	if(Key == vkHardwareBack)
	{
		Key = 0; //����������� ������� ������ "�����" - �� ������ ��������

		Loading->Visible = true; //�������� ����������� � ��������

		//��������� ���������
		Form2->ArrowUp->Visible = false;
		Form2->ArrowDown->Visible = false;
		Form2->ArrowLeft->Visible = false;
		Form2->ArrowRight->Visible = false;

		//��������� Zone ��� ���������
		Form2->ZoneArrowUp->Visible = false;
		Form2->ZoneArrowDown->Visible = false;
		Form2->ZoneArrowLeft->Visible = false;
		Form2->ZoneArrowRight->Visible = false;

		TimerSwypeDownWait->Enabled = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormResize(TObject *Sender)
{
	POSITION_FORM2(); //����. ��������� ��������� ��� �������� � ����������������
}
//---------------------------------------------------------------------------




void __fastcall TForm2::TimerHelp5StartTimer(TObject *Sender)
{
//Help5.....................................................
	Help5->Visible = false; //��� �������� ���������, ��������� ���������
	Help5->Position->X = Form2->Width / 2 - HelpFing->Width - 5; //������ ������ �� HelpFing � �����
	Help5->Position->Y = 4;
	Help5->Visible = true;

//DiscriptionHelp5.........................................
	DiscriptionHelp5->Visible = false; //��� �������� ���������, ��������� ���������
	DiscriptionHelp5->Position->X = Help5->Position->X - DiscriptionHelp5->Width; //������ �� Help4
	DiscriptionHelp5->Position->Y = 4 + Help5->Height / 2;
	DiscriptionHelp5->Visible = true;

//��������� TimerHelp5Start..........
	TimerHelp5Start->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerAnimalSoundWaitTimer(TObject *Sender)
{
	TimerAnimalSound->Enabled = true;

	TimerAnimalSoundWait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerAnimalSoundTimer(TObject *Sender)
{
	MediaPlayer1->Stop(); //������������� ������� �������


//INSECTS.......................................................................
	if(Form2->PanelInsects->Visible == true)
	{
		switch(INSECTS)
		{
				//Ant
				case 0: { MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sAnt.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Bee
				case 1: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBee.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Bug
				case 2: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBug.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Bumblebee
				case 3: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBumblebee.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Butterfly
				case 4: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sButterfly.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Dragonfly
				case 5: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDragonfly.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Grasshopper
				case 6: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGrasshopper.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Ladybug
				case 7: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLadybug.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Mantis
				case 8: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sMantis.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Scorpion
				case 9: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sScorpion.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Spider
				case 10: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSpider.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Tarantula
				case 11: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTarantula.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//WATER.........................................................................
	if(Form2->PanelWater->Visible == true)
	{
		switch(WATER)
		{
			//Cachalot
			case 0: { MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCachalot.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Crab
			case 1: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCrab.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Dolphin
			case 2: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDolphin.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Echinoid
			case 3: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sEchinoid.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Jellyfish
			case 4: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sJellyfish.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Octopus
			case 5: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sOctopus.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Penguin
			case 6: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPenguin.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Perch
			case 7: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPerch.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Schyuka
			case 8: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSchyuka.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Sea-slope
			case 9: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSea-slope.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Shark
			case 10: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sShark.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Snail
			case 11: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSnail.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Squid
			case 12: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSquid.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Starfish
			case 13: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sStarfish.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Turtle
			case 14: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTurtle.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Walrus
			case 15: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sWalrus.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//AIR...........................................................................
	if(Form2->PanelAir->Visible == true)
	{
		switch(AIR)
		{
				//Albatros
				case 0: { MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sAlbatross.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Bullfinch
				case 1: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBullfinch.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Deadlock
				case 2: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDeadlock.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Dove
				case 3: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDove.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Duck
				case 4: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDuck.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Eagle
				case 5: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sEagle.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Falcon
				case 6: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sFalcon.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Flamingo
				case 7: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sFlamingo.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Goldfinch
				case 8: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGoldfinch.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Heron
				case 9: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHeron.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Jay
				case 10: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sJay.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Lark
				case 11: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLark.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Owl
				case 12: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sOwl.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Parrot
				case 13: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sParrot.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Pelican
				case 14: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPelican.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Pheasant
				case 15: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPheasant.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Raven
				case 16: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRaven.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Rook
				case 17: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRook.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Seagull
				case 18: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSeagull.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Sparrow
				case 19: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSparrow.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Stork
				case 20: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sStork.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Swallow
				case 21: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSwallow.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Titmouse
				case 22: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTitmouse.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Woodpecker
				case 23: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sWoodpecker.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//WILD..........................................................................
	if(Form2->PanelWild->Visible == true)
	{
		switch(WILD)
		{
				//Arctic-fox
				case 0: { MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sArctic-fox.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Bear
				case 1: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBear.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Boar
				case 2: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBoar.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Chameleon
				case 3: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sChameleon.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Chipmunk
				case 4: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sChipmunk.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Deer
				case 5: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDeer.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Elephant
				case 6: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sElephant.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Fox
				case 7: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sFox.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Giraffe
				case 8: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGiraffe.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Hedgehog
				case 9: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHedgehog.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Koala
				case 10: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sKoala.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Lion
				case 11: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLion.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Lynx
				case 12: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sLynx.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Marmot
				case 13: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sMarmot.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Monkey
				case 14: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sMonkey.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Panda
				case 15: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPanda.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Polar-bear
				case 16: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPolar-bear.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Raccoon
				case 17: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRaccoon.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Rhinoceros
				case 18: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRhinoceros.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Snake
				case 19: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSnake.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Snow-leopard
				case 20: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSnow-leopard.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Squirrel
				case 21: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSquirrel.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Tiger
				case 22:  { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTiger.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Wolf
				case 23: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sWolf.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

				//Zebra
				case 24: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sZebra.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//HOME..........................................................................
	if(Form2->PanelHome->Visible == true)
	{
		switch(HOME)
		{
			//Buffalo
			case 0: { MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sBuffalo.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Camel
			case 1: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCamel.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Cat
			case 2: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCat.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Cock
			case 3: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCock.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Cow
			case 4: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sCow.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Dog
			case 5: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDog.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Donkey
			case 6: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sDonkey.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Goat
			case 7: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sGoat.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Hens
			case 8: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHens.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Horse
			case 9: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sHorse.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Pig
			case 10: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sPig.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Rabbit
			case 11: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sRabbit.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Sheep
			case 12: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sSheep.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }

			//Turkey
			case 13: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "sTurkey.mp3"; MediaPlayer1->Play(); TimerAnimalSnd->Enabled = true; break; }
		}
	}

	TimerAnimalSound->Enabled = false; //��������� ������
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerAnimalSndTimer(TObject *Sender)
{
	MediaPlayer1->Stop(); //������������� ������� �������


//INSECTS.......................................................................
	if(Form2->PanelInsects->Visible == true)
	{
		switch(INSECTS)
		{
				//Ant
				case 0: { MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.mp3"; MediaPlayer1->Play(); break; }

				//Bee
				case 1: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bee.mp3"; MediaPlayer1->Play(); break; }

				//Bug
				case 2: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.mp3"; MediaPlayer1->Play(); break; }

				//Bumblebee
				case 3: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumb.mp3"; MediaPlayer1->Play(); break; }

				//Butterfly
				case 4: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Butterfly.mp3"; MediaPlayer1->Play(); break; }

				//Dragonfly
				case 5: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dragonfly.mp3"; MediaPlayer1->Play(); break; }

				//Grasshopper
				case 6: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.mp3"; MediaPlayer1->Play(); break; }

				//�� ������ ������!!!
				//Ladybug
//				case 7: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.mp3"; MediaPlayer1->Play(); break; }

				//Mantis
				case 8: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.mp3"; MediaPlayer1->Play(); break; }

				//�� ������ ������!!!
				//Scorpion
//				case 9: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.mp3"; MediaPlayer1->Play(); break; }

				//Spider
				case 10: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.mp3"; MediaPlayer1->Play(); break; }

				//�� ������ ������!!!
				//Tarantula
//				case 11: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.mp3"; MediaPlayer1->Play(); break; }
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//WATER.........................................................................
	if(Form2->PanelWater->Visible == true)
	{
		switch(WATER)
		{
			//Cachalot
			case 0: { MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Crab
//			case 1: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Crab.mp3"; MediaPlayer1->Play(); break; }

			//Dolphin
			case 2: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Echinoid
//			case 3: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Echinoid.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Jellyfish
//			case 4: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Octopus
//			case 5: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.mp3"; MediaPlayer1->Play(); break; }

			//Penguin
			case 6: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Penguin.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Perch
//			case 7: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Schyuka
//			case 8: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Schyuka.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Sea-slope
//			case 9: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Shark
//			case 10: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Snail
//			case 11: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Squid
//			case 12: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Starfish
//			case 13: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.mp3"; MediaPlayer1->Play(); break; }

			//�� ������ ������!!!
			//Turtle
//			case 14: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.mp3"; MediaPlayer1->Play(); break; }

			//Walrus
			case 15: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.mp3"; MediaPlayer1->Play(); break; }
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//AIR...........................................................................
	if(Form2->PanelAir->Visible == true)
	{
		switch(AIR)
		{
				//Albatros
				case 0: { MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatros.mp3"; MediaPlayer1->Play(); break; }

				//Bullfinch
				case 1: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bullfinch.mp3"; MediaPlayer1->Play(); break; }

				//�� ������ ������!!!
				//Deadlock
//				case 2: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deadlock.mp3"; MediaPlayer1->Play(); break; }

				//Dove
				case 3: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dove.mp3"; MediaPlayer1->Play(); break; }

				//Duck
				case 4: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.mp3"; MediaPlayer1->Play(); break; }

				//Eagle
				case 5: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.mp3"; MediaPlayer1->Play(); break; }

				//Falcon
				case 6: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Falcon.mp3"; MediaPlayer1->Play(); break; }

				//Flamingo
				case 7: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.mp3"; MediaPlayer1->Play(); break; }

				//Goldfinch
				case 8: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goldfinch.mp3"; MediaPlayer1->Play(); break; }

				//Heron
				case 9: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.mp3"; MediaPlayer1->Play(); break; }

				//Jay
				case 10: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jay.mp3"; MediaPlayer1->Play(); break; }

				//Lark
				case 11: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.mp3"; MediaPlayer1->Play(); break; }

				//Owl
				case 12: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.mp3"; MediaPlayer1->Play(); break; }

				//Parrot
				case 13: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.mp3"; MediaPlayer1->Play(); break; }

				//Pelican
				case 14: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pelican.mp3"; MediaPlayer1->Play(); break; }

				//Pheasant
				case 15: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pheasant.mp3"; MediaPlayer1->Play(); break; }

				//Raven
				case 16: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raven.mp3"; MediaPlayer1->Play(); break; }

				//Rook
				case 17: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.mp3"; MediaPlayer1->Play(); break; }

				//Seagull
				case 18: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Seagull.mp3"; MediaPlayer1->Play(); break; }

				//Sparrow
				case 19: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.mp3"; MediaPlayer1->Play(); break; }

				//Stork
				case 20: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.mp3"; MediaPlayer1->Play(); break; }

				//Swallow
				case 21: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Swallow.mp3"; MediaPlayer1->Play(); break; }

				//Titmouse
				case 22: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Titmouse.mp3"; MediaPlayer1->Play(); break; }

				//Woodpecker
				case 23: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.mp3"; MediaPlayer1->Play(); break; }
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//WILD..........................................................................
	if(Form2->PanelWild->Visible == true)
	{
		switch(WILD)
		{
				//Arctic-fox
				case 0: { MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.mp3"; MediaPlayer1->Play(); break; }

				//Bear
				case 1: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bear.mp3"; MediaPlayer1->Play(); break; }

				//Boar
				case 2: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Boar.mp3"; MediaPlayer1->Play(); break; }

				//�� ������ ������!!!
				//Chameleon
//				case 3: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chameleon.mp3"; MediaPlayer1->Play(); break; }

				//Chipmunk
				case 4: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.mp3"; MediaPlayer1->Play(); break; }

				//Deer
				case 5: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Deer.mp3"; MediaPlayer1->Play(); break; }

				//Elephant
				case 6: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.mp3"; MediaPlayer1->Play(); break; }

				//Fox
				case 7: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Fox.mp3"; MediaPlayer1->Play(); break; }

				//�� ������ ������!!!
				//Giraffe
//				case 8: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Giraffe.mp3"; MediaPlayer1->Play(); break; }

				//Hedgehog
				case 9: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.mp3"; MediaPlayer1->Play(); break; }

				//Koala
				case 10: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Koala.mp3"; MediaPlayer1->Play(); break; }

				//Lion
				case 11: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.mp3"; MediaPlayer1->Play(); break; }

				//Lynx
				case 12: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.mp3"; MediaPlayer1->Play(); break; }

				//Marmot
				case 13: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Marmot.mp3"; MediaPlayer1->Play(); break; }

				//Monkey
				case 14: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Monkey.mp3"; MediaPlayer1->Play(); break; }

				//Panda
				case 15: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.mp3"; MediaPlayer1->Play(); break; }

				//Polar-bear
				case 16: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.mp3"; MediaPlayer1->Play(); break; }

				//Raccoon
				case 17: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.mp3"; MediaPlayer1->Play(); break; }

				//Rhinoceros
				case 18: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.mp3"; MediaPlayer1->Play(); break; }

				//Snake
				case 19: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snake.mp3"; MediaPlayer1->Play(); break; }

				//Snow-leopard
				case 20: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.mp3"; MediaPlayer1->Play(); break; }

				//Squirrel
				case 21: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squirrel.mp3"; MediaPlayer1->Play(); break; }

				//Tiger
				case 22:  { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tiger.mp3"; MediaPlayer1->Play(); break; }

				//Wolf
				case 23: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.mp3"; MediaPlayer1->Play(); break; }

				//Zebra
				case 24: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Zebra.mp3"; MediaPlayer1->Play(); break; }
		}
	}
//...										 								 ...
//.....                                       						       .....
//.........                                                            .........
//...................                                        ...................
//HOME..........................................................................
	if(Form2->PanelHome->Visible == true)
	{
		switch(HOME)
		{
			//Buffalo
			case 0:	{ MediaPlayer1->Stop(); MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.mp3"; MediaPlayer1->Play(); break; }

			//Camel
			case 1: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.mp3"; MediaPlayer1->Play(); break; }

			//Cat
			case 2: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cat.mp3"; MediaPlayer1->Play(); break; }

			//Cock
			case 3: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.mp3"; MediaPlayer1->Play(); break; }

			//Cow
			case 4: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.mp3"; MediaPlayer1->Play(); break; }

			//Dog
			case 5: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.mp3"; MediaPlayer1->Play(); break; }

			//Donkey
			case 6: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.mp3"; MediaPlayer1->Play(); break; }

			//Goat
			case 7: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Goat.mp3"; MediaPlayer1->Play(); break; }

			//Hens
			case 8: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hens.mp3"; MediaPlayer1->Play(); break; }

			//Horse
			case 9: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.mp3"; MediaPlayer1->Play(); break; }

			//Pig
			case 10: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.mp3"; MediaPlayer1->Play(); break; }

			//Rabbit
			case 11: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rabbit.mp3"; MediaPlayer1->Play(); break; }

			//Sheep
			case 12: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sheep.mp3"; MediaPlayer1->Play(); break; }

			//Turkey
			case 13: { MediaPlayer1->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.mp3"; MediaPlayer1->Play(); break; }
		}
	}

	TimerAnimalSnd->Enabled = false; //��������� ������
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelp5WaitTimer(TObject *Sender)
{
	DiscriptionHelp5->Visible = false; //��������� �������� ���������
	Help5->Visible = false; //��������� �������� ���������

	TimerHelp5Wait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelp6WaitTimer(TObject *Sender)
{
	DiscriptionHelp6->Visible = false; //��������� �������� ���������
	Help6->Visible = false; //��������� �������� ���������

	TimerHelp6Wait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelp6StartTimer(TObject *Sender)
{
//Help6.....................................................
	Help6->Visible = false; //��� �������� ���������, ��������� ���������
	Help6->Position->X = Form2->Width / 2 + HelpFing->Width / 2 + 5; //������ ������ �� HelpFing � �����
	Help6->Position->Y = Form2->Height - 4 - Help6->Height;
	Help6->Visible = true;

//DiscriptionHelp5.........................................
	DiscriptionHelp6->Visible = false; //��� �������� ���������, ��������� ���������
	DiscriptionHelp6->Position->X = Help6->Position->X + Help6->Width + 4; //������ �� Help4
	DiscriptionHelp6->Position->Y = Help6->Position->Y + Help6->Height / 2 - 40 ;
	DiscriptionHelp6->Visible = true;

//��������� TimerHelp5Start..........
	TimerHelp6Start->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::ArrowUpClick(TObject *Sender)
{
	TimerAnimalSound->Enabled = true; //������ ��������������� �����
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ArrowLeftClick(TObject *Sender)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		if(ImageHome->Visible == true)
		{
			HOME_LEFT();
			RESET_DESCRIPTION();
		}

		if(ImageWild->Visible == true)
		{
			RESET_DESCRIPTION();
			WILD_LEFT();
		}

		if(ImageAir->Visible == true)
		{
			AIR_LEFT();
			RESET_DESCRIPTION();
		}

		if(ImageWater->Visible == true)
		{
			RESET_DESCRIPTION();
			WATER_LEFT();
		}

		if(ImageInsects->Visible == true)
		{
			RESET_DESCRIPTION();
			INSECTS_LEFT();
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ArrowRightClick(TObject *Sender)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		if(ImageHome->Visible == true)
		{
			HOME_RIGHT();
			RESET_DESCRIPTION();
		}

		if(ImageWild->Visible == true)
		{
			RESET_DESCRIPTION();
			WILD_RIGHT();
		}

		if(ImageAir->Visible == true)
		{
			AIR_RIGHT();
			RESET_DESCRIPTION();
		}

		if(ImageWater->Visible == true)
		{
			RESET_DESCRIPTION();
			WATER_RIGHT();
		}

		if(ImageInsects->Visible == true)
		{
			RESET_DESCRIPTION();
			INSECTS_RIGHT();
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ArrowDownClick(TObject *Sender)
{
	//��������� ���������
	Form2->ArrowUp->Visible = false;
	Form2->ArrowDown->Visible = false;
	Form2->ArrowLeft->Visible = false;
	Form2->ArrowRight->Visible = false;

	//��������� Zone ��� ���������
	Form2->ZoneArrowUp->Visible = false;
	Form2->ZoneArrowDown->Visible = false;
	Form2->ZoneArrowLeft->Visible = false;
	Form2->ZoneArrowRight->Visible = false;

	TimerSwypeDownWait->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerSwypeDownWaitTimer(TObject *Sender)
{
	Loading->Visible = true; //�������� ����������� � ��������
	TimerSwypeDownWait->Enabled = false; //��������� ������� ������

	TimerSwypeDown->Enabled = true; //�������� ������ ���������� Form2
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerSwypeDownTimer(TObject *Sender)
{
		RESET_DESCRIPTION(); //���������� ��������
		RESET_PICTURES(); //��������� �������� ��� ��������� Form2
		RESET_FORM2(); //��������� ��������� ����������

		TimerSwypeDown->Enabled = false;

		Form1->TimerAlbumSound->Enabled = true;
		Form2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerTestWaitTimer(TObject *Sender)
{
	Loading->Visible = true; //�������� ����������� � ��������
	TimerTestWait->Enabled = false; //��������� ������� ������

	TimerTest->Enabled = true; //��������� TimerTest (� ��� ����������� ���������� ��� �������� Form3)
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerTestTimer(TObject *Sender)
{
	RESET_PICTURES(); //��������� �������� ��� ��������� Form2
	RESET_DESCRIPTION(); //���������� ��������
	RESET_FORM2(); //��������� ��������� ����������

	//�������� ���������� �� Form3
	Form3->TimerLeaflet1End->Enabled = true; //��� 1�� ��������
	Form3->TimerLeaflet2End->Enabled = true; //��� 2�� ��������
	Form3->TimerLeaflet3End->Enabled = true; //��� 3�� ��������

	TimerTest->Enabled = false;

	Form3->TimerTestAsk->Enabled = true;
	Form3->TimerSphereQuestEnd->Enabled = true; //��� �������������� ������� �� ����� SphereQuest

	Form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerDescriptionStartTimer(TObject *Sender)
{
	if(i11 > - 200)
	{
		i11--; //Description
		DescriptionWhite->Position->Y = i11;
		DescriptionBlack->Position->Y = i11;
		DescriptionColor->Position->Y = i11;

		if(i11 <= Form2->Height / 2 - DescriptionWhite->Height / 2) //�������� Description
		{
			TimerDescriptionStart->Enabled = false;
			TimerDescriptionWait->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerDescriptionWaitTimer(TObject *Sender)
{
	Discription->Visible = false; //������� ��� ��������� Discription

	TimerDescriptionEnd->Enabled = true;
	TimerDescriptionWait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerDescriptionEndTimer(TObject *Sender)
{
	if(i11 > - 200)
	{
		i11--; //Description
		DescriptionWhite->Position->Y = i11;
		DescriptionBlack->Position->Y = i11;
		DescriptionColor->Position->Y = i11;

		if(i11 <= -200) //�������� Description
		{
			TimerDescriptionEnd->Enabled = false;

			DescriptionWhite->Visible = false;
			DescriptionBlack->Visible = false;
			DescriptionColor->Visible = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerSphereSoundTimer(TObject *Sender)
{
	MediaPlayer2->Stop(); //������������� ������� �������

	MediaPlayer2->FileName = IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sphere.mp3";
	MediaPlayer2->Play();

	TimerSphereSound->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelp3StartTimer(TObject *Sender)
{
//Help3.....................................................
	Help3->Visible = false;
	Help3->Position->X =  4;
	Help3->Position->Y = HelpFing->Position->Y - Help3->Height - 4;
	Help3->Visible = true;

//DiscriptionHelp3.........................................
	DiscriptionHelp3->Visible = false;
	DiscriptionHelp3->Position->X =Help3->Position->X + Help3->Width / 2;
	DiscriptionHelp3->Position->Y = Help3->Position->Y - DiscriptionHelp3->Height;
	DiscriptionHelp3->Visible = true;

//��������� TimerHelp3Start..........
	TimerHelp3Start->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelp3WaitTimer(TObject *Sender)
{
	Help3->Visible = false;
	DiscriptionHelp3->Visible = false;

	TimerHelp3Wait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelpStart1Timer(TObject *Sender)
{
//SphereInfo....................................................................
	SphereInfo->Visible = false;
	SphereInfo->Position->X = CapBtn1->Position->X + 5; //+5 ������ � ������ ��������
	SphereInfo->Position->Y = CapBtn1->Position->Y - CapBtn1->Height - 120; //-120 ������
	SphereInfo->Visible = true;

//Help1.............................
	Help1->Visible = false; //��� �������� ���������, ��������� ���������
	Help1->Position->X = SphereInfo->Position->X - 12; //���������� ������ �� SphereInfo
	Help1->Position->Y = SphereInfo->Position->Y - 20;
	Help1->Visible = true;

//DiscriptionHelp1...................
	DiscriptionHelp1->Visible = false; //��� �������� ���������, ��������� ���������
	DiscriptionHelp1->Position->X = Help1->Position->X + 25; //��������� ����� � ������ �� Help1
	DiscriptionHelp1->Position->Y = Help1->Position->Y - 25;
	DiscriptionHelp1->Visible = true;

//��������� TimerHelp1..........................................................
	TimerHelpStart1->Enabled = false;
	TimerHelpWait1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelpWait1Timer(TObject *Sender)
{
	TimerHelpWait1->Enabled = false;
	TimerHelpStart2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelp4StartTimer(TObject *Sender)
{
//Help4.....................................................
	Help4->Visible = false;
	Help4->Position->X = Form2->Width - Help4->Width - 4;
	Help4->Position->Y = HelpFing->Position->Y + HelpFing->Height + 4;
	Help4->Visible = true;

//DiscriptionHelp4.........................................
	DiscriptionHelp4->Visible = false;
	DiscriptionHelp4->Position->X =Help4->Position->X - Help4->Width / 2;
	DiscriptionHelp4->Position->Y = Help4->Position->Y + DiscriptionHelp4->Height + 4;
	DiscriptionHelp4->Visible = true;

//��������� TimerHelp4Start..........
	TimerHelp4Start->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelp4WaitTimer(TObject *Sender)
{
	Help4->Visible = false;
	DiscriptionHelp4->Visible = false;

	TimerHelp4Wait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelpStart2Timer(TObject *Sender)
{
//SphereTesting.................................................................
	SphereTesting->Visible = false;
	SphereTesting->Position->X = CapBtn1->Position->X + 40; //+40 ������
	SphereTesting->Position->Y = CapBtn1->Position->Y - CapBtn1->Height - 55; //-85 ������
	SphereTesting->Visible = true;

//Help2..............................
	Help2->Visible = false; //��� �������� ���������, ��������� ���������
	Help2->Position->X = SphereTesting->Position->X - 12; //���������� ������ �� SphereHardTesting
	Help2->Position->Y = SphereTesting->Position->Y - 15;
	Help2->Visible = true;

//DiscriptionHelp2...................
	DiscriptionHelp2->Visible = false; //��� �������� ���������, ��������� ���������
	DiscriptionHelp2->Position->X = Help2->Position->X + 45;
	DiscriptionHelp2->Position->Y = Help2->Position->Y + 75;
	DiscriptionHelp2->Visible = true;

//��������� TimerHelp2..........................................................
	TimerHelpStart2->Enabled = false;
	TimerHelpWait2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelpWait2Timer(TObject *Sender)
{
//��������� ������ ���������....................................................
	DiscriptionHelp1->Visible = false; //��������� �������� ���������
	SphereTesting->Visible = false; //��������� SphereHardTesting
	Help1->Visible = false; //��������� �������� ���������
	SphereInfo->Visible = false;

//��������� ������ ���������....................................................
	DiscriptionHelp2->Visible = false; //��������� �������� ���������
	SphereTesting->Visible = false; //��������� SphereHardTesting
	Help2->Visible = false; //��������� �������� ���������
	SphereTesting->Visible = false;

	TimerHelpWait2->Enabled = false;

//�������� HelpFing.............................................................
	HelpFing->Visible = true; //�������� ��������� HelpFing
	TimerHelpFingDown->Enabled = true; //�������� ������ ��� �������� �����

//�������� ��������� ������ � ���
	TimerHelp6Start->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelpFingDownTimer(TObject *Sender)
{
//������ �������� ��������� (HelpFing) � ���
	if(i12 < Form2->Height +50)
	{
		if(HelpFing->Position->Y == Form2->Height + 50)
		{
//��������
		}

		i12++; i12++;
		HelpFing->Position->Y = i12;

		if(i12 >= Form1->Height +50)
		{
			HelpFing->Visible = false;
			HelpFing->Position->Y = HelpFingY1; 		//���������� ����������� X ���������� ��� HelpFing
			HelpFing->Position->X = HelpFingX1; 		//���������� ����������� Y ���������� ��� HelpFing
			i12 = HelpFingY1; 						//���������� ������, ��� �� ����� ���� ����� �������/�������� HelpFing
			j12 = HelpFingX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "�������" HelpFing

			TimerHelp6Wait->Enabled = true; //�������� ������ ���������� �������� ������ � ���
			TimerHelpFingDown->Enabled = false;

//Arrows && Zones �� FORM2
			//�������� ���������
			Form2->ArrowUp->Visible = true;
			Form2->ArrowDown->Visible = true;
			Form2->ArrowLeft->Visible = true;
			Form2->ArrowRight->Visible = true;

			//�������� Zone
			Form2->ZoneArrowUp->Visible = true;
			Form2->ZoneArrowDown->Visible = true;
			Form2->ZoneArrowLeft->Visible = true;
			Form2->ZoneArrowRight->Visible = true;

//Arrows && Zones �� FORM1
			//�������� ���������
			Form1->ArrowUp->Visible = true;
			Form1->ArrowDown->Visible = true;
			Form1->ArrowLeft->Visible = false;
			Form1->ArrowRight->Visible = true;

			//�������� Zone
			Form1->ZoneArrowUp->Visible = true;
			Form1->ZoneArrowDown->Visible = true;
			Form1->ZoneArrowLeft->Visible = false;
			Form1->ZoneArrowRight->Visible = true;

			Loading->Visible = true; //�������� ����������� � ��������
			TimerSwypeDown->Enabled = true; //������ �������� �����.
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelpFingLeftTimer(TObject *Sender)
{
//������ �������� ��������� (HelpFing) � ����
	if(HelpFing->Position->X > -50)
	{
		if(HelpFing->Position->X == Form2->Width / 3)
		{
			Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) +	"Camel.jpg");
		}

		j12--; j12--;
		HelpFing->Position->X = j12;

		if(HelpFing->Position->X <= - 50)
		{
			HelpFing->Visible = false;
			HelpFing->Position->Y = HelpFingY1; 		//���������� ����������� X ���������� ��� HelpFing
			HelpFing->Position->X = HelpFingX1; 		//���������� ����������� Y ���������� ��� HelpFing
			i12 = HelpFingY1; 						//���������� ������, ��� �� ����� ���� ����� �������/�������� HelpFing
			j12 = HelpFingX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "�������" HelpFing
			HelpFing->Visible = true;

			TimerHelp3Wait->Enabled = true; //��������� ��������� � ����
			TimerHelp4Start->Enabled = true; //�������� ��������� � �����

			TimerHelpFingLeft->Enabled = false;
			TimerHelpFingRight->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelpFingRightTimer(TObject *Sender)
{
//������ �������� ��������� (HelpFing) � �����
	if(HelpFing->Position->X < Form2->Width + 50)
	{
		if(HelpFing->Position->X == Form2->Width - Form2->Width / 3)
		{
			Form2->ImageHome->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) +	"Buffalo.jpg");
		}

		j12++; j12++;
		HelpFing->Position->X = j12;

		if(HelpFing->Position->X >= Form2->Width + 50) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			HelpFing->Visible = false;

			HelpFing->Position->Y = HelpFingY1; 		//���������� ����������� X ���������� ��� HelpFing
			HelpFing->Position->X = HelpFingX1; 		//���������� ����������� Y ���������� ��� HelpFing
			i12 = HelpFingY1; 						//���������� ������, ��� �� ����� ���� ����� �������/�������� HelpFing
			j12 = HelpFingX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "�������" HelpFing
			HelpFing->Visible = true;

			TimerHelp4Wait->Enabled = true; //��������� ��������� ������ � �����
			TimerHelp5Start->Enabled = true; //�������� ��������� ������ �����

			TimerHelpFingRight->Enabled = false;
			TimerHelpFingUp->Enabled = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelpFingUpTimer(TObject *Sender)
{
//������ �������� ��������� (HelpFing) � ����
	if(i12 > -100)
	{
		i12--; i12--;
		HelpFing->Position->Y = i12;

		if(i12 <= -100)
		{
			HelpFing->Visible = false;
			HelpFing->Position->Y = HelpFingY1; 		//���������� ����������� X ���������� ��� HelpFing
			HelpFing->Position->X = HelpFingX1; 		//���������� ����������� Y ���������� ��� HelpFing
			i12 = HelpFingY1; 						//���������� ������, ��� �� ����� ���� ����� �������/�������� HelpFing
			j12 = HelpFingX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "�������" HelpFing

			TimerHelpFingUp->Enabled = false;
			TimerHelp5Wait->Enabled = true; //�������� ������ ����������� ��������� ������ �����
			TimerHelpStart1->Enabled = true; //�������� ��������� ���������
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerHelpFingStartTimer(TObject *Sender)
{
	Form2->HelpFing->Position->X = Form2->Width / 2 - Form2->HelpFing->Width / 2; //��������� ������ ����� �� �����������
	Form2->HelpFing->Position->Y = Form2->Height / 2 - Form2->HelpFing->Height / 2; //��������� ������ ����� �� ���������

	HelpFing->Visible = true;
	TimerHelp3Start->Enabled = true; //�������� ��������� � ����

	TimerHelpFingLeft->Enabled = true;
	TimerHelpFingStart->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerSphereInfoStartTimer(TObject *Sender)
{
	if(i9 > - 10)
	{
		i9--; //SphereInfo
		SphereInfo->Position->Y = i9;

		if(i9 <= - 10) //������ ����� SphereInfo
		{
			SphereInfo->Visible = false;
			TimerSphereInfoStart->Enabled = false;

			TimerSphereInfoLeft->Enabled = false;
			TimerSphereInfoRight->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerSphereInfoLeftTimer(TObject *Sender)
{
//������ �������� SphereInfo � ����
	if(SphereInfo->Position->X - 25 < SphereInfo->Position->X)
	{
		j9--;
		SphereInfo->Position->X = j9;

		if(SphereInfo->Position->X <= SphereXInfo - 25) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			TimerSphereInfoRight->Enabled = true;
			TimerSphereInfoLeft->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerSphereInfoRightTimer(TObject *Sender)
{
//������ �������� SphereInfo � �����
	if(SphereInfo->Position->X < SphereXInfo + 25)
	{
		j9++;
		SphereInfo->Position->X = j9;

		if(SphereInfo->Position->X >= SphereXInfo + 25) //, ��� SphereX5 - ����������� ���������� �� X ���
		{
			TimerSphereInfoLeft->Enabled = true;
			TimerSphereInfoRight->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SphereInfoClick(TObject *Sender)
{
	TimerSphereSound->Enabled = true; //�������� ������� "������" ������

//��������� Discription........................
	TimerDescriptionStart->Enabled = false;
	TimerDescriptionWait->Enabled = false;
	TimerDescriptionEnd->Enabled = false;

//������� ����� Info...........................
	SphereInfo->Visible = false;
	TimerSphereInfoStart->Enabled = false;

	TimerSphereInfoLeft->Enabled = false;
	TimerSphereInfoRight->Enabled = false;

//������� ����� Testing........................
	SphereTesting->Visible = false;
	TimerSphereTestingWait->Enabled = false;
	TimerSphereTestingStart->Enabled = false;

	TimerSphereTestingLeft->Enabled = false;
	TimerSphereTestingRight->Enabled = false;

//������� �������� Description.................
	i11 = DescriptionY1;
	DescriptionWhite->Position->Y = DescriptionY1;
	DescriptionBlack->Position->Y = DescriptionY1;
	DescriptionColor->Position->Y = DescriptionY1;

	//���������� ��� ��������� Discription
	Discription->Visible = true;

//HOME ANIMALS.................................
	if(HOME == 0 && PanelHome->Visible == true) //������
	{
			DescriptionWhite->Text = Form4->LabelBuffalo->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 1 && PanelHome->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelCamel->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 2 && PanelHome->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelCat->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 3 && PanelHome->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelCock->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 4 && PanelHome->Visible == true) //������
	{
			DescriptionWhite->Text = Form4->LabelCow->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 5 && PanelHome->Visible == true) //������
	{
			DescriptionWhite->Text = Form4->LabelDog->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 6 && PanelHome->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelDonkey->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 7 && PanelHome->Visible == true) //����
	{
			DescriptionColor->Text = Form4->LabelGoat->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 8 && PanelHome->Visible == true) //������
	{
			DescriptionColor->Text = Form4->LabelHens->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 9 && PanelHome->Visible == true) //������
	{
			DescriptionColor->Text = Form4->LabelHorse->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 10 && PanelHome->Visible == true) //������
	{
			DescriptionColor->Text = Form4->LabelPig->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 11 && PanelHome->Visible == true) //������
	{
			DescriptionColor->Text = Form4->LabelRabbit->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 12 && PanelHome->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelSheep->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(HOME == 13 && PanelHome->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelTurkey->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}




//WILD ANIMALS.................................
	if(WILD == 0 && PanelWild->Visible == true) //�����
	{
			DescriptionBlack->Text = Form4->LabelArctic_fox->Text;
			DescriptionBlack->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 1 && PanelWild->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelBear->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 2 && PanelWild->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelBoar->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 3 && PanelWild->Visible == true) //��������
	{
			DescriptionWhite->Text = Form4->LabelChameleon->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 4 && PanelWild->Visible == true) //��������
	{
			DescriptionWhite->Text = Form4->LabelChipmunk->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 5 && PanelWild->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelDeer->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 6 && PanelWild->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelElephant->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 7 && PanelWild->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelFox->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 8 && PanelWild->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelGiraffe->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 9 && PanelWild->Visible == true) //��
	{
			DescriptionWhite->Text = Form4->LabelHedgehog->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 10 && PanelWild->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelKoala->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 11 && PanelWild->Visible == true) //���
	{
			DescriptionWhite->Text = Form4->LabelLion->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 12 && PanelWild->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelLynx->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 13 && PanelWild->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelMarmot->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 14 && PanelWild->Visible == true) //��������
	{
			DescriptionWhite->Text = Form4->LabelMonkey->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 15 && PanelWild->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelPanda->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 16 && PanelWild->Visible == true) //����� �������
	{
			DescriptionWhite->Text = Form4->LabelPolar_bear->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 17 && PanelWild->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelRaccoon->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 18 && PanelWild->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelRhinoceros->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 19 && PanelWild->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelSnake->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 20 && PanelWild->Visible == true) //������� ����
	{
			DescriptionColor->Text = Form4->LabelSnow_leopard->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 21 && PanelWild->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelSquirrel->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 22 && PanelWild->Visible == true) //����
	{
			DescriptionColor->Text = Form4->LabelTiger->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 23 && PanelWild->Visible == true) //����
	{
			DescriptionColor->Text = Form4->LabelWolf->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WILD == 24 && PanelWild->Visible == true) //�����
	{
			DescriptionColor->Text = Form4->LabelZebra->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}




//AIR ANIMALS..................................
	if(AIR == 0 && PanelAir->Visible == true) //���������
	{
			DescriptionWhite->Text = Form4->LabelAlbatross->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 1 && PanelAir->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelBullfinch->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 2 && PanelAir->Visible == true) //�����
	{
			DescriptionColor->Text = Form4->LabelDeadlock->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 3 && PanelAir->Visible == true) //������
	{
			DescriptionBlack->Text = Form4->LabelDove->Text;
			DescriptionBlack->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 4 && PanelAir->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelDuck->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 5 && PanelAir->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelEagle->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 6 && PanelAir->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelFalcon->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 7 && PanelAir->Visible == true) //��������
	{
			DescriptionColor->Text = Form4->LabelFlamingo->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 8 && PanelAir->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelGoldfinch->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 9 && PanelAir->Visible == true) //�����
	{
			DescriptionColor->Text = Form4->LabelHeron->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 10 && PanelAir->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelJay->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 11 && PanelAir->Visible == true) //���������
	{
			DescriptionColor->Text = Form4->LabelLark->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 12 && PanelAir->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelOwl->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 13 && PanelAir->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelParrot->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 14 && PanelAir->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelPelican->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 15 && PanelAir->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelPheasant->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 16 && PanelAir->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelRaven->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 17 && PanelAir->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelRook->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 18 && PanelAir->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelSeagull->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 19 && PanelAir->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelSparrow->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 20 && PanelAir->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelStork->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 21 && PanelAir->Visible == true) //��������
	{
			DescriptionColor->Text = Form4->LabelSwallow->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 22 && PanelAir->Visible == true) //������
	{
			DescriptionWhite->Text = Form4->LabelTitmouse->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(AIR == 23 && PanelAir->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelWoodpecker->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}




//WATER ANIMALS................................
	if(WATER == 0 && PanelWater->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelCachalot->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 1 && PanelWater->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelCrab->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 2 && PanelWater->Visible == true) //�������
	{
			DescriptionColor->Text = Form4->LabelDolphin->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 3 && PanelWater->Visible == true) //������� ��
	{
			DescriptionWhite->Text = Form4->LabelEchinoid->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 4 && PanelWater->Visible == true) //������
	{
			DescriptionColor->Text = Form4->LabelJellyfish->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 5 && PanelWater->Visible == true) //��������
	{
			DescriptionWhite->Text = Form4->LabelOctopus->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 6 && PanelWater->Visible == true) //�������
	{
			DescriptionBlack->Text = Form4->LabelPenguin->Text;
			DescriptionBlack->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 7 && PanelWater->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelPerch->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 8 && PanelWater->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelSchyuka->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 9 && PanelWater->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelSea_slope->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 10 && PanelWater->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelShark->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 11 && PanelWater->Visible == true) //������
	{
			DescriptionWhite->Text = Form4->LabelSnail->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 12 && PanelWater->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelSquid->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 13 && PanelWater->Visible == true) //������� ������
	{
			DescriptionWhite->Text = Form4->LabelStarfish->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 14 && PanelWater->Visible == true) //��������
	{
			DescriptionWhite->Text = Form4->LabelTurtle->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(WATER == 15 && PanelWater->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelWalrus->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}




//INSECTS ANIMALS..............................
	if(INSECTS == 0 && PanelInsects->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelAnt->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(INSECTS == 1 && PanelInsects->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelBee->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(INSECTS == 2 && PanelInsects->Visible == true) //���
	{
			DescriptionWhite->Text = Form4->LabelBug->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(INSECTS == 3 && PanelInsects->Visible == true) //�����
	{
			DescriptionWhite->Text = Form4->LabelBumblebee->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(INSECTS == 4 && PanelInsects->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelButterfly->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(INSECTS == 5 && PanelInsects->Visible == true) //��������
	{
			DescriptionWhite->Text = Form4->LabelDragonfly->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(INSECTS == 6 && PanelInsects->Visible == true) //��������
	{
			DescriptionWhite->Text = Form4->LabelGrasshopper->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(INSECTS == 7 && PanelInsects->Visible == true) //����� �������
	{
			DescriptionBlack->Text = Form4->LabelLadybug->Text;
			DescriptionBlack->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(INSECTS == 8 && PanelInsects->Visible == true) //�������
	{
			DescriptionWhite->Text = Form4->LabelMantis->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(INSECTS == 9 && PanelInsects->Visible == true) //��������
	{
			DescriptionWhite->Text = Form4->LabelScorpion->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(INSECTS == 10 && PanelInsects->Visible == true) //����
	{
			DescriptionWhite->Text = Form4->LabelSpider->Text;
			DescriptionWhite->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}

	if(INSECTS == 11 && PanelInsects->Visible == true) //��������
	{
			DescriptionColor->Text = Form4->LabelTarantula->Text;
			DescriptionColor->Visible = true;
			TimerDescriptionStart->Enabled = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerCapBtnEndTimer(TObject *Sender)
{
	//��������������� (CapBtn1): ������������ � ������� POSITION
	int a = Form2->Width / 2; //�������� 50% ������ ������
	Form2->CapBtn1->Position->X = Form2->Width / 2 - a / 2; //�������� 1/4 ������ ������

	Form2->CapBtn1->Position->X = F3_CapBtnX1; 		//���������� ����������� ������� X
	F3_j15 = F3_CapBtnX1; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������" ������2

	Form2->TimerCapBtnEnd->Enabled = false;
	Form2->TimerCapBtnStart->Interval = Random(35000);
	Form2->TimerCapBtnStart->Enabled = true;

	Form2->TimerCapBtnRight->Enabled = false;
	Form2->TimerCapBtnLeft->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerCapBtnStartTimer(TObject *Sender)
{
	Form2->TimerCapBtnEnd->Enabled = true;
	Form2->TimerCapBtnStart->Enabled = false;

	Form2->TimerCapBtnLeft->Enabled = false;
	Form2->TimerCapBtnRight->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerCapBtnLeftTimer(TObject *Sender)
{
//������� �������� � ����
	if(Form2->CapBtn1->Position->X -1 < Form2->CapBtn1->Position->X)
	{
		F3_j15--;
		Form2->CapBtn1->Position->X = F3_j15;

		if(Form2->CapBtn1->Position->X <= F3_CapBtnX1 - 1)
		{
			Form2->TimerCapBtnRight->Enabled = true;
			Form2->TimerCapBtnLeft->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerCapBtnRightTimer(TObject *Sender)
{
//������� �������� � �����
	if(Form2->CapBtn1->Position->X < F3_CapBtnX1 + 1)
	{
		F3_j15++;
		Form2->CapBtn1->Position->X = F3_j15;

		if(Form2->CapBtn1->Position->X >= F3_CapBtnX1 + 1) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			Form2->TimerCapBtnLeft->Enabled = true;
			Form2->TimerCapBtnRight->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerSphereTestingStartTimer(TObject *Sender)
{
	if(i10 > - 10)
	{
		i10--;
		SphereTesting->Position->Y = i10;

		if(i10 <= - 10) //��������� ������� � ��������
		{
			SphereTesting->Visible = false;
			TimerSphereTestingStart->Enabled = false;

			TimerSphereTestingLeft->Enabled = false;
			TimerSphereTestingRight->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerSphereTestingWaitTimer(TObject *Sender)
{
	TimerSphereTestingStart->Enabled = true;
	SphereTesting->Visible = true;

	TimerSphereTestingWait->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerSphereTestingLeftTimer(TObject *Sender)
{
//������ �������� SphereTesting � ����
	if(SphereTesting->Position->X - 40 < SphereTesting->Position->X)
	{
		j10--;
		SphereTesting->Position->X = j10;

		if(SphereTesting->Position->X <= SphereXTesting - 40) //, ��� LeafletX1 - ����������� ���������� �� X ���
		{
			TimerSphereTestingRight->Enabled = true;
			TimerSphereTestingLeft->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TimerSphereTestingRightTimer(TObject *Sender)
{
//������ �������� SphereTesting � �����
	if(SphereTesting->Position->X < SphereXTesting + 40)
	{
		j10++;
		SphereTesting->Position->X = j10;

		if(SphereTesting->Position->X >= SphereXTesting + 40) //, ��� SphereX5 - ����������� ���������� �� X ���
		{
			TimerSphereTestingLeft->Enabled = true;
			TimerSphereTestingRight->Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SphereTestingClick(TObject *Sender)
{
	TimerSphereSound->Enabled = true; //�������� ������� "������" ������

//������� ����� Testing........................
	SphereTesting->Visible = false;
	TimerSphereTestingWait->Enabled = false;
	TimerSphereTestingStart->Enabled = false;

	TimerSphereTestingLeft->Enabled = false;
	TimerSphereTestingRight->Enabled = false;

//������� ����� Info...........................
	SphereInfo->Visible = false;
	TimerSphereInfoStart->Enabled = false;

	TimerSphereInfoLeft->Enabled = false;
	TimerSphereInfoRight->Enabled = false;

	//��������� ���������
	Form2->ArrowUp->Visible = false;
	Form2->ArrowDown->Visible = false;
	Form2->ArrowLeft->Visible = false;
	Form2->ArrowRight->Visible = false;

	//��������� ZoneArrow's
	Form2->ZoneArrowUp->Visible = false;
	Form2->ZoneArrowDown->Visible = false;
	Form2->ZoneArrowLeft->Visible = false;
	Form2->ZoneArrowRight->Visible = false;

//������ random ��� INSECTS animals.............................................
	if(ALBUM->Text == "INSECTS") //�������� ���� ��� INSECTS animals
	{
		Form3->COUNTER->Text = "0";		  //������ ������� ������������������ (��� ����������� ����� �� ���������)
		Form3->ANIMALS->Text = Random(4); //��� Ant

		//���� �� �-���, ��� ���� Ant, � ����������� �� Random 0, 1, 2, 3 (�.�. 1 �� 4 �������)
		if(Form3->ANIMALS->Text == "0") //Form3::void INSECTS_0st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ladybug.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bumblebee.jpg"); //3
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg"); //4
		}

		if(Form3->ANIMALS->Text == "1")//Form3::void INSECTS_1st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Spider.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg"); //2
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg"); //4
		}


		if(Form3->ANIMALS->Text == "2") //Form3::void INSECTS_2st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Bug.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg"); //3
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Scorpion.jpg"); //4
		}

		if(Form3->ANIMALS->Text == "3")	//Form3::void INSECTS_3st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Tarantula.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Grasshopper.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Mantis.jpg"); //3
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Ant.jpg"); //4
		}

		Form3->Image1->Visible = true;
		Form3->Image2->Visible = true;
		Form3->Image3->Visible = true;
		Form3->Image4->Visible = true;

		TimerTestWait->Enabled = true; //��������� TimerTestWait (� ��� ����������� ���������� ��� ������� loading)
	}
//................................................END random ��� INSECTS animals




//������ random ��� WATER animals...............................................
	if(ALBUM->Text == "WATER") //�������� ���� ��� WATER animals
	{
		Form3->COUNTER->Text = "0";		  //������ ������� ������������������ (��� ����������� ����� �� ���������)
		Form3->ANIMALS->Text = Random(4); //��� Cachalot

		//���� �� �-���, ��� ���� Cachalot, � ����������� �� Random 0, 1, 2, 3 (�.�. 1 �� 4 �������)
		if(Form3->ANIMALS->Text == "0") //Form3::void WATER_1st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Walrus.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Squid.jpg"); //3
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg"); //4
		}

		if(Form3->ANIMALS->Text == "1")//Form3::void WATER_4st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Jellyfish.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dolphin.jpg"); //3
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Shark.jpg"); //4
		}


		if(Form3->ANIMALS->Text == "2") //Form3::void WATER_8st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turtle.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Octopus.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg"); //3
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Starfish.jpg"); //4
		}

		if(Form3->ANIMALS->Text == "3")	//Form3::void WATER_13st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Perch.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sea-slope.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snail.jpg"); //3
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cachalot.jpg"); //4
		}

		Form3->Image1->Visible = true;
		Form3->Image2->Visible = true;
		Form3->Image3->Visible = true;
		Form3->Image4->Visible = true;

		TimerTest->Enabled = true; //��������� TimerTest (� ��� ����������� ���������� ��� �������� Form3)
	}
//..................................................END random ��� WATER animals




//������ random ��� AIR animals.................................................
	if(ALBUM->Text == "AIR") //�������� ���� ��� AIR animals
	{
		Form3->COUNTER->Text = "0";		  //������ ������� ������������������ (��� ����������� ����� �� ���������)
		Form3->ANIMALS->Text = Random(4); //��� Albatross

		//���� �� �-���, ��� ���� Albatross, � ����������� �� Random 0, 1, 2, 3 (�.�. 1 �� 4 �������)
		if(Form3->ANIMALS->Text == "0") //Form3::void AIR_6st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Duck.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Flamingo.jpg"); //3
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Eagle.jpg"); //4
		}

		if(Form3->ANIMALS->Text == "1")//Form3::void AIR_10st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Stork.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg"); //3
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Parrot.jpg"); //4
		}


		if(Form3->ANIMALS->Text == "2") //Form3::void AIR_14st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Sparrow.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lark.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg"); //3
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Woodpecker.jpg"); //4
		}

		if(Form3->ANIMALS->Text == "3")	//Form3::void AIR_22st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Heron.jpg"); //1
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rook.jpg"); //2
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Owl.jpg"); //3
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Albatross.jpg"); //4
		}

		Form3->Image1->Visible = true;
		Form3->Image2->Visible = true;
		Form3->Image3->Visible = true;
		Form3->Image4->Visible = true;

		TimerTest->Enabled = true; //��������� TimerTest (� ��� ����������� ���������� ��� �������� Form3)
	}
//....................................................END random ��� AIR animals




//������ random ��� WILD animals................................................
	if(ALBUM->Text == "WILD") //�������� ���� ��� WILD animals
	{
		Form3->COUNTER->Text = "0";		  //������ ������� ������������������ (��� ����������� ����� �� ���������)
		Form3->ANIMALS->Text = Random(4); //��� Arctic-fox

		//���� �� �-���, ��� ���� Arctic-fox, � ����������� �� Random 0, 1, 2, 3 (�.�. 1 �� 4 �������)
		if(Form3->ANIMALS->Text == "0") //Form3::void WILD_1st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Chipmunk.jpg");
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Rhinoceros.jpg");
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Raccoon.jpg");
		}

		if(Form3->ANIMALS->Text == "1")//Form3::void WILD_6st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lynx.jpg");
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Lion.jpg");
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Snow-leopard.jpg");
		}


		if(Form3->ANIMALS->Text == "2") //Form3::void WILD_11st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Polar-bear.jpg");
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Elephant.jpg");
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg");
		}

		if(Form3->ANIMALS->Text == "3")	//Form3::void WILD_15st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Hedgehog.jpg");
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Panda.jpg");
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Wolf.jpg");
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Arctic-fox.jpg");
		}

		Form3->Image1->Visible = true;
		Form3->Image2->Visible = true;
		Form3->Image3->Visible = true;
		Form3->Image4->Visible = true;

		TimerTest->Enabled = true; //��������� TimerTest (� ��� ����������� ���������� ��� �������� Form3)
	}
//...................................................END random ��� WILD animals




//������ random ��� HOME animals................................................
	if(ALBUM->Text == "HOME") //�������� ���� ��� HOME animals
	{
		Form3->COUNTER->Text = "0";		  //������ ������� ������������������ (��� ����������� ����� �� ���������)
		Form3->ANIMALS->Text = Random(4); //��� Buffalo

		//���� �� �-���, ��� ���� Buffalo, � ����������� �� Random 0, 1, 2, 3 (�.�. 1 �� 4 �������)
		if(Form3->ANIMALS->Text == "0") //Form3::void HOME_0st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Dog.jpg");
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg");
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");
		}

		if(Form3->ANIMALS->Text == "1")//Form3::void HOME_4st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cow.jpg");
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Horse.jpg");
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Donkey.jpg");
		}


		if(Form3->ANIMALS->Text == "2") //Form3::void HOME_3st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg");
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Turkey.jpg");
		}

		if(Form3->ANIMALS->Text == "3")	//Form3::void HOME_9st();
		{
			Form3->Image1->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Pig.jpg");
			Form3->Image2->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Cock.jpg");
			Form3->Image3->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Camel.jpg");
			Form3->Image4->Bitmap->LoadFromFile(IncludeTrailingPathDelimiter(System::Ioutils::TPath::GetDocumentsPath()) + "Buffalo.jpg");
		}

		Form3->Image1->Visible = true;
		Form3->Image2->Visible = true;
		Form3->Image3->Visible = true;
		Form3->Image4->Visible = true;

		TimerTest->Enabled = true; //��������� TimerTest (� ��� ����������� ���������� ��� �������� Form3)
	}
//...................................................END random ��� HOME animals
}
//---------------------------------------------------------------------------

void __fastcall TForm2::CapBtn1Click(TObject *Sender)
{
	if(HelpFing->Visible == false)
	{
		if(SphereTesting->Visible == false && SphereInfo->Visible == false)
		{
			//������� ����� �� Form1.......
			Form1->Sphere5->Visible = false;
			Form1->TimerSphere5Start->Enabled = false;

			Form1->TimerSphere5Left->Enabled = false;
			Form1->TimerSphere5Right->Enabled = false;

			//������� DescriptionWhite/Black.....................
			DescriptionWhite->Visible = false;
			DescriptionBlack->Visible = false;
			DescriptionColor->Visible = false;
			TimerDescriptionStart->Enabled = false;

			//������� Discription
			Discription->Visible = false;

			//��������� ����� SphereInfo..............
			SphereInfo->Position->Y = SphereYInfo; 		//���������� ����������� ������
			SphereInfo->Position->X = SphereXInfo; 		//���������� ����������� ������
			i9 = SphereYInfo; 						//���������� ������, ��� �� ����� ���� ����� �������
			j9 = SphereXInfo; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������"
			SphereInfo->Visible = true;
			TimerSphereInfoStart->Enabled = true;	//��������� ShpereInfo

			TimerSphereInfoLeft->Enabled = false;
			TimerSphereInfoRight->Enabled = true;

			//��������� ����� SphereTesting..............
			SphereTesting->Position->Y = SphereYTesting; 		//���������� ����������� ������
			SphereInfo->Position->X = SphereXTesting; 		//���������� ����������� ������
			i10 = SphereYTesting; 						//���������� ������, ��� �� ����� ���� ����� �������
			j10 = SphereXTesting; 						//���������� �������������� ����������, ��� �� ����� ���� ����� "������"
			TimerSphereTestingWait->Enabled = true; //��������� �������� ��� ShpereTesting

			TimerSphereTestingLeft->Enabled = true;
			TimerSphereTestingRight->Enabled = false;
		}
		else
		{
			//������� ����������������� ����������
			//SphereInfo..........................
			SphereInfo->Visible = false;
			TimerSphereInfoStart->Enabled = false;

			TimerSphereInfoLeft->Enabled = false;
			TimerSphereInfoRight->Enabled = false;

			//SphereTesting.......................
			SphereTesting->Visible = false;
			TimerSphereTestingWait->Enabled = false;
			TimerSphereTestingStart->Enabled = false;

			TimerSphereTestingLeft->Enabled = false;
			TimerSphereTestingRight->Enabled = false;

			//DescriptionWhite/Black.........................
			DescriptionWhite->Visible = false;
			DescriptionBlack->Visible = false;
			DescriptionColor->Visible = false;
			TimerDescriptionStart->Enabled = false;

			//Discription
			Discription->Visible = false;
		}
	}
	else
	{
		int z;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ImageHomeGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		if(EventInfo.GestureID == String(sgiUp)) //�������
		{
			TimerAnimalSound->Enabled = true; //������ ��������������� �����
		}

		if(EventInfo.GestureID == String(sgiLeft)) //������� ������, � ����
		{
			HOME_RIGHT();
			RESET_DESCRIPTION();
		}

		if(EventInfo.GestureID == String(sgiRight)) //������� �����, � �����
		{
			HOME_LEFT();
			RESET_DESCRIPTION();
		}

		if(EventInfo.GestureID == String(sgiDown)) //������� �� �������
		{
			//��������� ���������
			Form2->ArrowUp->Visible = false;
			Form2->ArrowDown->Visible = false;
			Form2->ArrowLeft->Visible = false;
			Form2->ArrowRight->Visible = false;

			//��������� Zone
			Form2->ZoneArrowUp->Visible = false;
			Form2->ZoneArrowDown->Visible = false;
			Form2->ZoneArrowLeft->Visible = false;
			Form2->ZoneArrowRight->Visible = false;

			TimerSwypeDownWait->Enabled = true;
		}
	}
	else
	{
		int x;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ImageAirGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		if(EventInfo.GestureID == String(sgiUp)) //�������
		{
			TimerAnimalSound->Enabled = true; //������ ��������������� �����
		}

		if(EventInfo.GestureID == String(sgiLeft)) //������� ������, � ����
		{
			AIR_RIGHT();
			RESET_DESCRIPTION();
		}

		if(EventInfo.GestureID == String(sgiRight)) //������� �����, � �����
		{
			AIR_LEFT();
			RESET_DESCRIPTION();
		}

		if(EventInfo.GestureID == String(sgiDown)) //������� �� �������
		{
			//��������� ���������
			Form2->ArrowUp->Visible = false;
			Form2->ArrowDown->Visible = false;
			Form2->ArrowLeft->Visible = false;
			Form2->ArrowRight->Visible = false;

			//��������� Zone
			Form2->ZoneArrowUp->Visible = false;
			Form2->ZoneArrowDown->Visible = false;
			Form2->ZoneArrowLeft->Visible = false;
			Form2->ZoneArrowRight->Visible = false;

			Loading->Visible = true; //�������� ����������� � ��������

			TimerSwypeDownWait->Enabled = true;
		}
	}
	else
	{
		int x;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ImageInsectsGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		if(EventInfo.GestureID == String(sgiUp)) //�������
		{
			TimerAnimalSound->Enabled = true; //������ ��������������� �����
		}

		if(EventInfo.GestureID == String(sgiLeft)) //������� ������, � ����
		{
			RESET_DESCRIPTION();
			INSECTS_RIGHT();
		}

		if(EventInfo.GestureID == String(sgiRight)) //������� �����, � �����
		{
			RESET_DESCRIPTION();
			INSECTS_LEFT();
		}

		if(EventInfo.GestureID == String(sgiDown)) //������� �� �������
		{
			//��������� ���������
			Form2->ArrowUp->Visible = false;
			Form2->ArrowDown->Visible = false;
			Form2->ArrowLeft->Visible = false;
			Form2->ArrowRight->Visible = false;

			//��������� Zone
			Form2->ZoneArrowUp->Visible = false;
			Form2->ZoneArrowDown->Visible = false;
			Form2->ZoneArrowLeft->Visible = false;
			Form2->ZoneArrowRight->Visible = false;

			Loading->Visible = true; //�������� ����������� � ��������

			TimerSwypeDownWait->Enabled = true;
		}
	}
	else
	{
		int x;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ImageWaterGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		if(EventInfo.GestureID == String(sgiUp)) //�������
		{
			TimerAnimalSound->Enabled = true; //������ ��������������� �����
		}

		if(EventInfo.GestureID == String(sgiLeft)) //������� ������, � ����
		{
			RESET_DESCRIPTION();
			WATER_RIGHT();
		}

		if(EventInfo.GestureID == String(sgiRight)) //������� �����, � �����
		{
			RESET_DESCRIPTION();
			WATER_LEFT();
		}

		if(EventInfo.GestureID == String(sgiDown)) //������� �� �������
		{
			//��������� ���������
			Form2->ArrowUp->Visible = false;
			Form2->ArrowDown->Visible = false;
			Form2->ArrowLeft->Visible = false;
			Form2->ArrowRight->Visible = false;

			//��������� Zone
			Form2->ZoneArrowUp->Visible = false;
			Form2->ZoneArrowDown->Visible = false;
			Form2->ZoneArrowLeft->Visible = false;
			Form2->ZoneArrowRight->Visible = false;

			Loading->Visible = true; //�������� ����������� � ��������

			TimerSwypeDownWait->Enabled = true;
		}
	}
	else
	{
		int x;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ImageWildGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled)
{
	if(HelpFing->Visible == false) //���� ��������� �� �������, ��...
	{
		if(EventInfo.GestureID == String(sgiUp)) //�������
		{
			TimerAnimalSound->Enabled = true; //������ ��������������� �����
		}

		if(EventInfo.GestureID == String(sgiLeft)) //������� ������, � ����
		{
			RESET_DESCRIPTION();
			WILD_RIGHT();
		}

		if(EventInfo.GestureID == String(sgiRight)) //������� �����, � �����
		{
			RESET_DESCRIPTION();
			WILD_LEFT();
		}

		if(EventInfo.GestureID == String(sgiDown)) //������� �� �������
		{
			//��������� ���������
			Form2->ArrowUp->Visible = false;
			Form2->ArrowDown->Visible = false;
			Form2->ArrowLeft->Visible = false;
			Form2->ArrowRight->Visible = false;

			//��������� Zone
			Form2->ZoneArrowUp->Visible = false;
			Form2->ZoneArrowDown->Visible = false;
			Form2->ZoneArrowLeft->Visible = false;
			Form2->ZoneArrowRight->Visible = false;

			Loading->Visible = true; //�������� ����������� � ��������

			TimerSwypeDownWait->Enabled = true;
		}
	}
	else
	{
		int x;
	}
}
//---------------------------------------------------------------------------

