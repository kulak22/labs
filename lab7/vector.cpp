#include <iostream> 
#include "vector.h"
#include "error.h"

using namespace std;

Vector::Vector(int s) {
	if (s > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");
	size = s;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = i + 4;
	}
}
Vector::Vector(int s, int* mas) {
	if (s > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");
	size = s;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = mas[i];
	}
}
const Vector& Vector::operator =(const Vector& op1) {
	if (&op1 == this) {
		return *this;
	}
	if (arr != 0) {
		delete[]arr;
	}
	size = op1.size;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = op1.arr[i];
	}
	return *this;
}
int Vector::operator[](int i) {
	if (i < 0) throw error("index <0");
	if (i >= size) throw error("index>size");
	return arr[i-1];
}
int Vector::operator()() {
	return size;
}
Vector& Vector::operator -(int n) {
	if (size == 0) throw error("Vector is empty");
	if (n == 0) {
		return *this;
	}
	Vector temp(size, arr);
	if (arr != 0) {
		delete[]arr;
	}
	size = size - n;
	if (size < 0) throw error("Vector<0");
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = temp.arr[i];
	}
	return *this;

}
Vector& Vector::operator +(int N) {
	if (N == 0) {
		return *this;
	}
	Vector temp(size, arr);
	if (arr != 0) {
		delete[]arr;
	}
	size = size + N;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		if (i < temp.size) {
			arr[i] = temp.arr[i];
		}
		else {
			arr[i] = 0;
		}
	}
	return *this;
}
istream& operator >>(istream& in, Vector& op1)
{
	for (int i = 0; i < op1.size; i++)
	{
		cout << ">";
		in >> op1.arr[i];
	}
	return in;
}
ostream& operator<<(ostream& out, const Vector& op1)
{
	if (op1.size == 0) out << "Empty\n";
	else
	{
		for (int i = 0; i < op1.size; i++)
			out << op1.arr[i] << " ";
		out << endl;
	}
	return out;
}
Vector::~Vector()
{
	if (arr != 0) delete[]arr;
}
