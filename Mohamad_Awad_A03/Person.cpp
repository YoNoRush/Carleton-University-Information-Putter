// Person.cpp
// Created Dr.Rami Sabouni - Systems and Computer Engineering
// BIT2400 - Late Summer 2024
// @version 1.0 last updated July 28, 2024

#include "Person.h"
#include "Student.h"
#include "Faculty.h"
using namespace std;

// Constructor to init variables
Person::Person() {
	firstName = "";
	lastName = "";
	age = 0;
	personType = false;		// default is Student
}		

// Printout the user's basic info
void Person::printInfo() {
	cout << "The person's name is " << firstName << " " << lastName << "\n";
	cout << "They are " << age << " years old" << endl;
	switch (personType) {
	case 0:
		cout << "They are a student" << endl;
		break;
	case 1:
		cout << "They are a faculty member" <<endl;
		break;
	}
	cout << endl;
}	

// Get person's info
void Person::userInput() {
	cout << "Hello, welcome to the Carleton Univeristy Information Putter" << endl;

	cout << "Please enter the person's first name:" << endl;
	cin >> firstName;

	cout << "Enter their last name:" << endl;
	cin >> lastName;

	cout << "Enter their age:" << endl;
	cin >> age;

	cout << "Are they a student or faculty member? (0 -> Student // 1 -> Faculty):" << endl;
	cin >> personType;
	
	cout << endl;
}

void Person::decider() {
	if (personType == false) {
		Student student1;
		student1.firstName = firstName;
		student1.lastName = lastName;
		student1.userInput();
		student1.printInfo();
		student1.decider();
	}

	else if (personType == true){
		Faculty faculty1;
		faculty1.firstName = firstName;
		faculty1.lastName = lastName;
		faculty1.userInput();
		faculty1.printInfo();
		faculty1.decider();
	}
}




// Destructor implementation
Person::~Person() {}