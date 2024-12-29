#include "Faculty.h"

#ifndef FULLTIME_H
#define FULLTIME_H

class FullTime : public Faculty {
public:
    FullTime();
    ~FullTime();
    virtual float salary();
    virtual void printInfo();
    virtual void userInput();
protected:
    int officeExten;
    int BaseSalary;
    int yearsExp;
};



#endif //FULLTIME_H
