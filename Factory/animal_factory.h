#pragma once
#include <iostream>
#include <memory>
#include "animal.h"

class AnimalFactory {
public:
	virtual std::unique_ptr<Animal> createAnimal() = 0;
};


class CatFactory : public AnimalFactory {
public:
	virtual std::unique_ptr<Animal> createAnimal() {
		std::cout << "Name: ";
		std::string name;
		std::cin >> name;
		std::cout << "Age: ";
		size_t age;
		std::cin >> age;
		std::cout << "Tail length: ";
		double moustache_length;
		std::cin >> moustache_length;
		while (std::cin.get() != '\n') continue;
		return std::unique_ptr<Animal>(new Cat(moustache_length, name, age));
	}
};


class DogFactory : public AnimalFactory {
public:
	virtual std::unique_ptr<Animal> createAnimal() {
		std::cout << "Name: ";
		std::string name;
		std::cin >> name;
		std::cout << "Age: ";
		size_t age;
		std::cin >> age;
		std::cout << "Tail length: ";
		double tail_length;
		std::cin >> tail_length;
		while (std::cin.get() != '\n') continue;
		return std::unique_ptr<Animal>(new Dog(tail_length, name, age));
	}
};