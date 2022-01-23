////PROYECTO EQUIPO 5 UNIDAD 3////
int encender_apagar;
int botón;

void setup (){

  pinMode (0, OUTPUT); //Led Verde
  pinMode (1,OUTPUT); //Led rojo
  pinMode (2, OUTPUT); // pin 7A
  pinMode (3, OUTPUT); // pin 6B
  pinMode (4, OUTPUT); // pin 4C
  pinMode (5,OUTPUT); // pin 2D
  pinMode (6,OUTPUT); // pin 1E
  pinMode (7,OUTPUT); // pin 9F
  pinMode (8, OUTPUT); // pin 10G
  pinMode (9, OUTPUT); // pin 5DP
  pinMode (11,OUTPUT); //buzzer
  pinMode (12, OUTPUT); //relay
  pinMode (13, OUTPUT); //botón
  digitalWrite (9, 0); //puntaje apagado
  digitalWrite (12,1); //relay apagado

  encender_apagar = 1;


}

void loop () {

 botón = digitalRead (13);

 if (botón == HIGH) {
   encender_apagar = encender_apagar + 1;
   } else {encender_apagar = 1;}

if (apagado == 1){

  // apagar puntaje
   digitalWrite (0,0);
   digitalWrite (1,1);

   digitalWrite (11,0);
   delay (80);
   digitalWrite (11,0);
   digitalWrite (2,0);
   digitalWrite (3,0);
   digitalWrite (4,0);
   digitalWrite (5,0);
   digitalWrite (6,0);
   digitalWrite (7,0);
   digitalWrite (8,0);
}

if (encender_apagar == 2) {

//fase 1 del beep
 digitalWrite (9,0);
 digitalWrite (11,0);
 delay (600);
 digitalWrite (9,1);
 digitalWrite (11,1);
 delay (400);
 digitalWrite (9,0);
  digitalWrite (11,0);
 delay (400);
  digitalWrite (9,1);
   digitalWrite (11,1);
  delay (400);
  digitalWrite (9,0);
  digitalWrite (11,0);
 delay (400);
 digitalWrite (9, 1);
  digitalWrite (11,1);
 delay (400);
  digitalWrite (9,0);
  digitalWrite (11,0);
  delay (400);
digitalWrite (1,0);//led del beep
digitalWrite (0,1);//----
digitalWrite (9,1);
 digitalWrite (11,1);
delay (100);
 digitalWrite (9, 0);
 digitalWrite (11,0);
 delay (100);
 digitalWrite (9,1);
 digitalWrite (11,1);
delay (100);
 digitalWrite (9,0);
digitalWrite (11,0);
delay (1000);

//Accionamiento del puntaje
  // 9
digitalWrite(11,1);
delay (80);
digitalWrite (11,0);
digitalWrite (2, 1);
digitalWrite (3,1);
digitalWrite (4,1);
digitalWrite (5,1);
digitalWrite (6,0);
digitalWrite (7,1);
digitalWrite (8,1);
delay (1000);
// 8
digitalWrite (11,1);
delay (80);
digitalWrite (11,0);
digitalWrite (2,1);
digitalWrite (3,1);
digitalWrite (4, 1);
digitalWrite (5,1);
digitalWrite (6, 1);
digitalWrite (7,1);
digitalWrite (8,1);
delay (1000);
 // 7
digitalWrite (11,1);
delay (80);
digitalWrite (11,0);
digitalWrite (2, 1);
digitalWrite (3, 1);
digitalWrite (4,1);
digitalWrite (5,0);
digitalWrite (6,0);
digitalWrite (7,0);
digitalWrite (8,0);
delay (1000);
// 6
digitalWrite (11,1);
delay (80);
digitalWrite (11,0);
digitalWrite (2,1);
digitalWrite (3,0);
digitalWrite (4,1);
digitalWrite (5,1);
digitalWrite (6, 1);
digitalWrite (7,1);
digitalWrite (8,1);
delay (1000);
// 5
digitalWrite (11,1);
delay (80);
digitalWrite (11,0);
digitalWrite (2, 1);
digitalWrite (3,0);
digitalWrite (4,1);
digitalWrite (5, 1);
digitalWrite (6,0);
digitalWrite (7, 1);
digitalWrite (8,1);
delay (1000);
// 4
digitalWrite (11,1);
delay (80);
digitalWrite (11,0);
digitalWrite (2,0);
digitalWrite (3,1);
digitalWrite (4,1);
digitalWrite (5,0);
digitalWrite (6,0);
digitalWrite (7,1);
digitalWrite (8,1);
delay (1000);
// 3
digitalWrite (11,1);
delay (40);
digitalWrite (11,0);
digitalWrite (2,1);
digitalWrite (3,1);
digitalWrite (4,1);
digitalWrite (5, 1);
digitalWrite (6,0);
digitalWrite (7,0);
digitalWrite (8,1);
delay (1000);
// 2
digitalWrite (11,1);
delay (40);
digitalWrite (11,0);
digitalWrite (2,1);
digitalWrite (3, 1);
digitalWrite (4,0);
digitalWrite (5,1);
digitalWrite (6,1);
digitalWrite (7,0);
digitalWrite (8,1);
delay (1000) ;
// 1
digitalWrite (11,1);
delay (40);
digitalWrite (11,0);
digitalWrite (2,0);
digitalWrite (3, 1);
digitalWrite (4,1);
digitalWrite (5,0);
digitalWrite (6,0);
digitalWrite (7,0);
digitalWrite (8,0);
delay (1000);
// 0
digitalWrite (11,1);
digitalWrite (2,1);
digitalWrite (3,1);
digitalWrite (4,1);
digitalWrite (5, 1);
digitalWrite (6,1);
digitalWrite (7,1);
digitalWrite (8,0);
delay (1000);
// Accionamiento del relay
digitalWrite (11,0);
digitalWrite (2,0);
digitalWrite (3,0);
digitalWrite (4,0);
digitalWrite (5,0);
digitalWrite (6,0);
digitalWrite (7,0);
digitalWrite (8,0);
digitalWrite (12,0);
delay (1
00);
digitalWrite (9,1);
    digitalWrite (11,1);
   delay (100);
    digitalWrite (9,0);
     digitalWrite (11,0);
     delay (100);
    digitalWrite (9, 1);
     digitalWrite (11,1);
   delay (100);
     digitalWrite (9,0);
     digitalWrite (11,0);
    delay (100);
  digitalWrite (12,1);
  }


}
