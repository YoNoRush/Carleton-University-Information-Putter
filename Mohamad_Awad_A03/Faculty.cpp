#include "Faculty.h"
#include "Person.h"
#include "FullTime.h"
#include "PartTime.h"


using namespace std;

Faculty::Faculty() {
    DepName = "";
    facultyType = false;
}

void Faculty::userInput() {
    cout << "What is the faculty member's department? :" << endl;
    cin >> DepName;
    cout << "Is the member full-time (0) or part-time (1) ? :" << endl;
    cin >> facultyType;
}

string Faculty::fullPartChecker() {
    if (facultyType == 0) {
        return "full-time";
    }

    else if (facultyType == 1) {
        return "part-time";
    }
}


void Faculty::printInfo() {
    cout << firstName << " " << lastName << " is a " << fullPartChecker() << " faculty member who works in the " << DepName <<
        " department." << endl << endl;
}

void Faculty::decider() {
    if (facultyType == 0) {
        FullTime fulltime1;
        fulltime1.firstName = firstName;
        fulltime1.lastName = lastName;
        fulltime1.DepName = DepName;
        fulltime1.userInput();
        fulltime1.printInfo();
    }

    else if (facultyType == 1) {
        PartTime parttime1;
        parttime1.firstName = firstName;
        parttime1.lastName = lastName;
        parttime1.DepName = DepName;
        parttime1.userInput();
        parttime1.printInfo();
    }

    else {
        cout << "ERROR" << endl;
    }
}


Faculty::~Faculty() {}

