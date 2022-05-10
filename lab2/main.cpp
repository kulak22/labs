#include <iostream>
#include "dish.h"

using namespace std;

int main()
{
	dish first;

	char name[30] = "+";
	first.setName(name);
	char new_name[30];
	first.getName(new_name);

	int weight = 0;
	first.setWeight(weight);

	char ingredients[100] = "+";
	first.setIngredients(ingredients);
	char new_ingredients[100];
	first.getIngredients(new_ingredients);

	int time = 0;
	first.setTime(time);

	char type[20];
	first.setType(type);
	char new_type[20];
	first.getType(new_type);

	cout << "Name of dish :" << new_name << endl;
	cout << "Average weight of dish :" << first.getWeight() << endl;
	cout << "Ingredients of dish :" << new_ingredients << endl;
	cout << "Time for preparing :" << first.getTime() << endl;
	cout << "Type of dish :" << new_type << endl; 
}
