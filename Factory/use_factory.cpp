#include <iostream>
#include <memory>
#include "application.h"
#include "animal_factory.h"
#include "animal.h"

int main() {
	std::unique_ptr<Application> app(new Application());

	std::unique_ptr<AnimalFactory> factory = app->getFactory();
	
	std::unique_ptr<Animal> animal = factory->createAnimal();

	animal->Show();

	std::cin.get();
}