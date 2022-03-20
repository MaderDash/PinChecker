/*
  Project:          Led pin Sniffer
  Description:      Looks to find the pin numbers on esp boards.
  Creation date:    03-19-2020 
  Author:           Maderdash
  License:          Beerware
*/
//Enter the lowest pin to scan in START_PIN.
//Enter the higest pin to scan in the END_PIN.
//Have nothing conected.

#define START_PIN 0 //<======
#define END_PIN 15  //<======


void setup() {
  Serial.begin(9600);
  Serial.println("starting the scan.")
  
  for (int count = START_PIN; count < END_PIN; count++) {
    pinMode(count, OUTPUT);
    delay(400);
  }
}

void loop() {
  for (int count = START_PIN; count < END_PIN; count++) {
    digitalWrite(count, HIGH);
    Serial.println("the pin that is HIGH out is... \t" + String(count));
    delay(400);
    digitalWrite(count, LOW);
    Serial.println("the pin that is LOW out is... \t" + String(count));
    delay(400);
  }
}