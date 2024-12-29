#include "Person.h"

#ifndef FACULTY_H
#define FACULTY_H

using namespace std;

class Faculty : public Person {
public:
    Faculty();
    ~Faculty();
    virtual void printInfo();
    virtual void userInput();
    string fullPartChecker();
    virtual void decider();
protected:
    string DepName;
    bool facultyType;
};



#endif //FACULTY_H
