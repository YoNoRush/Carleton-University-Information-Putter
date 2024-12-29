#include "Student.h"

#ifndef GRADUATE_H
#define GRADUATE_H

using namespace std;

class Graduate : public Student {
public:
    Graduate();
    ~Graduate();
    virtual void printInfo();
    virtual void userInput();
    string calcGPA();
    string timeDecider();
    bool TAType();
    string TATypeSetter();

protected:
    string supervisorName;
    int numPublications;
    bool TA;
    int hoursAssigned;
};



#endif //GRADUATE_H
