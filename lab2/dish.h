#ifndef LAB_2_2_CEM_DISH_H
#define LAB_2_2_CEM_DISH_H

using namespace std;

class dish {

private:
	char name[30];  // Ім'я страви
	int weight;	// Маса 
	char ingredients[100];	// Складові страви через кому
	int time;	// Час приготування 
	char type[20];	// Тип
public:
	void setName(char* n);	// Гетери на сетери
	void getName(char *n);
	
	void setWeight(int w);
	int getWeight();

	void setIngredients(char* i);
	void getIngredients(char* i);

	void setTime(int t);
	int getTime();

	void setType(char* t);
	void getType(char* t);
	
};

#endif //LAB_2_2_CEM_DISH_H
