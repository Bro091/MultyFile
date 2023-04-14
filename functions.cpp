#include "functions.h"
#include <iostream>

extern const double _PI = 3.14; //модификатор extern используется впервые. (другие модификаторы static, const, unsignet)

double sum(double num1, double num2) {
	return num1 + num2;
}

void hi(){
	std::cout << "Hello world!\n";
}
void show_pi() {
	std::cout << "Число Pi = " << _PI << std::endl;
}