#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include "dish.h"

using namespace std;

void dish::setName(char* n) {
    cout << "Enter the name of the dish: ";
    cin >> n;
    strcpy(name, n);
}
void dish::getName(char *n) {
    strcpy(n, name);
}
void dish::setWeight(int w) {
    cout << "Enter average weight of dish :";
    cin >> w;
    weight = w;
}
int dish::getWeight() {
    return weight;
}
void dish::setIngredients(char *i) {
    cout << "Enter ingredients of dish :";
    cin >> i;
    strcpy(ingredients, i);
}
void dish::getIngredients(char* i) {
    strcpy(i, ingredients);
}
void dish::setTime(int t) {
    cout << "Enter how long does the dish take to cook? (in minutes) :";
    cin >> t;
    time = t;
}
int dish::getTime() {
    return time;
}
void dish::setType(char* t) {
    cout << "Enter type of dish :";
    cin >> t;
    strcpy(type, t);
}
void dish::getType(char* t) {
    strcpy(t, type);
}
