#include "Die.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Die::Die(){
  numSides = 6;
  value = rand() % 6 + 1;
}

Die::Die(int numSides){
    this->numSides = numSides;
    value = rand() % this->numSides + 1;
}

void Die::roll(){
     value = rand() % this->numSides + 1;

}

int Die::getValue(){
    return value;
}

void Die::setValue(int forcedValue){
    value = forcedValue;
}

