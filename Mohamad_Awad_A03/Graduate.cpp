#include <iostream>
#include <fstream>
#include "Graduate.h"
#include "Student.h"

using namespace std;

Graduate::Graduate() {
    supervisorName = "";
    numPublications = 0;
    TA = false;
    hoursAssigned = 0;
}

string Graduate::calcGPA() {
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

void Graduate::userInput() {
    cout << "Enter the student's supervisor's name:" << endl;
    cin >> supervisorName;
    cout << "How many publications does the student have:" << endl;
    cin >> numPublications;
    cout << "For their TA position, how many hours is the student assigned?" << endl;
    cin >> hoursAssigned;

}

void Graduate::printInfo() {
    cout << firstName << " " << lastName << " is a " << timeDecider() << " graduate student in the " << DepName <<
        " department with a GPA of " << calcGPA() << "." << endl <<"Their supervisor is " << supervisorName << " and they have " << numPublications << " publications. They are a " <<
            TATypeSetter() << " with " << hoursAssigned << " hours assigned." << endl;

    ofstream file1;
    file1.open("Student_graduate.csv");
    file1 << "First Name, Last Name, Status, Student Type, Part-Time // Full-Time, Department, Supervisor, Number of Publications, Half TA // Full TA , Hours Assigned, GPA, Letter Grade \n";
    file1 << firstName << "," << lastName << "," << "Student" << "," << "Graduate" << "," << timeDecider() <<","<< DepName << "," << supervisorName << "," << numPublications << "," << TATypeSetter() << "," << hoursAssigned << ","<< GPA <<","<< calcGPA() <<","<< endl;
    file1.close();

    cout << endl <<  "Information successfully uploaded to Student_graduate.csv" << endl;
}

string Graduate::TATypeSetter() {
    TAType();
    if (TA == false) {
        return "Full TA";
    }

    else {
        return "Half TA";
    }
}


string Graduate::timeDecider() {
    if (regType == 0) {
        return "full-time";
    }

    else {
        return "part-time";
    }
}

bool Graduate::TAType() {
    if (hoursAssigned >= 65) {
         return TA = false;
    }

    else {
         return TA = true;
    }
}



Graduate::~Graduate() {}