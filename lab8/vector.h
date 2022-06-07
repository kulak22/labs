#ifndef LAB_8_2_CEM_VECTOR_H
#define LAB_8_2_CEM_VECTOR_H
#include <iostream>
#include "error.h"

using namespace std;
const int MAX_SIZE = 20;
template <class T>
class Vector {
    T size;
    T* arr;

public:
    void show() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    Vector() {
        size = 0;
        arr = 0;
    }
    Vector(T s)
    {
        if (s > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");
        size = s;
        arr = new T[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i + 4;
        }
    }
    ~Vector()
    {
        if (arr != 0) delete[]arr;
    }
    Vector(T s, T* mas)
    {
        if (s > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");
        size = s;
        arr = new T[size];
        for (int i = 0; i < size; i++) {
            arr[i] = mas[i];
        }
    }
    const Vector& operator =(const Vector& op1) {
        if (&op1 == this) {
            return *this;
        }
        if (arr != 0) {
            delete[]arr;
        }
        size = op1.size;
        arr = new T[size];
        for (int i = 0; i < size; i++) {
            arr[i] = op1.arr[i];
        }
        return *this;
    }
    T operator [](T i)
    {
        if (i < 0) throw error("index <0");
        if (i >= size) throw error("index>size");
        return arr[i - 1];
    }
    T operator()() {
        return size;
    }
    Vector& operator +(T N) {
        if (N == 0) {
            return *this;
        }
        Vector temp(size, arr);
        delete[]arr;
        size = size + N;
        arr = new T[size];
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
    Vector& operator -(T n) {
        if (size == 0) throw error("Vector is empty");
        if (n == 0) {
            return *this;
        }
        Vector temp(size, arr);
        delete[]arr;
        size = size - n;
        if (size < 0) throw error("Vector<0");
        arr = new T[size];
        for (int i = 0; i < size; i++) {
            arr[i] = temp.arr[i];
        }
        return *this;
    }
};
#endif //LAB_8_2_CEM_VECTOR_H
