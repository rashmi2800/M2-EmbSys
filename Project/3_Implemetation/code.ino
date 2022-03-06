#define trigPin 3
#define echoPin 2
#define buzzPin 12
void setup()
  {
    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
    pinMode(buzzPin, OUTPUT);
  }
  
  long duration,distance;

void loop()
{
  digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    duration=pulseIn(echoPin,HIGH);
    distance=(duration/20) / 29.1;
    
    if (distance <= 10 && distance >=0 ) 
    {
            digitalWrite(buzzPin, HIGH);
        delay(1000);
    }
    else{
      digitalWrite(buzzPin, LOW);
      delay(1000);
    }

}
