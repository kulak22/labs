#include <iostream>
#include "error.h"
#include "vector.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    try
    {   
        Vector first(6);
        cout << first << endl;
        Vector second;
        first(4);
        cout << first << endl;
        second = first - 2;
        cout << second << endl;
        second = first + 2;
        cout << second << endl;
    }
    catch (error& e)
    {
        e.what();
    }
    return 0;
}
