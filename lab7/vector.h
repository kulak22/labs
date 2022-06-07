#ifndef LAB_7_2_CEM_VECTOR_H
#define LAB_7_2_CEM_VECTOR_H
#include <iostream> 

using namespace std;
const int MAX_SIZE = 20;


class Vector {
	int size;
	int* arr;
public:
	Vector() { // Конструктор по умолчанию
		size = 0;
		arr = 0;
	}
	Vector(int s); // Конструктор с параметрами
	Vector(int s, int* mas); // Конструктор с параметрами
	~Vector(); // Деструктор
	const Vector& operator =(const Vector& op1);
	int operator[](int i);  // Любой элемент массива
	int operator ()();
	Vector& operator -(int n);  // Удаляет n последних элементов
	Vector& operator +(int N);  // Добавляет N нулевых элементов
	friend ostream& operator<<(ostream& out, const Vector& op1);
	friend istream& operator>>(istream& in, Vector& op1);
};


#endif //LAB_7_2_CEM_VECTOR_H
