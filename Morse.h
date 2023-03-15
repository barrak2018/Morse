#ifndef Morse_h
#define Morse_h

#include <Arduino.h>

class Morse
{
private:
    int _pin;
    int _dotDelay;
    void _dot();
    void _dash();
    void _dictionary(char letter);

public:
    Morse(int pin, int dotTime = 45);
    void print();

};



#endif