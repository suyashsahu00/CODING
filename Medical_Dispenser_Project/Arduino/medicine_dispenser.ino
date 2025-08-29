#include <Servo.h>

Servo servoPainkiller;
Servo servoParacetamol;

String inputString = "";
bool stringComplete = false;

// Painkiller pins (Green Box)
const int servoPin1 = 9;
const int ledPin1 = 10;

// Paracetamol pins (Blue Box)
const int servoPin2 = 6;
const int ledPin2 = 11;

void setup() {
  Serial.begin(9600);

  servoPainkiller.attach(servoPin1);
  pinMode(ledPin1, OUTPUT);

  servoParacetamol.attach(servoPin2);
  pinMode(ledPin2, OUTPUT);

  servoPainkiller.write(0);
  servoParacetamol.write(0);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);

  inputString.reserve(50);
}

void loop() {
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    if (inChar == '\n') {
      stringComplete = true;
    } else {
      inputString += inChar;
    }
  }

  if (stringComplete) {
    inputString.trim(); // Extra safety

    Serial.print("Received command: ");
    Serial.println(inputString);

    if (inputString.equalsIgnoreCase("painkiller")) {
      handleAction(servoPainkiller, ledPin1);
    }
    else if (inputString.equalsIgnoreCase("paracetamol")) {
      handleAction(servoParacetamol, ledPin2);
    }
    else {
      Serial.println("⚠ Unknown command!");
    }

    inputString = "";
    stringComplete = false;
  }
}

void handleAction(Servo &servoMotor, int ledPin) {
  servoMotor.write(90);
  digitalWrite(ledPin, HIGH);
  delay(3000);
  servoMotor.write(0);
  digitalWrite(ledPin, LOW);
}
