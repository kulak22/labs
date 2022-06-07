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
        cout << first(4) << endl;
        first - 2;
        cout << first << endl;
        first + 2;
        cout << first << endl;
    }
    catch (error& e)
    {
        e.what();
    }
    return 0;
}
