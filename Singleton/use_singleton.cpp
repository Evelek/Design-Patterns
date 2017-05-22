#include <iostream>
#include "class.h"

int main() {
	Singleton *first, *second;

	first = Singleton::getInstance("Evelek");
	first->Show();
	second = Singleton::getInstance("Evelek");
	second->Show();

	std::cin.get();
}
