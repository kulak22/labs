#ifndef LAB_8_2_CEM_ERROR_H
#define LAB_8_2_CEM_ERROR_H
#include <string>
#include <iostream>

using namespace std;

class error
{
    string str;
public:
    error(string s)
    {
        str = s;
    }
    void what()
    {
        cout << str << endl;
    }
};


#endif //LAB_8_2_CEM_ERROR_H
