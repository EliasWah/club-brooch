#include <Arduino.h>
// Definiere die Pins für die grüne, rote, gelbe LED und den Button
const int greenLedPin = D1;
const int redLedPin = D3;
const int yellowLedPin = D4;
const int buttonPin = D5;

bool buttonPressed = false;

void setup() {
  // Initialisiere die Pins als Ausgänge bzw. Eingänge
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Der Button ist mit Ground verbunden, daher verwenden wir INPUT_PULLUP
  // Setze den Zufallszahlengenerator
  randomSeed(analogRead(0));
}

void loop() {
  // Überprüfe, ob der Button gedrückt ist
  if (digitalRead(buttonPin) == LOW) {
    // Wenn der Button gedrückt ist, schalte alle LEDs ein
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(redLedPin, HIGH);
    digitalWrite(yellowLedPin, HIGH);
    buttonPressed = true;
  } else {
    // Wenn der Button nicht gedrückt ist, verhalte dich wie zuvor (zufällige LED-Blinks)
    if (buttonPressed) {
      // Schalte alle LEDs aus
      digitalWrite(greenLedPin, LOW);
      digitalWrite(redLedPin, LOW);
      digitalWrite(yellowLedPin, LOW);
      buttonPressed = false;
    }

    // Wähle eine zufällige LED aus
    int randomLED = random(3); // 0: grün, 1: rot, 2: gelb
    
    // Schalte die ausgewählte LED ein
    switch (randomLED) {
      case 0:
        digitalWrite(greenLedPin, HIGH);
        delay(3000); // Warte für 3 Sekunden
        digitalWrite(greenLedPin, LOW);
        break;
      case 1:
        digitalWrite(redLedPin, HIGH);
        delay(3000); // Warte für 3 Sekunden
        digitalWrite(redLedPin, LOW);
        break;
      case 2:
        digitalWrite(yellowLedPin, HIGH);
        delay(3000); // Warte für 3 Sekunden
        digitalWrite(yellowLedPin, LOW);
        break;
    }
  }
}
