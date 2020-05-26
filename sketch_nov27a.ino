int trigPin = 10;
int echoPin = 9;
int trigPin1 = 8;
int echoPin1=11;
int revright = 4;      //REVerse motion of Right motor
int fwdleft = 7;      
int revleft= 6;       
int fwdright= 5;       //ForWarD motion of Right motor
int c = 0;

void setup() {
   Serial.begin(9600); 
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  long duration, distance,distance1,duration1;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  //Serial.print(distance);
  //Serial.println("CM");
  delay(10);
  digitalWrite(trigPin1,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin1, LOW);
  duration1=pulseIn(echoPin1, HIGH);
  distance1 =(duration1/2)/29.1;
  //Serial.print(distance);
  //Serial.println("CM");
  delay(10);
 
  
  if((distance>20 && distance1>20))
 {
  digitalWrite(5,HIGH);                               //       FORWARD
   digitalWrite(4,LOW);                               //        
   digitalWrite(6,LOW);                               //
   digitalWrite(7,HIGH);                              //
 }
 
  else if(distance<20 && distance1>20)  
 {
   digitalWrite(5,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);                                  //TURN LEFT
   digitalWrite(7,LOW);
                                            
 }
 else if(distance<20 && distance1<20)  
 {
   digitalWrite(5,LOW);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);                                  //TURN RIGHT
   digitalWrite(7,HIGH);
                                            
 }
 
}
