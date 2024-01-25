#include <iostream>
using namespace std;

int main()
{
	cout << "Homework 3" << endl;

	setlocale(LC_ALL, "ru");
	
	int income, lNum, cRows, penalty, uChoice;
	float rPrice, temp;

	penalty = 0;
	rPrice = 0.5;

	cout << "1 - Доход и кол-во опозданий -> Кол-во строк кода\n";

	cout << "2 - Доход и кол-во строк кода -> Кол-во опозданий\n";

	cout << "3 - Количество опозданий и кол-во строк кода -> Доход\n";

	cout << "Выберите пункт: ";

	
	cin >> uChoice;

	switch (uChoice)
	{
	case 1:
	{
		cout << "Зарплата($), желаемая Васей: ";
		cin >> income;

		cout << "Сколько раз Вася опаздывал?: ";
		cin >> lNum;

		cRows = income / rPrice;

		if (lNum >= 3)
		{
				penalty = lNum / 3 * 20;
			cRows = cRows + penalty / rPrice;
		}
		cout << "Кол-во строк кода: " << cRows;
		cout << "\n";
		break;
	}
	case 2:
	{
		cout << "Доход, желаемый Васей($): ";
		cin >> income;

		cout << "Введите кол-во строк кода: ";
		cin >> cRows;

		temp = cRows * rPrice;

		if (income >= temp)
		{
			cout << "Вам запрещается опаздывать!";
		}
		else
		{
			lNum = (temp - income) / 20 * 3;
			cout << "Вам разрешается опаздывать ";
			cout << lNum << " или " << lNum + 1;
			cout << " или " << lNum + 2 << "раз";
		}
		break;
	}
	case 3:
	{
		cout << "Введите кол-во строк кода: ";
		cin >> cRows;

		cout << "Сколько раз Вася опаздывал?: ";
		cin >> lNum;

			temp = cRows * rPrice;
		if (lNum >= 3)
		{
			penalty = lNum / 3 * 20;
			if (penalty >= temp)
			{
				cout << "Ты ничего не получишь\n";
			}
			else
			{
				income = temp - penalty;
				cout << "Ты получишь " << income << "$\n";
			}
		}
		else
		{
			income = temp;
			cout << "Ты получишь " << income << "$\n";
		}
		break;
	}
	default:
		cout << "АХТУНГ! Неправильный ввод";
	}
	return 0;
}