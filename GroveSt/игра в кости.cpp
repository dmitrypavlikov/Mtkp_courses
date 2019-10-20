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
		//srand((unsigned)time(NULL));
		int g2 = rand() % 6 + 1;
		//srand((unsigned)time(NULL));
		int g3 = rand() % 6 + 1;
		cout << "Результат: " << g1 << "," << g2 << "," << g3 << endl;
		cout << "2-й игрок нажмите <Enter> для броска. ";
		getchar();
		srand((unsigned)time(NULL));
		int g4 = rand() % 6 + 1;
		//srand((unsigned)time(NULL));
		int g5 = rand() % 6 + 1;
		//srand((unsigned)time(NULL));
		int g6 = rand() % 6 + 1;
		cout << "Результат: " << g4 << "," << g5 << "," << g6 << endl;
		int gamer1 = g1 + g2 + g3;
		int gamer2 = g4 + g5 + g6;
		cout << "Итог: ";
		if (gamer1 == gamer2) cout << "Ничья" << endl;
		if (gamer1 > gamer2) cout << "Победа первого игрока" << endl;
		if (gamer1 < gamer2) cout << "Победа второго игрока" << endl;
		cout << "Хотите сыграть еще раз? Y/N" << endl;
		cin >> a;
		
	} while (a == 'Y' || a == 'y');
	return 0;
}
