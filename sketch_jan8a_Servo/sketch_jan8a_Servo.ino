#include<Servo.h>
Servo s1;
int led1=7;
int led2=4;
int led3=2;
void setup() {

  s1.attach(6);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() {
 
 /*s1.write(0);
 delay(1000);
 s1.write(180);
 delay(1000);
 s1.write(0);
 delay(1000);*/

  for (int i=0; i<= 180; i+= 1)
   {
    s1.write(i);             
    delay(20);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);    
    digitalWrite(led3,HIGH);
     
   }
    
 for (int i=180; i>=0; i-= 1) 
   { 
    s1.write(i);            
    delay(20); 
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW); 
   }
}
