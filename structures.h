#pragma once

#include <iostream>
#include <string> // подключать string не обязательно, если мы просто выводим строки, 
// а если используем методы или функции строк, то обязательно

struct person {
	std::string name = "noname";
	int age = 0;
	std::string job = "empty";
	int salary = 0;
};

void print_person(const person& P);
person input_person();