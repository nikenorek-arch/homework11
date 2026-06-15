#include<iostream>
#include<windows.h>
#include<string>

using namespace std;

//Через string

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    string name, surname, fullname;

    cout << "Введите имя: ";
    cin >> name;
    cout << "Введите фамилию: ";
    cin >> surname;

    fullname = name + " " + surname;

    cout << "Здравствуйте, " << fullname << "!";
}