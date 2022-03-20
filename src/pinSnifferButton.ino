/*
  Project:          Button Pin Sniffer
  Description:      Looks to find the pin numbers on esp boards.
  Creation date:    03-20-2022
  Author:           Maderdash
  License:          Beerware
*/
//Enter the lowest pin to scan in START_PIN.
//Enter the last pin to scan in the END_PIN.
#define START_PIN 0 
#define END_PIN 15
void setup() {
  Serial.begin(9600);
  for (int count = START_PIN; count < END_PIN; count++) {
    pinMode(count, INPUT_PULLUP);
  }

}

void loop() {
  for (int count = START_PIN; count < END_PIN; count++) {
    if (digitalRead(count) == LOW);
    Serial.println("the pin that is grounded out is... " + String(count));
  }
}
