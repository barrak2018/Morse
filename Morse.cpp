#include "Morse.h"
#include <Arduino.h>


Morse::Morse(int pin, int dotTime){
    pinMode(pin, OUTPUT);
    _pin = pin;
    _dotDelay = dotTime;
}

void Morse::_dot(){
    tone(_pin, 900, _dotDelay);
}

void Morse::_dictionary(char letter){

}