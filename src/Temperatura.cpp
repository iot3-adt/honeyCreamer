#include Temperatura.h
//#####################################
Temperatura::Temperatura(uint8_t pin, char deviceAddress) {
	OneWire oneWire(pin);                                       // вход датчиков 18b20, аналоговый А1, он же 15 цифровой 
	DallasTemperature ds(&oneWire);
}
//-------------------------------------
float Temperatura::getTemperatura(){
	ds.begin();
	float tempC = ds.getTempC(deviceAddress)
	return tempC;
}
