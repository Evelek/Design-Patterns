#include "class.h"

bool Singleton::instanceFlag = false;
Singleton *Singleton::single = nullptr;

Singleton::Singleton(std::string name) : name(name) {
	std::cout << "Object constructed" << std::endl;
}

Singleton::~Singleton() {
	instanceFlag = false;
	delete single;
}

Singleton *Singleton::getInstance(std::string name) {
	if (!instanceFlag) {		// if is false, create new object
		single = new Singleton(name);
		instanceFlag = true;
		return single;
	}
	else {
		std::cout << "Object already initialized!" << std::endl;
		return single;
	}
}

void Singleton::Show() {
	std::cout << "Name: " << name << std::endl;
}
