#include "libs.h"

int main() 
{
    cout << "homework 1" << endl;
    setlocale(LC_ALL, "ru");
    char symbol;

    cout << "----------------" << endl;
    cout << "Введите символ: ";
    cin >> symbol;
    cout << "Проверяем.. Подождите" << endl;
    Sleep(3000);

    if (isalpha(symbol)) 
    {
        cout << "Это буква." << endl;
    }

    else if (isdigit(symbol)) 
    {
        cout << "Это цифра." << endl;
    }
    
    else if (ispunct(symbol)) 
    {
        cout << "Это знак препинания." << endl;
    }
    
    else 
    {
        cout << "Это другой символ." << endl;
    }
    cout << "----------------" << endl;
    return 0;
}