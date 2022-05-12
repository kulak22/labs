#include <iostream>
#include "pair.h"

using namespace std;
Pair::Pair() {
	this->a = 0;
	this->b = 0;
}
Pair::Pair(int a, int b) {
	this->a = a;
	this->b = b;
 }
void Pair::SetA(int a) {
	this->a = a;
}
int Pair::GetA() {
	return this->a;
}
void Pair::SetB(int b) {
	this->b = b;
}
int Pair::GetB() {
	return this->b;
}
Pair& Pair::operator=(const Pair& op1) {
	if (&op1 == this) {
		return *this;
	}
	this->a = op1.a;
	this->b = op1.b;
	return *this;
}
Pair operator*(Pair& op1, Pair& op2) {
	Pair temp;
	temp.a = op1.a * op2.a;
	temp.b = op1.b * op2.b;
	return temp;
}
istream& operator>>(istream& in, Pair& op1) {
	cout << "\nA = ";
	in >> op1.a;
	cout << "B = ";
	in >> op1.b;
	return in;
}
ostream& operator<<(ostream& out, const Pair& op1)
{
	out << "\nA = " << op1.a;
	out << "\nB = " << op1.b;
	out << "\n";
	return out;
}
Pair::~Pair() {

}
