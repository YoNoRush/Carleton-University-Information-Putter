#include <iostream>
#include <fstream>
#include "FullTime.h"
#include "Faculty.h"
#include <cmath>

using namespace std;

FullTime::FullTime() {
    officeExten = 0;
    BaseSalary = 0;
    yearsExp = 0;
}

float FullTime::salary() {
    return (BaseSalary * pow((1.03),yearsExp)); // Had a hard time understanding the other equation, this work works just as well though.
}

void FullTime::userInput() {
    cout << "Enter the faculty member's office extention:" << endl;
    cin >> officeExten;
    cout << "Enter the member's base salary: " << endl;
    cin >> BaseSalary;
    cout << "Enter how many years of experience the faculty member has:" << endl;
    cin >> yearsExp;
}

void FullTime::printInfo() {
    cout << firstName << " " << lastName << " is a full-time faculty member in the " << DepName <<" department, they have a base salary of " << BaseSalary <<
        " $ " << endl << "with " << yearsExp << " years of experience, leaving them with a current salary of " << salary() << " $." << endl;

    ofstream file1;
    file1.open("Faculty_Fulltime.csv");
    file1 << "First Name, Last Name, Status, Department, Part-Time // Full-Time , Office Extension, Base Salary, Years of Experience, Current Salary \n";
    file1 << firstName << "," << lastName << "," << "Faculty" << "," << DepName << "," << "Full-Time" << "," << officeExten <<","<< BaseSalary << "," << yearsExp << "," << salary() << endl;
    file1.close();

    cout << endl <<  "Information successfully uploaded to Faculty_Fulltime.csv" << endl;
}


FullTime::~FullTime() {}