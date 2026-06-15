#include<iostream>
#include<windows.h>
#include<string>

using namespace std;

//Через string

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    string word = "яблоко";
    string res;

    do{
        cout << "Угадайте слово: ";
        cin >> res;
        if (res != word) cout << "Неправильно!" << endl;
    }
    while (res != word);

    cout << "Правильно! Вы победили! Загаданное слово — " << word;
}