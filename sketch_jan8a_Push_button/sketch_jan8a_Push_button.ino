int s=6;
int x;
int led=7;

void setup() 
{

  Serial.begin(9600);
  pinMode(6,INPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  x=digitalRead(s);
  Serial.println(x);
  
if(x==0)
{
  digitalWrite(7,LOW);
}

else
{ 
  digitalWrite(7,HIGH);
}

}