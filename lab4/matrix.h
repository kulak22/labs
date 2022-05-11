#ifndef LAB_4_2_CEM_MATRIX_H
#define LAB_4_2_CEM_MATRIX_H
#include <iostream>

using namespace std;

class matrix{

private:
	int detA;  // Определитель( Детерминант )
	int a11, a12, a21, a22;  // Элементы матрицы
	void det(int a11, int a12, int a21, int a22);  // Функция которая считает определитель
public:
	matrix();  // Конструктор по умолчанию 

	matrix(int a11, int a12, int a21, int a22);  // Конструткор с параметрами

	matrix operator= (const matrix& other); // Оператор присваивания

	matrix operator- (const matrix& other);

	friend matrix operator*= (matrix& other, int number);  // Произвидение матрицы на число
	friend matrix operator-- (matrix& other);  // Префиксная ( меняет до) --a
	friend matrix operator-- (matrix& other, int number);  //  Постфиксная ( меняет после ) a--

	void Print();


	int GetA11() {
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
