#ifndef LAB_2_2_CEM_DISH_H
#define LAB_2_2_CEM_DISH_H

using namespace std;

class dish {

private:
	char name[30];
	int weight;
	char ingredients[100];
	int time;
	char type[20];
public:
	void setName(char* n);
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
