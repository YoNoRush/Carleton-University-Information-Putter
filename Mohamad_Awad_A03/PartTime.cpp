#include <iostream>
#include <fstream>
#include "PartTime.h"
#include "Faculty.h"

using namespace std;

PartTime::PartTime() {
    hoursWorked = 0;
    hourlyRate = 0;
}

float PartTime::salary() {
    return hoursWorked * hourlyRate;
}

void PartTime::userInput() {
    cout << "How many hours does the faculty member work? :" << endl;
    cin >> hoursWorked;
    cout << "How much do they get paid per hour? :" << endl;
    cin >> hourlyRate;
}

void PartTime::printInfo() {
    cout << firstName << " " << lastName << " is a part-time faculty member in the " << DepName << " department, they work " << hoursWorked << " hours," << endl << "getting paid " <<
        hourlyRate << " per hour, leaving them with a salary of " << salary() << " $.";

    ofstream file1;
    file1.open("Faculty_Parttime.csv");
    file1 << "First Name, Last Name, Status, Department , Hours Worked, Hourly Rate, Salary \n ";
    file1 << firstName << "," << lastName << "," << "Faculty" << ","  << DepName << "," << hoursWorked << "," << hourlyRate << "," << salary() << endl;
    file1.close();

    cout << endl <<  "Information successfully uploaded to Faculty_Parttime.csv" << endl;
}

PartTime::~PartTime() {}

