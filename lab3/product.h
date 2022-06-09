#ifndef LAB_3_2_CEM_PRODUCT_H
#define LAB_3_2_CEM_PRODUCT_H
#include <iostream>
#include <string>

using namespace std;

class product {

private:
	int weight; // Маса товару
	string code; // Код 
	string type; // Тип
	int length; // Довжина
public:
	product(); // Конструктор за замовчуванням  

	product(const product &other); // Конструктор копіювання

	product(int weight, string code, int length, string type); // Конструктор с параметрами

	~product(); // Деструктор 
	
	void Print();

};

#endif //LAB_3_2_CEM_PRODUCT_H
