#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	int x1, y1, x2, y2,n;
	char A;
	cout << "Введите количество проверок" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
	cout << "Введите фигуру которой будет совершен ход"<<endl;
	cout << "(K-король,F-ферзь,S-слон,H-конь,P-пешка)"<<endl;
	cin >> A;
	cout << "Расположение фигурки (1 - 8):" << endl;
	cout << "x1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;
	cout << "Расположение точки проверки (1 - 8)" << endl;
	cout << "x2 = ";
	cin >> x2;
	cout << "y2 = ";
	cin >> y2;
	
		if (A == 'K')
		{
			if (((abs(x1 - x2) == 1) && ((y1 - y2) == 0)) ||
				((abs(y1 - y2) == 1) && ((x1 - x2) == 0)) ||
				((abs(x1 - x2) == 1) && (abs(y1 - y2) == 1)))
			{
				cout << "Yes!" << endl;
			}
			else
			{
				cout << "No!" << endl;
			}
		}
		else
			if (A == 'F')
			{

				if ((abs(x1 - x2) == abs(y1 - y2)) || ((x1 == x2) || (y1 == y2)))
				{
					cout << "Yes!" << endl;
				}
				else
				{
					cout << "No!" << endl;
				}
			}
			else if (A == 'S')
			{
				if (abs(x1 - x2) == abs(y1 - y2))

				{
					cout << "Yes!" << endl;
				}
				else
				{
					cout << "No!" << endl;
				}
			}
			else if (A == 'H')
			{
				if (((abs(x1 - x2) == 2) && (abs(y1 - y2) == 1)) || ((abs(y1 - y2) == 2) && (abs(x1 - x2) == 1)))

				{
					cout << "Yes!" << endl;
				}
				else
				{
					cout << "No!" << endl;
				}
			}
			else if (A == 'P')
			{
				if ((y2 - y1) == 1)

				{
					cout << "Yes!" << endl;
				}
				else
				{
					cout << "No!" << endl;
				}
			}
	}
	
	return 0;
	
}	 
/*Я смотрю у тебя +IQ200 © хуй
༼ つ ◕_◕ ༽つ༼ つ ◕_◕ ༽つ༼ つ ◕_◕ ༽つ*/
