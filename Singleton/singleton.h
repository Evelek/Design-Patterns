#pragma once
#include <iostream>
#include <string>

class Singleton {
private:
	static bool instanceFlag;
	static Singleton *single;

	std::string name;

	Singleton(std::string name);
	~Singleton();
public:
	static Singleton *getInstance(std::string name);

	void Show();
};
