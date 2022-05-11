#ifndef LAB_3_2_CEM_PRODUCT_H
#define LAB_3_2_CEM_PRODUCT_H
#include <iostream>
#include <string>

using namespace std;

class product {

private:
	int weight; // Масса
	string code; // Код
	string type; // Тип
	int length; // Длина
public:
	product(); // Конструктор по умолчанию

	product(const product &other); // Конструктор копирования 

	product(int weight, string code, int length, string type); // Конструктор с параметрами

	~product(); // Деструктор

	int GetWeight();
	string GetCode();
	string GetType();
	int GetLength();
	void Print();

};

#endif //LAB_3_2_CEM_PRODUCT_H
