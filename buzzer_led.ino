const int TOUCH_SENSOR_PIN  = 7;
const int LED_PIN           = 2;

void setup() {
  Serial.begin(9600);            
  pinMode(TOUCH_SENSOR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);      
}

void loop() {
  int touchState = digitalRead(TOUCH_SENSOR_PIN); 

  if (touchState == HIGH) {
    Serial.println("The sensor is being touched");;
    digitalWrite(LED_PIN, HIGH); 
  }
  else
  if (touchState == LOW) {
    Serial.println("The sensor is untouched");
    digitalWrite(LED_PIN, LOW);
  }
}
