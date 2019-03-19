#ifndef DIE_H
#define DIE_H

class Die {
private:

protected:
    int numSides;
    int value;

public:
    Die();
    Die(int numSides);
    void roll();
    int getValue();
    void setValue(int forcedValue);
};

#endif // DIE_H
