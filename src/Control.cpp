#include Control.h

Control::Control(){
	Bounce nc = Bounce();
}
bool Control::pressure(uint8_t pin){
	pinMode(pin, INPUT);
	nc.attach(pin);
	nc.update();
	int val = nc.read();
	if (val = HIGH){
		return true;
	}else{
		return false;
	}
}
int Control::rotate(char pin){
	pinMode(pin, INPUT);
	int val = analogRead(pin);
	return val;
}
