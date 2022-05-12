#ifndef LAB_5_2_CEM_RIGHTANGLED_H
#define LAB_5_2_CEM_RIGHTANGLED_H
#include <iostream>
#include "pair.h"

using namespace std;

class RightAngled : public Pair
{

protected:
	float c;  
	int s; 
public:
	RightAngled(); // Конструктор по умолчанию
	RightAngled(int a, int b, float c, int s); // Конструктор с параметрами
	~RightAngled(); // Деструктор
	RightAngled& operator=(const RightAngled& op1);
	friend istream& operator>>(istream& in, RightAngled& op1);
	friend ostream& operator<<(ostream& out, const  RightAngled& op1);
};

#endif //LAB_5_2_CEM_RIGHTANGLED_H
