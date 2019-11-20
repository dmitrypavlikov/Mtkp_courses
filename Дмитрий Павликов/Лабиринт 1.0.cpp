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
			if (mass[y][x] == '@')
			{
				
				if (step == 119)
				{
					if (mass[y-1][x] != '#')
					{
						swap(mass[y][x], mass[y-1][x]);
						map();
					}
					
				}
				if (step == 115)
				{
					if (mass[y+1][x] != '#')
					{
						
						swap(mass[y][x], mass[y+1][x]);
						map();
						
						step = 0;
						
						
						
					}
				}
				if (step == 97)
				{ 
					if (mass[y][x-1] != '#')
					{
						swap(mass[y][x], mass[y][x-1]);
						map();
					}
				}
				if (step == 100)
				{
					if (mass[y][x+1] != '#')
					{
						swap(mass[y][x], mass[y][x+1]);
						map();
						
						break;
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




