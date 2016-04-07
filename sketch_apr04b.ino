/*
 *  PIR sensor 
 */

 int ledPin=13;     //choose the pin for led
 int inputPin=2;   //choose the input pin(for PIR in)
 int pirState=LOW; //we start, assuming no motion detecting
 int val=0;

 void setup()
 {
  pinMode(ledPin, OUTPUT);
   pinMode(inputPin, INPUT);
   Serial.begin(9600);
 }

void loop()
{
  val=digitalRead(inputPin);
  if(val==HIGH){;
  digitalWrite(ledPin,HIGH);
  {
    Serial.println("Motion detected");
    delay(500);
    pirState=HIGH;
  }
}
else
{
   digitalWrite(ledPin,LOW);
   if(pirState==HIGH){
   Serial.println("Motion ended");
   delay(500);
    pirState=LOW;
}
}}

