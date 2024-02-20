#include <iostream>
#include "windows.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	int m1, m2, m3, bigm, topm;
	float prod1, prod2, prod3;

	cout << "Программа для подсчета данных!\n";

	cout << "Введите уровень продаж Первого менеджера: ";
	cin >> m1;
	cout << "Введите уровень продаж Второго менеджера: ";
	cin >> m2;
	cout << "Введите уровень продаж Третьего менеджера: ";
	cin >> m3;
	if (m1 < 500)
	{
		prod1 = 200 + m1 * 0.03;
	}
	else if ((m1 >= 500) && (m1 < 1000))
	{
		prod1 = 200 + m1 * 0.05;
	}
	else
	{
		prod1 = 200 + m1 * 0.08;
	}
	if (m2 < 500)
	{
		prod2 = 200 + m2 * 0.03;
	}
	else if ((m2 >= 500) && (m2 < 1000))
	{
		prod2 = 200 + m2 * 0.05;
	}
	else
	{
		prod2 = 200 + m2 * 0.08;
	}
	if (m3 < 500)
	{
		prod3 = 200 + m3 * 0.03;
	}
	else if ((m3 >= 500) && (m3 < 1000))
	{
		prod3 = 200 + m3 * 0.05;
	}
	else
	{
		prod3 = 200 + m3 * 0.08;
	}
	if (m1 > m2)
	{
		bigm = 1;
		topm = m1;
	}
	else
	{
		bigm = 2;
		topm = m2;
	}
	if (m3 > topm)
	{
		bigm = 3;
	}

	switch (bigm) {
	case 1:
		prod1 = prod1 + 200;
		break;
	case 2:
		prod2 = prod2 + 200;
		break;
	case 3:
		prod3 = prod3 + 200;
		break;
	}

	cout << "Зарплата первого менеджера: " << prod1 << "\n";
	cout << "Зарплата второго менеджера: " << prod2 << "\n";
	cout << "Зарплата третьего менеджера: " << prod3 << "\n";
	cout << "Лучший менеджер по продажам: " << bigm;
	return 0;

}
