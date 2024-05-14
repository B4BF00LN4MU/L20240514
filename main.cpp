#include <iostream>

using namespace std;

int main()
{
	int Star[10][10] =
	{
		{ 1,1,1,1,1,1,1,1,1,1 },
		{ 1,0,0,0,1,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,1,1,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,1,0,0,0,1 },
		{ 1,0,0,0,0,1,0,0,0,1 },
		{ 1,1,1,1,1,1,1,1,1,1 }
	};
	int PlayerX = 1;
	int PlayerY = 1;
	int GoldX = 8;
	int GoldY = 8;
	char Key = 0;

	for (int Line = 0; Line < 10; ++Line)
	{
		for (int Count = 0; Count < 10; ++Count)
		{
			if (PlayerX == Count && PlayerY == Line)
			{
				cout << "P";
			}
			else if (GoldX == Count && GoldY == Line)
			{
				cout << "G";
			}
			else if (Star[Line][Count] == 1)
			{
				cout << "*";
			}
			else if (Star[Line][Count] == 0)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for (;;)
	{
		cin >> Key;//wasd
		if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'd')
		{
			PlayerX++;
		}
		system("cls");
		for (int Line = 0; Line < 10; ++Line)
		{
			for (int Count = 0; Count < 10; ++Count)
			{
				if (PlayerX == GoldX && PlayerY == GoldY)
				{
					system("cls");
					cout << "Clear!!!";
					return 0;
				}
				if (Star[PlayerY][PlayerX]==1)
				{
					cout << "½ÇÆÐ" << endl;
					return 0;
				}
				else if (PlayerX == Count && PlayerY == Line)
				{
					cout << "P";
				}
				else if (GoldX == Count && GoldY == Line)
				{
					cout << "G";
				}
				else if (Star[Line][Count] == 1)
				{
					cout << "*";
				}
				else if (Star[Line][Count] == 0)
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}