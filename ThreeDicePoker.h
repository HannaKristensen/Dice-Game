#ifndef THREEDICEPOKER_H
#define THREEDICEPOKER_H
#include "Die.h"

class ThreeDicePoker :public Die {
  private:

protected:
    Die dice [3];
public:
    ThreeDicePoker ();
    int getDieValue (int dieNumber);
    void rollDie (int number);
    void rollAll ();
    int getScore ();
    void setDie (int dieNumber, int value);
};

#endif // THREEDICEPOKER_H
