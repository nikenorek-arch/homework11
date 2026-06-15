#include<iostream>
#include<windows.h>
#include<cstring>

using namespace std;

//Через char

char* cin_string(){
    char buffer[256];
    cin >> buffer;
    int length = strlen(buffer);
    char* name = new char[length + 1];
    return strcpy(name, buffer);
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char word[] = "яблоко";
    char* res = {0};

    do{
        
        delete[] res;
        
        cout << "Угадайте слово: ";
        res = cin_string();
        if (strcmp(word, res) != 0) cout << "Неправильно!" << endl;
    }
    while (strcmp(word, res) != 0);

    cout << "Правильно! Вы победили! Загаданное слово — " << word;

    delete[] res;

}