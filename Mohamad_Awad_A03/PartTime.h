#include "Faculty.h"

#ifndef PARTTIME_H
#define PARTTIME_H

class PartTime : public Faculty {
public:
    PartTime();
    ~PartTime();
    virtual float salary();
    virtual void printInfo();
    virtual void userInput();
protected:
    int hoursWorked;
    float hourlyRate;
};



#endif //PARTTIME_H
