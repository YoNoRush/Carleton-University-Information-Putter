#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
public:
	Student();					// Constructor to init variables
	~Student();
	virtual void printInfo();	// Printout the student's basic info
	virtual void userInput();	// Get student's info
	virtual void decider();
protected:
	std::string DepName;
	double GPA;
	bool studentType;		// Is it undergrad (false) or grad (true)
	bool regType;			// Full time (false) or partime(true)
};

#endif //STUDENT_H
