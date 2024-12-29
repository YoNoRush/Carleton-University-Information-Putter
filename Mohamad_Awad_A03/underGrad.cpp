#include <iostream>
#include <fstream>
#include "underGrad.h"
#include "Student.h"

using namespace std;

underGrad::underGrad() {
    ProgramName = "";
    NumCourses = 0;
    yearStanding = 0;
    classOf = 0;
}

string underGrad::calcGPA() {
    if (GPA < 50) {
        return "F";
    }

    else if (GPA >= 50 && GPA < 53) {
        return "D-";
    }

    else if (GPA >= 53 && GPA < 57) {
        return "D";
    }

    else if (GPA >= 57 && GPA < 60) {
        return "D+";
    }

    else if (GPA >= 60 && GPA < 63) {
        return "C-";
    }

    else if (GPA >= 63 && GPA < 67) {
        return "C";
    }

    else if (GPA >= 67 && GPA < 70) {
        return "C+";
    }

    else if (GPA >= 70 && GPA < 73) {
        return "B-";
    }

    else if (GPA >= 73 && GPA < 77) {
        return "B";
    }

    else if (GPA >= 77 && GPA < 80) {
        return "B+";
    }

    else if (GPA >= 80 && GPA < 85) {
        return "A-";
    }

    else if (GPA >= 85 && GPA < 90) {
        return "A";
    }

    else {
        return "A+";
    }
}

void underGrad::userInput() {
    cout << "Enter the student's program name:" << endl;
    cin >> ProgramName;
    cout << "Enter the number of courses the student is taking:" << endl;
    cin >> NumCourses;
    cout << "Enter the year standing of the student:" << endl;
    cin >> yearStanding;
    cout << "In which year will the student graduate?" << endl;
    cin >> classOf;
}

string underGrad::timeDecider() {
    if (regType == 0) {
        return "full-time";
    }

    else {
        return "part-time";
    }
}


void underGrad::printInfo() {
    cout << firstName << " " << lastName << " is a " << timeDecider() << " undergraduate student in the " << DepName <<
        " department, taking the " << ProgramName << " program." << endl << "They are taking " << NumCourses << " courses, are a year " <<
            yearStanding << " student with a GPA letter grade of " << calcGPA() << " and will graduate on " <<
                classOf << "." << endl;

    ofstream file1;
    file1.open("Student_Undergrad.csv");
    file1 << "First Name, Last Name, Status, Student Type, Part-Time // Full-Time, Department, Program, GPA, Letter Grade, Year Standing, Class Of \n";
    file1 << firstName << "," << lastName << "," << "Student" << "," << "Undergraduate" << "," << timeDecider() <<","<< DepName <<","<< ProgramName <<","<< GPA <<","<< calcGPA() <<","<< yearStanding <<","<< classOf << endl;
    file1.close();

    cout << endl <<  "Information successfully uploaded to Student_Undergrad.csv" << endl;
}

underGrad::~underGrad() {}
