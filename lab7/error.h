#ifndef LAB_7_2_CEM_ERROR_H
#define LAB_7_2_CEM_ERROR_H
#include <string>
#include <iostream>

using namespace std;

class error //клас помилка.
{
    string str;
public:
    //конструктор, ініціює атрибут str повідомленням про помилку.
    error(string s)
    {
        str = s;
    }
    void what()
    {
        cout << str << endl; //виводить значення атрибута str.
    }
};


#endif //LAB_7_2_CEM_ERROR_H
