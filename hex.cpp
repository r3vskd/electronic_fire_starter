switch1 = 2;
int switch2 = 3;

int SegmentG = 13;
int SegmentE = 12;
int SegmentD = 11;
int SegmentA = 10;
int SegmentB = 9;
int SegmentC = 8;
/* int EstadoSwitch1 = 0; */
int EstadoSwitch2 = 0;

void setup()
{
pinMode(SegmentG, OUTPUT);
pinMode(SegmentE, OUTPUT);
pinMode(SegmentD, OUTPUT);
pinMode(SegmentA, OUTPUT);
pinMode(SegmentB, OUTPUT);
pinMode(SegmentC, OUTPUT);
pinMode(switch1, INPUT);
pinMode(switch2, INPUT);
Serial.begin(9600);
}

void loop()
{

 EstadoSwitch1 = digitalRead(switch1);
EstadoSwitch2 = digitalRead(switch2);
// turn LED on:
if (EstadoSwitch1 == HIGH && EstadoSwitch2 == HIGH) {
digitalWrite(SegmentE, LOW);
digitalWrite(SegmentA, HIGH);
digitalWrite(SegmentB, HIGH);
digitalWrite(SegmentG, HIGH);
digitalWrite(SegmentC, HIGH);
digitalWrite(SegmentD, HIGH);
Serial.println("No 2 Binario");
}
else {
// turn LED off:
digitalWrite(SegmentA, LOW);
digitalWrite(SegmentB, LOW);
digitalWrite(SegmentG, LOW);
digitalWrite(SegmentC, LOW);
digitalWrite(SegmentD, LOW);
}

 // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
if (EstadoSwitch1 == HIGH && EstadoSwitch2 == LOW){
// turn LED on:
digitalWrite(SegmentB, HIGH);
digitalWrite(SegmentC, HIGH);
}
else
{
digitalWrite(SegmentB, LOW);
digitalWrite(SegmentC, LOW);
}
if (EstadoSwitch2 == HIGH && EstadoSwitch1 == LOW) {
// turn LED on:
digitalWrite(SegmentA, HIGH);
digitalWrite(SegmentB, HIGH);
digitalWrite(SegmentG, HIGH);
digitalWrite(SegmentE, HIGH);
digitalWrite(SegmentD, HIGH);
}
else {
// turn LED off:
digitalWrite(SegmentA, LOW);
digitalWrite(SegmentB, LOW);
digitalWrite(SegmentG, LOW);
digitalWrite(SegmentE, LOW);
digitalWrite(SegmentD, LOW);
}

}
