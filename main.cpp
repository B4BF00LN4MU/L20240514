#include <iostream>
#include <conio.h>

using namespace std;

int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';

int GoalX = 8;
int GoalY = 8;
char GoalShape = 'G';

char FloorShape = ' ';
char WallShape = '*';

int Key = 0;
int World[10][10] =
{
	{ 1,1,1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 }
};

bool IsRunning = true;

void Input();
void Tick();
void Render();

int main()
{

	while (IsRunning)
	{
		Render();

		Input();
		// 키를 입력 받는다.
		Tick();
		// 키를 처리한다.
		Render();
		// World(맵) 자료에 맞게 출력한다.
	}
	if (PlayerX == GoalX && PlayerY == GoalY)
	{
		cout << "CLEAR!!!";
	}
	else if (Key == 27)
	{
		cout << "STOP";
	}
	
		return 0;
}

void Input()
{
	Key = _getch();
}

void Tick()
{
	if (Key == 'w')
	{
		PlayerY--;
	}
	if (Key == 's')
	{
		PlayerY++;
	}
	if (Key == 'a')
	{
		PlayerX--;
	}
	if (Key == 'd')
	{
		PlayerX++;
	}
	if (Key == 27)
	{
		IsRunning = false;
	}
}

void Render()
{
	system("cls");

	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			if (PlayerX == GoalX && PlayerY == GoalY)
			{
				IsRunning = false;
			}
			else if (PlayerX == X && PlayerY == Y)
			{
				cout << PlayerShape;
			}
			else if (GoalX == X && GoalY == Y)
			{
				cout << GoalShape;
			}
			else if (World[Y][X] == 0)
			{
				cout << FloorShape;
			}
			else if (World[Y][X] == 1)
			{
				cout << WallShape;
			}
		}
		cout << endl;
	}
	if (World[PlayerY][PlayerX] == 1)
	{
		if (Key == 'w')
		{
			PlayerY++;
			system("cls");
		}
		else if (Key == 's')
		{
			PlayerY--;
			system("cls");
		}
		else if (Key == 'a')
		{
			PlayerX++;
			system("cls");
		}
		else if (Key == 'd')
		{
			PlayerX--;
			system("cls");
		}
	}
}

/*
1. 상수
int
float
bool
char

2. 변수
int= A;
A = 10;

3. 연산자
산술연산자 +, -, *, /, %
논리연산자 && || !
비교연산자 > < >= <= =! ==
A = A + 1

4. 배열
[][][][][][][]
[][][][][][][] -> Mapping

int N[10][10]'
N[1]=10;

5.
//infinity loop
	int j = 0;
	for (int i = 0; i < 10;++j)//배열접근
	{
		cout << j;
	}
	for(;FP !=EOF)

	while(그만할때까지)
	{
	Input();
	Process();
	Render(); //사진 찍듯이 카메라 -> 수학의 카메라, 수학 사진을 만든다
	}

*/

//int star[10][10] =
//{
//	{ 1,1,1,1,1,1,1,1,1,1 },
//	{ 1,0,0,0,1,0,0,0,0,1 },
//	{ 1,0,0,0,0,0,0,0,0,1 },
//	{ 1,0,0,0,0,0,0,0,0,1 },
//	{ 1,0,0,0,0,0,0,1,1,1 },
//	{ 1,0,0,0,0,0,0,0,0,1 },
//	{ 1,0,0,0,0,0,0,0,0,1 },
//	{ 1,0,0,0,0,1,0,0,0,1 },
//	{ 1,0,0,0,0,1,0,0,0,1 },
//	{ 1,1,1,1,1,1,1,1,1,1 }
//};
//int playerx = 1;
//int playery = 1;
//int goldx = 8;
//int goldy = 8;
//char key = 0;
//
//for (int line = 0; line < 10; ++line)
//{
//	for (int count = 0; count < 10; ++count)
//	{
//		if (playerx == count && playery == line)
//		{
//			cout << "p";
//		}
//		else if (goldx == count && goldy == line)
//		{
//			cout << "g";
//		}
//		else if (star[line][count] == 1)
//		{
//			cout << "*";
//		}
//		else if (star[line][count] == 0)
//		{
//			cout << " ";
//		}
//	}
//	cout << endl;
//}
//for (;;)
//{
//	cin >> key;//wasd
//	if (key == 'w')
//	{
//		playery--;
//	}
//	else if (key == 's')
//	{
//		playery++;
//	}
//	else if (key == 'a')
//	{
//		playerx--;
//	}
//	else if (key == 'd')
//	{
//		playerx++;
//	}
//	system("cls");
//	for (int line = 0; line < 10; ++line)
//	{
//		for (int count = 0; count < 10; ++count)
//		{
//			if (playerx == goldx && playery == goldy)
//			{
//				system("cls");
//				cout << "clear!!!";
//				return 0;
//			}
//			if (star[playery][playerx] == 1)
//			{
//				cout << "실패" << endl;
//				return 0;
//			}
//			else if (playerx == count && playery == line)
//			{
//				cout << "p";
//			}
//			else if (goldx == count && goldy == line)
//			{
//				cout << "g";
//			}
//			else if (star[line][count] == 1)
//			{
//				cout << "*";
//			}
//			else if (star[line][count] == 0)
//			{
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//}