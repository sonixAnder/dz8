#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    cout << "homework 2" << endl;
    setlocale(LC_ALL, "ru");

    int duration;
    int operatorCode;
    double cost;

    cout << "Введите длительность разговора (в минутах): ";
    cin >> duration;

    cout << "Выберите оператора(код): \n";
    cout << "1. МТС\n";
    cout << "2. Билайн\n";
    cout << "3. Мегафон\n";
    cin >> operatorCode;

    

    cout << "Считаем, подождите.." << endl;
    
    Sleep(2000);
    switch (operatorCode) 
    {
    case 1:
    {
        cost = duration * 3.2;
        break;
    }

    case 2:
    {
        cost = duration * 4.5;
        break;
    }

    case 3:
    {
        cost = duration * 6;
        break;
    }

    default:
        std::cout << "Такого оператора нету\n";
        return 0;
    }

    cout << "Стоимость разговора: " << cost << " рублей\n";

    return 0;
}
