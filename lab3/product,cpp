#include <iostream>
#include <string>
#include "product.h"

using namespace std;

void product::Print() {
	cout << "Товар" << endl;
	cout << "Код: " << code << "\tТип: " << type << "\tДлина: " << length << "\tМасса : " << weight << endl;
}
product::product() {   // Конструктор по умолчанию
	cout << " Конструктор по умолчанию " << endl;
	length = 0;
	weight = 0;
	code = "N/A";
	type = "N/A";
}
product::product(const product& other) {   // Конструктор с копированием
	cout << " Конструктор копирования " << endl;
	this->code = other.code;
	this->length = other.length;
	this->type = other.type;
	this->weight = other.weight;
}
product::product(int weight, string code, int length, string type) {   // Конструктор с параметрами
	cout << "Введите код товара : ";
	cin >> code;
	this->code = code;

	cout << "Введите тип товара : ";
	cin >> type;
	this->type = type;

	cout << "Введите длину товара : ";
	cin >> length;
	this->length = length;

	cout << "Введите массу товара : ";
	cin >> weight;
	this->weight = weight;
	cout << " Конструктор с параметрами " << endl;
}
product::~product() {   // Деструктор
	cout << " Деструктор вызван " << endl;
}


