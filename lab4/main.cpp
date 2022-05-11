#include <iostream>
#include <string>
#include "matrix.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	matrix first(1, 2, 3, 4), second(1, 3, 5, 7), third;
	cout << "first : "; first.Print();
	cout << "second : "; second.Print();
	cout << "third : "; third.Print();
	cout << "-------------------------------------" << endl;
	int answer;
	cout << " Выберите : " << endl;
	cout << "1. third = first and third = second " << endl;
	cout << "2. third = first-second " << endl;
	cout << "3. first *= number " << endl;
	cout << "4. third = --first " << endl;
	cout << "5. third = first--" << endl;
	cin >> answer;
	while (true) {
		if (answer == 1) {
			cout << "third = first" << endl;
			third = first;
			cout << "third : "; third.Print();
			cout << "third = second" << endl;
			third = second;
			cout << "third : "; third.Print();
			break;
		}
		else if (answer == 2) {
			cout << "third = first-second " << endl;
			third = first - second;
			cout << "third : "; third.Print();
			break;
		}
		else if (answer == 3) {
			int number;
			cout << "Введите number : ";
			cin >> number;
			cout << "first *=" << number << endl;
			first *= number;
			cout << "first : "; first.Print();
			break;
		}
		else if (answer == 4) {
			cout << "third = --first " << endl;
			third = --first;
			cout << "third : "; third.Print();
			break;
		}
		else if (answer == 5) {
			cout << "third = first-- " << endl;
			third = first--;
			cout << "third : "; third.Print();
			break;
		}
	}


}


