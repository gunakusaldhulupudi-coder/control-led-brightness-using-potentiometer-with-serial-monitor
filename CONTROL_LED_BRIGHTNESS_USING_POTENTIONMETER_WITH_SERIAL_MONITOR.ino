#define LED_PIN 11
#define POTENTIOMETER_PIN A2
int previousbrightness = 0;


void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);




}

void loop() {
  int POTENTIOMETER_VALUE = analogRead(POTENTIOMETER_PIN);
  int brightness = POTENTIOMETER_VALUE/4;
  analogWrite(LED_PIN, brightness);
  if(brightness > previousbrightness){
    Serial.println("LED BRIGHTNESS IS INCREASING");
  }
    

  else if((brightness < previousbrightness)){
    Serial.println("LED BRIGHTNESS IS DECREASING");
    
  }

  
  

 
   

  


}
