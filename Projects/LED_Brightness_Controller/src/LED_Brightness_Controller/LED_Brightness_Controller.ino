int LEDPin = 5;
int sensorPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(sensorPin);
  int LEDBrightness = map(potValue, 0, 1023, 0, 255);
  analogWrite(LEDPin, LEDBrightness);
  
  Serial.print("\nPot Value: ");
  Serial.print(LEDBrightness);
  delay(200);
  
}
