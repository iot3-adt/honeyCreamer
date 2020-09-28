#ifndef TEMPERATURA_H
#define TEMPERATURA_H

#include <Arduino.h>
#include <DallasTemperature.h>
#include <OneWire.h>

class Temperatura {
	public:
	Temperatura(uint8_t pin, char deviceAddress);
	float getTemperatura();
}
#endif
