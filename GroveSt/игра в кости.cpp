
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Поехали!!!";
	char a;
	time_t t;
	do
	{
		system("cls");
		cout << "1-й игрок нажмите <Enter> для броска. ";
		getchar();
		srand((unsigned)time(NULL));
		int g1 = rand() % 6 + 1;
		cout << "Результат: " << g1 << endl;
		cout << "2-й игрок нажмите <Enter> для броска. ";
		getchar();
		srand((unsigned)time(NULL));
		int g2 = rand() % 6 + 1;
		cout << "Результат: " << g2 << endl;
		cout << "Итог: ";
		if (g1 == g2) cout << "ничья" << endl;
		if (g1 > g2) cout << "1-й игрок выиграл" << endl;
		if (g1 < g2) cout << "2-й игрок выиграл" << endl;
		cout << "Хотите сыграть еще раз? Y/N" << endl;
		cin >> a;
		
	} while (a == 'Y' || a == 'y');
	return 0;
}
