#pragma once
#include <iostream>

double sum(double num1, double num2);

void hi(); // При написании прототипа для функции hi не найдено реализации, по этому подчеркивается зеленым цветом

template <typename T> // шаблонные и встраевымые функции должны быть описаны в заголовочном файле .h
void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

void show_pi();

