#ifndef LAB_5_2_CEM_PAIR_H
#define LAB_5_2_CEM_PAIR_H
#include <iostream>

using namespace std;

class Pair{

protected:
	int a;
	int b;
public:
	Pair();
	Pair(int a, int b);  // Конструктор з параметрами
	void SetA(int a);	// Гетери та сетери
	int GetA();
	void SetB(int b);
	int GetB();
	Pair& operator = (const Pair& op1);  // Оператор присвоєння
	friend Pair operator*(Pair& op1 , Pair&op2);  // Оператор добутку пар чисел
	~Pair();
	friend istream& operator>>(istream& in, Pair& op1);	// Оператор введення
	friend ostream& operator<<(ostream& out, const  Pair& op1);	// Оператор виведення 
};

#endif //LAB_5_2_CEM_PAIR_H
