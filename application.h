#pragma once
#include <iostream>
#include "animal_factory.h"
class Application {
public:
	std::unique_ptr<AnimalFactory> getFactory() {
		int choice = 0;
		while (choice != 1 || choice != 2) {
			std::cout << "Choose factory:" << std::endl;
			std::cout << "1: Cat Factory." << std::endl;
			std::cout << "2: Dog Factory." << std::endl;
			std::cin >> choice;
			if (choice == 1)
				return std::unique_ptr<AnimalFactory>(new CatFactory());
			else if (choice == 2)
				return std::unique_ptr<AnimalFactory>(new DogFactory());
			else
				continue;
		}
	}
};