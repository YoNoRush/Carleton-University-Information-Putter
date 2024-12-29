#include <iostream>
#include "Person.h"

using namespace std;

int main() {

    Person person1;
    person1.userInput();
    person1.printInfo();
    person1.decider(); // Stand-alone function that will be used to call different versions of the derived class based
                       // on which version is being passed to it (Also included in both derived classes (Faculty & Student))

    return 0;
}
