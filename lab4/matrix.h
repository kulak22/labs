#ifndef LAB_4_2_CEM_MATRIX_H
#define LAB_4_2_CEM_MATRIX_H
#include <iostream>

using namespace std;

class matrix{

private:
	int detA;  // Визначник( Детермінант )
	int a11, a12, a21, a22;  // Елементи матриці
	void det(int a11, int a12, int a21, int a22);  // Функція яка рахує визначник
public:
	matrix();  // Конструктор по умолчанию 

	matrix(int a11, int a12, int a21, int a22);  // Конструктор з параметрами

	matrix& operator= (const matrix& other); // Оператор присвоєння
	matrix operator- (const matrix& other); // Оператор різниці матриці

	friend matrix operator*= (matrix& other, int number);  // Добуток матриці на число
	friend matrix operator-- (matrix& other);  // Префіксна ( змінює до ) --a
	friend matrix operator-- (matrix& other, int number);  //  Постфіксна ( змінює після ) a--

	void Print();


	int GetA11() {	// Гетери
		return a11;
	}
	int GetA12() {
		return a12;
	}
	int GetA21() {
		return a21;
	}
	int GetA22() {
		return a22;
	}
	int GetDetA() {
		return detA;
	}
};

#endif //LAB_4_2_CEM_MATRIX_H
