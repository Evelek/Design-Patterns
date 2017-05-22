#pragma once
#include <iostream>
#include <string>

class Animal {
private:
	std::string name;
	size_t age;

public:
	Animal(std::string name, size_t age) : name(name), age(age) { }

	virtual void Show() = 0;

protected:
	// getters
	const std::string &getName() const { return name; }
	const size_t &getAge() const { return age; }
};


class Cat : public Animal {
private:
	double moustache_length;

public:
	Cat(double moustache_length, std::string name, size_t age)
		: moustache_length(moustache_length), Animal(name, age) { }

	virtual void Show() {
		std::cout << "Name: " << getName() << std::endl;
		std::cout << "Age:" << getAge() << std::endl;
		std::cout << "Moustache length: " << moustache_length << std::endl;
	}
};


class Dog : public Animal {
private:
	double tail_length;

public:
	Dog(double tail_length, std::string name, size_t age)
		: tail_length(tail_length), Animal(name, age) {
	}

	virtual void Show() {
		std::cout << "Name: " << getName() << std::endl;
		std::cout << "Age:" << getAge() << std::endl;
		std::cout << "Tail length: " << tail_length << std::endl;
	}
};