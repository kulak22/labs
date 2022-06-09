#ifndef LAB_7_2_CEM_VECTOR_H
#define LAB_7_2_CEM_VECTOR_H
#include <iostream> 

using namespace std;
const int MAX_SIZE = 20;


class Vector {
	int size;
	int* arr;
public:
	Vector() { // Конструктор за замовчуванням
		size = 0;
		arr = 0;
	}
	Vector(int s); // Конструктор з параметрами
	Vector(int s, int* mas); // Конструктор з параметрами
	~Vector(); // Деструктор
	const Vector& operator =(const Vector& op1);	// Оператор присвоєння
	int operator[](int i);  // Будь-який елемент масива
	int operator ()(){
		return size;
	}
	Vector& operator -(int n);  // Видаляє n останніх елементів
	Vector& operator +(int N);  // Додає N нульових елементів
	friend ostream& operator<<(ostream& out, const Vector& op1);	// Оператор виведення
	friend istream& operator>>(istream& in, Vector& op1);	// Оператор введення
};


#endif //LAB_7_2_CEM_VECTOR_H
