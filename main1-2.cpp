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

char* concat_string(char* str1, char* str2){
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    char* result = new char[str1_len+str2_len + 2]; //один под пробел, один под нуль-терминатор
    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);

    return  result;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    cout << "Введите имя: ";
    char* name = cin_string(); 
    cout << "Введите фамилию: ";
    char* surname = cin_string(); 

    char* fullname =  concat_string(name, surname);
    cout << "Здравствуйте, " << fullname << "!";

    delete[] name;
    delete[] surname;
    delete[] fullname;
}