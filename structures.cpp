#include "structures.h"
#include <iostream>

void print_person(const person& P){
	std::cout << "Имя:       " << P.name << std::endl;
	std::cout << "Возраст:   " << P.age << std::endl;
	std::cout << "Должность: " << P.job << std::endl;
	std::cout << "Зарплата:  " << P.salary << std::endl;
}

person input_person(){
	person tmp;
	std::cout << "Введите имя -> ";
	std::getline(std::cin, tmp.name);
	std::cout << "Введите возраст -> ";
	std::cin >> tmp.age;
	std::cin.ignore();
	std::cout << "Введите должность -> ";
	std::getline(std::cin, tmp.job);
	std::cout << "Введите зарплату -> ";
	std::cin >> tmp.salary;
	std::cin.ignore();
	return tmp;



}
