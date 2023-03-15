#include "Morse.h"
#include <Arduino.h>


Morse::Morse(int pin, int dotTime){
    pinMode(pin, OUTPUT);
    _pin = pin;
    _dotDelay = dotTime;
}

void Morse::_dot(){
    tone(_pin, 900, _dotDelay);
    delay(_dotDelay);
}

void Morse::_dash(){
    tone(_pin, 900, _dotDelay*3);
    delay(_dotDelay*3);
}

void Morse::_dictionary(char letter){
    switch (letter) {

        




        case '_':
          // do something
          break;
        case '-':
          // do something
          break;
        case '.':
            _dot();
            delay(_dotDelay * 3);
            break;
        case ' ':
            _dot();
            delay((_dotDelay * 3)*3);
            break;
        default:
          // do something
    }
}