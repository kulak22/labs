#include <iostream>
#include "matrix.h"

using namespace std;
matrix::matrix() {  // Конструктор за замовчуванням 
	this->a11 = 0;
	this->a12 = 0;
	this->a21 = 0;
	this->a22 = 0;
	this->detA = 0;
}
matrix::matrix(int a11, int a12, int a21, int a22) {  // Конструктор з параметрами
	this->a11 = a11;
	this->a12 = a12;
	this->a21 = a21;
	this->a22 = a22;
	this->det(this->a11, this->a12 , this->a21, this->a22);
}
void matrix::Print() {
	cout << endl;
	cout << "\t" << a11 << "\t" << a12 << endl;
	cout << "\t" << a21 << "\t" << a22 << endl;
	cout << "detA = : " << detA << endl;
}
void matrix::det(int a11, int a12, int a21, int a22) {  // Функція яка рахує визначник
	this->detA = a11 * a22 - a12 * a21;
}
matrix& matrix::operator = (const matrix & other){  // Оператор привласнення
	this->a11 = other.a11;
	this->a12 = other.a12;
	this->a21 = other.a21;
	this->a22 = other.a22;
	this->detA = other.detA;
	return *this;
}
matrix matrix::operator- (const matrix& other) {  // Оператор різниці
	matrix temp;
	temp.a11 = this->a11 - other.a11;
	temp.a12 = this->a12 - other.a12;
	temp.a21 = this->a21 - other.a21;
	temp.a22 = this->a22 - other.a22;
	temp.det(temp.a11, temp.a12, temp.a21, temp.a22);
	return temp;
}
matrix operator*= (matrix& other, int number) {  // Добуток матриці на число
	other.a11 *=number;
	other.a12 *=number;
	other.a21 *=number;
	other.a22 *= number;
	other.det(other.a11, other.a12, other.a21, other.a22);
	return other;
}
matrix operator-- (matrix& other) {  //  Префіксна ( змінює до ) --a
	other.a11--;
	other.a12--;
	other.a21--;
	other.a22--;
	other.det(other.a11, other.a12, other.a21, other.a22);  // Рахуємо визначник
	return other;
}
matrix operator--(matrix& other, int number) {  //  Постфіксна ( змінює після ) a--
	matrix temp(other);
	other.a11--;
	other.a12--;
	other.a21--;
	other.a22--;
	other.det(other.a11, other.a12, other.a21, other.a22);  // Рахуємо визначник
	return temp;
}
