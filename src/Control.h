#ifndef CONTROL_H
#define CONTROL_H

#include <Arduino.h>


class Control {
	public:
	Control(); //конструктор
	bool pressure(uint8_t pin); //проверка нажатия кнопки
	int rotate (char pin); //считывание угла поворота потенциометра
};

#endif
