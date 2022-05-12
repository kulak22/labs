#include <iostream>
#include <math.h>
#include "rightangled.h"

using namespace std;
RightAngled::RightAngled() :Pair() {
	this->c = 0;
	this->s = 0;
}
RightAngled::RightAngled(int a, int b, float c, int s) : Pair(a, b) {
	this->c = sqrt(a ^ 2 + b ^ 2);
	this->s = a * b / 2;
}
RightAngled& RightAngled::operator=(const RightAngled& op1) {
	if (&op1 == this) {
		return *this;
	}
	this->a = op1.a;
	this->b = op1.b;
	this->c = op1.c;
	this->s = op1.s;
	return *this;
}
istream& operator>>(istream& in, RightAngled& op1) {
	cout << "\nA = ";
	in >> op1.a;
	cout << "B = ";
	in >> op1.b;
	op1.c = sqrt(op1.a*op1.a + op1.b*op1.b);
	op1.s = op1.a * op1.b / 2;
	return in;
}
ostream& operator<<(ostream& out, const  RightAngled& op1) {
	out << "\nA = " << op1.a;
	out << "\nB = " << op1.b;
	out << "\nС = " << op1.c;
	out << "\nS = " << op1.s;
	out << "\n";
	return out;
}
RightAngled::~RightAngled() {

}
