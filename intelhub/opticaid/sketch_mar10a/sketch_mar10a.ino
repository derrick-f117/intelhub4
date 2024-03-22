int pin=11;

void Setup(){
pinMode(pin, OUTPUT);
}
void Loop(){

analogWrite(pin,255);
}

