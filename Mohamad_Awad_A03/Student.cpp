// Student.cpp
// Created Dr.Rami Sabouni - Systems and Computer Engineering
// BIT2400 - Late Summer 2024
// @version 1.0 last updated July 28, 2024
 

#include "Student.h"

#include "Graduate.h"
#include "Person.h"
#include "underGrad.h"


using namespace std;

Student::Student() {
	DepName = "";
	GPA = 0;
	studentType = false;
	regType = false;
}

// Printout the student's basic info
void Student::printInfo() {
	cout << firstName << " "<< lastName <<" is a ";
	switch (regType)
	{
	case 0:
		cout << "full time ";
		break;
	case 1:
		cout << "part time ";
		break;
	}
	switch (studentType)
	{
	case 0:
		cout << "undergraduate ";
		break;
	case 1:
		cout << "graduate ";
		break;
	}
	cout << DepName << " student." << endl << endl;
}

// Get student's info
void Student::userInput() {					// Get student info

	cout << "Enter the student's Department name: " << endl;
	cin >> DepName;

	cout << "Enter the student's GPA: " << endl;
	cin >> GPA;

	cout << "Enter (0) for Undergrad Student (1) for Grad student: " << endl;
	cin >> studentType;

	cout << "Enter (0) for full time student (1) for part time: " << endl;
	cin >> regType;
	
	cout << endl;
}

void Student::decider() {
	if (studentType == 0) {
		underGrad underGrad1;
		underGrad1.GPA = GPA;
		underGrad1.firstName = firstName;
		underGrad1.lastName = lastName;
		underGrad1.DepName = DepName;
		underGrad1.regType = regType;
		underGrad1.userInput();
		underGrad1.printInfo();
	}
	else if (studentType == 1) {
		Graduate graduate1;
		graduate1.GPA = GPA;
		graduate1.firstName = firstName;
		graduate1.lastName = lastName;
		graduate1.DepName = DepName;
		graduate1.regType = regType;
		graduate1.userInput();
		graduate1.printInfo();
	}
	else {cout << "ERROR" << endl;}
}

Student::~Student(){}