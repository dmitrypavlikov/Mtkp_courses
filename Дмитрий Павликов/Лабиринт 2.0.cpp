#include <iostream>
#include <conio.h>



using namespace std;
char mass[5][5] = { {'#','#','#','#','#'},
					{'#',' ',' ',' ','#'},
					{'#',' ','@',' ','#'},
					{'#',' ',' ',' ','#'},
					{'#','#','#','#','#'} };
int step;

int map()
{
	system("cls");
	for (int y = 0;y < 5;y++)
	{
		for (int x = 0;x < 5;x++)
		{
			cout.width(2);
			cout << mass[x][y];
		}
		cout << endl;
	}
	return 0;
}

int move()
{
	step = _getch();
	for (int y = 0;y < 5;y++)
	{
		for (int x = 0;x < 5;x++)
		{
			if (mass[x][y] == '@')
			{
				if (step == 119)
				{
					if (mass[x][y-1] != '#')
					{
						swap(mass[x][y], mass[x][y - 1]);
						map();
					}
				}
				if (step == 115)
				{
					if (mass[x][y+1] != '#')
					{
						swap(mass[x][y], mass[x][y + 1]);
						map();
					}
				}
				if (step == 97)
				{ 
					if (mass[x-1][y] != '#')
					{
						swap(mass[x][y], mass[x - 1][y]);
						map();
					}
				}
				if (step == 100)
				{
					if (mass[x+1][y] != '#')
					{
						swap(mass[x][y], mass[x + 1][y]);
						map();
					}
				}
				
			}
		}
	
    }

	return 0;
}

int main()
{
	//step = _getch();
	//cout << step;
	map();
	for (int i = 0;i < 20;i++)
	{

		move();
	}

}


