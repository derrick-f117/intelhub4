
int trigPin=3;
int echoPin=4;
int pin=9;
int pinTravelTime;
float pinTravelDistace;
float target;
int dt=5000;
void setup() {
pinMode(pin, OUTPUT);  
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(10);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
delayMicroseconds(10);
pinTravelTime=pulseIn(echoPin, HIGH);
delay(10);
pinTravelDistace=(pinTravelTime*4./114);


target=(pinTravelDistace/2);
Serial.println(target);

if(target<100){
analogWrite(pin, 255);
}

if(target>50){
analogWrite(pin,100);
}
if(target>100){
analogWrite(pin,0);
} 
if(target<0){
analogWrite(pin,0);
} 
if(target<72 && target>70){
analogWrite(pin,0);{
}

