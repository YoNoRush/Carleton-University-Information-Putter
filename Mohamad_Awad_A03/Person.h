// Person.h
// Created Dr.Rami Sabouni - Systems and Computer Engineering
// BIT2400 - Late Summer 2024
// @version 1.0 last updated July 28, 2024

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

// base class
class Person {
public:
	Person();			// Constructor to init variables
	~Person();
	virtual void printInfo();	// Printout the user's basic info
	virtual void userInput();	// Get person's info
	virtual void decider();
protected:
	std::string firstName;
	std::string lastName;
	unsigned short int age;
	bool personType;		// Is it a student or a faculty
};

#endif //PERSON_H