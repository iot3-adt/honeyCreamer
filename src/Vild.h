#ifndef VILD_H
#define VILD_H

#include <Wire.h> 
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

class Vild {
  LiquidCrystal_I2C *led;


  public:
    Vild();
    void outStr (int , String);  //входные параметры: номер строки индикатора, строка
};


#endif