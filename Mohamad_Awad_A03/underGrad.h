//
// Created by hamou on 2024-07-29.
//

#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include "Student.h"

using namespace std;

class underGrad : public Student {
public:
    underGrad();
    ~underGrad();
    virtual void printInfo();
    virtual void userInput();
    string calcGPA();
    string timeDecider();

protected:
    string ProgramName;
    int NumCourses;
    int yearStanding;
    int classOf;
};



#endif //UNDERGRAD_H
