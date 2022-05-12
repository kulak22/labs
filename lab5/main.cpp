#include <iostream>
#include "pair.h"
#include "rightangled.h"
using namespace std;

void f1(Pair& op1) {
	op1.SetA(1);
	cout << op1;
}
Pair f2()
{
	RightAngled f(1, 1, 0, 0);
	return f;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	// Pair 
	Pair first;
	cin >> first;
	cout << first;
	Pair second(1,2);
	Pair third;
	third = first * second;
	cout << third;
	// RightAngled 
	RightAngled fst;

	cin >> fst;
	cout << fst;
	// Принцип подстановки
	f1(fst);
	third = f2();
	cout << third;

}
