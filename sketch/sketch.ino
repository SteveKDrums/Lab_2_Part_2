// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  // set digital pin 2 as an output:
  pinMode(2, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int knobValue = analogRead(A0);

  // print out the value you read:
  Serial.println(knobValue);

  // if the knobValue is greater than 400, turn on the LED
  if (knobValue > 400) {
    digitalWrite(2, HIGH); // turn on LED
  } else {
    digitalWrite(2, LOW);  // turn off LED
  }

  // small delay to stabilize readings
  delay(100);
}
