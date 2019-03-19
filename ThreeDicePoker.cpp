#include "ThreeDicePoker.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

ThreeDicePoker::ThreeDicePoker () {

}

int ThreeDicePoker::getDieValue (int dieNumber) {
    return dice[dieNumber].getValue ();
}

void ThreeDicePoker::rollDie (int number) {
    dice[number].setValue (rand() % numSides + 1);
 }

void ThreeDicePoker::rollAll () {
    dice[0].setValue (rand() % numSides + 1);
    dice[1].setValue (rand() % numSides + 1);
    dice[2].setValue (rand() % numSides + 1);
}

int ThreeDicePoker::getScore () {
    if (dice[0].getValue() == dice[1].getValue() && dice[1].getValue() == dice[2].getValue()) {
        return 1000;
    }
    if (dice[0].getValue() == dice[1].getValue()) {
        return 40*dice[0].getValue();
    }
    if (dice[1].getValue() == dice[2].getValue()) {
        return 40*dice[1].getValue();
    }
    if (dice[2].getValue() == dice[0].getValue()) {
        return 40*dice[2].getValue();
    }
    if (dice[0].getValue() == dice[1].getValue() - 1 && dice[1].getValue() == dice[2].getValue() - 1) {
        return 400;
    }
    if (dice[1].getValue() == dice[2].getValue() - 1 && dice[2].getValue() == dice[0].getValue() - 1) {
        return 400;
    }
    if (dice[2].getValue() == dice[1].getValue() - 1 && dice[1].getValue() == dice[0].getValue() - 1) {
        return 400;
    }
    if (dice[0].getValue() == dice[2].getValue() - 1 && dice[2].getValue() == dice[1].getValue() - 1) {
        return 400;
    }
    if (dice[1].getValue() == dice[0].getValue() - 1 && dice[0].getValue() == dice[2].getValue() - 1) {
        return 400;
    }
    if (dice[2].getValue() == dice[0].getValue() - 1 && dice[0].getValue() == dice[1].getValue() - 1) {
        return 400;
    }
    else {
        if (dice[0].getValue() > dice[1].getValue() && dice[0].getValue() > dice[2].getValue()) {
            return dice[0].getValue()*10;
        }
        if (dice[1].getValue() > dice[0].getValue() && dice[1].getValue() > dice[2].getValue()) {
            return dice[1].getValue()*10;
        }
        if (dice[2].getValue() > dice[1].getValue() && dice[2].getValue() > dice[0].getValue()) {
            return dice[2].getValue()*10;
         }
    }
}

void ThreeDicePoker::setDie (int dieNumber, int value) {
    dice[dieNumber].setValue(value);
}
