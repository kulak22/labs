#include <iostream>
#include "error.h"
#include "vector.h"

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    try
    {
        Vector<int>first(6);
        first.show();
        Vector<int>second;
        second = first - 2;
        second.show();
        second = first + 2;
        second.show();
        cout << first() << endl;
        cout << first[5]; 
    }
    catch (error& e)
    {
        e.what();
    }
    return 0;
}
