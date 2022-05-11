#include <iostream>
#include <string>
#include "product.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	product first;
	first.Print();
	product second(0, "N/A", 0, "N/A");
	second.Print();
	product third(second);
	third.Print();



	/*
	product array[5] = {};
    for (int i = 0; i < 5; i++){     
		array[i].Print();
	}


	int answer;
	cout << "Выберите : " << endl;
	cout << "1- конструктор по умолчанию " << endl;
	cout << "2- конструктор с параметрами " << endl;
	cout << "3- конструктор копирования " << endl;
	cout << "4- все конструкторы " << endl;
	cin >> answer;
	while (true) {
		product first;

		product second(0, "N/A", 0, "N/A");

		product third(second);

		if (answer == 1) {

			first.Print();
			break;
		}
		else if (answer == 2) {
			second.Print();
			break;
		}
		else if (answer == 3) {
			third.Print();
			break;
		}
		else if(answer==4){
			first.Print();
			second.Print();
			third.Print();
			break;
		}
	}
	*/
}
