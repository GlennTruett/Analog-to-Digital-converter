#include <Arduino.h>

int ledDel = 0;
int potRead = 0;
int compB;
int buttonPress = LOW;
const int buttonPin = 48;
int Pot = A1;
int photoCount = 0;
const int photoRes = A0;
int segment_A = 40;
int segment_B = 38;
int segment_DP = 36;
int segment_C = 34;
int segment_D = 32;
int segment_E = 30;
int segment_F = 28;
int segment_G = 26;
void Zero(void);
void One(void);
void Two(void);
void Three(void);
void Four(void);
void Five(void);
void Six(void);
void Seven(void);
void Eight(void);
void Nine(void);
void Random(void);

void setup() {
  // put your setup code here, to run once:

  pinMode(segment_A, OUTPUT);
  pinMode(segment_B, OUTPUT);
  pinMode(segment_DP, OUTPUT);
  pinMode(segment_C, OUTPUT);
  pinMode(segment_D, OUTPUT);
  pinMode(segment_E, OUTPUT);
  pinMode(segment_F, OUTPUT);
  pinMode(segment_G, OUTPUT);
  pinMode(photoRes, INPUT);
  pinMode(Pot, INPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:



  buttonPress = digitalRead(buttonPin);
  Serial.print("buttonPress ");
  Serial.println(buttonPress);

  if (buttonPress == HIGH) {

    photoCount = analogRead(photoRes);
    Serial.print("Photo sensor ");
    Serial.println(photoCount);



    if (photoCount <= 149 && photoCount >= 50) {
      One();
    }

    if (photoCount <= 199 && photoCount >= 150) {
      Two();
    }

    if (photoCount <= 249 && photoCount >= 200) {
      Three();
    }

    if (photoCount <= 299 && photoCount >= 250) {
      Four();
    }

    if (photoCount <= 349 && photoCount >= 300) {
      Five();
    }

    if (photoCount <= 399 && photoCount >= 350) {
      Six();
    }

    if (photoCount <= 549 && photoCount >= 400) {
      Seven();
    }

    if (photoCount <= 599 && photoCount >= 550) {
      Eight();
    }

    if (photoCount <= 700 && photoCount >= 600) {
      Nine();
    }


    if (photoCount <= 49 && photoCount >= 0) {
      Serial.println("Null");
      Zero();
    }

    delay(1000);
    
  }


  else {
    Random();
   /* potRead = analogRead(Pot);
    Serial.print("Potentiometer reading  ");
    Serial.println(potRead);*/
  }


  /*Nine();
  delay(1000);
  Eight();
  delay(1000);
  Seven();
  delay(1000);
  Six();
  delay(1000);
  Five();
  delay(1000);
  Four();
  delay(1000);
  Three();
  delay(1000);
  Two();
  delay(1000);
  One();
  delay(1000);
  Zero();
  delay(1000);
}*/
}


void Zero() {
  int pinsOn[] = { segment_A, segment_B, segment_C, segment_D, segment_E, segment_F };
  int PinsOff[] = { segment_G, segment_DP };
  for (int i = 0; i < sizeof(pinsOn) / sizeof(int); i++) {
    pinMode(pinsOn[i], OUTPUT);     // Set each pin as OUTPUT
    digitalWrite(pinsOn[i], HIGH);  // Set each pin to HIGH
  }
  for (int i = 0; i < sizeof(PinsOff) / sizeof(int); i++) {
    pinMode(PinsOff[i], OUTPUT);    // Set each pin as OUTPUT
    digitalWrite(PinsOff[i], LOW);  // Set each pin to LOW
  }
}
//function forms a 1 on the 7 segment display
void One() {
  int pinsOn[] = { segment_B, segment_C };
  int PinsOff[] = { segment_A, segment_G, segment_DP, segment_D, segment_E, segment_F };
  for (int i = 0; i < sizeof(pinsOn) / sizeof(int); i++) {
    pinMode(pinsOn[i], OUTPUT);     // Set each pin as OUTPUT
    digitalWrite(pinsOn[i], HIGH);  // Set each pin to HIGH
  }
  for (int i = 0; i < sizeof(PinsOff) / sizeof(int); i++) {
    pinMode(PinsOff[i], OUTPUT);    // Set each pin as OUTPUT
    digitalWrite(PinsOff[i], LOW);  // Set each pin to LOW
  }
}
//function forms a 2 on the 7 segment display
void Two() {
  int pinsOn[] = { segment_B, segment_A, segment_G, segment_D, segment_E };
  int PinsOff[] = { segment_C, segment_F, segment_DP };
  for (int i = 0; i < sizeof(pinsOn) / sizeof(int); i++) {
    pinMode(pinsOn[i], OUTPUT);     // Set each pin as OUTPUT
    digitalWrite(pinsOn[i], HIGH);  // Set each pin to HIGH
  }
  for (int i = 0; i < sizeof(PinsOff) / sizeof(int); i++) {
    pinMode(PinsOff[i], OUTPUT);    // Set each pin as OUTPUT
    digitalWrite(PinsOff[i], LOW);  // Set each pin to LOW
  }
}
//function forms a 3 on the 7 segment display
void Three() {
  int pinsOn[] = { segment_B, segment_A, segment_C, segment_D, segment_G };
  int PinsOff[] = { segment_DP, segment_F, segment_E };
  for (int i = 0; i < sizeof(pinsOn) / sizeof(int); i++) {
    pinMode(pinsOn[i], OUTPUT);     // Set each pin as OUTPUT
    digitalWrite(pinsOn[i], HIGH);  // Set each pin to HIGH
  }
  for (int i = 0; i < sizeof(PinsOff) / sizeof(int); i++) {
    pinMode(PinsOff[i], OUTPUT);    // Set each pin as OUTPUT
    digitalWrite(PinsOff[i], LOW);  // Set each pin to LOW
  }
}
//function forms a 4 on the 7 segment display
void Four() {
  int pinsOn[] = { segment_C, segment_F, segment_B, segment_G };
  int PinsOff[] = { segment_A, segment_DP, segment_D, segment_E };
  for (int i = 0; i < sizeof(pinsOn) / sizeof(int); i++) {
    pinMode(pinsOn[i], OUTPUT);     // Set each pin as OUTPUT
    digitalWrite(pinsOn[i], HIGH);  // Set each pin to HIGH
  }
  for (int i = 0; i < sizeof(PinsOff) / sizeof(int); i++) {
    pinMode(PinsOff[i], OUTPUT);    // Set each pin as OUTPUT
    digitalWrite(PinsOff[i], LOW);  // Set each pin to LOW
  }
}
//function forms a 5 on the 7 segment display
void Five() {
  int pinsOn[] = { segment_A, segment_G, segment_C, segment_F, segment_D };
  int PinsOff[] = { segment_B, segment_E, segment_DP };
  for (int i = 0; i < sizeof(pinsOn) / sizeof(int); i++) {
    pinMode(pinsOn[i], OUTPUT);     // Set each pin as OUTPUT
    digitalWrite(pinsOn[i], HIGH);  // Set each pin to HIGH
  }
  for (int i = 0; i < sizeof(PinsOff) / sizeof(int); i++) {
    pinMode(PinsOff[i], OUTPUT);    // Set each pin as OUTPUT
    digitalWrite(PinsOff[i], LOW);  // Set each pin to LOW
  }
}
//function forms a 6 on the 7 segment display
void Six() {
  int pinsOn[] = { segment_C, segment_F, segment_A, segment_G, segment_D, segment_E };
  int PinsOff[] = { segment_B, segment_DP };
  for (int i = 0; i < sizeof(pinsOn) / sizeof(int); i++) {
    pinMode(pinsOn[i], OUTPUT);     // Set each pin as OUTPUT
    digitalWrite(pinsOn[i], HIGH);  // Set each pin to HIGH
  }
  for (int i = 0; i < sizeof(PinsOff) / sizeof(int); i++) {
    pinMode(PinsOff[i], OUTPUT);    // Set each pin as OUTPUT
    digitalWrite(PinsOff[i], LOW);  // Set each pin to LOW
  }
}
//function forms a 7 on the 7 segment display
void Seven() {
  int pinsOn[] = { segment_B, segment_A, segment_C };
  int PinsOff[] = { segment_G, segment_DP, segment_D, segment_E, segment_F };
  for (int i = 0; i < sizeof(pinsOn) / sizeof(int); i++) {
    pinMode(pinsOn[i], OUTPUT);     // Set each pin as OUTPUT
    digitalWrite(pinsOn[i], HIGH);  // Set each pin to HIGH
  }
  for (int i = 0; i < sizeof(PinsOff) / sizeof(int); i++) {
    pinMode(PinsOff[i], OUTPUT);    // Set each pin as OUTPUT
    digitalWrite(PinsOff[i], LOW);  // Set each pin to LOW
  }
}
//function forms a 8 on the 7 segment display
void Eight() {
  int pinsOn[] = { segment_B, segment_A, segment_G, segment_D, segment_E, segment_C, segment_F };
  int PinsOff[] = { segment_DP };
  for (int i = 0; i < sizeof(pinsOn) / sizeof(int); i++) {
    pinMode(pinsOn[i], OUTPUT);     // Set each pin as OUTPUT
    digitalWrite(pinsOn[i], HIGH);  // Set each pin to HIGH
  }
  for (int i = 0; i < sizeof(PinsOff) / sizeof(int); i++) {
    pinMode(PinsOff[i], OUTPUT);    // Set each pin as OUTPUT
    digitalWrite(PinsOff[i], LOW);  // Set each pin to LOW
  }
}
//function forms a 9 on the 7 segment display
void Nine() {
  int pinsOn[] = { segment_B, segment_A, segment_G, segment_D, segment_C, segment_F };
  int PinsOff[] = { segment_DP, segment_E };
  for (int i = 0; i < sizeof(pinsOn) / sizeof(int); i++) {
    pinMode(pinsOn[i], OUTPUT);     // Set each pin as OUTPUT
    digitalWrite(pinsOn[i], HIGH);  // Set each pin to HIGH
  }
  for (int i = 0; i < sizeof(PinsOff) / sizeof(int); i++) {
    pinMode(PinsOff[i], OUTPUT);    // Set each pin as OUTPUT
    digitalWrite(PinsOff[i], LOW);  // Set each pin to LOW
  }
}


void Random() {




  potRead = analogRead(Pot);
  Serial.println("Potentiometer reading");
  Serial.println(potRead);

  if (potRead <= 780 && potRead >= 500) {
    ledDel = 100;
  }

  if (potRead <= 499 && potRead >= 300) {
    ledDel = 200;
  }

  if (potRead <= 299 && potRead >= 200) {
    ledDel = 300;
  }

  if (potRead <= 199 && potRead >= 100) {
    ledDel = 400;
  }

  if (potRead <= 99 && potRead >= 0) {
    ledDel = 500;
  }


  digitalWrite(segment_A, HIGH);
  delay(ledDel);
  digitalWrite(segment_A, LOW);

  digitalWrite(segment_B, HIGH);
  delay(ledDel);
  digitalWrite(segment_B, LOW);

  digitalWrite(segment_C, HIGH);
  delay(ledDel);
  digitalWrite(segment_C, LOW);

  digitalWrite(segment_D, HIGH);
  delay(ledDel);
  digitalWrite(segment_D, LOW);

  digitalWrite(segment_E, HIGH);
  delay(ledDel);
  digitalWrite(segment_E, LOW);

  digitalWrite(segment_F, HIGH);
  delay(ledDel);
  digitalWrite(segment_F, LOW);

  digitalWrite(segment_G, HIGH);
  delay(ledDel);
  digitalWrite(segment_G, LOW);
}
